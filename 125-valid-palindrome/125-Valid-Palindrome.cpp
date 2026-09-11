class Solution {
public:
    bool isPalindrome(string s) {
        std::string trash = R"( !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~)" "\t\n\r";
        std::string cleaned = "";

        for (int i = 0; i < s.size(); i++) {
           if (trash.find(s[i]) == std::string::npos) {
            cleaned += std::tolower(s[i]);
           }
        }

        std::string tmp = cleaned;
        std::string rev = "";
        
        while (tmp != "") {
            rev += tmp.back();
            tmp.pop_back();
        }
        
        if (rev == cleaned) {
            return true;
        }
        return false;
    }
};