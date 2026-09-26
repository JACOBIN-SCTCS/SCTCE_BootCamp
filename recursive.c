
#include "stdio.h"


// return 1 if num is a power of two
// return 0 if num is not a power of two
int recursive_two(int num) {

    if(num == 0) {
        return 0;
    }

    if(num == 1) {
        return 1;
    }
    if(num%2 == 0) {
        int subproblemresult = recursive_two(num/2);
        if(subproblemresult == 0) {
            return 0;
        }
        else {
            return 1;
        }
    } else {
        return 0;
    }
}


int main() {
    int res = recursive_two(2);
    printf("Power of two  = %d\n" ,res);

    res = recursive_two(1024); 
    printf("Power of two  = %d\n" ,res);
    
    res = recursive_two(267); 
    printf("Power of two  = %d\n" ,res);
    
    return 0;

}
