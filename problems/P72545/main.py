from yogi import read, tokens



for n in tokens(int):
    A: list[int] = [read(int) for _ in range(n)]
    m: int = read(int)
    B: list[int] = [read(int) for _ in range(m)]
    t: int = read(int)
    for _ in range(t):
            k: int = read(int)
            print(select(k, A, B))

