#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &		operator=( Brain const & rhs );

		void	setIdeas(std::string const & idea);
		std::string const getIdeas(int n) const;

	protected:

		std::string _ideas[100];

};

#endif /* *********************************************************** BRAIN_H */