from yogi import scan, read

n = scan(int)
while n is not None:
    u = [read(float) for i in range(0, n)]
    v = [read(float) for i in range(0, n)]
    print("{0:.4f}".format(scalar_product(u, v)))
    n = scan(int)
