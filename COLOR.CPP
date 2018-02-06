#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
     clrscr();

     int i=1;

     while(1)
     {
       textcolor(i);
       i++;
       if(i==25)
       {
	 i=1;
       }
       gotoxy(30,12);
       cprintf("Indra Kumar Mhaski");
       sleep(1);
       if(kbhit())
       {
	 break;
       }
       else
       {
	  continue;
       }
     }
     getch();
}


