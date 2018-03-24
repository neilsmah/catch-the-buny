#ifndef PRESENT_H_INCLUDED
#define PRESENT_H_INCLUDED



struct cord
{
    int x;
    int y;
};


HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );


using namespace std;

  COORD coord={0,0};  // global variable

 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }



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



void option(struct cord c,char* c1)
{
    int x=c.x;
    int y=c.y;
    int n;
    char li=(char) 196;
    char ba=(char) 217;
    char fr=(char) 192;
    char uba=(char) 191;
    char ufr=(char) 218;
    n=strlen(c1);    SetConsoleTextAttribute(h,15);


    gotoxy(x,y);
    cout<<ufr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<uba;
    gotoxy(x,y+1);
    cout<<"|   ";
    SetConsoleTextAttribute(h,14);
    cout<<c1;
    SetConsoleTextAttribute(h,15);
    cout<<"   |";
    gotoxy(x,y+2);
        cout<<fr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<ba;

}


void option(struct cord c,int c1)
{
    int x=c.x;
    int y=c.y;
    int n;
    char li=(char) 196;
    char ba=(char) 217;
    char fr=(char) 192;
    char uba=(char) 191;
    char ufr=(char) 218;
    n=4;   SetConsoleTextAttribute(h,15);
    gotoxy(x,y);
    cout<<ufr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<uba;
    gotoxy(x,y+1);
    cout<<"|   ";
    SetConsoleTextAttribute(h,14);
    cout<<c1;
    gotoxy(x+8,y+1);
    SetConsoleTextAttribute(h,15);
    cout<<"   |";
    gotoxy(x,y+2);
        cout<<fr;
    for(int i=0;i<n+6;i++)
        cout<<li;
    cout<<ba;

}





void soption(struct cord c1,char* c)
{
    int n;
    int x=c1.x;
    int y=c1.y;
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


void inbox(struct cord c,int &st)
{
    int x=c.x;
    int y=c.y;
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
    cin>>st;


}

void trand(int* a,int n,int up,int lp=0)
{
      /* initialize random seed: */
 srand((unsigned)time(0));

    for(int i=0; i<n; i++)
        a[i] = (rand()%(up+1-lp))+lp;
}




void boundry(int end=0,int up=0,char* st="wh")
{
     system("cls");

    if(!strcmp(st,"wh"))
  {


 SetConsoleTextAttribute(h,16*16-1+0);
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

 SetConsoleTextAttribute(h,16*10-1+0);
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


 SetConsoleTextAttribute(h,16*15-1+0);
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

 SetConsoleTextAttribute(h,15);

}

void hline(int y)
{
    char li=(char) 196;
    gotoxy(3,y);
    SetConsoleTextAttribute(h,15);
    for(int i=3;i<147;i++)
    {
        cout<<li;
    }
}

void vline(int x,int dep)
{


    SetConsoleTextAttribute(h,15);
    for(int i=1;i<dep;i++)
    {
        gotoxy(x,i);
        cout<<"|";
    }
}


void bunny(struct cord b,int dig,int s=200)
{
    SetConsoleTextAttribute(h,10);
    int x=b.x-2;
    int y=b.y-9;

if(dig==0)
{
    Beep(5000,150);
    gotoxy(x,y);
    SetConsoleTextAttribute(h,10);
gotoxy(x,y+4);
cout<<"       _     _"; gotoxy(x,y+5);
cout<<"       \\`\\ /`/"; gotoxy(x,y+6);
cout<<"        \\ V /  "; gotoxy(x,y+7);
cout<<"        /. .\\   "; gotoxy(x,y+8);
cout<<"       =\\ T /=   ";
gotoxy(0,0);

Sleep(150);
}

else if (dig==1)
{


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
gotoxy(0,0);

Sleep(s);
}

else if (dig==2)
{


for(int i=0;i<9;i++)
{
    gotoxy(x,y+i);
    for(int j=0;j<19;j++)
        cout<<" ";
}


    gotoxy(x,y);
    SetConsoleTextAttribute(h,10);
gotoxy(x,y+4);
cout<<"       _     _"; gotoxy(x,y+5);
cout<<"       \\`\\ /`/"; gotoxy(x,y+6);
cout<<"        \\ V /  "; gotoxy(x,y+7);
cout<<"        /. .\\   "; gotoxy(x,y+8);
cout<<"       =\\ T /=   ";
gotoxy(0,0);
cout<<"";
Sleep(150);

for(int i=0;i<9;i++)
{
    gotoxy(x,y+i);
    for(int j=0;j<19;j++)
        cout<<" ";
}
gotoxy(0,0);
Sleep(500);


}
}

void bunhole(struct cord c)
{
        gotoxy(c.x,c.y);
     SetConsoleTextAttribute(h,14);
    cout<<"~~~~~~~~~~~~~~~~~~";
}



void akey(struct cord c,int q)
{
    gotoxy(c.x,c.y);
    SetConsoleTextAttribute(h,15);
    char li=(char) 196;
    switch(q)
    {
        case 1: cout<<"<"
                    <<li;
                    break ;
        case 2: cout<<li
                    <<">";
                    break ;
        case 3: cout<<"|";
                    gotoxy(c.x,c.y-1);
                    cout<<"^";
                    break ;
        case 4: cout<<"v";
                    gotoxy(c.x,c.y-1);
                    cout<<"|";
                    break ;
        case 5: cout<<"Ctrl";

                    break ;
        case 6: cout<<"Alt";

                    break ;
        default:;


    }
}

void akey(struct cord c,char* st)
{
    gotoxy(c.x,c.y);
    SetConsoleTextAttribute(h,15);
    cout<<st;

}

void sakey(struct cord c,int q)
{
    gotoxy(c.x,c.y);
    SetConsoleTextAttribute(h,10);
    char li=(char) 196;
    switch(q)
    {
        case 1: cout<<"<"
                    <<li;
                    break ;
        case 2: cout<<li
                    <<">";
                    break ;
        case 3: cout<<"|";
                    gotoxy(c.x,c.y-1);
                    cout<<"^";
                    break ;
        case 4: cout<<"v";
                    gotoxy(c.x,c.y-1);
                    cout<<"|";
                    break ;
        case 5: cout<<"Ctrl";

                    break ;
        case 6: cout<<"Alt";

                    break ;
        default:;


    }
}

void sakey(struct cord c,char* st)
{
    gotoxy(c.x,c.y);
    SetConsoleTextAttribute(h,10);
    cout<<st;

}


void updatescore(struct cord c,int score,int win)
{
    if(score>win)
    {
    gotoxy(c.x+2,c.y+1);
    cout<<"    ";
    SetConsoleTextAttribute(h,10);
    gotoxy(c.x+3,c.y+1);
    cout<<score;
    }

    else
    {
    gotoxy(c.x+2,c.y+1);
    cout<<"    ";
    SetConsoleTextAttribute(h,12);
    gotoxy(c.x+3,c.y+1);
    cout<<score;
    }


}



#endif // PRESENT_H_INCLUDED
