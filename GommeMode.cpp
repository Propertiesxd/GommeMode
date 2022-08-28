#include <iostream>
#include <windows.h>
int main()
{
    static int gommemode = 1;
    static int macher = 0;
    if (gommemode > macher) {
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=2h1BJCxtNes", 0, 0, NULL);
        std::cin.get();
    }
}
