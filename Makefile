dump: memory.txt
	strings -n 16 - -t x memory.txt

app:
	cc app.c -o app

app_optimized:
	cc -O3 app.c -o app
	strip -S app

clean:
	rm app
	rm memory.txt

memory.txt: pid.txt
	lldb --attach-pid $$(<pid.txt) --source lldb_commands.lldb
	rm pid.txt

pid.txt: app
	./app & echo $$! > pid.txt
