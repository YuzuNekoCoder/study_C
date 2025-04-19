// vectorの使い方
// 要素数を実行時に変更できる配列

#include <iostream>
#include <vector>
#include <initializer_list>

int main()
{
    std::vector<int> x = {0, 1, 2, 3, 4};

    // 要素数の取得
    auto size1 = x.size();

    // 要素を末尾へ追加
    x.emplace_back(5);
    // x.push_back(7);

    // 末尾から要素を削除
    x.pop_back();

    // 先頭のポインタを取得
    auto px = x.data(); // 先頭ポインタ
    auto num = *px;
}