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
