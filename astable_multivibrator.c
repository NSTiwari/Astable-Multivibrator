#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
astable();
astable_val();
astable_close();
astable();
ledani(int);
int main()
{
int v=0,r=0;
float c=0,r1=0,t=1;
char a[50];

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter circuit DC voltage\n");
scanf("%d",&v);
printf("\nEnter value of capacitance in uF\n");
scanf("%f",&c);
printf("\nEnter value of LED resistances in ohm\n");
scanf("%d",&r);
printf("\nEnter value of circuit resistances in K-ohm\n");
scanf("%f",&r1);
t=c*r1;
printf("\nRC Time Constant=%0.1fms",t);
getch();
cleardevice();

astable();

sprintf(a,"%d",r);
outtextxy(80,120,a);
outtextxy(120,120,a);
outtextxy(160,120,a);
outtextxy(200,120,a);
outtextxy(240,120,a);
outtextxy(405,120,a);
outtextxy(445,120,a);
outtextxy(485,120,a);
outtextxy(525,120,a);
outtextxy(565,120,a);
sprintf(a,"%0.1f uF",c);
outtextxy(80,315,a);
outtextxy(395,315,a);
sprintf(a,"%0.1f",r1);
outtextxy(390,390,a);
outtextxy(440,390,a);
outtextxy(390,400,"K-ohm");
outtextxy(445,400,"K-ohm");
outtextxy(80,130,"ohm  ohm  ohm  ohm  ohm");
outtextxy(405,130,"ohm  ohm  ohm  ohm  ohm");
setcolor(RED);
sprintf(a,"%dV",v);
outtextxy(610,270,a);

outtextxy(610,280,"DC");
setcolor(BLUE);
line(535,450,555,450);
ledani(t);
getch();
return 0;
}

ledani(int x)
{
int a= 50, b=76,c=4;
while(!kbhit())
 {
 setfillstyle(SOLID_FILL,c);
 floodfill(a,b,BLACK);
 delay(x*100);
 setfillstyle(SOLID_FILL,15);
 floodfill(a,b,BLACK);
 a+=40;
 if(a>210&&a<380)
  {
  a=380;
  c=2;
  }
 if(a>540)
  {
  a=50;
  c=4;
  }
 }
return 0;
}
astable_close()
{
astable();
getch();
return 0;
}
astable()
{
floodfill(10,10,WHITE);

setcolor(BLACK);
line(50,100,210,100);
line(50,101,210,101);
line(375,100,535,100);
line(375,101,535,101);

line(50,100,50,290);
line(51,100,51,290);
line(50,340,50,370);
line(51,340,51,370);
line(50,370,490,370);
line(50,369,490,369);
line(490,240,490,380);
line(491,240,491,380);
line(375,100,375,290);
line(376,100,376,290);

rectangle(370,381,380,400);    //RESISTOR1
rectangle(485,381,495,400);    //RESISTOR2
setfillstyle(SOLID_FILL,BROWN);
floodfill(375,390,BLACK);
floodfill(490,390,BLACK);
rectangle(170,190,190,220); //NPN Transistor for RED LEDs

line(170,250,170,240);  //wire connected to NPN collector (RED LED)
line(169,250,169,240);
line(50,250,170,250);
line(50,249,170,249);

line(191,240,191,460);    //wire connected to NPN emitter (RED LED)
line(192,240,192,460);

line(169,240,175,220);          //collector
line(180,220,180,240);         //base
line(185,220,191,240);        //emitter

line(191,450,520,450);
line(191,449,520,449);
line(570,450,590,450);
line(570,449,590,449);
line(590,450,590,285);
line(589,450,589,285);
line(180,461,205,461);     //ground
line(184,465,201,465);
line(188,469,197,469);


rectangle(480,190,500,220); //NPN Transistor for GREEN LEDs
setfillstyle(SOLID_FILL,7);
floodfill(490,200,BLACK);
floodfill(180,200,BLACK);
line(480,250,480,240);  //wire connected to NPN collector (GREEN LED)
line(479,250,479,240);
line(375,250,480,250);
line(375,249,480,249);

line(501,240,501,450);    //wire connected to NPN emitter (GREEN LED)
line(502,240,502,450);

line(479,240,485,220);          //collector
line(490,220,490,240);         //base
line(495,220,501,240);        //emitter


line(45,79,75,79);      //RED LED #1
line(45,79,45,75);
line(75,79,75,75);
line(45,75,50,75);
line(70,75,75,75);
line(50,75,50,65);
line(70,75,70,65);
arc(60,65,0,180,10);

line(85,79,115,79);      //RED LED #2
line(85,79,85,75);
line(115,79,115,75);
line(85,75,90,75);
line(110,75,115,75);
line(90,75,90,65);
line(110,75,110,65);
arc(100,65,0,180,10);

line(125,79,155,79);      //RED LED #3
line(125,79,125,75);
line(155,79,155,75);
line(125,75,130,75);
line(150,75,155,75);
line(130,75,130,65);
line(150,75,150,65);
arc(140,65,0,180,10);

line(165,79,195,79);      //RED LED #4
line(165,79,165,75);
line(195,79,195,75);
line(165,75,170,75);
line(190,75,195,75);
line(170,75,170,65);
line(190,75,190,65);
arc(180,65,0,180,10);

line(205,79,235,79);      //RED LED #5
line(205,79,205,75);
line(235,79,235,75);
line(205,75,210,75);
line(230,75,235,75);
line(210,75,210,65);
line(230,75,230,65);
arc(220,65,0,180,10);



line(370,79,400,79);      //GREEN LED #1
line(370,79,370,75);
line(400,79,400,75);
line(370,75,375,75);
line(395,75,400,75);
line(375,75,375,65);
line(395,75,395,65);
arc(385,65,0,180,10);

line(410,79,440,79);      //GREEN LED #2
line(410,79,410,75);
line(440,79,440,75);
line(410,75,415,75);
line(435,75,440,75);
line(415,75,415,65);
line(435,75,435,65);
arc(425,65,0,180,10);

line(450,79,480,79);      //GREEN LED #3
line(450,79,450,75);
line(480,79,480,75);
line(450,75,455,75);
line(475,75,480,75);
line(455,75,455,65);
line(475,75,475,65);
arc(465,65,0,180,10);

line(490,79,520,79);      //GREEN LED #4
line(490,79,490,75);
line(520,79,520,75);
line(490,75,495,75);
line(515,75,520,75);
line(495,75,495,65);
line(515,75,515,65);
arc(505,65,0,180,10);

line(530,79,560,79);      //GREEN LED #5
line(530,79,530,75);
line(560,79,560,75);
line(530,75,535,75);
line(555,75,560,75);
line(535,75,535,65);
line(555,75,555,65);
arc(545,65,0,180,10);



setcolor(BROWN);
line(51,100,51,80);     //RED LED #1 wires
line(50,100,50,80);
line(71,80,71,90);
line(70,80,70,90);

line(91,100,91,80);     //RED LED #2 wires
line(90,100,90,80);
line(111,80,111,90);
line(110,80,110,90);

line(131,100,131,80);     //RED LED #3 wires
line(130,100,130,80);
line(151,80,151,90);
line(150,80,150,90);

line(171,100,171,80);     //RED LED #4 wires
line(170,100,170,80);
line(191,80,191,90);
line(190,80,190,90);

line(211,100,211,80);     //RED LED #5 wires
line(210,100,210,80);
line(231,80,231,90);
line(230,80,230,90);


line(376,100,376,80);     //GREEN LED #1 wires
line(375,100,375,80);
line(396,80,396,90);
line(395,80,395,90);

line(416,100,416,80);     //GREEN LED #2 wires
line(415,100,415,80);
line(436,80,436,90);
line(435,80,435,90);

line(456,100,456,80);     //GREEN LED #3 wires
line(455,100,455,80);
line(476,80,476,90);
line(475,80,475,90);

line(496,100,496,80);     //GREEN LED #4 wires
line(495,100,495,80);
line(516,80,516,90);
line(515,80,515,90);

line(536,100,536,80);     //GREEN LED #5 wires
line(535,100,535,80);
line(556,80,556,90);
line(555,80,555,90);

setcolor(RED);
line(72,90,72,110);      //RED LED #1 connector
line(73,90,73,110);

line(112,90,112,110);      //RED LED #2 connector
line(113,90,113,110);
line(152,90,152,110);      //RED LED #3 connector
line(153,90,153,110);
line(192,90,192,110);      //RED LED #4 connector
line(193,90,193,110);
line(232,90,232,110);      //RED LED #5 connector
line(233,90,233,110);

line(397,90,397,110);      //GREEN LED #1 connector
line(398,90,398,110);
line(437,90,437,110);      //GREEN LED #2 connector
line(438,90,438,110);
line(477,90,477,110);      //GREEN LED #3 connector
line(478,90,478,110);
line(517,90,517,110);      //GREEN LED #4 connector
line(518,90,518,110);
line(557,90,557,110);      //GREEN LED #5 connector
line(558,90,558,110);

line(180,240,180,360);    //wire connected to NPN base (RED LED)
line(181,240,181,360);
line(180,360,375,360);
line(180,359,375,359);
line(375,345,375,380);
line(376,345,376,380);
line(375,401,375,420);
line(376,401,376,420);
line(350,420,490,420);
line(350,419,490,419);
line(490,420,490,401);
line(489,420,489,401);



line(73,140,73,170);         //RED LEDs connected to main wire
line(74,140,74,170);
line(113,140,113,170);
line(114,140,114,170);
line(153,140,153,420);

line(154,140,154,420);       //**
line(153,420,270,420);

line(153,419,270,419);
line(193,140,193,170);
line(194,140,194,170);
line(233,140,233,170);
line(234,140,234,170);
line(73,169,590,169);
line(73,170,590,170);
line(590,170,590,270);
line(589,170,589,270);
line(580,270,600,270);
line(585,275,595,275);
line(580,280,600,280);
line(585,285,595,285);

line(398,140,398,170);         //GREEN LEDs connected to main wire
line(399,140,399,170);
line(438,140,438,170);
line(439,140,439,170);
line(478,140,478,170);
line(479,140,479,170);
line(518,140,518,170);
line(519,140,519,170);
line(558,140,558,170);
line(559,140,559,170);






setcolor(BLUE);
line(73,110,73,115);       //R1
line(73,115,76,118);
line(76,118,73,121);
line(73,121,76,124);
line(76,124,73,127);
line(73,127,76,130);
line(76,130,73,133);
line(73,133,73,140);

line(113,110,113,115);       //R2
line(113,115,116,118);
line(116,118,113,121);
line(113,121,116,124);
line(116,124,113,127);
line(113,127,116,130);
line(116,130,113,133);
line(113,133,113,140);

line(153,110,153,115);       //R3
line(153,115,156,118);
line(156,118,153,121);
line(153,121,156,124);
line(156,124,153,127);
line(153,127,156,130);
line(156,130,153,133);
line(153,133,153,140);

line(193,110,193,115);       //R4
line(193,115,196,118);
line(196,118,193,121);
line(193,121,196,124);
line(196,124,193,127);
line(193,127,196,130);
line(196,130,193,133);
line(193,133,193,140);

line(233,110,233,115);       //R5
line(233,115,236,118);
line(236,118,233,121);
line(233,121,236,124);
line(236,124,233,127);
line(233,127,236,130);
line(236,130,233,133);
line(233,133,233,140);

line(398,110,398,115);       //R1
line(398,115,401,118);
line(401,118,398,121);
line(398,121,401,124);
line(401,124,398,127);
line(398,127,401,130);
line(401,130,398,133);
line(398,133,398,140);

line(438,110,438,115);       //R2
line(438,115,441,118);
line(441,118,438,121);
line(438,121,441,124);
line(441,124,438,127);
line(438,127,441,130);
line(441,130,438,133);
line(438,133,438,140);

line(478,110,478,115);       //R3
line(478,115,481,118);
line(481,118,478,121);
line(478,121,481,124);
line(481,124,478,127);
line(478,127,481,130);
line(481,130,478,133);
line(478,133,478,140);

line(518,110,518,115);       //R4
line(518,115,521,118);
line(521,118,518,121);
line(518,121,521,124);
line(521,124,518,127);
line(518,127,521,130);
line(521,130,518,133);
line(518,133,518,140);

line(558,110,558,115);       //R5
line(558,115,561,118);
line(561,118,558,121);
line(558,121,561,124);
line(561,124,558,127);
line(558,127,561,130);
line(561,130,558,133);
line(558,133,558,140);

line(50,290,50,320);
line(50,326,50,345);
line(40,320,60,320);      //C1
line(40,321,60,321);
line(40,325,60,325);
line(40,326,60,326);

line(375,290,375,320);
line(375,326,375,345);
line(365,320,385,320);      //C2
line(365,321,385,321);
line(365,325,385,325);
line(365,326,385,326);

line(270,420,280,420);     //rheostat
line(280,420,285,415);
line(285,415,290,425);
line(290,425,300,415);
line(300,415,305,425);
line(305,425,315,415);
line(315,415,320,425);
line(320,425,325,420);
line(325,420,340,420);
line(340,420,350,420);
line(320,400,280,430);
line(280,430,290,428);
line(280,430,282,425);
line(520,450,530,450);   //switch
circle(532,450,2);
line(560,450,570,450);
circle(558,450,2);
setcolor(YELLOW);
line(371,385,379,385);
line(371,386,379,386);
line(486,385,494,385);
line(486,386,494,386);
setcolor(9);
line(371,388,379,388);
line(371,389,379,389);
line(486,388,494,388);
line(486,389,494,389);
setcolor(10);
line(371,391,379,391);
line(371,392,379,392);
line(486,391,494,391);
line(486,392,494,392);
setcolor(13);
line(371,393,379,393);
line(371,394,379,394);
line(486,393,494,393);
line(486,394,494,394);
setcolor(BLUE);
outtextxy(70,235,"COLLECTOR");
outtextxy(400,235,"COLLECTOR");
outtextxy(200,190,"NPN");
outtextxy(200,200,"2N3904");
outtextxy(510,190,"NPN");
outtextxy(510,200,"2N3904");
outtextxy(230,435,"0-10 K-ohm Variable Resistor");
outtextxy(280,400,"10%");
outtextxy(170,260,"B");
outtextxy(170,270,"A");
outtextxy(170,280,"S");
outtextxy(170,290,"E");

outtextxy(200,240,"E");
outtextxy(200,250,"M");
outtextxy(200,260,"I");
outtextxy(200,270,"T");
outtextxy(200,280,"T");
outtextxy(200,290,"E");
outtextxy(200,300,"R");
outtextxy(480,260,"B");
outtextxy(480,270,"A");
outtextxy(480,280,"S");
outtextxy(480,290,"E");
outtextxy(510,240,"E");
outtextxy(510,250,"M");
outtextxy(510,260,"I");
outtextxy(510,270,"T");
outtextxy(510,280,"T");
outtextxy(510,290,"E");
outtextxy(510,300,"R");
outtextxy(380,310,"+");
outtextxy(390,330,"CAPACITOR");
outtextxy(55,310,"+");
outtextxy(70,330,"CAPACITOR");
outtextxy(520,460,"SWITCH");
outtextxy(80,90,"+    +    +    +    +");
outtextxy(405,90,"+    +    +    +    +");
getch();
return 0;
}
