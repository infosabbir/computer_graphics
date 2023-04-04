#include<iostream>
#include<graphics.h>
using namespace std;


// name and id
void name_id()
{

    // printing N
    line(10, 10, 10, 25);
    line(10, 10, 18, 25);
    line(18, 25, 18, 10);

    //printing A
    line(20, 25, 25, 10);
    line(25, 10, 30, 25);
    line(22, 20, 28, 20);

    //printing M
    line(35, 10, 35, 25);
    line(35, 10, 40, 20);
    line(45, 10, 40, 20);
    line(45, 10, 45, 25);

    //printing E
    line(50, 10, 50, 25);
    line(50, 10, 58, 10);
    line(50, 18, 56, 18);
    line(50, 25, 58, 25);


    /*==NAME label start===*/
    rectangle(65, 12, 68, 14);
    rectangle(65, 22, 68, 24);

    /*==NAME start===*/

    //printing A
    line(80, 10, 75, 25);
    line(80, 10, 85, 25);
    line(78,20, 82, 20);

    //printing B
    line(93, 10, 93, 25);
    arc(93, 14, 270, 83, 6);
    arc(93, 22, 270, 83, 6);


    //printing D
    line(103,10,103,25);
    arc(103,17,270,83,8);


    //printing U
    line(114,10,114,20);
    line(125, 10, 125, 20);
    arc(120, 22, 180, 0, 6);

    //printing L
    line(130, 10, 130, 25);
    line(130, 25, 139, 25);

    //printing L
    line(145, 10, 145, 25);
    line(145, 25, 153, 25);

    //printing A
    line(155, 25, 160, 10);
    line(160, 10, 165, 25);
    line(158, 20, 162,20);
    //printing H
    line(170, 10, 170, 25);
    line(170, 18, 180, 18);
    line(180, 10, 180, 25);

    //printing -
    line(185,18,190,18);

    //printing A
    line(200,10,195,25);
    line(200,10,205,25);
    line(198,20,203,20);

    //printing L
    line(210,10,210,25);
    line(210,25,218,25);

    //printing -
    line(222,18,227,18);

    //priting N
    line(230,10,230,25);
    line(240,10,240,25);
    line(230,10,240,25);

    //printing 0
    rectangle(245,10,252,25);

    //printing M
    line(257,10,257,25);
    line(267,10,267,25);
    line(257,10,262,20);
    line(267,10,262,20);

    //printing A
    line(277,10,272,25);
    line(277,10,282,25);
    line(275,20,279,20);

    //printing N
    line(286,10,286,25);
    line(295,10,295,25);
    line(286,10,295,25);


    /*===NAME End===*/


    /*===ID Label start===*/

    //printing I
    line(10, 35, 20, 35);
    line(15, 35, 15, 50);
    line(10, 50, 20, 50);

    //printing D
    line(25, 35, 25, 50);
    arc(25, 44, 270, 90, 8);

    //printing :-
    rectangle(42, 37, 45, 40);
    rectangle(42, 44, 45, 48);


    /*===ID Label End===*/


    /*===ID start===*/

    //printing C
    arc(62, 43, 80, 280, 9);

    //printing S
    arc(74, 39, 0, 180, 6);
    line(68, 40, 79, 44);
    arc(74, 46, 180, 0, 6);

    //printing E
    line(86, 35, 86, 50);
    line(86, 35, 96, 35);
    line(86, 43, 94, 43);
    line(86, 50, 96, 50);

    //printing 2
    arc(108,39,0,180,5);
    line(113,39,103,50);
    line(103,50,113,50);

    //printing 0

    ellipse(122, 43, 0, 360, 6, 9);

    //printing 0
    ellipse(135, 43, 0, 360, 6, 9);

    //printing 1
    line(146, 35, 146, 50);
    line(146, 35, 140, 36);
    line(142, 50, 149, 50);


    //printing 0
    ellipse(160, 43, 0, 360, 6, 9 );

    //printing 1
    line(170, 35, 170, 50);
    line(170, 35, 166, 36);
    line(166, 50, 174, 50);


    //printing 9
    ellipse(182, 40, 0, 360, 5, 5 );
    line(186,40,180,50);

    //printing 0
    ellipse(195, 43, 0, 360, 6, 9 );


    //printing 0
    ellipse(209, 43, 0, 360, 6, 9);


    //printing 2
    arc(222,40,0,180,5);
    line(227, 40, 217, 50);
    line(217,50,227,50);
}
// robot
void robot()
{
    //for head
    setcolor(BROWN);
    ellipse(320,95,360,0,25,20);
    setfillstyle(1, BROWN);
    floodfill(321,96,BROWN);


    setcolor(WHITE);
    circle(310,90,3);

    setfillstyle(1, WHITE);
    floodfill(310,91,WHITE);

    circle(330,90,3);
    setfillstyle(1, WHITE);
    floodfill(330,91,WHITE);

    setcolor(WHITE);
    arc(320,100,200,-20,10);

    setcolor(YELLOW);
    rectangle(345,90,350,100);
    rectangle(290,90,295,100);

    setcolor(RED);
    line(320,75,300,60);
    line(320,75,305,60);
    line(320,75,310,60);
    line(320,75,300,60);
    line(320,75,315,60);
    line(320,75,320,60);
    line(320,75,325,60);
    line(320,75,330,60);
    line(320,75,335,60);
    line(320,75,340,60);






    setcolor(WHITE);
    //for neck
    line(313,115,313,125);
    line(328,115,328,125);


    //For centre part
    setcolor(YELLOW);
    arc(320,225,72,107,100);
    line(290,129,290,200);
    line(350,129,350,200);
    line(290,193,350,193);
    setfillstyle(1, YELLOW);
    floodfill(291,130, YELLOW);



    setcolor(GREEN );
    line(290,200,350,200);

    //for legs
    line(290,200,285,280);
   line(320,225,305,280);
   line(305,280,285,280);
   line(320,225,335,280);
   line(350,200,355,280);
   line(335,280,355,280);
 setfillstyle(1,GREEN);
   floodfill(291,201,GREEN);


    //for right hand
    setcolor(WHITE);
    line(290,129,250,170);
    line(290,149,260,180);
    setcolor(BLUE);
    circle(252,180,9);
    setfillstyle(1, BLUE);
    floodfill(253,181,BLUE);

    //for left hand
    setcolor(WHITE);
    line(350,129,390,170);
    line(350,149,380,180);
    setcolor(BLUE);
    circle(390,180,9);
    setfillstyle(1, BLUE);
    floodfill(391,181,BLUE);

    //for shoes
    setcolor(BLUE);
    line(285,280,305,280);
    line(285,280,275,287);
    line(275,287,305,287);
    line(305,280,305,287);
    setfillstyle(1, BLUE);
    floodfill(286,281,BLUE);


    line(335,280,355,280);
    line(335,287,335,280);
    line(335,287,365,287);
    line(355,280,365,287);
    setfillstyle(1, BLUE);
    floodfill(336,281,BLUE);

}

// car
void car()
{
 //ROAD
    line(2,230,900,230);
    line(2,350,900,350);

    line(5,270,50,270);
    line(50,320,100,320);
    line(400,270,450,270);
    line(450,320,500,320);
    line(240,320,290,320);
    line(600,270,650,270);



                //car start
                 setcolor(YELLOW);
                line(120,270,160,240);
                line(230,240,275,270);
                line(160,240,230,240);
                line(120,270,275,270);
                setfillstyle(1,YELLOW);
                floodfill(231,244,YELLOW);
                setcolor(RED);
                line(230,240,230,270);
                line(180,240,180,270);


                setcolor(RED);
                line(90,270,120,270);
                line(80,300,90,270);
                line(120,270,275,270);
                line(275,270,310,270);
                line(310,270,335,290);
                line(335,290,335,300);
                line(255,300,335,300);
                line(180,300,210,300);
                line(80,300,135,300);
                arc(232,300,0,180,23);
                arc(157,300,0,180,23);
                setfillstyle(1,RED);
                floodfill(91,271,RED);

    //FLAG
    setcolor(YELLOW);
    rectangle(307,240,310,270);
    setfillstyle(1,YELLOW);
    floodfill(308,241,YELLOW);


    setcolor(GREEN);
    rectangle(310,240,345,265);
    setfillstyle(1,GREEN);
    floodfill(311,241,GREEN);


    setcolor(RED);
    setfillstyle(1, RED);
    circle(327,253,9);
    floodfill(328,254,RED);

    setcolor(BLUE);
    circle(232,300,18);

    setfillstyle(1, BLUE);
    floodfill(233,301,BLUE);

    circle(157,300,18);
    setfillstyle(1, BLUE);
    floodfill(158,301,BLUE);

}

//HOME
void home()
{
setcolor(GREEN);

line(0,450,750,450);



//Right ---------
setcolor(YELLOW);

rectangle(200,330,430,450);
setfillstyle(1,YELLOW);
    floodfill(201,331,YELLOW);


rectangle(230,444,295,450);

setcolor(GREEN);


rectangle(235,355,290,444);
    setfillstyle(1,GREEN);
    floodfill(236,356,GREEN);


setcolor(RED);

circle(244,399,5);
setfillstyle(1,RED);
    floodfill(245,400,RED);


setcolor(GREEN);

rectangle(340,348,410,400);
setcolor(RED);
rectangle(345,353,405,395);
setfillstyle(1,RED);
    floodfill(348,358,RED);
    setcolor(BLACK);
line(375,353,375,395);


 setcolor(GREEN);
line(130,249,426,249);

line(430,330,445,330);

line(445,330,426,249);
  //setfillstyle(1,GREEN);
    //floodfill(135,255,GREEN);


setcolor(BROWN);
rectangle(350,235,380,249);
setfillstyle(1,BROWN);
    floodfill(351,236,BROWN);
setcolor(BROWN);

rectangle(346,230,384,235);
    setfillstyle(1,BROWN);
    floodfill(347,231,BROWN);
//Left-----------

setcolor(YELLOW);
line(200,310,200,450);
//setfillstyle(1,YELLOW);
    //floodfill(201,311,YELLOW);



line(40,310,40,450);


line(30,316,120,250);

line(210,316,120,250);


 setcolor(GREEN);
line(30,307,120,241);

line(210,307,120,241);



line(30,307,30,316);

line(210,307,210,316);



rectangle(70,350,170,400);
setcolor(RED);
rectangle(75,355,165,395);
setfillstyle(1,RED);
    floodfill(76,359,RED);

setcolor(BLACK);
line(105,355,105,395);

line(135,355,135,395);


setcolor(BLUE);
rectangle(100,290,140,320);
setfillstyle(1,BLUE);
    floodfill(101,291,BLUE);


setcolor(BLACK);
line(120,290,120,320);

line(100,305,140,305);


}

int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    cout <<"============================"<<endl;
    cout <<"1.Robot"<<endl;
    cout <<"2.Car"<<endl;
    cout <<"3.House"<<endl;
    int select;
    cout << "Enter your choice : ";
    cin >> select;

    switch(select)
    {
    case 1:
        name_id();
        robot();
        break;

    case 2:
        name_id();
        car();
        break;

    case 3:
        name_id();
        home();
        break;


    default:
        cout << "Wrong choice!";

    }

    getch();
    closegraph();

    return 0;

}

