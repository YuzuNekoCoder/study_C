# テスト実行ファイルの作成
add_executable(test_main test_main.cpp)

# GoogleTestのパスを指定（brewで入れた場合）
target_include_directories(test_main PRIVATE /opt/homebrew/include)
target_link_libraries(test_main gtest gtest_main pthread)

add_test(NAME MyTests COMMAND test_main)