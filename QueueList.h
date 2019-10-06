#include"LL.h"
#include<iostream>
using namespace std;

template <class T>
class QueueList{
	private:
		LL<T> obj;
	public:
		QueueList();
		~QueueList();
		bool AddQueue(T ele);
		T DeleteQueue();
		void Display();
		bool isEmpty();
		bool Full();
};
