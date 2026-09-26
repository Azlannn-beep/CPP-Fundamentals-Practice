#include <iostream>
using namespace std;
int main() {
	int num = 5;
	//Post Increment
	int postinc = num++;
	cout << "postinc: " << postinc << ", num: " << num << endl;
	//Pre Increment
	int preinc = ++num;
	cout << "preinc: " << preinc << ", num: " << num << endl;
	//Post Increment
	int postdec = num--;
	cout << "postdec: " << postdec << ", num: " << num << endl;
	//Pre Increment
	int predec = --num;
	cout << "predec: " << predec << ", num: " << num << endl;
	return 0;
}
