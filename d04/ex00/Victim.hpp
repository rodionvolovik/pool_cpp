#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

using namespace std;

class Victim {
	private:
		string	_name;

	public:
		Victim(string name);
		Victim(const Victim &other);
		~Victim(void);
		void	getPolymorphed(void) const;
		string	nametoupper(void) const;
};

ostream	&operator<<(ostream &os, const Victim &obj);

#endif
