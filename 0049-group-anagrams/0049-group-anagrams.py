class Solution(object):
    def groupAnagrams(self, strs):
        sorted_words=[]
        result=[]
        
        used=[False]*len(strs)
        for word in strs:
            sorted_words.append(''.join(sorted(word)))
        
        for i in range(len(sorted_words)):
            
            temp_res=[]
            if not used[i]:
                used[i]=1
                temp_res.append(strs[i])
            for j in range(i+1,len(sorted_words)):
               
                if sorted_words[i]==sorted_words[j] and not used[j]:
                    temp_res.append(strs[j])
                    used[j]=1
            if len(temp_res)>0:
                 result.append(temp_res)

        return result   


    
