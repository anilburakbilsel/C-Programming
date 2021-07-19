You will find ome basic but fundemental information about Programming and C/C++ in this place. :)

We can use calloc and malloc to create objects at runtime. malloc allocates memory on the heap. Data assigned to variables on the heap continues to exist even after you have exited the function in which they were allocated.

The local variables declared inside a function are allocated memory in an area called the stack. When you exit from the function, the variables on the stack are cleared up. In stacks, the memory allocation happens on contiguous blocks of memory -> this is known as Stack Allocation. We call it a stack memory allocation because the allocation happens in the function call stack.

The heap is where the global data is stored in the memory. It is also known as the dynamic memory. (The dynamic memory that we typically allocate through calls to malloc() in a C program gives us a contiguous chunk of memory from the "heap" part of the virtual address space of the process making the call.) Heap is the memory region that is grown dynamically (based on the runtime memory allocation requests) and shrunk dynamically (based on the runtime memory de-allocation requests).

malloc: allocates size bytes of uninitilazied storage. we need to then cast it since it returns a generic pointer (hence we need to cast it to a specific type of pointer)