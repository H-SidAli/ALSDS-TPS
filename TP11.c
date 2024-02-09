//HADJI SIDALI 
//TP1 ALSDS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    //Dsiplaying the main menu
    printf("MENU\n1-Enter the card type;\n2-Enter and check the correctness of the card number;\n3-Check the validity of the card\n4-EXIT\n");
    int choix;
    //Reading the choice of the user
    printf("Enter your choice:\n");
    scanf("%d",&choix);
    char Card_Type;
    bool a, b, c, q1, q2, q3;
    a = b = c = false;
    switch(choix){
    //The cases of the menu
    case 1://Case of the card type
            printf("Enter the card type\n");
            scanf(" %c",&Card_Type);
            switch (Card_Type){
                case 'A': 
                    printf("The card type is A\n");
                    a = true;
                    q1 = true;
                    break;
                case 'B':
                    printf("The card type is B\n");
                    b = true;
                    q1 = true;
                    break;
                case 'C':
                    printf("The card type is C\n");
                    c = true;
                    q1 = true;
                    break;
                default: // if the card type is wrong 
                    printf("Enter a valid card type!\n");
                    q1 = false;
                    break;
            }
            //if the type is valid we display the menu again
            if( q1 = true ){
                    printf("MENU\n1-Enter the card type;\n2-Enter and check the correctness of the card number;\n3-Check the validity of the card\n4-EXIT\n");
                    scanf(" %d",&choix);
            }
            else{
                break;
            }
    case 2://testing the correctness of the card number 
            printf("Enter the card number\n");
            int Card_Number;
            scanf("%d",&Card_Number);
            if ((a = true) && (Card_Number/10000000!=0) && (Card_Number/100000000==0)){
                printf("Correct card number");
                q2 = true;
            }
            else{
                if((b = true) &&(Card_Number/1000000!=0) && (Card_Number/10000000==0)  ){
                    printf("Correct card number");
                    q2 = true;
                }
                else{
                    if( (c = true) && (Card_Number/100000!=0) && (Card_Number/1000000==0) ){
                        printf("Correct card number\n");
                        q2 = true;
                    }
                    else{
                        printf("Wrong card number\n");
                        q2 = false;
                        }
                    }
                }
                // if the number is correct we display the menu again
                if( q2 = true ){
                    printf("MENU\n1-Enter the card type;\n2-Enter and check the correctness of the card number;\n3-Check the validity of the card\n4-EXIT\n");
                    scanf(" %d",&choix);
            }
            else{
                break;
            }
    case 3: // testing the validity of the card 
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
        printf("The Validity number is: %d \n",s);
        if(s % 10 == 0){
            printf("The last digit is 0\n");
            printf("The card is VALID\n");
        }
        else{
            printf("The last digit is: %d", s%10);
            printf("The card is NOT VALID");
        }
    case 4:
        printf("END OF THE PROGRAM");
        break;
   }
}