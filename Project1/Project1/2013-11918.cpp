#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;

int main() {
	std::vector<int> list;
	int num;
	int tmp = 0;
	while (std::cin >> num)
	{
		//input
		list.push_back(num);
	}
	sort(list.begin(), list.end(),greater<int>());
	cout << "ordered array" << endl;
	for (auto i : list)
	{
		std::cout << i <<" ";
	}
	cout << endl;
		
}