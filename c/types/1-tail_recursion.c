/*
Tail Recursion  : here, printing in done in "calling time"
Time Complexity : O(n)
Space Complexity: O(n)
    - It uses stack
    - creates N+1 activation record inside stack
*/

#include<stdio.h>

int function(int n) {
    if(n>0) {
        printf("%d", n);
        function(n-1);
    }
}

void main() {
    int x = 5;
    function(x);
}