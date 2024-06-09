# Safe Null Pointer Handling in C++

## Description

This exercise demonstrates the potential issues when using `0` or `NULL` to represent null pointers in C++ and how `nullptr` can help write safer and more readable code. The objective is to implement functionalities that differentiate between null pointers and integer values, and to understand the advantages of using `nullptr`.

## Objectives

1. Implement a function `isPointerNull` that takes an integer pointer as its argument and returns `true` if the pointer is null and `false` otherwise.
2. Implement an overloaded function `overloadedFunction` that can handle both integer values and integer pointers:
   - The function should print `"Integer Value"` when an integer is passed.
   - The function should print `"Pointer Value"` when a pointer is passed.
3. Test these functions using raw pointers initialized with `0`, `NULL`, and `nullptr`.

## Instructions

### Function Implementations

1. **isPointerNull Function**

   ```cpp
   bool isPointerNull(int* ptr) {
       return ptr == nullptr;
   }
