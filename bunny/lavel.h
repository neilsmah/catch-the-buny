#ifndef LAVEL_H_INCLUDED
#define LAVEL_H_INCLUDED

HANDLE h1 = GetStdHandle ( STD_OUTPUT_HANDLE );
using namespace std;


int t1()
{
    int nbun=5;
    struct cord bun[2]={{20,20},{100,20}};
     struct cord a[2]={{40,20},{96,20}};
     struct cord arrow [2]={{12,37},{20,37}};
     struct cord sc={120,36};
     int key[2],r[10];
     trand(r,10,1,0);


     int wscore,score=0;
     wscore=8;
     int keyp,gamerun=1;
     int in,j=-1;
     in=-1;
     boundry();
     hline(34);
     bunhole(bun[0]);
     bunhole(bun[1]);
     akey(a[0],1);
     akey(a[1],2);
     akey(arrow[0],1);
     akey(arrow[1],2);
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
           Sleep(500);
        akey(arrow[0],1);
     akey(arrow[1],2);
        keyp=0;
        key[0]=0;
        key[1]=0;
        j++;
        gotoxy(50,37);
        cout<<"      ";


       }

       int az=r[j];
        bunny(bun[az],in);

       if(keyp==0)
       {
           if(GetAsyncKeyState(VK_LEFT))
           {
                sakey(arrow[0],1);
                key[0]=1;
                keyp=1;
           }
           else if(GetAsyncKeyState(VK_RIGHT))
           {
               sakey(arrow[1],2);
               key[1]=1;
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



       if(j>=10&&in==2)
        gamerun=0;




     }

     if(score>wscore)
        return 1;
     return 0;




}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
int t2()
{

    int nbun=5;
    struct cord bun[2]={{20,20},{100,20}};
     struct cord a[2]={{40,20},{96,20}};
     struct cord arrow [2]={{12,37},{20,37}};
     struct cord sc={120,36};
     int key[2],r[10];
     trand(r,10,1,0);


     int wscore,score=0;
     wscore=8;
     int keyp,gamerun=1;
     int in,j=-1;
     in=-1;
     boundry();
     hline(34);
     vline(70,34);
     bunhole(bun[0]);
     bunhole(bun[1]);
     akey(a[0],5);
     akey(a[1],6);
     akey(arrow[0],5);
     akey(arrow[1],6);
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
           Sleep(500);
        akey(arrow[0],5);
     akey(arrow[1],6);
        keyp=0;
        key[0]=0;
        key[1]=0;
        j++;
        gotoxy(50,37);
        cout<<"       ";


       }

       int az=r[j];
        bunny(bun[az],in);

       if(keyp==0)
       {
           if(GetAsyncKeyState(VK_CONTROL))
           {
                sakey(arrow[0],5);
                key[0]=1;
                keyp=1;
           }
           else if(GetAsyncKeyState(VK_MENU))
           {
               sakey(arrow[1],6);
               key[1]=1;
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



       if(j>=10&&in==2)
        gamerun=0;




     }

     if(score>wscore)
        return 1;
     return 0;




}


//____________________________________________________________________________________________________________________________________________________________________


int l2()
{

    int nbun=5;
    struct cord bun[4]={{20,10},{100,10},{20,27},{100,27}};
     struct cord a[4]={{40,10},{120,10},{40,27},{120,27}};
    struct cord b[4]={{42,10},{122,10},{42,27},{122,27}};
     struct cord arrow [4]={{12,37},{20,36},{20,39},{24,37}};
     struct cord sc={120,36};
     int key[4],r[20];
     trand(r,20,3,0);


     int wscore,score=0;
     wscore=14;
     int keyp1,keyp2,keyp3,gamerun=1;
     int in,j=-1;
     in=-1;
     boundry();
     hline(34);
     vline(70,34);
     bunhole(bun[0]);
     bunhole(bun[1]);
     bunhole(bun[2]);
     bunhole(bun[3]);
     akey(a[0],3);
     akey(b[0],5);
     akey(a[1],3);
     akey(b[1],6);
     akey(a[2],4);
     akey(b[2],5);
     akey(a[3],4);
     akey(b[3],6);
     akey(arrow[0],5);
     akey(arrow[1],3);
     akey(arrow[2],4);
     akey(arrow[3],6);
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
        Sleep(500);
        akey(arrow[0],5);
        akey(arrow[1],3);
        akey(arrow[2],4);
        akey(arrow[3],6);

        keyp1=0;
        keyp2=0;
        keyp3=1;
        key[0]=0;
        key[1]=0;
        key[2]=0;
        key[3]=0;

        j++;
        gotoxy(50,37);
        cout<<"       ";



       }

       int az=r[j];
        bunny(bun[az],in);

       if(keyp1==0)
       {
           if(GetAsyncKeyState(VK_CONTROL))
           {
                sakey(arrow[0],5);

                keyp1=1;
           }
           else if(GetAsyncKeyState(VK_MENU))
           {
               sakey(arrow[3],6);

                keyp1=2;
           }
       }

       if(keyp2==0)
       {
           if(GetAsyncKeyState(VK_UP))
           {
                sakey(arrow[1],3);

                keyp2=1;
           }
           else if(GetAsyncKeyState(VK_DOWN))
           {
               sakey(arrow[2],4);

                keyp2=2;
           }
       }


       if(keyp1&&keyp2&&keyp3)
       {
           if(keyp1==1&&keyp2==2)
            key[2]=1;
           else
            key[keyp1*keyp2-1]=1;

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

          keyp3=0;

       }



       if(j>=20&&in==2)
        gamerun=0;




     }

     if(score>wscore)
        return 1;
     return 0;




}


//_____________________________________________________________________________________________________________________________________



int l1()
{
    int nbun=5;
    struct cord bun[4]={{20,20},{60,11},{100,20},{60,31}};
     struct cord a[4]={{41,20},{68,13},{95,20},{68,33}};
  struct cord arrow [4]={{17,37},{20,36},{22,37},{20,39}};
     struct cord sc={120,36};
     int key[4],r[20];
     trand(r,20,3,0);


     int wscore,score=0;
     wscore=15;
     int keyp,gamerun=1;
     int in,j=-1;
     in=-1;
     boundry();
     hline(34);
     bunhole(bun[0]);
     bunhole(bun[1]);
     bunhole(bun[2]);
     bunhole(bun[3]);
     akey(a[0],1);
     akey(a[1],3);
     akey(a[2],2);
     akey(a[3],4);
     akey(arrow[0],1);
     akey(arrow[1],3);
     akey(arrow[2],2);
     akey(arrow[3],4);
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

     akey(arrow[0],1);
     akey(arrow[1],3);
     akey(arrow[2],2);
     akey(arrow[3],4);
        keyp=0;
        key[0]=0;
        key[1]=0;
        key[2]=0;
        key[3]=0;
        j++;
        gotoxy(50,37);
        cout<<"      ";


       }

       int az=r[j];
        bunny(bun[az],in);

       if(keyp==0)
       {
           if(GetAsyncKeyState(VK_LEFT))
           {
                sakey(arrow[0],1);
                key[0]=1;
                keyp=1;
           }
           else if(GetAsyncKeyState(VK_UP))
           {
               sakey(arrow[1],3);
               key[1]=1;
                keyp=1;
           }

            else if(GetAsyncKeyState(VK_RIGHT))
           {
               sakey(arrow[2],2);
               key[2]=1;
                keyp=1;
           }


                  else if(GetAsyncKeyState(VK_DOWN))
           {
               sakey(arrow[3],4);
               key[3]=1;
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
           Sleep(300);

       }



       if(j>=20&&in==2)
        gamerun=0;




     }

     if(score>wscore)
        return 1;
     return 0;




}


//_________________________________________________________________________________________________________________________________________

#endif // LAVEL_H_INCLUDED
