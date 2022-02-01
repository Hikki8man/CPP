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
	static std::string const _complainsList[4];

	int		getComplain(std::string const &level) const;

public:
	Karen();
	~Karen();

	void	complain(std::string const &level);
};

#endif
