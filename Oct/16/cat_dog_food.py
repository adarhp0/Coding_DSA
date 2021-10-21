tes = int(input())
for t in range(tes):
    n, d, c, m = map(int, input().split(' '))
    s = input()
    dfl = -1
    d_lef = s.count('D')
    n = len(s)
    if d == 0:
        dfl = 1
    elif c == 0 and d >= n:
        dfl = 1
    elif c == 0 and d < n:
        dfl = -1
    else:
        for i in range(n):
            if s[i] == 'C':
                if c > 0:
                    c = c-1
                elif c == 0 and d_lef == 0:
                    dfl = 1
                elif c == 0 and d_lef > 0:
                    dfl = -1
                    break
            else:
                # now dog is in queue
                if d > 0:
                    d = d-1
                    d_lef = d_lef-1
                    c = c+m
                else:
                    dfl = -1
    if dfl == 1:
        print("Case #"+str(t+1)+': YES')
    elif d_lef == 0:
        print("Case #"+str(t+1)+': YES')
    else:
        print("Case #"+str(t+1)+': NO')
