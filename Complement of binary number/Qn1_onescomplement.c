#include<stdio.h>

int main()
{
    int arr1[8];
    printf("Enter the input number: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr1[i]== 1)
        {
         arr1[i] = 0;
        }
         else
         {
            arr1[i] = 1;
         }
        
    }

    printf("Ones comeplement is");
    for (int  i = 0; i < 8; i++)
    {
        printf("%d",arr1[i]);
    }
    
    
    
}
