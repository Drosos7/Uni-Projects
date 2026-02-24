#include <stdio.h>
	#include <stdlib.h>

char * read_string();
int strcmp(char * str1, char *str2);

int main()
{
	char username[]="drosos",password[]="giannhs61";
	char *login_name,*login_pass;
	int cnt=0;
	do{	
		if(cnt>0)
		{
		  if(strcmp(login_name,username)!=1 && strcmp(login_pass,password)!=1)
		   printf("\nLathos stoixeia prosbashs ");
		  else if(strcmp(login_name,username)!=1)
		  printf("\nLathos onoma xrhsth");
		  else if(	strcmp(login_pass,password)!=1)
		  printf("\nLathos kwdikos prosbashs");
		  if(cnt!=3)
		  printf(",sas apomenoun akoma %d prospatheies\n\n",3-cnt);
		  }
		
		if(cnt!=3)
		{
		printf("Type your Username...\n");
		 login_name=read_string();
		if(login_name==NULL){
			free(login_name);
		 	exit(1);}
		 
		printf(" Type your Password...\n");
		login_pass=read_string();
		if(login_pass==NULL){
			free(login_pass);
		 	exit(-1);}}
		cnt++;
	
	}while((strcmp(username,login_name)!=1 || strcmp(password,login_pass)!=1) && cnt<4);
		if(cnt==4){
		printf("\n\nEjantilaste tis prospatheies sas gia authn thn wra!");
		printf("\nProspathiste argotera");
		free(login_name);
		free(login_pass);
		exit(1);
	     }
		printf("\nWelocme back!!");
		free(login_name);
		free(login_pass);
	
	return 0;
}
char * read_string()
{
	char *str=NULL;
	char*temp;
	char c;
	int l=0;
	while((c=getchar())!='\n' &&  c!=EOF)
	{
		temp= realloc(str,l+2);//+1 gia ton xarakthra pou diabasthke +1 gia \0
		if(temp==NULL){
		 return NULL;
		}
		str=temp;
		str[l]=c;
		l++;
		str[l]='\0';}
	
	return str;
}

int strcmp(char * str1, char * str2)
{
	int i=0;
	char * s1=str1,*s2=str2;
	
	while(s1[i]==s2[i] && s2[i]!='\0'){
		s1++;
		s2++;
	}
	if(*s1==*s2)
	 return 1;
	return 0;
}
	
	
		 
	


