def power_set(lst):
  if not lst:
    return [[]]
  result = power_set(lst[1:])
  return result + [subset + [lst[0]] for subset in result]
if __name__ == "__main__":
  lst = [1, 2, 3]
  print(power_set(lst))