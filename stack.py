def opPush(oddNumbers, element):
    oddNumbers.append(element)
    
def display(oddNumbers):

    x = len(oddNumbers)
    print("Current elements of the stack are: ")
    
    for i in range(x - 1, -1, -1):
        print(oddNumbers[i])

oddNumbers = list()
size = 0

while (size <= 5):
    element = int(input("Enter any three integers: ")) 
    
    if element % 2 != 0:
        opPush(oddNumbers, element)
    size = size + 1
        
display(oddNumbers)
