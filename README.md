# push_swap
### Push Swap is a program that takes as argument a space separated list of numbers and outputs a <a href="#commands-list">list of commands</a> that can be used to sort them.
useful links <br />
https://www.geeksforgeeks.org/stack-data-structure/ 

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

https://github.com/o-reo/push_swap_visualizer

```css
Push_swap is a sorting algorithm project - 
the goal of the project is to sort a stack of integers using two stacks and a set of operations.
```

```dockerfile
Here is a step-by-step algorithm for the push_swap project:

1. Parse the input: The input is a list of integers that needs to be sorted. 
Parse the input and store it in a stack called stack A.

2. Initialize stack B: Create an empty stack called stack B.

3. Find the smallest number: Find the smallest number in stack A 
and move it to the top of the stack using the "ra" or "rra" operation.

4. Push to stack B: Push the smallest number from stack A to stack B using the "pb" operation.

5. Find the next smallest number: Find the next smallest number in stack A 
and move it to the top of the stack using the "ra" or "rra" operation.

6. Sort stack B: Sort stack B in ascending order using the "pa" and "pb" operations.

7. Repeat steps 3 to 6 until stack A is empty: Repeat steps 3 to 6 until all the numbers are sorted and stack A is empty.

8. Optimize the algorithm: Optimize the algorithm by reducing the number of operations used. 
For example, if the top of stack A is already sorted, there is no need to move it to the top.

9. Test the algorithm: Test the algorithm using different sets of inputs and make sure it works correctly for all cases.

10. Submit the project: Submit the project and wait for the evaluation.
```
```html
Overall, the push_swap algorithm works by finding the smallest number in stack A, moving it to stack B, 
and then sorting stack B in ascending order. 
The algorithm repeats this process until stack A is empty, and all the numbers are sorted. 
The key to the push_swap algorithm is to find the optimal sequence of operations that sorts the numbers 
using the least number of moves.
```

#### Commands list
