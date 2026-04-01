# Developer Log
## Programming Assignment 2

### Entry 1 ###
**Date:** 2026-01-31
**Entry Type:** Edge Case
**Task worked on:** Testing the Edge cases of the stack functions
**Decision:** Create test code within the main function
**What I tried:** I tested creating the stack and long with the function used, ensuring they worked with an empty stack. 
**Fix:** There was an issue with the pop function when attempting the function with an empty stack. I updated the function so it can handle the error.

---

### Entry 2
**Date:** 2026-03-31
**Entry Type:** Bug Fix
**Task worked on:** Worked on the Tokenizer function
**Issue:** When creating the tokens, the output was not as expected.
**What I tried:** I used test strings to test the Tokenizer function and compared it to the expected output to pinpoint the issue within the function. I continue to edit the function
**Fix:** The function was not correctly handling blank spaces, so I edited the if conditions to do so.

---

### Entry 3
**Date:** 2026-03-31
**Entry Type:** Bug Fix 
**Task worked on:** Worked on the isValidPostfix
**Issue:** Some of the invalid postfix were being evaluated as valid
**What I tried:** I identified the key features of the post-fix and printed out the tokens. 
**Fix:** There was an issue with the tokenizer function where the final number may not be identified as a token, affecting the isValidPostfix function. 

---

### Entry 4
**Date:** 2026-03-31
**Entry Type:** Bug Fix
**Task worked on:** Worked on the isValidInfix
**Issue:** Some of the infixed were not evaluating to the expected value
**What I tried:** Observed the common patterns in the expressions that were evaluated incorrectly. From there, I began editing the conditions with parentheses and operators. 
**Fix:** There were additional conditions within the parentheses and operator branch necessary for the infix to be evaluated correctly. 

---
### Entry 5
**Date:** 2026-03-31
**Entry Type:** Bug Fix
**Task worked on:** Worked on the in
**Issue or decision:** The postfix output was incorrect, only the first token was appearing in the result and the operators were not correctly ordered.
**What I tried:** I tried to observe why only one token was being shown then began working on why the operations were being incorrectly ordered
**Fix:** I double-checked any incorrect syntax and real
**Commit(s):**
---
### Entry 6
**Date:** 2026-03-31
**Entry Type:** Engineering Decision
**Task worked on:** multiple helper functions 
**decision:** Create helper functions to simplify the logic of the code. 
**What I tried:** I found that there were recurring conditions that needed to be condensed.
**Resolution:** I put that code within functions to create more readable, simplified code. 
