
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
## MERGE SORT
Merge sort is a recursive algorithm that continuously splits the array in half until it cannot be further divided i.e., the array has only one element left (an array with one element is always sorted). Then the sorted subarrays are merged into one sorted array.

TIME COMPLEXITY = O(n*logn)
## QUICK SORT
The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot.
Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.

TIME COMPLEXITY(average case) = O(nlogn)

TIME COMPLEXITY(worst case) = O(n^2)
## QUICK SORT(ITERATIVE)
The process includes doing partition and putting the larger list in the stack and sorting the smaller list.This algorithm saves a lot of space.

TIME COMPLEXITY = O(n*logn)
## MAXIMUM AND MINIMUM (DIVIDE AND CONQUER)
In this, the array is divided into two halves. Then using recursive approach maximum and minimum numbers in each halves are found. Later, return the maximum of two maxima of each half and the minimum of two minima of each half.

TIME COMPLEXITY = O(n)
## Kth SMALLEST 
In this, we focus on calculating the kth smallest element from the list with the help of partition algorithm.

TIME COMPLEXITY(WORST CASE) = O(n^2)

## KNAPSACK
Given the weights and profits of N items, in the form of {profit, weight} put these items in a knapsack of capacity W to get the maximum total profit in the knapsack.

There are three methods through which the profit can be maximized :-

1. non-increasing profit
2. non-increasing profit/weight ratio
3. non-decreasing weight

TIME COMPLEXITY = O(n*logn)
## JOB SELECTION
In this, we are given with the starting and the ending time of the meetings,we are supposed to select the meetings in such a way so that maximum meetings can be held in a room.

TIME COMPLEXITY = O(n*logn)
## DIJKSTRA
The algorithm maintains a set of visited vertices and a set of unvisited vertices. It starts at the source vertex and iteratively selects the unvisited vertex with the smallest tentative distance from the source. It then visits the neighbors of this vertex and updates their tentative distances if a shorter path is found. This process continues until the destination vertex is reached, or all reachable vertices have been visited.

TIME COMPLEXITY = O(V^2)
## PRIMS
The algorithm starts with an empty spanning tree. The idea is to maintain two sets of vertices. The first set contains the vertices already included in the MST, and the other set contains the vertices not yet included. At every step, it considers all the edges that connect the two sets and picks the minimum weight edge from these edges. After picking the edge, it moves the other endpoint of the edge to the set containing MST. 

TIME COMPLEXITY = O(V^2)
