/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

      float subject1, subject2 ;
      float total, average;
    

    printf("Enter the marks of the two subjects please::\n");
    scanf("%f%f", &subject1, &subject2);

    //  calculate  
    total = subject1 + subject2 ;
    average = total / 2.0;
    



    // results
    
    printf("\nThe Average is:\t%.2f\n", average);
   
   
  
  return 0;
}

