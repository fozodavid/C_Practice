#include <stdio.h>

int main() {
  int temp;

  printf("Test Data: ");
  scanf("%d", &temp);

  if (temp < 0   ) printf("Freezing weather\n");
  if (temp >= 0 && temp < 10  ) printf("Very Cold weather\n");
  if (temp >= 10 && temp < 20 ) printf("Cold weather\n");
  if (temp >= 20 && temp < 30 ) printf("Normal in Temp\n");
  if (temp >= 30 && temp < 40 ) printf("Its Hot\n");
  if (temp >=40  ) printf("Its Very Hot\n");

  return 0;
}
