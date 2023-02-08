/*
Tree Recursion for this function 
  - for n, it has 2^(n+1) - 1 calls
  - n=4, 31 calls
Time Complexity : O(2^n)
  - Depends on the number of calls
Space Complexity: O(n)
  - Depends on the maximum height of the stack(tree)
*/

#include<stdio.h>

int function(int n) {
    if (n>0)
    {
        printf("%d",n);
        function(n-1);
        function(n-1);
    }
}

void main() {
    int x=4;
    function(x);
}