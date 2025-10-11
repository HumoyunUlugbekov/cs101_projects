name='Humoyun'
wieght=80
height=175
age= 18
gender=input('Please enter your gender: ')
days=30
average_duration=20
push_ups=10
squats=7
fitness_goal=input('Please write your fitness goal \n'
'1.Weight loss \n' 
'2.Muscle gain \n'   
'3.General fitness \n'
'Your Choice: ')

bmi= (wieght/((height/100)**2))
is_male=gender.upper()=="M"
is_female=gender.upper()=="F"
bmr_male = 88.362 + (13.397 * wieght) + (4.799 * height * 100) - (5.677 * age)
bmr_female = 447.593 + (9.247 * wieght) + (3.098 * height * 100) - (4.330 * age)
bmr = (is_male * bmr_male) + (is_female * bmr_female)
sedendary_tdee=bmr * 1.2
active_tdee =bmr * 1.375 
exercise_frequency_p=(days/30) * 100
total_minutes=days * average_duration
fitness_score= (push_ups * 2) + (squats * 1.5)
is_weight_loss=fitness_goal.upper()=="1"
is_muscle_gain=fitness_goal.upper()=="2"
is_general_fitness=fitness_goal.upper()=="3"
weight_loss = active_tdee - 500
muscle_gain = active_tdee + 300
general_fitness = active_tdee
consistency_strong= exercise_frequency_p >= 70 and average_duration >= 30
basic_strength_present= push_ups >= 5 and squats >= 10

print(f'\n\nBeginner profile:')

print(f'- Name: {name} ')
print(f'- Gender: {gender}')
print(f'- Age: {age} years old')

print(f'Physical measurements:')
print(f'- Weight: {wieght} kg')
print(f'- Height: {height} m')
print(f'- BMI: {bmi:.2f}')
print(f'Metabolic calculations:')

print(f'- BMR: {bmr:.2f}')
print(f'- Sedentary TDEE: {sedendary_tdee:.2f}')
print(f'- Active TDEE: {active_tdee:.2f}')
print(f'Monthly exercise statistics:')

print(f'- Days exercised(out of 30): {days} days')
print(f'- Exercise frequency percentage: {exercise_frequency_p}%')
print(f'- Average duration per session: {average_duration} minutes')
print(f'- Total exercise minutes in month: {total_minutes} minutes')

print(f'Strength assessment:')
print(f'- Push-ups in one set: {push_ups} times')
print(f'- Squats in one set: {squats} times')
print(f'- Fitness score: {fitness_score}')

print(f'Colorie targets for all three goals:')
print(f'- Weight loss target: {weight_loss:.2f} ')
print(f'- Muscle gain target: {muscle_gain:.2f}')
print(f'- General fitness target: {general_fitness:.2f}')
print(f'- Finess goal selected: {fitness_goal}')


print(f'\n1. BMI in reasonable: {bmi >= 18.5 and bmi < 30}')
print(f'2. Exercise frequency good: {exercise_frequency_p >= 60 and days >= 18}')
print(f'3. Exercise frequency excellent: {exercise_frequency_p >= 80 and days >= 24}')
print(f'4. Exercise duration adaequate: {average_duration >= 30}')
print(f'5. Basic push-up strength: {push_ups >= 5}')
print(f'6. Basic squat strength: {squats >= 10}')
print(f'7. Good push-up strength: {push_ups >= 10}')
print(f'8. Good squats strength: {squats >= 20}')
print(f'9. Consistency strong: {consistency_strong}')
print(f'10. Basic strength present: {basic_strength_present}')
print(f'11. Ready for progression: {consistency_strong and basic_strength_present}\n\n')