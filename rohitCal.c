#include<stdio.h>
#include<conio.h>
#include<windows.h>
int dayofweek(int y,int m,int d);
int getkey();
void main()
{   int i, j, k, y1, m1, d1=1, week, key, dmax, year;
    int mat[6][7]; char* wee[7]={"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
    char* month[12]={"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    printf("Enter the YEAR and MONTH of which you want the calender\n\n");
    scanf("%d%d", &y1, &m1);
    if(!(1800<=y1&&y1<=2100&&1<=m1&&m1<=12)) printf("\nINVALD DATE!");
    else{   printf("\tWELCOME TO THE CALENDER MADE BY ROHIT\n\n\tPRESS ARROW KEYS TO CHANGE MONTH AND YEAR\n\n\t\t*******************\n\n\n\n\n\n");
          week=dayofweek(y1, m1, d1);
           printf("\t\t\t%d", y1);
           printf("\n\t\t\t%s", month[m1-1]);
           printf("\n\n\n");
          for(k=0; k<7; k++)
        printf("%s\t", wee[k]);
         printf("\n\n");
         if(y1%4==0)
    {if( y1%100==0)
        {if ( y1%400==0)
                year=2;
            else
                year=1;}
        else
           year=2;}
    else
        year=1;

        // if(m1%2==0){if(m1==2){if(year==1)d1<=28; if(year==1)d1<=28; else if(year==2)d1<=d9;}d1<=30;}else d1<=31;
         if(m1%2==0){dmax=30;if(m1==8)dmax=31;}else dmax=31;
         if(m1==2){if(year==1)dmax=28; else if(year==2)dmax=29;}
for(i=0; i<6; i++)
    { if(week>0){
        for(j=0; j<week; j++)
        {
            printf("\t");
        } }

        for(j=week; j<7&&d1<=dmax; j++)
        {
            mat[i][j]=d1++;
            printf("%d\t",  mat[i][j]);
            week=0;
        }

          printf("\n");
     }

while(1){
        d1=1;
    key=getkey();
    if(key==72){
        y1=y1-1; system("cls"); printf("\n\n\n\n\n");
         printf("\tWELCOME TO THE CALENDER MADE BY ROHIT\n\n\tPRESS ARROW KEYS TO CHANGE MONTH AND YEAR\n\n\t\t*******************\n\n\n\n\n\n");
        week=dayofweek(y1, m1, d1);
        printf("\t\t\t%d", y1);
           printf("\n\t\t\t%s", month[m1-1]);
           printf("\n\n\n");
          for(k=0; k<7; k++)
        printf("%s\t", wee[k]);
         printf("\n\n");
         if(y1%4==0)
    {if( y1%100==0)
        {if ( y1%400==0)
                year=2;
            else
                year=1;}
        else
           year=2;}
    else
        year=1;

         if(m1%2==0){dmax=30;if(m1==8)dmax=31;}else dmax=31;
          if(m1==2){if(year==1)dmax=28; else if(year==2)dmax=29;}
for(i=0; i<6; i++)
    { if(week>0){
        for(j=0; j<week; j++)
        {
            printf("\t");
        } }

        for(j=week; j<7&&d1<=dmax; j++)
        {
            mat[i][j]=d1++;
            printf("%d\t",  mat[i][j]);
            week=0;
        }

          printf("\n");
     }   printf("\n\n\n\t:o  ;0  :D  :/  :|  :(  :)");
}
if(key==80){
        y1=y1+1; system("cls"); printf("\n\n\n\n\n");
         printf("\tWELCOME TO THE CALENDER MADE BY ROHIT\n\n\tPRESS ARROW KEYS TO CHANGE MONTH AND YEAR\n\n\t\t*******************\n\n\n\n\n\n");
        week=dayofweek(y1, m1, d1);
        printf("\t\t\t%d", y1);
           printf("\n\t\t\t%s", month[m1-1]);
           printf("\n\n\n");
          for(k=0; k<7; k++)
        printf("%s\t", wee[k]);
         printf("\n\n");
         if(y1%4==0)
    {if( y1%100==0)
        {if ( y1%400==0)
                year=2;
            else
                year=1;}
        else
           year=2;}
    else
        year=1;

         if(m1%2==0){dmax=30;if(m1==8)dmax=31;}else dmax=31;
          if(m1==2){if(year==1)dmax=28; else if(year==2)dmax=29;}
for(i=0; i<6; i++)
    { if(week>0){
        for(j=0; j<week; j++)
        {
            printf("\t");
        } }

        for(j=week; j<7&&d1<=dmax; j++)
        {
            mat[i][j]=d1++;
            printf("%d\t",  mat[i][j]);
            week=0;
        }

          printf("\n");
     }   printf("\n\n\n\t:o  ;0  :D  :/  :|  :(  :)");

}
if(key==75){
        m1=m1-1;     if(!(1<=m1)){m1=12; y1=y1-1;}
        system("cls"); printf("\n\n\n\n\n");
         printf("\tWELCOME TO THE CALENDER MADE BY ROHIT\n\n\tPRESS ARROW KEYS TO CHANGE MONTH AND YEAR\n\n\t\t*******************\n\n\n\n\n\n");
        week=dayofweek(y1, m1, d1);
        printf("\t\t\t%d", y1);
           printf("\n\t\t\t%s", month[m1-1]);
           printf("\n\n\n");
          for(k=0; k<7; k++)
        printf("%s\t", wee[k]);
         printf("\n\n");
         if(y1%4==0)
    {if( y1%100==0)
        {if ( y1%400==0)
                year=2;
            else
                year=1;}
        else
           year=2;}
    else
        year=1;

         if(m1%2==0){dmax=30;if(m1==8)dmax=31;}else dmax=31;
          if(m1==2){if(year==1)dmax=28; else if(year==2)dmax=29;}
for(i=0; i<6; i++)
    { if(week>0){
        for(j=0; j<week; j++)
        {
            printf("\t");
        } }

        for(j=week; j<7&&d1<=dmax; j++)
        {
            mat[i][j]=d1++;
            printf("%d\t",  mat[i][j]);
            week=0;
        }

          printf("\n");
     }   printf("\n\n\n\t:o  ;0  :D  :/  :|  :(  :)");
}
if(key==77){
        m1=m1+1; if(!(m1<=12)){m1=1; y1=y1+1;}
        system("cls"); printf("\n\n\n\n\n");
         printf("\tWELCOME TO THE CALENDER MADE BY ROHIT\n\n\tPRESS ARROW KEYS TO CHANGE MONTH AND YEAR\n\n\t\t*******************\n\n\n\n\n\n");
        week=dayofweek(y1, m1, d1);
        printf("\t\t\t%d", y1);
           printf("\n\t\t\t%s", month[m1-1]);
           printf("\n\n\n");
          for(k=0; k<7; k++)
        printf("%s\t", wee[k]);
         printf("\n\n");
         if(y1%4==0)
    {if( y1%100==0)
        {if ( y1%400==0)
                year=2;
            else
                year=1;}
        else
           year=2;}
    else
        year=1;

         if(m1%2==0){dmax=30;if(m1==8)dmax=31;}else dmax=31;
          if(m1==2){if(year==1)dmax=28; else if(year==2)dmax=29;}
for(i=0; i<6; i++)
    { if(week>0){
        for(j=0; j<week; j++)
        {
            printf("\t");
        } }

        for(j=week; j<7&&d1<=dmax; j++)
        {
            mat[i][j]=d1++;
            printf("%d\t",  mat[i][j]);
            week=0;
        }

          printf("\n");
     }   printf("\n\n\n\t:o  ;0  :D  :/  :|  :(  :)");
}




           }


}
   }



int dayofweek(int y,int m,int d)  /* 1 <= m <= 12,  y > 1752 (in the U.K.) */
    {
        static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        y -= m < 3;
        return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
    }

int getkey()
{
    int ch;
    ch=getch();
    if(ch==0)
    {
        ch=getch();
        return ch;
    }
    return ch;
}

