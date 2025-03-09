/*
A program to get user input.
Created by Daniel Gilbert on Jan 30, 2025.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void runPrompt();
int inputSubmitted(char *input, int len);
int inputTooLong(char *input, char *error);
void removeNewline(char *input); 
void flushStdin();
int exitPrompt(char *input);
void strtolower(char *str);

int main(void) {

  runPrompt();

  return 0;

}

void runPrompt() {

  printf("rtalk Console. Type /exit to exit.\n");

  char *messages[100];
  int message_id = 0;
  char input[202]; // 200 + '\n' + '\0'

  while (inputSubmitted(input, sizeof input)) {

    char error[100];
    if (inputTooLong(input, error)) {
      printf("%s\n", error);
      flushStdin();
      continue;
    }

    removeNewline(input);

    messages[message_id] = malloc(strlen(input) + 1);
    strcpy(messages[message_id], input);
    message_id++;
 
    if (exitPrompt(input)) {
      int i;
      for (i = 0; i < message_id; i++) {
        printf("%2d: %s\n", i, messages[i]);
        free(messages[i]);
      }
      break;
    }

  }

}

int inputSubmitted(char *input, int len) {

  printf("rtalk> ");

  int submitted = 0;
  if (fgets(input, len, stdin) != NULL) {
    submitted = 1;
  }

  return submitted;

}

int inputTooLong(char *input, char *error) {

  // If input does't contain newline from enter, it's too long. 
  int too_long = (strchr(input, '\n') == NULL);

  if (too_long) {
    char msg[] = "Error: Input too long";
    strcpy(error, msg);
  }

  return too_long;

}

void removeNewline(char *input) {
  
  int last_char = strlen(input) - 1;

  input[last_char] = '\0';

}

/*
Used in the event of buffer overflows.
Clears the input buffer.
*/
void flushStdin() {

  int ch; while ((ch = fgetc(stdin)) != '\n' && ch != EOF);

}

int exitPrompt(char *input) {

  strtolower(input);

  int exit_command = (strcmp(input, "/exit") == 0);
  int quit_command = (strcmp(input, "/quit") == 0);
  
  int exit_prompt = exit_command || quit_command;

  return exit_prompt;

}

void strtolower(char *str) {

  int i;
  for (i = 0; i < strlen(str) + 1; i++) {
    str[i] = tolower(str[i]);
  }

}

