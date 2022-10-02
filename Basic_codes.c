#include<stdio.h> 
#include<stdlib.h>

void isPrime();
void inRange_prime();
void fact();
int fact_rec();
void fibo();


void main()
{ int ch,n=0,fact_r=0;
	while(1)
	{  
       printf("\n\n 1. Check prime \n 2. prime within a range \n 3. Factorial of a number\n 4. FActorial using recurtion \n 5. Fibonnacci Series \n 7.Exit \n");
	   scanf("%d",&ch);
     
		switch(ch)
		{
			case 1: isPrime();
				break;
		 	case 2:inRange_prime();
				break;
			case 3: fact();
				break;
			case 4: 
					printf(" Enter No. \n");
					scanf("%d",&n);
					fact_r=fact_rec(n);
					printf("%d \n",fact_r);					
				break;
			case 5: fibo();
				break;
			case 7:exit(0);
		default: printf("Invalid choice\n");
			
		}
	
	}
		
}

void isPrime()
{   int num,count=0;
	printf(" Enter No. \n");
    scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
		  
	}
	if(count==2)
		printf(" %d : Prime  \n",num);
	
}

void inRange_prime()
{  int range,count=0;
   printf(" Enter Range \n");
   scanf("%d",&range);
   printf(" Prime in Range of %d : ",range);
   for(int i=1;i<=range;i++)
	{   count=0;
		for(int j=1;j<=i;j++)
		{if(i%j==0)
			count++; 
		}
		if(count==2)
		printf("%d ",i);
	}
	
}

void fact()
{ int num,fact=1;
   printf(" Enter No. \n");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
	   fact=fact*i ;
   }
	printf(" %d ! : %d",num,fact);
}

int fact_rec(int n)
{
	if(n==0)
		return 1;
	else
		return(n*fact_rec(n-1));
}

void fibo()
{  
	int a=0,b=1,c,till;
	printf("Enter total nos. ");
	scanf("%d",&till);
	printf("\n%d %d ",a,b);
	for(int i=2;i<till;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
