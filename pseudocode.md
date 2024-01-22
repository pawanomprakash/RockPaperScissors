**Pseudocode for RockPapersScisscors game build in C++**:
-

- include necessary library files:-
  
  - include **"iostream"**

  - include **"cstdlib"**

  - include **"ctime"**

- use namespace std

- declare **main** function:
- seed the random number generator with the current time, so that a random number is generated at every run.

- declare string variable _**"playerChoice"**_ to store the value of player input.

- display message **"Enter your choice (r for rock, p for paper, s for scissors):"** and cin(input) the value of playerChoice.

- check for invalid choice 
if playerChoice is not equal to **_"r"_** and **_"p"_** and **_"s"_**
display **"Invalid choice."** and end the program there using **"return 0;"**

- if input is valid, convert player's choice to full name
  - if input **r**, change it to **rock**
  - if input **p**, change it to **paper** 
  - if input **s**, change it to **scissors**

- declare and initialise a string array named **"possibilties"**, with three elements , i.e., **[rock,paper,scissors]**.

- declare string variable **"compChoice"** to store the random value from **"possibilites"** array.

- display **playerChoice** and **compChoice**,
"player chose"<< **playerChoice** <<"computer chose"<< **compChoice**

- comparing **playerChoice** and **compChoice**:
- if both are the same (i.e., both rock, or both paper,display "Its a tie!.")
- if playerChoice is **rock** and if compChoice is **scissors**, display **"PLayer wins!."**, else **"Computer wins!"**
- if playerChoice is **paper** and if compChoice is **rock**, display **"Player wins!"**, else **"Computer wins!"**
- if playerChoice is **scissors**  and if compChoice is **paper**, display **"PLayer wins!"**, else **"Computer wins!"**

- End of program - return 0 

  
