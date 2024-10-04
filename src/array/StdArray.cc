// より高機能な配列を使用したい場合
// ※C++11では初期化の際は二重に波括弧が必要

#include <array>

std::array<int, 5> x = {{0, 1, 2, 3, 4}}; // 要素数5のint型配列の宣言
std::array<int, 5> y = {0, 1, 2, 3, 4};   // C++14～

auto size = x.size(); // 要素数を取得