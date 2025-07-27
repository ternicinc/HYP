# Structure

This document will go in depth on the strucutre of the operating system, covering the basics and more
advanced parts. Our main strucutre will be in here, please note: this document is alot of plain text, to 
truely understand it, you will need to be prepared to read the document, in full.

We understand that it may be hard to focus, that is why we are going to recommend breaks trough the docmument.

# Actual Strucutre

The actual structure is fairly simple, we adapted it from FreeBSD and OpenBSD, if you are not completly
known with those, at the end of this document will be a reference section, this includes all the links, 
Including FreeBSD and OpenBSD. Let's start with diving into the basics. 

We are not only using FreeBSD and OpenBSD, we recently decided to add NetBSD as well, All our based-off sources
have a reason why we have picked them. The main kernel is focussed on the FreeBSD & OpenBSD code, but for port-
ability, we picked NetBSD. Since it is not as resource intensive, and can run pretty much anywhere.

As of the strucuture of this documentation, everything will have it's own respective folder, for example,
our networking stack information will be in a folder matching it's name and purpose, in this case, it will be
called networking. So as you may see, it is pretty straight forward.

Of course, this goes more in depth the more you dive into the documentation, for example in networking, 
we wil also "teach" you the basics of networking, and how it all hangs together. We are trying to make your
experience as easy as we can, yet we want to make it a little hard, just so you can try and understand, and so
you actually learn.
