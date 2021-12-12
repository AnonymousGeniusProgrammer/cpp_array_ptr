#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Hello array and pointer" << std::endl;
    char a[3]={'1', '2', '3'};
    char* ptr_a = &a[0];
    std::cout << "What is a: " << a << std::endl;
    std::cout << "What is ptr_a: " << ptr_a << std::endl; 

    std::cout << "Now we are investigating the 2-D array: " << std::endl;
    int n[2][2] = {1,2,3,4};
    int n1[2] = {1,2}; 
    std::cout << "n points to: " << **n << std::endl;
    std::cout << "n1 points to: " << *n1 << std::endl;

    printf("The value of n: %d and value of *n: %d should be the same. But n+1: %d and *(n+1): %d are not the same\n", n, *n, n+1, *n+1);
    printf("n+1 is the address head of the second 1-d array n+1=%d; *(n+1)=%d\n", n+1, **(n+1));
    // printf("n+1 is the address head of the second 1-d array n+1=&d\n", n+1);
    
    return 0;
}