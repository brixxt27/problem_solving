#include "../utils.hpp"

class Solution
{
public:
    void moveZeroes(std::vector<int>& nums)
	{
		int cnt_i = -1;
		int cnt_zero = 0;

		//d : 0
		//d : 1
		//d : 0
		//d : 3
		//d : 12
		for (auto &d : nums)
			if (d)
				nums[++cnt_i] = d;
		//for (; cnt_i > -1; )
		//cnt_zero = nums.size() - cnt_i;
		int end(nums.size() - 1);

		std::cout << "end: " << end << std::endl;
		std::cout << "cnt_i: " << cnt_i << std::endl;
		for (auto &s : nums) // d == "abcd", "efg", "hijk"
		{
			if (cnt_i == -1)
				break;
			nums[end - --cnt_i] = 0;
		}
		char a = 'c';
		int d = 12;
		cout << 
	}
};



int	main()
{
	Solution sol;
	std::vector<int>	v;

	//v.push_back(0);
	v.push_back(1);
	//v.push_back(0);
	//v.push_back(3);
	//v.push_back(12);
	sol.moveZeroes(v);
	printData(v);
}
