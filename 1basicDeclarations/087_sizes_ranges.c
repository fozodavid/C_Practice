#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("Ranges for integer data types in C\n");

  printf("int8_t  \t%d\t%d\n", SCHAR_MIN, SCHAR_MAX);
  printf("int16_t \t%d\t%d\n", SHRT_MIN, SHRT_MAX);
  printf("int32_t \t%d\t\t\t%d\n", INT_MIN, INT_MAX);
  printf("int64_t \t%lld\t\t%lld\n", LLONG_MIN, LLONG_MAX);
  printf("uint8_t \t%d\t%d\n", 0, UCHAR_MAX);
  printf("uint16_t\t%d\t%d\n", 0, USHRT_MAX);
  printf("uint32_t\t%d\t%d\n", 0, UINT_MAX);
  printf("uint64_t\t%d\t%lld\n", 0, ULLONG_MAX);

  printf("Ranges for real data types in C\n");

  printf("float      \t%14.7g\t%14.7e\n", FLT_MIN, FLT_MAX);
  printf("double     \t%14.7g\t%14.7g\n", DBL_MIN, DBL_MAX);
  printf("long double\t%14.7Lg\t%14.7Lg\n", LDBL_MIN, LDBL_MAX);

  return 0;
}
