#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}
	string push(string element) {
		if (top == 4) { //step 1
			cout << "Number of data exceeds the limit." << endl;
			return "";
		}
		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " Ditambahkan(pushed)" << endl;
		return element;
	}
	void pop() { 
		if (empty()) {//step 1 pop
			cout << "\nStack is empty, cannot pop." << endl; //1.a
			return; //1.b
		}
		cout << "\nThe popped element is: " << stack_array[top] << endl;//step 2 pop
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int top = 0; top <= 5; top++) {
				cout << stack_array[top] << endl;
			}
		}
	}
};

int main() {
	while (true){
		try {
			cout << "\nMenu" << endl;
			cout << "\1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all record in the ascending order of roll numbers" << endl;
			cout << "4. View  all record in the descending order of roll number" << endl;
			cout << "5. Search for a record in the list" << endl;
			cout << "6. Exit" << endl;
			cout << "\nEnter your Choise (1-6): ";
			char ch;
			cin >> ch;

			switch (ch){
			case'1':
				obj.addNode();
				break;
			case'2':
				obj.hapus();
				break;
			case'3':
				obj.traverse();
				break;
			case'4':
				obj.revtraverse();
				break;
			case'5':
				obj.searchdata();
				break;
			case'6':
				return 0;
			default:
				cout << "\nInvalid Option" << endl;
				break;
			}
		}
		catch (exception& e) {
			cout << "Check for the values entered." << endl;
		}
	}
}