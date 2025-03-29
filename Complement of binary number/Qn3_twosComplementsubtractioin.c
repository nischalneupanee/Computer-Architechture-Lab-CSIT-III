//Write a program to subratct two binary number using 2s complement
#include <stdio.h>
#include <math.h>

void binary_subtraction(int numa[], int numb[], int diff[], int size) {
    int borrow = 0;
    for (int i = size - 1; i >= 0; i--) {
        diff[i] = numa[i] - numb[i] - borrow;
        if (diff[i] < 0) {
            diff[i] += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }
    }
}

void twos_complement(int numb[], int size) {
    int carry = 1;
    for (int i = size - 1; i >= 0; i--) {
        numb[i] = !numb[i];
        if (carry) {
            if (numb[i] == 0) {
                numb[i] = 1;
                carry = 0;
            } else {
                numb[i] = 0;
            }
        }
    }
}

void print_binary(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int numa[8] = {0}, numb[8] = {0}, diff[8] = {0};
    printf("\tSUBTRACTION USING TWO'S COMPLEMENT\n");
    printf("Enter two 8-bit binary numbers\n");

    printf("Enter first number: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numa[i]);
    }
    printf("Enter second number: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numb[i]);
    }
    
    twos_complement(numb, 8); // Convert second number to two's complement
    binary_subtraction(numa, numb, diff, 8);
    
    printf("\nDifference is: ");
    print_binary(diff, 8);
    
    return 0;
}