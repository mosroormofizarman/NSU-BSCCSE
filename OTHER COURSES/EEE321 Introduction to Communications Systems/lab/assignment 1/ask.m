%name: Mohammed Mahmudur Rahman
%ID# 1520386043
%Section: 03

clc, clear all; 

A= [0 1 1 0 1 0 0 1 1 0] ;

n= length(A);
mt= [];

for i= 0: 1: n-1;
    mt((i*100)+1: 1: ((i+1)*100)+1) = A(i+1);
end

t= 0: 0.01 : n;
ct= sin(2*pi*3*t);

ask= mt.*ct

plot(t, ask);
grid on;
ylim([ -1.5 1.5]);
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');
    