#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3

def cat_hat(str):
    cat_count = str.count('cat')
    hat_count = str.count('hat')
    
    if cat_count == hat_count:
        return True
    else:
        return False



#{ 
 # Driver Code Starts.




def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str = input()
        print(cat_hat(str))
        testcases-=1
        


        print("~")
if __name__=='__main__':
    main()
# } Driver Code Ends