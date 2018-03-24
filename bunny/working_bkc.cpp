#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    int i=0;
do{
Beep(523,300);
Beep(523,300);
Beep(800,200);
Beep(523,300);
Beep(523,300);
Beep(800,200);
Beep(523,300);
Beep(523,300);
Beep(800,200);
Beep(923,300);
Beep(1223,400);
i++;

}
while(i<10);

    return 0;
}








#include<iostream>
#include<windows.h>

using namespace std;

void talk(char* st,char c='m')
{
    if(c=='m')
    {
        for(int i=0;st[i]!='\0';i++)
           {
            Sleep(60);
            cout<<st[i];
           }
    }
    else if(c=='w')
    {
        for(int i=0;st[i]!='\0';i++)
        {
            cout<<st[i];
            if(st[i]==' ')
                Sleep(100);
        }
    }
    else
    {
        for(int i=0;st[i]!='\0';i++)
           {
            Sleep(30);
            cout<<st[i];
           }
    }
}

int main()
{
    char ch[500];
    cin.getline(ch,200,'@');
    talk(ch);
    talk(ch,'w');
    talk(ch,'f');





    return 0;
}





#include<iostream>
#include<windows.h>
#include<string>
#include"present.h"

HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );

using namespace std;

void option(char* c,int x,int y)
{
    int n;
    char li=(char) 196;
    char ba=(char) 217;
    char fr=(char) 192;
    char uba=(char) 191;
    char ufr=(char) 218;
    n=strlen(c);
    SetConsoleTextAttribute(h,15);
    gotoxy(x,y);
    cout<<ufr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<uba;
    gotoxy(x,y+1);
    cout<<"|   ";
    SetConsoleTextAttribute(h,14);
    cout<<c;
    SetConsoleTextAttribute(h,15);
    cout<<"   |";
    gotoxy(x,y+2);
        cout<<fr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<ba;

}


void soption(char* c,int x,int y)
{
    int n;
    char li=(char) 196;
    char ba=(char) 217;
    char fr=(char) 192;
    char uba=(char) 191;
    char ufr=(char) 218;
    n=strlen(c);
    SetConsoleTextAttribute(h,10);
    gotoxy(x,y);
      cout<<ufr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<uba;
    gotoxy(x,y+1);
    cout<<"|   ";
    SetConsoleTextAttribute(h,14);
    cout<<c;
    SetConsoleTextAttribute(h,10);
    cout<<"   |";
    gotoxy(x,y+2);
        cout<<fr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<ba;

}

void inbox(int x,int y,char* st)
{
    char li=(char) 196;
    char ba=(char) 217;
    char fr=(char) 192;
    char uba=(char) 191;
    char ufr=(char) 218;

    gotoxy(x,y);
    SetConsoleTextAttribute(h,15);

    cout<<ufr;
    for(int i=0;i<30;i++)
        cout<<li;
    cout<<uba;
    gotoxy(x,y+2);
        cout<<fr;
    for(int i=0;i<30;i++)
        cout<<li;
    cout<<ba;
    gotoxy(x,y+1);
    cout<<"|   ";
    for(int i=0;i<24;i++)
        cout<<" ";
    cout<<"   |";
      gotoxy(x+5,y+1);
          SetConsoleTextAttribute(h,14);
    cin.getline(st,20);


}


int main()
{
    char y[50]="Yes";
    char n[50]="No";
    char st[25];

    option(y,20,20);
    soption(n,40,20);

    cout<<"\n\n\n\n\n";

    Sleep(1000);
    inbox(60,10,st);


 cout<<"\n\n\n\n\n"
 <<st;










    return 0;
}





int main()
{
    for(int i=0;i<17;i++)
    {
        SetConsoleTextAttribute(h,i);
        cout<<i<<endl;
    }





    return 0;
}


#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
#include"present.h"


using namespace std;



int main()
{
for(int i=0;i<160;i+=4)
{
    gotoxy(i,1);
      printf("%4d",i+3);
}

for(int i=0;i<200;i++)
{
    gotoxy(1,i);
    cout<<i;
}




    return 0;
}


#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
#include <time.h>
#include"present.h"

int trand(int up,int lp=1)
{
      /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  return (rand()%(up-lp-1)  + lp);
}



using namespace std;



int main()
{
    cout<<trand(70);






    return 0;
}














#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
#include <time.h>
#include"present.h"
HANDLE h1 = GetStdHandle ( STD_OUTPUT_HANDLE );

void boundry(int end=0,int up=0,char* st="wh")
{   system("color 00");
     system("cls");

    if(!strcmp(st,"wh"))
  {


 SetConsoleTextAttribute(h1,16*16-1+0);
 gotoxy(0,up);
 for(int i=0;i<150;i++)
        cout<<" ";
 gotoxy(0,up);
 for(int i=0;i<40-end;i++)
    { gotoxy(0,i+up);
    cout<<"  ";
    }
  gotoxy(0,up+40-end);
 for(int i=0;i<150;i++)
        cout<<" ";
 gotoxy(148,up);
 for(int i=0;i<40-end;i++)
    {
         gotoxy(148,i+up);
        cout<<"  ";
    }
  }


 else     if(!strcmp(st,"bl"))
  {

 SetConsoleTextAttribute(h1,16*10-1+0);
 gotoxy(0,up);
 for(int i=0;i<150;i++)
        cout<<" ";
 gotoxy(0,up);
 for(int i=0;i<40-end;i++)
    { gotoxy(0,i+up);
    cout<<"  ";
    }
  gotoxy(0,up+40-end);
 for(int i=0;i<150;i++)
        cout<<" ";
 gotoxy(148,up);
 for(int i=0;i<40-end;i++)
    {
         gotoxy(148,i+up);
        cout<<"  ";
    }


  }

  else     if(!strcmp(st,"ye"))
  {


 SetConsoleTextAttribute(h1,16*15-1+0);
 gotoxy(0,up);
 for(int i=0;i<150;i++)
        cout<<" ";
 gotoxy(0,up);
 for(int i=0;i<40-end;i++)
    { gotoxy(0,i+up);
    cout<<"  ";
    }
  gotoxy(0,up+40-end);
 for(int i=0;i<150;i++)
        cout<<" ";
 gotoxy(148,up);
 for(int i=0;i<40-end;i++)
    {
         gotoxy(148,i+up);
        cout<<"  ";
    }

  }



}



using namespace std;



int main()
{
    Sleep(4000);
    boundry();
     system("color 04");
    Sleep(2000);
        boundry(6);
         system("color 04");

        boundry(0,0,"ye");
         system("color 04");
    Sleep(2000);
        boundry(0,2,"bl");
    Sleep(4000);


    system("color 04");







    return 0;
}







#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
#include <time.h>
#include"present.h"

HANDLE h2 = GetStdHandle ( STD_OUTPUT_HANDLE );

using namespace std;



void bunny(int x, int y)
{
    gotoxy(x,y);
    SetConsoleTextAttribute(h2,10);
gotoxy(x,y+4);
cout<<"       _     _"; gotoxy(x,y+5);
cout<<"       \\`\\ /`/"; gotoxy(x,y+6);
cout<<"        \\ V /  "; gotoxy(x,y+7);
cout<<"        /. .\\   "; gotoxy(x,y+8);
cout<<"       =\\ T /=   ";
Sleep(300);

for(int i=0;i<9;i++)
{
    gotoxy(x,y+i);
    for(int j=0;j<19;j++)
        cout<<" ";
}
    gotoxy(x,y);

cout<<"       _     _"; gotoxy(x,y+1);
cout<<"       \\`\\ /`/"; gotoxy(x,y+2);
cout<<"        \\ V /  "; gotoxy(x,y+3);
cout<<"        /. .\\   "; gotoxy(x,y+4);
cout<<"       =\\ T /=   "; gotoxy(x,y+5);
cout<<"        / ^ \\     "; gotoxy(x,y+6);
cout<<"       /\\\\ //\\"; gotoxy(x,y+7);
cout<<"     __\\ \" \" /__   "; gotoxy(x,y+8);
cout<<"    (____/^\\____)";

Sleep(300);

for(int i=0;i<9;i++)
{
    gotoxy(x,y+i);
    for(int j=0;j<19;j++)
        cout<<" ";
}


    gotoxy(x,y);
    SetConsoleTextAttribute(h2,10);
gotoxy(x,y+4);
cout<<"       _     _"; gotoxy(x,y+5);
cout<<"       \\`\\ /`/"; gotoxy(x,y+6);
cout<<"        \\ V /  "; gotoxy(x,y+7);
cout<<"        /. .\\   "; gotoxy(x,y+8);
cout<<"       =\\ T /=   ";
Sleep(300);

for(int i=0;i<9;i++)
{
    gotoxy(x,y+i);
    for(int j=0;j<19;j++)
        cout<<" ";
}

gotoxy(0,0);

}


int main()
{
    int i;
    Sleep(4000);
    boundry();
    line(25);
    gotoxy(20,20);
     SetConsoleTextAttribute(h2,14);
    cout<<"~~~~~~~~~~~~~~~~~~~   ";
      SetConsoleTextAttribute(h2,10);
    cout<<"<--";
    gotoxy(74,20);
     SetConsoleTextAttribute(h2,10);
    cout<<"-->";
     SetConsoleTextAttribute(h2,14);
    cout<<"   ~~~~~~~~~~~~~~~~~~~";
    i=trand(1);

    bunny(80,11);







    Sleep(4000);
    return 0;
}


