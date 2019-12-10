#include<stdio.h>
#include<conio.h>

void main()
{
	float result,number;
	char op;
	printf("please enter first number:");
	scanf("%f",&result);
    while(op!='q' && op!='Q')
    {
        printf("enter operator(Q for quit): ");
        op=getch();
	    putch(op);
	    if (op!='q' && op!='Q')
        {
	    printf("\tenter number: ");
	    scanf("%f",&number);
        }
	    else break;

	switch (op)
	{
	case'+':result+=number;
		break;
	case '-':result-=number;
		break;
	case'*':result*= number;
		break;
	case'/':if (number != 0)
        result/=number;
		   else printf("there is no answer!\n");
		break;
    case'Q':
    case'q': break;
	default:printf("invalid operator!\n");
	}
	printf("result= %5.2f\n",result);
    }
	printf("\nresult= %5.2f",result);

}
