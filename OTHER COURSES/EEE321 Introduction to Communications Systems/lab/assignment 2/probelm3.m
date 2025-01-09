%name: Mohammed Mahmudur Rahman
%ID# 1520386043
%Section: 03

clc, clear all;

fs= 8000;
fc= 300;

t= [0: 1: 5*fs]/fs;

x= sin(20*pi*t) + 2*sin(40*pi*t);

y= ammod(x,fc,fs);
z= ssbmod(x,fc,fs);

p= amdemod(x,fc,fs);
q= ssbdemod(x,fc,fs);

subplot(5,1,1);
plot(t,x);
legend('Message Signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

subplot(5,1,2);
plot(t,y);
legend('DSB Modulated Signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

subplot(5,1,3);
plot(t,z);
legend('SSB Modulated signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

subplot(5,1,4);
plot(t,p);
legend('DSB demodulated signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');

subplot(5,1,5);
plot(t,q);
legend('SSB Demodulated signal');
title('Name: Mohammed Mahmudur Rahman, ID# 1520356043. sec# 03');
