

#include <iostream>
using namespace std;
#define size 5
int stack[size];
int top = -1;

void push(int value) {
	if (top == size - 1) {
		cout << "Stack Overflow " << endl;
	}
	else {
		top++;
		stack[top] = value;
	}
}
int pop() {
	if (top == -1) {
		cout << "Stack is Empty" << endl;
	}
	else {

		return stack[top--];
	}
}
int peek() {
	if (top == -1) {
		cout << "Stack is Empty " << endl;
	}
	else {
		cout << "The Peek is : ";
		return stack[top];
	}
}
void display() {
	if (top == -1) {
		cout << "Stack is Empty " << endl;
	}
	else {
		for (int i = top; i >= 0; i--) {
			cout << stack[i] << endl;
		}
	}
}


int main()
{
	push(5);
	push(6);
	push(7);
	push(10);
	push(14);
	pop();
	peek();
	display();
	getchar();
	
}

