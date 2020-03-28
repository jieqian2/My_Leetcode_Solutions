class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0
        if(len(flowerbed)==0):
            return False
        if(len(flowerbed)==1 and flowerbed[0]==0 and n<=1):
            return True
        for i in range(0, len(flowerbed)):
            if((flowerbed[i]==0 and i==0 and flowerbed[i+1]==0) 
              or (flowerbed[i]==0 and i==len(flowerbed)-1 and flowerbed[i-1]==0)
              or (flowerbed[i]==0 and flowerbed[i-1]==0 and flowerbed[i+1]==0)):
                flowerbed[i]=1
                count+=1
        
        return count >= n
