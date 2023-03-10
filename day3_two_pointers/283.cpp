#include "../utils.hpp"

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
		int	j = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != 0)
			{
				std::swap(nums[i], nums[j]);
				j++;
			}
		}
	}
};

/*
class Solution {
private:
	int	get_non_zero_from_back(std::vector<int>& nums, int front, int back)
	{
		if (front >= back)
		{
			back = front + 1;
		}
		else
		{
			back++;
		}

		for (; back < nums.size(); back++)
		{
			if (nums[back] != 0)
				break;
		}

		return back;
	}

public:
    void moveZeroes(std::vector<int>& nums) {
		std::vector<int>	flag(nums.size());
		int					front = 0;
		int					back = 0;

    	for (; front < nums.size(); front++)
    	{
			if (nums[front] == 0)
			{
				back = get_non_zero_from_back(nums, front, back);
				if (nums.size() > back)
				{
					nums[front] = nums[back];
					flag[back] = 1;
				}
			}
			else
			{
				if (flag[front] == 1)
				{
					back = get_non_zero_from_back(nums, front, back);
					if (nums.size() > back)
					{
						nums[front] = nums[back];
						flag[back] = 1;
					}
				}
			}
			if (nums.size() <= back)
			{
				nums[front] = 0;
			}
    	}
    }
};
*/

int	main()
{
	Solution sol;
	std::vector<int>	v;

	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(12);
	v.push_back(4);
	v.push_back(0);
	v.push_back(0);
	v.push_back(2);
	sol.moveZeroes(v);
	printData(v);
}
