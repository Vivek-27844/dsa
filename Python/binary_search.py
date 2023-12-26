def binsearch(arr, key):
    l = len(arr)
    low = 0
    high = l-1
    while low <= high:
        mid = (low+high)//2
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            high = mid-1
        else:
            low = mid+1
    return -1

arr = [1,2,3,4]
print(binsearch(arr,4))
