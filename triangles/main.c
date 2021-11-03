#include <stdio.h>
#include <stdlib.h>

int main()
{
int row, column,space;
char choice;

printf("Enter A B C D to print patterns.\n");
printf("Your Choice: ");scanf("%c",&choice); //Patterns choices
switch(choice){
    case 'A':
        printf("\n");
    for (int row=1; row <=10;row++){
    for (column=1;column<=row; column++){
        printf("*");
    }
    printf("\n");
}
break;
//-----------------------------------
case 'B':
printf("\n");
 for (int row=1; row <=10;row++){
    for (column=10;column>=row; column--){
        printf("*");
    }
    printf("\n");
}
break;
//-------------------------------------------
case 'C':
printf("\n");

 for (int row=1; row <=10;row++){
        for(space=0;space<row;space++){
            printf(" ");
        }
    for (column=10;column>=row; column--){
        printf("*");
    }
    printf("\n");
}
break;
//-----------------------------------------------------
case 'D':
    for (int row=1; row <=10;row++){
             for(space=0;space<=10-row;space++){
            printf(" ");
        }
    for (column=1;column<=row; column++){
        printf("*");
    }
    printf("\n");
}
break;

default:
    printf("Incorrect Input");
}
}
