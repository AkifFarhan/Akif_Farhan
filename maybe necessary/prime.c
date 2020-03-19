#include <stdio.h>
#include <math.h>
const int size = 40;
int a[40];
void sieve()
{
int i, j, root;
for(i = 2; i < size; i++) {
a[i] = 1;
}
root = sqrt(size);
print_ara();
for(i = 2; i <= root; i++) {
if(a[i] == 1) {
for(j = 2; i * j <= size; j++) {
a[i * j] = 0;
}
print_ara();
}
}
}
int is_prime(int n)
{
int i;
if(n < 2) {
return 0;
}
return a[n];
}
int main()
{
int n, m;
sieve();
while(1) {
printf("Please enter a number (enter 0 to exit): ");
scanf("%d", &n);
if(n == 0) {
break;
}
if(n >= size) {
printf("The number should be less than %d\n", size);
continue;
}
if(1 == is_prime(n)) {
printf("%d is a prime number.\n", n);
}
else {
printf("%d is not a prime number.\n", n);
}
}
return 0;
}
