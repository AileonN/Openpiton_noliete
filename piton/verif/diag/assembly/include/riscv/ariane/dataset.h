
#define ARRAY_SIZE 144 


#define DIM_SIZE 12 


typedef int data_t;
static data_t input1_data[ARRAY_SIZE] = 
{
    0,   3,   2,   0,   3,   1,   0,   3,   2,   3,   2,   0,   3,   3,   1,   2,   3,   0,   0,   1, 
    1,   1,   2,   3,   1,   2,   3,   1,   1,   3,   2,   2,   0,   1,   3,   2,   2,   2,   0,   0, 
    1,   0,   1,   3,   3,   0,   3,   3,   3,   3,   0,   3,   2,   1,   2,   2,   0,   0,   3,   0, 
    1,   1,   0,   3,   3,   1,   2,   3,   3,   0,   1,   2,   1,   0,   1,   2,   2,   1,   0,   3, 
    1,   0,   2,   2,   1,   1,   1,   1,   1,   1,   2,   0,   3,   1,   1,   2,   2,   3,   3,   1, 
    3,   2,   0,   0,   0,   3,   3,   3,   2,   1,   2,   3,   1,   0,   0,   0,   0,   1,   2,   2, 
    1,   1,   3,   3,   3,   1,   1,   2,   3,   1,   3,   3,   2,   3,   2,   1,   2,   3,   0,   2, 
    2,   1,   1,   0
};

static data_t input2_data[ARRAY_SIZE] = 
{
    1,   1,   0,   3,   1,   2,   0,   0,   0,   0,   0,   2,   1,   2,   3,   0,   0,   3,   3,   2, 
    2,   1,   2,   3,   3,   0,   2,   2,   1,   1,   2,   2,   0,   2,   2,   1,   2,   3,   2,   2, 
    3,   3,   2,   2,   1,   1,   1,   1,   2,   1,   2,   2,   3,   3,   3,   0,   0,   3,   2,   3, 
    2,   3,   1,   2,   1,   1,   2,   2,   0,   1,   0,   3,   2,   1,   1,   1,   2,   0,   1,   2, 
    2,   0,   2,   1,   3,   3,   2,   3,   2,   0,   3,   1,   3,   3,   2,   0,   1,   0,   1,   1, 
    2,   2,   1,   1,   2,   2,   1,   2,   3,   3,   1,   3,   2,   2,   2,   3,   3,   1,   0,   2, 
    1,   0,   0,   0,   1,   1,   2,   0,   3,   2,   3,   3,   0,   2,   3,   1,   0,   0,   2,   1, 
    2,   0,   2,   1
};

static data_t verify_data[ARRAY_SIZE] = 
{
   39,  30,  31,  32,  30,  33,  45,  26,  34,  37,  30,  39,  28,  30,  34,  31,  27,  37,  40,  20, 
   28,  26,  31,  40,  38,  33,  32,  32,  26,  25,  43,  29,  31,  28,  34,  39,  23,  23,  27,  24, 
   22,  22,  34,  15,  36,  26,  32,  32,  31,  31,  26,  29,  30,  34,  37,  20,  28,  25,  30,  38, 
   33,  33,  33,  33,  37,  31,  40,  22,  31,  31,  31,  33,  26,  25,  24,  27,  25,  20,  32,  14, 
   23,  26,  25,  24,  22,  19,  22,  21,  22,  22,  25,  20,  23,  17,  21,  28,  38,  35,  37,  36, 
   28,  39,  48,  30,  31,  30,  34,  50,  22,  21,  22,  23,  20,  25,  26,  17,  18,  16,  21,  25, 
   42,  34,  40,  39,  40,  38,  50,  29,  37,  39,  41,  44,  35,  31,  29,  33,  27,  34,  39,  25, 
   23,  30,  24,  40
};
