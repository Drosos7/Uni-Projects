#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define SIZE 80

typedef struct record{
	char name[SIZE];
	char surname[SIZE];
	int age;
	int grade;
}record;

int open(char *filename,FILE **fp,int *	num);
int close(FILE **fp);
int add(FILE *fp);
int read(FILE *fp,int num ,int rec, record *new_record);
int print(record temp);
void print_all(FILE *fp, int num);
int modify(FILE *fp,int num,int rec);
int main()
{
	FILE *fp;
	int N;
	int choice,check,rec;
	record temp;
	char filename[]="data.dat";
	
	while(1)
	{
		printf("MENU\n");
		printf("==============\n");
		printf("1.OPEN FILE\n");
		printf("2.CLOSE FILE\n");
		printf("3.ADD TO FILE\n");
		printf("4.PRINT FROM FILE\n");
		printf("5.PRINT ALL FROM FILE\n");
		printf("6.MODIFY FROM FILE\n");
		printf("7.EXIT PROGRAMM\n");
		printf("SELECT YOUR OPTION\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				check=open(filename,&fp,&N);
				if(check==TRUE)
					printf("File opened successfully!\n");
				else 
				{
					printf("Error!");
					exit(0);
					}	
				break;
			case 2:
				check=close(&fp);
				if(check==FALSE)
				{	
					printf("Error!");
					exit(0);
				}
				else 
					printf("File closes successfully!\n");
					break;
			case 3:
				check=add(fp);
				if(check==FALSE)
				{
					printf("Error!");
					exit(0);
				}
				else
				{
				 	N++;
					printf("The record has been added successfully!\n");
				}
				break;
			case 4:
				printf("Which record do you wish to read?\n");
				scanf("%d",&rec);
				check=read(fp , N, rec , &temp);
				if(check==FALSE)
				{
					printf("Error at index!\n");
					continue;
				}
				 	printf("The %d record is:",rec);
				 	print(temp);
				break;
			case 5:
				print_all(fp,N);
				break;
			case 6:
				printf("Which record do you wish to modify?\n");
				scanf("&d",&rec);
				check=modify(fp,N,rec);
				if(check==FALSE)
				{
					printf("Error at index!\n");
					continue;
			    }
				break;
			case 7:
				printf("Exit...\n");
				exit(0);
			default:
				printf("NOT AN OPTION!");
				break;							
		}
			system("pause");
	}
	return 0;
}
	
int open(char *filename,FILE **fp,int *num)
{
	record temp;
	(*fp)=fopen(filename,"rb");
	if(*fp==NULL)//File did not exist so we create it
	{
		(*fp)=fopen(filename,"wb+");
		if(*fp==NULL)
		{	printf("AN ERROR OCCURED WHILE OPENING NEW FILE");
		 	return FALSE;
		 }
		 	*num=0;
			 return TRUE; 
     }   
     else //File existed
     {
     	fclose(*fp);
     	(*fp)=fopen(filename,"rb+");
     	if((*fp)==NULL)
     	{
     		printf("AN ERROR OCCURED WHILE OPENING AN EXISTED FILE");
     		return FALSE;	
		 }
		 *num=0;
		 while(fread(&temp,sizeof(record),1,(*fp))==1)
		 	(*num)++;
		return TRUE;
	 }
	
}
	
int close(FILE **fp)
{
	if(fclose(*fp)==0)
		return TRUE;
	else 
	return FALSE;
		
}	
	
int add(FILE *fp)
{
	record temp;
	printf("\nType new name:");
	scanf("%s",temp.name);
	printf("\nType new surname:");
	scanf("%s",temp.surname);
	printf("\nType new age:");
	scanf("%d",&temp.age);
	printf("\nType new grade:");
	scanf("%d",&temp.grade);
	fseek(fp,0,SEEK_END);
	if(fwrite(&temp,sizeof(record),1,fp)==1)
		return TRUE;
	else 
		return FALSE;	
}

int read(FILE *fp,int num,int rec,record *new_record)
{
	if(rec>=0 && rec <= num-1)
	{
		fseek(fp,rec*sizeof(record),SEEK_SET);
		if(fread(new_record,sizeof(record),1,fp)==1)
			return TRUE;		
	}
	else return FALSE;	
}

int print(record temp)
{
	printf("\nName:%s",temp.name);
	printf("\nSurname:%s",temp.surname);
	printf("\nAge:%d",temp.age);
	printf("\nGrade:%d",temp.grade);
	
	}	
	
void print_all(FILE *fp, int num)
{
	int i;
	record temp;
	for(i = 0 ; i < num ; i++)
	{
		read(fp,num,i,&temp);
		printf("\nRecord  %d ",i);
		printf("\n---------------\n");
		print(temp);
	}
}	
	
int modify(FILE *fp,int num,int rec)
{
	record temp;
	
	if(rec>=0 && rec<= num-1)
	{	
		fseek(fp,rec*sizeof(record),SEEK_SET);
		
		fread(&temp,sizeof(record),1,fp);
		
		printf("Record before changes:\n");
		print(temp);
		printf("\nType name:");
		scanf("%s",temp.name);
		printf("\nType surname:");
		scanf("%s",temp.surname);
		printf("\nType age:");
		scanf("%d",&temp.age);
		printf("\nType grade:");
		scanf("%d",&temp.grade);
		printf("New record after changes:\n");
		print(temp);
		fseek(fp,rec*sizeof(record),SEEK_SET);
		
		fwrite(&temp,sizeof(record),1,fp);
		return TRUE;	
    }
	else 
		return FALSE;
}
	
