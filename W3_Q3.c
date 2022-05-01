#include<stdio.h>
void checkevenodd();
int main()
{
    int num;
    printf("Enter the Number to check even or odd:\n");
    scanf("%d", &num);
    checkevenodd(num);
    return 0;
}
void checkevenodd(int num)
{
    if(num%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
}