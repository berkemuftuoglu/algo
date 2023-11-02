#include "imports.h"

regex ipv4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])"); 
regex ipv6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
regex email("([a-zA-Z0-9_\\-\\.]+)@([a-zA-Z0-9_\\-\\.]+)\\.([a-zA-Z]{2,5})");
regex url("((http|https)\\:\\/\\/)?([a-zA-Z0-9_\\-\\.]+)\\.([a-zA-Z]{2,5})(\\/[a-zA-Z0-9_\\-\\.]+)*");
regex date("([0-9]{4})\\-([0-9]{2})\\-([0-9]{2})");

//regex functions
regex_match("string", ipv4); // returns true if the regex matches the entire string
regex_search("string", ipv4); // returns true if the regex is found anywhere in the string

