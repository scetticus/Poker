#pragma once

#include <iostream>

class StatTracker
{
public:
	struct Stats { int playerMoney; int playerWins; int dealerWins; int totalGames; int totalPushes; };
	static Stats trackedStats;

	StatTracker();
	static void printStats();
	~StatTracker();
};