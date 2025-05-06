// ラムダ式基本構文
// auto 変数名 = [ キャプチャ ]( 引数リスト ) -> 戻り値の型 { 処理内容 };
//
// キャプチャについて
// ラムダ式の外にある変数をラムダ式の中で使用する場合は、 ラムダ式先頭の [] 内でキャプチャと呼ばれるものの指定が必要です。
//
// 記述例 内容
// [=] ラムダ式定義時に存在する全ての変数をコピーしてラムダ式の中で使う
// [&] ラムダ式定義時に存在する全ての変数を参照してラムダ式の中で使う
// [a] 変数 a をコピーしてラムダ式の中で使う
// [&a] 変数 a を参照してラムダ式の中で使う
// [&a, b] 変数 a は参照し、変数 b はコピーしてラムダ式の中で使う
// [=, &a] 変数 a は参照し、それ以外はコピーしてラムダ式の中で使う
//
// 戻りの型をラムダ式内の型推論に任せる場合は省略可能
//
// キャプチャを持たないラムダ式であれば関数ポインタに暗黙変換することが可能
//

#include <iostream>
#include <functional>

int Add(int x, int y)
{
    return x + y;
}

int main()
{
    // auto 変数名 = [ キャプチャ ]( 引数リスト ) -> 戻り値の型 { 処理内容 };
    auto func = [](int a, int b) -> int
    {
        return a + b; // int を2つ受け取り、足した結果を返すラムダ式
    };

    int result = func(4, 6);
    std::cout << result << std::endl; // 10

    // キャプチャを指定
    int init = 5;

    // キャプチャを指定することで {} 内で変数 init を使うことができる
    auto f = [init](int a, int b)
    {
        return init + a * b; // コピーキャプチャ
    };
    auto g = [&init](int a, int b)
    {
        return init + a * b; // 参照キャプチャ
    };

    auto func1 = [](int x) -> int
    {
        return x * x; // int を引数とする
    };
    auto func2 = []() -> int
    {
        return 400; // 引数なし
    };
    auto func3 = []
    {
        return 400; // 戻り値の型の記述を省略した場合、 () ごと省略可能
    };

    // キャプチャを持たないラムダ式であれば関数ポインタに暗黙変換できる
    int (*fp)(int, int) = [](int x, int y)
    {
        return x + y;
    };

    auto pointa = fp(1, 1);
    std::cout << pointa << std::endl; // 2

    // std::function
    // 関数ポイントやラムダ式（キャプチャ含む）を保持することが可能
    // 関数ポインタのような複雑な構文が簡潔にできる

    std::function<int(int, int)> i = Add; // std::function<戻り値の型(引数の型)> 変数名
    int result_i = i(3, 5);               // f を介して関数 Add が実行される
    std::cout << result_i << std::endl;   // 8

    auto h = [](int x, int y)
    {
        return x * y; // ラムダ式も保持可能
    };
    std::cout << h(4, 7) << std::endl; // 28

    init = 0;

    // 【コピーキャプチャの場合】
    //  ラムダ式の定義時点で init がコピーされているので、ラムダ式内の init は 5
    int result_copy = f(2, 4);
    std::cout << result_copy << std::endl; // 13

    // 【参照キャプチャの場合】
    //  ラムダ式実行時の init の値が参照されるので、ラムダ式内の init は 0
    int result_ref = g(2, 4);
    std::cout << result_ref << std::endl; // 8

    return 0;
}