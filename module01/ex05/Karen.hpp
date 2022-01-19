#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	static std::string const tab[4];
	void	(Karen::*f[4])(void);
public:
	Karen();
	~Karen();

	void	complain(std::string level);
};

#endif