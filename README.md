# IPL 2015 DATABASE
Being a cricket enthusiast, the love for the sport was a major factor why I chose to do my 12th grade final project on “IPL 2015”. In a way I wanted to emulate a data base for IPL 2015 using **binary files and OPP concepts in Turbo C++** so that other cricketing enthusiasts like me can use the software to create,retrieve and delete information related to the tournament.

## My Approach:
As the user of the software, the major functions a person would generally like to perform retrieve details related to previous match details, future match details etc. Other than this I have added an option for the users to view the points table in a tabular format.
I have tried to implement this through a menu driven program which involves options like create database, display information, delete, edit points table and exit.

![1](https://drive.google.com/uc?export=view&id=1sq3fjzuhSrLwTivtlTotiPr-202OxfTS)

### [1]Option 1 - Create Database:
This option allows users to create databases for all the above functions mentioned above and depending on the option selected by the user, required details are entered and stored.
A new binary file is created if the required one does not exist. Otherwise, it is appended directly to the existing file.

![2](https://drive.google.com/uc?export=view&id=1LXVTJGrtkX7b0R3MjAmXmupT7hQs4evR)

![3](https://drive.google.com/uc?export=view&id=1C51EZCCFcn5CZUqa7RdgCKCVDXOZ-11o)

Depending on the option selected by the user, required details are to be entered by the user and then stored into the specified binary file on completion.

Screen after the **Previous match details** option is selected:
![4](https://drive.google.com/uc?export=view&id=1-iFkPbrmYSfDAK_4yq33UK-8yTPMPlO8)

Screen after the **Future match details** option is selected:
![5](https://drive.google.com/uc?export=view&id=1_QXwD_uW5J6sxXJ_uKpdd3VSHmhXmhX5)

Screen after the **Player details** option is selected:
![66](https://drive.google.com/uc?export=view&id=1dCvb5K_j7p0h0JMD5LMuyfnA0qE6gD2g)

Screen after the **Points table** option is selected:
![6](https://drive.google.com/uc?export=view&id=1V6_9Izc26A49n1e3aF8zrbKsMlDmpbPe)

### [2] Option 2 - Display:
This option displays all the information queried by the user. The query is made by selecting the necessary options.
![7](https://drive.google.com/uc?export=view&id=18583ibZxWyAF4TOwy1jJGOSSuqul4sy1)

![8](https://drive.google.com/uc?export=view&id=1gLmsRu3ZE7v3aOEKP99DkdO2a1ItQ7Ge)

Depending on the choice selected, the display screens are as follows:

Display screen of **Previous match details**:
![9](https://drive.google.com/uc?export=view&id=1uric152P9hXGZ8kldsu4ew1_fThiSSr4)

Display screen of **Future match details**:
![10](https://drive.google.com/uc?export=view&id=1Nf4VdYgxH9FWUFE81BIELSDRQnGbmh_u)

Display screens of **Player details**:
First the player name is asked to the user for which he/she seeks details.
![11](https://drive.google.com/uc?export=view&id=1a37rUjK_bCQC2u3VtKD-TxQA9YoZUSce)

If the player detail is found then the corresponding details are displayed as follows.
![12](https://drive.google.com/uc?export=view&id=1SOewimYP9GKi0CozrurvySwtflW6ergF)

Display screens of **Points Table **:
![13](https://drive.google.com/uc?export=view&id=1WeUjP3HbtmehhmNaou26EVwQt0lEEtHn)

### [3] Option 3- Delete:
This option allows the users to delete items from a corresponding database either using the record number as in case of previous match details and future match details or using player name as in case of player details. Upon completion a successful message is shown. 

![14](https://drive.google.com/uc?export=view&id=1iwvGSW9y_yGPmNP_x_1jWtMT5LK6z6fF)

![15](https://drive.google.com/uc?export=view&id=1x0LRBD5xp-coKzXiucD_FALdLxrnMtXw)

Depending on the option selected the flow of program changes as follows:
Display screen if **Previous match details** option is selected:
![16](https://drive.google.com/uc?export=view&id=1bk3EIRzZIA1QB5b7Bb-ygaeRyaJ5H0eb)

Now if we try to display the previous match details:
![17](https://drive.google.com/uc?export=view&id=1Ix53rWhrwfJktRGSjDb60bz5SZqQlsdF)
Display screen if **Future match details** option is selected:
![18](https://drive.google.com/uc?export=view&id=1sN4gygKRsQAz5Ax1F27zfqr-mnCIsB_c)

Now if we try to display the future match details:
![19](https://drive.google.com/uc?export=view&id=1Y0O8Pij6aNXe6SckrXil1eEyxI7hMSms)

Display screen if **Player details** option is selected:
![20](https://drive.google.com/uc?export=view&id=1reNpGdRst7DgouPD-HuH0776wEhMEx5z)

Now if we try to get the details of the deleted player we get:
![21](https://drive.google.com/uc?export=view&id=1IAbfI5McC-3B9KUT1kM2E76x6_90Gdrl)

### [4] Option 4- Edit Points Table:
This option allows the user to edit the points of the team of his choice.
![22](https://drive.google.com/uc?export=view&id=18S1uGxxa6zE2QeVdvyDiqC5n8rJq7iUU)

![23](https://drive.google.com/uc?export=view&id=1_oBPkBIMB_Pk32F4w_oLjKIr90LNz6MG)

**Result:**
![24](https://drive.google.com/uc?export=view&id=19pDVM7x3g2U7VHd6pXB55LneOHfDzbl3)

### [5] Option 5- Exit:
This option is used to exit from the software after asking permission from the user.
![25](https://drive.google.com/uc?export=view&id=1rjgDpr2B9X2HuiU4fdcI7pUKj7NDm0I5)

![26](https://drive.google.com/uc?export=view&id=1XTXkzGNkcuwBLwxd8kCDOd76fRAZu9ss)

## Minimum Hardware and Software Requirements:
* Intel Pentium Pentium 4.
* 256 MB RAM or above.
* Turbo C++.
* Windows 98 or above.






