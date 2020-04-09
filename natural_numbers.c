#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter number of elements: ");
    int quantity;
    scanf("%d", &quantity);

    if(quantity > 100)
    {
        printf("You have specified too many elements in the array!");
    }

    printf("Enter the next elements separating them with a space: ");
    int natural_numbers[quantity];

    int i = 0;
    scanf ("%d", &natural_numbers[i++]);

    while(getchar() != '\n' && i<quantity)
    {
        scanf("%d", &natural_numbers[i++]);
    }

    printf("Duplicate numbers: ");
    for(int j=0; j<quantity; j++)
    {
        for(int k = j+1; k < quantity; k++)
        {
            if(natural_numbers[j] == natural_numbers[k])
            {
                printf("%d ", natural_numbers[j]);
            }
        }
    }

    return 0;
}
