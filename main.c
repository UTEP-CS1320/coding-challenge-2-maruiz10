/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if (s < d){
    printf ("Error\n");
  }
  
  else if(s < 120) {
    if(d < 80) {
      printf("Normal\n");
    }
  }
  else if ((s < 130) && (d <80)){
    if (d < 80){
    printf("Elevated\n");
  }
  }
 else if ((s < 130) || (d <80)){
    
    printf("Stage 1 Hypertension\n");
  
  }
   else if ((s > 140) && (d > 90)) {
    
    printf("Stage 2 Hypertension\n");
  
  }
   else if ((s > 180) || (d > 120)) {
    
    printf("Hypertensive Crysis\n");
  
  }
}
