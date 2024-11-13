#include <stdio.h>

/*https://codeforces.com/problemset/problem/1985/C
    C. Good Prefixes*/

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

        long long req = 0,max = 0,sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                sum +=max;
                max = arr[i];
            }else if (arr[i]<=max){
                sum +=arr[i];
            }

            if(max == sum){
                req++;
            }
        }
        printf("%lld\n",req);
    }
    
    return 0;
}