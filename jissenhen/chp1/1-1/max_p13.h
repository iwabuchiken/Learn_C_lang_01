
#if defined __cplusplus
    template <class Type> Type max(Type a, Type b)
    {
        return (a > b ? a : b);
    }
#else
    #define max(a, b) ((a) > (b) ? (a) : (b))
#endif
