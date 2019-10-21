#include <iostream>
#include <string>

class StringList
{
	private:

	typedef struct llist {
		std::string str;
		struct llist *next;
		struct llist *prev;
	} llist;

	llist *_head; //begining of list
	llist *_tail;// end of list
	size_t _size;

	public:
	
//--- Default Constructor ------------------------------
	StringList()
	{
		_head = 0;
		_tail = 0;
		_size = 0;
	}
	
//--- Copy Constructor ---------------------------------
	StringList(const StringList& other);
	
//--- Destructor ---------------------------------------
	~StringList()
	{
		while(!empty())
			pop_front();
	}
	
//--- Operator Equal -----------------------------------
	StringList& operator=(const StringList& b);
	
//--- Empty --------------------------------------------
	bool empty() const
	{
		if(_head == 0)
			return true;
		return false;
	}
	
//--- Size ---------------------------------------------
	size_t size() const
	{
		return _size;
	}
//--- Clear --------------------------------------------
	void clear();
	
//--- Reference Front & Back ---------------------------
	std::string& front();
	std::string& back();
	
//--- Push Functions ------------------------------------
	void push_front(std::string str);
	void push_back(std::string str);	
	
//--- Pop Functions ------------------------------------
	void pop_front();
	void pop_back();
	
//--- Reverse ------------------------------------------
	void reverse();
	
//--- Unique -------------------------------------------
	void unique();

//--- Print --------------------------------------------	
	void printList();

};


