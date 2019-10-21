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
//--- Construct Lists --------------------------------------------------------------
	StringList list_1;
	StringList list_2;
	StringList list_3;
	StringList list_4;
	
//--- Populate Lists --------------------------------------------------------
	list_2.push_back("The Fish");
	list_3.push_back("one bird");
	list_2.push_back("Ate");
	list_3.push_back("stones with");
	list_2.push_back("The Red");
	list_3.push_back("can kill two");
	list_2.push_back("Fox");
	list_3.push_back("Norris");
	list_2.push_back("Jumped");
	list_2.push_back("To");
	list_2.push_back("Saturn");
	list_4.push_front("C");
	list_4.push_front("C");
	list_4.push_front("I");
	list_4.push_front("G");
	list_4.push_front("A");
	list_4.push_front("M");
	list_4.push_front("M");
	list_4.push_front("M");
	list_3.push_back("Chuck");
	
//--- Empty -----------------------------------------------------------------------
	std::cout << "\t Test Empty \n";
	
	std::cout << " Is List 1 Empty ? : ";
	if(list_1.empty())
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	std::cout << " Is List 2 Empty ? : ";
	if(list_2.empty())
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	std::cout << "_____________________________________________________________\n";

//--- Size ------------------------------------------------------------------------
	std::cout << "\t Test Size\n";
	std::cout << "The Size of List 1 = " << list_1.size();
	std::cout << "\nThe Size of List 2 = " << list_2.size();
	std::cout << "\n";
	std::cout << "_____________________________________________________________\n";	
	
//--- Push Back -------------------------------------------------------------------
	std::cout << "\t Test Push Back \n";
	
	list_1.push_back("5");
	list_1.push_back("6");
	list_1.push_back("7");
	list_1.push_back("8");
	std::cout << "List 1: ";
	list_1.printList();
	std::cout << "_____________________________________________________________\n";
	
//--- Push Front ------------------------------------------------------------------
	std::cout << "\t Test Push Front \n";
	
	list_1.push_front("4");
	list_1.push_front("3");
	list_1.push_front("2");
	list_1.push_front("1");
	std::cout << "List 1: ";
	list_1.printList();
	std::cout << "_____________________________________________________________\n";
	
//--- Pop Back --------------------------------------------------------------------
	std::cout << "\t Test Pop Back \n";
	std::cout << "List 2 Before pop: ";
	list_2.printList();
	list_2.pop_back();
	list_2.pop_back();
	std::cout << "List 2 After pop: ";
	list_2.printList();
	std::cout << "_____________________________________________________________\n";
	
//--- Pop Front -------------------------------------------------------------------
	std::cout << "\t Test Pop front \n";
	std::cout << "List 2 Before pop: ";
	list_2.printList();
	list_2.pop_front();
	list_2.pop_front();
	std::cout << "List 2 After pop: ";
	list_2.printList();
	std::cout << "_____________________________________________________________\n";
	
//--- Unique ----------------------------------------------------------------------
	std::cout << "\t Test Unique \n";
	std::cout << "List 4 Before: ";
	list_4.printList();
	list_4.unique();
	std::cout << "List 4 After: ";
	list_4.printList();
	std::cout << "_____________________________________________________________\n";
	
//--- Operator Equal ---------------------------------------------------------------
	std::cout << "\t Test Operator = \n";
	std::cout << "List 4 = List 1 \n";
	list_4 = list_1;
	std::cout << "List 4: ";
	list_4.printList();
	std::cout << "_____________________________________________________________\n";
	
//--- Reverse ----------------------------------------------------------------------
	std::cout << "\t Test Reverse \n";
	std::cout << "List 3 Before: ";
	list_3.printList();
	std::cout << "List 3 After:  ";
	list_3.reverse();
	list_3.printList();
	std::cout << "_____________________________________________________________\n";
//--- Clear ----------------------------------------------------------------------
	std::cout << "\t Test Clear \n";
	std::cout << "List 1 Before: ";
	list_1.printList();
	std::cout << "List 1 size:  ";
	list_1.size();
	std::cout << " Is List 1 Empty ? : ";
	if(list_1.empty())
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	
	list_1.clear();
	std::cout << "List 1 After: ";
	list_1.printList();
	std::cout << "List 1 size:  ";
	list_1.size();
	std::cout << " Is List 1 Empty ? : ";
	if(list_1.empty())
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	std::cout << "_____________________________________________________________\n";
	
//--- End of Testing ---------------------------------------------------------------
}