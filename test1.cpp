#include <string>
#include <vector>
#include <sstream> // stringstream
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    string token = "";
    vector<int> v;
    int min, max;
    
    // stringstream 사용
    for(stringstream ss(s); (ss >> token); ) {
        v.push_back(stoi(token));
    }
    
    // algorithm에서 제공하는 최대, 최소 찾는 함수
    min = *min_element(v.begin(), v.end());
    max = *max_element(v.begin(), v.end());
    answer = to_string(min) + " " + to_string(max);
    
    return answer;
}