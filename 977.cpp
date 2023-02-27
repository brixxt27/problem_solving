#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
#include <cmath>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int                 left = 0;
        int                 right = nums.size() - 1;
        std::array<int, 2>  arr; 
        std::vector<int>    ret;
        //std::vector<int>    ret(nums.size());
		int					i = right;
		
        ret.reserve(nums.size());

		while (left <= right)
		{
			arr[0] = std::pow(nums[left], 2);
			arr[1] = std::pow(nums[right], 2);
			if (arr[0] < arr[1])
			{
				ret[i] = arr[1];
				right--;
			}
			else
			{
				ret[i] = arr[0];
				left++;
			}
			i--;
		}
        return ret;
    }
};

int	main()
{
	Solution	sol;
	std::vector<int>	v;
	std::vector<int>	v1;

//[-4,-1,0,3,10]
	v.push_back(-4);
	v.push_back(-1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(10);
	v1 = sol.sortedSquares(v);

	for (size_t i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << ", ";
	}
	std::cout << std::endl;
}
