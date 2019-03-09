#pragma once
#include <string>

using int32 = int;
using FString = std::string;

// all values initialize to 0
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;

};

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make more rich return val.
	bool CheckGuessValidity(FString); //TODO make more rich return val.
	FBullCowCount SubmitGuess(FString);

private:

	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};