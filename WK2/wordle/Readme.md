DINU ALEXANDRU 17 LICEUL TEORETIC OVIDIUS CONSTANTA alexandrudinu04@gmail.com
# readme
This is a word game called "WORDLE" where the user is given a certain number of tries to guess a hidden word of a given length. The user is given feedback on each guess indicating which letters are correct and in the correct position (EXACT), correct but in the wrong position (CLOSE), or incorrect (WRONG). The user wins the game if they correctly guess the hidden word within the allotted number of tries.
# how is suposed to work
The program calculates the score for the guess by comparing each letter of the guess to the corresponding letter of the chosen word. If a letter in the guess is in the correct position and is the correct letter, the score for that letter is set to EXACT. If a letter in the guess is in the correct position but is the incorrect letter, the score for that letter is set to CLOSE. If a letter in the guess is in the wrong position and is the incorrect letter, the score for that letter is set to WRONG.

The program then prints the guess along with feedback on the guess's score. The feedback is displayed by printing each letter of the guess in a colored box, with the color of the box indicating the score for that letter. If the score for a letter is EXACT, the box is printed in green. If the score for a letter is CLOSE, the box is printed in yellow. If the score for a letter is WRONG, the box is printed in red.

If the score for the guess is equal to the size of the word times EXACT, the user has won the game and the program terminates. If the user runs out of guesses without guessing the word correctly, the program declares the user as having lost the game.
