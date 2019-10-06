#ifndef LL_H
#define LL_H

#include<iostream>
#include"Node.h"
#include"Student.h"
using namespace std;

template <class T>
class LL
{
private:
	Node<T> *head, *tail;
	int count;
public:
	LL<T>();
	//~LL<T>();
	//int size() const;
	bool isEmpty();
	bool addAtBegin(T ele);
	bool addAtEnd(T ele);
	void Display();
	T deleteFromBegin();
	//T deleteFromEnd();
	//bool insertAt(int pos,T ele);
	//bool reverse();
	Node<T>* getHead();
	
	friend ostream& operator<<(ostream& os, Student st);
};

ostream& operator<<(ostream& os, Student st)
{
	st.display();
	return os;
	// return os <<"operator overloaded";
}

#endif
