#def calculate_item_total(quantity, unit_price):
    return quantity*unit_price
def apply_bulk_discount(total, quantity):
    if quantity>=10:
        return total *10/100
    elif quantity>=5:
         return total*5/100
    else:
        return 0
def calculate_tax(subtotal, tax_rate):
    return subtotal*tax_rate/100
def is_eligible_for_free_shipping(subtotal):
    return subtotal>=50
def process_order(item_name, quantity, unit_price, tax_rate):
    print('\n\nSHOPPING CART CALCULATOR')
    print('========================================')
    print(f'Order Receipt for: {item_name}' )
    print(f'Quantity: {quantity} @ ${unit_price:.2f} each')
    total=calculate_item_total(quantity,unit_price)
    print(f'Item total: ${total:.2f}')
    discount=apply_bulk_discount(total,quantity)
    print(f'Bulk Discount: -${discount:.2f}')
    subtotal=total-discount
    print(f'Subtotal: ${subtotal:.2f}')
    tax=calculate_tax(subtotal,tax_rate)
    print(f'Tax(%{tax_rate}): ${tax:.2f} ')
    final_total=subtotal+tax
    print(f'Final Total: ${final_total:.2f}')
    shipping=is_eligible_for_free_shipping(subtotal)
    print(f'Free Shippping: {shipping}')
    print('----------------------------------------\n\n')
process_order("Notebooks",12,3.5,8)
process_order('Pens',6,1.25,8)
process_order('Paper',3,4.99,8)



    # Problem Statement: Create a comprehensive grade calculation system. Your program should:

# Define a function calculate_average(score1, score2, score3) that returns the average of three 
def calculate_avrage(score1,score2,score3):
    return (score1+score2+score3)/3
# Define a function drop_lowest(score1, score2, score3) that returns the average of the two highest scores
def drop_lowest(score1,score2,score3): 
    return (sum(score1,score2,score3)-min(score1,score2,score3))/2
# Define a function calculate_weighted(assignments, midterm, final) that calculates weighted average:
# Assignments: 30%
# Midterm: 30%
# Final: 40%
def calculate_weighted(assignments, midterm, final):
    return (assignments*30/100 + midterm*30/100+ final*40/100)/3
# Define a function determine_grade(average) that returns letter grade:
# A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60
def determine_grade(average):
    if average>=90:
        return 'A'
    elif average>=80:
        return "B"
    elif average>=70:
        return "C"
    else:
        return "D"
def needs_improvement(current_avg,target_grade):
    return current_avg>min(target_grade)
# Define a function needs_improvement(current_avg, target_grade) that:
# Returns True if current average is below the minimum for target grade
# target_grade is a letter (‘A’, ‘B’, ‘C’, ‘D’)
# Test with this student data:
# Assignment scores: 85, 78, 92
# Midterm: 88
# Final: 82
# Calculate both regular average and average with lowest dropped
# Calculate weighted average
# Check if student needs improvement to get an ‘A’
def test_data(score1,score2,score3,midterm,final):
    print('\nSTUDENT GRADE CALCULATOR')
    print('========================================')
    print(f'Assignment Scores; {score1}, {score2}, {score3}')
    print(f'Midterm score: {midterm}')
    print(f'Final score: {final}')
    print(f'---------------------------------------')
    average=calculate_avrage(score1,score2,score3)
    print(f'Regular Assignment Average: {average:.2f}')
    without_lowest=drop_lowest(score1,score2,score3)
    print(f'Average with Lowest Dropped: {without_lowest}')


        
test_data(85,78,92,88,82)

# Expected Output:

# STUDENT GRADE CALCULATOR
# ========================================
# Assignment Scores: 85, 78, 92
# Midterm Score: 88
# Final Score: 82
# ----------------------------------------
# Regular Assignment Average: 85.00
# Average with Lowest Dropped: 88.50
# Using Better Average: 88.50

# Weighted Course Average: 85.95
# Letter Grade: B

# Needs improvement for an 'A': Yes
# Points needed: 4.05
# Already meets or exceeds 'B' grade requirement


    
