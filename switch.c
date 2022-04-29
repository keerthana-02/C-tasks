#include<stdio.h>
main()
{
	//printing the items
	printf("1.Burger,Rs 129 \n2.Falooda,Rs 100\n3.Veg roll,Rs 69 \n4.Pizza,Rs 299 \n5.Sandwich,Rs 149\n");
	
	//entering the choice
	int choice;
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	//switch conditions
	switch(choice)
	{
		case 1:
			printf("Food item-Burger\nPrice-Rs 129");
			break;
		case 2:
			printf("Food item-Falooda\nPrice-Rs 100");
			break;
		case 3:
			printf("Food item-Veg roll\nPrice-Rs 69");
			break;
                case 4:
        		printf("Food item-Pizza\nPrice-Rs 299");
        		break;
        	case 5:
        		printf("Food item-Sandwich\nPrice-Rs 149");
        		break;
        default:
        	printf("Please enter the right choice");
	}
}
