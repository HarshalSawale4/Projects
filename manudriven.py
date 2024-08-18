def cricket_badmiinton(groupA_cricket , groupB_badminton):
    common_student=[]
    for student in groupA_cricket:
        if student in groupB_badminton:
            common_student.append(student)
    return common_student

def either_or_not_both(groupA_cricket, groupB_badminton):
    either_or_not_both= []

    for student in groupA_cricket:
        if student not in groupB_badminton:
            either_or_not_both.append(student)

    for student in groupB_badminton:
        if student not in groupA_cricket:
            either_or_not_both.append(student)        
    return either_or_not_both

def neither_cricket_nor_badminton(groupA_cricket, groupB_badminton, groupC_football):
    all_student= []

    for student in groupA_cricket:
        if student not in all_student:
            all_student.append(student)


    for student in groupB_badminton:
        if student not in all_student:
            all_student.append(student)


    for student in groupC_football:
        if student not in all_student:
            all_student.append(student)  

    cricket_nor_badminton= []
    for student in all_student:
        if student not in cricket_nor_badminton:
            cricket_nor_badminton.append(student)
    return len(cricket_nor_badminton)   


def cric_footb_not_badm(groupA_cricket, groupB_badminton, groupC_football):
    cricket_football_not_badminton = []
    cricket_stu= []
    footbal_stu= []


    for student in groupA_cricket:
        if student not in cricket_stu:
            cricket_stu.append(student)

    for student in groupC_football:
        if student not in footbal_stu:  
            footbal_stu.append(student)

    for student in cricket_stu:
        if student not in footbal_stu and student not in groupB_badminton:
            cricket_football_not_badminton.append(student)
    return len(cricket_football_not_badminton)



def main():
    groupA_cricket = {"B","A","S","E","H","D","F","G"}
    groupB_badminton = {"A","C","S","Y","Z","H","G"}
    groupC_football= {"B","D","L","W","H","S"}

    print("List of student who play cricket and badminton \n")
    print(cricket_badmiinton(groupA_cricket,groupB_badminton))
    print("list of student who play either cricket or badminton but not both \n")
    print(either_or_not_both(groupA_cricket, groupB_badminton))
    print("Number of student who play neithe cricket nor badminton \n")
    print(neither_cricket_nor_badminton(groupA_cricket, groupB_badminton, groupC_football))
    print("Number of student who play cricket and football but not badminton \n")
    print(cric_footb_not_badm(groupA_cricket, groupB_badminton, groupC_football))

if __name__ == "__main__":
  main()