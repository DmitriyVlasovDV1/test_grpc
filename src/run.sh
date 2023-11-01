protoc -I server/proto --grpc_out=server/proto --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` server/proto/api_walker.proto
protoc -I server/proto --cpp_out=server/proto server/proto/api_walker.proto


