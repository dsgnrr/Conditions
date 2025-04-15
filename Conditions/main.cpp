#include<iostream>

using namespace std;

int main() {

	{
		// Task1
		//code 
	}

	{
		// Task2
		//code 
	}
	
	int var1 = 1;
	int var1 = 1;
	setlocale(LC_ALL, "uk-ua");
	cout << boolalpha; // дає можливість виводити значення true false
	// > < == >= <=

	int a = 10, b = 20;

	/*printf_s("%i", a > b);*/

	// bool = true|false; 0(false) 1(true)
	bool result = (bool)(a > b);
	cout << "Result: " << result << endl;

	//if elif else
	
	if (result) {
		cout << "Якщо result == true" << endl;
	}
	else {
		cout << "result == false" << endl;
	}

	if (false) {
		cout << "Variant 1" << endl;
	}
	else if (true) {
		cout << "Variant 2" << endl;
	}
	else {
		cout << "Variant 3" << endl;
	}

	/* Логічне І
	Condition1	Condition2	Result(condition1 && condition2)
	true		true		true
	true		false		false
	false		true		false
	false		false		false
	*/

	/* Логічне АБО
	Condition1	Condition2	Result(condition1 || condition2)
	true		true		true
	true		false		true
	true		false		true
	false		false		false
	*/
	
	//!result : result == false;
	// result : result == true;
	if (!result) {
		cout << "NOT" << endl;
	}
	int status = -1;
	switch (status) {
	case 0:
		cout << "Перший алгоритм дій" << endl;
		break;
	case 1:
		cout << "2-ий алгоритм дій" << endl;
		break;
	case 2:
		cout << "3-ий алгоритм дій" << endl;
		break;
	default: {
		cout << "Не має алгоритму дій на цю ситуацію" << endl;
	}
	}
	// Create enums
	enum UserRole {
		ADMIN,//0
		MODER,//1
		USER//2
	};

	UserRole chatRole = UserRole::USER;

	cout << "Role: " << chatRole << endl;

	chatRole == UserRole::ADMIN
		? cout << "Yes you're admin" << endl
		: cout << "Nope, you're not admin" << endl;

	int value = chatRole == UserRole::ADMIN
		? 10
		: 20;
	cout << "Result: " << value << endl << endl;

	cout << "SWICTH:" << endl;
	switch (chatRole) {
	//case 0:
	case UserRole::ADMIN:
		cout << " Congratulations you're admin" << endl;
		break;
	case UserRole::MODER:
		cout << " Congratulations you're moderator" << endl;
		break;
	case UserRole::USER:
		cout << "you're user" << endl;
		break;

	default:
		cout << "Invalid value" << endl;
		break;
	}



	return 0;
}