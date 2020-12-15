#include <stdio.h>

enum hello{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

#define NUM_DAYS 7
struct day {
  char * name;
  int index;
};

int main() {
  struct day days[NUM_DAYS];

  days[0].name = "Mon";
  days[0].index = Mon;

  days[1].name = "Tue";
  days[1].index =Tue;

  days[2].name = "Wed";
  days[2].index =Wed;

  days[3].name = "Thu";
  days[3].index =Thu;

  days[4].name = "Fri";
  days[4].index =Fri;

  days[5].name = "Sat";
  days[5].index =Sat;

  days[6].name = "Sun";
  days[6].index =Sun;

  int i;
  for (i = 0; i < NUM_DAYS; i++) {
    printf("%s - %d\n", days[i].name, days[i].index);
  }; 

  return 0;
}
