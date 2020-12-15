#include <stdio.h>

int main() {
  char employeeID[11];
  int working_hrs;
  float salary_hr;

  printf("Input the Employees ID (Max. 10 chars): ");
  scanf("%s", employeeID);
  printf("Input the working hrs: ");
  scanf("%d", &working_hrs);
  printf("Salary amount/hr: ");
  scanf("%f", &salary_hr);

  printf("Employee ID = %s\n", employeeID);
  printf("Salary = U$ %.2f\n", salary_hr * working_hrs);

  return 0;
}
