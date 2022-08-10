#include <iostream>
#include "config.h"
using namespace std;

#ifdef LINUX_OS
#include "log/log.h"
#else
#include <windows.h>
#endif

int main()
{

#ifdef LINUX_OS
    Console::log("The platform is Linux");
#else
    // 背景色: 黑色, 字体色: 红色
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    std::cout << "[LOG] ";

    // 背景色: 黑色, 字体色: 白色. 也就是恢复默认颜色
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    std::cout << "The platform is Windows" << std::endl;
#endif

    return 0;
}
