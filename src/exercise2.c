#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a=0;
    for(int j=0;j<5;++j){
        a=arr[j];
        arr[j]=arr[9-j];
        arr[9-j]=a;
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);

    }
    return 0;
}