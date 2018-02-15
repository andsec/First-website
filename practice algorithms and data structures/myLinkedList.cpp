#include <iostream>
using namespace std;


class Link {
public:
//2 variables to hold data of any object class
	int item;

//pointer to next link in list
	Link* next;

	Link(int item1){
		item = item1;
		
	}
//method displays current link
	void displayLink(){
		cout << "{ " << item << " }" << endl;
	}
};

class LinkedList {
private:
//data memeber holds address of first link 
	Link* first;
	Link* last;

public:
	LinkedList(){
		first = NULL;
		last = NULL;
	}
	~LinkedList(){delete first;}
//method inserts new link at first position with passed in data
	void insertFirst(int data){
		//new link is created with new data
		Link* newLink = new Link(data);
		//if the list is empty, make last point to new link as well
		if(isEmpty()){
			last = newLink;
		}
		//new link now points to first link in list
		newLink->next = first;
		//first now points to newly created link
		first = newLink;
	}
//method inserts link at end of list
	void insertLast(int data){
		//new link is created with new data
		Link* newLink = new Link(data);
		//if list empty, make first point to new link
		if(isEmpty()){
			first = newLink;
		}
		//if list not empty make last item point to new one
		else{last->next = newLink;}
		//if list empty make last and first point to new link
		last = newLink;
	}
//method deletes first link
	Link* deleteFirst(){
		Link* temp = first;
		//first now points to next link
		first = first->next;
		return temp;
	}
//method to display list
	void displayList(){
		Link* temp = first;
		while(temp != NULL){
			cout << temp->item << endl;
			temp = temp->next;
		}
		cout << "end" << endl;
	}
	Link* find(int key){
		Link* current = first;
		while(current->item != key){
			if(current->next == NULL){
				cout << "value not found" << endl;
				return NULL;
			}
			else{
				current = current->next;
			}
		}
		cout << "value has been found" << endl;
		return current;
	}
	int deleteItem(int key){
		Link* current = first;
		Link* previous = first;
		while(current->item != key){
			if(current->next == NULL){
				cout << "value not found" << endl;
				return 0;
			}
			else{
				previous = current;
				current = current->next;
			}
		}
		if(current == first){
			first = first->next;
		}
		else{
			previous->next = current->next;
		}
	}
	bool isEmpty(){
		return first == NULL;
	}
};
