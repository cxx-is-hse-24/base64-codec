#ifndef BASE64_CODEC_H
#define BASE64_CODEC_H

#include <string>
#include <vector>

class Base64Codec
{
public:
	std::string encode(std::vector<uint8_t> const& bytes) const;
	std::vector<uint8_t> decode(std::string const& code) const;

private:
	std::string const m_encoding_table{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
};


#endif