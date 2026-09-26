



#include "stdio.h"
int main() {

    int a = 343;
    int *p = &a;

    printf("Address of a = %p\n", &a);
    printf("\nValue inside pointer %p\n",p);

   
    printf("------------");
    
    int **z ;
    z = &p;
    
    printf("Address of z = %p\n", &z);
    printf("Value inside z = %p\n",z);

  
    printf("Address of p = %p\n", &p);
    printf("Value inside p = %p\n",p);


    printf("Address of a = %p\n", &a);
    printf("Value inside a = %d\n",a);


    int arr[3] = {120,140,160};
    printf("\n--------------------\n");
    printf("Address of starting element = %p\n", arr);
    printf("Value of first element = %d\n", arr[0]);
    printf("Value of first element = %p\n", &arr[1]);


    int  *arr_ptr = arr;
    printf("Value of arr_ptr = %p\n", arr_ptr);
    printf("Value of element pointer = %d\n", *arr_ptr);

    printf("Second Element of array = %d", *(arr_ptr+1));


    printf("\n\n***************\n\n\n");
    int mat[3][3] = {
        {40,50,60},
        {400,450,480},
        {520,560,580}
    };


    printf("Address of starting element = mat[0][0] %p\n", mat);
    printf("Address of the second row = %p\n", &mat[1]);

    printf("Value of first element in second row = %d\n", *(mat[1]));
 
    printf("Value of first element in third row = %d\n", *(mat[2]));


    printf("Value of first element in second row = %d\n", *(*(mat+1)));
    printf("Value of first element in third row = %d\n", *(*(mat+2)));


    printf("\nValue of mat[2][1] %d\n", *(*(mat+2)+1));
    
    printf("Unknwon value = %d" , *(*(mat+0)+0));
    printf("Unknwon value = %d" , **mat);
    return 0;
}
