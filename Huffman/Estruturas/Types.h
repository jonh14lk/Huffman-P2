typedef struct huff_heap huff_heap;
typedef struct huff_node huff_node;
typedef struct hash hash ;
typedef struct hash_node hash_node;

struct huff_node
{
  int freq;
  void *item;
  huff_node *left, *right;
};
struct huff_heap 
{
  huff_node *data[257];
};

struct hash_node
{
    void *element ;
    unsigned int shift_bit ;
    int bits ;
    int frequencia ;
};
struct hash
{
    hash_node *table[500] ;
};
