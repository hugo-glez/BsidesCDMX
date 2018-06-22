#include <stdio.h>
#include <bsd/string.h>


void rot13(char *s)
{
	int i = 0;
	for(i=0; s[i]; i++)
	{
		if(s[i] >='a' && s[i] < 'n') {s[i] += 13; continue;}
		if(s[i] >='A' && s[i] < 'N') {s[i] += 13; continue;}
		if(s[i] >'m' && s[i] <= 'z') {s[i] -= 13; continue;}
		if(s[i] >'M' && s[i] <= 'Z') {s[i] -= 13; continue;}
		}
	//printf ("%s\n",s);
	}
	

int valida(char argumento[100])
{
	char p1[7] = "BSides";
	char p2[5] = "CDMX";
	char p3[5] = "2018";
	char re[25] = "";
	strlcat(re,p1,16);
	strlcat(re,p2,16);
	strlcat(re,p3,16);
	rot13(re);
	return strcmp(argumento,re);
	
	}

int main(int argc, char **argv)
{
  char argumento[100];
  printf(".: BSidesCDMX 2018 - Crackme 1 :.\n\tby @hugo_glez\n");
  if (argc<2) {
	printf("Sin argumento\n");
	return -1;
  }
  strlcpy(argumento,argv[1],100);
  if (valida(argumento) == 0 )
  {
	  printf("Buen trabajo! Felicidades\n");
	  }
  else 
  {
	  printf("Argumento erroneo\n");
	  }
  return 0;
}
