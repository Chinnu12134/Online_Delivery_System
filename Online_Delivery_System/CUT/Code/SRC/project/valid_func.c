#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "list_header.h"




int validate_name(char *str)
    {    
               if(strlen(str)>MAX)
                  {
                      printf("\nINVALID NAME-(Name should be less than 10 characters.)\n");
                      return 1;
                  }
               if(strlen(str)==0)
               {
                   printf("\nINVALID-(Name should not be empty!)\n");
                   return EXIT_FAILURE;
               }
               int flag=0;
               for(int i=0;i<strlen(str);i++)
               {
                   if(!isalpha(str[i]))
                   {
                       flag=1;
                       break;
                   }
               }
               if(flag==1)
               {
                   printf("INVALID NAME-(Name contain only Alphabets.)\n");
                   return EXIT_FAILURE;
               }
               return 0;
    }




int validate_phoneno(long long int num)
{



                       if(num < 1000000000|| num >9999999999)
            {
                                printf("\nInvalid Length.Length should only of 10 digits.\n");
                                return EXIT_FAILURE;
                        }



                       return EXIT_SUCCESS;
}



int validate_password(char *str)
{
    char *ptr = str ;



   int c_count = 0 , s_count = 0 , i_count = 0;
    while(*ptr !='\0')
    {
        if(*ptr >= 'A' && *ptr <= 'Z')
        {
            c_count = 1;
        }
        else if(*ptr >= 'a' && *ptr <= 'z')
        {
            s_count = 1;
        }
        else if(*ptr >= 48 && *ptr <= 57 )
        {
            i_count = 1;
        }
        else
        {
            return 0;
        }



       ptr++;
    }



   if(c_count &&s_count &&i_count )
    return 1;
    else
    return 0;
}
