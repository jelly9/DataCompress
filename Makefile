
DataCompress: DataCompress.cpp
	g++ -o $@ $^

.PHONY:cl

cl:
	rm DataCompress
