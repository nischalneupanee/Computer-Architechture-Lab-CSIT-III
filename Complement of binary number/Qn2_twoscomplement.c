#include <stdio.h>

int main() {
    int arr[8];
    printf("Enter an 8-bit binary number: ");
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
 
    for (int i = 0; i < 8; i++) {
        arr[i] = (arr[i] == 1) ? 0 : 1;
    }

    int carry = 1;
    for (int i = 7; i >= 0; i--) {  
        if (arr[i] == 0) {
            arr[i] = 1;
            carry = 0;
            break;
        } else {
            arr[i] = 0;
        }
    }

    // Print the result
    printf("Two’s complement: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
