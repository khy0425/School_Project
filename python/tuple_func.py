ages = {'Tod': 35, 'Jane': 23, 'Paul': 62}
for a in ages.items():
    print('{}의 나이는:{}'.format(*a))