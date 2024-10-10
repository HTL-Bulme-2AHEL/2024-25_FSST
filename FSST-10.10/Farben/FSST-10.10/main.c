#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//Vordergrund
#define FG_DEFAULT "\x1b[39m"
#define FG_BLACK "\x1b[30m"
#define FG_RED "\x1b[31m"
#define FG_GREEN "\x1b[32m"
#define FG_YELLOW "\x1b[33m"
#define FG_BLUE "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_CYAN "\x1b[36m"
#define FG_LIGTHGREY "\x1b[37m"
#define FG_DARKGREY "\x1b[90m"
#define FG_LIGHTRED "\x1b[91m"
#define FG_LIGHTGREEN "\x1b[92m"
#define FG_LIGHTYELLOW "\x1b[93m"
#define FG_LIGHTBLUE "\x1b[94m"
#define FG_LIGHTMAGENTA "\x1b[95m"
#define FG_LIGHTCYAN "\x1b[96m"
#define FG_WHITE "\x1b[97m"

/*Background*/
#define BG_DEFAULT "\x1b[49m"
#define BG_BLACK "\x1b[40m"
#define BG_RED "\x1b[41m"
#define BG_GREEN "\x1b[42m"
#define BG_YELLOW "\x1b[43m"
#define BG_BLUE "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN "\x1b[46m"
#define BG_LIGTHGREY "\x1b[47m"
#define BG_DARKGREY "\x1b[100m"
#define BG_LIGHTRED "\x1b[101m"
#define BG_LIGHTGREEN "\x1b[102m"
#define BG_LIGHTYELLOW "\x1b[103m"
#define BG_LIGHTBLUE "\x1b[104m"
#define BG_LIGHTMAGENTA "\x1b[105m"
#define BG_LIGHTCYAN "\x1b[106m"
#define BG_WHITE "\x1b[107m"

void cursor_gotoxy(int spalte, int zeile)
{
    COORD coord;
    coord.X = spalte;
    coord.Y = zeile;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(void) {
	printf("F A R B E N\n");
	printf("===========\n");

	// Warten auf Eingabe von Enter
    {
        char ch;
        printf("\n\nDruecke Enter fuer das naechste\n\n");
        while (1) {
            if (_kbhit) {
                ch = _getch();
                if ((int)ch == 13)
                    break;
            }
        }
    }

	// Vordergrund setzen
    printf("\x1b[91mDieser Text ist rot\n");
    printf("%sDieser Text ist wieder normal\n", FG_DEFAULT);

    // Warten auf Eingabe von Enter
    {
        char ch;
        printf("\n\nDruecke Enter fuer das naechste\n\n");
        while (1) {
            if (_kbhit) {
                ch = _getch();
                if ((int)ch == 13)
                    break;
            }
        }
    }

    // Hintergund setzen
    printf("%s%sDieser Text ist Hellgelb mit blauem Hintergrund\n", FG_LIGHTYELLOW, BG_BLUE);

    // auf default zurücksetzen
    printf("%s%s\n\n", FG_DEFAULT, BG_DEFAULT);



    // Cursor setzten


    cursor_gotoxy(30, 10);
    printf("*");
    getchar();

    return 0;
}