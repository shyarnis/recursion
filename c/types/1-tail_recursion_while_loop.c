/*
Tail Recursion is conveted into while loop
- This is more efficient than tail recursion
Time Complexity: O(n)
Space Complexity : O(1)
*/

#include<stdio.h>

int function(int n) {
    while (n>0) {
        printf("%d", n);
        n--;
    }
}

int main() {
    int x=5;
    function(x);
    return 0;
}