#include <iostream>
#include <graphics.h>
using namespace std;

void laptop()
{
    rectangle(200,100,395,250);


    // for D
    line(285,230,285,240);
    arc(285,235,270,90,7);

    // for E
    line(295,230,295,240);
    line(295,230,300,230);
    line(295,235,300,235);
    line(295,240,300,240);

    line(305,230,305,240);
    line(305,240,308,240);

    line(312,230,312,240);
    line(312,240,316,240);

    rectangle(200,250,395,350);
    line(200,251,395,251);
    line(200,252,395,252);
    line(200,253,395,253);

    line(200,265,395,265);
    line(200,280,395,280);
    line(200,295,395,295);
    line(200,310,395,310);

    line(215,250,215,310);
    line(230,250,230,310);
    line(245,250,245,310);
    line(260,250,260,295);
    line(275,250,275,295);
    line(290,250,290,295);
    line(305,250,305,295);
    line(320,250,320,295);
    line(335,250,335,295);
    line(350,250,350,310);
    line(365,250,365,310);
    line(380,250,380,310);
    line(395,250,395,310);

    // touchpad
    //rectangle(290,320,330,340);
    int left = 290, top = 320, right = 330, bottom = 340;
    rectangle(left, top, right, bottom);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(left + 1, top + 1, WHITE);

//    inside rectangle
//    setcolor(BLUE);
//    rectangle(220,110,380,220);// color Blue
//    setfillstyle(1,BLUE);
//    floodfill(225,115,BLUE);

    int x1 = 220, y1 = 110, x2 = 380, y2 = 220;
    int colors[] = {BLUE, GREEN, RED, YELLOW};
    int num_colors = sizeof(colors) / sizeof(colors[0]);

    while(1)
    {
        for (int i = 0; i < num_colors; i++)
        {
            setfillstyle(SOLID_FILL, colors[i]);
            rectangle(x1, y1, x2, y2);
            floodfill(x1+1, y1+1, WHITE);  // fill with white to avoid overlapping colors
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
            setbkcolor(NULL);
            outtextxy((x1+(x2-x1)/2)-70,(y1+(y2-y1)/2), "ERROR,404!");
            //outtextxy(x1+5, y1+30, "ERROR,404!");
            delay(50);

        }
    }
}
void birthday_cake()
{

    // Third layer
    for(int i=0; i<=300; i++)
    {
        setcolor(LIGHTMAGENTA);
        line(150+i,370,150+i,430);
        delay(10);

    }
    // Second layer
    for(int i=260; i>=0; i--)
    {
        setcolor(YELLOW);
        line(170+i,310,170+i,370-2);
        delay(10);
    }


    // first layer
    for(int i=0; i<=220; i++)
    {
        setcolor(WHITE);
        line(190+i,250,190+i,310-2);
        delay(10);
    }

    // candles
    for(int i=0; i<=70; i++)
    {
        setcolor(LIGHTRED);
        line(210+25,250-2-i,210+25+10,250-2-i);
        line(210+85,250-2-i,210+85+10,250-2-i);
        line(210+145,250-2-i,210+145+10,250-2-i);

        delay(10);
    }
    setcolor(LIGHTGREEN);
    settextstyle(1,HORIZ_DIR,3);
    outtextxy(150,80,"Happy Birthday!");

}
void rainbow()
{
    for(int i=1; i<180; i++)
    {
        for(int j=1; j<=48; j++)
        {
            setcolor(LIGHTMAGENTA);
            arc(300,340,0,1+i,50+j);
            setcolor(LIGHTCYAN);
            arc(300,340,0,1+i,80+j);
            setcolor(LIGHTGRAY);
            arc(300,340,0,1+i,110+j);
            setcolor(LIGHTGREEN);
            arc(300,340,0,1+i,140+j);
            setcolor(LIGHTBLUE);
            arc(300,340,0,1+i,170+j);
            setcolor(YELLOW);
            arc(300,340,0,1+i,200+j);
            setcolor(LIGHTRED);
            arc(300,340,0,1+i,230+j);
        }
        delay(0.5);
    }
}

void my_name()
{
    // for M
    line(10,10,10,30);
    line(10,10,20,25);
    line(20,25,30,10);
    line(30,10,30,30);

    // for D
    line(35,10,35,30);
    arc(35,20,270,90,10);

    // for small circle
    arc(50,25,0,360,3);

    // for S
    arc(70,15,0,270,5);
    arc(70,25,180,90,5);

    // for A
    line(85,10,80,30);
    line(85,10,90,30);
    line(82,25,88,25);

    // for B
    line(95,10,95,30);
    arc(95,16,270,90,7);
    arc(95,25,270,90,7);

    // for B
    line(105,10,105,30);
    arc(105,16,270,90,7);
    arc(105,25,270,90,7);

    // for I
    line(115,10,115,30);

    // for R
    line(120,10,120,30);
    arc(120,17,270,90,7);
    line(120,20,127,30);

    // for semicolon.
    arc(132,25,0,360,2);
    arc(132,15,0,360,2);
    arc(132,28,270,90,4);

    // for I
    line(145,10,145,30);

    // for D
    line(150,10,150,30);
    arc(150,20,270,90,10);

    // for colon
    arc(165,25,0,360,3);
    arc(165,15,0,360,3);

    // for 1
    line(175,10,175,30);
    line(175,10,172,12);
    line(172,30,178,30);

    // for 9
    circle(185, 15, 5);
    ellipse(185,20,270,90,7,10);

    // for 0
    ellipse(200,20,0,360,5,10);

    // for 3
    ellipse(209,16,270,100,10,5);
    ellipse(209,24,270,100,10,5);

    // for 0
    ellipse(225,20,0,360,5,10);

    // for 1
    line(235,10,235,30);
    line(235,10,230,12);
    line(230,30,240,30);

    // for 8
    ellipse(245, 15, 0, 360, 5, 6 );
    ellipse(245, 25, 0, 360, 5, 6 );

    // for 0 0
    ellipse(258,20,0,360,5,10);
    ellipse(270,20,0,360,5,10);

    // for 8
    ellipse(285, 15, 0, 360, 5, 6 );
    ellipse(285, 25, 0, 360, 5, 6 );

    // for small circle
    arc(295,25,0,360,2);

}
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    int select;

    cout <<"1. Laptop. "<< endl;
    cout <<"2. Birthday Cake. " << endl;
    cout <<"3. Rainbow. " << endl;

    cout << "Enter number(1-3) to choose below option here:  ";
    cin >> select;

    switch(select)
    {
    case 1:
        my_name();
        laptop();
        break;
    case 2:
        my_name();
        birthday_cake();
        break;
    case 3:
        my_name();
        rainbow();
        break;
    default:
        cout <<"Something wrong, Please try again!" << endl;

    }

    getch();
    closegraph();
}
