// イテレータとはコンテナ内での要素の位置を指すもので、 ポインタのように扱うことができます
// イテレータを使用することで コンテナの種類に依存しないで処理を共通化できます

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> x = {0, 1, 2, 3, 4};

    // begin() でコンテナ内の先頭要素を指すイテレータを取得
    auto it = x.begin();

    // イテレータを使用して要素を出力
    std::cout << *it << std::endl; // 0

    // イテレータを1つ進める
    ++it;

    // イテレータを使用して要素を出力
    std::cout << *it << std::endl; // 1
}