class Solution {
    /**
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        const Parentheses = {
            '(' : ')',
            '{':'}',
            '[':']'
        }
        let stack = [];

        for(let i of s){
            if(i in Parentheses){
                stack.push(i);
            }else{
                if (stack.length === 0 ) return false;

                let e =  stack.pop();
                if (Parentheses[e] !== i){
                    return false;
                }
            }
        }
        return stack.length === 0;
    }
}
