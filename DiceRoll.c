#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll(){
  return  rand()%6 + 1;
}

int main(){
  int die1,die2,die3;
  char name[10];
 srand(time(NULL));
 
printf("What is your name?\n");
 scanf("%s",name);
 printf("Hello, %s\n",name);

 
  printf("Rolling the dice...\n");
  die1 = roll();
  die2 = roll();
  die3 = roll();
  printf("Die 1: %d\n",die1);
  printf("Die 2: %d\n",die2);
  printf("Die 3: %d\n",die3);
  printf("Total value: %d\n",die1 + die2 + die3);

 
  if(die1+die2+die3>10)
    printf("%s won\n",name);
  else
    printf("%s lost\n",name);
  
  return 0;
}
