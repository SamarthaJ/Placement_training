#include<stdio.h>
#include<stdlib.h>

void newchoice(int product);
void addtocart(int product);
void showcart();
void product();
void buy(int product);

char *products[10] = {"laptop","Phone","Call of duty","AK47","Sword"};

int cart[10]={0,0,0,0,0,0,0,0,0,0}; 

void buy(int product){
    printf("\nProduct Name: %s", products[product]);
    printf("\nPurchased successfully");
}
void addtocart(int product){
    for(int i;i<10;i++){
        if (cart[i] == 0){
            cart[i] = product;
        }
    }
}

void showcart(){
    for(int i;i<10;i++){
        if (cart[i] != 0){
            printf("\nProduct Name: %s",products[cart[i]]);
        }
    }
}

void newchoice(int product){
    while (1){
        int choice;
        printf("\n1. Buy\t2. add to cart\t3. Exit");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                buy(product);
                break;
            case 2:
                addtocart(product);
                printf("add to cart");
                return 0;
            case 3:
                printf("Exit");
                return 0;
            default:
                printf("Invalid input");
                break;
        }
    }
}

void product(){
    while (1){

    int choice;
    printf("1. Laptop\t2. phone\t3. Call of duty\t4. AK47\t5. Sword\t6. Exit\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            printf("\nLaptop");
            printf("\nPrice: 100000");
            newchoice(1);
            break;
        case 2:
            printf("\nPhone");
            printf("\nPrice: 50000");
            newchoice(2);
            break;
        case 3:
            printf("\nCall of duty");
            printf("\nPrice: 2000");
            newchoice(3);
            break;
        case 4:
            printf("\nAK47");
            printf("\nPrice: 500000");
            newchoice(4);
            break;
        case 5:
            printf("\nSword");
            printf("\nPrice: 10000");
            newchoice(5);
            break;
        case 6:
            printf("\nExit");
            break;
        default:
            printf("\nInvalid input");   
            break;
        }
    }
}

int main(){
    while(1){

    int choice;
    printf("1. Product\t2. Your Cart\t3. Exit\n");
    scanf("%d", &choice);
    if (choice == 1){
        product();
    }else if (choice == 2){
        showcart();
    }else{
        printf("\nExit");
        exit(0);
    }
    }
}