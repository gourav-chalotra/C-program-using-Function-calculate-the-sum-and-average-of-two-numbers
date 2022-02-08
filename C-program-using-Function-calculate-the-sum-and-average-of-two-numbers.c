// #include<stdio.h> 

// int main(){
//     int a ;
//     printf("The address of a is %u",&a);
//     return 0;
// }

#include<stdio.h> 

int main(){
    int i = 34;
    int *j = &i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the address of i is %u\n",&j);
    printf("the address of j is %u\n",*(&j));
    return 0;
}