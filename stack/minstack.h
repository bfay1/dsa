#pragma once
#include <stack>

/*
 * Keeps a pair of elements to maintain the minimum.
 * Could, in theory, make this a min/max stack, but on the offchance that 
 * that causes a memory limit exceeded verdict, it would be very difficult/
 * impossible to resolve, especially in contest.
 */

template <typename T> class MinStack {

public:
	MinStack();
	
	void push(T a);

	void pop();

	T top();

	T get_min();

	bool empty();

private:
	std::stack<pair<T, T>> st;

};

template <class T> MinStack<T>::MinStack();


template <class T> void MinStack<T>::push(T a) {
	int new_min = st.empty() ? a : min(a, st.top().second);
	st.push({a, new_min});
}

template <class T> void MinStack<T>::pop() {
	st.pop();
}

template <class T> T MinStack<T>::top() {
	return st.top().first;
}

template <class T> T MinStack<T>::get_min() {
	return st.top().second;
}

template <class T> bool MinStack<T>::empty() {
	return st.empty();
}



