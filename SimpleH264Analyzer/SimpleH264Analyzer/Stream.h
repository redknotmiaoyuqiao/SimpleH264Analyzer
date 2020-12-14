#ifndef _STREAM_H_
#define _STREAM_H_

#include <vector>
#include "Global.h"

class CSeqParamSet;
class CPicParamSet;
class CSliceStruct;

class CStreamFile
{
public:
	CStreamFile(const char * fileName);
	~CStreamFile();

	//Open API
	int Parse_h264_bitstream();
	void Dump_NAL_type(UINT8 nalType);

private:
	FILE	*m_inputFile;
	// char	*m_fileName;
	std::vector<UINT8> m_nalVec;
	
	void	file_info();
	void	file_error(int idx);
	int		find_nal_prefix();
	void	ebsp_to_sodb();

	CSeqParamSet *m_sps;
	CPicParamSet *m_pps;
	CSliceStruct *m_IDRSlice;
};


#endif