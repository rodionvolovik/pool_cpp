#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

using namespace std;

class Peon : public Victim {
	private:
		string _name;

	public:
		Peon(string name);
		Peon(const Peon &obj);
		~Peon(void);
		void	getPolymorphed(void) const;
		string	nametoupper(void) const; 
};

#endif
