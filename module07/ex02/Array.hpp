#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstring>

template < typename T>
class Array
{

	public:

		typedef unsigned int	uint; 

		Array() : _size(0), _t(NULL) {}

		Array(uint n) : _size(n) {
			this->_t = new T[n];
			std::memset(this->_t, 0, sizeof(T) * _size);
		}
	
		Array( Array const & src ) : _t(NULL) { *this = src; };

		~Array() { if (this->_t) delete [] this->_t; };

		Array &		operator=( Array const & rhs ) {

			if (this->_t) { delete [] this->_t; }
	
			this->_size = rhs._size;
			this->_t = new T[this->_size];
			for (uint i(0); i < this->_size; i++) {
				this->_t[i] = rhs._t[i];
			}
			return *this;
		}
	
		T &			operator[]( uint index) const {

			if (index >= this->_size)
				throw Array::OutOfBoundException();
			return this->_t[index];
		}

		class OutOfBoundException : public std::exception {

			virtual char const * what() const throw() {
				return "Out of bound";
			}
		};

		uint size() const {
			return this->_size;
		}

	private:
		T *_t;
		uint _size;

};

template < typename T >
std::ostream &			operator<<( std::ostream & o, Array<T> const & arr ) {

	for (uint i(0); i < arr.size(); i++) {
			o << arr[i] << " ";
	}

	return o;
}

#endif /* *********************************************************** ARRAY_H */