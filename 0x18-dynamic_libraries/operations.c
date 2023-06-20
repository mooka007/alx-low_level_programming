int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);

/**
 * * add - adds two integers
 * * Author - MoOka
 * * @i: first integer to add
 * * @k: second integer to add
 * * Return: the sum
 * */

int add(int i, int k)
{
		return (i + k);
}

/**
 * * sub - subtracts two integers
 * * Author - MoOka
 * * @i: first integer to add
 * * @k: second integer to add
 * * Return: the subtract
 * */

int sub(int i, int k)
{
		return (i - k);
}

/**
 * * mul - multiplies two integers
 * * Author - MoOka
 * * @i: first integer to add
 * * @k: second integer to add
 * * Return: the multiple
 * */

int mul(int i, int k)
{
		return (i * k);
}

/**
 * * div - divideds two integers
 * * Author - Mooka
 * * @i: first integer to add
 * * @k: second integer to add
 * * Return: the dividend integer
 * */

int div(int i, int k)
{
		return (i / k);
}

/**
 * mod - finds the modulus of two integers
 * Author - MoOka
 * @i: first integer to add
 * @k: second integer to add
 * Return: the modulus
 */

int mod(int i, int k)
{
		return (i % k);
}
