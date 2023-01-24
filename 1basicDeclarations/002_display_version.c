#include <stdio.h>
#define PRINTMACRO(x) printf("%ld\n", x)

int main() {
#if __STDC_VERSION__
  PRINTMACRO(__STDC_VERSION__);
#endif

#if __GNUC_STDC_INLINE__
  printf("ISO C99 or later");
#else
  printf("earlier than ISO C99");
#endif

  return 0;
}
