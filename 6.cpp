#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int leap(int year);
int leap(int year)
{  
  if((year%4)==0 && (year%100)!=0 || (year%400) ==0)
  {
    printf ("%d是閏年\n",year);
  }
  else
  {
    printf ("%d不是閏年\n",year);
  } 
}
int main(int argc,char *argv[])
{
  char *p;  
  char year[20];
  printf("請輸入您要查詢的年份『如果要關閉請輸入exit離開』: ");
  while(fgets(year, sizeof(year), stdin))
  {
    if ((p = strchr(year, '\n')) != NULL)
      *p = '\0';  
    if(!strcmp("exit", year))
    {
      break;
    }
    leap(atoi(year));   
    printf("請輸入您要查詢的年份『如果要關閉請輸入exit離開』: ");
  }
 
  return 0;
}

