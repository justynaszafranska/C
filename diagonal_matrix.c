#include <stdio.h>
#include <stdlib.h>

int main() {

    int matrix[4][4] =
    {
            {rand()%10, rand()%10, rand()%10, rand()%10},
            {rand()%10, rand()%10, rand()%10, rand()%10},
            {rand()%10, rand()%10, rand()%10, rand()%10},
            {rand()%10, rand()%10, rand()%10, rand()%10}
    };


    int n = 4;

//show matrix
    int i,j;

    printf("Your matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
            if(j == 3)
            {
                printf("\n");
            }
        }
    }

// CALCULATES THE SUM OF ELEMENTS LOCATED ON MAIN DIAGONAL
    int nn = 3;
    int m = 3;
    int sum = 0;

    while(nn>=0)
    {
        sum+= matrix[nn][m];
        nn--;
        m--;
    }
    printf("Sum of the elements lying on the main diagonal: %d", sum);

// CALCULATES THE SUM OF THE ELEMENTS LOCATED ABOVE THE MAIN DIAGONAL

    int nn2 = 2;
    int m2 = 3;
    int sum2 = 0;

    while(m2>0)
    {
        sum2+= matrix[m2][nn2];
        nn2--;
        m2--;
    }
    printf("\nSum of the elements lying above the main diagonal: %d", sum2);

// CALCULATES THE SUM OF ELEMENTS OF THE SECOND LINE

    int nn3 = 3;
    int m3 = 1;
    int sum3 = 0;

    while(nn3 >= 0)
    {
        sum3+= matrix[m3][nn3];
        nn3--;
    }
    printf("\nSum of the elements of the second line: %d", sum3);

// CALCULATES THE SUM OF THE ELEMENTS IN THE THIRD COLUMN

    int nn4 = 2;
    int m4 = 4;
    int sum4 = 0;

    while(m4 >= 0)
    {
        sum4+= matrix[nn4][m4];
        m4--;
    }
    printf("\nSum of the elements in the third column: %d", sum4);

    return 0;
}
