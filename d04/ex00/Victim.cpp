#include "Victim.hpp"

string	Victim::nametoupper(void) const {
	string	converted;
	for (int i = 0; i < _name.size(); i++)
		converted += toupper(_name[i]);
	return converted;
}

Victim::Victim(string name) : _name(name) {
	cout << "Some random victim called " << nametoupper() << " just popped!" << endl;
	return ;
}

Victim::~Victim(void) {
	cout << "Victim " << nametoupper() << " just died for no aparent reason!" << endl;
	return ;
}

void	Victim::getPolymorphed(void) const {
	cout << nametoupper() << " has been turned into a cute little ship!" << endl;
}

ostream	&operator<<(ostream &os, const Victim &obj) {
	os << "I'm " << obj.nametoupper() << " and I'm like the otters!" << endl;
	return os;
}
