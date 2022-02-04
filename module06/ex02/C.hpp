#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
};

std::ostream &			operator<<( std::ostream & o, C const & i );

#endif /* *************************************************************** C_H */