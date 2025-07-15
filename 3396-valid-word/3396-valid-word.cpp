class Solution {
public:
    bool isValid(string word) {
        bool vowel = false;
        bool conso = false;

        int n=word.size();
        if(n<3) return false;

        for(int i=0;i<n;i++){
            word[i] = tolower(word[i]);
            if(!isalnum(word[i])) return false; 
            
            if(isalpha(word[i])){
                if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
                vowel = true;
                }
                else{
                    conso = true;
                }
            }
          
        }

        if(vowel && conso ) return true;

        return false;
    }
};