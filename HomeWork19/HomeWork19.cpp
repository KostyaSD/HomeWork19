

#include <iostream>

class Animal {
public:
	virtual void Voice() const {
		std::cout << "Hello Animal" << '\n';
	}
};

class Cat : public Animal {
public:
	void Voice() const override {
		std::cout << "May.." << '\n';
	}
};

class Dog : public Animal {
public:
	void Voice() const override {
		std::cout << "Woof!" << '\n';
	}
};

class Cow : public Animal {
public:
	void Voice() const override {
		std::cout << "Muuu..." << '\n';
	}
};

int main()
{
	Animal* cat = new Cat();
	Animal* dog = new Dog();
	Animal* cow = new Cow();

	Animal** animal = new Animal * [3] {cat, dog, cow};

	for (int i = 0; i < 3; i++) {
		animal[i]->Voice();
	}

	delete[] animal;
	delete cat;
	delete dog;
	delete cow;

	animal = nullptr;
	cat = nullptr;
	dog = nullptr;
	cow = nullptr;

	return 0;
}

