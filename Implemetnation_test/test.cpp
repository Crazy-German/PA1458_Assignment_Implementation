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
					testingInteraction = new interactionType * [4]{ nullptr };
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

					testingInteraction[0] = new Taste();
					testingInteraction[1] = new Touch();
					testingInteraction[2] = new TurnOn();
					testingInteraction[3] = new TurnOff();
					currentInteraction = testingInteraction[0];

				}

				void TearDown() override {
					// Code here will be called immediately after each test (right
					// before the destructor).
				}

				
				// Class members declared here can be used by all tests in the test suite

				interactionType** testingInteraction;
				interactionType* currentInteraction;
				GameObject *test = new GameObject("Bert");
			};

			// Testar om man kan skriva ut en lista med interactions
			TEST_F(UnitTest, gameObjTest)
			{
				std::string tempString;
				for (int i = 0; i < 4; i++)
				{
					
					tempString += std::to_string(i + 1);
					tempString += ". ";
					tempString += testingInteraction[i]->getInteractionName();
					tempString += "\n";

				}
				
				EXPECT_STRCASEEQ(tempString.c_str(), test->listCurrentInteractionOptions().c_str());
			}

			//Testar currentInteraction om den returnar samma som testIninteraction
			TEST_F(UnitTest, startinteractionTest)
			{
				currentInteraction = testingInteraction[1];
				EXPECT_STRCASEEQ(currentInteraction->startInteraction().c_str(), testingInteraction[1]->startInteraction().c_str());
			}

			//Testar om man jämförelsen för setCurrentInteraction stämmer
			TEST_F(UnitTest, setcurrentInteraction)
			{
			
				std::string theOptions = "Touch";
				std::string expectedResult = "Was able to set current interaction to Touch";
				/*
				for (int i = 0; i < 4; i++)
				{
					if (theOptions == testingInteraction[i]->getInteractionName())
					{
						EXPECT_TRUE(theOptions == testingInteraction[i]->getInteractionName());
						//return "Was able to set current interaction to " + theOptions;
					}
					else
					{
						EXPECT_FALSE(theOptions == testingInteraction[i]->getInteractionName());
					}
				}
				*/
				EXPECT_STRCASEEQ(test->setCurrentInteractionOptions(theOptions).c_str(), expectedResult.c_str());
				//return "Couldnt set interaction option to " + theOptions;
			}

			TEST_F(UnitTest, setCurrentInteractionWrongOption)
			{
				std::string theOptions = "wrong option";
				std::string expectedResult = "Was able to set current interaction to wrong option";
				
				EXPECT_STRCASENE(test->setCurrentInteractionOptions(theOptions).c_str(), expectedResult.c_str());
			}

			TEST_F(UnitTest, wrongInteraction)
			{
				std::string temp = "wrong type";

				for (int i = 0; i < 4; i++)
				{
					EXPECT_FALSE(temp == testingInteraction[i]->getInteractionName());
				}

			}

			

		}  // namespace
	}  // namespace project
}  // namespace my

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}