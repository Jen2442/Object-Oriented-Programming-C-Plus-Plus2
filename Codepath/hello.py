# unit 1 question 1 

def _Hello_World():
    print("Hello World!")

#_Hello_World()


#question 2 Today's Mood

def todays_mood():
    mood = "🥱"
    print("Today's mood: " + mood)

#todays_mood()


#question 3

menu = "🍕"

def print_menu(menu):
    print("Lunch today is: " + menu)

#print_menu(menu)

#question 4
#set a & b 


def sum(a, b):
    return a + b

#print(sum(13,27))

first_num = sum(13,27)


#print(sum(first_num,first_num))

#question 5

#Write a function product() that returns the product of two integers, a and b

def Product(a,b):
    return a*b

#print(Product(22,7))

#question 6
#Write a function classify_age() that takes an integer age as a parameter and returns "child" if the age is less than 18, and returns "adult" otherwise.

def classify_age(age):
    if age< 18:
        return "child"
    else:
        return "adult"
    
output = classify_age(18)
#print(output)
output = classify_age(7)
#print(output)
output = classify_age(50)
#print(output)

#question 7
#Write a function named what_time_is_it() that takes an integer hour as a parameter.

def what_time_is_it(hour):
    if hour == 2:
        return "taco time 🌮"
    if hour == 12:
        return "peanut butter jelly time 🥪 "
    else:
        return "nap time 😴"
    

time = what_time_is_it(2)
#print(time)
time = what_time_is_it(7)
#print(time)
time = what_time_is_it(12)
#print(time)

#question 8
#Write a function called blackjack() that takes an integer score as a parameter

def blackjack(score):
    if score==21:
        print( "Blackjack!")
    if score>21:
        print( "Bust!")
    if score>=17 and score < 21:
        print( "Nice Hand!")
    if score<17:
        print("Hit Me!")

#blackjack(21)
#blackjack(24)
#blackjack(19)
#blackjack(10)

#question 9
# Write a function get_first() that takes in a list as a parameter and returns the first item in the list. 
# Return None if the list is empty.






    


    

    