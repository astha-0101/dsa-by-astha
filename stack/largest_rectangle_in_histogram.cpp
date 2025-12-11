class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector <int> right(n,0);
        vector <int> left(n,0);
        stack<int> s;
        //for right smallest
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i]=s.empty()?n:s.top();//here we have to use n instead of -1
            s.push(i);
        }
        //there is a poss that elements are still left
        //we will pop out remaining elem
        while(!s.empty()){
            s.pop();
        }
        //for left smallest 
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            left[i]=s.empty()?-1:s.top(); 
            s.push(i);
        }

        //now we will calculate ans using right and left smallest
        int area=0;
        for(int i=0;i<n;i++){
            int currt_area=heights[i]*(right[i]-left[i]-1);
            area=max(area,currt_area);
        }
        return area;
        
    }
};