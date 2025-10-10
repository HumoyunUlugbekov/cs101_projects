name='Humoyun'
weight=75
height=180
age=20
gender='male'
days=20
average_duration=30
push_up=15
squats=10
fitness_goal=input('What is your firness goal?' \
'1.Weight loss target' \
'2.Muscle gain target' \
'3.General fitnes target' )

bmi=weight/(height^2) 
is_male = gender.upper() == "M"
is_female = gender.upper() == "F"
bmr_male = 88.362 + (13.397 * weight) + (4.799 * height * 100) - (5.677 * age)
bmr_female = 447.593 + (9.247 * weight) + (3.098 * height * 100) - (4.330 * age)
bmr = (is_male * bmr_male) + (is_female * bmr_female)
sedentary_tdee=bmr * 1.2
active_tdee=bmr *1.375
e_frequemny=(days/30) * 100
total_minutes=(days * average_duration)
fitness_score=(push_up * 2) + (squats * 1.5)
is_weight_loss=fitness_goal.upper()=="1"
is_muscle_gain=fitness_goal.upper()=="2"
is_general_fitness=fitness_goal.upper()=="3"
is_weight_loss=active_tdee - 500
is_muscle_gain=active_tdee + 300
is_general_fitness=active_tdee
bmi>=18.5 and bmi<30
 
print(f'\n\n{'='*50}')
print(f'Beginner profile')
print(f'- Name: {name}')
print(f'- Gender: {gender}')
print(f'- Age: {age}')
print(f'{'='*50}')
print(f'Physical measurements:')
print(f'- Weight: {weight} kg')
print(f'- Height: {height} m')
print(f'- BMI: {bmi:.2f}')
print(f'{'='*50}')
print(f'Metabolic calculations: ')
print(f'- BMR: {bmr}')
print(f'- Sedentary TDEE: {sedentary_tdee}')
print(f'- Active TDEE: {active_tdee}') 
print(f'{'='*50}')
print(f'Monthly exercise statistics:')
print(f'- Days exercised: {days} days')
print(f'- Exercise frequency percentage: {e_frequemny:.2f}%')
print(f'- Average duration per session: {average_duration} minutes')
print(f'- Total exercise minutes in month: {total_minutes} minutes')
print(f'{'='*50}')
print(f'Strength assessment: ')
print(f'- Push-ups in one set: {push_up}')
print(f'- Squats in one set: {squats}')
print(f'- Fitness score: {fitness_score}')
print(f'{'='*50}')
print(f'Calorie targets for all three goals: ')
print(f'- Weight loss target: {is_weight_loss}')
print(f'- Muscle gain target: {is_muscle_gain}')
print(f'- General fitness target: {is_general_fitness}')
print(f'- Fitness goal selected: {fitness_goal} ')
print(f'{'='*50}\n\n')