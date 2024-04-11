# read from all cpp file from current folder, write it to readme.out

import os

str = ""
for file in os.listdir('.'):
    if file.endswith('.cpp'):
        with open(file, 'r') as f:
            str += f.read()
            str += '\n'

with open('readme.out', 'w') as f:
    f.write(str)