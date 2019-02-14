

typedef struct DoubleSet_s DoubleSet;

DoubleSet *DoubleSet_Create();
void DoubleSet_Free(void *set);

void DoubleSet_SetA(struct DoubleSet set, float a);
void DoubleSet_SetB(struct DoubleSet set, float b);
void DoubleSet_SetC(struct DoubleSet set, float c);

void DoubleSet_Swap(struct DoubleSet set);
void DoubleSet_Print(struct DoubleSet set);
