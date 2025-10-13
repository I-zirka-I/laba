#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){

    double arr[10];
    int k = atoi(argv[1]);
    for (int i = 0; i < 10; i++){
        if (scanf("%lf", &arr[i]) != 1)
            return 1;
        }
     if(k>0){
        float arr2[10];
        for(int i=0;i<10;i++){
            arr2[(i+k)%10]=arr[i];
        }
        for(int i=0;i<10;i++){
            arr[i]=arr2[i];
        }
     }else{
        float arr2[10];
        for(int i=0;i<10;i++){
            arr2[i]=arr[(i-k)%10];
        }
        for(int i=0;i<10;i++){
            arr[i]=arr2[i];
        }

     }
     for(int i=0;i<10;i++){
        printf("%.3f ",arr[i]);

     }
    return 0;     
                  
            
        
     

}