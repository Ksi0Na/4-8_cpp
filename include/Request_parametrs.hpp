// Copyright 2021 Ksi0Na OlgaMolchun5@gmail.com

#ifndef INCLUDE_REQUEST_PARAMETRS_HPP_
#define INCLUDE_REQUEST_PARAMETRS_HPP_
#include <string>
struct Request_parametrs {
  std::string url;
  std::string host;
  std::string port;
  std::string target;
  std::string request_body;
  int version;
};
#endif  // INCLUDE_REQUEST_PARAMETRS_HPP_
