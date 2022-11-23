#ifndef LIST_HEADER_H
#define LIST_HEADER_H
#define MAX 20


typedef struct cust_details
{
        char customerName[30];
        long long int phoneno;
	char address[30];
        struct cust_details *next1;
}ct;
typedef struct cust_temp
{
        char customerName[30];
       long long int phoneno;
        char address[30];
}ctt;


typedef struct productDetails
{
        char productName[30];
        long long int phoneno;
        int choice;
	int code;
	char category[20];
	char item[4][10];
	int price[4];
	int quantity[4];
        char password[15];
	struct productDetails *next;
}pd;


typedef struct productTemp
{
        char productName[30];
        long long int phoneno;
        int choice;
	int code;
	char category[20];
	char item[4][10];
	int price[4];
	int quantity[4];
        char password[15];
        
}pdt;


typedef struct transaction
{

        char product[3][10];
	char customerName[30] ;
	long long int phoneno;
	int quantity2[3];
	int amount[3];
	int cost[3];
	int total_cost;
	int num;
	int qty;
	struct transaction *next2;
}t;

typedef struct transaction_temp
{
	
        char product[3][10];
	int quantity2[3];
	int amount[3];
	int cost[3];
	int total_cost;
	int num;
	int qty;
}tt;

int product();
int customer();
int admin();


int product_menu();
int customer_menu();
int reports_menu();
//functions for product menu
int product_registration();
int edit_product_details();
int show_product();

//functions for customer menu
int registration();
int do_transaction();
int edit_customer_details();
int show_customer_details();


//function for admin file maintenance
int delete_product_data();
int delete_customer_data();


//functions for report
int product_report();
int consolidated_transaction_report();



//files for product and customer

int product_to_list();
int list_to_product();
int customer_to_list();
int list_to_customer();
int transaction_to_list();
int list_to_transaction();

//for validating
int validate_name(char *);
int validate_phoneno(long long int);
int validate_password(char *);


#endif





	
