#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = atoi(argv[1]);
    int k = atoi(argv[2]);
    for(int i=9;i!=k;i--){
        arr[i]=arr[i-1];

    }
    arr[k]=x;
    for(int i =0;i<10;i++){
        printf("%d ", arr[i]);
    }

   
return 0;
}