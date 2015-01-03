#pragma once
#include "graph.h"
#include "Algorithm/Common/common_type.h"

class CClustering
{
public:
	int initObject;
	double paraH, paraSi;
	
public:
	CClustering(void);
	~CClustering(void);
	void AddObjectPool();
	void MainStep();
	void CleanObjectPool();
	void MeanShift();
	void GetArea(vector<int> vecObjectPool,vector<int> &vecInArea);
	double GetJaccardIndex(vector<int> vecObjectPool, int n);
	void GetMeanShiftSVector(vector<int> vecInArea, vector<int> &objectPool);
};

