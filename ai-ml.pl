male(jake).
male(smith).
female(anna).
female(sara).

siblings(jake, anna).
siblings(anna, jake).

parentOf(smith, jake).
parentOf(smith, anna).
parentOf(sara, jake).
parentOf(sara, anna).

isFather(A,B) :- male(A), parentOf(A,B).
isMother(A,B) :- female(A), parentOf(A,B).
isBrother(A, B) :- male(A), siblingOf(A, B).
isSister(A, B) :- female(A), siblingOf(A, B).