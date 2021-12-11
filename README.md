# Validating_Password
![Validating Password logo](https://scontent.fccu19-1.fna.fbcdn.net/v/t39.30808-6/266505709_2848776258747926_3572371372484933062_n.jpg?_nc_cat=110&ccb=1-5&_nc_sid=730e14&_nc_ohc=WDi7BJFWfsMAX-vP9SL&_nc_ht=scontent.fccu19-1.fna&oh=862803bdc125d07d1ea24adbcf6a0302&oe=61BA3EB6)
## Thought Process
Password checker program basically checks if the password is valid or not based on password policies mention below:

    Password should not contain any space.
    Password should contain at least one digit(0-9).
    Password length should be between 8 to 15 characters.
    Password should contain at least one lowercase letter(a-z).
    Password should contain at least one uppercase letter(A-Z).
    Password should contain at least one special character ( @, #, %, &, !, $, etc….).
    

# Approach 
In this program,

    we are using String contains () method to check the passwords. This method accepts a CharSequence as an argument
    and returns true if the argument is present in a string otherwise returns false.
    Firstly the length of the password has to be checked then whether it contains uppercase, lowercase, digits and 
    special characters.
    If all of them are present then the method isValid(String password) returns true.
    
 Made With ♥ - VirusZzHkP
 
