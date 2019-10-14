#include <iostream>
#include <string>

class StringList
{
	private:

	typedef struct llist {
		std::string str;
		struct llist *next;
	} llist;

	llist *_data;

	public:
	
	// default constructor
	StringList()
	{
		_data = 0;
	}

	// copy constructor
	StringList(const StringList&);

	// destructor
	~StringList()
	{
		while(!empty())
			pop_front();
	}
	//Eric
	// copy operator
	StringList& operator=(const StringList&);

	std::string& front()
	{
		return _data->str;
	}

	void push_front(std::string str)
	{
		llist *newItem = new llist;
		newItem->str = str;
		newItem->next = _data;
		_data = newItem;
	}

	void pop_front()
	{
		llist *front = _data;
		_data = front->next;
		delete front;
	}

	bool empty() const
	{
		return _data == 0;
	}
};

/*

//Eric
size

//Bryan
clear

//Eric
front

//Bryan
back

//Eric
push_back

//Bryan
pop_back

//Eric
reverse

//Bryan
unique
*/
