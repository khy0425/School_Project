wintable = {
    '가위' : '보',
    '바위' : '가위',
    '보' : '바위'
    }


def rsp(mine,yours) :
    if mine == yours : 
        return 'draw'
    elif wintable[mine] == yours :
        return 'win'
    else :
        return 'lose'
    
result = rsp('가위','바위')

messages = {
    'win' : '이겼어~!',
    'draw' : 'ㄲㅂ 비겨써',
    'lose' : 'Wls'
 }
 
print(messages[result])