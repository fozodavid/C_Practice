#include <stdio.h>

float SURCHARGE_RATE = 0.15;

int main() {
  int id;
  char name[50];
  float units;
  printf("Test Data: \n");
  scanf("%d %s %f", &id, name, &units);

  printf("Customer Id: %d\n", id);
  printf("Customer Name: %s\n", name);
  printf("Units Consumed: %.2f\n", units);

  if (units < 100) units = 100;

  float rate;
  if (units < 200) rate = 1.2;
  else if (units >= 200 && units < 400) rate = 1.5;
  else if (units >= 400 && units < 600) rate = 1.8;
  else if (units > 600) rate = 2.0;

    
  float payable = units * rate;
  float surcharge = units > 400 ? SURCHARGE_RATE * payable : 0;
  float total = payable + surcharge;

  printf("Amount Charges @Rs. %.2f per unit: %.2f\n", rate, payable);
  printf("Surcharge Amount: %.2f\n", surcharge); 
  printf("Net Amount Paid By the Customer: %.2f\n", total);
  return 0;
}
