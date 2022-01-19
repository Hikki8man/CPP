#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

typedef enum	complains
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	OTHER
} e_complains;

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	e_complains	getComplain(std::string const &level) const;

public:
	Karen();
	~Karen();

	void	complain(std::string const &level);
};

#endif
