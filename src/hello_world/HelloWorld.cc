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

// 関数の引数の個数や型が異なる場合、同じ名前の関数を定義することができ、 これを（関数の）オーバーロードと呼ぶ。
void Print(int x)
{
    std::cout << "int: " << x << std::endl;
}

void Print(double x)
{
    std::cout << "double: " << x << std::endl;
}

void Print(int x, double y)
{
    std::cout << "int: " << x << " & " << "double: " << y << std::endl;
}

int Add(int x, int y)
{
    return x + y;
}

int main()
{
    HelloWorld(10);
    SayHello(); // 前方宣言しているためエラーなし。前方宣言なければコンパイルエラー

    Print(2);
    Print(2.1);
    Print(1, 2.1);

    // int (*fp)(int, int) = Add;        // 関数 Add のアドレスを保持する関数ポインタ fp
    auto fp = Add;                    // 簡略化
    int result = fp(3, 5);            // 関数ポインタ fp を介して関数 Add が実行される
    std::cout << result << std::endl; // 8

    return 0;
}

void SayHello()
{
    std::cout << "Hello" << std::endl;
}
