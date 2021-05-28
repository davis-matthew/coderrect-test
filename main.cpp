#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <omp.h>

int main(){
    int should_be_four = 0, thread_counter = 0;

    //--------------Race 1------------------//
    #pragma omp parallel for //reduction(+:var)
    for(int i =0;i<4;i++){ should_be_four++; }
    
    //--------------Race 2------------------//
    #pragma omp parallel 
    {
        //#pragma omp critical
        //{    
            thread_counter++; 
        //}
    }

    //--------------Output-----------------//
    printf("should_be_four = %d, thread_counter = %d (should be %d)\n",should_be_four,thread_counter,omp_get_max_threads());
}
