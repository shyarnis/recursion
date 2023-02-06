#include<stdio.h>

int function1(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        function1(n-1);
    }
}

int main()
{
    int x = 10;
    function1(x);
    return 0;
}