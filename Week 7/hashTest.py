__author__ = 'Eli Sobylak'

import hashlib
import sys

password = '123'

print (hashlib.md5(password).hexdigest())
