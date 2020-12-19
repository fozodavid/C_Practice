#include <stdio.h>
#include <stdint.h>

int main() {
  printf("Type\t\tBytes\n");

  printf("--------------------------------\n");

  printf("char\t\t%d\n", sizeof(char));
  printf("int8_t\t\t%d\n", sizeof(int8_t));
  printf("unsigned char\t%d\n", sizeof(unsigned char));
  printf("uint8_t\t\t%d\n", sizeof(uint8_t));
  printf("short\t\t%d\n", sizeof(short));
  printf("int16_t\t\t%d\n", sizeof(int16_t));
  printf("uint16_t\t%d\n", sizeof(uint16_t));
  printf("int\t\t%d\n", sizeof(int));
  printf("unsigned\t%d\n", sizeof(unsigned));
  printf("long\t\t%d\n", sizeof(long));
  printf("unsigned long\t%d\n", sizeof(unsigned long));
  printf("int32_t\t\t%d\n", sizeof(int32_t));
  printf("uint32_t\t%d\n", sizeof(uint32_t));
  printf("long long\t%d\n", sizeof(long long));
  printf("int64_t\t\t%d\n", sizeof(int64_t));
  printf("unsigned long long\t%d\n", sizeof(unsigned long long));
  printf("uint64_t\t%d\n", sizeof(uint64_t));
  printf("float\t\t%d\n", sizeof(float));
  printf("double\t\t%d\n", sizeof(double));
  printf("long double\t%d\n", sizeof(long double));
  printf("_Bool\t\t%d\n", sizeof(_Bool));


  return 0;
}
