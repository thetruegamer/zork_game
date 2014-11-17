#include "Item.h"
#include <iostream>
#include <string>
using namespace std;

Item::Item(){}

string Item::getName(){
	return name;
}
void Item::setName(string name){
	this->name = name;
}

Status Item::getStatus(){
	return status;
}
void Item::setStatus(Status status){
	this->status = status;
}

string Item::getDescription(){
	return description;
}
void Item::setDescription(string description){
	this->description = description;
}

Triggers * Item::getTriggers(){
	return triggers;
}
void Item::setTriggers(Triggers* triggers){
	this->triggers = triggers;
}

void Item::turn_on(){
	this->on_off = 1;
}

void Item::turn_off(){
	this->on_off = 0;
}