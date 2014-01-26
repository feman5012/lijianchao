% Example 2.8
% This is for a simple kvl & kcl application
%
% (1)*i1 + (-1)*ia = 6     //i1 -ia -6 = 0
% (50)*i1 + (10)*ia = 120   //-120 + 10ia + 50*i1 = 0

A = [1, -1; 50, 10]; b = [6, 120]'; Ab = [A b];
rref(Ab)

% Example 2.9
% This is for another simple kvl & kcl application
%
% (5)*iz + (20)*io = 500//-500 + 5iz + 20io = 0
% (-6)*iz + (1)*io = 0//io - iz - 5iz = 0
A = [5, 20; -6, 1]; b = [500, 0]'; Ab = [A b];
rref(Ab)

% Example 2.10
% This is for another simple kvl & kcl application
%
% (6)*is + (0)*io = 10 //6is - 10 = 0
% (-3)*is + (5)*io = 0 // -3is + 2io + 3io = 0
A = [6, 0; -3, 5]; b = [10, 0]'; Ab = [A b];
rref(Ab)