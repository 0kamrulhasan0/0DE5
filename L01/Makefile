all: compile

compile:
	gcc -O0 -g -o out welcome.c
	
clean:
	rm out

r2:
	r2 -r profile.rr2 -e log.level=0 -d out
