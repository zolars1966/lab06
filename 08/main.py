a = "Hello world"
b = a
c = a[:]

print("a:", a, id(a))
print("b = a:", b, id(b))
print("c = a[:]:", c, id(c))

print("a и b — один объект:", a is b)
print("a и c — один объект:", a is c)