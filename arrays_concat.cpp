#include<iostream>
    
int main()
{
    const int size1 = 5;
    const int size2 = 5;
    int size = size1 + size2;
    int arr[size];
    int arr1[size1]{ 1,2,3,4,5 };
    int arr2[size2]{ 1,2,3,4,5 };
    
    for( int i = 0; i < size1; ++i)
    {
        arr[i] = arr1[i];
    }
    for( int i = size1 , j = 0; i < size ; ++i , ++j )
    {
        arr[i] = arr2[j];
    }
    for( int i = 0; i < size; ++i )
    {
        std::cout << arr[i]<<" ";
    }
    
 return 0;    

}