Online Voting is a web-based voting system that will help you manage your elections easily and securely. This voting system can be used for casting votes during the elections held in colleges, etc. In this system the voter do not have to go to the polling booth to cast their vote. They can use their personal computer to cast their votes. There is a database which is maintained in which all the name of the voters with their complete information is stored. The System Administrator registers the voters by simply filling a registration form to register the voters. After registration, the voter is assigned a secret voter ID with which he/she can use to login to the system and cast his/her vote. If invalid/wrong details are submitted, then the person is not registered to vote.

# Features 

* Allows us to set up a flexible and trustworthy voting system
* Applicable for large as well as small group of people e.g. a batch, a class.
* Keeps a record of  every voting process.

# Highlevel Requirements
| ID  |                   Description                                   | status |
|-----|-----------------------------------------------------------------|--------|
| HS1 |User has to select the option like student panel,admin panel,exit|Imlpemented|
| HS2 |Admin has to provide Id and password|Imlpemented|
| HS3 |student has to enter roll number to vote candidate|Imlpemented|
| HS4 |Admin has to enter details of election|Imlpemented|
| HS5 |student can vote the candidate at once|Imlpemented|
| HS6 |Get the message about winner|Feature|

# Lowlevel Requirements
| ID  |                   Function                                      | Description|status |
|-----|-----------------------------------------------------------------|--------|-----------|
| Ls01 |authenticateAdmin()|To authenticate admin|Imlpemented|
| Ls02 |isValid()HS3|To authenticate student|Imlpemented|
| Ls03 |getwinner()HS6|To get winner of the election|Imlpemented|










