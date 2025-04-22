#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Cow.h"
#include "Dog.h"

//동물원의 동물들이 각자의 소리로 말한다.

int main()
{
	std::vector<AAnimal*> zoo;

	zoo.push_back(new ADog());
	zoo.push_back(new ACat());
	zoo.push_back(new ACow());


	for (auto animal : zoo)
	{
		animal->Speak();
	}

	for (auto animal : zoo)
	{
		delete animal;
	}
	zoo.clear();

	return 0;
}