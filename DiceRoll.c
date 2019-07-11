#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll(){
  return  rand()%6 + 1;
}

int main(){
  int die1,die2;
  char name[10];
 srand(time(NULL));
 
  printf("Rolling the dice...\n");
  die1 = roll();
  die2 = roll();
  printf("Die 1: %d\n",die1);
  printf("Die 2: %d\n",die2);
  printf("Total value: %d\n",die1 + die2);

 
  if(sie1+die2>7)
    printf("You won\n");
  else
    printf("You lost\n");
  
  return 0;
}
