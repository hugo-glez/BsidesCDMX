#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>


int valida(char argumento[100])
{
	char p1[7] = "BSides";
	char p2[5] = "CDMX";
	char p3[5] = "2018";
	char re[25] = "";
	strlcat(re,p1,16);
	strlcat(re,p2,16);
	strlcat(re,p3,16);
	return strcmp(argumento,re);
	
	}

int main(int argc, char **argv)
{
  char arg1[100];
  char resp[100];
  int arg2 = 0;
  double arg3 = 0.0;
  int canary = 3;
  int r=0;
  printf(".: BSidesCDMX 2018 - Crackme 2 :.\n\tby @hugo_glez\n");
  printf("Introduce el password: ");
  scanf("%s",resp);
  strlcpy(arg1,resp,100);
  r=valida(arg1);
  if (r!=0)
  {
	  printf("Entrada erronea, adios!\n");
	  return -1;
	  }
   else {
	    canary--;
		printf("Introduce el segundo password: ");
		scanf("%s",resp);
		arg2 = atoi(resp);
		if (arg2 != 22)
			{
			  printf("Entrada erronea, adios!\n");
			  return -1;
			  }
		   else {
				canary--;
				
				printf("Introduce el tercer password: ");
				scanf("%s",resp);
				arg3 = atof(resp);
				if (arg3 != 3.14)
					{
					  printf("%f\n",arg3);
					  printf("Entrada erronea, adios!\n");
					  return -1;
					  }
				   else {
						canary--;
						if (canary==0)
						{
							printf("Lo lograste, felicidades!\n");
							return 0;
							}
						else
						{
							printf("Como llegaste aqui?\n");
							return -1;
							}

	}
	}
	}
	return 0;
}
