# Test plan
|Test ID	|Description|	Expected Input|	Expected Output	|Actual Output|	Pass/Fail|
|---------|------------|--------------|------------------|------------|----------|
|ID_01	|student login	|Username:00023|SUCCESS|SUCCESS|PASS|
|ID_02	|admin login	|Username:admin password:admin|SUCCESS|SUCCESS|PASS|
|ID_03	|Add election|Enter election year =2019 code:ise19 roll number:00023 candidate name:anu candidate name :thanu|SUCCESS|SUCCESS|PASS|
|ID_04	|student|enter id:00023 enter candidate number:1|SUCCESS|SUCCESS|PASS|
|ID_05	|view result	|anu is winner|SUCCESS|SUCCESS|PASS|
|ID_06	|student login	|Username:00026	|fail|fail|fail|
|ID_07	|admin login	|Username:123 password:admin|fail|fail|fail|
|ID_08	|admin login	|Username:123 password:123|fail|fail|fail|
