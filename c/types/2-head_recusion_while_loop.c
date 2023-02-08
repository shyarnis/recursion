/*
Head Recursion is conveted into while loop
- This is more efficient than head recursion
Space Complexity: O(n)
Time Complexity : O(1)
*/

#include<stdio.h>

int function(int n) {
    int i=1;
    while (i<=n) {
        printf("%d", i);
        i++;
    }
}

int main() {
    int x=5;
    function(x);
    return 0;
}