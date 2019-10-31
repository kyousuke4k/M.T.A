#include <iostream>
#include <string>
using namespace std;
bool login(string typepas) {
	if (typepas == "fire")return true;
	return false;
}
void MTAmenu() {

}

int main(void) {
	string typepas;
	while (true) {
		cout << "typepas..." << endl;
		cin >> typepas;
		if (login(typepas)) {
			cout << "success." << endl;
			break;
		}
		else {
			cout << "access failed." << endl;
		}
	}

	cin.get();
	cin.get();
	return 0;
}