#include<iostream>
#include<string>

using namespace std;

int main() {
	try {
		int num1;
		int num2;
		cout << "enter first number: " << endl;
		cin >> num1;
		//our second number can't be divided by zero
		//this is the part that we want to catch
		cout << "enter the second number: " << endl;
		cin >> num2;
		//throw will send to catch
		//some things you will not need to throw
		if (num2 == 0) {
			throw 0;
		}
		cout << num1 / num2 << endl;

		//catch(..) will catch any
		//(...) for any error message

	}
	catch (int x) {
	cout << "You can't divide by " << x << endl;
}



	//now create your own!


	system("pause");
	return 0;
}