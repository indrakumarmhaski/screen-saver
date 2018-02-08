#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

void screenSaver();

void main()
{
  clrscr();
  while(1)
  {
     sleep(5);  /*Time in seconds,for that much of time screen saver
		  will wait for any input, as if there is any then it
		  will wait again untill a complete blank interval */

    if(kbhit())  //If any key was pressed then do nothing let the loop exicute again.
     {
       while(kbhit()!=0)  /* Clear the keybord input stream for next iteration
			   becaouse kbhit() stors keystroks in stream so I used
			   getch() to clear each character untill null left in input stream.
			   This was the most complicated logic for me to design in this progrm. */
	  getch();
     }
    else
    {
       screenSaver();  //Else call our screenSaver.
       break;          //Exit on complition
    }
  }

}


void screenSaver()
{
     clrscr();

     int i=1;      //For storing color value form 0 to 15
		   // 0=black so I did't start it from 0
     while(1)
     {
       textcolor(i);
       i++;
       if(i==15)    //Max color is 15 so restart form 1
       {
	 i=1;
       }
       gotoxy(30,12);
       cprintf("Indra Kumar Mhaski");
       sleep(1);
       if(kbhit())
       {
	 break;     //if any keystrok occor then exit from function.
       }
       else
       {
	  continue; //if not keystrok then continue with new color
       }
     }
     getch();
}


