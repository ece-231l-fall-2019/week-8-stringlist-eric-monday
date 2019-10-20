#include <iostream>
#include <string>

class StringList
{
	private:

	typedef struct llist {
		std::string str;
		struct llist *next;
		struct llist *previous;
	} llist;


	llist *_data;

	public:
	
	size_t words = 0;
	
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

	// copy operator
	StringList& operator=(const StringList& b)
	{
		llist *copier = b._data;
		copier->str = b->str;
		_data = b.front();
		while(copier->next != NULL)
		{
			str = copier->str;
			_data->next = copier->next;
			_data->prev = copier->prev;
			copier = copier->next;
		}
		_datalast = b.back();
		size = b.size();

	}
	
	std::string& front()
	{
	
		return _data->str;
	}
	/*
	std::string& back()
	{	
		llist *x = new llist;
		for(x = _data; x != NULL; x++)
			return x; 
	}
	*/		
	void push_front(std::string str)
	{
		llist *newItem = new llist;
		newItem->str = str;
		newItem->next = _data;
		newItem->previous = NULL;
		_data = newItem;
		words++;
	}

	void pop_front()
	{
		llist *front = _data;
		_data = front->next;
		_data->previous = NULL;
		delete front;
		words--;
	}

	bool empty() const
	{
		return _data == 0;
	}

	//void size()
	
	void push_back()
	{
		llist *temp;
		llist *lastItem = new llist;
		temp = back();
		lastItem->previous =  temp;
		_data->next = lastItem; 
		lastItem->next = NULL;
		words++
	}
//-- Reverse-------------
/*	
	void reverse()
	{
		llist *newback = _data;
		llist *temp1 = _data.back();
		llist *temp1 = ;
		newfront->next = temp1;
		newfront-previous = Null
	}
*/
	
};


/*
//Eric
operator=

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
