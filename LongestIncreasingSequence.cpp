#include <iostream>
#include <iterator>

#include "LongestIncreasingSequence.h"

void LongestIncreasingSequence::printLongestIncreasingSequence(std::vector<int> a) {
	std::vector<int> helper, holder;
	
	for (int i = 0; i < a.size(); i++) {
		if (i == 0) {
			helper.push_back(a[0]);
			continue;
		}
		if (a[i] > a[i-1]) {
			helper.push_back(a[i]);
		}
		else {
			if (helper.size() > holder.size()) {
				holder.clear();
				holder.insert(holder.begin(), helper.begin(), helper.end());
			}
			helper.clear();
			helper.push_back(a[i]);
		}
		if (i == a.size() - 1) {
			if (helper.size() > holder.size()) {
				holder.clear();
				holder.insert(holder.begin(), helper.begin(), helper.end());
			}
			helper.clear();
		}
	}
	std::copy(holder.begin(), holder.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}