#include "ns3/netamin-module.h"
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"

using namespace ns3;
int main(int argc, char *agrv[])
{

Time::SetResolutions (Time::NS)
NodeContainer nodes;
nodes.Create(2);


