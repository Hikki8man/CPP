#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;

public:
    Contact();
    ~Contact();

	void		setFirstName(std::string const &s);
	std::string	getFirstName(void) const;

	void		setLastName(std::string const &s);
	std::string	getLastName(void) const;

	void		setNickname(std::string const &s);
	std::string	getNickname(void) const;

	void		setPhoneNumber(std::string const &s);
	std::string	getPhoneNumber(void) const;

	void		setSecret(std::string const &s);
	std::string	getSecret(void);

};

#endif
