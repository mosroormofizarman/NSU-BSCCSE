%name: Mohammed Mahmudur Rahman
%ID# 1520386043
%Section: 03

clc, clear all;

fc= 50;
dev= 10;
fs=1000;

t=[ 0: 1: fs]/fs;

x= sin(6*pi*t);
y= fmmod (x,fc,fs,dev);
z=fmdemod(y,fc,fs,dev);

subplot (4,1,1);
plot(t,x);
legend('message signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

subplot (4,1,2);
plot(t,y);
legend('FM modulated signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

subplot (4,1,3);
plot(t,x);
legend('FM demodulated signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

