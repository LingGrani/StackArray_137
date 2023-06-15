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
};