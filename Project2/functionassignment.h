#pragma once

std::vector<int> funcass(std::vector<int>& ss)
{
	std::vector<int> kk{ 5,4,10 };
	kk.insert(kk.end(), ss.begin(), ss.end());
	ss.clear();
	return kk;
}
