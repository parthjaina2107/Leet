class Solution:
    def addDigits(self, num: int) -> int:
        while(num>=10):
            sum1=0
            while(num>0):
                lastnum=num%10
                lastsum = num
                sum1=sum1+lastnum
                num=int(num/10)
            num = sum1
            
        return num