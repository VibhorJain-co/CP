#include <stdio.h>

int main(){
     int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++){
        int n;
        scanf("%d",&n);
        long long arr[n];
        for(int j=0;j<n;j++){
            scanf("%lld",&arr[j]);
        }

    //correct till here
        
        long long max = 0;

        long long coins = 0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                max = (max<(arr[i-1] - arr[i])) ? arr[i-1] - arr[i] : max ;
                coins += arr[i-1] - arr[i];
                arr[i] = arr[i-1];
            }
        }


        printf("%lld\n",coins+max);

    }

    return 0;
}