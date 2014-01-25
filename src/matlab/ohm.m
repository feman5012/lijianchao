% this is for ohm's law
load vi.dat
cur = vi(:, 2); vol = vi(:, 1);
plot(cur, vol)
title('ohm law'); xlabel('i(A)'); ylabel('v(V)');