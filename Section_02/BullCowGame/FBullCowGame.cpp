#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() {
	Reset();
}

int FBullCowGame::GetMaxTries() const {
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const {
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const {
	return false;
}

void FBullCowGame::Reset() {
	constexpr int MAX_TRIES = 8;
	int MyMaxTries = MAX_TRIES;
	int MyCurrentTry = 1;
	return;
}

bool FBullCowGame::CheckValidGuess(std::string) {
	return false;
}