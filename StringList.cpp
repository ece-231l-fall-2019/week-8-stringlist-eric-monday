#include <iostream>
#include <string>
#include "StringList.h"

StringList::StringList(const StringList& other){
	this = other;
}

StringList::void clear(){
	while(empty() == false){
		pop_back();
	}
	size = 0;
}

StringList::string& back(){
	return _dataLast;
}

StringList::void pop_back(std::string str){
	delete this.back();
	size--;
}

StringList::void unique(){
	llist *cur = _data;
	for(int i = 0; i < this.size(); i++){
		std::string curData = cur->str;
		if(curData == cur->next->str){
			if(cur->next->next != NULL)
				cur->next = cur->next->next;
			cur->next->previous = cur;
			delete cur->next;
			i--;
		}else{
		cur = cur->next;
		}
	}
}

