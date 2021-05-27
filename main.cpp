#include <pthread.h>
#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

int var = 3;
void* incthread(void* tid){
    var++;
}

int main(){
    pthread_t t1;
    pthread_create(&t1,NULL,incthread,NULL);
    var = 2;
    //--------------------------------------//
    int arr[] = {1,2,3,4};    
    #pragma omp parallel for
    for(int i =1;i<4;i++){
        arr[i] = arr[i-1] + 20;
    }






    printf("var = %d\n",var);
    printf("arr = {");
    for(int i = 0;i<4;i++){
        printf("%d,",arr[i]);   
    }
    puts("\b}");
}
