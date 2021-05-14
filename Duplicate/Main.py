def duplicate(arr):
  iter = 0
  for i in range(len(arr)):
    if arr[abs(arr[i])] < 0:
      return abs(arr[i])
    else:
      arr[abs(arr[i])] = 
def main():
  arr = [2, 1, 4, 3, 4, 5]
  print("The duplicate element is:", duplicate(arr))

if __name__ == "__main__":
  main()