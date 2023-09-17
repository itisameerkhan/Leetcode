class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        n1 = int(num1)
        n2 = int(num2)

        return str(n1*n2)

num1 = "123"
num2 =  "100"

sol = Solution()
result = sol.multiply(num1,num2)
print(result)