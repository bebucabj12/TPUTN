#include <iostream>
using namespace std;
#include <cstring>
#include "lib/rlutil.h"
using namespace rlutil;
#include "lib/function.h"

void array_initialize(int array[], int qty){
    for(int i = 0; i < qty; i++){
        array[i] = 0;
    }
}