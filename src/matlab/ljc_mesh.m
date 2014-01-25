% This is for ploting a mesh graph
x = -16: .5: 16;
y = x;
[X, Y]=meshgrid(x, y);
R = sqrt(X.^2 + Y.^2) + eps;
Z = sin(R) ./ R;
mesh(x, y, Z)