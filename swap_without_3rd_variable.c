#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter vakues of a and b : ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped value of a is %d and b is %d ",a,b,);
    getch();
    return 0;
}