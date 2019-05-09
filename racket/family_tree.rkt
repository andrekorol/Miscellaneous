#lang datalog

% parent is an already defined rule

child(X, Y) :- parent(Y, X).

ancestor(X, Y) :- parent(X, Y).
ancestor(X, Y) :- parent(X, Z), ancestor(Z, Y).

descend(X, Y) :- child(X, Y).
descend(X, Y) :- child(X, Z), descend(Z, Y).

% example family
parent(marcos, andre).
parent(heinz, marcos).
parent(joachin, heinz).
parent(joachin, gisela).
parent(heinz, sieg).
parent(sieg, wesley).
