%name: Mohammed Mahmudur Rahman
%ID# 1520386043
%Section: 03

clc, clear all;

A= [0 1 1 0 1 0 0 1 1 0];
n= length(A);

mt= [];

for i=0: 1: n-1;
mt((i*100)+1: 1: ((i+1)*100)+1) =A(i+1);
end

t= 0: 0.01: n;
fc =2;
f_dev=4;
ct= sin(2*pi*fc*t);
fsk = sin(2*pi*(fc+f_dev*mt).*t);


plot (t,fsk, 'b');
grid on;
ylim([-1.2 1.2]);
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');