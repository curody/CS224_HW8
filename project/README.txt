cody-curry/CS224_HW8/project
--------------------------------
CMake Project

building:
	# cd ./build
	cmake ../source
	OR
	cmake -g "Unix Makefiles" ../source

making:
	# make help
	make

installing:
	# installs to default path /usr/local/
	sudo make install

running:
	# runs normally, although testing just to
	#	see if it runs doesn't work. How can you
	# 	run a "published" version normally but a
	#	test version of the same thing breaks?
	#	Cmake must be doing something silly
	./Cma

distributing:
	sudo make packages
	OR
	sudo cpack -G ZIP

# Would be interesting if MinGW could interpret
#	this and install on a Windows machine correctly.
# I doubt the source code is Windows-friendly, though
