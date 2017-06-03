#include "Peon.hpp"

Peon::Peon(string name) : Victim(name), _name(name) {
	cout << "Zog zog." << endl;
	return ;
}

Peon::~Peon(void) {
	cout << "Bleuark..." << endl;
	return ;
}

void	Peon::getPolymorphed(void) const {
	cout << nametoupper() << " has been turned into a pink pony!" << endl;
}

string	Peon::nametoupper(void) const {
	string	converted;
	for (int i = 0; i < _name.size(); i++)
		converted += toupper(_name[i]);
	return converted;
}
