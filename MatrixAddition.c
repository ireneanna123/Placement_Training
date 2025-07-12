/*Imagine you are helping a student with their mathematics homework which involves a lot of problems based on matrix addition. You decide to write a program to automate the task of adding two matrices, which would make the homework a breeze!

Write a program to add two matrices. The program should:

Prompt the user to enter the dimensions of the matrices (assume both matrices have the same dimensions).

Accept the elements of the two matrices from the user.

Display the two matrices.

Add the two matrices.

Print the resultant matrix.

Kindly check the sample test case for input and output format.

Input Format

2 2
1 2
3 4
5 6
7 8

Constraints

NA

Output Format

First Matrix:
1 2
3 4
Second Matrix:
5 6
7 8
Sum of the two matrices is:
6 8
10 12

Sample Input 0

2 2
1 2
3 4
5 6
7 8
Sample Output 0

First Matrix:
1 2 
3 4 
Second Matrix:
5 6 
7 8 
Sum of the two matrices is:
6 8 
10 12
Sample Input 1

1 1
6
8
Sample Output 1

First Matrix:
6
Second Matrix:
8
Sum of the two matrices is:
14*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int mat1[n][m],mat2[n][m],mat3[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("First Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the two matrices is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
