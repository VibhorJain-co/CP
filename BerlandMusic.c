#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

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

        int mono[n];
        long long str;
        
        scanf("%lld",&str);

        for(int i=0;str>0;i++){
            mono[i] = str%10;
            str = str/10;
        }

        int arr0[n],arr1[n];

        for(int i=0;i<n;i++){
            arr0[i]=-1;
            arr1[i]=-1;
        }

        int len0=0,len1=0;
        for(int i=0;i<n;i++){
            if(mono[i]==0){
                arr0[len0] = mono[i];
                len0++;
            }else if(mono[i]==1){
                arr1[len1] = mono[i];
                len1++;
            }
        }

        

    }

    return 0;
}