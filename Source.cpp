//Reference Hack
//This program uses references to hack and bankrupt the terrorists

#include <iostream>

using namespace std;

//Functions to be used
void normalTrans(int x, int y);
void hackedTrans(int& x, int& y);

int main() {

	//Variables for each party
	int joeFund = 10;
	int hackFund = 100000000;

	//Output the original funds of each party
	cout << "Original funds\n";
	cout << "Joe's fund: " << joeFund << "\n";
	cout << "Terrorist's fund: " << hackFund << "\n";

	cout << "\n";

	//Normal Funds transaction.
	cout << "==============================================\n";
	cout << "intializing normal Fund transaction......\n";
	normalTrans(joeFund, hackFund);
	cout << "Transaction complete......\n\n";
	cout << "Bank Funds\n";
	cout << "Joe's fund: " << joeFund << "\n";
	cout << "Terrorist's fund: " << hackFund << "\n";

	cout << "\n";

	//Hacking the Funds and changing them
	cout << "==============================================\n";
	cout << "intializing hacked Fund transaction......\n";
	hackedTrans(joeFund, hackFund);
	cout << "Transaction complete......\n\n";
	cout << "Bank Funds\n";
	cout << "Joe's fund: " << joeFund << "\n";
	cout << "Terrorist's fund: " << hackFund << "\n";

	//Pause the program
	cout << "\n";
	system("pause");
	return 0;
}

void normalTrans(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void hackedTrans(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}