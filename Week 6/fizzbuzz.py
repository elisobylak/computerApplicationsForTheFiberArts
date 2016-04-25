__author__ = 'Eli Sobylak'


def fizzbuzz():
    for num in xrange(0,300):
        if num % 3 == 0 and num % 5 == 0:
            print 'fizzbuzz'
        elif num % 3 == 0:
            print 'fizz'
        elif num % 5 == 0:
            print 'buzz'

fizzbuzz()