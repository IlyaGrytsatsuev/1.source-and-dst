
#include <iostream>
#include "func.hpp"
void change (int *arr, int n, int src, int dst){
    for (int i = 0; i < n; i++){
        if (arr[i] == src){
            arr[i] = dst;
        }
    }
}
