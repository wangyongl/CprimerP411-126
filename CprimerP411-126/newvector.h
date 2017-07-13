#pragma once

//定义动态分配int的vector 函数
#include <vector>

vector<int> & NewVector（）
{
	vector<int>  vec_ptr = new vector<int>();
   return vec_ptr;
}


