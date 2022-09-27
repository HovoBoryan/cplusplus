#include<iostream>
    void minmaxind( char*,const int );
    int vowel( char*,int );
    void arayrev( char*,int );
    void rev_orig_arr( char*,int );
    void cap_to_smaal( char*,int);
int main()
{
     const int size = 12;
     char arr[size]{'C','h','e','e','s','e','B','u','r','g','e','r'};
     
     minmaxind( arr , size );
     std::cout << "you have "<< vowel( arr , size ) <<" vowels in your charcter array  "; 
     arayrev( arr , size );
     
     std::cout << std::endl;
     
     std::cout <<"your array in capital laters       ";
     cap_to_smaal( arr,size );
     
     std::cout << std::endl;
     
     std::cout <<"your characters array in reverse   ";
     rev_orig_arr( arr,size );
     
    return 0;
}
void minmaxind( char*arr,const int size )
{
    int min = arr[0];
    int max = arr[0];
    
    for( int i = 1; i < size;++i )
    {
        if( min >= arr[i] )
        {
            min = arr[i];
        }
        if( max <= arr[i] )
        {
            max = arr[i];
        }
    }
        std::cout << min <<" - is the minimum characters value of your array :"<< std::endl;
        std::cout << max <<" - is the maximum characters value of your array :"<< std::endl;
}

int vowel( char* arr,int size )
{
    const int size1 = 10;
    char charr[ size1 ]{ 'A','a','E','e','I','i','O','o','U','u'};
    int vowcount = 0;     
    for( int i = 0; i < size; ++i )
    {
       for( int j = 0; j < size1; ++j )
       {
           if( arr[i] == charr[j] )
           {
               ++vowcount;
           }
       }
    }
    return vowcount;
}

void arayrev( char*arr , int size )
{
  for( int i = size - 1; i >= 0; --i )
  {
        std::cout << arr[i] << " , ";
  }
}
void rev_orig_arr( char* arr,int size )
{
    for( int i = 0; i < size / 2; ++i )
    {
        char ch = arr[i];
        arr[i] = arr[size - 1-i];
        arr[size - 1-i] = ch;
    }
    for( int i = 0; i < size; ++i )
    {
        std::cout << arr[i]<<", ";
    }
}
void cap_to_smaal( char*arr,int size )
{
    for( int i = 0; i < size; ++i )
    {
        if( arr[i] >= 'a' && arr[i] <= 'z' )
        {
            arr[i] -= 32;
        }
    } 
    
    
    for( int i = 0; i < size; ++i )
    {
        std::cout << arr[i] << ", ";
    }    
}
