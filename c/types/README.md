# Types of Recursion
1. Tail Recursion
2. Head Recursion
3. Tree Recursion
4. Indirect Recursion
5. Nested Recursion

## Tail Recursion
- Recursive call is last statement of a function
- All Operation is perform in calling time
- Tail recursion can be converted into **while loop**
- For Tail Recursion
    ```
    Space Complexity: O(n)
    Time Complexity : O(n)
    ```
- For Tail Recursion converted to while loop
    ```
    Space Complexity: O(1)
    Time Complexity : O(n)
    ```
- So, iteration is prefered over tail recursion

## Head Recursion
- Function performs at returning time
- Simlar, to tail recursion

## Tree Recursion
- If function call only one time it called **linear recursion**
- If function call itself more than one time in one function call it is called **tree recursion**

## Indirect Recursion
- More than one recursive function
- They are called in cyclic manner
- funA(x) -> funB(x) -> funC(x) -> funA(x)

## Nested Recursion
- Recursive function will pass function argument as recursive call