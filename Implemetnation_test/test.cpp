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
					interactionOptions = new std::string *[4]{ nullptr };
					testingInteraction = new interactionType * [2]{ nullptr };
					currentInteraction = nullptr;

				}

				~UnitTest() override {
					// You can do clean-up work that doesn't throw exceptions here.
					
				}

				// If the constructor and destructor are not enough for setting up
				// and cleaning up each test, you can define the following methods:

				void SetUp() override {
					// Code here will be called immediately after the constructor (right
					// before each test).
					interactionOptions[0] = new std::string("Greet");
					interactionOptions[1] = new std::string("Goodbye");
					interactionOptions[2] = new std::string("Salute");
					interactionOptions[3] = new std::string("Fight");

					testingInteraction[0] = new Taste();
					testingInteraction[1] = new Touch();
					currentInteraction = testingInteraction[1];

				}

				void TearDown() override {
					// Code here will be called immediately after each test (right
					// before the destructor).
				}

				
				// Class members declared here can be used by all tests in the test suite
				std::string** interactionOptions;
				interactionType** testingInteraction;
				interactionType* currentInteraction;
				GameObject *test = new GameObject("Bert");
			};

			// Tests something
			TEST_F(UnitTest, gameObjTest)
			{
				std::string tempString;
				for (int i = 0; i < 2; i++)
				{
					
					tempString += std::to_string(i + 1);
					tempString += ". ";
					tempString += testingInteraction[i]->startInteraction();
					tempString += "\n";

				}
				EXPECT_STRCASEEQ(tempString.c_str(), test->listCurrentInteractionOptions().c_str());
			}

			//Testar currentInteraction om den returnar samma som testIninteraction
			TEST_F(UnitTest, startinteractionTest)
			{
				EXPECT_STRCASEEQ(currentInteraction->startInteraction().c_str(), testingInteraction[1]->startInteraction().c_str());
			}

			

		}  // namespace
	}  // namespace project
}  // namespace my

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}