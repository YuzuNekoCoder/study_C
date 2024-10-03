#include <iostream>

// ソースコードは上から順に解釈されるため、呼び出しもとよりも上に記述する必要あり

void HelloWorld(int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << "[" << i << "]" << "Hello World!" << std::endl;
    }
}

int main()
{
    HelloWorld(10);
    // SayHello(); これはコンパイルエラーになる

    return 0;
}

// void SayHello()
// {
//     std::cout << "Hello" << std::endl;
// }