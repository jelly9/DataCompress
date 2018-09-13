
DataCompress: DataCompress.cpp
	g++ -o $@ $^

.PHONY:clean

clean:
	rm DataCompress
