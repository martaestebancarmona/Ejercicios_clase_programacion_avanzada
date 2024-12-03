#pragma once
#include <string>
#include <iostream>
class A
{
private:
	int id;
	std::string nombre;
	static int contador;
public:
	A(int id, std::string nombre);
	~A();
	int getId();
	void setId(int id);
	std::string getNombre();
	void setNombre(std::string nombre);
};
