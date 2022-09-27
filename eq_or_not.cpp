#include<iostream>
int main()
{
const int size = 5;
int arr[size]{ 1 , 2 , 3 , 4 , 5 };
int arr1[size]{ 1 , 2 , 3 , 4 , 5 };
bool bl = true;
   

    for( int i = 0; i < size / 2; ++i )
    {
        if( arr[i] != arr1[i] )
            {
                bl = false;
                break;
            }
    }
    if( bl )
    {
        std::cout << "your arrays are equal :"<< std::endl;
    }
    else
    {
        std::cout << "your arrays are not equal :"<< std::endl;
    }

    return 0;    
}	