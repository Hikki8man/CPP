# include <iostream>

struct Data
{
	int n;
};

uintptr_t serialize (Data *ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data * deserialize(uintptr_t raw) {

	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data d;

	std::cout << "Address of Data d: " << &d << " | " << "Serialize return: " << serialize(&d) << std::endl;
	std::cout << "Deserialize return: " << deserialize(serialize(&d)) << std::endl;
	return 0;
}
