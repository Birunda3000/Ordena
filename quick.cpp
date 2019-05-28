#include <iostream>
#include "quicksort.hpp"



int main(){
    int array[] = {9,12,21,3,22,56,43,7,89,4};
    int n=10;
    quickSort(array,0,n-1); 
    for(int i=0;i<n;i++){
    	//vetor ordenado
        std::cout<<array[i]<< "  ";
    }
    std::cout<<std::endl;
    return 0;
}