#include "MyFeature.hpp"
#include "MockMyDataClass.hpp"
#include "gtest/gtest.h"

using ::testing::Return;
using ::testing::NiceMock;

namespace
{
	TEST(MyFeatureTest, PrependFestiveWord)
	{
		NiceMock<MockMyDataClass> myMock;
		std::string strDef = "ho ho ho";

		ON_CALL(myMock, getString())
			.WillByDefault(Return(strDef));

		MyFeature myFeature;

		const std::string strReturned = myFeature.execute(myMock);

		ASSERT_EQ(strReturned, "Merry Christmas! ho ho ho");
	}
}
