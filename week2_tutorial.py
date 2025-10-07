first_name=input('Please enter your first name: ')
last_name=input('Please enter your las name: ')
student_id=input('Please enter your student id: ')
gpa=input('Please enter your GPA: ')
required_gpa='4'
maximium_gpa='5'
print(f'{'='*50}')
print(f'Scholarship report')
print(f'{'='*50}')
print(f'Student: {first_name} {last_name}')
print(f'ID: {student_id}')
print(f'Is elegible for scholarships: {'Yes' if gpa >= required_gpa and gpa<=maximium_gpa else 'No'}')
print(f'{'='*50}')