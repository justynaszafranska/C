#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter the number: ");
    double pow(double x, double y); //x is number, y is power
    int number, result;
    scanf("%d", &number);

    if(number< 0)
    {
        //kwadrat
        result = pow(number, 2); //number of power
        printf("Square of number is:  %d ", result);
    }
    else{
        //factor
        result = 1;

        for(int i=number;i>1;i--)
            result = result * i;
        //system("pause");
        printf("Factor: %d", result);
    }

    return 0;
}
