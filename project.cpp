 #include <iostream>
 #include <string>
 #include <stdlib.h>

using namespace std;




bool calculateGoals() {
	double moneyNeeded;
	string goal;
	int months;
	double moneySaved;
	int userChoice = 0;
	
	system("CLS"); // clears the screen 

	cout << "what is your goal" << endl;
	cin >> goal;
	cout << "how much money do you need " << endl;
	cin >> moneyNeeded;
	cout << "in how many months do you need the money for?" << endl;
	cin >> months;
	moneySaved = moneyNeeded / months; // this will tell us the money needed to save per month. 
	cout << "you will need to save " << moneySaved << " per month to succesfully reach your goal which is " << goal << endl;
	
	
	cout << "would you like to do go back to the main menu (0 for no 1 for yes)" << endl;
	cin >> userChoice;
	system("CLS");
	if (userChoice == 1) {
		return true;

	}
	else {
		return false;
	}

	

	

	
}


bool calculateMortgage() {
	system("CLS");
	double amountRemaining; 
	int years; Undergraduate Placement Programmer 2020 / 21
	double amountMonthly;
	double amountYearly;
	double intrest;
	double amountIntrest;
	double intrestMonthly;
	int userChoice = 0;
	
	system("CLS");
	cout << "how much money do you have left on you mortgage?" << endl;
	cin >> amountRemaining; 
	cout << "how many years would you like to complete this mortgage"<< endl; 
	cin >> years;
	amountYearly = amountRemaining / years;
	cout << "your yearly amount will be " << amountYearly << endl;
	amountMonthly = amountYearly / 12;
	cout << "your monthly amount will be " << amountMonthly << endl;
	cout << "what is your intrest on your mortgages" << endl;
	cin >> intrest;
	
	amountIntrest = amountRemaining * intrest;
	intrestMonthly = amountIntrest / 12;
	cout << "your payment with intrest will be " << intrestMonthly<< endl;
	
	
	cout << "would you like to do go back to the main menu (0 for no 1 for yes)" << endl;
	cin >> userChoice;
	system("CLS");
	if (userChoice == 1) {
		return true;

	}
	else {
		return false;
	}
	
	
}

bool calculateRetirement() {
	system("CLS");
	double moneySaved;
	int currentAge;
	int retirementAge;
	int monthlyMoney;
	int years;
	int userChoice = 0;
	
	cout << "what age would you like to retire at" << endl;
	cin >> retirementAge;
	cout << "what is your current age" << endl;
	cin >> currentAge;
	cout << "how much money do you want to save by retirement? " << endl;
	cin >> moneySaved;
	years = retirementAge - currentAge;
	monthlyMoney = moneySaved / years / 12;

	cout << "you will need to save " << monthlyMoney << "per month" << endl;

	
	cout << "would you like to do go back to the main menu (0 for no 1 for yes)" << endl;
	cin >> userChoice;
	system("CLS");
	if (userChoice == 1) {
		return true;

	}
	else {
		return false;
	}
}


	

int main() {

	int option;
	int validationCheck=0;

	
	while (true) {
		cout << "welcome to the morgage software\n";
		cout << "what do you want to do\n";
		cout << "(1) calculate retirement fund\n" "(2) plan your goals\n" "(3) mortgange\n";
		cin >> option;
		
		while (true)
		{
			
			if (option == 1)
			{
				
				calculateRetirement();
				break;

			}
			else if (option == 2)
			{
				calculateGoals();


			}
			else if (option == 3)
			{
				calculateMortgage();
			}
			else 
			{
				
				system("CLS");
			}
			break;
		}
		cin.clear();
		cin.ignore();
		continue;

	}
	
	
	/*else {
			validationCheck = false;
		}
		while (validationCheck == false)

			cout << "Type in your answer plz" << endl;
			cin >> option;

		/*if (option >= 1 && option <= 3)
		{
			validationCheck = false;
		}*/
	 
	


	return 0;
}
