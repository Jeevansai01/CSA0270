#include <stdio.h>

int main(void)
{
    initscr();
    noecho();
    cbreak();

    char ch;
    FILE * ptr;
    ptr = fopen("input.txt","r");

    if (ptr == NULL)
    {
        mvprintw(0,0,"Error reading from file");
        exit(1);
    }

    while( ( ch = fgetc(ptr) ) != EOF )
    mvprintw(0,0,"%c",ch);
    refresh();

    fclose(ptr);
    return 0;
}