def lcm(a,b):
    gcd, tmp = a,b
    while tmp != 0:
        gcd,tmp = tmp, gcd % tmp
    return a*b/gcd
