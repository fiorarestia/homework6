#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int leap(int year);
int leap(int year)
{  
  if((year%4)==0 && (year%100)!=0 || (year%400) ==0)
  {
    printf ("%d�O�|�~\n",year);
  }
  else
  {
    printf ("%d���O�|�~\n",year);
  } 
}
int main(int argc,char *argv[])
{
  char *p;  
  char year[20];
  printf("�п�J�z�n�d�ߪ��~���y�p�G�n�����п�Jexit���}�z: ");
  while(fgets(year, sizeof(year), stdin))
  {
    if ((p = strchr(year, '\n')) != NULL)
      *p = '\0';  
    if(!strcmp("exit", year))
    {
      break;
    }
    leap(atoi(year));   
    printf("�п�J�z�n�d�ߪ��~���y�p�G�n�����п�Jexit���}�z: ");
  }
 
  return 0;
}

