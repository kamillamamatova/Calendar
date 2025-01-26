#include <stdio.h>

int main(){
  int days, start;

  // Reads in days in calendar.
  printf("Each number of days in month: ");
  scanf("%d", days);

  // Reads in start day.
  printf("\nEnter starting day of the week (1-Sun, 7-Sat): ");
  scanf("%d", start);

  printf("\n");

  // Start the calendar on the start date.
  for(int i = 1; i < start; i++){
    printf("...");
  }

  // Prints the days in the calendar.
  for(int i = 1; i <= days; i++){
    printf(" %2d", i);

    // New week
    if((start - 1 + i) % 7) == 0)
      printf("\n");
  }

  // Exit program
  return 0;
}
