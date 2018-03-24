#include<iostream>
#include<windows.h>
#include<string>
#include <cstdlib>
#include <ctime>
#include<stdio.h>
#include"present.h"
#include"lavel.h"




using namespace std;




int l3()
{
    int nbun=5;
    struct cord bun[5]={{10,12},{35,26},{60,12},{85,26},{110,12}};
     struct cord a[5]={{19,14},{44,28},{69,14},{94,28},{119,14}};
  struct cord arrow [5]={{10,36},{14,38},{18,36},{22,38},{26,36}};
     struct cord sc={120,36};
     int key[5],r[20];
     trand(r,20,4,0);


     int wscore,score=0;
     wscore=20;
     int keyp,gamerun=1;
     int in,j=-1;
     in=-1;
     boundry();
     hline(34);
     bunhole(bun[0]);
     bunhole(bun[1]);
     bunhole(bun[2]);
     bunhole(bun[3]);
     bunhole(bun[4]);
     akey(a[0],"1");
     akey(a[1],"2");
     akey(a[2],"3");
     akey(a[3],"4");
     akey(a[4],"5");

     akey(arrow[0],"1");
     akey(arrow[1],"2");
     akey(arrow[2],"3");
     akey(arrow[3],"4");
     akey(arrow[4],"5");

     gotoxy(120,35);
     cout<<"Score";
     option(sc,0);
     Sleep(2000);





     while(gamerun)
     {

         in++;
       in=in%3;
       if(in==0)
       {
           Sleep(300);
     akey(arrow[0],"1");
     akey(arrow[1],"2");
     akey(arrow[2],"3");
     akey(arrow[3],"4");
     akey(arrow[4],"5");
        keyp=0;
        key[0]=0;
        key[1]=0;
        key[2]=0;
        key[3]=0;
        key[4]=0;
        j++;
        gotoxy(50,37);
        cout<<"      ";


       }

       int az=r[j];
        bunny(bun[az],in);

       if(keyp==0)
       {
           if(GetAsyncKeyState(0x31))
           {
                sakey(arrow[0],"1");
                key[0]=1;
                keyp=1;
           }
           else if(GetAsyncKeyState(0x32))
           {
               sakey(arrow[1],"2");
               key[1]=1;
                keyp=1;
           }

            else if(GetAsyncKeyState(0x33))
           {
               sakey(arrow[2],"3");
               key[2]=1;
                keyp=1;
           }


                  else if(GetAsyncKeyState(0x34))
           {
               sakey(arrow[3],"4");
               key[3]=1;
                keyp=1;

           }

                   else if(GetAsyncKeyState(0x35))
           {
               sakey(arrow[4],"5");
               key[4]=1;
                keyp=1;

           }

       }

       if(keyp==1)
       {
           if(key[az]==1)
           {
               gotoxy(50,37);
               SetConsoleTextAttribute(h1,10);
               cout<<"V  +2";
               score+=2;
               updatescore(sc,score,wscore);
           }

           else
            {
               gotoxy(50,37);
               SetConsoleTextAttribute(h1,12);
               cout<<"X  -1";
               score-=1;
               updatescore(sc,score,wscore);
           }

           keyp=2;

       }



       if(j>=20&&in==2)
        gamerun=0;




     }

     if(score>wscore)
        return 1;
     return 0;




}

int main()
{
    Sleep(4000);
    int res=l2();
    Sleep(4000);

    return 0;
}



