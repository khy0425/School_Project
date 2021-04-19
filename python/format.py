number = 20
greeting = '안녕!'
place = '문자열 포멧이란다'
welcome = '환영!'

print(number, '번 손놈', greeting, '.', place,
    '에 온걸', welcome)
    
base = '{}번 손님, {}.{}에 오신 것을 {}'
new_way = base.format(number, greeting, place, welcome)

print(base)
print(new_way)

mine = '가위'
yours = '바위'
result = '졌다...'

print('나는 {}, 너는 {}, 그래서 {}'.format(
    mine, yours, result))