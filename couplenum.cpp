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
int j = 0;

    for( int i = 0; i < size; ++i)
    {
        if( arr[i] %2 != 0)
            {
                 arrcoupl[j] = arr[i];
                    ++j;
            }
    }
std::cout <<"you have in your array "<<j<<" couple numbers"<<std::endl;

    for( int i = 0; i < j; ++i)
        {
    std::cout << arrcoupl[i] <<" , ";
        }
    return 0;    
}	