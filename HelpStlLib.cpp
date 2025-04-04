#include <iostream>

#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

#include <algorithm>

using namespace std;

int main(){
	
	// Create //
	vector<int> vec = {10, 20, 15, 50, 30};
	list<int> list = {10, 20, 15, 50, 30};
	stack<int> stack;
	queue<int> queue;
	deque<int> deque = {10, 20, 15, 50, 30};
	set<int> set = {10, 20, 15, 50, 30};
	map<int, string> map = { {1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}, {5, "E"} }; // {key, val}
	
	// Access //
	vec.at(2); // (index)
	vec.front();
	vec.back();
	
	list.front();
	list.back();
	
	stack.top();
	
	queue.back();
	
	deque.at(2); // (index)
	deque.front();
	deque.back();
	
	set.begin();
	set.end();
	
	map.at(2); // (key)
	
	// Add //
	vec.push_back(35); // (val)
	vec.insert(vec.begin() + 2, 20); // (index, val)
	
	list.push_back(35); // (val)
	list.push_front(35); // (val)
	list.insert(list.begin(), 20); // (index, val)
	
	stack.push(35); // (val)
	
	queue.push(35); // (val)
	
	deque.push_back(35); // (val)
	deque.push_front(35); // (val)
	deque.insert(deque.begin() + 2, 20); // (index, val)
	
	set.insert(35);
	
	map.insert({6, "F"}); // ({key, val})
	
	// Remove //
	vec.pop_back();
	vec.erase(vec.begin() + 5); // (index)
	vec.clear();
	
	list.pop_back();
	list.pop_front();
	list.erase(list.begin()); // (index)
	list.clear();
	
	stack.pop();
	
	queue.pop();
	
	deque.pop_back();
	deque.pop_front();
	deque.erase(vec.begin() + 5); // (index)
	deque.clear();
	
	set.erase(20); // (val)
	set.clear();
	
	map.erase(5); // (key)
	map.clear();
	
	// Sort //
	sort(vec.begin(), vec.end());
	
	list.sort();

	// algorithm //
	find(vec.begin(), vec.end(), 3);
	min_element(vec.begin(), vec.end());
	max_element(vec.begin(), vec.end());
	
	return 0;
}
