#include <stdio.h>

// The boring stuff. Brace yourself... lol

int main(void) {

  // Single-line comment
  /* 
    Multi-line
    Comment
  */

  // You must declare variables
  // by the type of data they store.
  // You also must declare them prior to use.

  // E.g., If you need an integer, you can't just be like:
  // omg_python = 12345

  // You have to be like:
  // int c_robot_rock = 12345;

  // The reason for this is to specify
  // the amount of memory allocated for the var.
  // It also provides context
  // for how the data can be interpreted.

  // Common primitive types
  int     integer             = 1337;      // integers only
  float   decimal             = 3.14;      // 6 digits max
  double  long_decimal        = 99.99999;  // 15 digits max
  char    single_character    = 'a';

  // You can also add const
  // before a var to make it read-only or "constant".
  const int merherh = 5555555;

  // Data structures

  // Arrays (continuous blocks of memory)

  // a fixed array
  int     static_num_arr[5]    = {0, 1, 2, 3, 4};

  // a dynamically sized array
  int     dynamic_num_arr[]    = {0, 1, 2, 3, 4};

  // Don't get too excited.
  // Arrays of strings are way harder, lol.
  // We can get into that later...

  // Strings. All C strings must end
  // with a null byte \0 (0x00). This terminates the string.

  // character array, fixed size
  char    static_char_arr[9]        = "Omg kewl";

  // character array, dynamically sized
  char    dynamic_char_arr[]        = "Omg kewl";

  // string literal, stored in read-only memory
  char   *string_literal            = "Omg kewl";

  // Quick detour before we get too crazy....
  // Let's print some stuff.

  // Import stdio.h to leverage printf() function.
  // Bore yourself into oblivion
  // with this verbose spec of doom:
  // https://cplusplus.com/reference/cstdio/printf/

  // But yeah.
  // You can get super crazy with the format specifier
  // if you want:
  // %[flags][width][.precision][length]specifier
  // Or, just print.
  printf("integer = %d\n", integer);
  printf("decimal = %f\n", decimal);
  printf("long_decimal = %f\n", long_decimal);
  printf("single_character = %c\n", single_character);

  // Print arrays....
  for (int i = 0; i < 5; i++) {
    printf("static_num_arr[%d] = %d\n", i, static_num_arr[i]);
  }
  for (int i = 0; i < 9; i++) {
    printf("static_char_arr[%d] = %c\n", i, static_char_arr[i]);
  }
  printf("static_char_arr = %s\n", static_char_arr);

  // We have to return from main() otherwise, we are doomed.
  // 0 indicates success.
  // 1 would indicate failure,
  // which we don't even want to think about. Jk.
  return 0;

  // Holy smokes. You made it past. Level 0 complete haha.
  // Brace yourself for more... lol

}

