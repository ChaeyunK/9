#include <stdio.h>
#include <stdlib.h>
#define ROWS	3
#define COLS	3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addMatrix(int A[][3], int B[][3], int C[][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
}
void printMatrix(int C[][3])
{
printf("Matrix C:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
}
int main(int argc, char *argv[]) 
{
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}};
	int B[ROWS][COLS] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}};
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
		
	system("PAUSE");
	return 0;
}