%this is for view point illustration

subplot(3, 2, 1); mesh(peaks(20)); title('default view point'); xlabel('x'); ylabel('y'); zlabel('z') % default behavior
subplot(3, 2, 2); mesh(peaks(20)); title('view point(-37.5, 30)'); view(-37.5, 30); xlabel('x'); ylabel('y'); zlabel('z') % default behavior
subplot(3, 2, 3); mesh(peaks(20)); title('view point(-7, 80)'); view(-7, 80); xlabel('x'); ylabel('y'); zlabel('z') % default behavior
subplot(3, 2, 4); mesh(peaks(20)); title('view point(-90, 0)'); view(-9, 0); xlabel('x'); ylabel('y'); zlabel('z') % default behavior
subplot(3, 2, 5); mesh(peaks(20)); title('view point(-7, -10)'); view(-7, -10); xlabel('x'); ylabel('y'); zlabel('z') % default behavior