#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "List.h"

class ArrayListClass :
	public List
{
private:
	List arr[27];      //   Array of 'List' objects
public:
	ArrayListClass();           //  Default Constructor
	void search(std::string);   //  Func to search for specified string
	void printLetter(char);     //  Func to print specified list
	void printAll();            //  Func to print all lists
};

inline ArrayListClass::ArrayListClass() {
	std::ifstream fileIn;
	std::string newName;
	fileIn.open("Names.txt");

	if (!fileIn.is_open()) {
		std::cout << " Cannot find file. \n";
	}
	if (fileIn.is_open()) {
		while (std::getline(fileIn, newName)) {
			char firstL = newName.front();
			switch (firstL) {
			case 'A':
				if (!arr[1].isFull()) {
					arr[1].insert(newName);
				}
				break;
			case 'B':
				if (!arr[2].isFull()) {
					arr[2].insert(newName);
				}
				break;
			case 'C':
				if (!arr[3].isFull()) {
					arr[3].insert(newName);
				}
				break;
			case 'D':
				if (!arr[4].isFull()) {
					arr[4].insert(newName);
				}
				break;
			case 'E':
				if (!arr[5].isFull()) {
					arr[5].insert(newName);
				}
				break;
			case 'F':
				if (!arr[6].isFull()) {
					arr[6].insert(newName);
				}
				break;
			case 'G':
				if (!arr[7].isFull()) {
					arr[7].insert(newName);
				}
				break;
			case 'H':
				if (!arr[8].isFull()) {
					arr[8].insert(newName);
				}
				break;
			case 'I':
				if (!arr[9].isFull()) {
					arr[9].insert(newName);
				}
				break;
			case 'J':
				if (!arr[10].isFull()) {
					arr[10].insert(newName);
				}
				break;
			case 'K':
				if (!arr[11].isFull()) {
					arr[11].insert(newName);
				}
				break;
			case 'L':
				if (!arr[12].isFull()) {
					arr[12].insert(newName);
				}
				break;
			case 'M':
				if (!arr[13].isFull()) {
					arr[13].insert(newName);
				}
				break;
			case 'N':
				if (!arr[14].isFull()) {
					arr[14].insert(newName);
				}
				break;
			case 'O':
				if (!arr[15].isFull()) {
					arr[15].insert(newName);
				}
				break;
			case 'P':
				if (!arr[16].isFull()) {
					arr[16].insert(newName);
				}
				break;
			case 'Q':
				if (!arr[17].isFull()) {
					arr[17].insert(newName);
				}
				break;
			case 'R':
				if (!arr[18].isFull()) {
					arr[18].insert(newName);
				}
				break;
			case 'S':
				if (!arr[19].isFull()) {
					arr[19].insert(newName);
				}
				break;
			case 'T':
				if (!arr[20].isFull()) {
					arr[20].insert(newName);
				}
				break;
			case 'U':
				if (!arr[21].isFull()) {
					arr[21].insert(newName);
				}
				break;
			case 'V':
				if (!arr[22].isFull()) {
					arr[22].insert(newName);
				}
				break;
			case 'W':
				if (!arr[23].isFull()) {
					arr[23].insert(newName);
				}
				break;
			case 'X':
				if (!arr[24].isFull()) {
					arr[24].insert(newName);
				}
				break;
			case 'Y':
				if (!arr[25].isFull()) {
					arr[25].insert(newName);
				}
				break;
			case 'Z':
				if (!arr[26].isFull()) {
					arr[26].insert(newName);
				}
				break;
			default:
				std::cout << " Please use an Upper Case first letter \n";
			}
		}
	}
}

inline void ArrayListClass::search(std::string name)
{
	char firstLetter = name.front();

	switch (firstLetter) {
	case 'A':
		if (!arr[1].isEmpty()) {
			arr[1].searchList(name);
		}
		break;
	case 'B':
		if (!arr[2].isEmpty()) {
			arr[2].searchList(name);
		}
		break;
	case 'C':
		if (!arr[3].isEmpty()) {
			arr[3].searchList(name);
		}
		break;
	case 'D':
		if (!arr[4].isEmpty()) {
			arr[4].searchList(name);
		}
		break;
	case 'E':
		if (!arr[5].isEmpty()) {
			arr[5].searchList(name);
		}
		break;
	case 'F':
		if (!arr[6].isEmpty()) {
			arr[6].searchList(name);
		}
		break;
	case 'G':
		if (!arr[7].isEmpty()) {
			arr[7].searchList(name);
		}
		break;
	case 'H':
		if (!arr[8].isEmpty()) {
			arr[8].searchList(name);
		}
		break;
	case 'I':
		if (!arr[9].isEmpty()) {
			arr[9].searchList(name);
		}
		break;
	case 'J':
		if (!arr[10].isEmpty()) {
			arr[10].searchList(name);
		}
		break;
	case 'K':
		if (!arr[11].isEmpty()) {
			arr[11].searchList(name);
		}
		break;
	case 'L':
		if (!arr[12].isEmpty()) {
			arr[12].searchList(name);
		}
		break;
	case 'M':
		if (!arr[13].isEmpty()) {
			arr[13].searchList(name);
		}
		break;
	case 'N':
		if (!arr[14].isEmpty()) {
			arr[14].searchList(name);
		}
		break;
	case 'O':
		if (!arr[15].isEmpty()) {
			arr[15].searchList(name);
		}
		break;
	case 'P':
		if (!arr[16].isEmpty()) {
			arr[16].searchList(name);
		}
		break;
	case 'Q':
		if (!arr[17].isEmpty()) {
			arr[17].searchList(name);
		}
		break;
	case 'R':
		if (!arr[18].isEmpty()) {
			arr[18].searchList(name);
		}
		break;
	case 'S':
		if (!arr[19].isEmpty()) {
			arr[19].searchList(name);
		}
		break;
	case 'T':
		if (!arr[20].isEmpty()) {
			arr[20].searchList(name);
		}
		break;
	case 'U':
		if (!arr[21].isEmpty()) {
			arr[21].searchList(name);
		}
		break;
	case 'V':
		if (!arr[22].isEmpty()) {
			arr[22].searchList(name);
		}
		break;
	case 'W':
		if (!arr[23].isEmpty()) {
			arr[23].searchList(name);
		}
		break;
	case 'X':
		if (!arr[24].isEmpty()) {
			arr[24].searchList(name);
		}
		break;
	case 'Y':
		if (!arr[25].isEmpty()) {
			arr[25].searchList(name);
		}
		break;
	case 'Z':
		if (!arr[26].isEmpty()) {
			arr[26].searchList(name);
		}
		break;
	default:
		std::cout << " Please use an Upper Case first letter \n";
	}
}

inline void ArrayListClass::printLetter(char letter)
{
	switch (letter) {
	case 'A':
		if (!arr[1].isEmpty()) {
			arr[1].printList();
		}
		break;
	case 'B':
		if (!arr[2].isEmpty()) {
			arr[2].printList();
		}
		break;
	case 'C':
		if (!arr[3].isEmpty()) {
			arr[3].printList();
		}
		break;
	case 'D':
		if (!arr[4].isEmpty()) {
			arr[4].printList();
		}
		break;
	case 'E':
		if (!arr[5].isEmpty()) {
			arr[5].printList();
		}
		break;
	case 'F':
		if (!arr[6].isEmpty()) {
			arr[6].printList();
		}
		break;
	case 'G':
		if (!arr[7].isEmpty()) {
			arr[7].printList();
		}
		break;
	case 'H':
		if (!arr[8].isEmpty()) {
			arr[8].printList();
		}
		break;
	case 'I':
		if (!arr[9].isEmpty()) {
			arr[9].printList();
		}
		break;
	case 'J':
		if (!arr[10].isEmpty()) {
			arr[10].printList();
		}
		break;
	case 'K':
		if (!arr[11].isEmpty()) {
			arr[11].printList();
		}
		break;
	case 'L':
		if (!arr[12].isEmpty()) {
			arr[12].printList();
		}
		break;
	case 'M':
		if (!arr[13].isEmpty()) {
			arr[13].printList();
		}
		break;
	case 'N':
		if (!arr[14].isEmpty()) {
			arr[14].printList();
		}
		break;
	case 'O':
		if (!arr[15].isEmpty()) {
			arr[15].printList();
		}
		break;
	case 'P':
		if (!arr[16].isEmpty()) {
			arr[16].printList();
		}
		break;
	case 'Q':
		if (!arr[17].isEmpty()) {
			arr[17].printList();
		}
		break;
	case 'R':
		if (!arr[18].isEmpty()) {
			arr[18].printList();
		}
		break;
	case 'S':
		if (!arr[19].isEmpty()) {
			arr[19].printList();
		}
		break;
	case 'T':
		if (!arr[20].isEmpty()) {
			arr[20].printList();
		}
		break;
	case 'U':
		if (!arr[21].isEmpty()) {
			arr[21].printList();
		}
		break;
	case 'V':
		if (!arr[22].isEmpty()) {
			arr[22].printList();
		}
		break;
	case 'W':
		if (!arr[23].isEmpty()) {
			arr[23].printList();
		}
		break;
	case 'X':
		if (!arr[24].isEmpty()) {
			arr[24].printList();
		}
		break;
	case 'Y':
		if (!arr[25].isEmpty()) {
			arr[25].printList();
		}
		break;
	case 'Z':
		if (!arr[26].isEmpty()) {
			arr[26].printList();
		}
		break;
	default:
		std::cout << " Please use an Upper Case letter \n";
	}
}

inline void ArrayListClass::printAll()
{
	for (int i = 1; i < 27; i++) {
		arr[i].printList();
	}
}
