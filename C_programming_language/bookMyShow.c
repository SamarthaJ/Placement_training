#include<stdio.h>
#include<stdlib.h>
void bookMyShow(int choice);
int choice1 = 6;
int choice2 = 6;
int choice3 = 6;
void bookMyShow(int choice){
    switch (choice)
        {
        case 1:
            printf("\n\nMovie Name: don't Catch me if you can\n");
            printf("Price: 100\n");
            if (choice1 !=0){
                choice1--;
                printf("Tickets left: %d\n\n", choice1);
                break;
            }else{
                printf("\n\nTickets sold out\n\n");
                break;
            }
        case 2:
            printf("\n\nMovie Name: Hangnotover 3\n");
            printf("Price: 150\n");
            
            if (choice2 !=0){
                choice2--;
                printf("Tickets left: %d\n\n", choice2);
                break;
            }else{
                printf("\n\nTickets sold out\n\n");
                break;
            }
            break;
        case 3:
            printf("\n\nMovie Name: Harry potter: chamber of no secrets\n");
            printf("Price: 250\n");
            
            if (choice3 !=0){
                choice3--;
                printf("Tickets left: %d\n\n", choice3);
                break;
            }else{
                printf("\n\nTickets sold out\n\n");
                break;
            }
            break;
        
        case 4:
            printf("\n\nThank you for visiting\n");
            exit(0);
            break;
        
        default:
            printf("\n\nInvalid choice\n");
            break;
        }
}

int main(){
    while (1){
        int choice;
        printf("1. don't Catch me if you can\t2. Hangnotover 3\t3. Harry potter: chamber of no secrets\t4.Exit\n");
        scanf("%d", &choice);
        bookMyShow(choice);
    }
}