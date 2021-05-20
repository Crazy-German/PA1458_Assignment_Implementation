#include "pch.h"
#include "../Implementation_lib/GameObject.h"
#include "../Implementation_lib/GameObject.cpp"


namespace my {
	namespace project {
		namespace {

			// The fixture for testing class Foo.
			class UnitTest : public ::testing::Test {
			protected:
				// You can remove any or all of the following functions if their bodies would
				// be empty.

				UnitTest()
				{
					// You can do set-up work for each test here.
				}

				~UnitTest() override {
					// You can do clean-up work that doesn't throw exceptions here.
					
				}

				// If the constructor and destructor are not enough for setting up
				// and cleaning up each test, you can define the following methods:

				void SetUp() override {
					// Code here will be called immediately after the constructor (right
					// before each test).
					interactionOptions = new std::string * [4]{ nullptr };
					interactionOptions[0] = new std::string("Greet");
					interactionOptions[1] = new std::string("Goodbye");
					interactionOptions[2] = new std::string("Salute");
					interactionOptions[3] = new std::string("Fight");

				}

				void TearDown() override {
					// Code here will be called immediately after each test (right
					// before the destructor).
				}

				
				// Class members declared here can be used by all tests in the test suite
				std::string** interactionOptions;
				GameObject test;;
			};

			// Tests something
			TEST_F(UnitTest, gameObjTest)
			{
				std::string tempString;
				for (int i = 0; i < 4; i++)
				{
					
					tempString += std::to_string(i + 1);
					tempString += ". ";
					tempString += *interactionOptions[i];
					tempString += "\n";

				}
				EXPECT_STRCASEEQ(tempString.c_str(), test.listCurrentInteractionOptions().c_str());
			}

			

		}  // namespace
	}  // namespace project
}  // namespace my

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}