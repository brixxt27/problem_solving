#include "../utils.hpp"

class Solution
{
public:
	std::string	reverseWords(std::string s) {
		int	start = 0;
		int	end = 0;
		int	flag_start = 0;

		for (; end < s.size(); end++)
		{
			if (s[end] == ' ')
			{
				flag_start = 1;
				continue;
			}
			if (flag_start == 1)
			{
				start = end;
				flag_start = 0;
			}
			if (s[end + 1] == ' ' || s[end + 1] == '\0')
			{
				for (int j = 0; j <= (end - start) / 2; j++)
					std::swap(s[start + j], s[end - j]);
			}
		}
		return s;
	}

};

int	main()
{
	std::string	s("Let's take LeetCode contest");
	Solution sol;

	std::string str = sol.reverseWords(s);
	printData(str);
}
