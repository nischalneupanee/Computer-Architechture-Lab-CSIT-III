//WAP to convert binary into decimal
#include<stdio.h>
#include<math.h>

int main()
{
    int binarynum,rem,decimalnum = 0, i = 0;
    printf("Enter the binary number: ");
    scanf("%d",&binarynum);
    int original = binarynum;

    while(binarynum!=0)
    {
        rem = binarynum%10;
        decimalnum = decimalnum + rem * pow(2,i);
        binarynum = binarynum/10;
        i++;
    }

    printf("The binary number (%d) = (%d) in decimal number",original,decimalnum);
    return 0;
}