#include <iostream>
#include <iterator>

#include "LongestIncreasingNegativeSequence.h"

void LongestIncreasingNegativeSequence::longestIncreasingNegativeSequence(std::vector<int> a) {
	std::vector<int> helper, holder;
	for (int i = 0; i < a.size(); i++) {
		if (i == 0 && a[i] < 0) {
			helper.push_back(a[i]);
			continue;
		}
		if (i == 0 && a[i] >= 0) {
			continue;
		}
		if (a[i] < 0 && a[i] >= a[i-1]) {
			helper.push_back(a[i]);
		}
		else {
			if (holder.size() < helper.size()) {
				holder.clear();
				holder.insert(holder.begin(), helper.begin(), helper.end());
			}
			helper.clear();
			if (a[i] < 0) {
				helper.push_back(a[i]);
			}
		}
		if (i == a.size() - 1) {
			if (holder.size() < helper.size()) {
				holder.clear();
				holder.insert(holder.begin(), helper.begin(), helper.end());
			}
			helper.clear();
		}
	}
	std::copy(holder.begin(), holder.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}