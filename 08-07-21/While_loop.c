#include <stdio.h>

int main(void) {
  int count;
  int num1, num2, sum;

  count=0;
  while(count<5)
  {
    printf("count = %d\n", count);
    printf("Enter number : ");
    
    scanf("%d\n%d", &num1, &num2);
    sum = num1+num2;
    printf("%d + %d = %d\n", num1, num2, sum);

    count++;
    
    printf(" %d times executed \n-----\n", count);
  }
  return 0;
}