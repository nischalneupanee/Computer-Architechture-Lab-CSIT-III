//WAP to subtract two binary numbers
#include <stdio.h>

int subtractBinary(int a, int b)
{
    int result = 0, borrow = 0, place = 1;
    
    while (a > 0 || b > 0)
    {
        int bit1 = a % 10; // Extract last bit of a 
        int bit2 = b % 10; // Extract last bit of b 

        if (borrow)
        {
            if (bit1 == 1)
            {
                bit1 = 0;
                borrow = 0;  // Borrow is repaid
            }
            else
            {
                bit1 = 1; // Continue borrowing
            }
        }

        int subBit;
        if (bit1 >= bit2)
        {
            subBit = bit1 - bit2;
        }
        else
        {
            subBit = (bit1 + 2) - bit2; // Borrowing
            borrow = 1;
        }

        result = result + (subBit * place); // Append bit result
        place *= 10; // Move to the next binary place
        a /= 10; // Remove last bit from a
        b /= 10; // Remove last bit from b
    }

    return result;
}

int main()
{
    int a, b;
    printf("Enter first binary number and second binary number: ");
    scanf("%d %d", &a, &b);

    int result = subtractBinary(a, b);
    printf("Subtraction %d - %d = %d\n", a, b, result);

    return 0;
}
