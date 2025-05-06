cmake_minimum_required(VERSION 3.10)
project(MyProject)

# C++のバージョン指定
set(CMAKE_CXX_STANDARD 17)

# include と src ディレクトリ
include_directories(include)
add_executable(main src/study/main.cpp)

# Google Test のテスト用設定
# enable_testing()
# add_subdirectory(test)