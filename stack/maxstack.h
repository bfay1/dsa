#pragma once
#include <stack>

/*
 * Keeps a pair of elements to maintain the minimum.
 * Could, in theory, make this a min/max stack, but on the offchance that 
 * that causes a memory limit exceeded verdict, it would be very difficult/
 * impossible to resolve, especially in contest.
 */

template <typename T> class MaxStack {

public:
	MaxStack();
	
	void push(T a);

	void pop();

	T top();

	T get_max();

	bool empty();

private:
	std::stack<pair<T, T>> st;

};

template <class T> MaxStack<T>::MaxStack();


template <class T> void MaxStack<T>::push(T a) {
	int new_max = st.empty() ? a : max(a, st.top().second);
	st.push({a, new_max});
}

template <class T> void MaxStack<T>::pop() {
	st.pop();
}

template <class T> T MaxStack<T>::top() {
	return st.top().first;
}

template <class T> T MaxStack<T>::get_max() {
	return st.top().second;
}

template <class T> bool MaxStack<T>::empty() {
	return st.empty();
}



