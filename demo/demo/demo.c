#include <stdio.h>

int main()
{
    int i, n;

    for(i = 1; i <= 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n > 0)
            printf("Positive\n");
        else if(n < 0)
            printf("Negative\n");
        else
            printf("Zero\n");
    }

    return 0;
}
