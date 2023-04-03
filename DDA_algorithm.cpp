#include <graphics.h>
#include <iostream>
using namespace std;

void DDA(float x1, float y1, float x2, float y2);
int main()
{
    float tx1,ty1,tx2,ty2,lx1,ly1,lx2,ly2,rx1,ry1,rx2,ry2;
    int gd=DETECT,gm;

    initgraph(&gd, &gm, "");

    cout << "Top line tx1 and ty1: ";
    cin >> tx1 >> ty1;

    cout << "Top line tx2 and ty2: ";
    cin >> tx2 >> ty2;

    cout << "Left line lx1 and ly1: ";
    cin >> lx1>>ly1;
    cout << "Left line lx2 and ly2: ";
    cin >> lx2 >> ly2;

    cout << "Right line rx1 and ry1: ";
    cin >> rx1 >> ry1;
    cout << "Right line rx2 and ry2: ";
    cin >> rx2 >> ry2;

    DDA(tx1,ty1,tx2,ty2);
    DDA(lx1,ly1,lx2,ly2);
    DDA(rx1,ry1,rx2,ry2);

    getch();
    closegraph();

    return 0;

}

void DDA(float x1, float y1, float x2, float y2)
{
    float dx, dy, step, x,y;
    int i;

    dx =abs(x2-x1);
    dy =abs(y2-y1);

    if(dx>=dy)
        step = dx;
    else
        step = dy;

    dx = dx/step;
    dy = dy/step;

    x = x1;
    y = y1;

    i = 1;

    while(i<=step)
    {
        putpixel(x,y,WHITE);
        x = x+dx;
        y = y+dy;
        i = i+1;
        delay(50);
    }
}
