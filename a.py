
with open('readme.md', 'r') as f:
    lines = f.readlines()
    with open('readme.out', 'w') as f:
        cnt = 1
        for line in lines:
            x = str(cnt) + ' ' + line
            f.write(x)
            cnt += 1