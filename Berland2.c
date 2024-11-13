#include <stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++){
        int n;
        scanf("%d",&n);
        int p[n];
        for(int i=0;i<n;i++){
            scanf("%d",p[i]);
        }
        // char str1[n+1];
        // scanf("%s",str1);

        char str[n+1];
        scanf("%s",str);
        
        int arr0[n][2],arr1[n][2];
        int len0=0,len1=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                arr0[len0][0] = i;
                arr0[len0][1] = p[i-1];
                len0++;
            }else if(str[i]=='1'){
                arr1[len1][0] = i;
                arr1[len0][1] = p[i-1];
                len1++;
            }
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(arr0[i][1]>arr0[i+1][1] && j<len0-1){
                    int temp = arr0[i][1];
                    arr0[i+1][1] = arr0[i][1];
                    arr0[i+1][1] = temp;

                    temp = arr0[i][0];
                    arr0[i+1][0] = arr0[i][0];
                    arr0[i+1][0] = temp;
                }

                if(arr1[i][1]>arr1[i+1][1] && j<len1-1){
                    int temp = arr1[i][1];
                    arr1[i+1][1] = arr1[i][1];
                    arr1[i+1][1] = temp;

                    temp = arr1[i][0];
                    arr1[i+1][0] = arr1[i][0];
                    arr1[i+1][0] = temp;
                }
            }   
        }

        int count = 1;
        int q[n];

        for(int i=0;i<len0;i++){
            q[arr0[i][0]] = count++;
        }
        for(int i=0;i<len1;i++){
            q[arr1[i][0]] = count++;
        }

        for(int i=0;i<n;i++){
            printf("%d",q[i]);
        }
    }

    return 0;
}