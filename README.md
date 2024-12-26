# Unexpected Behavior with std::vector<bool> in C++

This repository demonstrates a potential issue with the `std::vector<bool>` specialization in C++.  While convenient, it doesn't adhere to the standard `std::vector` behavior in terms of element access. This can lead to unexpected results and subtle bugs.

## The Problem
The `std::vector<bool>` specialization often uses a bitset for optimization, which means direct element access might not be equivalent to accessing elements in a regular vector. This non-standard implementation can introduce unexpected behavior.

## How to Reproduce
The `bug.cpp` file provides an example of how this unexpected behavior can manifest.  The solution demonstrates a workaround.

## Solution
The `bugSolution.cpp` file demonstrates a solution to mitigate the issues. It avoids using `std::vector<bool>` directly and uses a more conventional approach.