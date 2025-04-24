//LeedCode 38. Count and Say //计硈尿瞷碞家ラRLEよ猭"絪絏"Θ"计ダ"Α
class Solution {
public:
    string countAndSay(int n) {
        if (n==1) return"1";
        string prev = countAndSay(n-1); // ㄧΑ㊣ㄧΑ
        string ans = "";
        char prevC = prev[0]; // 玡ダ
        int prevN = 1; // 玡ダ仓縩瞷碭Ω
        for (int i = 1; i < prev.length();i++ ){
            if(prevC == prev[i]) prevN++; // 碞+1
            else{
                ans += string(to_string(prevN)) + prevC; // 瞷碭Ω+ダ(癳ぇ玡仓縩ダ)
                prevC = prev[i]; // 穝ダ
                prevN = 1; // 眖1秨﹍(穝ダΤ1)
            }
        }
        ans += string(to_string(prevN)) + prevC; // 程掸璶癳
        return ans;
    }
};
