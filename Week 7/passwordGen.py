__author__ = 'Eli Sobylak'

import random
import string
import hashlib
import sys

password = '7f4b0dd313980da816652fb35b9675f7'
file = open('PWBANK.txt', 'w')




def main():

    input = raw_input('new password, password lookup, or password delete? ')
    if input == 'new password':
        passwordGen()
    elif input == 'password lookup':
        passwordLU()
    else:
        print 'choose another option'

    sys.exit(0)


def passwordLU():
    file = open('PWBANK.txt', 'r')
    searchPhrase = raw_input('what wesite do you need the PW for? ')
    for line in file:
        if searchPhrase in line:
            print line
    #file.close()


def passwordGen():

    passwordInput = raw_input('Enter the name of the website you need a password for: ')

    siteName = passwordInput.split('.')[0]

    alphaRan = random.choice(string.letters)

    numRan = random.randint(0,9)

    passwordOutput = (alphaRan + str(numRan) + siteName[-3] + siteName[-2] + siteName[-1] + '1212')

    print ('Your new password for ' + passwordInput + ' is: ' + passwordOutput)

    file.write(passwordInput+ ' password is ' + passwordOutput)



while True:
    input = raw_input('Enter password: ')
    if hashlib.md5(input).hexdigest() == password:
        print 'welcome to passwordGen'
        main()
    else:
        print 'wrong password'