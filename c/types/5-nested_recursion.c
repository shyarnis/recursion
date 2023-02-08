#include<stdio.h>

int function(int n);

int main() 
{
    int x = 90;
    printf("%d\n", function(x));
}

int function(int n)
{
    if (n>100)
    {
        return n-10;
    }
    else
    {
        return function(function(n+11));
    }
    
}