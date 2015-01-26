#include <iostream>
#include <vector>

#include "LongestPositiveSequence.h"
#include "LongestNegativeSequence.h"
#include "LongestIncreasingSequence.h"
#include "LongestIncreasingPositiveSequence.h"
#include "LongestIncreasingNegativeSequence.h"

int main() {
	
	std::vector<int> a = { 1, 2, 3, -5, -6, -5, -4, -3, -2, -1, 4, 5, 2, 5 };

	LongestPositiveSequence lps;
	lps.longestPositiveSequence(a);

	LongestNegativeSequence lns;
	lns.longestNegativeSequence(a);

	LongestIncreasingSequence lis;
	lis.printLongestIncreasingSequence(a);

	LongestIncreasingPositiveSequence lips;
	lips.longestIncreasingPositiveSequence(a);

	LongestIncreasingNegativeSequence lins;
	lins.longestIncreasingNegativeSequence(a);

	system("PAUSE");
}