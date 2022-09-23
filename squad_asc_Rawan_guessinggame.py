secret_word = "sea"
guess =""
count =3
while guess != secret_word and count != 0:
    print("You have",count,"guesses")
    guess = input("Enter a word: ")
    count -=1
if guess == secret_word: 
    print("CONGRATULATIONS, YOU WIN !")
else:
     print("Out of guesses, YOU LOSE!")    