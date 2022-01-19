#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact()
{
}

void		Contact::setFirstName(std::string const &s)
{
	this->first_name = s;
}

std::string	Contact::getFirstName(void) const
{
	return (this->first_name);
}

void		Contact::setLastName(std::string const &s)
{
	this->last_name = s;
}

std::string	Contact::getLastName(void) const
{
	return this->last_name;
}

void		Contact::setNickname(std::string const &s)
{
	this->nickname = s;
}

std::string	Contact::getNickname(void) const
{
	return this->nickname;
}

void		Contact::setPhoneNumber(std::string const &s)
{
	this->phone_number = s;
}

std::string	Contact::getPhoneNumber(void) const
{
	return this->phone_number;
}

void		Contact::setSecret(std::string const &s)
{
	this->secret = s;
}

std::string	Contact::getSecret(void)
{
	return this->secret;
}
