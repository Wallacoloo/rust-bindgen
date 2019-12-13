// bindgen-flags: --no-derive-copy


/// <div rustbindgen derive="Copy" derive="Clone"></div>
struct inner { int i; };

union nsStyleUnion {
    struct inner i;
    int primitiveInt;
};
