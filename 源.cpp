#include<iostream>
#include<map>
#include<vector>
using namespace std;
	//回文数
bool isPalindrome(int x) {
	if (x < 0 || (x % 10 == 0 && x != 0)) {
		return false;
	}
	int tempNum = 0;
	while (x > tempNum) {
		tempNum = tempNum * 10 + x % 10;
		x /= 10;
	}
	return x == tempNum || x == tempNum / 10;
}

	//两数相加
vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int>hash;
	for (int i = 0; i < nums.size(); ++i) {
		if (hash.find(target-nums[i]) != hash.end()) {
			hash[nums[i]] = i;
		}
		else {
			return { i,hash[target - nums[i]] };
		}
	}
	return {};
}
	//罗马数字
map<char, int>symbolValue{
		{'I',1},
		{'V',5},
		{'X',10},
		{'L',50},
		{'C',100},
		{'D',500},
		{'M',1000},

};
int romanToInt(string s) {
	int sum = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (i != s.size() - 1 && symbolValue[s[i]] < symbolValue[s[i + 1]]) {
			sum -= symbolValue[s[i]];
		}
		else {
			sum += symbolValue[s[i]];
		}
	}
	return sum;
}
//最后一个单词的长度
int lengthOfLastWord(string s) {
	int maxlen = 0;
	bool isBegain = true;
	for (int i = s.size() - 1; i >= 0; --i) {
		if (!isBegain && s[i] == ' ') break;
		if (s[i] != ' ') {
			isBegain = false;
			maxlen++;
		}
	}
	return maxlen;
}
int main() {
	

	return 0;
}