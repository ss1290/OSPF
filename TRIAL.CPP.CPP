#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void circle()
{
circle(200,50,25);
circle(350,50,25);
circle(200,200,25);
circle(350,200,25);
circle(500,125,25);
line(225,50,325,50);
line(225,200,325,200);
line(200,75,200,175);
line(350,75,350,175);
line(333,70,217,183);
line(482.4,142.67,367.6,182.4);
line(367.6,67.6,482.4,107.4);
setcolor(15);
settextstyle(0,0,2);
outtextxy(190,45,"R0");
settextstyle(0,0,2);
outtextxy(340,45,"R1");
settextstyle(0,0,2);
outtextxy(190,195,"R2");
settextstyle(0,0,2);
outtextxy(340,195,"R3");
settextstyle(0,0,2);
outtextxy(490,120,"R4");
setcolor(13);
settextstyle(0,0,0);
outtextxy(285,40,"3");
settextstyle(0,0,0);
outtextxy(275,210,"3");
settextstyle(0,0,0);
outtextxy(205,125,"1");
settextstyle(0,0,0);
outtextxy(340,125,"5");
settextstyle(0,0,0);
outtextxy(275,137,"7");
settextstyle(0,0,0);
outtextxy(425,80,"8");
settextstyle(0,0,0);
outtextxy(425,155,"4");
setcolor(GREEN);
settextstyle(2,0,0);
outtextxy(250,55,"198.16.32.0");
settextstyle(2,0,0);
outtextxy(245,185,"198.16.35.0");
settextstyle(2,0,0);
outtextxy(135,122,"198.16.36.0");
settextstyle(2,0,0);
outtextxy(355,122,"198.16.34.0");
settextstyle(2,0,0);
outtextxy(220,110,"198.16.33.0");
settextstyle(2,0,0);
outtextxy(405,100,"198.16.37.0");
settextstyle(2,0,0);
outtextxy(405,135,"198.16.38.0");
setcolor(11);
settextstyle(2,0,0);
outtextxy(90,50,"192.168.17.0/24");
settextstyle(2,0,0);
outtextxy(380,50,"197.65.16.0/24");
settextstyle(2,0,0);
outtextxy(110,200,"156.0.0.0/8");
settextstyle(2,0,0);
outtextxy(380,200,"156.20.0.0/16");
settextstyle(2,0,0);
outtextxy(535,125,"197.30.10.0/24");
}
void circle2()
{
circle(200,300,25);
circle(350,300,25);
circle(200,450,25);
circle(500,375,25);
line(225,300,325,300);
line(200,325,200,425);
line(333,317,217,433);
line(367.6,317.6,482.4,357.4);
setcolor(15);
settextstyle(0,0,2);
outtextxy(190,295,"R0");
settextstyle(0,0,2);
outtextxy(340,295,"R1");
settextstyle(0,0,2);
outtextxy(190,445,"R2");
settextstyle(0,0,2);
outtextxy(490,370,"R4");
setcolor(13);
settextstyle(0,0,0);
outtextxy(275,290,"3");
settextstyle(0,0,0);
outtextxy(205,375,"1");
settextstyle(0,0,0);
outtextxy(278,378,"7");
settextstyle(0,0,0);
outtextxy(425,330,"8");
setcolor(GREEN);
settextstyle(2,0,0);
outtextxy(245,305,"198.16.32.0");
settextstyle(2,0,0);
outtextxy(135,373,"198.16.36.0");
settextstyle(2,0,0);
outtextxy(220,355,"198.16.33.0");
settextstyle(2,0,0);
outtextxy(405,350,"198.16.37.0");
setcolor(11);
settextstyle(2,0,0);
outtextxy(90,295,"192.168.17.0/24");
settextstyle(2,0,0);
outtextxy(380,295,"197.65.16.0/24");
settextstyle(2,0,0);
outtextxy(110,445,"156.0.0.0/8");
settextstyle(2,0,0);
outtextxy(535,375,"197.30.10.0/24");
}

/*
void source1()
{
circle(200,50,25);
circle(350,50,25);
line(225,50,325,50);

setcolor(15);
settextstyle(0,0,2);
outtextxy(190,45,"R0");
settextstyle(0,0,2);
outtextxy(340,45,"R1");

setcolor(13);
settextstyle(0,0,0);
outtextxy(285,40,"3");

setcolor(RED);
settextstyle(0,0,2);
outtextxy(50,245,"PATH BEFORE AND AFTER R3 IS DISCONNECTED");

circle(200,300,25);
circle(350,300,25);
line(225,300,325,300);
setcolor(15);
settextstyle(0,0,2);
outtextxy(190,295,"R0");
settextstyle(0,0,2);
outtextxy(340,295,"R1");
setcolor(13);
settextstyle(0,0,0);
outtextxy(275,290,"3");


}


void source2()
{
circle(200,50,25);
circle(350,50,25);
circle(200,200,25);

line(225,50,325,50);

line(200,75,200,175);


setcolor(15);
settextstyle(0,0,2);
outtextxy(190,45,"R0");
settextstyle(0,0,2);
outtextxy(340,45,"R1");
settextstyle(0,0,2);
outtextxy(190,195,"R2");

setcolor(13);
settextstyle(0,0,0);
outtextxy(285,40,"3");

settextstyle(0,0,0);
outtextxy(205,125,"1");


setcolor(RED);
settextstyle(0,0,2);
outtextxy(50,245,"PATH BEFORE AND AFTER R3 IS DISCONNECTED");

circle(200,300,25);
circle(350,300,25);
circle(200,450,25);
line(225,300,325,300);
line(200,325,200,425);
setcolor(15);
settextstyle(0,0,2);
outtextxy(190,295,"R0");
settextstyle(0,0,2);
outtextxy(340,295,"R1");
settextstyle(0,0,2);
outtextxy(190,445,"R2");


setcolor(13);
settextstyle(0,0,0);
outtextxy(275,290,"3");
settextstyle(0,0,0);
outtextxy(205,375,"1");
}






void source3()
{

circle(350,50,25);

circle(350,200,25);


line(200,75,200,175);

setcolor(15);

settextstyle(0,0,2);
outtextxy(340,45,"R1");

settextstyle(0,0,2);
outtextxy(340,195,"R3");

setcolor(13);

settextstyle(0,0,0);
outtextxy(340,125,"5");

}



void source4()
{

circle(350,50,25);

circle(500,125,25);

line(482.4,142.67,367.6,182.4);

setcolor(15);

settextstyle(0,0,2);
outtextxy(340,45,"R1");

settextstyle(0,0,2);
outtextxy(490,120,"R4");

setcolor(13);

settextstyle(0,0,0);
outtextxy(425,80,"8");

setcolor(RED);
settextstyle(0,0,2);
outtextxy(50,245,"PATH BEFORE AND AFTER R3 IS DISCONNECTED");

circle(350,300,25);

circle(500,375,25);

settextstyle(0,0,2);
outtextxy(340,295,"R1");

settextstyle(0,0,2);
outtextxy(490,370,"R4");
line(367.6,317.6,482.4,357.4);

setcolor(13);

settextstyle(0,0,0);
outtextxy(425,330,"8");



}

*/

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
circle();
delay(2000);
setcolor(RED);
settextstyle(0,0,2);
outtextxy(50,245,"IF ROUTER 3 IS BENIG DISCONNECTED");
delay(4000);
setcolor(15);
circle2();
/*
delay(4000);
clrscr();
source1();
delay(4000);
clrscr();
source2();
delay(4000);
clrscr();
source3();
delay(4000);
clrscr();
source4();
*/


getch();
}