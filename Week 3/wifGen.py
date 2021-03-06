# Relably creates random weaves that can be processed directly by machine-weaving pyweave
# KNOWN ISSUES:
#   -Only has one tieup pattern hard-wired in, so the range of design is limited


# need random values for colors and number of warps and wefts
import random

import ProbWeave


# lots of print statements that print out the headers and whatnot
# then there is some filler lines that produce the actual information



def wifGen():

    file = open('testWIF.wif', 'w')

    file.write('[WIF]''\n')
    file.write('[COLOR TABLE]''\n')

    # assign color1 three random ints between 0 and 255
    file.write('1='+str(ProbWeave.pickColor().strip('()').replace(' ',''))+'\n')

    # assign color2 three random ints for its color
    file.write('2='+str(ProbWeave.pickColor().strip('()').replace(' ',''))+'\n')

    file.write('[WARP]''\n')
    # give a random amount of warp threads
    threads1 = random.randint(1,255)
    file.write('Threads='+str(threads1)+'\n')

    file.write('[WEFT]''\n')
    # give random amount of weft threads
    threads2 = random.randint(1,255)
    while threads2 < threads1:
        threads2 = random.randint(1,255)
    file.write('Threads='+str(threads2)+'\n')


    file.write('[TIEUP]''\n')
    harness1 = (random.randint(1,2),random.randint(1,2))
    file.write('1='+str(harness1).strip('()').replace(' ','')+'\n')
    harness2 = (random.randint(2,3),random.randint(2,3))
    file.write('2='+str(harness2).strip('()').replace(' ','')+'\n')
    harness3 = (random.randint(3,4),random.randint(3,4))
    file.write('3='+str(harness3).strip('()').replace(' ','')+'\n')
    harness4 = (random.randint(1,4),random.randint(1,4))
    file.write('4='+str(harness4).strip('()').replace(' ','')+'\n')

    # assign each thread in the warp to a tieup number
    file.write('[THREADING]''\n')
    for x in range(0, threads1, 2):
        file.write(str(x)+'='+str(random.randint(1,3))+'\n')
    for x in range(1, threads1, 2):
        file.write(str(x)+'='+str(random.randint(2,4))+'\n')

    # assign each thread in the weft to a tieup number
    file.write('[TREADLING]''\n')
    for x in range(0, threads2, 2):
        file.write(str(x)+'='+str(random.randint(1,3))+'\n')
    for x in range(1, threads2, 2):
        file.write(str(x)+'='+str(random.randint(2,4))+'\n')

    # assign warp threads to color1
    file.write('[WARP COLORS]''\n')
    for x in range(threads1):
        file.write(str(x)+'='+'1'+'\n')

    # assign weft threads to color 2
    file.write('[WEFT COLORS]''\n')
    for x in range(threads2):
        file.write(str(x)+'='+'2'+'\n')

    file.close()

#run the script
#wifGen()

