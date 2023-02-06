#include<stdio.h>

int function1(int n)
{
    if (n>0)
    {
        function1(n-1);
        printf("%d\n", n);
    }
}

int main()
{
    int x = 10;
    function1(x);
    return 0;
}