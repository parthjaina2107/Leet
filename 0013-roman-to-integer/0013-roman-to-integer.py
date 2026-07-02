class Solution:
    def romanToInt(self, s: str) -> int:
        dict1 = {'I':1,'V':5,'X':10,'L':50,'C':100,
                'D':500,'M':1000}

        num=0
        
        for i in range(len(s)):
            if(i>0 and dict1[s[i]]>dict1[s[i-1]]):
                num=num+(dict1[s[i]]-2*dict1[s[i-1]])
            
            else: 
                num=num+dict1[s[i]]
        
        return num