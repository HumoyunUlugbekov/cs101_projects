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


def calculate_item_total(quantity, unit_price):
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


    
