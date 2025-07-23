class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int ptr_g = 0 , ptr_s = 0;
        int count = 0;
        while( ptr_s < s.size() && ptr_g<g.size() ){

            if( s[ptr_s] >= g[ptr_g] ){
                count++;
                ptr_g++;
            }

            ptr_s++;
        }

        return count;
    }
};