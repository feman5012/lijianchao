function [y, n] = sigfold(x, n)
% Generate y(n) = x(-n)
% ------------------------------------------
% [y, n] = sigfold(x, n)
%
y = fliplr(x); n = -fliplr(n);
