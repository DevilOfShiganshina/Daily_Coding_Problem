def fixed_point(arr):
  start = 0
  end = len(arr) - 1
  l = 0
  while start <= end:
    mid = (start + end) // 2
    if arr[mid] == mid:
      return mid
    elif arr[mid] < mid:
      start = mid + 1
    else:
      end = mid - 1
  return -1

if __name__ == "__main__":
  arr = [-6, 0, 2, 40]
  index = fixed_point(arr)
  if index > -1:
    print("The fixed point is:", index)
  else:
    print("List contains no fixed point!")