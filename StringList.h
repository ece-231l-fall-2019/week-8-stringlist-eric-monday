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
	llist *_dataLast;
	int _size;

	public:
	
	// default constructor
	StringList()
	{
		_data = 0;
		_dataLast = 0;
		_size = 0;
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
		size++;
		_data = newItem;
		if(size >= 1){
			_dataLast = 
		}
	}

	void pop_front()
	{
		llist *front = _data;
		_data = front->next;
		delete front;
		size--;
	}

	bool empty() const
	{
		return _data == 0;
	}
	//Bryan
	void clear();
	string& back();
	void pop_back(string str);
	void unique();
};

/*

//Eric
size

//Eric
front

//Eric
push_back

//Eric
reverse

*/
