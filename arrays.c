#include <stdio.h>         
int main()
{
    int n,i;
    int arr[100];
    //for 1d array
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n+1;i++){
        if (arr[i]>arr[i+1]){
            printf("%d\n",arr[i]);
        }
    }
    
    //for 2d array
   int disp[2][3];
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
    return 0;
}
