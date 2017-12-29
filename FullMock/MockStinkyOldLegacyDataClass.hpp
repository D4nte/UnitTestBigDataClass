#include <gmock/gmock.h>
#include "MyDataClass.hpp"

class MockMyDataClass: public MyDataClass
{
	public: 
		MOCK_CONST_METHOD0(getString, const std::string());
		MOCK_CONST_METHOD0(getInt, const int());

		// And so on, 50 more of those please
		// ...
};
