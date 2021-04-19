#include <stdio.h>

int main() {
  int day;
  char notes[15];

  printf("Test Data: ");
  scanf("%d", &day);

  switch (day) {
    case 1:
      strcpy(notes, "Monday");
      break;
    case 2:
      strcpy(notes, "Tuesday");
      break;
    case 3:
      strcpy(notes, "Wednesday");
      break;
    case 4:
      strcpy(notes, "Thursday");
      break;
    case 5:
      strcpy(notes, "Friday");
      break;
    case 6:
      strcpy(notes, "Saturday");
      break;
    case 7:
      strcpy(notes, "Sunday");
      break;
    default:
      strcpy(notes, "Not a day");
   }

  printf("Your chosen day is: %s\n", notes);

  return 0;
}
