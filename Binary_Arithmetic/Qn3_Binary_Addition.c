//WAP to add two binary numbers
#include <stdio.h>

int addBinary(int a, int b)
{
    int result = 0, carry = 0, place = 1;

    while (a > 0 || b > 0 || carry > 0)
    {
        int bit1 = a % 10; // Extract last bit of a
        int bit2 = b % 10; // Extract last bit of b
 
        int sum = bit1 + bit2 + carry; // Binary sum of bits

        int sumBit = sum % 2;  // Result bit (0 or 1)
        carry = sum / 2;  // Carry (1 if sum is 2 or 3)

        result = result + (sumBit * place); // Append bit to result
        place *= 10; // Move to the next binary place

        a /= 10; // Remove last bit from a
        b /= 10; // Remove last bit from b
    }

    return result;
}

int main()
{
    int a, b;
    printf("Enter two binary numbers: ");
    scanf("%d %d", &a, &b);

    int result = addBinary(a, b);
    printf("Addition of %d + %d = %d\n", a, b, result);

    return 0;
}
