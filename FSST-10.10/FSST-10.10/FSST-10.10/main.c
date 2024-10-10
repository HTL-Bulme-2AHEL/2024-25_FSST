#include <stdio.h>
#include <conio.h>
int main(void)
{
    char ch;
    printf("Enter key ESC to exit \n");
    while (1) {
        if (_kbhit) {
            ch = _getch();
            if ((int)ch == 27)
                break;
            printf("You have entered : %c\n", ch);
        }
    }

    return 0;
}