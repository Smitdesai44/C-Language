#include<stdio.h>
void addition();//function prototype
//no return type no parameter
void addition()
{
    int a,b;
    printf("Enter the value of two variable:\n");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("addition:%d ",sum);
}
//no return type with parameter
void addition_2(int,int);
void addition_2(int a,int b)
{
    printf("sum is:%d",a+b);
   
}
//return type without parameter
int add()
{
    int a,b;
    printf("Enter the value of two variable:\n");
    scanf("%d%d",&a,&b);
    // int sum=a+b;
    return a+b;
}
//return type with parameter
int add_2(int a,int b)
{
    return a+b;
}
int main()
{
    // addition();//calling statement
    int a=10,b=10;
    // printf("\n");
    // addition_2(a,b);
    // printf("\n");
    // printf("the sum is:%d",add());
    //  printf("\n");
    printf("the sum is:%d",add_2(10,20));
    return 0;
}