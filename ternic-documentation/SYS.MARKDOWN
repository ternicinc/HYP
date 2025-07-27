# SYS

This SYS file, we go in depth on design choices of our operating system, and on some important parts to note. Because we are not just an operating-sytsem, we are a sort of specialized and proper engineerd operating sytsem,
based on three others. This may sound very weird, but we are picking parts and features from three BSD operating systems, and putting them into one.

Let's start with some important changes we are doing, and what we are picking from what. Essentially, we are picking the base as FREEBSD, but doing it in a complete rewrite. Of course, it's going to take some time to actually
do so, but we need to be able to understand the full code base, and this is the best way to do so.

At the point of writing this, we are currently making an entire new folder, and start coding in there. So we are actually starting from ZERO, only using reference. We are going to start with a sys/ folder, which in FreeBSD is
the Kernel, this folder will possibly consume the most amount of time, since it is a pretty large and intense folder. The NETBSD source has the sys/arch which is the most cleanest, and has to most cleanest multi arch support,
we will pick architectures from there, or, rather the portabillity layers. From OPENBSD we will get the security enhancements, from it's sys/kern & sys/arch where needed. We have a layout where we the files are located that
we need, for example sys/net, sys/netinet etc. We will need to get the layout list, and properly pull the references we need, in this case we will need to properly get the correct files and folders. The main kernel is into
the sys/kern file, depending on which reference / base we decide to pick. in OPENBSD we will possibly pick sys/kern/kern_pledge and unveil, and of course PF firewall, because that is one of the nicest features we can pick.

From NETBSD, i will pick the build system, so we can build on and for multi-arch. Which is the best feature i have seen there, i mean, there are a lot of features, but this one stands out. We will try to possibly do this as 
first step, we will modify the build system for our operating system. I have noticed that it is ~3000 lines, just for the main build.sh file, but that wont be a real issue, We will be able to convert it, or start with a Makefile
system, which depends on how we want to do it. We are going to be using the build scripts, this does mean we will need to properly see how we will structure the operating system. 

It is important that you (the readers) also know our structure, we will link it into this file later on, under the resources section, which includes reference links and assets. Our file and folder strucutre will be similar like 
NETBSD but will be completly different on the inside. Only the file and folder strucuture is the same, the build system and of course the arch strucutre, but for that we will need to properly see how our kernel and base will 
compile. We wil need to create Makefiles anyway, so we can properly build.
