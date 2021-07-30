#include<stdio.h>
#include<stdlib.h>
 
 struct covid{
 	char name[100];
 	char mob[100];
 	char time[100];
 	char date[100];
 	char address[100];
 	
 }cd;
 
	struct test{
		char fever[100];
		char head[100];
		char met[100];
		
	}t;
 struct sachin{
char name[32];
int mobile[10];
char address[50];
	}s;
  	struct sachin1{
		char name[32];
		 
		char   mobile[10]; 
	    char address[100];
	}z;
	void accident();
	void doctor();
	void as();
	void ac();
	void ex();
	FILE *fp;
	
int main(){
	int i,j,k,a,b,c;
while(1>0){
	printf("enter according to demand\n");
	printf("1 for accident alert\n"); 
	printf("2 for doctor appointment\n"); 
	printf("3 for check you are safe from covid \n"); 
	printf("4 for Book a covid test\n"); 
	printf("5 for exit\n"); 
	scanf("%d",&a);

		switch(a){
		case 1: accident();
	            break;
		case 2: doctor();
				break;
		case 3: as();
		        break;		 
        case 4: ac();
		        break;  	
 	    case 5: ex();
 	            break;
 	    default: printf("enter valid number");
		          break;
				          }

       }	
	}
	void ex(){
		exit(0);
		}
	void accident(){
	fflush(stdin);
		printf("enter name\n");
		gets(s.name);
        printf("enter mobile\n");
		scanf("%d",&s.mobile);
        printf("enter address\n");
		scanf("%s",s.address);
    fp=fopen("accident.txt","a");
	fprintf(fp,"%s%d%s",s.name,s.mobile,s.address);   
	}	
	void doctor(){
	int doc;
	
		printf("enter according to demand\n");
		printf("1 for orthopedaic doctor\n");
		printf("2 for cardiologist doctor\n");
		printf("3 for pschologist doctor\n");
		printf("4 for dentist doctor\n");
		printf("5 for physician doctor\n");
		printf("6 for other doctor\n");
	    scanf("%d",&doc);
	fflush(stdin);
	switch(doc){
		
		case 1: 
		  printf("enter name\n");
		  gets(z.name);
	      printf("enter mobile\n");
	      gets(z.mobile);
		  printf("enter address\n");
          gets(z.address);
	      fp=fopen("appointment.txt","a");
	      fprintf(fp," %s \t %s \t orthopedaic \t %s \n",z.name,z.mobile,z.address);   
	      printf("Appointment booked\n");
		  break;
		case 2: 
		printf("enter name\n");
		 gets(z.name);
	    printf("enter mobile\n");
	    gets(z.mobile);
		printf("enter address\n");
          gets(z.address);
	      
		fp=fopen("appointment.txt","a");
	    fprintf(fp," %s \t %s \t cardiologist \t %s \n",z.name,z.mobile,z.address);   
        printf("Appointment booked\n");
		break;
		case 3:  
		printf("enter name\n");
		gets(z.name);
	    printf("enter mobile\n");
	    gets(z.mobile);
		printf("enter address\n");
          gets(z.address);
	      
		fp=fopen("appointment.txt","a");
	    fprintf(fp," %s \t %s \t pschyologist \t %s \n",z.name,z.mobile,z.address);   
		printf("Appointment booked\n");
		break;
		case 4: 
				printf("enter name\n");
		 gets(z.name);
	    printf("enter mobile\n");
	    gets(z.mobile);
	    printf("enter address\n");
          gets(z.address);
	      
		fp=fopen("appointment.txt","a");
	    fprintf(fp,"%s \t %s \t dentist \t %s \n",z.name,z.mobile,z.address);   
		printf("Appointment booked\n");
		break;
		case 5:  
		printf("enter name\n");
		 gets(z.name);
	    printf("enter mobile\n");
	gets(z.mobile);
	    printf("enter address\n");
          gets(z.address);
	      
		fp=fopen("appointment.txt","a");
	    fprintf(fp," %s \t %s \t physician %s",z.name,z.mobile,z.address);   
	    printf("Appointment booked\n");
		break;
	   	case 6:  
		printf("enter name\n");
		 gets(z.name);
	    printf("enter mobile\n");
	    gets(z.mobile);
	    printf("enter address\n");
          gets(z.address);
	      
		fp=fopen("appointment.txt","a");
	    fprintf(fp,"%s \t %s \t others \t %s \n",z.name,z.mobile,z.address);   
	    printf("Appointment booked\n");
		break;
	default: 
	printf("invalid number\n");
	
	}
	}
	void as(){
	fflush(stdin);	
	printf("give your answer in 'yes' or 'no'\n");
	printf("is you have fever\n");
gets(t.fever);
		printf("is you have headache\n");
		gets(t.head);
		printf("is you have any diabatics or other long term diseases\n");
		gets(t.met);
		if(t.fever == "true" && t.head == "true" && t.met == "true")
		printf("you are in high risk of covid\n");
        else if(t.fever=="true"&& t.head=="true" && t.met=="false")	
			printf("you are in risk of covid! please consult to doctor\n");
	else if(t.fever=="false"&& t.head=="true" && t.met=="false")
	printf("you have low risk of covid");
	else if(t.fever=="false"&& t.head=="false" && t.met=="false")
	printf("you have low risk of covid");
	else
	printf("you might may suffer from covid\n");
	}
	void ac(){
	 fflush(stdin);
	 FILE *fp1;
	 printf("enter name\n");
	 gets(cd.name);
	 printf("enter mobile no\n");
	 gets(cd.mob);
	 printf("enter address\n");
	gets(cd.address);
	printf("enter date\n");
	gets(cd.date);
	printf("enter time\n");
	 gets(cd.time); 
		fp=fopen("covid test booking.txt","a");
	    fprintf(fp,"%s\t%s\t%s\t%s\t%s\n",cd.name,cd.mob,cd.address,cd.date,cd.time);   
	    printf("your test is booked\n");
	}
	
