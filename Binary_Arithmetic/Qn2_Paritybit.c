//Write a program to determine the parity bit (even|odd)

#include<stdio.h>

int main()
{
    unsigned char num;
    int count = 0, temp;

    //Get input from user
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu",&num);

    temp = num;

    //Counts number in 1 from the given input
    while(temp>0)
    {
        count += temp&1;
        temp>>=1;
    }

    //Determine parity bits
    int even_paritybit = (count%2 == 0) ? 0:1;
    int odd_paritybit = (count%2 == 0) ? 1:0;

    printf("Number : %d (Binary equivalent has %d ones)\n",num,count);
    printf("Even Parity Bit: %d\n",even_paritybit);
    printf("Even Parity Bit: %d\n",odd_paritybit);
    return 0;
}
