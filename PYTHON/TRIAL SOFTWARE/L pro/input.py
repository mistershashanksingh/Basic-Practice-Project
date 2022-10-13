# program to  check  children's age eligibility for admission in school .
 
print("\t \n Note : age of your children should be according to govt. guidelines \n Enter your child age = ") 
age = float(input())

if age < 5:
    print("your child is not eligible for admission in any school")
elif age > 18:
    print("Now your child is over age for schooling")
else:
    print("THANK YOU FOR USING OUR SERVICE")
