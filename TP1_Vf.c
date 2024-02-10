//HADJI SIDALI
//TP DSA 1
#include <stdio.h>
#include <stdbool.h>

int main(){
    bool e = false;
    do{
        //Displaying the menu
        printf("--------------------MENU--------------------\n* 1: Enter the card type : A, B, C :\n* 2: Enter and check the card number ---->\n    A (8 digits); B (7 digits); C (6 digits)\n* 3: Check the validity of the card\n* 4: EXIT\n--------------------------------------------\n");
        printf("What is your choice --->:\n");
        int choix , Card_Number;
        scanf("%d",&choix);
        char Card_type;
        bool q1, q2, q3;
        switch(choix){
            case 1: //Case of the card type
                q1 = true;
                do{
                    printf("Card type : A (8 digits); B (7 digits); C (6 digits) :");
                    scanf(" %c", &Card_type);
                }while (Card_type != 'A' && Card_type != 'B' && Card_type != 'C');
                break;
            case 2: // checking the card number;
                if (q1 == false ){
                    printf("Please enter the card type first !\n");
                }
                else{
                    do{
                        printf("Enter the card number: ");
                        scanf("%d",&Card_Number);
                        if ((Card_type == 'A') && (Card_Number/10000000 != 0) && (Card_Number/100000000==0)){
                            q2 = true;
                        }
                        else{
                            if((Card_type == 'B') &&(Card_Number/1000000!=0) && (Card_Number/10000000==0)  ){
                                q2 = true;
                            }
                            else{
                                if( (Card_type == 'C') && (Card_Number/100000!=0) && (Card_Number/1000000==0) ){
                                    q2 = true;
                                }
                                else{
                                    q2 = false;
                                    }
                                }
                            }
                    }while (q2 == false);
                }
                    break;
            case 3: // testing the validity of the card
                    if(q1==false || q2 == false){
                        printf("Please enter the card type and its number first!\n");
                    }
                    else{
                    int d = 0 ;
                    int sauv = Card_Number;
                    int s = 0;
                    while(sauv != 0){
                        d = ((sauv % 100) / 10) * 2;
                            if(d == 0){
                                continue;
                            }
                            else{
                                while(d != 0){
                                    s = s + d%10;
                                    d = d / 10;
                                }
                            }
                        s = s + sauv % 10;
                        sauv = sauv / 100;
                    }
                    if (s % 10 == 0){
                        printf("------------Validity of the Card------------\nType of card : '%c' with the number %d\nSum calculated by the method = %d\nThe last digit is 0 ---> Valid Card\n--------------------------------------------\n",Card_type,Card_Number,s);
                    }
                    else{
                        printf("------------Validity of the Card------------\nType of card : '%c' with the number %d\nSum calculated by the method = %d\nThe last digit is %d ---> Invalid Card\n--------------------------------------------\n",Card_type,Card_Number,s,s%10);
                    }
                    }
                break;
            case 4:
                printf("---------------END OF PROGRAM---------------");
                e = true;
                break;
        }
    }while(e == false);
}
