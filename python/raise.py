school = {'1반' : [172, 185, 198, 177, 165, 199], '2반' : [165, 177, 167, 180, 191]}
try :
    for class_number, students in school.items():
        for student in students :
            if student > 190 :
                print(class_number, '190을 넘는 학생이 있습니다')
                raise StopIteration
except StopIteration:
    print('종료다요')
