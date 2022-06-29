class Solution {
public:
    double average(vector<int>& salary) {
	int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<salary.size(); i++)
    {
        if(salary[i] > max)
            max = salary[i];
        if(salary[i] < min)
            min = salary[i];
    }
    double sum = 0;
    double ans = 0;
    for(int i=0; i<salary.size(); i++)
    {
        if(salary[i] != max && salary[i] != min)
            sum = sum + salary[i];
    }
    
    ans = sum/(salary.size()-2);
    return ans;
    }
};