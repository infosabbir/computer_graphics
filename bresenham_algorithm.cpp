
#include <iostream>
#include <graphics.h>
using namespace std;

void bresenham(int x1, int y1, int x2, int y2);
int main()
{
    int x1,y1,x2,y2;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    bresenham(x1,y1,x2,y2);

    getch();
    closegraph();
    return 0;
}
void bresenham(int x1, int y1, int x2, int y2)
{
    int dx,dy,p,x,y;

    dx =abs(x2-x1);
    dy =abs(y2-y1);

    x=x1;
    y=y1;

    p = 2*dy-dx;
    while(x<x2)
    {
        if(p>=0)
        {
            putpixel(x,y,7);
            y = y+1;
            p = p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p = p+2*dy;
        }
        x = x+1;
        delay(200);
    }
}
