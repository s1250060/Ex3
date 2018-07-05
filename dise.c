#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
  int n1, n2, sum;
  char name[20];
  
  printf("What is your name?\n> ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  
   
  srand((unsigned)time(NULL));

  printf("Rolling the dice...\n");
  
  printf("Die 1: %d\n",n1 = rand()%6+1);
  printf("Die 2: %d\n",n2 = rand()%6+1);

  sum = n1 + n2;

  printf("Total value: %d\n", sum);

  if(sum < 7) printf("%s lost.\n", name);
  else printf("%s won!\n", name);

  return 0;
}
