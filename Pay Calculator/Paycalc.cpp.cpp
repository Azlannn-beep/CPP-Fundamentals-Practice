#include <iostream>
using namespace std;
int main()
{
	char choice;
	float A, B, C;
	

	do {
		//Pay Per Hour
		cout << "Pay Per Hour =";
		cin >> A;

		//Total Hours Worked
		cout << "Total Hours Worked =";
		cin >> B;


		//Pay Calculation
		C = A * B;

		// Pay
		cout << "Totaly Salary =" << C << endl;

		cout << "do you want to continue? Y/N\n";
		cin >> choice;
	}

	while (choice == 'y' || choice == 'Y');
	cout << "exit"<<endl;


		return 0;
}