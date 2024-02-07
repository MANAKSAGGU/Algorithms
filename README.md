
# INTRODUCTION

Calculating the run time of various algorithms for larger inputs.


## SELECTION SORT
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
The subarray which is already sorted. 
Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

TIME COMPLEXITY = O(n^2)
## TOWERS OF HANOI
Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules: 
Only one disk can be moved at a time.
Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
No disk may be placed on top of a smaller disk.

TIME COMPLEXITY = O(2^n)
## SUM OF AN ARRAY
We are to add the elements of the array recursively and after the base case is reached,we have to return the first element and return until all recursive calls end.

TIME COMPLEXITY = O(n)
## Horner Rule
Horner’s rule is an algorithm for evaluating a polynomial of the form cn​x^n+c(n−1)​x^(n−1)+⋯+c1​x+c0​
 at a given value of x
, where cn​,cn−1​,…,c0​
 are coefficients. The algorithm is based on the observation that the polynomial can be rewritten as ((⋯((cn​x+cn−1​)x+cn−2​)x+⋯)x+c1​)x+c0​
, which reduces the number of multiplications and additions needed to compute the values.

TIME COMPLEXITY = O(n)
## Truth table for n numbers
It computes all possible boolean values of the number.

TIME COMPLEXITY = O(2^n)
## PERMUTATION GENERATOR
It computes all possible ways in which a string of letters can be arranged.It does the swapping of all the characters recursively ,keeping one of them fixed and printing after the string length is reached.

TIME COMPLEXITY = O(2^n)
## LINEAR SEARCH
In this algorithm,we search whether the element is present in the array or not.We do so by comparing each of the element of the array with the key element.If the element is present we return the index of the element, else if the element is not present we return -1.

TIME COMPLEXITY = O(n)
## BINARY SEARCH
Binary Search is a search algorithm that is faster than the linear search algorithm. Binary Search is used to search the position of the target element in a sorted array by repeatedly dividing the search space in half. Binary search eliminates half portion of the array with each comparison.

TIME COMPLEXITY = O(logn)


## POWER OF A NUMBER
In this algorithm we multiply the number with the recursive call and decrease the power by 1 and when power becomes zero,we return 1.

TIME COMPLEXITY = O(n)
## MAGIC SQUARE
A magic square of order n is an arrangement of n2 numbers, usually distinct integers, in a square, such that the n numbers in all rows, all columns, and both diagonals sum to the same constant. A magic square contains the integers from 1 to n2. 
The constant sum in every row, column and diagonal are called the magic constant or magic sum, M.

TIME COMPLEXITY = O(n^2)
## MERGING OF TWO SORTED LISTS
Create an array arr3[] of size n1 + n2.
Simultaneously traverse arr1[] and arr2[]. 
Pick smaller of current elements in arr1[] and arr2[], copy this smaller element to next position in arr3[] and move ahead in arr3[] and the array whose element is picked.
If there are remaining elements in arr1[] or arr2[], copy them also in arr3[].

TIME COMPLEXITY = O(n)
## CORRECT POSITION OF PIVOT 
The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot.

TIME COMPLEXITY = O(n)
