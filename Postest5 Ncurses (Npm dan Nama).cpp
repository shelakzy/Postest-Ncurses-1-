#include <ncurses.h>

using namespace std;

int main(){
	char npm[256];
	char nama[256];
	
	initscr();
	
	getstr(nama);
	scanw("%s",npm);	
	printw("Nama : %s\n",nama);
	printw("NPM : %s\n",npm);
	
	refresh();
	
	getch();
	
	endwin();	
}


