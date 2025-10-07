student_name=input('Please enter your name: ')
student_gpa=float(input('Please enter your GPA: '))
total_credit_hours=int(input('Please enter your total credit hours: '))
print(f'Name: {student_name}')
print(f'GPA: {student_gpa}')
print(f'Total credit hour:{total_credit_hours}')
print(f'Does elegible for Dean list: { 'Yes' if student_gpa >= 3.5 else 'No' and 'Yes' if total_credit_hours >= 12 else 'No'}')
gpa_needed= 3.5-student_gpa if student_gpa < 3.5 else '0'
credit_hour_needed= 12 - total_credit_hours if student_gpa < 12 else '0'
print(f'How many more GPA points needed? : {gpa_needed} points')
print(f'How many more credits needed? : {credit_hour_needed} credits')