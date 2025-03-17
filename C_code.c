/*
 * Author: Guanrui Huang
 *
 * Description: The program is aimed at finding the difference between 
 * two nearby parameters and printing and recording it into an array.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    // at least two nums are required to run the program
    if(argc<3){
        printf("Usage: num1 num2 [num3 ...]\n");
        return 0;
    }

    // print nums that received
    printf("Received %d nums:\n", argc -1);

    // print the all nums
    for(int i=1; i<argc; i++){
        printf("%2d:%s\n", i, argv[i]);
    }

    // dynamic memory allocation
    double *arr = calloc(argc-2, sizeof(int));
   
    //if the array is NULL
    if(!arr){
        printf("Memory allocation failed!\n");
        return 0;
    }

    // use loop to calculate the difference between two nearby parameters
    for(int i=1; i<=argc-2; i++){
        arr[i - 1] = (strtod(argv[i], NULL) - strtod(argv[i + 1], NULL));
        printf("%.2f ", arr[i - 1]);
    }

    printf("\n");
    free(arr); 
    return 0;
}