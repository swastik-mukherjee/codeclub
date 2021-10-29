#include <stdio.h>

//returable parameterized function
int sum(int a, int b)
{
    int res = a + b;
    return res;
}
//non returable parameterized function
void mul(int a, int b)
{
    int res = a * b;
    printf("%d \n ", res);
}
//non returable non parameterized function
void div()
{
    int a, b, res;
    printf("Enter two numbers for division. [Please note divisor can't be 0] : ");
    scanf("%d, %d ", &a, &b);
    res = a / b;
    printf("div = %d \n", res);
}
//returable non parameterized function
int sub()
{
    int a, b, res = 15;
    printf("Enter two numbers for sub ");
    scanf("%d, %d", &a, &b);
    res = a - b;
    return res;
}

int main()
{
    int add = sum(5, 10);
    int res1 = sub();

    printf("sub = %d, add = %d \n", res1, add);
    mul(5, 10);
    div();
}