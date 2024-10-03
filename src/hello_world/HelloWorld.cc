#include <iostream>

// ソースコードは上から順に解釈されるため、呼び出しもとよりも上に記述する必要ありだが、前方宣言で回避可能

void SayHello();

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
    SayHello(); // 前方宣言しているためエラーなし。前方宣言なければコンパイルエラー

    return 0;
}

void SayHello()
{
    std::cout << "Hello" << std::endl;
}
