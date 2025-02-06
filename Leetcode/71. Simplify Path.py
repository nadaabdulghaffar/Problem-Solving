class Solution(object):
    def simplifyPath(self, path):
        """
        Time complexity: O(n)
        Space complexity:O(n)
        :type path: str
        :rtype: str
        """
        newpath = path.split('/')
        stack = []
        for element in newpath:
            if (element == '..'):
                if stack:
                    stack.pop()
            elif element == '.' or not element:
                continue
            else:
                stack.append(element)

        return '/' + '/'.join(stack)

