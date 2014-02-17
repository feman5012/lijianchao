% PlotCircle_2.m:   Plot a circle of radius 1 with specified center
%       Drawn 'circle' is approximated by lines drawn between 50 points
% Input: x and y coordinates specifying center of circle

cx = input('Enter x coordinate of circle center: ');
cy = input('Enter y coordinate of circle center: ');

n = 50;                           % 50 point approximation
R = 1;                            % Unit radius
angle = 0:2*pi/n:2*pi;            % vector of angles at which points are drawn

x = cx+R*cos(angle);  y = cy+R*sin(angle); % Coordinates of circle
plot(x,y);                                 % Plot the circle

axis equal;
grid on;