#pragma once
enum Status 
{
    Pending,
    Approved,
    Cancelled
};

// enum class is better !!
enum class FileError
{
    notfound,
    ok
};

enum class NetworkError
{
    disconnected,
    ok
};