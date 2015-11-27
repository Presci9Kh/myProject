#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int mult(int a, int b)
{
    int i = 0;
    int res = 0;
    while (i < b)
    {    
        res += a;
        i++;
    }
    return res;
}

int main(void)
{
    printf("3x2 = %d\n", mult(3,2));
    return 0;
}
