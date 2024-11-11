#include <stdio.h>

/* https://codeforces.com/contest/2005/problem/B1 
    B1. The Strict Teacher (Easy Version)*/


int min(int x,int y){
    return ((x<y) ? x:y);
}

int max(int x,int y){
    return ((x>y) ? x:y);
}

int main(){
    int TestCases;
    scanf("%d",&TestCases);

    for (int t=0;t<TestCases;t++){
        int n,m=2,q=1;  //1->n
        scanf("%d%d%d",&n,&m,&q);

        int tPosn[m];
        for(int i=0;i<m;i++){
            scanf("%d",&tPosn[i]);
        }

        int David;
        scanf("%d",&David);
        int dist = 0;
        if(David>=1 && David<min(tPosn[0],tPosn[1])){
            dist = min(tPosn[0],tPosn[1]) - 1;
            // printf("1\n");
        }else if(David>min(tPosn[0],tPosn[1]) && David<max(tPosn[0],tPosn[1])){ //NOT SO SIMPLE

            dist = (max(tPosn[0],tPosn[1])-min(tPosn[0],tPosn[1]))/2;

            // dist = min(David-min(tPosn[0],tPosn[1]), max(tPosn[0],tPosn[1]) - David);
            // printf("2\n");

        }else if(David>max(tPosn[0],tPosn[1])  && David<=n){
            dist = n - max(tPosn[0],tPosn[1]) ;
            // printf("3\n");
        }else if(David == max(tPosn[0],tPosn[1]) || David == min(tPosn[0],tPosn[1])){
            dist = 0 ;
        }else{
            printf("UNKNOWN");
        }

        printf("%d\n",dist);



    //     printf("%d %d %d\n",n,m,q);

    //     for(int i=0;i<m;i++){
    //         printf("%d ",tPosn[i]);
    //     }
    //     printf("\n%d",David);
    }

    return 0;
}