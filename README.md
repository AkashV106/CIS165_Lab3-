# CIS165-lab3

Course section: CIS-165-B030

## Plans

**diamond.cpp:** The diamond has seven rows, so I'll use seven output statements, one per row. Each row gets its leading spaces first and then its stars: 3 spaces and 1 star, then 2 and 3, then 1 and 5, then 0 and 7, and back down with 1 and 5, 2 and 3, and 3 and 1. Each line ends with a newline.

**game_time.cpp:** I need two values, 78 minutes for Level 1 and 144 minutes for Level 2. I'll use a constant for 60 minutes per hour. For each level I'll divide by 60 to get whole hours and use % to get the leftover minutes. I'll subtract Level 1 from Level 2 to get the difference in minutes, then convert that the same way. Each result gets stored in a variable, and then I'll print three labeled lines: Level 1 time, Level 2 time, and how much longer Level 2 took.

## How to compile and run

```
g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond
./diamond
g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time
./game_time
```

## Tests

| Program/test | Values or pattern checked | Expected result before running | Actual output | Match or correction |
|---|---|---|---|---|
| diamond.cpp | Seven required lines | 3, 2, 1, 0, 1, 2, 3 leading spaces; 1, 3, 5, 7, 5, 3, 1 stars | 3, 2, 1, 0, 1, 2, 3 leading spaces; 1, 3, 5, 7, 5, 3, 1 stars | Match |
| game_time.cpp, assigned values | 78 and 144 minutes | Level 1: 1 h 18 min; Level 2: 2 h 24 min; difference: 1 h 6 min |Level 1: 1 h 18 min; Level 2: 2 h 24 min; difference: 1 h 6 min  | Match |
| game_time.cpp, changed values | 97 and 253 minutes | Level 1: 1 h 37 min; Level 2: 4 h 13 min; difference (156 min): 2 h 36 min | Level 1: 1 h 37 min; Level 2: 4 h 13 min; difference (156 min): 2 h 36 min | Match |

I restored 78 and 144 in game_time.cpp and completed final runs of both programs.

## Explanations

**1. How does diamond.cpp create the shape, and how did I check the spaces?**
Each output statement prints one row of the diamond. The number of leading spaces goes down by one each row until the middle row, which has none, and then goes back up. The number of stars goes up by two each row to the middle (1, 3, 5, 7), then back down. Spaces are hard to see, so I compared my output line by line against the assignment example and counted the characters in each row, checking that the stars lined up in a column.

**2. How do integer division and the remainder operator convert minutes to hours and minutes?**
When both numbers are ints, division drops the decimal part, so 78 / 60 gives 1, the number of whole hours. The remainder operator % gives what is left over after those whole hours, so 78 % 60 gives 18 minutes. Together they turn 78 minutes into 1 hour and 18 minutes.

**3. Trace the assigned values.**
level_one_minutes is 78 and level_two_minutes is 144. For Level 1, 78 / 60 = 1 hour and 78 % 60 = 18 minutes. For Level 2, 144 / 60 = 2 hours and 144 % 60 = 24 minutes. The difference is 144 - 78 = 66 minutes, and 66 / 60 = 1 hour and 66 % 60 = 6 minutes. So Level 2 took 1 hour and 6 minutes longer.

**4. Why store calculations in variables before using cout?**
It keeps the math separate from the printing, so the code is easier to read and I can tell whether a mistake is in the calculation or in the output. It also means I can reuse a result without calculating it again, and my cout lines stay short.
