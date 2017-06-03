#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

using namespace std;

class Sorcerer {
	private:
		string	_name;
		string	_title;

	public:
		Sorcerer(string name, string title);
		Sorcerer(const Sorcerer &other);
		~Sorcerer(void);
		string	nameupper(void) const;
		void	polymorph(const Victim &obj) const;
		void	polymorph(const Peon &obj) const;
};


ostream	&operator<<(ostream &stream, const Sorcerer &obj);

#endif
