#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
#include <cmath>
#include <stdlib.h>


class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int                 left = 0;
        int                 right = nums.size() - 1;
        std::array<int, 2>  arr; 
        std::vector<int>    ret;
        //std::vector<int>    ret(nums.size());
		int					i = right;

        ret.reserve(nums.size() + 100000);
		//int *a;
		//a = (int *)malloc(sizeof(int) * 1);
		//*a = 10;

		while (left <= right)
		{
			arr[0] = std::pow(nums[left], 2);
			arr[1] = std::pow(nums[right], 2);
			if (arr[0] < arr[1])
			{
				ret[i] = arr[0];
				//ret.push_back(arr[0]);
				right--;
			}
			else
			{
				ret[i] = arr[1];
				//ret.push_back(arr[1]);
				left++;
			}
			std::cout << &ret[i] << "  " << ret[i] << std::endl;
			i--;
		}
		for (size_t i = 0; i < ret.size(); i++)
		{
			std::cout << &ret[i] << " 1 " << ret[i] << std::endl;
		}
        return ret;
    }
};

int	main()
{
	Solution	sol;
	std::vector<int>	v;

//[-4,-1,0,3,10]
	v.push_back(-4);
	v.push_back(-1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(10);
	std::vector<int>	v1 = sol.sortedSquares(v);

	std::cout << v1.capacity() << " cap " << std::endl;
	for (size_t i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << ", ";
	}
	std::cout << std::endl;
}
