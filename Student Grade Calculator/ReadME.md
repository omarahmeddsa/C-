# Student Grade Calculator

This repository contains a C++ program that calculates a student's grade based on their percentage using a series of if-else statements. The program follows specific criteria to determine the grade and handles invalid percentage inputs appropriately.

## Problem Description

You are given a function `gradeStudent` that takes in a student's percentage and returns a grade based on the following criteria:

- **90% and above**: "A"
- **80% to 89%**: "B"
- **70% to 79%**: "C"
- **60% to 69%**: "D"
- **Below 60%**: "F"

Additionally, if the percentage is greater than 100 or less than 0, the function should return "Invalid Percentage".

## Implementation

### gradeStudent Function

The `gradeStudent` function uses a series of if-else statements to determine the appropriate grade for a given percentage. Here's the implementation:
