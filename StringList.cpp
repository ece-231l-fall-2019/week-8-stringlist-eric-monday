#include <iostream>
#include <string>
#include "StringList.h"


//--- Reference Front ----------------------------------
	std::string& StringList::front()
	{
		return _head->str;
	}
	
//--- Reference Back -----------------------------------
	std::string& StringList::back()
	{
		return _tail->str;
	}

//--- Copy Constructor ---------------------------------
StringList::StringList(const StringList& other)
{
	_head = other._head;
	_tail = other._tail;
	_size = other.size();
}
	
//--- Operator Equal -----------------------------------
StringList& StringList::operator=(const StringList& b)
{
	if(!empty())
		clear();
	
	const llist *copier = b._head;
	while(copier != NULL)
	{
		push_back(copier->str);
		copier = copier->next;
	}
		_size = b.size();
	return *this;	
}
	
//--- Clear --------------------------------------------
void StringList::clear(){
	while(empty() == false){
		pop_back();
	}
	_size = 0;
}
	
//--- Push Front ---------------------------------------
void StringList::push_front(std::string str)
{
	llist *newFront = new llist;
	newFront->str = str;
	newFront->next = _head;
	newFront->prev = 0;
	if (_head != 0)
		_head->prev = newFront;
	if (_tail == 0)
		_tail = newFront;
	_head = newFront; 

	_size++;
}
	
//--- Push Back ----------------------------------------
void StringList::push_back(std::string str)
{
	llist *newBack = new llist;
	newBack->str = str;
	newBack->next = 0;
	newBack->prev = _tail;
	if(_tail != 0)
		_tail->next = newBack;
	if(_head == 0)
		_head = newBack;
	_tail = newBack;
		
	_size++;
}
		
//--- Pop Front ----------------------------------------
void StringList::pop_front()
{
	llist *front = _head;
	_head = _head->next;
		
	if(_head)
		_head->prev = _head->prev->prev;
	else
		_tail = 0;
			
	delete front;
		
	_size--;
}
	
//--- Pop Back -----------------------------------------
void StringList::pop_back()
{
	llist *back = _tail;
	_tail = _tail->prev;
		
	if(_tail)
		_tail->next = _tail->next->next;
	else
	_head = 0;
			
	delete back;
		
	_size--;
}

//--- Reverse ------------------------------------------
void StringList::reverse()
	{
	}
	
//--- Unique -------------------------------------------
void StringList::unique()
{
	for(llist *clean = _head; clean != NULL; clean = clean->next)
	{
		while(clean->next != NULL && clean->str == clean->next->str)
		{
			llist *data = clean->next;
			clean->next = data->next;
			if(data->next != NULL)
				data->next->prev = clean;
			else
				_tail = clean;
			delete data;
			_size--;
		}
	}
}

//--- Print --------------------------------------------
void StringList::printList()
{
	llist *printer = _head;
	while(printer != 0)
	{
		std::cout << printer->str << " ";
		printer = printer->next;
	}
	std::cout << "\n";
}

//--- End of CPP ---------------------------------------