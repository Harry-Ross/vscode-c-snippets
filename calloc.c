#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float flo = 10.1;
  int myInt = 40;
  int *pnumber = &myInt;
  size_t sz = 30;
  char myChar = 'c';

  // printf("number's address: %p \n", &number); // number's address: 0x7ffee637569c
  // pnumber = &number;
  // // * we need to cast the value of pnumber to avoid warnings
  // printf("pnumber's value: %p \n", pnumber); // pnumber's value: 0x7ffee637569c
  // printf("value pointed to: %d \n", *pnumber); // value pointed to: 10
  // printf("pnumber's address: %p \n", (void *)&pnumber); // pnumber's address 0x7ffee9c48690
  // printf("pnumber's size: %zd bytes \n", sizeof(pnumber)); // pnumber's size: 8 bytes
  // printf("%.2f", floatVariable); // round to two decimals

  return EXIT_SUCCESS;
}