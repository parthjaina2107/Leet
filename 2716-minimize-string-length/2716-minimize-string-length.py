class Solution:
    def minimizedStringLength(self, s: str) -> int:
        size = len(s)
        i=0
        while i < size:
            j=i+1
            while j < size :
                if(s[i]==s[j]):
                    s=s[:j]+s[j+1:]
                    size=len(s)
                else : 
                    j+=1
            i+=1
        return len(s)