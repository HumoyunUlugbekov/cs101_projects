name='Humoyun'
weight=75
height=180
age=20
gender='male'
days=20
average_duration=30
push_up=15
squats=10
fitnes_goal= 'weight loss'

BMI=weight/(height^2) 
BMR_male= 88.362 + (13.397 * weight) + (4.799 * height * 100) - (5.677 * age)
BMR_female= 447.593 + (9.247 * weight) + (3.098 * height * 100) - (4.330 * age)
active_tdee=BMR *1.375
e_frequemny=(days/30) * 100
total_minutes=(days * average_duration)
fitness_score=(push_up * 2) + (squats * 1.5)
 

print(f'Beginner profile')
print(f'- Name: {name}')
print(f'- Gender: {gender}')
print(f'- Age: {age}')
print(f'Physical measurements:')
print(f'- Weight: {weight}')
print(f'- Height: {height}')
print(f'- BMI: {BMI:.2f}')
print(f'Metabolic calculations: ')







      

