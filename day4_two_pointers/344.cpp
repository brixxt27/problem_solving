#include "utils.hpp"

class Solution {
public:
    void reverseString(std::vector<char>& s) {
		char									tmp;
		typename std::vector<char>::size_type	sSize = s.size();

    	//for (int i = 0; i < sSize / 2; i++) 
		while (1)
		{
			if (i >= sSize / 2)
				break;
			tmp = s[i];
			s[i] = s[sSize - 1 - i];
			s[sSize - 1 - i] = tmp;
		}
    }
};

int	main()
{
	Solution sol;
	std::vector<char>	v;

	v.push_back('h');
	v.push_back('e');
	v.push_back('l');
	v.push_back('l');
	v.push_back('o');
	v.push_back('\n');
	sol.reverseString(v);
	printData(v);
}
