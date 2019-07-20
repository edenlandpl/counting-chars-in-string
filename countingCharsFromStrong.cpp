#include <iostream>
#include <cstring>
char s[50000];
int s_int[50000];
float s_float[50000];
int dl;
int str2int(char *s)
{
	int i;
		printf("\nPrzedstawione znaki jako INT \n");
	for(i=0;i<dl;i++)
	{
		s_int[i]=s[i];
		printf("%d ",s_int[i]);//usun nowa linie	
		//printf("\n%d",s_int[i]);	
	}

}

float str2float(char *s)
{
	int i;
	printf("\nPrzedstawione znaki jako FLOAT \n");
	for(i=0;i<dl;i++)
	{
		s_float[i]=s[i];
		printf("%f ",s_float[i]);//usun nowa linie	
		//printf("\n%d",s_int[i]);	
	}
	
}


int main(int argc, char** argv) 
{
/*int i;
printf("Podaj ciag znakow - "); // Nie zczytuje spacji
scanf("%s",s);
printf("Podales - %s",s);
*/
printf("Podaj ciag znakow - ");
int i=0;
while( scanf("%c", &s[i]) == 1 )
{
   if( s[i]=='\n' )
      break;
   ++i;
}
dl = strlen(s);
printf("\nIlosc znakow w Twoim tekscie - %d\n",dl-1);
str2int(s);
str2float(s);
	return 0;
}
