#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr_num[n];
    for (i=0;i<n;i++) {
        printf("Enter %dth element of your array :",i);
        scanf("%d",&arr_num[i]);
    }
    for (j=0;j<n;j++) {
        sum+=arr_num[j];

    }
    printf("The sum your array is: %d ",sum);
    return 0 ;
}