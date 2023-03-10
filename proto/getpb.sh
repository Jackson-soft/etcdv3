curl https://raw.githubusercontent.com/etcd-io/etcd/main/api/authpb/auth.proto -o authpb/auth.proto --create-dir

curl https://raw.githubusercontent.com/etcd-io/etcd/main/api/mvccpb/kv.proto -o mvccpb/kv.proto --create-dir

curl https://raw.githubusercontent.com/etcd-io/etcd/main/api/etcdserverpb/etcdserver.proto -o etcdserverpb/etcdserver.proto --create-dir
curl https://raw.githubusercontent.com/etcd-io/etcd/main/api/etcdserverpb/rpc.proto -o etcdserverpb/rpc.proto --create-dir
curl https://raw.githubusercontent.com/etcd-io/etcd/main/api/etcdserverpb/raft_internal.proto -o etcdserverpb/raft_internal.proto --create-dir

curl https://raw.githubusercontent.com/etcd-io/etcd/main/api/membershippb/membership.proto -o membershippb/membership.proto --create-dir

curl https://raw.githubusercontent.com/gogo/protobuf/master/gogoproto/gogo.proto -o gogoproto/gogo.proto --create-dir
curl https://raw.githubusercontent.com/googleapis/googleapis/master/google/api/annotations.proto -o google/api/annotations.proto --create-dir
curl https://raw.githubusercontent.com/googleapis/googleapis/master/google/api/http.proto -o google/api/http.proto --create-dir
