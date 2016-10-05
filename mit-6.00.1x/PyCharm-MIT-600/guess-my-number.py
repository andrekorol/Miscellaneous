print("Please think of a number between 0 and 100!")

low = 0

high = 100

while True:
    my_guess = (high + low) / 2
    print("Is your secret number %d?" % my_guess)
    ans = input("Enter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low. Enter "
                "'c' to indicate I guessed correctly.")
    if ans == 'h':
        high = my_guess

    elif ans == 'l':
        low = my_guess

    elif ans == 'c':
        break

    else:
        print("Sorry, I did not understand your input.")

print("Game over. Your secret number was: %d" % my_guess)
