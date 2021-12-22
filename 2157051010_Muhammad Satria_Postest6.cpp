#include <ncurses.h>
#include <windows.h>
#include <string>
using namespace std;

int main(){
			
	initscr();
	
	char kapital[]= {"muhammad satria aulia"};
	
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);		
	
	for(int a=0;a<sizeof(kapital);a++){
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	
	attron(COLOR_PAIR(a%3+1));
	kapital[a]= toupper (kapital[a]);
	printw(kapital);
	refresh();
	Sleep(900);
	
	kapital[a]= tolower (kapital[a]);
	refresh();
	clear();
	attroff(COLOR_PAIR(a%3+1));
}
	getch();
	
	endwin();
}
