'''
import types
a=100
b=a
print(id(a)==id(b))
print (a is b)
a = 100
print (type(a) == type(100))
a = 100
print (type(a) == types.IntType)
a = []
print(isinstance(a, list))
a = 100
print (isinstance(a, type(100)))
'''
# x=1
# y=-1
# if x > 0:
# 	if y > 0:
# 		print ('x and y > 0')
# else:
# 	print ('x <= 0')
# def Add(x, y=9):
# 	return x + y
#
# Add(1, 2)
# Add('hello', 'world')
# print(type(Add([1, 2], [3, 4])))
# a = [1, 3, 4, 2]
# print( sorted(a, reverse=False))
# def Log(prefix, *data):
# 	print(prefix + '\t'.join(data))
#
# Log('[Notice]', 'hello', 'world')

# def Log(prefix, **data):
# 	print (prefix + '\t'.join(data.values()))
#
# Log('[Notice]', ip = '127.0.0.1', port = '80', userid = '1234')
def Hello():
    a=1
    if a > 0:
        print("Hello")
print (Hello())












