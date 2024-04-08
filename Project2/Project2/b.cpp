#include <graphics.h>
#include <conio.h>
void main()
{
	initgraph(640, 480);
	setcolor(YELLOW);
	setfillcolor(GREEN);
	fillcircle(100, 100, 20);
	system("pause");
}