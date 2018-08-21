import sys

if len(sys.argv) == 2:
    card_num = sys.argv[1]
else:
    card_num = int(input("Enter card number: "))
print(card_num)

def valid_card_checker(number):
    doubles_list = []
    doubles_list_singles = []
    singles_list = []
    for i,j in enumerate(reversed((str(number)))):
        if i%2!=0:
            doubles_list.append(int(j))
        else:
            singles_list.append(int(j))
    for i in range(len(doubles_list)):
        doubles_list[i]*=2
    for i in doubles_list:
        if i >= 10:
            tmp = [int(d) for d in str(i)]
            for i in tmp:
                doubles_list_singles.append(i)
        else:
            doubles_list_singles.append(i)
    card_sum = sum(doubles_list_singles) + sum(singles_list)
    if card_sum % 10 == 0:
        print("Valid card")
        if len(str(number)) == 15:
            print("Card is AMEX")
        elif len(str(number)) == 13:
            print("Card is Visa")
        elif len(str(number)) == 16:
            if str(number)[0] == "4":
                print("Card is Visa")
            else:
                print("Card is Mastercard")
    else:
        print("Invalid card")

valid_card_checker(int(card_num))