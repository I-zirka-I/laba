#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv){
    double arr[10];
    int x = atoi(argv[1]);
    int k = atoi(argv[2]);
    for (int i = 0; i < 10; i++){
        if (scanf("%lf", &arr[i]) != 1)
            return 1;
        }
    for(int i=9;i!=k;i--){
        arr[i]=arr[i-1];

    }
    arr[k]=x;
    for(int i =0;i<10;i++){
        printf("%.3f ", arr[i]);
    }

   
return 0;
}