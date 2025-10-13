#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){

    double arr[10];
    double a=0.0;
    for (int i = 0; i < 10; i++){
        if (scanf("%lf", &arr[i]) != 1)
            return 1;
        }
    for(int j=0;j<5;++j){
        a=arr[j];
        arr[j]=arr[9-j];
        arr[9-j]=a;
    }
    for(int i=0;i<10;i++){
        printf("%.3f ",arr[i]);

    }
    return 0;
}