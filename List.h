#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#define EMPTY "zzz"	//	Default value of unused cell
#define SIZE 100		//	CHANGE here to adjust size of array

class List {
private:
	int count;					//	Variable to track count of objects in list
	std::string Names[SIZE];	//	Array of Names
public:
	List();
	void insert(std::string);		//	Func to insert item into array
	void searchList(std::string);	//	Func to search array for specific string
	void printList();				//	Func to print whole list 
	bool isFull();					//	Func to return if array if full
	bool isEmpty();					//	Func to return if array is empty
};

inline List::List() {
	count = 0;
	for (int i = 0; i < SIZE; i++) {
		Names[i] = EMPTY;
	}
}

inline void List::insert(std::string name)
{
	if (!isFull()) {						//	Verify list is not full 
		for (int i = 0; i < SIZE; i++) {
			if (Names[i] == EMPTY) {		//	Find first EMPTY cell
				Names[i] = name;			//	Set that cell to input
				count++;					//	Increment count
				std::sort(std::begin(Names), std::end(Names));
				break;		//	Break loop
			}
		}
	}
}

inline void List::searchList(std::string name)
{
	if (!isEmpty()) {						//	Verify list is not empty
		for (int i = 0; i < SIZE; i++) {
			if (Names[i] == name) {			//	Find cell with same name as entered
				std::cout << " " << name << " found! \n";
				break;		//	Break loop
			}
		}
	}
}

inline void List::printList()
{
	for (int i = 0; i < SIZE; i++) {
		if (Names[i] != EMPTY) {
			std::cout << " " << Names[i] << "\n";
		}
	}

}

inline bool List::isFull()
{
	if (count == SIZE) {
		return true;
	}
	else {
		return false;
	}
}

inline bool List::isEmpty()
{
	if (count == 0) {
		return true;
	}
	else {
		return false;
	}
}
