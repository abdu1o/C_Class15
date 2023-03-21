#include "EngineInfo.h"
#include <iostream>

namespace engine
{
	EngineInfo::EngineInfo(std::string model, int displacement, double power,
		std::string fuel_type, std::string manufacturer)
	{
		this->_model = model;
		this->_displacement = displacement;
		this->_power = power;
		this->_fuel_type = fuel_type;
		this->_manufacturer = manufacturer;
	}

	std::string EngineInfo::getModel() const
	{
		return _model;
	}

	int EngineInfo::getDisplace() const
	{
		return _displacement;
	}

	double EngineInfo::getPower() const
	{
		return _power;
	}

	std::string EngineInfo::getFuel() const
	{
		return _fuel_type;
	}

	std::string EngineInfo::getManufact() const
	{
		return _manufacturer;
	}

	void printEngineInfo(const EngineInfo& engine)
	{
		std::cout << "Model: " << engine.getModel() << std::endl;
		std::cout << "Displacement: " << engine.getDisplace() << "cm^3" << std::endl;
		std::cout << "Power: " << engine.getPower() << "kW" << std::endl;
		std::cout << "Fuel type: " << engine.getFuel() << std::endl;
		std::cout << "Manufacturer: " << engine.getManufact() << std::endl;
	}
}



