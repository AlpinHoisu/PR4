import time

def calc(a=0, b=3, c=3, repCount=100000000):
    for i in range(1, repCount + 1):
        a += b * 2 + c - i
    return a

start = time.perf_counter()
res = calc()
end = time.perf_counter()
print(f"Вычисление заняло {end - start:0.4f} секунд")
print(f"Результат работы: {res}")
