#include "MyNewFeature.hpp"
#include "MockStinkyOldLegacyDataClass.hpp"
#include "gtest/gtest.h"

using ::testing::Return;
using ::testing::NiceMock;

namespace
{
	TEST(MyNewFeatureTest, PrependFestiveWord)
	{
		NiceMock<MockStinkyOldLegacyDataClass> myMock;
		std::string strDef = "ho ho ho";

		ON_CALL(myMock, getString())
			.WillByDefault(Return(strDef));

		MyNewFeature myFeature;

		const std::string strReturned = myFeature.execute(myMock);

		ASSERT_EQ(strReturned, "Merry Christmas! ho ho ho");
	}
}
