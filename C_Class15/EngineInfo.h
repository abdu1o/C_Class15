#include <string>

namespace engine
{
	class EngineInfo
	{
	private:
		std::string _model;
		int _displacement;
		double _power;
		std::string _fuel_type;
		std::string _manufacturer;

	public:

		EngineInfo(std::string model, int displacement, double power, 
				   std::string fuel_type, std::string manufacturer);

		std::string getModel() const;
		int getDisplace() const;
		double getPower() const;
		std::string getFuel() const;
		std::string getManufact() const;

	};

	void printEngineInfo(const EngineInfo& engine);
}

