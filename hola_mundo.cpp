/******************************************************************************
A01797418 - Luis Manuel Mendoza Cruz
A01797418@tec.mx

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel
   {    
        //int ID = 0;
        int ID = omp_get_thread_num();
        printf("Hello(%d)",ID);
        printf(" world(%d)",ID);
        printf("\n");
    }
    return 0;
}