/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
float average(int mark1, int mark2);

int main() 
{
  int i;
  int marks[2];

  // input marks
  for(i = 0; i < 2; i++) {
    printf("Enter subject %d mark : ", i+1);
    scanf("%d", &marks[i]);
  }
 
  printf("Average is = %.2f", average(marks[0], marks[1]) );  
  return 0;
}

// calculate average
float average(int mark1, int mark2)
{
  return (mark1 + mark2) / 2.0;
}