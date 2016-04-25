
__author__ = 'Eli Sobylak'

# declare step counter as line and initilize at zero
line = 0

# see if it is ready to do the first line of the pattern
if line == 0:
    # we are saying that the image is six 'pixels' across
    for i in range(0,6):
        # if the index in the image pixels is at the beggining or the end
        # print a star
        if i == 0 or i == 5:
            print '*',
        # else, print a dash
        else:
            print '-',
    # increment
    line += 1
    print ' '
# repeat
if line == 1:
    for i in range(0,6):
        if i == 1 or i == 4:
            print '*',
        else:
            print '-',
    line += 1
    print ' '
# repeat
if line == 2:
    for i in range(0,6):
        if i == 2 or i == 3:
            print '*',
        else:
            print '-',