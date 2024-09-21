#include <iostream>
#include <string>

void print(std::string str, int count)
{
    for(int i = 0; i < count; ++i)
    {
        std::cout<<str<<"\n";
    }
    
}

int main()
{

    print("Hello world", 5);

    return 0;
}