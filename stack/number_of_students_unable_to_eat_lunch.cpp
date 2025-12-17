class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count1=0,count0=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==1)
            count1++;
            else
            count0++;
        }
        
         for (int i = 0; i < sandwiches.size(); i++) {
            if (sandwiches[i] == 1) {
                if (count1 == 0) break;  // nobody wants 1
                count1--;
            } else {
                if (count0 == 0) break;  // nobody wants 0
                count0--;
            }
        }int count=count1+count0;
        return count;
    }
};