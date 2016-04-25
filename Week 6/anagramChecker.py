__author__ = 'Eli Sobylak'


def anaCheck():
    word = raw_input("Enter a word to check if it's an anagram: ")
    wordSort = ''.join(sorted(word))

    scramble = raw_input("Enter a set of letters to check against: ")
    scrambleSort = ''.join(sorted(scramble))

    if scrambleSort == wordSort:
        print 'This is an anagram!'
    else:
        print 'What you entered is not an anagram'

anaCheck()
