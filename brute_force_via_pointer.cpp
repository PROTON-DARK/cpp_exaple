#include <iostream>
  
int main()
{
    const int n = 5;
    int nums[n]{1, 2, 3, 4, 5};
 
    for(int *ptr{nums}; ptr<=&nums[n-1]; ptr++)
    {
        std::cout << "address=" << ptr << "\tvalue=" << *ptr << std::endl;
    }
}
