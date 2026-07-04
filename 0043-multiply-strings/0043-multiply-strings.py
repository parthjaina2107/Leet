class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        num_dict = { "0":0,
                     "1": 1,
                      "2": 2,
                      "3": 3,
                      "4": 4,
                      "5": 5,
                      "6": 6,
                      "7": 7,
                      "8": 8,
                      "9": 9,
                      "10": 10
                      }
        num_1=0
        num_2=0              
        for i in num1:
            num_1=num_1*10+num_dict[i]
        
        for i in num2:
            num_2=num_2*10+num_dict[i]
        
        return str(num_1*num_2)