#include "MyFeature.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::Return;
using ::testing::NiceMock;

struct MockMyFeature: public MyFeatureAbstract
{
    MOCK_CONST_METHOD0(getDataString, const std::string());
};

namespace
{
	TEST(MyFeatureTest, PrependFestiveWord)
	{
		NiceMock<MockMyFeature> myFeature;
		std::string strDef = "ho ho ho";

		ON_CALL(myFeature, getDataString())
			.WillByDefault(Return(strDef));

		const std::string strReturned = myFeature.execute();

		ASSERT_EQ(strReturned, "Merry Christmas! ho ho ho");
	}
}
