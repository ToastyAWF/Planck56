#pragma once

#include "quantum.h"

 #define LAYOUT( \
   K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c, K0d, \
   K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b, K1c, K1d, \
   K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, K2c, K2d, \
   K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b, K3c, K3d \
 ) \
 { \
   { K00, K01, K02, K03, K04, K05, K06}, \
   { K10, K11, K12, K13, K14, K15, K16}, \
   { K20, K21, K22, K23, K24, K25, K26}, \
   { K30, K31, K32, K33, K34, K35, K36}, \
   {K07, K08, K09, K0a, K0b, K0c, K0d}, \
   {K17, K18, K19, K1a, K1b, K1c, K1d}, \
   {K27, K28, K29, K2a, K2b, K2c, K2d}, \
   {K37, K38, K39, K3a, K3b, K3c, K3d} \
 }
