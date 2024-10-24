#include <stdio.h>
#include <string.h>
struct book{
    char title[30];
    char author[30];
    int publication_year;
    float price;
};

int main (){
    struct book A = {
        "Introduction to programming",
        "Dennis Masila",
        2017,
        56.00 
        
    };
    printf("Book details:\n");
    printf("Title: %s\n", A.title);
    printf("Author: %s\n", A.author);
    printf("Publication Year: %d\n",A.publication_year);
    printf("Price: %.2f\n", A.price);


//PROMPT USER TO ENTER DETAILS
   struct book B;

    printf("\nEnter details for another book:\n");
    printf("Enter Title: ");
    fgets(B.title, sizeof(B.title),stdin);
    B.title[strcspn(B.title,"\n")] = '0';

    printf("Enter the Author: ");
    fgets(B.author, sizeof(B.author), stdin);
    B.author[strcspn(B.author, "\n")] = '0';

    printf("Enter the Publication Year: ");
    scanf("%d", &B.publication_year);

    printf("Enter the Price: ");
    scanf("%f",&B.price);

//PRINT ENTERED VALUES
    printf("\nEntered book details: \n");
    printf("Title: %s\n",B.title);
    printf("Author: %s\n", B.author);
    printf("Publication Year: %d\n", B.publication_year);
    printf("Price: $%.2f\n", B.price);


return 0;
}








 