// #include <stdio.h>

// int main()
// {
//     char str[100];
//     char *ptr = str;

//     printf("Enter any string: ");
//     fgets(str, sizeof(str), stdin);

//     int length = 0;

//     while (*ptr != '\0')
//     {
//         length++;
//         ptr++;
//     }

//     if (*(ptr - 1) == '\n')
//     {
//         length--;
//     }

//     printf("The length of a string is: %d\n", length);

//     return 0;
// }

#include <stdio.h>

void calculateCubes(int (*arr)[2], int rows)
{
    printf("Cubes of all elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j] * arr[i][j] * arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter array's size: ");
    scanf("%d", &rows);

    int arr[rows][2];

    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    calculateCubes(arr, rows);

    return 0;
}