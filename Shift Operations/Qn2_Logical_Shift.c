//Write a program to demonstrate implementation of Logical Shift Operations.
#include <stdio.h>

void print_output1(int num[8])
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
}

//Logical Left Shift
void logical_left_shift(int num[8])
{
    int result[8];
    for (int i = 0; i < 7; i++)
    {
        result[i] = num[i + 1];
    }
    result[7] = 0;
    printf("Logical Left Shift : ");
    print_output1(result);
}


//Logical Right Shift
void logical_right_shift(int num[8])
{
    int result[8];
    for (int i = 7; i > 0; i--)
    {

        result[i] = num[i - 1];
    }
    result[0] = 0;
    printf("Logical right shift: ");

    print_output1(result);
}

int main()
{
    int num[8];
    printf("Enter the eight bit number: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }

    logical_left_shift(num);
    logical_right_shift(num);
    return 0;
}