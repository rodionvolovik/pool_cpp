#include "Sorcerer.hpp"

string	Sorcerer::nameupper(void) const {
	string	converted;
	for (int i = 0; i < _name.size(); i++)
		converted += toupper(_name[i]);
	converted += ", ";
	for (int i = 0; i < _title.size(); i++)
		converted += toupper(_title[i]);
	return converted;
}

Sorcerer::Sorcerer(string name, string title) : _name(name), _title(title) {
	cout << nameupper() << ", is born!" << endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer &other) : _name(other._name), _title(other._title) {
	cout << nameupper() << ", is born!" << endl;
	return ;
}

Sorcerer::~Sorcerer(void) {
	cout << nameupper() << ", is dead. Consequences will never be the same." << endl;
	return ;
}

void	Sorcerer::polymorph(const Victim &obj) const {
	obj.getPolymorphed();
	return ;
}

void	Sorcerer::polymorph(const Peon &obj) const {
	obj.getPolymorphed();
	return ;
}

ostream	&operator<<(ostream &stream, const Sorcerer &obj) {
	stream << "I'm " << obj.nameupper() << ", and I like ponies." << endl;
	return stream ;
}
