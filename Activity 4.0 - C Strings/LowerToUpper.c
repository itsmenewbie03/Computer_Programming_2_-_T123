#include <stdio.h>
/*
-:...:::..:::-----------------------------:::..:----::.:::::--:::::::------------------:::...::::::.
-:::::-::::::---------------------------------::-----:::::----------------==========--:::::::::::.:.
-:::::-::::::::---------------------------------:=+++++++=:---------------==========---:::::.:::.::.
--::::-:::::.:.:::---------------------------=*==*########+-:------------==========--:::-::::::...:.
--::.:-:..::.:.::::--------------------------##=+##%#######*=-:-----------======-----::::::::--::::.
--::::-:..::.:::-::---------------------=+***#%%#%%###%%#####=::----------=====--:---::::::::::..::.
--...::::::-::::::.:--------------------+%%%%%%%%%%##%%%%%###*+:-----------====--------:::::::::.::.
--:::--:::.:....:.:------::::::----:::--=*%#%%%%%%%%#%%@%%#####=:----::--:-=-==--:--------:::::..:::
:-:..::....:....::------:::::::::--:..:-=+##%%%%%%%%%%%%%%#%###*-::::::::::---==-:-:-::-:::--:-::-::
:-:..-:::..:....:-------::::::::::-:::=-+*#%%%%%%@%%%%%%%%%%%%%#-::::::::::---==--:::::-:::::.:::-::
:-:..::::.:::::---------:.::::::::-:--*+**#%%@%%%@%%%%%####%%%%#=:::.::::::---===---::::::::::-::-::
:-:.::::::::::----------::::::::::::+=+***#%%%%%%%%##*+++++*%%%%+:::::::::-----=--==----:::::.-::-::
:-::::::....::------------::::::.:::++=+*####**+++**+=======*%%%+:::::::--==---=---==-------::::--::
:-:.::::.....:----------:::....:::::--+*###*++++=============#%%*::::::::----------===-:::::::----::
:-:.::::.....:----------:.::.:.:::::::+%%#+++*+++++==========*#%#:::::::-::--------===-::::::::---::
:-:.::.:...:::---------:...:.::::--::-#%%*+++**++++++==+=====+#%#-:::::::::---------==-::::::::---::
:-::::::..::----------:::::::::::-:..-#%%*++***+++++++++=====+#%#-::----::::--------==-::::::::---::
:-:::..:.:-------------::...:....::.:=%%%*******++++++++=====+#%#-...:::------------=---::--::----::
:-:::..::--------------::...:....::.:-%%#*******+++=++++=====+*%*:.::::..::---------------:::::---::
:-:::::--:-----------------::..:.:...-#%#****####**+++**##**++*%=:.::::---=====-------------:::---::
:::::----:::::---------------:.:.::::-#%#***#######*++**#******#-:...:--======---------------::---::
::::::--:::::----::----------::::-:..-*%#********###+=+*##**++*#::::::---=====--------------------::
:::::::::::-:--::.::---------....:..:-+%#****#%#####*==+****+++#=:...:---=====--::----------------::
::::::::::::::::..::---------:..::.:--=##******+**#**+==+++===+**:..:------===--:::---------------::
:::::::::::::. .:::..:--------:..::----##********#***+==++++==++*-.:-----------::::::-------------::
:::::::::::.......:...:--------:.:---=*##************+=+++++=++*+-:----------::::::..::-----------::
::::::::-:............:::-------:----***#************+=+++===++*+::::-------::::...:...:----------::
:::::::::::..:........:::------------+***********####*+++*==+++*=::::-----=-::::::.:..:::---------::
::::::::::...:..  .....::-------------************###*++=*++++++-::::-------::-:.:.::::::---------::
::::::::::.............::-------------+#*#**********+++==++++++=:::::------::::::..:....:---------::
:::::::::.... .:::.....:.:-------------*##**********+++==+++++-::::::------:::.::::.....::--------::
:::::::::...:..........:::.:---------::-+**********#****+++++=::::-:--:::-::::::::::.::::::-------::
:::-::::::::::::::::::::::::---------::::-=******#%#***#%++++=:::----::.:-::::-::...:....::::-----::
::---------------------------------------:=+*****#%%##%%+++++-:::--------====---------------------::
::---------------:---------------------:::=+********++**+++++::::--------====---------------------::
:::-:::::::::::::::::::::::-----------::::-+******#****+++++=::::-------========----------------=-::
::::...:....:..............:---------:..:::*+*****###*+=----:::::-----:::::::::::::::::::-::------::
::-:...:....:..............:--------:...:=:***********++++++=-:::-----::::::::::....:....:...:----::
::-:...:....:..............:--------::::+*-*##******+++****#*=:::-----:::::::::::...:..:.:::::----::
:::::.::..::::....:........:--------:::=#*=*###******+******+-:-------::::::::::....:....:::::----::
::::..::...::::..::....:...:--------::=#%*=*#########*******+-::-------::--::---::::-::-----:-----::
::::........:..............:-------::+#%@#=*#########*******+-:::-----::::::::::::::::::::::::----::
::-:..:....::..............:-----:-=*%@@@%=*#########*******++#=-::---::::::::::::::::::::::::----::
::-:..::...::....:.........:-----=*%%@@@@%=+#########*******+=@@%*=-:-::::::::::::::::::::-:::----::
::-:..::...::....:.........:---+#%@@@@@@@@+=*########*******+-%@@@@%*=:..:::.:::::::::::::-:::----::
:--::::::::::::::::...::..:--+*%@@@@@@@@@@*-=###**###*******+-#@@@@@@@%*-:...:::::::::::::-:::----::
:--...:....::....:.....:::-+*#%@@@@@@@@@@@#=-=##************+-+@@@@@@@@@@%+-..:-::::--------::----::
---...:....::....:.....:-+*#%@@@@@%%%%@@@@%+-:+#*************--%@%@@@@%@@@@%*-.:....::::::::::----::
:--::::::::-:::::::...-+*#%@@@@@%%%%%%@@@@@*=--***++****+*++=--%@%%%%%%@@@@@@@#=:::::::--:-:::----::
:--..::.:..::....:..:=*#%@@@@@@%%%%%%%@@@@@%+=--**+++*****+=--:*@%%%%%%%@@@@@@@@#-::::::::-:::----:.
--:..:::::::.....::-+#%%@@@@%%%%%%%%%%%@@@@%*+=--++++++*###+--:+@%%%%%%%%%%@@@@@@#::::::::-::::---:.
--:::::::::::::.:=+##%@@@@@%%%%%%%%%%%%@@@@@#*=-:=++++++*+==-::=@%%%%%%%%%%%%%%@@@+::::--:-:::----:.
--:..::.:.::...-*#%%@@@@@@%%%%%%%%%%%%%@@@@@#*+=---++++*+===-::=@%%%%%%%%%%%%%%%@@#::-:----::::---:.
--::::::::::..:*@@@@@@@@%%%%%%%%%%%%%%%%@@@@%*+=----=+**=++=-::=@%%%%%%%%%%%%%%%@@%:::::::-::.:---:.
--::::::::::..-%@@@@@@%%%%%%%%%%%%%%%%%%@@@@%++=-----+*=-----::+@%%%%%%%%%%%%%%%@@%-::::::-::.:---:.
--::::::::::..=%@@@@%%%%%%%%%%%%%%%%%%%%@@@@%+==========------:*@%%%%%%%%%%%%%%%@@@=:::::::::.:---:.
--::::::::::.:*@@@@@@%%%%%%%%%%%%%%%%%%%@@@@@*+=+###*+=+=---::-%%%%%%%%%%%%%%%%@@@@+:::::::::.:---:.
--::---------:*@@@@@%%%%%%%%%%%%%%*+#%%%@@@@@%*+===+****-=-=*=*%%%%%%%%%%%%%%%%@@@@*::------------:.
--:::::::.::.:*@@@@%%%%%%%%%%%%%%++*#%%%@@@@@@%#+=======---=*%@%%%%%%%%%%%%%%%%@@@@*:::::::::::---:.
-::::::::::::-#@@@@@%%%%%%%%%%%%*+**#%#*#@@@@@%*#**###**---=+#@%%%%%%%%%%%%%%%%@@@@#::::::::...---:.
-::::::::::::-%@@@@@%%%%%%%%%%%#=+*#%%*+*@@@@@#-=----==+---+%%@%%%%%%%%%%%%%%%@@@@@%::::::::...---:.
-----------::-%@@@@@@%%@@@%%%%%*+**#%*+++%@@@@%##*++===-=*==+#@%%%%%%%%%%%%%%%@@@@@%::::::::...---:.
-----=-====--=#%@@@@@@@@@@@@%%%+***#+=+==+*#%@@#+++**###**+**#@%%%%%%%%%%%%%%%@@@@@%-::-----------:.
::::::::::-::-##%@@@@@@@@@@@%%#+#**+==+++++=*@@*--------=*##%@@%%%%%%%%%%%%%%%@@@@@%-:------------:.
::::-:::::::::*##%@@@@@@@@@@%%**#***+++++++++@@%###**++==+*=+#%%%%%%%%%%%%%%%%@@@@@%::::::::....:-:.
::::-:::::::::+#*#@@@@@@@@@@@%+*##*#**+*#####@@%+==++*###+#%#%%%%%%%%%%%%%%%%%@@@@@%::::::::....:-:.
::::-::::-::::=%%%%@@@@%@@@@@%+*#*****++*#%@@@@%=--------+**#@%%%%%%%%%%%%%%%%@@@@@%:::::::::...:-:.
::::-::::-::::-%@@@@@@@@@@@@@#=***#***++==+%@@@%%#*****++*+++%%%%%%%%%%%%%%%%@@@@@@#:::::::::...:-:.
:::-----:--::::#@@@@@@@@@@@@@#+***#****++++#@@%@*--==+*#**#%%@%%%%%%%%%%%%%%@@@@@@@#:::::::::::.:-:.
:::--::::-::::-#@@@@@@@@@@@@@%****###**+++*#@@%@#--------***#@%%%%%%%%%%%%%%@@@@@@@#::::-----::::-:.
:::--::-:-::::=#%@@@@@@@@@@@@%****##**+=+*%%@@@@%#######***+*@%%%%%%%%%%%%%%@@@@@@@#:::::::::::::-:.
:::--::::-::::*#%@@@@@@@@@@@@%****##**++*#%@@@@@%---==+***#%@@%%%%%%%%%%%%%@@@@@@@@*:::::::::....-:.
:-:-------:::=##%@@@@@@@@@@@@@*****##*+#%@@@@%@%%+===----**+%@%%%%%%%%%%%%%@@@@@@@@*.::::::::::::-:.
:::-----:-:::+###@@@@@@@@@@@@@*#***#*++%@@@%%@@%@#*#####****#@%%%%%%%%%%%%%@@@@@@@@*.::::::::::::-:.
----------::-*###%@@@%@%%@@@@#******++*%@%%%%@%%@+:--==+**#%@@%%%%%%%%%%%%%@@@@@@@@*.::::::::::::-::
:---------::=#***#%@@@@%%%@@*+****#*++*@%%%%%@%%%*+++====**+@@%%%%%%%%%%%%%@@@@@@@@*.::::::--::::-::
::--:--:::::*#****%@@%%%%@@*+#%*###*++#@%%%%%%%%%%***##%#*#*@@%%%%%%%%%%%%@@@@@@@@@*.::::::-:::::-:.
:------::-:-##***#@@@@%%%%**#%@**#**++%@%%%%%%%%%*----=+#*#@@@%%%%%%%%%%@@@@@@@@@@@*.::::::::::::-::
::-----:--:+%###%@@@@@@%%**#%@@#*#**++%%%%%%%%%%%%*#**+=***#@@%%%%%%%%%@@@@@@@@@@@@*.::::::-:::::-::
::--:--:-:-#%%%%@@@@@@@##*#%@@@%###*+*@%%%%%@%%%%%++*#%%%*#@@@%%%%%%%%%@@@@@@@@@@@@*.::::::::::::-::
:------:-:+@@@@@@@@@@%####%@@@@%###**#@%%%%%%%%%%%===-+***#@@@@%%%%%%%@@@@@@@@@@@@@*:::::::--::::-::
----------#@@@@%%%%@%##%#%@@@@%######%@%%%%%%@%%%%%######**@@@@@@%%%%@@@@@@@@@@@@@@#:::::::--::::--:
::-::::::-#%%%####%%#%@%#@@@@@%####%@@@%%%%@@%%%%%==+*##%*%@@@@@@%%%%@@@@@@@@@@@@@@#::::-----------:
::-:--:::=########%#%@@%%@@@@@%###%@@@@%%%@@@@%%%%++++++#*#@@@@@@@%%@@@@@@@@@@@@@@@#:::::-----:::--:
:-----:-:=#%%%###%%#@@%%@@@@@@%%##%@@@@%%%@@@@%%%%**%%%%%*%@@@@@@@%%@@@@@@@@@@@@@@@#::::-----------:
:-----:-:=%%%##%%%#%@@%%@@@%%@%%%%%@@@@%%%@@@%%%%%==+***%*%@@@@@@@%@@@@@@@@@@@@@@@@*:::-------------
:-----:-:=%%#%%@@#%@@@%@@@###@@%%%%@@@@@%%@@@%%%%%####**#*%@@@@@@@%@@@@@@@@@@@@@@@%=::--------------
--------:=%#%@@@%#%@@@@@@@+#%@@%@%#@@@@@@%%@%%%%%%+*##%%%*%@@@@@@@@@@@@@@@@@@@@@@@*-:---------------
:-------:=%%@@@@%%%@@@@@@@*#@@@@@%#@@@@@@@@@%%%%%%***+++#*%@@@@@@@@@@@@@@@@@@@@@@#=----------------:
:-------:=%@@@@@@%@@@@@@@@%%@@@@@%%@@@@@@@@%%%%%%%%%%%%%%*%@@@@@@@@@@@@@@@@@@@%*+=-----------------:
:-------:=%@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%@#+***#%*%@@@@@@@@@@@@@@@@@@@%=-------------------:
:-------:+@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%@%###**%*%@@@@@@@@@@@@@@@@@@@%+-------------------:
--------:*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%@##%%%%%*%@@@@@@@@@@@@@@@@@@@@*-------------------:
---------#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%@####**#*%@@@@@@@@@@@@@@@@@@@@*-------------------:
---------#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%##%%%%*%@@@@@@@@@@@@@%%@@@@@*-------------------:
---------*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%#++**##*%@@@@@@@@@@@@%%%%@@@%*----------------=--:
----------#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%#####*%@@@@@@@@@@@@%@@@@@@%=-------------------:
----------=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%@#*#####*@@@@@@@@@@@@@@@@@@@@#--------------------:
::::::::::-+%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%#*#####*@@@@@@@@@@@@@@@@@@@@%=:::::::------:::--::
::::::::::-=*%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%@%####%##@@@@@@@%%@@@@@@@@@%%%+:::::::::::::::::::-
*/

// Never Gonna Give You Up
// Never Gonna Let You Down

int main(){
    return 0;
}