#include <stdio.h>
void swap(int *a, int *b)
{
   int temp;
   temp  = *b;
   *b = *a;
   *a = temp;
}
int main()
{
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
   swap(&num1, &num2);
   printf("\nAfter swapping, first number = %d\n", num1);
   printf("After swapping, second number = %d", num2);
   return 0;
}

