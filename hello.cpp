#include<iostream>

using namespace std;

int main() {
	int choice;
	
	cout << "1. Wyswietl powitanie\n2. Pozegnaj sie";
	
	for(int i = 0; i < 2; i++){
		cout << "\n\nJaki jest Twoj wybor?\n";
		cin >> choice;
		if(choice == 1) {
			cout << "Dzien dobry";
		}
		else if(choice == 2) {
			cout << "Do widzenia!";
		}
		else {
			cout << "Ktos tu dziala wbrew zasadom....";
		}
	}
			
}
