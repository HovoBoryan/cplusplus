#include<iostream>
int main()
{
const int size = 6;
std::cout << "Please enter " <<size<<" numbers for array :"<<std::endl;
int arr[size];
int arrcoupl[size]{};

    for( int i = 0; i < size; ++i )
    {
        std::cin >> arr[i];
    }

    for( int i = 0; i < size / 2; ++i)
    {
        if( arr[i] %2 != 0)
            {
                 int swap = arr[i];
                 arr[i] = arr[size - 1 - i];
                 arr[size - 1 - i] = swap;
            }
    }
std::cout <<"your array in a modified state :"<<std::endl;

    for( int i = 0; i < size; ++i )
        {
            std::cout << arr[i] <<" , ";
        }
    return 0;    
}	