
class Solution:

    def reverseVowels(self, s: str) -> str:
        vowels = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"}
        begin_index=0
        end_index=len(s)-1
        s = list(s)
        while(begin_index <= end_index):
            if(s[begin_index] in vowels and s[end_index] in vowels):
                s[begin_index], s[end_index] = s[end_index], s[begin_index]
                end_index -= 1
                begin_index += 1
            elif s[begin_index] in vowels:
                end_index -= 1
            else:
                begin_index += 1
                
        return ''.join(s)
