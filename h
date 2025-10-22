# Problem Statement: Create a shopping cart system that calculates prices with various discounts. Your program should:

# Define a function calculate_item_total(quantity, unit_price) that returns the total price for an item
# Define a function apply_bulk_discount(total, quantity) that:
# Returns 10% discount if quantity >= 10
# Returns 5% discount if quantity >= 5
# Returns 0 otherwise
# Define a function calculate_tax(subtotal, tax_rate) that calculates tax amount
# Define a function is_eligible_for_free_shipping(subtotal) that returns True if subtotal >= 50
# Define a function process_order(item_name, quantity, unit_price, tax_rate) that:
# Calculates item total
# Applies bulk discount
# Calculates tax
# Checks shipping eligibility
# Prints a formatted receipt
# Test with these orders:
# “Notebooks”: 12 units at $3.50 each, 8% tax
# “Pens”: 6 units at $1.25 each, 8% tax
# “Paper”: 3 reams at $4.99 each, 8% tax
# Expected Output:

# SHOPPING CART CALCULATOR
print('SHOPPING CART CALCULATOR')
# ========================================
print('========================================')
def calculate_item_total(quantity, unit_price):
    return quantity*unit_price
def apply_bulk_discount(total, quantity):
    if quantity>=10:
        return total *10/100
    elif quantity>=5:
         return total*5/100
    else:
        return total
def calculate_tax(subtotal, tax_rate):
    return subtotal*tax_rate
def is_eligible_for_free_shipping(subtotal):
    if subtotal>=50:
        return True
    else:
        return False
def process_order(item_name, quantity, unit_price, tax_rate):
    print(f'Order Receipt for: {item_name}' )
    print(f'Quantity: {quantity} @ ${unit_price} each')
    total=calculate_item_total(quantity,unit_price)
    print(f'Item total: ${total}')
    print(f'Bulk Discount: -${discount}')
    discount=apply_bulk_discount(total,quantity)
    
    print(f'Tax(%{tax_rate}): ')
    
    
process_order("Notebooks",14,3.5,8)
    # Order Receipt for: Notebooks
#   Quantity: 12 @ $3.50 each
#   Item Total: $42.00
#   Bulk Discount: -$4.20
#   Subtotal: $37.80
#   Tax (8%): $3.02
#   Final Total: $40.82
#   Need $12.20 more for free shipping
# ----------------------------------------
# Order Receipt for: Pens
#   Quantity: 6 @ $1.25 each
#   Item Total: $7.50
#   Bulk Discount: -$0.38
#   Subtotal: $7.12
#   Tax (8%): $0.57
#   Final Total: $7.69
#   Need $42.88 more for free shipping
# ----------------------------------------
# Order Receipt for: Paper
#   Quantity: 3 @ $4.99 each
#   Item Total: $14.97
#   Subtotal: $14.97
#   Tax (8%): $1.20
#   Final Total: $16.17
#   Need $35.03 more for free shipping
# ----------------------------------------
