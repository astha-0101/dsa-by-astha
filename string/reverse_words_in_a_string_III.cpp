class Solution {
public:
    string reverseWords(string s) {

        vector<string> arr;
        stringstream ss(s);
        string word;
        string newword = "";

        // Push each word into vector
        while (ss >> word) {
            arr.push_back(word);
        }

        // Reverse each word
        for (int i = 0; i < arr.size(); i++) {
            reverse(arr[i].begin(), arr[i].end());
        }

        // Combine words with spaces
        for (int i = 0; i < arr.size() - 1; i++) {
            newword += arr[i] + " ";
        }

        newword += arr[arr.size() - 1];

        return newword;
    }
};