def min_num_coins(n):
  coins = [25, 10, 5, 1]
  retval = 0
  i = 0
  
  while (n):
    temp = n // coins[i]
    n = n - (coins[i] * temp)
    retval += temp
    i += 1
  
  return retval

# Program driver
if __name__ == "__main__":
  n = int(input("Enter N: "))

  total = 0
  
  if n <= 0:
    exit(0)

  elif n < 5:
    total = n;
  
  else:
    total = min_num_coins(n)

  print(total)