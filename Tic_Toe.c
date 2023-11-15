#include<stdio.h>
#include<conio.h>
#include<windows.h>

char arr[3][3];
int pos = 0;
char ch = 'o'; 
int row,col;
int a =0;

void setup()
{
  for(int i =0;i<3;i++)
    {
       for(int j =0;j<3;j++)
       {
          arr[i][j] =  ' ';
       }
        
    
    }
}
void setpos()
{
   switch(pos)
  {
   case 1: row = 0,col =0;break;
   case 2: row = 0,col =1;break;
   case 3: row = 0,col =2;break;
   case 4: row = 1,col =0;break;
   case 5: row = 1,col =1;break;
   case 6: row = 1,col =2;break;
   case 7: row = 2,col =0;break;
   case 8: row = 2,col =1;break;
   case 9: row = 2,col =2;break;
  }
}
 
void display()
{
    printf(" %c | %c | %c\n",arr[0][0],arr[0][1],arr[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n",arr[1][0],arr[1][1],arr[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n",arr[2][0],arr[2][1],arr[2][2]);
}
int checkwin()
{
   if(arr[0][0]==ch && arr[0][1]==ch && arr[0][2]==ch)
   return 1;
   if(arr[1][0]==ch && arr[1][1]==ch && arr[1][2]==ch)
   return 1;
   if(arr[2][0]==ch && arr[1][1]==ch && arr[2][2]==ch)
   return 1;
   if(arr[0][0]==ch && arr[1][0]==ch && arr[2][0]==ch)
   return 1;
   if(arr[0][1]==ch && arr[1][1]==ch && arr[2][1]==ch)
   return 1;
   if(arr[0][2]==ch && arr[1][2]==ch && arr[2][2]==ch)
   return 1;

   return 0;

}


int main()
{
   setup();
   int i =0;
   while (i!=9)
   {
   checkpos:
   system("cls");
   display();
   printf("current player = %c\n",ch);
   printf("enter position");
   scanf("%d",&pos);

   if(pos<1 || pos>9)
   {
      printf("wrong position\n");
      Sleep(1000);
      goto checkpos;
   }
     setpos();

     if(arr[row][col]==' ')
     {
       arr[row][col]=ch;
       i++;
       int c;
       c = checkwin();


       if(c==1)
       {
         system("cls");
         display();
         printf("player %c win the game\n",ch);
         sleep(2000);
         printf("Thanks for playing");
         return 1;
         
        }
       if(a==0)
       {
         ch ='x';
         a = 1;
       }
       else
       {
         ch = 'o';
         a = 0;
       }
     }
     else
     {
      printf("element already available\n");
      sleep(1000);
      goto checkpos;
     }
   }
   system("cls");
   display();
   printf("Game Draw\n");
   printf("Thanks for playing");
   sleep(2000);
   return 0;

}




