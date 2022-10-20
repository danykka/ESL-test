vec3d: main.o vec3d.o
	gcc main.o vec3d.o -o vec3d

main.o: main.c
	gcc -c main.c

vec3d.o: vec3d.c vec3d.h
	gcc -c vec3d.c

clean:
	rm *.o output