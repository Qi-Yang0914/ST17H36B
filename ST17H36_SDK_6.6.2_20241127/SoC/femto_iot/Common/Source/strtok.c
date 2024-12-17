#include <string.h>

static char *g_saveptr = NULL;

/****************************************************************************
 * Name: strtok_r
 *
 * Description:
 *   The strtok_r() function is a reentrant version strtok().
 *   Like strtok(), it  parses  a string into a sequence of
 *   tokens.  On the first call to strtok() the string to be
 *   parsed should be specified in 'str'.  In each subsequent
 *   call that should parse the same string, 'str' should be
 *   NULL.
 *
 *   The 'saveptr' argument is a pointer to a char *
 *   variable  that  is  used internally by strtok_r() in
 *   order to maintain context between successive calls
 *   that parse the same string.
 *
 *   On the first call to strtok_r(), 'str' should point to the
 *   string to be parsed, and the value of 'saveptr' is
 *   ignored.  In subsequent calls, 'str' should be NULL, and
 *   saveptr should be unchanged since the previous call.
 *
 *   The 'delim' argument specifies a set of characters that
 *   delimit the tokens in the parsed string.  The caller
 *   may specify different strings in delim in successive
 *   calls that parse the same string.
 *
 *   Each call to strtok_r() returns a pointer to a null-
 *   terminated string containing the next token. This
 *   string  does not include the delimiting character.  If
 *   no more tokens are found, strtok_r() returns NULL.
 *
 *   A sequence of two or more contiguous delimiter
 *   characters in the parsed string is considered to be a
 *   single delimiter. Delimiter characters at the start or
 *   end of the string are ignored.  The tokens returned by
 *   strtok() are always non-empty strings.
 *
 * Returned Value:
 *    strtok_r() returns a pointer to the next token, or NULL
 *    if there are no more tokens.
 *
 ****************************************************************************/

char *strtok_r(char *str, const char *delim, char **saveptr)
{
  char *pbegin;
  char *pend = NULL;

  /* Decide if we are starting a new string or continuing from
   * the point we left off.
   */

  if (str)
    {
      pbegin = str;
    }
  else if (saveptr && *saveptr)
    {
      pbegin = *saveptr;
    }
  else
    {
      return NULL;
    }

  /* Find the beginning of the next token */

  for (;
       *pbegin && strchr(delim, *pbegin) != NULL;
       pbegin++);

  /* If we are at the end of the string with nothing
   * but delimiters found, then return NULL.
   */

  if (!*pbegin)
    {
      return NULL;
    }

  /* Find the end of the token */

  for (pend = pbegin + 1;
       *pend && strchr(delim, *pend) == NULL;
       pend++);

  /* pend either points to the end of the string or to
   * the first delimiter after the string.
   */

  if (*pend)
    {
      /* Turn the delimiter into a null terminator */

      *pend++ = '\0';
    }

  /* Save the pointer where we left off and return the
   * beginning of the token.
   */

  if (saveptr)
    {
      *saveptr = pend;
    }

  return pbegin;
}


/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: strtok
 *
 * Description:
 *    The  strtok()  function  parses  a string into a
 *    sequence of tokens.  On the first call to strtok() the
 *    string to be parsed should be specified in 'str'.  In
 *    each subsequent call that should parse the same string,
 *    'str' should be NULL.
 *
 *    The 'delim' argument specifies a set of characters that
 *    delimit the tokens in the parsed string.  The caller
 *    may specify different strings in delim in successive
 *    calls that parse the same string.
 *
 *    Each call to strtok() returns a pointer to a null-
 *    terminated string containing the next token. This
 *    string  does not include the delimiting character.  If
 *    no more tokens are found, strtok() returns NULL.
 *
 *    A sequence of two or more contiguous delimiter
 *    characters in the parsed string is considered to be a
 *    single delimiter. Delimiter characters at the start or
 *    end of the string are ignored.  The tokens returned by
 *    strtok() are always non-empty strings.
 *
 * Returned Value:
 *    strtok() returns a pointer to the next token, or NULL
 *    if there are no more tokens.
 *
 ****************************************************************************/

//#undef strtok /* See mm/README.txt */
char *strtok(char *str, const char *delim)
{
  return strtok_r(str, delim, &g_saveptr);
}


