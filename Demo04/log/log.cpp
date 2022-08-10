#include "log.h"

void Console::log(std::string str)
{
    // 控制台输出的[LOG]会被青色高亮
    std::cout << "\033[36m"
              << "[LOG] "
              << "\033[0m" << str << std::endl;
}
