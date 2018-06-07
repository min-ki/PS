/* 

 Array기반의 stack 구현 예정
 - 배열의 크기는  stack이 가득찰때마다 2배씩 커지는 방법으로 
 - 동적 배열
*/ 


#include <iostream>
using namespace std;

// stack 클래스의 정의 
class stack {
private:
	int *stack_array;
    int capacity; 
    int top; // top을 가리키는 index 변수
public:
    stack() { } // 생성자 
    
    // stack 연산 
    void stack_init();
	void push(int data);
	void pop();
	bool empty();
	void print();
	int top();
	int size();
};

void stack:stack_init() {
    this->stack_array = new int[capacity];
    this->top = -1;
}

void stack::push(int data) {
    stack_array[++top]; // 증가시킨 후 삽입
}

void stack::pop() {
    int temp = stack_array[top--]; // 뺴고난 후 감소
}

int stack::top() {
    return stack_array[top];  
}

bool stack::empty() {
    return (top == -1)
}

void stack::print() {
	cout << "구현예정" << "\n";
}

int stack::size() {
    
}

int main() {
	stack s;

	return 0;
}