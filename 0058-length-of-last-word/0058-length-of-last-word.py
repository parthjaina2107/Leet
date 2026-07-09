class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        count=0
        if(" " not in s): return len(s)
        
        else :
            for i in range(0,len(s)):
                if(s[i]==" "):
                    count=i     
            return  len(s)-count-1
            
        