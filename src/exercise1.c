#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    
    float arr[10];
    float sum=0;
    for(int i=0; i<10;i++){
        arr[i] = atof(argv[i+1]);
        sum += arr[i];
    }
    printf("%.3f\n",sum/10);
    return 0;

}