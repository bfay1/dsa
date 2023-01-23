#include <iostream>
#include "stack.h"

int main() {
	MinStack<int> *st1 = new MinStack<int>();
	MaxStack<int> *st2 = new MaxStack<int>();
	//MultiStack<int> *st3 = new MultiStack<int>();

	st1->push(10);
	st2->push(10);
	//st3->push(10);
	st1->push(12);
	st2->push(12);
	//st3->push(12);

	std::cout << "Top and min of stack: " << st1->top() << " " << st1->get_min() << " " << st2->get_max() << "\n";

	st1->push(5);
	st2->push(5);
	//st3->push(5);
	st1->push(100);
	st2->push(100);
	//st3->push(100);
	
	std::cout << "Top, min, max of stack: " << st1->top() << " " << st1->get_min() << " " << st2->get_max() << "\n";
}
