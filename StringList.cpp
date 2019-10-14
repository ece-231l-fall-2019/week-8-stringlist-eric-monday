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
}

StringList::string& back(){
	for(int i = 0; i < this.size(); i++){
		llist *last = _data;
		while(last->next != null){
			last = last->next;
		}
		return last;
	}
}

StringList::void pop_back(std::string str){
	delete this.back();
}

StringList::void unique(){
	llist *cur = _data;
	for(int i = 0; i < this.size(); i++){
		std::string curData = cur->str;
		if(curData == cur->next->str){
			if(cur->next->next != null)
				cur->next = cur->next->next;
			cur->next->previous = cur;
			delete cur->next;
		}else{
		cur = cur->next;
		}
	}
}

