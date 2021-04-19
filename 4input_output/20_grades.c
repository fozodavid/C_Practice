/* #include <stdio.h> */

/* int main() { */
  /* char grade; */

  /* printf("Test Data: "); */
  /* scanf("%c", &grade); */

  /* switch(grade) { */
    /* case 'E': */
      /* printf("Excellent\n"); */
      /* break; */
    /* case 'V': */
      /* printf("Very Good\n"); */
      /* break; */
    /* case 'G': */
      /* printf("Good\n"); */
      /* break; */
    /* case 'A': */
      /* printf("Average\n"); */
      /* break; */
    /* case 'F': */
      /* printf("Fail\n"); */
      /* break; */

    /* default: */
      /* printf("This is not a grade\n"); */
  /* } */

  /* return 0; */
/* } */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char notes[15];
    char grd;

    printf("Input the grade :");
    scanf("%c", &grd);

    grd = toupper(grd);
    switch(grd) {
    case 'E':
        strcpy(notes, " Excellent");
        break;
    case 'V':
        strcpy(notes, " Very Good");
        break;
    case 'G':
        strcpy(notes, " Good ");
        break;
    case 'A':
        strcpy(notes, " Average");
        break;
    case 'F':
        strcpy(notes, " Fails");
        break;
    default :
        strcpy(notes, "Invalid Grade Found. \n");
        break;
    }
    printf("You have chosen  : %s\n", notes);
}
