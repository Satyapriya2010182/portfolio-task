#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);

    int arr[n],i;
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
}