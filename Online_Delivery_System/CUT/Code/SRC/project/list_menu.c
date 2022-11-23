#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"list_header.h"


int product()
{
        int ch=0;
	
	//system("clear");
        while(ch!=4)
        {
                printf("\n");
		printf("\n\n---------------------   WELCOME TO PRODUCT MENU   ----------------------------------\n");
                printf("1.product registration\n2.edit product details\n3.Show product details\n4.Back\n");
                printf("\nEnter choice-");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1: product_registration();
                               break;
                   	case 2: edit_product_details();
			       break;
                        case 3: show_product();
			       break;
			case 4:break;
                        default: printf("Invalid choice\n");
                }
		system("read a");
         	system("clear");
        }
        return EXIT_SUCCESS;
}

int customer()
{
        int ch=0;
	system("clear");
        while(ch!=5)
        {
                printf("\n");
		printf("\n\n----------------------   WELCOME TO CUSTOMER MENU   ---------------------------------\n");
                printf("1.Customer registration\n2.do transaction\n3.Edit customer details\n4.View customer details\n5.Back\n");
                printf("\nEnter choice-");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1: registration();
                               break;
                        case 2: do_transaction();
                               break;
                        case 3: edit_customer_details();
                               break;
                        case 4: show_customer_details();
			       break;
			case 5:break;
                        default: printf("Invalid choice\n");
                }
		system("read a");
        	system("clear");
        }
        return EXIT_SUCCESS;
}




int admin()
{
        int ch=0;
	system("clear");
        while(ch!=4)
        {
                printf("\n");
		printf("\n\n-----------------------   WELCOME TO ADMIN MENU   --------------------------------\n");
                printf("1.Menu for product\n2.Menu for Customer\n3.Menu for Reports\n4.Back\n");
                printf("\nEnter choice-");
                scanf("%d",&ch);
                switch(ch)
                {
                     case 1: product_menu();
  			    break;
                     case 2: customer_menu();
                             break;
		     case 3: reports_menu();
			     break;
                     case 4:break;
                     default: printf("Invalid choice");
                }
	system("read a");
	system("clear");
        }
        return EXIT_SUCCESS;
}

int product_menu()
{
        int ch=0;
	system("clear");
        while(ch!=5)
        {
                printf("\n");
		printf("\n\n-----------------------   WELCOME ADMIN TO PRODUCT MENU   --------------------------------\n");
                printf("1.add product details\n2.edit product details\n3.view product details\n4.delete product details\n5.back\n");
                printf("\nEnter choice-");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
				product_registration();
				break;
                        case 2: edit_product_details();
			       break;
			case 3:
				show_product();
				break;
                        case 4: delete_product_data();
                               break;
		        case 5: break;
                        default: printf("Invalid choice");
                }
		system("read a");
	        system("clear");
        }
	
        return EXIT_SUCCESS;
}

int customer_menu()
{
        int ch=0;
	system("clear");

        while(ch!=5)
        {
                printf("\n");
		printf("\n\n--------------------   WELCOME ADMIN TO CUSTOMER MENU   -------------------------------\n");
                printf("\n1.add customer details\n2.edit customer details\n3.view customer details\n4.delete customer details\n5.back\n");
                printf("\nEnter choice-");
                scanf("%d",&ch);
                switch(ch)
                {
		        case 1: registration();
                               break;
                        case 2: edit_customer_details();
			       break;
                        case 3: show_customer_details();
                               break;
                        case 4: delete_customer_data();
                               break;
                        case 5:break;
                        default: printf("Invalid choice");
                }
		system("read a");
	 system("clear");
	}
                return EXIT_SUCCESS;
}

int main()
{
        int ch=0;
	product_to_list();
	customer_to_list();
	transaction_to_list();
	system("clear");
        while(ch!=4)
        {
		printf("\n");
		printf("\n\n---------------------   WELCOME TO ONLINE DELIVERY   -----------------------------------\n");
                printf("1.Product\n2.Customer\n3.Admin\n4.Exit\n");
                printf("\nEnter choice-");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1: product();
                               break;
                        case 2: customer();
                               break;
                        case 3: admin();
                               break;
                        case 4:break;
                        default: printf("\nInvalid choice\n");
                }
        }
	list_to_product();
	list_to_customer();
	list_to_transaction();
	system("read a");
	system("clear");
	printf("\n\n\n--------    THANK YOU FOR USING ONLINE DELIVERY    --------\n\n\n");
        return EXIT_SUCCESS;
}

