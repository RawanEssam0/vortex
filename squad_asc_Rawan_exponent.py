def raise_power(base,pow):
    result =1
    for index in range (int(pow)):
        result *= int(base) 
    return result
base = input("Enter base: ")
pow = input("Enter power: ")
print ("Result =" ,raise_power(base ,pow))