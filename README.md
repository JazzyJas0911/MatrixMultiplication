# MatrixMultiplication

Write a program that does matrix multiplication in C++ without using any external library.

i. The file names of the source codes should be Assn9.cpp.

ii. The program should read the command-line arguments passed to the program.
(argv[]).
argv[1]: number of rows in the matrix 1 (r1) argv[2]: number of columns in the matrix 1 (c1) argv[3]: number of rows in the matrix 2 (r2) argv[4]: number of colums in the matrix 2 (c2)

iii. The program should allocate a heap memory space dynamically for the matrices in the row major order.

iv. The program should not use a VLAs (Variable-Length Array) even though it is supported by the GNU C Compiler.

v. The program should not use the bracket operator([]) to access the each element of the matrices, please use pointers, pointer arithmetics, and dereference operators. (arr[i][j] -> *(*(arr + i) + j))

vi. The program should assign the numbers {1, 2, 3, · · · , r1 × c1} to the first matrix in ascending order. For 3 × 3 example,
123 456 789

vii. The program should assign the numbers {1, 2, 3, · · · , r2 × c2} to the second matrix in descending order. For 3 × 3 example,
987 654 321

viii. Execution command and the expected output would be:
  
 g++ Assn9.cpp -o Assn9; ./Assn9 3 3 3 3 Matrix 1
123
456
789
Matrix 2
987
654
321
Matrx 1 * Matrix 2 30 24 18
                   84 69 54
                  138 114 90
