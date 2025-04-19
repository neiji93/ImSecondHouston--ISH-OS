//we gan use a table to mount kernel devices 
//the size of the table is approximatively 682 (mpi mpi etoile).
//notice that this is possible if we keep in mind that we already set 250 private kernel processes
//without the need of userspace. then here this is not a cipher.
//so, use a cipher roo if you want to move (std::move) userspace devixes to 
//kernel. afger that, in this file, we will have ro deal wirh equations and not models.
//so as this is not the first time we used esuations, it will be better to mount some userspace devices thr were not made for it at the kernel devixes.
//we can mount 682 userspace devixes to.kernel devices if we got some slots available.
