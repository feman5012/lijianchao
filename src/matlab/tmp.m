% n = [-2: 10];
% x = [1:7, 6:-1:1];
% 
% 
% [x11, n11] = sigshift(x, n, 5);
% [x12, n12] = sigshift(x, n, -4);
% 
% [x1, n1] = sigadd(2*x11, n11, -3*x12, n12);
% 
% subplot(3, 1, 1)
% stem(n11, x11)
% axis([-10, 20, -30, 20])
% 
% subplot(3, 1, 2)
% stem(n12, x12)
% axis([-10, 20, -30, 20])
% 
% 
% subplot(3, 1, 3)
% stem(n1, x1)
% axis([-10, 20, -30, 20])

% =========================================================================


% x = [1:1:5];
% 
% if any(x >= 5)
%     error('something wrong')
%     
% end
% =========================================================================

% example 3.3
% wp = [0:1:500]*pi / 500;
% wn = -fliplr(wp);
% w = [wn(1: (length(wn)-1)), wp];
% 
% X = exp(j*w) ./ (exp(j*w) - 0.5*ones(1, length(w)));
% magX = abs(X); angX = angle(X);
% subplot(2, 1, 1)
% plot(w/pi, magX)
% subplot(2, 1, 2)
% plot(w/pi, angX)

% example 3.4
% n = [-1: 3]; x = [1: 5];
% k = [0: 500]; w = (pi/500)*k;
% X = x * (exp(-j*pi/500)) .^ (n'*k);
% magX = abs(X); angX = angle(X);
% subplot(2, 1, 1); plot(k/500, magX); grid
% subplot(2, 1, 2); plot(k/500, angX/pi); grid


% example 3.7
% x1 = rand(1, 11); x2 = rand(1, 11); n = (0: 10);
% alpha = 2; beta = 3;
% k = [0: 500]; w = (pi/500) * k;
% X1 = x1 * (exp(-j*pi/500)) .^ (n'*k);
% X2 = x2 * (exp(-j*pi/500)) .^ (n'*k);
% x = alpha*x1 + beta*x2;
% X = x * (exp(-j*pi/500)) .^ (n'*k);
% 
% subplot(3, 1, 1)
% plot(w/pi, abs(X1)); axis([0, 1, 0, 30])
% subplot(3, 1, 2)
% plot(w/pi, abs(X2)); axis([0, 1, 0, 30])
% subplot(3, 1, 3)
% plot(w/pi, abs(X)); axis([0, 1, 0, 30])

n = [0: 500];
x1 = cos((2*pi/500)*n);
x2 = cos((2*pi/500)*n);


alpha = 1; beta = 1;
k = [0: 500]; w = (pi/500) * k;
X1 = x1 * (exp(-j*pi/500)) .^ (n'*k);
X2 = x2 * (exp(-j*pi/500)) .^ (n'*k);
x = alpha*x1 + beta*x2;
X = x * (exp(-j*pi/500)) .^ (n'*k);

subplot(3, 1, 1)
plot(w/pi, abs(X1)); 
subplot(3, 1, 2)
plot(w/pi, abs(X2)); 
subplot(3, 1, 3)
plot(w/pi, abs(X)); 




















