a = [ [ [ 1, 2 ],
        [ 3, 4 ] ],
      [ [ 5, 6, 7 ],
        [ 8, 9 ] ],
      [ [ 10 ] ] ]

for i in xrange(len(a)):
    for j in xrange(len(a[i])):
        for k in xrange(len(a[i][j])):
            print "a[%d][%d][%d] = %d" % (i, j, k, a[i][j][k])