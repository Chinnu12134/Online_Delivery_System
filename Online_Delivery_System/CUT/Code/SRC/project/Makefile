listapp: list_menu.o list_func.o valid_func.o 
	gcc -o listapp list_menu.o list_func.o valid_func.o
	
list_menu.o: list_menu.c list_header.h
	gcc -o list_menu.o -c  list_menu.c

list_func.o: list_func.c list_header.h
	gcc -o list_func.o -c  list_func.c

valid_func.o: valid_func.c list_header.h
	gcc -o valid_func.o -c valid_func.c

clean:
	rm *.o
