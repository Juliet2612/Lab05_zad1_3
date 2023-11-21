#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    int a, b, c, max;
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    printf( "\nPodaj a, b, c: " );
    scanf( "%d%d%d", &a, &b, &c );

    max = (a>b) ? a : b;
    max = (c>max) ? c : max;
    printf("\nwersja A\nMaksimum z (%d, %d, %d) to: %d\n", a, b, c, max);
    fflush(stdin);
    getchar();

    max = (a > b) ? a : b;
    printf("\nwersjaB\nMaksimum z (%d, %d, %d) to: %d\n",

           a, b, c, (c > max) ? c : max );

    fflush(stdin);
    getchar();
    return 0;
}