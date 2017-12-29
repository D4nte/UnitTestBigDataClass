#include "MyNewFeature.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::Return;
using ::testing::NiceMock;

struct MockMyNewFeature: public MyNewFeatureAbstract
{
    MOCK_CONST_METHOD0(getDataString, const std::string());
};

namespace
{
	TEST(MyNewFeatureTest, PrependFestiveWord)
	{
		NiceMock<MockMyNewFeature> myFeature;
		std::string strDef = "ho ho ho";

		ON_CALL(myFeature, getDataString())
			.WillByDefault(Return(strDef));

		const std::string strReturned = myFeature.greet();

		ASSERT_EQ(strReturned, "Merry Christmas! ho ho ho");
	}
}
