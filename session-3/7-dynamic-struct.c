#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring a struct
struct revshell {
  int id;
  char name[50];
  char payload[200];
};

// Dynamic struct example
// Usage:
// ./revshell_program id name
int main(int argc, char *argv[]) {

  printf("argc                    = %d\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("argv[%d]                 = %s\n", i, argv[i]);
  }

  // Normally, we would validate these user inputs
  // to prevent buffer overflows.
  int revshell_id = atoi(argv[1]);
  int size_argv2_inc_nullterm = strlen(argv[2]) + 1;
  printf("strlen(argv[2]) + 1     = %d\n", size_argv2_inc_nullterm);
  
  char *revshell_name = malloc(size_argv2_inc_nullterm);
  strcpy(revshell_name, argv[2]);
  printf("revshell_name           = %s\n", revshell_name);

  struct revshell *bash_devtcp;
  int revshell_size = sizeof *bash_devtcp;

  // Size greater than sum of component sizes
  // due to memory padding added by compiler to align
  // bytes evenly. Helps prevent hardware errors.
  printf("sizeof *bash_devtcp     = %d\n", revshell_size);
  printf("sizeof(struct revshell) = %d\n", sizeof(struct revshell));

  bash_devtcp = malloc(revshell_size);
  printf("sizeof *bash_devtcp     = %d\n", sizeof *bash_devtcp);

  bash_devtcp->id = revshell_id;
  strcpy(bash_devtcp->name, revshell_name);
  printf("bash_devtcp->id         = %d\n", bash_devtcp->id);
  printf("bash_devtcp->name       = %s\n", bash_devtcp->name);

}

