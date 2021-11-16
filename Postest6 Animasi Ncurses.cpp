#include <ncurses.h>
#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	
	initscr();
	start_color();
	init_pair(1,COLOR_YELLOW,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_RED);
	init_pair(3,COLOR_GREEN,COLOR_RED);
	attron(COLOR_PAIR(1));
	
	printw("Shela rana kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("sHela rana kezyah");
	refresh();
	Sleep(1000);	
	clear();
	
	printw("shEla rana kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("sheLa rana kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shelA rana kezyah");
	refresh();
	Sleep(1000);
	clear();
	attroff(COLOR_PAIR(1));
	
	attron(COLOR_PAIR(2));
	printw("shela Rana kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela rAna kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela raNa kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela ranA kezyah");
	refresh();
	Sleep(1000);
	clear();
	attroff(COLOR_PAIR(2));
	
	attron(COLOR_PAIR(3));
	printw("shela rana Kezyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela rana kEzyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela rana keZyah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela rana kezYah");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela rana kezyAh");
	refresh();
	Sleep(1000);
	clear();
	
	printw("shela rana kezyaH");
	refresh();
	Sleep(1000);
	clear();
	
	getch();
	
	endwin();
}
