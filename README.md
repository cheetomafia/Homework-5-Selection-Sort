# Homework-5-Selection-Sort
Homework 5
===
In this homework you will practice using pointers, arrays, function pointers, as well as dynamic memory.

You wll be implementing a selection sort algorithm.
Searching and sorting is a very common problem and there are many algorithms out there.
The selection sort was chosen for its simple implementation in comparison to other algorithms.

Selection sort
==
At the following link you can find more information about the selection sort (https://en.wikipedia.org/wiki/Selection_sort).
On the wiki page you find a solution in 'C' programming language. This can be easily modified for use in this assigment.

The solution on the wiki only implements selection sort in the ascending order.
You will need to modify your method to perform ascending and descending sorts.

Files Provided
==
* `main.cpp` is there to help handle I/O and executing the algorithm.
* `SelectionSort.h` provides all the function prototypes you will need.
* `SelectionSort.cpp` is where you will implement the functions.
  
Program Input
  ===
1. First integer is number of integers to sort (count)
2. Second integer is the order to sort by (0 = ASCENDING, 1 = DESCENDING)
3. The remaining integers are the integers to sort.
* There is a bool at the top of main you may set it to true to output prompts during testing.

Tasks
==
1. Finish code left out in `main.cpp`
2. Implement ascending and descending functions in `SelectionSort.cpp`
3. Implement swapValues function in `SelectionSort.cpp`
4. Implement selectionSort function (algorithm).  
5. Run tests in repl.it (ignore extra newline at beginning of test outputs).
6. Submit :)

Hints:
* Make use of all functions prototyped
* `<` operator in wiki solution can be replaced with function pointer passed into function
