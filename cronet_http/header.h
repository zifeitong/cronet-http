#ifndef CRONET_HTTP_HEADER_H_
#define CRONET_HTTP_HEADER_H_

#include <flat_map>
#include <string>

namespace cronet_http {

using Header = std::flat_map<std::string, std::string>;

}  // namespace cronet_http

#endif  // CRONET_HTTP_HEADER_H_
