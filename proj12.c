#include<stdio.h>
 int main()
{
	float x,y;
	char ch;
	int pin,card_no;
	while(card_no!=3410){
		printf("1-COSTUMER PLEASE ENTER YOUR LAST 4 DIGIT CARD NUMBER-:");
		scanf("%d",&card_no);
	}
	if(card_no!=3410){
		printf("COSTUMER YOU HAVE ENTERD INVALID DIGITS\n");
	}
	while(pin!=1632){
		printf("\n2-ENTER YOUR SECRET PIN NUMBER-:");
		scanf("%d",&pin);
	}
	if(pin!=1632){
		printf("PLEASE ENTER A VALID PIN NUMBER");
	}
	printf("\n\t\t\t********* welcome in my ATM system programm************\n\n");
	printf("\n\n 1->please enter your intial ammount-:"); 
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
		printf("NEW AMMOUNT=%f",x);
		break;
		case 2:
		printf("enter debit ammount");
		scanf("%f",&y);
		if(x>=y)
		{
		x=x-y;
		printf("NEW AMMOUNT=%f",x);
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
			printf("THANKYOU FOR USING MY ATM SYSTEM SOFTWARE");
			break;
	}
}
	return 0;
}
