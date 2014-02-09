% Example 2.8
% This is for a simple kvl & kcl application
%
% (1)*i1 + (-1)*ia = 6     //i1 -ia -6 = 0
% (50)*i1 + (10)*ia = 120   //-120 + 10ia + 50*i1 = 0
disp('Example 2.8')
A = [1, -1; 50, 10]; b = [6, 120]'; Ab = [A b];
rref(Ab)

% Example 2.9
% This is for another simple kvl & kcl application
%
% (5)*iz + (20)*io = 500//-500 + 5iz + 20io = 0
% (-6)*iz + (1)*io = 0//io - iz - 5iz = 0
disp('Example 2.9')
A = [5, 20; -6, 1]; b = [500, 0]'; Ab = [A b];
rref(Ab)

% Example 2.10
% This is for another simple kvl & kcl application
%
% (6)*is + (0)*io = 10 //6is - 10 = 0
% (-3)*is + (5)*io = 0 // -3is + 2io + 3io = 0
disp('Example 2.10')
A = [6, 0; -3, 5]; b = [10, 0]'; Ab = [A b];
rref(Ab)

% Example 2.11
% This is for model of amplifier
%
%   x = i1, i2, iB, iC, iE, iCC
%   co = R1, R2, RE, RC, VCC, b
% (1)*i1 + (0)*i2 + (0)*iB + (1)*iC + (0)*iE + (-1)*iCC = 0 // i1 + ic - iCC = 0
% (0)*i1 + (1)*i2 + (1)*iB + (0)*iC + (0)*iE + (0)*iCC = 0 // i2 + iB - i1 = 0
% (0)*i1 + (0)*i2 + (-1)*iB + (-1)*iC + (1)*iE + (0)*iCC = 0 // iE - iB - iC = 0
% (0)*i1 + (0)*i2 + (0)*iB + (1)*iC + (0)*iE + (0)*iCC = 0 // iC - biB = 0
% (0)*i1 + ()*i2 + ()*iB + ()*iC + ()*iE + ()*iCC = 0 // Vo + iE*RE - i2*R2 = 0
% ()*i1 + ()*i2 + ()*iB + ()*iC + ()*iE + ()*iCC = 0 // -i1*R1 + VCC - i2*R2 = 0
% disp('Example 2.11')
% syms R1 R2 RC RE VCC b
% [i1, i2, iB, iC, iE, iCC] = solve('i1','','','','','',
%                                  'i1', 'i2', 'iB', 'iC', 'iE', 'iCC')


Vb/R2 + (Vb-VCC)/R1 + Vc/RE - B*iB = 0
Vc = (iB+BiB) * RE
Vc = Vb - Vo










