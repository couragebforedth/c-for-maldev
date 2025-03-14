#include <stdio.h>

int main(void) {

  // Pointers.
  // Stores a memory address.
  // But, need something to point to.
  // We'll create an int to point to.
  int example = 64;
  // The memory for this var has been allocated.
  // The variable has a memory address that
  // can be accessed by this program.

  // Now we'll create a pointer.
  int *pointer = &example;
  // there are two formats you can use:
  // int* pointer or int *pointer.
  // int *pointer is more oldschool.
  // & is a reference operator and
  // gets the address of a variable.

  // You'll note that if we print the pointer,
  // it will literally print the address of the var.
  printf("pointer = %#018x\n", pointer);

  // Note that if you are on a 64-bit system (likely)
  // the memory address is 8 bytes long (64-bits).
  // Granted, if stored at a lower address,
  // printing the address may make it
  // appear 4 bytes (32-bits) long.
  // However, sizeof operator reveals this is not the case.
  printf("%d\n", sizeof pointer);

  // If you're curious to see the difference,
  // You can sudo apt install gcc-multilib
  // then compile with -m32 and run this again.

  // But if we dereference the pointer var,
  // using the dererence operator *
  // we get the actual value.
  printf("pointer = %#018x\n", *pointer);

  // Reminder, we can get the format we want:
  printf("pointer = %d\n", *pointer);

  // And, if we get the size of this one,
  // it will be the size of an int based on
  // the compiler and target architecture.
  printf("%d\n", sizeof *pointer);

  // For me, I'm getting that the int is
  // 4 bytes (32 bits) on my 64-bit system.
  // Also, I was today-years-old when I learned that
  // amd64 is a nod to AMD who invented the 64-bit
  // architecture, prior to Intel.

}

