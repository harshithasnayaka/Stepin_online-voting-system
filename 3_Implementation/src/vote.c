#include "headfine.h"

int main(){
    while(1){
        printf("\n\t\t\t  1.Student \n\t\t\t   2.Admin \n\t\t\t   3.Exit \n\t\t\t   Option:");
		char input;
        scanf(" %c",&input);

        switch(input){
            case '1':
                Student();
                break;
            case '2':
                Admin();
                break;
            case '3':
                return 0;
            default:
                printf("\nInvalid option");
                getch();
        }
    }
    return 0;
}
