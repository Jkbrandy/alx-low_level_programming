#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * @c - represents the character
 * Return: 1 if c is a letter and
 * 0 in all other instances
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
