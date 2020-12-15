#include <stdio.h>

#define START 65
#define END 122

int main() {
  for(int i=START;i <= END; i++) {
    printf("[%d-%c]", i, i);
  }
  return 0;
}
