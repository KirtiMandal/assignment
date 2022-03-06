#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Library{

	int accessNumber;
	char bookTitle[50];
	char author[30];
	int bookPrice;
	int issue; 

}library[25];

int b;
void addBook()
{
    printf("\nEnter the number of books you want to enter - ");
    scanf("%d", &b);
    for(int i=1;i<=b;i++)
    {
        printf("\nEnter book information");
        printf("\n\nEnter the name of the book - ");
        scanf("%s",library[i].bookTitle);
        printf("\nEnter the Author's name - ");
        scanf("%s",library[i].author);
        printf("\nEnter price of the book - ");
        scanf("%d",&library[i].bookPrice);
        printf("\nEnter access number - ");
        scanf("%d",&library[i].accessNumber);
    }
    printf("\nAll the books information have been added");
}


void listByAuthor()
{
    char ar[20];
    printf("\nEnter the name of the author  - ");
    scanf("%s", ar);
    for(int i =1; i<=b; i++)
    {
        if(strcmp(ar, library[i].author)==0)
        {
            printf("\n%d.Title of the book is %s\n", i, library[i].bookTitle);
        }
    }
}

void accessNumber()
{
    int acc_no;
    printf("\nEnter book number  - ");
    scanf("%d", &acc_no);
    for(int i =1; i<=b; i++)
    {
        if(acc_no == library[i].accessNumber)
        {
            printf("\nTitle of the book is  %s", library[i].bookTitle);
	    printf("\nAuthor of the  book is  %s", library[i].author);
	    printf("\nCost of the book is %d", library[i].bookPrice);
        }
    }
}

void listCount()
{
    printf("\nTotal number of books are - %d", b);
}

void listByTitle()
{
    for(int i=1;i<=b;i++)
    {
        printf("\n%d.Title of the book is  %s", i, library[i].bookTitle);
        printf("\nAuthor of the  book is - %s", library[i].author);
        printf("\nCost of the book is - %d",library[i].bookPrice);
    }
}

void dispBook()
{
    printf("\nBooks in the library are - ");
    for(int i=1; i<=b; i++)
    {
        printf("\n\tTitle of the book is  %s", library[i].bookTitle);
        printf("\n\tAuthor of the  book is- %s",library[i].author);
        printf("\n\tCost of the book is - %d",library[i].bookPrice);
    }
}


int main(){
	int n;
	char choice;
	printf("Hello! Welcome to the library.What would you like to do? \n");
	do {
	printf("1. Add book information \n2. Display book information \n3. List all books of given author \n4. List the title of specified book \n5. List the count of books in the library \n6. List the books in the order of accession number \n7. Exit\n");
	scanf("%d",&n);
	switch(n){

		case 1:
		addBook();
		break;

		case 2:
		dispBook();
		break;

		case 3:
		listByAuthor();
		break;

		case 4:
		listByTitle();
		break;

		case 5:
		listCount();
		break;

		case 6:
		accessNumber();
		break;
	
		case 7:
		printf("Thank you! Visit again");
		break;
}
printf("\nDo you want to make more choices y/n ?");
scanf("%d",&n);
scanf("%c",&choice);
}while(choice !='n');
printf("Visit again!");

}
