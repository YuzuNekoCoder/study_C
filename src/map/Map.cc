// マップの使い方
// std::map はキーでソートしてデータを管理するのに対し、 std::unordered_map はキーから計算するハッシュと呼ばれる値でデータを管理します。
// キーの順番を保持したい場合を除いて、パフォーマンスは常に std::unordered_map の方が優れています。

#include <iostream>
#include <map>
#include <unordered_map>

int main()
{
    std::map<std::string, int> persons = {
        {"Alice", 18},
        {"Bob", 20}};

    std::unordered_map<std::string, int> persons2 = {
        {"Alice", 18},
        {"Bob", 20}};

    // 要素参照
    persons["Alice"]; // 18
    persons2["Bob"];  // 20

    // 要素の追加
    persons.insert({"Eve", 19});

    // 要素の削除
    persons.erase("Bob");
}