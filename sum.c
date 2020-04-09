#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number of elements: ");
    int quantity;
    scanf("%d", &quantity);

    if(quantity > 100)
    {
        printf("You have specified too many elements in the array!");
    }

    printf("Give the next elements separated by a space: ");
    int natural_numbers[quantity];

    int i = 0;

    scanf ("%d", &natural_numbers[i++]);
    while(getchar() != '\n' && i<quantity)
    {
        scanf("%d", &natural_numbers[i++]);
    }

	int j;
	int negative_result = 0;
	int positive_result = 0;

    for (j=0; j<i; j++)
    {
        if(natural_numbers[j]>0)
        {
            positive_result +=natural_numbers[j];
        }

        if(natural_numbers[j]<0)
        {
            negative_result += natural_numbers[j];
        }
    }


    printf("Sum of positive elements: %d\n", positive_result);
    printf("Sum of negative elements: %d\n", negative_result);

return 0;
}
