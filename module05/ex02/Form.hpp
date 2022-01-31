#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include <fstream>

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string const & name, size_t gradeToSigned, size_t gradeToExe);
		Form(Form const & src);
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		std::string	getName() const;
		size_t		getGradeToSign() const;
		size_t		getGradeToExe() const;
		size_t		getSignature() const;

		void			beSigned(Bureaucrat const & b);
		virtual void	execute(Bureaucrat const & executor) const = 0;


		class	GradeToLowException : public std::exception
		{
			public:
				virtual char const * what() const throw()
				{
					return "grade is too low to be signed";
				}
		};
		class	GradeToHighException : public std::exception
		{
			public:
				virtual char const * what() const throw()
				{
					return "grade is too high to be signed";
				}
		};

	private:
		std::string const _name;
		size_t const _gradeToSign;
		size_t const _gradeToExe;
		bool _signed;



};

std::ostream &			operator<<(std::ostream & o, Form const & i);

#endif /* ************************************************************ FORM_H */