#include<iostream>
int main()
{
    int num = 100;
    short sh = 20;
    float fl = 3.14;
    int *ptr1 = &num; 
    short *ptr2 = &sh;
    float *ptr3 = &fl;
    
    std::cout << ptr1 << "\n" << ptr2 << "\n" << ptr3 << std::endl;
    
    return 0;
}