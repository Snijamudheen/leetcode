# Python program that searches through a hashtable for a specific keyword. It further indicates the key's index position if key is found.

def hash_find(key, hashtable):
    if(hashtable[key % 10] == key):
        return ((key % 10) + 1)
    else:
        return None
    
hashtable = [None,None,None,None,None,None,None,None,None,None]
print("We created a hashtable of 10 positions: ")
print(hashtable)

L = [34,23,12,45,67,4,5]
print("The given list is ", L[::])

for i in range(0, len(L)):
    hashtable[L[i] % 10] = L[i]
print("The hashtable contents are: ")

for i in range(0, len(hashtable)):
    print("hashindex = ", i, "  ,value = ", hashtable[i])
    
key = int(input("Enter the number to be searched: "))
pos = hash_find(key, hashtable)

if pos is None:
    print("Number", key, " is not present in the hash table.")
else:
    print("Number", key, " is present in the hash table at position ", pos, ".")
