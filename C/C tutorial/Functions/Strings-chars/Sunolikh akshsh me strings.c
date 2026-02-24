//Dunamikh desmeush mnhmhs se strings me dhlwsei statherou buffer pou buffer enas proswrinos statheros pinakas//
#include <stdio.h>
#include <stdlib.h>
#define N 10
#define TRUE 1
#define FALSE 0
#define Size 512

int check_str (char *str);
int mystrlen(char*str);
char *mystrcpy(char *dest, char *src);




int main()
{

    int i,len;
/*1.*/	char *str[N];
    //buffer prosorinos xwros apothikeushs//
    char buffer[Size];
    
	for(i=0;i<N;i++)
	{
		//Diabazoume thn sumboloseira arxika sto buffer//
		printf("Dwse thn %d sumboloseira:",i+1);
		gets(buffer);
		
		//ELegxos an einai lexi dhladh an einai katallhlo gia na to baloume ston pinaka me ta egkyra dedomena//
		if(!check_str(buffer))
		{
			printf("\nLathos eisodos");
			exit(0);
		}
		
		//Anoigoume osh mnhmh xreiazetai gia thn kathe lexi ston main pinaka afou egine egkyrh eisodos// 
		len=mystrlen(buffer);
		//Epistrefei to mhkos ths lexhs se mia topikh metablhth len//
		
		str[i]=malloc(sizeof(char)*(len+1));/*Prosoxh!!! len+1 gt kathe sting steleiwnei se /0 pou pianei 1 byte parapanw*/
		
		if(!str[i])
		{
			printf("Apotuxia desmesushs mnhmhs");
			exit(0);
		}
		mystrcpy(str[i],buffer);/*Antigrafh/perasma ston main pinaka*/
	 } 
	 
	 //Ektyposh apotelesmaton//
	 for(i=0;i<N;i++)
	  printf("\n %d sumboloseira einai:%s\n",i+1,str[i]);
	  
	 //Apodesmeush mnhmhs//
	 for(i=0;i<N;i++)
	  free (str[i]);
	  
	

return 0;	
}



int check_str (char *str)
{
	int i=0;
   while (str[i]!='\0')
    {
    	if(!(str[i]>='a'&&str[i]<='z'))
    	 return FALSE;
    	
		i++; 
	}
	return TRUE;
	
}


int mystrlen(char*str)
{
     int i=0;
	 
	 while(str[i]!='\0')
	     i++;
	     
	  	return i;
}


char *mystrcpy(char *dest, char *src)//Epistrfei enan deikth se char dhladh thn dieuthinsh tou protou stoixeiou tou neou string(1D)
{
	int i=0;
	
    while(src[i]!='\0')
    {
    	dest[i]=src[i];
    	i++;
	}
	  dest[i]='\0';
	  
	  return dest;
	
}
