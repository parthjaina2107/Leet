class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        s=list(ransomNote)
        t=list(magazine)
        cnt=0
        for i in s:
            if(i in t):
                cnt=1
                t.remove(i)
            else: return False   

        if(cnt==1): return True