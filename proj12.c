#include<stdio.h>
 int main()
{
	float x,y;
	char ch;
	printf("\n welcome in my ATM system programm\n");
	printf("please enter your intial ammount-:"); 
	scanf("%f",&x);
	
	
    int i = 1; 
	while(i!=0){
	
	printf("enter\n 1 for credit\n 2 for debit \n 3 for balance\n 0 for exit \n");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
		printf("enter credit ammount");
		scanf("%f",&y);
		x=x+y;
		printf("new ammount=%f",x);
		break;
		case 2:
		printf("enter debit ammount");
		scanf("%f",&y);
		if(x>=y)
		{
		x=x-y;
		printf("new ammount=%f",x);
	    }
	    else
	    {
	    	printf("insufficient ammount in your account");
		}
		break;
		case 3:
		printf("ammount in your account=%f",x);
    	break;
		default:
			printf("thanks! for using our software");
			break;
	}
}
	return 0;
}
