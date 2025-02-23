//WAP to convert decimal number into binary number
#include<stdio.h>

int main()
{
    int decimalnum,rem,binarynum = 0,original, weight = 1;
    printf("Enter the decimal number: ");
    scanf("%d",&decimalnum);
    original = decimalnum;

    while( decimalnum !=0)
    {
        rem = decimalnum % 2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum+ rem * weight;
        weight *= 10;
    }

    printf("The decimal number(%d) = (%d) in binary number",original,binarynum);
    return 0;
}