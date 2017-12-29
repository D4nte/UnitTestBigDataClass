#include <gmock/gmock.h>
#include "StinkyOldLegacyDataClass.hpp"

class MockStinkyOldLegacyDataClass: public StinkyOldLegacyDataClass
{
	public: 
		MOCK_CONST_METHOD0(getString, const std::string());
		MOCK_CONST_METHOD0(getInt, const int());

		// And so on, 50 more of those please
		// ...
};
