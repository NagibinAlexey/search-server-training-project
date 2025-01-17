#pragma once

#include "search_server.h"
#include <vector>
#include <string>
#include <execution>
#include <algorithm>
#include <list>
#include <numeric>

std::vector<std::vector<Document>> ProcessQueries(
    const SearchServer& search_server,
    const std::vector<std::string>& queries);

std::list<Document> ProcessQueriesJoined(
    const SearchServer& search_server,
    const std::vector<std::string>& queries);