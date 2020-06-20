# Tree Operations CS5701 Advanced Algorithms

In this question you will run C++ code for different binary search trees,
namely, basic BST, red-black tree and splay tree, and report the time taken and the
resulting tree height when performing the insert, search and delete operations on
them. The C++ code for each tree can be found in the “code” folder provided with
the assignment.
Note that the provided code for each tree implements all the tree operations you need,
but its main() method is empty. For each type of tree, you need to fill in the code in
the main() method to do necessary initializations, read data from a file and then
perform the operations and measure the required values (height and the time). You
are also provided a zip file “data.zip” that contains four sets of data, each
containing a sequence of keys. The data_1.txt and data_2.txt files are to be
used to insert to the trees, search_data.txt is to be used for the search
operation, and delete_data.txt is to be used for the delete operation.


## How to run
```
make run
```

## example output 
```
=============Question 1===============

Time taken data_1 BST: 3471 microseconds
Resulting tree height data_1 BST: 29

Time taken data_2 BST: 101809 microseconds
Resulting tree height data_2 BST: 1276

Time taken data_1 Spaly Tree: 3429 microseconds
Resulting tree height data_1 Spaly Tree: 44

Time taken data_2 Spaly Tree: 1625 microseconds
Resulting tree height data_2 Spaly Tree: 2867

Time taken data_1 RB-Tree: 5476 microseconds
Resulting tree height data_1 RB-Tree: 18

Time taken data_2 RB-Tree: 4295 microseconds
Resulting tree height data_2 RB-Tree: 19

=============Question 2===============

Time taken data_1 BST: 291 microseconds
Resulting tree height data_1 BST: 29

Time taken data_2 BST: 8189 microseconds
Resulting tree height data_2 BST: 1276

Time taken data_1 Spaly Tree: 704 microseconds
Resulting tree height data_1 Spaly Tree: 34

Time taken data_2 Spaly Tree: 489 microseconds
Resulting tree height data_2 Spaly Tree: 33

Time taken data_1 RB Tree: 258 microseconds
Resulting tree height data_1 RB Tree: 18

Time taken data_2 RB Tree: 242 microseconds
Resulting tree height data_2 RB Tree: 19

=============Question 3===============

Time taken data_1 BST: 246 microseconds
Resulting tree height data_1 BST: 29

Time taken data_2 BST: 143 microseconds
Resulting tree height data_2 BST: 1147

Time taken data_1 Spaly Tree: 202 microseconds
Resulting tree height data_1 Spaly Tree: 49

Time taken data_2 Spaly Tree: 257 microseconds
Resulting tree height data_2 Spaly Tree: 34

Time taken data_1 RB Tree: 937 microseconds
Resulting tree height data_1 RB Tree: 18

Time taken data_2 RB Tree: 980 microseconds
Resulting tree height data_2 RB Tree: 18
```