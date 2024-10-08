/*
 * User.cpp
 *
 *  Created on: 31 Jul 2024
 *      Author: hp
 */

#include "User.h"
#include<iostream>
using namespace std;

User::User(const std::string &userId, const std::string &name,
		const std::string &email, double balance) : userId(userId) , name(name) , email(email) , balance(balance)
{
}

std::string User::getUserId() const
{
	return this->userId;
}

double User::getBalance() const
{
	return this->balance;
}

void User::updateBalance(double amount)
{
	this->balance=amount;
}

void User::displayInfo() const
{
	std::cout<<"Id:"<<this->userId<<", Name:"<<this->name<<", Email:"<<this->email<<", Balance:"<<this->balance;
}

std::shared_ptr<Poco::JSON::Object> User::toJson() const
{
	shared_ptr<Poco::JSON::Object> returnptr(new Poco::JSON::Object);

	returnptr->set("Id",this->userId);
	returnptr->set("Name",this->name);
	returnptr->set("Email",this->email);
	returnptr->set("Balance",this->balance);


	return returnptr;
}

const std::string& User::getName() const
{
	return name;
}
