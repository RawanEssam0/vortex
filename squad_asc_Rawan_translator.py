def translate(phrase):
    translation =""
    for letter in phrase :
        if letter in "AEIOUaeiou":
            translation += "V"
        else:
            translation +=  letter.lower()
    return translation
print(translate(input("Enter phrase: ")))