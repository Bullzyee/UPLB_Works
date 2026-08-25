
#include<stdio.h>

    int pin; //user input(the pin that will be validated)
	int PIN  = 1234; //"The default PIN may be set to 1234."
	int choice;
	float initial_balance = 0; //assuem that the initial balance is 0;
	float deposit_amount;
	float withdraw_amount;
	int new_pin;
	//global variables to be manipulated outside or inside of the local functions;


//prototype variables
int PIN_validation();
float check_balance();
float deposit_money(float amount);
float withdraw_money(float withdraw_amount);
int change_pin(int pin);

int main(){
	



	do{
		// Main menu
		printf("*********************************\n");
		printf("Welcome to Maze Bank!\n");
		printf("*********************************\n");
		printf("[1] Check Balance\n");
		printf("[2] Deposit\n");
		printf("[3] Withdraw\n");
		printf("[4] Change PIN\n");
		printf("[5] End Transaction\n");
		printf("Enter choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 5:
				printf("Program terminated.\n\n");
				break;

			case 1:
				PIN_validation();
				check_balance();
				break;

			case 2:
				PIN_validation();
				printf("Current Balance: %f\n", initial_balance);
				printf("Deposit Amount: ");
				scanf("%f", &deposit_amount);
				deposit_money(deposit_amount); // 1 parameter which is the deposited amount;
				break;

			case 3:	
				PIN_validation();
				printf("Current Balance: %f\n", initial_balance);
				printf("Withdrawal Amount: ");
				scanf("%f", &withdraw_amount); //1 paramter; which is the withdrwala amouount;
				withdraw_money(withdraw_amount);
				printf("Updated Balance: %f\n\n", initial_balance);
				break;

			 case 4:
			 	PIN_validation();
			 	printf("Enter your new 4-digit PIN: ");
			 	scanf("%d", &new_pin);
			 	change_pin(new_pin);

			 
			 	
			 	
			 	break;

			 
			 default:
			 	PIN_validation();
			 	printf("Invalid Choice.\n\n");
		}


	} while(choice != 5);




}


int PIN_validation(){ //I created this function to reuse pin validation in every choice it is applicable
	do{ // will ask the user at least once
		printf("Please enter your 4-digit PIN: ");
		scanf("%d", &pin);
		if(pin != PIN){
			printf("You entered an incorrect PIN. Please try again.\n");
		}
	} while (pin != PIN);
	 	return pin;

    }

    float check_balance(){//to check the current balance
		printf("Current Balance: %.2f \n\n", initial_balance);
		return initial_balance; // this will be used and modified when the user withdraw or deposit;
	}

	float deposit_money(float amount){
		initial_balance = initial_balance + amount;
		printf("Current Balance: %f\n\n", initial_balance);
		return initial_balance;
	}

	float withdraw_money(float withdraw_amount){
		if(withdraw_amount > initial_balance){
			printf("Insufficient balance!\n\n");
		} else{
			initial_balance = initial_balance - withdraw_amount;
		}
	}


//kait lang
	int change_pin(int newpin) {

	if(newpin == PIN){
		printf("Please choose another PIN\n");
	} else if (newpin >= 1000 && newpin < 10000){
		PIN = newpin;
		printf("PIN changed successfully\n");
		return PIN;
	} else if (newpin < 1000){
		printf("PIN must be 4-digits \n\n");
		return 0;
	} 
}
