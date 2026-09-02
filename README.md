# Recursion Practice — Sheet #7

C++ solutions for [Assiut University Training — Sheet #7 (Recursion)](https://codeforces.com/group/MWSDmqGsZm/contest/223339).

The main priority of this repository is **learning recursion**, not producing the most optimized solution to every problem. The solutions intentionally favor direct recursive definitions, clear base cases, recursive state design, branching, and recursion-tree reasoning. Faster alternatives such as dynamic programming, memoization, iterative solutions, closed forms, or other techniques are deliberately avoided when they would defeat the purpose of the exercise.

Some problems have multiple implementations to compare different recursive formulations of the same idea. Alternative implementations use an underscore suffix in the filename (for example, `K_.cpp`).

A solver who is already familiar with recursion can reasonably work through this sheet in about **5 hours, including breaks**.

## Problems

| Index | Problem | Main idea | Rating |
|:---:|---|---|:---:|
| A | [Print Recursion](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A) | Basic base case and one recursive call to repeat an action exactly `N` times. | ⭐⭐⭐⭐⭐ |
| B | [Print from 1 to N](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B) | Recurse first, then print while the call stack unwinds to reverse the natural recursion order. | ⭐⭐⭐⭐⭐ |
| C | [Print from N to 1](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C) | Print before the recursive call to process values in descending order. | ⭐⭐⭐⭐⭐ |
| D | [Print Digits using Recursion](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D) | Remove the last digit with division by 10, recurse, then print digits during unwinding. | ⭐⭐⭐⭐⭐ |
| E | [Base Converssion](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E) | Repeatedly divide by 2 and print remainders while unwinding to build the binary representation. | ⭐⭐⭐⭐⭐ |
| F | [Print Even Indices](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F) | Advance recursively by two indices and print during unwinding to reverse the selected elements. | ⭐⭐⭐⭐ |
| G | [Pyramid](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G) | Use the recursive state as the current pyramid level and recurse toward the final level. | ⭐⭐⭐ |
| H | [Inverted Pyramid](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H) | Recurse before printing so the call stack naturally reverses the pyramid levels. | ⭐⭐⭐⭐ |
| I | [Count Vowels](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I) | Count the current character if it is a vowel, then add the recursive answer for the suffix. | ⭐⭐⭐⭐ |
| J | [Factorial](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J) | Canonical recurrence `n! = n * (n - 1)!` with `0! = 1` as the base case. | ⭐⭐⭐⭐⭐ |
| K | [Max Number](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K) | Recursively find the maximum of the remaining suffix and combine it with the current element. | ⭐⭐⭐⭐⭐ |
| L | [Summation](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L) | Express the sum as the current element plus the recursive sum of the remaining elements. | ⭐⭐⭐⭐⭐ |
| M | [Suffix Sum](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M) | Shrink both the considered prefix and the number of suffix elements still needed. | ⭐⭐⭐⭐ |
| N | [Sum of a Matrix](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N) | Recursively traverse the matrix and add each element, extending linear summation recursion to two dimensions. | ⭐⭐⭐⭐ |
| O | [Fibonacci](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O) | First fundamental branching recurrence: solve two smaller recursive subproblems and add them. | ⭐⭐⭐⭐⭐ |
| P | [Log2](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P) | Repeatedly divide by 2 and count how many recursive steps are needed to reach 1. | ⭐⭐⭐⭐ |
| Q | [3n + 1 sequence](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q) | Choose the next recursive state according to whether the current value is odd or even. | ⭐⭐⭐⭐ |
| R | [Palindrome Array](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R) | Compare both ends of an interval, then recurse inward on `(i + 1, j - 1)`. | ⭐⭐⭐⭐⭐ |
| S | [Array Average](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S) | Reconstruct the previous partial sum from the recursive average, add the new element, and divide by `n`. | ⭐⭐⭐⭐ |
| T | [Combination](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T) | Use Pascal's identity: choose the current object or do not choose it. | ⭐⭐⭐⭐⭐ |
| U | [Knapsack](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U) | Classic take-or-skip recursion; return the better value from the two decision branches. | ⭐⭐⭐⭐⭐ |
| V | [Creating Expression1](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V) | Try `+` and `-` for each element, recursively exploring the binary decision tree. | ⭐⭐⭐⭐⭐ |
| W | [Reach Value](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W) | From each state, recursively try both legal transformations and stop on success or overshoot. | ⭐⭐⭐⭐ |
| X | [The maximum path-sum](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X) | Define the answer for a grid cell from the best recursive predecessor: up or left. | ⭐⭐⭐⭐⭐ |
| Y | [Number of Ways](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y) | Count all successful branches after taking 1, 2, or 3 steps. | ⭐⭐⭐⭐⭐ |
| Z | [Left Max](https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z) | Carry the maximum seen so far as recursive state while scanning the array. | ⭐⭐⭐⭐ |

## Focus

The point of these solutions is to become comfortable with recurring recursive patterns:

- defining exactly what a recursive function means;
- choosing correct base cases;
- making progress toward those base cases;
- processing before or after the recursive call;
- combining answers from smaller subproblems;
- carrying state through recursive calls;
- branching into multiple choices;
- recognizing take/skip and choose/undo-style search structures.

Optimization can come later. First make the recursion obvious.
