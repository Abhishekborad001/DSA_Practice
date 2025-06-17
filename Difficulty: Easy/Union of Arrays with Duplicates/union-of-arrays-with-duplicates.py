class Solution:    
    def findUnion(self, a, b):
        st=set()
        for i in a:
            st.add(i)
        for j in b:
            st.add(j)
            
        return len(st)
            