#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	typedef unsigned int uint;
	public:

		Span(uint size);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void	addNumber(int n);
		uint	shortestSpan();
		uint	longestSpan();
		void	generate();

		class VectorFullException : public std::exception {
			public :
				virtual char const * what() const throw();
		};
		class NoSpanException : public std::exception {
			public :
				virtual char const * what() const throw();
		};


	private:
		Span();
		std::vector<int> _v;
		uint _size;

};

#endif /* ************************************************************ SPAN_H */