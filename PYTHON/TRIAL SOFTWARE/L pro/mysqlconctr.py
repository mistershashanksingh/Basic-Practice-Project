import mysql.connector

print("Hello guys This is my my sql database \n___________________________________________________________________")

my_db = mysql.connector.connect(host="localhost", user="root", passwd="", database="net_user")

my_cursor = my_db.cursor()

my_cursor.execute("select * from userdata")
for i in my_cursor:
    print(i)
