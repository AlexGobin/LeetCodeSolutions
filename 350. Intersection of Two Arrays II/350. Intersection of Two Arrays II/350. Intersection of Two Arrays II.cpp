// 350. Intersection of Two Arrays II.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;

		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());

		auto i = nums1.begin();
		auto j = nums2.begin();

		while (i != nums1.end() && j != nums2.end()) {
			if (*i == *j) {
				ret.push_back(*i);
				++i;
				++j;
			}
			else if (*i < *j) {
				++i;
			}
			else {
				++j;
			}
		}

		return ret;
	}
};

int main()
{
    return 0;
}

