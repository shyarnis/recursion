/*
Head Recursion  : here, printing in done in "returning time"
Time Complexity : O(n)
Space Complexity: O(n)
    - It uses stack
    - creates N+1 activation record inside stack
*/

#include<stdio.h>

int function(int n) {
    if(n>0) {
        function(n-1);
        printf("%d", n);
    }
}

void main() {
    int x = 5;
    function(x);
}