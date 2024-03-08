#include <stdio.h>

//defining the Row and column 
#define ROW1 2
#define COL1 2
#define ROW2 2
#define COL2 2

int main() {
	printf("\t \t \t \t \t \t Matrix Multiplication \t \t \t \t \t \t\n \n");
	printf("------------Matrix : 1-------------\n \n");
	
	//	Assigning Varriables 
    int mat1[ROW1][COL1], mat2[ROW2][COL2], result[ROW1][COL2];
    int i, j, k;


	//print statement for user understood
    printf("Enter elements of first matrix (%dx%d):\n", ROW1, COL1);
    
    
    //first statement taking from the user
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
            
        }
    }
    
    
	 //print first statemnt in matrix form
     for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d \t", mat1[i][j]);
        }
        printf("\n");
    }
    
   
    printf("\n \n------------Matrix : 2-------------\n \n"); 
   
   
   
	//print 2nd statement for user understood
    printf("\nEnter elements of second matrix (%dx%d):\n", ROW2, COL2);
    
    
	//2nd statement taking from the user 
    for (i = 0; i < ROW2; i++) {
        for (j = 0; j < COL2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

		//printing 2nd statement in matrix form
       for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d \t", mat2[i][j]);
        }
        printf("\n");
    }
    

    // Matrix multiplication
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (k = 0; k < COL1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

	
	//	Printing Result 
    printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

