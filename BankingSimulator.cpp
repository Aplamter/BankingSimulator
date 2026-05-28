// ye today im gonna use comments idk why
// i realy spent 10 mins writing these comments LOL

#include <iostream> // include some shi... uh i mean useful library

double balance = 0; // current money balance
double withdraw = 0; // how much you can take
double deposit = 0; // how much you can add
int chose; // its for the menu options

void loop() { // void to make it loop idk how to make it loop in main so ye think im gonna learn it later
	system("cls"); // clears the texts
	std::cout << "welcome to the banking simulator!" << std::endl; // welcomes you
	std::cout << balance << " MONEY\n\n"; // shows ur current money
	std::cout << "1 for deposit\n"; // option
	std::cout << "2 for withdraw\n"; // option
	std::cout << "3 to exit\n"; // option
	std::cin >> chose; // ask u what option to chose

	if (chose == 1) { // if u chose 1
		system("cls"); // clears the texts
		std::cout << "how much you want to deposit? "; // ask u how much you want to add
		std::cin >> deposit; // gives u the option to add money by typing the amount
		std::cout << "\nyour new balance is: "; // shoving the balance
		balance += deposit; // math calculation poo... i mean stuff
		std::cout << balance << std::endl; // finaly shows the new balance
		loop(); // loops it back to the menu
	}
	else if (chose == 2) { // if u chose 2
		system("cls"); // clears the texts
		std::cout << "how much you want to withdraw? "; // ask u how much you want to take
		std::cin >> withdraw; // gives u the option to take money by typing the amount
		std::cout << "\nyour new balance is: "; // shoving the balance
		balance -= withdraw; // math calculation by subtracting the value from the balance
		std::cout << balance << std::endl; // shows the balance
		loop(); // loops it back to the menu
	}
	else if (chose == 3) { // basicly crashes the program
		exit(0); // exits the program
	}
}

int main() { // main function
	loop(); // goes to menu void
}