# Introduction to Recursion
- Recursion is a function calling **itself**
- Recursion works with **stack**
- Recursion has **two** phases
    - **Calling phase**: Execute in calling time, before recursive function
    - **Returning phase**: Execute in returning time, after recursive function
- For every reursive call, a **activation record** is created in stack of memory.
- Once function call ended, ther activation record is deleted and goes back to previous call.
- For **n** function call, **n+1** activation recored is created.

### For on activation records
- [Activation Stack](https://users.cs.utah.edu/~germain/PPS/Topics/activation_stack.html)
- [Procedures and Activation Records](https://www.rose-hulman.edu/class/csse/csse404/schedule/day17/Procedures.pdf)