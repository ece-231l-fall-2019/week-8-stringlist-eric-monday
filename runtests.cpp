#include <iostream>

// change the value below to 1 to run tests against your StringList class.
// change the value below to 0 to run tests against the built in std::list.

#if 1
#include "StringList.h"
#else
#include <list>
#include <string>
typedef std::list<std::string> StringList;
#endif

void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{
	StringList list_1;
	
	list_1.push_back("4");
	list_1.push_back("5");
	list_1.push_back("6");
	list_1.push_front("3");
	list_1.push_front("2");
	list_1.push_front("1");
	
	list_1.printList();
	
	StringList list_2;
	
	list_2 = list_1;
	
	list_2.printList();
	
	list_2.push_front("1");
	list_2.push_back("6");
	list_2.push_back("6");
	list_2.push_back("6");
	
	list_2.printList();
	list_2.unique();
	list_2.printList();
	
	


}