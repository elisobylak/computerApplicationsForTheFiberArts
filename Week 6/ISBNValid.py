__author__ = 'Eli Sobylak'

# import necessary ISBN library to look up on WoldCat.org and Google Books
import isbnlib

# create variable that takes in ISBN from user
isbnInput = raw_input('Please enter an ISBN number (w/o dashes) to check: ')

def valid():
    # create ten variables to store each number in the ISBN and multiply it by its position
    # for number validation
    firstNum = int(isbnInput[0]) * 10
    secondNum = int(isbnInput[1]) * 9
    thirdNum = int(isbnInput[2]) * 8
    fourthNum = int(isbnInput[3]) * 7
    fithNum = int(isbnInput[4]) * 6
    sixthNum = int(isbnInput[5]) * 5
    seventhNum = int(isbnInput[6]) * 4
    eigthNum = int(isbnInput[7]) * 3
    ninethNum = int(isbnInput[8]) * 2
    # sometimes, the last number in the ISBN is a Ten, which is written as an 'X'
    if isbnInput[9] == 'X':
        tenthNum = 10
    # otherwise, do the math
    else:
        tenthNum = int(isbnInput[9]) * 1

    # calculate the sum of all of the expanded numbers above and store as isbnSum
    isbnSum = firstNum + secondNum + thirdNum + fourthNum + fithNum\
              + sixthNum + seventhNum + eigthNum + ninethNum + tenthNum
    print ('The sum of the ISBN is: ' + str(isbnSum))

    # this is where we call the isbnlib method to_isbn13 which converts ISBN10 numbers
    # to ISBN13
    isbnFinal = isbnlib.to_isbn13(isbnInput)

    # this is where we check to see if the ISBN that the use entered is valid at all
    # or tell them that it's not
    if isbnSum % 11 == 0:
        print ('You entered a valid ISBN number')
        # this is where we call isbnlib's other function called meta()
        # parameters are the ISBN you wish to look up, the service you want to use to
        # look it up, and how much memory you want to allocate this information
        print (isbnlib.meta(isbnInput, service = 'merge', cache = 'default'))
    elif isbnSum % 11 != 0:
        print str(isbnFinal) + ' is not a valid ISBN number'

# run the script
valid()
