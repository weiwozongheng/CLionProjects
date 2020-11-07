#include <stdio.h>

// 说明：在windows 操作系统和 linux操作系统下，生成源码不一样!!!
/*
#include <windows.h>

int main() {
    Sleep(5000); // 毫秒
    puts("hello, 尚硅谷~"); // 输出
    getchar();
    return 0;
}
*/

// 如果是windows平台, 就执行 #include <windows.h>
#if _WIN32

#include <windows.h>
// 否则判断是不是linux ,如果是linux 就引入<unistd.h>
#elif __linux__
#include <unistd.h>
#endif

int main() {
    // 不同的平台下调用不同的函数
    #if _WIN32  // 识别windows平台
        Sleep(5000); // 毫秒
    #elif __linux__  // 识别linux平台
        sleep(5); // 秒
    #endif

    puts("hello, 尚硅谷~"); // 输出

    getchar();

    return 0;
}
