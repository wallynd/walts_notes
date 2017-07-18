
### Fundamental Types

## Void Type

void - incomplete type

## Null Pointer (C++11)

std::nullptr_t is the type of the null pointer literal, nullptr. 

## Boolean Type

bool - true or false

## Character Types

signed char - signed character representation.
unsigned char - unsigned character representation. Also used for Raw Memory.
char - character representation which can be most efficiently processed on the target system (typically signed)
wchar_t - wide character representation
char16_t - UTF-16 character representation 
char32_t - UTF-32 character representation


## Integer Types 

# Signedness

signed
unsigned

# Modifier: Size
short
long 
long long (C++11)

| Type Specifier       | Equivalent Type        | C++ Standard | LP32         | ILP32        | LLP64        | LP64         |
| -------------------- | :--------------------- | :----------: | :----------: | :----------: | :----------: | :----------: | 
short                  | short int              | at least 16  | 16           | 16           | 16           | 16           |     
short int              |                        |              |              |              |              |              |   
signed short           |                        |              |              |              |              |              | 
signed short int       |                        |              |              |              |              |              | 
unsigned short         | unsigned short int     |              |              |              |              |              |     
unsigned short int     |                        |              |              |              |              |              | 
int                    | int                    | at least 16  | 16           | 32           | 32           | 32           |     
signed                 |                        |              |              |              |              |              |   
signed int             |                        |              |              |              |              |              | 
unsigned               | unsigned int           |              |              |              |              |              |     
unsigned int           |                        |              |              |              |              |              | 
long                   | long int               | at least 32  | 32           | 32           | 32           | 64           |     
long int               |                        |              |              |              |              |              |   
signed long            |                        |              |              |              |              |              | 
signed long int        |                        |              |              |              |              |              | 
unsigned long          | unsigned long int      |              |              |              |              |              |     
unsigned long int      |                        |              |              |              |              |              | 
long long              | long long int (C++11)  | at least 64  | 64           | 64           | 64           | 64           |     
long long int          |                        |              |              |              |              |              |   
signed long long       |                        |              |              |              |              |              | 
signed long long int   |                        |              |              |              |              |              | 
unsigned long long     | unsigned long long int |              |              |              |              |              |     
unsigned long long int | (C++11)                |              |              |              |              |              | 


##Data models

#32 bit systems:

LP32 or 2/4/4 (int is 16-bit, long and pointer are 32-bit)
- Win16 API
ILP32 or 4/4/4 (int, long, and pointer are 32-bit);
- Win32 API
- Unix and Unix-like systems (Linux, Mac OS X)

#64 bit systems:

LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit)
- Win64 API
LP64 or 4/8/8 (int is 32-bit, long and pointer are 64-bit)
- Unix and Unix-like systems (Linux, Mac OS X)

Floating Point Types

Float - IEEE-754 32 bit floating point type
Double - IEEE-754 64 bit floating point type
Long Double - 80-bit x87 floating point type



## Const and Volatile

const - object cannot be modified
volatile -  Treated as a side effect. Every access cannot be optimized out or reordered with another side effect. 
mutable - does not affect the externally visible state of the class

const_cast to remove constness

## Storage Class Specifiers 
auto - automatic storage duration
register - automatic storage duration. Also hints to the compiler to place the object in the processor's register.
static - static or thread storage duration and internal linkage
extern - static or thread storage duration and external linkage
thread_local - thread storage duration


# Storage Duration
Automatic - allocated at the beginning of the enclosing code block and deallocated at the end.
Static - allocated when the program begins and deallocated when the program ends, Only one instance of the object exists.
Thread - allocated when the thread begins and deallocated when the thread ends, Each thread has its own instance of the object. thread_local can appear together with static or extern to adjust linkage.
Dynamic -  allocated and deallocated per request by using dynamic memory allocation functions

# Linkage 
No Linkage - The name can be referred to only from the scope it is in.
Internal Linkage -  The name can be referred to from all scopes in the current translation unit. STATIC
External Linkage - The name can be referred to from the scopes in the other translation units. EXTERN


SPECIFIERS
const
constexpr (since C++11)
register(2)
volatile
auto(1)
static


TYPE TOOLS
typedef
typeid
typename
sizeof(1)


TYPE ALIGNMNET (SIZE)
alignas (since C++11)
alignof (since C++11)

