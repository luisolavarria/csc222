GROUP                                    TYPE NAME                 SIZE/PRECISION                                      NOTES
CHARACTER TYPES                  char                           1 byte (at least 8 bits)                     Stores a single character       
                                char16_t                        At least 16 bits                             For larger character sets
                                char32_t                        at least 32 bits                             supports even larger character sets
                                wchar_t                         Varies                                       represents the largest supported character set
INTEGER TYPES                   signed char                     same size as char, at least 8 bits           can represent negative values
                                signed short int                at least 16 bits                             abbreviations: signed short, short int, or short
                                signed int                      at least 16 bits                             abbreviations: int
                                signed long int                 at least 16 bits                             abbreviations: long int, long
                                signed long long int            at least 16 bits                             abbreviations: long long int, long long
INTEGER TYPES                   unsigned char                   same size as signed char, at least 8 bits    Can only represednt positive values
                                unsigned short int              same size as signed short int                Can be abbreviated as unsigned short
                                unsigned int                    same size as signed in                       Can be abbreviated as unsigned 
                                unsigned long int               same size as signed long int                 Can be abbreviated as unsigned long
                                unsigned long long int          same size as signed long long int            Can be abbreviated as unsigned long long
FLOATING-POINT TYPES            float                           precision depends on implementation          used for floating-point numbers with less precision
                                double                          precision no less than float                 greater precision
                                long double                     precision no less than double                even higher precision
BOOLEAN TYPE                    bool                            can hold true or false                       
VOID TYPE                       void                            No storage                                   used to indicate the absence of data (no type)
NULL POINTER                    decltype(nullptr)               represents a null pointer                    Special type for null pointer