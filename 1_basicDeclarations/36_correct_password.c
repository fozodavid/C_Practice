#include <stdio.h>

int check_password(const char * pass, const char * input) {
  int i = 0;
  int correct = 1;
  while (pass[i] != '\0') {
    if (pass[i] != input[i]) correct = 0;
    i++;
  }
  return correct;
}

int main() {
  const char * password = "1234";
  char input[20];

  int correct = 0;
  while (correct != 1) {
    printf("Input the password: ");
    scanf("%s", input);
    correct = check_password(password, input);
    if (!correct) printf("Incorrect password\n");
  }

  if (correct) printf("Correct password\n");
  return 0;
}
