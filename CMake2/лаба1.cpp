#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "������� ������:" << endl;
	int a;
	cin >> a;
	
	double p = 3.14;
	double answer = a * a * p;

	cout << "������� �����: " << answer << endl;

	return 0;
}