// 関数に配列を渡す場合、特性上配列の先頭要素へのポインタを渡すことになってしまうため
// 関数に配列を渡す場合は、配列の先頭要素へのポインタと要素数をセットで渡す必要がある

#include <iostream>

void PrintArray(const int *x, std::size_t num)
{
    for (std::size_t i = 0; i < num; ++i)
    {
        std::cout << x[i] << std::endl;
    }
}

int main()
{
    constexpr std::size_t num = 5; // 配列の要素数
    int x[num] = {0, 1, 2, 3, 4};

    PrintArray(x, num); // 配列の先頭要素のポインタと一緒に要素数を渡す

    return 0;
}