class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;


        unordered_map<char , int> umap;

        for(char c : s){
            umap[c]++;
        }

        for(char i : t){
            if(umap.find(i) == umap.end()) return false;

            if(umap[i] <= 0) return false;

            umap[i]--;
        }


        return true;



        
    }
};