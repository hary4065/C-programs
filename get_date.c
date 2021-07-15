#include <windows.h>
#include <stdio.h>
int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d/%d/%d\n", stime.wDay, stime.wMonth, stime.wYear);
    printf("%d/%d/%d:%d", stime.wHour, stime.wMinute, stime.wSecond, stime.wMilliseconds);
    return 0;
}
