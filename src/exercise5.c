#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
    float array1[10][3];
    float array2[3][10];
    float array_result[10][10];

    for(int i = 0; i < 10;i++)
    {
        for(int j = 0; j < 3;j++)
        {
            array1[i][j] = 1;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 10; j++)
        {
            array2[i][j] = 2;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            array_result[i][j] = 0;
            for(int k = 0 ; k < 3; k++)
            {
                array_result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    for(int i = 0 ; i < 10; i++)
    {
        for(int j = 0 ; j < 10; j++)
        {
            printf("%.3f ",array_result[i][j]);
        }
    }
}