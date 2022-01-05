// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
 int temp=0;
 int high=n-1;
 int low=0;
 int mid=0;
  while(mid<=high){
  switch(a[mid]){
     case 0:{
        temp=a[low];
        a[low]=a[mid];
        a[mid]=temp;
        mid++;
        low++;
        break;
        
        
     }
     case 1:{
         mid++;
         break;
         
     }
     case 2:{
         temp=a[high];
         a[high]=a[mid];
         a[mid]=temp;
         high--;
        
         break;
     }
  }      
      
  }};
  

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends