#include <stack>

template <typename T> class MinStack {

public:
	MinStack();
	
	void push(T a);

	void pop();

	T top();

	T get_min();

	bool empty();

private:
	std::stack<std::pair<T, T>> st;

};

template <class T> MinStack<T>::MinStack() { }


template <class T> void MinStack<T>::push(T a) {
	int new_min = st.empty() ? a : std::min(a, st.top().second);
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


template <typename T> class MaxStack {

public:
	MaxStack();
	
	void push(T a);

	void pop();

	T top();

	T get_max();

	bool empty();

private:
	std::stack<std::pair<T, T>> st;

};

template <class T> MaxStack<T>::MaxStack() { }


template <class T> void MaxStack<T>::push(T a) {
	int new_max = st.empty() ? a : std::max(a, st.top().second);
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






