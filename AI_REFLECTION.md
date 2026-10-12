# AI Reflection

**Tools used**
I wrote and compiles the code myself but used claude to help me in the game_time.cpp code

**One decision**
I gave Claude the assignment and asked for both programs. Claude's first game_time.cpp declared each int variable on its own line. I then asked: "you can just do one int and do all the variable in one line." Claude combined them into one declaration but pointed out that MINUTES_PER_HOUR has to stay on its own line because it is a const, and that the long line is harder to read. I [accepted the one-line version / went back to one variable per line] because [your reason, e.g. "it was shorter" or "the course style asks for readable spacing"].

**Verification**
Before running anything I calculated the expected results by hand: 78 minutes is 1 hour 18 minutes, 144 is 2 hours 24, and the difference of 66 is 1 hour 6. [Paste your result: My output matched.] I also tested 97 and 253 minutes, expecting 1 h 37 min, 4 h 13 min, and a difference of 2 h 36 min, and [it matched / describe any fix]. For the diamond, I compared each of the seven lines against the assignment, counting spaces and stars.

**Learning**
I can now explain how / gives whole hours and % gives remaining minutes. I still need to practice [your real item, e.g. "writing the diamond output without help" or "predicting output before running it"].
