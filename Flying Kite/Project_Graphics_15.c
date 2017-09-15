
#include<graphics.h>

void frontscreen();
void info();
void start();
void up();
void down();
void cutting();
void player2_movingto_player1();
void player1_player2_moving();
void both_flying();
void both_up();
void both_down();
void both_release_kite();
void gameover();


int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");


int i=0;

frontscreen();
info();
start();

while(i<=1)
{

up();
down();


if(i==1)
{
    cutting();
    player2_movingto_player1();
    player1_player2_moving();
    both_flying();

    while(i<=5)
    {
    both_up();
    both_down();

    i++;
    }
    both_release_kite();

}

i++;
}

gameover();
//delay(50);

getch();
closegraph();
}

void frontscreen()
{
cleardevice();
for(int i=0;i<=5;i++)
{
    setcolor(YELLOW);
   outtextxy(260,230,"FLYING KITES");


 delay(1500);
}
}

void info()
{
    for(int i=0;i<=5;i++)
    {
        cleardevice();
        setcolor(YELLOW);
        outtextxy(150,120,"INFORMATION TECHNOLOGY");
        outtextxy(150,160,"SUBJECT : COMPUTER GRAPHICS");

        outtextxy(150,200,"PROJECT : FLYING KITE(STROY MODE)");
        outtextxy(150,240,"PROJECT MEMBER : 2");
 outtextxy(150,280,"NAME : VIJENDRA KUMAR, ENROLL : IT/42/13, ROLL : 37 ");
 outtextxy(150,320,"NAME : RAJ KUMAR, ENROLL : IT/48/13, ROLL : 43 ");

delay(2000);
    }

}
void start()
{
for(int i=0;i<=5;i++)
{
    cleardevice();
setcolor(YELLOW);
outtextxy(390,230,". . .");
outtextxy(170,230,"THE SIMPLE GRAPHICS APPLICATION IS LOADING");
//outtextxy(230,250,"");



delay(2000);
}
}



void up()
{

 printf("Both The Player Fight With Kite.......");
for(int i=0;i<=80;i++)
{
  cleardevice();


//sky ->upper rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);



//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);


//player1
setcolor(YELLOW);
outtextxy(15,460,"PLAYER 1");



setfillstyle(SOLID_FILL,GREEN);
circle(50,350,20);
floodfill(50,350,YELLOW);

line(50,370,50,430);
//hand
line(50,390,80,370);
line(80,370,95,340);

//legs
line(50,430,70,450);
line(50,430,30,450);



//player2
setcolor(YELLOW);
outtextxy(550,460,"PLAYER 2");

setfillstyle(SOLID_FILL,GREEN);
circle(580,350,20);
floodfill(580,350,YELLOW);

line(580,370,580,430);

//hand
line(580,390,550,370);
line(550,370,535,340);

//legs
line(580,430,600,450);
line(580,430,560,450);






//dorr
//player1
line(95,340,257+2*i,192-2*i);
//player2
line(535,340,180,100-i);

//kite for player2
line(170,50-i,150,100-i);
line(170,50-i,220,100-i);
line(150,100-i,200,150-i);
line(220,100-i,170,150-i);
line(170,150-i,200,150-i);
line(170,50-i,185,135-i);
line(150,100-i,220,100-i);

//kite for player1
line(260+2*i,150-2*i,300+2*i,190-2*i);
line(260+2*i,150-2*i,230+2*i,190-2*i);
line(230+2*i,190-2*i,300+2*i,190-2*i);
line(230+2*i,190-2*i,265+2*i,235-2*i);
line(300+2*i,190-2*i,240+2*i,235-2*i);
line(240+2*i,235-2*i,264+2*i,235-2*i);
line(260+2*i,150-2*i,256+2*i,222-2*i);

setcolor(WHITE);
//birds1
arc(20+8*i,50,0,170,15);
arc(50+8*i,50,0,170,15);
//birds2
arc(100+8*i,50,0,170,15);
arc(130+8*i,50,0,170,15);
//birds3
arc(60+8*i,80,0,170,15);
arc(90+8*i,80,0,170,15);


//ship
setcolor(GREEN);
line(80+8*i,245,180+8*i,245);

line(80+8*i,245,58+8*i,210);
line(180+8*i,245,202+8*i,210);

line(70+8*i,230,190+8*i,230);

line(70+8*i,230,70+8*i,180);
line(130+8*i,230,130+8*i,180);


line(60+8*i,190,100+8*i,150);
line(140+8*i,190,100+8*i,150);

line(70+8*i,180,130+8*i,180);

//flag
line(70+8*i,180,70+8*i,140);
line(70+8*i,140,50+8*i,160);
line(50+8*i,160,70+8*i,160);

//window
rectangle(80+8*i,190,100+8*i,220);


//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);
delay(50);
}

}

void down()
{
printf("Both The Player Fight With Kite.......");

for(int i=80;i>=0;i--)
{
cleardevice();


//sky ->upper rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);



//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);



//player1
setcolor(YELLOW);

outtextxy(15,460,"PLAYER 1");
setfillstyle(SOLID_FILL,GREEN);
circle(50,350,20);
floodfill(50,350,YELLOW);

line(50,370,50,430);
//hand
line(50,390,80,370);
line(80,370,95,340);

//legs
line(50,430,70,450);
line(50,430,30,450);



//player2
setcolor(YELLOW);
outtextxy(550,460,"PLAYER 2");
setfillstyle(SOLID_FILL,GREEN);
circle(580,350,20);
floodfill(580,350,YELLOW);


line(580,370,580,430);

//hand
line(580,390,550,370);
line(550,370,535,340);

//legs
line(580,430,600,450);
line(580,430,560,450);





//dorr
//player1
line(95,340,257+2*i,192-2*i);
//player2
line(535,340,180,100-i);

//kite for player1
line(170,50-i,150,100-i);
line(170,50-i,220,100-i);
line(150,100-i,200,150-i);
line(220,100-i,170,150-i);
line(170,150-i,200,150-i);
line(170,50-i,185,135-i);
line(150,100-i,220,100-i);

//kite for player2
line(260+2*i,150-2*i,300+2*i,190-2*i);
line(260+2*i,150-2*i,230+2*i,190-2*i);
line(230+2*i,190-2*i,300+2*i,190-2*i);
line(230+2*i,190-2*i,265+2*i,235-2*i);
line(300+2*i,190-2*i,240+2*i,235-2*i);
line(240+2*i,235-2*i,264+2*i,235-2*i);
line(260+2*i,150-2*i,256+2*i,222-2*i);

setcolor(WHITE);
//birds1
arc(20+8*i,50,0,170,15);
arc(50+8*i,50,0,170,15);
//birds2
arc(100+8*i,50,0,170,15);
arc(130+8*i,50,0,170,15);
//birds3
arc(60+8*i,80,0,170,15);
arc(90+8*i,80,0,170,15);



//ship
setcolor(GREEN);
line(450+8*i,245,550+8*i,245);
line(450+8*i,245,430+8*i,210);
line(550+8*i,245,570+8*i,210);
line(440+8*i,230,560+8*i,230);
line(560+8*i,230,560+8*i,180);
line(500+8*i,230,500+8*i,180);
line(490+8*i,190,530+8*i,150);
line(570+8*i,190,530+8*i,150);
line(500+8*i,180,560+8*i,180);

//flag
line(560+8*i,180,560+8*i,140);
line(560+8*i,140,580+8*i,160);
line(580+8*i,160,560+8*i,160);

//window
rectangle(530+8*i,190,550+8*i,220);


//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);
delay(50);
}
}

void cutting()
{

 printf("\n\nPlayer1 Run for Kite.......");

for(int i=0;i<=100;i++)
{
cleardevice();
//line(0,0,200,200);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);

//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);

//player1
outtextxy(15,460,"PLAYER 1 RUN FOR KITE");
circle(50+i,350,20);


line(50+i,370,50+i,430);
//hand
line(50+i,390,80+i,370);
line(80+i,370,95+i,340);

//legs
line(50+i,430,70+i,450);
line(50+i,430,30+i,450);

//player2
setcolor(YELLOW);
outtextxy(550,460,"PLAYER 2");
setfillstyle(SOLID_FILL,GREEN);
circle(580,350,20);
floodfill(580,350,YELLOW);

line(580,370,580,430);

//hand
line(580,390,550,370);
line(550,370,535,340);

//legs
line(580,430,600,450);
line(580,430,560,450);

//kite moving
line(185,65+i,165,115+i);
line(185,65+i,235,115+i);
line(165,115+i,215,165+i);
line(235,115+i,185,165+i);
line(185,165+i,215,165+i);
line(185,65+i,200,150+i);
line(165,115+i,235,115+i);
//kite dor
line(198,150+i,198,180+i);
line(198,180+i,220,185+i);
line(220,185+i,195,245+i);

setcolor(WHITE);
//birds1
arc(20+4*i,50,0,170,15);
arc(50+4*i,50,0,170,15);
//birds2
arc(100+4*i,50,0,170,15);
arc(130+4*i,50,0,170,15);
//birds3
arc(60+4*i,80,0,170,15);
arc(90+4*i,80,0,170,15);




//ship
setcolor(GREEN);
line(80+4*i,245,180+4*i,245);

line(80+4*i,245,58+4*i,210);
line(180+4*i,245,202+4*i,210);

line(70+4*i,230,190+4*i,230);

line(70+4*i,230,70+4*i,180);
line(130+4*i,230,130+4*i,180);


line(60+4*i,190,100+4*i,150);
line(140+4*i,190,100+4*i,150);

line(70+4*i,180,130+4*i,180);

//flag
line(70+4*i,180,70+4*i,140);
line(70+4*i,140,50+4*i,160);
line(50+4*i,160,70+4*i,160);

//window
rectangle(80+4*i,190,100+4*i,220);

//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);


delay(10);
}

printf("Player1, Picked the Kite.......");
}

void player2_movingto_player1()
{

  printf("\n\nPlayer2 Moving To Player1 For Kite.......");

    for(int i=0;i<300;i++)
    {
cleardevice();
//sky ->upper rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);



//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);


//player2

outtextxy(350,460,"PLAYER 2 MOVING TO PLAYER 1 FOR KITE");
circle(580-i,350,20);
line(580-i,370,580-i,430);

//hand
line(580-i,390,550-i,370);
line(550-i,370,535-i,340);

//legs
line(580-i,430,600-i,450);
line(580-i,430,560-i,450);

//player1
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
circle(150,350,20);
floodfill(150,350,YELLOW);


line(150,370,150,430);
//hand
line(150,390,180,370);
line(180,370,195,340);

//legs
line(150,430,170,450);
line(150,430,130,450);



//kite
line(185,165,165,215);
line(185,165,235,215);
line(165,215,215,265);
line(235,215,185,265);
line(185,265,215,265);
line(185,165,200,250);
line(165,215,235,215);
//kite dor
line(198,250,198,280);
line(198,280,220,285);
line(220,285,195,345);

setcolor(WHITE);
//birds1
arc(20+2*i,50,0,170,15);
arc(50+2*i,50,0,170,15);
//birds2
arc(100+2*i,50,0,170,15);
arc(130+2*i,50,0,170,15);
//birds3
arc(60+2*i,80,0,170,15);
arc(90+2*i,80,0,170,15);


//ship
setcolor(GREEN);
line(80+2*i,245,180+2*i,245);

line(80+2*i,245,58+2*i,210);
line(180+2*i,245,202+2*i,210);

line(70+2*i,230,190+2*i,230);

line(70+2*i,230,70+2*i,180);
line(130+2*i,230,130+2*i,180);


line(60+2*i,190,100+2*i,150);
line(140+2*i,190,100+2*i,150);

line(70+2*i,180,130+2*i,180);

//flag
line(70+2*i,180,70+2*i,140);
line(70+2*i,140,50+2*i,160);
line(50+2*i,160,70+2*i,160);

//window
rectangle(80+2*i,190,100+2*i,220);

//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);

delay(10);
}
char c,c1;
printf("\n\nPlayer2 : The One Who Has The No Kite, Tells The Player1 :/>");

printf("\n\nPlease Type It's Mine :");

scanf("\n\n%s",&c);

printf("\n\nPlayer1 : The One Who Has The Kite, Tells The Player2 : No,It's Not:");

printf("\n\n\nPlayer1 : NEXT CONVERSATION IS LOADING");
for(int i=0;i<=5;i++)
{
    printf(".");
    delay(1500);
}

printf("and tells the player2:/>");

printf("\n\nPlayer1 : I Have an Idea/>");

printf("\n\nPlayer2 :What Type Of Idea?");

printf("\n\nPlayer1 : Can we both Fly Kite?");

printf("\n\n\nPlayer2 : NEXT CONVERSATION IS LOADING");

for(int i=0;i<=5;i++)
{
  printf(".");
  delay(1500);
}

printf("Ok: \n\nProblem Solved....");
//scanf("%s",&c1);



//printf("\n\nDon't Fight On the Religion In the Real Life");
//printf("\n\nLearn With That game.......");

}

void player1_player2_moving()
{
for(int i=0;i<520;i++)
{
 cleardevice();
 //sky ->upper rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);



//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);

//player1
circle(150+i,350,20);
line(150+i,370,150+i,430);
//hand
line(150+i,390,180+i,370);
line(180+i,370,195+i,340);

//legs
line(150+i,430,170+i,450);
line(150+i,430,130+i,450);


//player2
circle(280+i,350,20);
line(280+i,370,280+i,430);

//hand
line(280+i,390,310+i,370);
line(311+i,369,327+i,340);

//legs
line(280+i,430,300+i,450);
line(280+i,430,260+i,450);


//kite
line(185+i,165,165+i,215);
line(185+i,165,235+i,215);
line(165+i,215,215+i,265);
line(235+i,215,185+i,265);
line(185+i,265,215+i,265);
line(185+i,165,200+i,250);
line(165+i,215,235+i,215);
//kite dor
line(198+i,250,198+i,280);
line(198+i,280,220+i,285);
line(220+i,285,195+i,345);

setcolor(WHITE);
//birds1
arc(20+2*i,50,0,170,15);
arc(50+2*i,50,0,170,15);
//birds2
arc(100+2*i,50,0,170,15);
arc(130+2*i,50,0,170,15);
//birds3
arc(60+2*i,80,0,170,15);
arc(90+2*i,80,0,170,15);

setcolor(WHITE);
//birds1
arc(20+2*i,50,0,170,15);
arc(50+2*i,50,0,170,15);
//birds2
arc(100+2*i,50,0,170,15);
arc(130+2*i,50,0,170,15);
//birds3
arc(60+2*i,80,0,170,15);
arc(90+2*i,80,0,170,15);

//ship
setcolor(GREEN);
line(80+2*i,245,180+2*i,245);

line(80+2*i,245,58+2*i,210);
line(180+2*i,245,202+2*i,210);

line(70+2*i,230,190+2*i,230);

line(70+2*i,230,70+2*i,180);
line(130+2*i,230,130+2*i,180);


line(60+2*i,190,100+2*i,150);
line(140+2*i,190,100+2*i,150);

line(70+2*i,180,130+2*i,180);

//flag
line(70+2*i,180,70+2*i,140);
line(70+2*i,140,50+2*i,160);
line(50+2*i,160,70+2*i,160);

//window
rectangle(80+2*i,190,100+2*i,220);



//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);


delay(10);

}
}

void both_flying()
{
printf("\n\nAfter Some Time");
printf("\n\nNEXT LEVEL IS LOADING");

for(int i=0;i<=5;i++)
{
  printf(".");
  setcolor(YELLOW);
  outtextxy(250,230,"NOW WHAT HAPPEN ?");
  delay(1500);
}


printf("\n\nBoth Player Together Flying Kite.......");

}

void both_up()
{
for(int i=0;i<=60;i++)
{
  cleardevice();
      //sky ->upper rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);



//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);



//player1
setcolor(YELLOW);

outtextxy(15,460,"BOTH THE PLAYER FLYING KITE TOGETHER. . . . ");

setfillstyle(SOLID_FILL,GREEN);
circle(50,350,20);
floodfill(50,350,YELLOW);

line(50,370,50,430);
//hand
line(50,390,80,370);
line(80,370,95,340);

//legs
line(50,430,70,450);
line(50,430,30,450);


//player2
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
circle(150,350,20);
floodfill(150,350,YELLOW);

line(150,370,150,430);
//hand
line(150,390,120,410);
//line(180,370,195,340);

//legs
line(150,430,170,450);
line(150,430,130,450);


//charka
line(95,340,120,410);

//dorr
//player1
line(95,340,257+2*i,192-2*i);

//kite for player1
line(260+2*i,150-2*i,300+2*i,190-2*i);
line(260+2*i,150-2*i,230+2*i,190-2*i);
line(230+2*i,190-2*i,300+2*i,190-2*i);
line(230+2*i,190-2*i,265+2*i,235-2*i);
line(300+2*i,190-2*i,240+2*i,235-2*i);
line(240+2*i,235-2*i,264+2*i,235-2*i);
line(260+2*i,150-2*i,256+2*i,222-2*i);

setcolor(WHITE);
//birds1
arc(20+6*i,50,0,170,15);
arc(50+6*i,50,0,170,15);
//birds2
arc(100+6*i,50,0,170,15);
arc(130+6*i,50,0,170,15);
//birds3
arc(60+6*i,80,0,170,15);
arc(90+6*i,80,0,170,15);

//ship
setcolor(GREEN);
line(80+6*i,245,180+6*i,245);

line(80+6*i,245,58+6*i,210);
line(180+6*i,245,202+6*i,210);

line(70+6*i,230,190+6*i,230);

line(70+6*i,230,70+6*i,180);
line(130+6*i,230,130+6*i,180);


line(60+6*i,190,100+6*i,150);
line(140+6*i,190,100+6*i,150);

line(70+6*i,180,130+6*i,180);

//flag
line(70+6*i,180,70+6*i,140);
line(70+6*i,140,50+6*i,160);
line(50+6*i,160,70+6*i,160);

//window
rectangle(80+6*i,190,100+6*i,220);



//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);


delay(50);
}
}

void both_down()
{
for(int i=80;i>=0;i--)
{
cleardevice();
    //sky ->upper rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);



//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);



//player1
setcolor(YELLOW);
outtextxy(15,460,"BOTH THE PLAYER FLYING KITE TOGETHER. . . . ");

setfillstyle(SOLID_FILL,GREEN);
circle(50,350,20);
floodfill(50,350,YELLOW);

line(50,370,50,430);
//hand
line(50,390,80,370);
line(80,370,95,340);

//legs
line(50,430,70,450);
line(50,430,30,450);



//player2
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
circle(150,350,20);
floodfill(150,350,YELLOW);

line(150,370,150,430);
//hand
line(150,390,120,410);
//line(180,370,195,340);

//legs
line(150,430,170,450);
line(150,430,130,450);


//charka
line(95,340,120,410);


//dorr
//player1
line(95,340,257+2*i,192-2*i);

//kite
line(260+2*i,150-2*i,300+2*i,190-2*i);
line(260+2*i,150-2*i,230+2*i,190-2*i);
line(230+2*i,190-2*i,300+2*i,190-2*i);
line(230+2*i,190-2*i,265+2*i,235-2*i);
line(300+2*i,190-2*i,240+2*i,235-2*i);
line(240+2*i,235-2*i,264+2*i,235-2*i);
line(260+2*i,150-2*i,256+2*i,222-2*i);

setcolor(WHITE);
//birds1
arc(20+6*i,50,0,170,15);
arc(50+6*i,50,0,170,15);
//birds2
arc(100+6*i,50,0,170,15);
arc(130+6*i,50,0,170,15);
//birds3
arc(60+6*i,80,0,170,15);
arc(90+6*i,80,0,170,15);

//ship
//ship
setcolor(GREEN);
line(450+6*i,245,550+6*i,245);
line(450+6*i,245,430+6*i,210);
line(550+6*i,245,570+6*i,210);
line(440+6*i,230,560+6*i,230);
line(560+6*i,230,560+6*i,180);
line(500+6*i,230,500+6*i,180);
line(490+6*i,190,530+6*i,150);
line(570+6*i,190,530+6*i,150);
line(500+6*i,180,560+6*i,180);

//flag
line(560+6*i,180,560+6*i,140);
line(560+6*i,140,580+6*i,160);
line(580+6*i,160,560+6*i,160);

//window
rectangle(530+6*i,190,550+6*i,220);


//river
//x
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//y
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);

delay(50);
}

}

void both_release_kite()
{
printf("\n\nBoth The Player Loose the Kite.......");

for(int i=0;i<=100;i++)
{
cleardevice();
setcolor(YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(1,1,638,100);
floodfill(319,50,YELLOW);

//grass ->lower rectangle
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
rectangle(2,450,638,600);
floodfill(318,460,YELLOW);


//player1
setcolor(YELLOW);

outtextxy(15,460,"BOTH THE PLAYER LOOSE THE KITE. . . . . . . . ");

setfillstyle(SOLID_FILL,GREEN);
circle(50,350,20);
floodfill(50,350,YELLOW);

line(50,370,50,430);
//hand
line(50,390,80,370);
line(80,370,95,340);

//legs
line(50,430,70,450);
line(50,430,30,450);



//player2
setcolor(YELLOW);
setfillstyle(SOLID_FILL,GREEN);
circle(150,350,20);
floodfill(150,350,YELLOW);

line(150,370,150,430);
//hand
line(150,390,180,370);
line(180,370,195,340);

//legs
line(150,430,170,450);
line(150,430,130,450);


//kite moving
line(185+2*i,65+3*i,165+2*i,115+3*i);
line(185+2*i,65+3*i,235+2*i,115+3*i);
line(165+2*i,115+3*i,215+2*i,165+3*i);
line(235+2*i,115+3*i,185+2*i,165+3*i);
line(185+2*i,165+3*i,215+2*i,165+3*i);
line(185+2*i,65+3*i,200+2*i,150+3*i);
line(165+2*i,115+3*i,235+2*i,115+3*i);
//kite dor
line(198+2*i,150+3*i,198+2*i,180+3*i);
line(198+2*i,180+3*i,220+2*i,185+3*i);
line(220+2*i,185+3*i,195+2*i,245+3*i);

setcolor(WHITE);
//birds1
arc(20+5*i,50,0,170,15);
arc(50+5*i,50,0,170,15);
//birds2
arc(100+5*i,50,0,170,15);
arc(130+5*i,50,0,170,15);
//birds3
arc(60+5*i,80,0,170,15);
arc(90+5*i,80,0,170,15);

//ship
setcolor(GREEN);
line(80+5*i,245,180+5*i,245);

line(80+5*i,245,58+5*i,210);
line(180+5*i,245,202+5*i,210);

line(70+5*i,230,190+5*i,230);

line(70+5*i,230,70+5*i,180);
line(130+5*i,230,130+5*i,180);


line(60+5*i,190,100+5*i,150);
line(140+5*i,190,100+5*i,150);

line(70+5*i,180,130+5*i,180);

//flag
line(70+5*i,180,70+5*i,140);
line(70+5*i,140,50+5*i,160);
line(50+5*i,160,70+5*i,160);

//window
rectangle(80+5*i,190,100+5*i,220);


//river
//x=0,x+35
setcolor(BLUE);
line(0,250,35,250);
line(45,250,80,250);
line(90,250,125,250);
line(135,250,170,250);
line(180,250,215,250);
line(230,250,265,250);
line(275,250,310,250);
line(320,250,355,250);
line(365,250,400,250);
line(410,250,445,250);
line(455,250,490,250);
line(500,250,535,250);
line(545,250,580,250);
line(590,250,625,250);
//x=15,x+35 y+10
line(15,260,50,260);
line(60,260,95,260);
line(105,260,140,260);
line(150,260,185,260);
line(195,260,230,260);
line(240,260,275,260);
line(285,260,320,260);
line(330,260,365,260);
line(375,260,410,260);
line(420,260,455,260);
line(465,260,500,260);
line(510,260,545,260);
line(555,260,590,260);
line(600,260,635,260);


//kite in the water
//water
setcolor(BLUE);
line(340,440,350,440);
line(360,440,370,440);
line(380,440,390,440);
line(400,440,410,440);
line(420,440,430,440);
line(440,440,450,440);
line(460,440,470,440);
line(480,440,490,440);
line(500,440,510,440);
line(520,440,530,440);
line(540,440,550,440);



delay(50);

}
setcolor(YELLOW);

for(int i=0;i<=5;i++)
{
outtextxy(220,230,"GRAPHICS APPLICATION OVER");

outtextxy(450,420,"THE KITE IS IN THE WATER");

delay(1000);
}
printf("\n\nTHE KITE IS IN THE WATER...");
printf("\n\n\n\t\t\t\t-: GAME OVER :-");
}

void gameover()
{
    for(int i=0;i<=5;i++)
    {
        cleardevice();
        setcolor(YELLOW);
 outtextxy(220,230,"GRAPHICS APPLICATION CLOSED . . .");

     outtextxy(270,300,"SUBMITTED TO");

 outtextxy(254,340,"Ms .  ------------------");

 outtextxy(202,380,"SUBMISSION DATE : 15 JUNE 2016");
    }
}













