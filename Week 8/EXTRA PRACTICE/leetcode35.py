# problem link >>  https://leetcode.com/problems/search-insert-position/

class Solution:
    def searchInsert(self, List, target) :
        n = len(List)-1
        l=1
        h=n-1
        res=-1
        if len(List)==2:
           if target>List[0] and target<List[1]:return 1
        if n==0:
            if target>List[0]:
                res=1
            else: res=0
        else:
            f=List[0]
            ls = List[n]
            if target<=f:res=0
            elif target==ls:res=n
            elif target>ls:res=n+1
        if n>1 and res==-1:
            while l<=h:
                mid = int((l+h)/2)
                now = List[mid]
                if now==target:
                    res=mid
                    break
                elif now>target:
                    if List[mid-1]<target:
                        res = mid
                    h=mid-1
                elif now<target:
                    if List[mid+1]>target:
                        res =mid+1
                    l=mid+1
        return res    