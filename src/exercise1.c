#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    
    double arr[10];
    double sum=0;
    for (int i = 0; i < 10; i++){
        if (scanf("%lf", &arr[i]) != 1)
            return 1;
        sum += arr[i];
    }
    printf("%.3f\n",sum/10);
    return 0;

}