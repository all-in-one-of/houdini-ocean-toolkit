
/*
 * $Id: mtparam.cc,v 1.1 2008/02/19 21:36:34 julianc Exp $
 *
 * Static parameter combinations for MT19937.
 */

#include <random/mt.h>

BZ_NAMESPACE(ranlib)

const twist_int MersenneTwisterCreator::a_[] = {
  0xcc420000, 0xabbe0001, 0xdabf0002, 0xbe010003, 0xd6db0004,
  0xc36d0005, 0x84ce0006, 0xe6700007, 0xdc1e0008, 0xe1710009,
  0xa2f4000a, 0xf22c000b, 0x936e000c, 0xf75d000d, 0xd547000e,
  0xd8d7000f, 0xe5e40010, 0xf7cf0011, 0xec180012, 0xa4430013,
  0xf81d0014, 0x82f50015, 0xf6100016, 0xcc360017, 0xae950018,
  0xf3cb0019, 0x843e001a, 0x95570040, 0xcbfc0041, 0x976c0042,
  0xddf50043, 0xfda50044, 0xea2a0045, 0xd6fa0046, 0x948d0060,
  0xc42b0061, 0x8d580062, 0xa96c0063, 0xc1be0064, 0xc5030065,
  0x8c6f0066, 0xc9490080, 0xab950081, 0xd6ef0082, 0xecb00083,
  0xda4a0084, 0xbd190085, 0x8aaf0086 };

const twist_int MersenneTwisterCreator::b_[] = {
  0xf3156f80, 0x5af53e80, 0x8cdd7780, 0xbb56ee80, 0x26eef680,
  0xdd4eec80, 0x2656f480, 0xb914ee80, 0x8d5d7780, 0x2e753a80,
  0xcd757780, 0x33b6bb80, 0xeaf4b680, 0x59ed3b80, 0xd674ea80,
  0x66757b80, 0x24d53a80, 0xdccd7780, 0x66f77780, 0x66d57780,
  0xb51f7780, 0x59a53a80, 0xec75bb80, 0x6e557b80, 0x8cad7780,
  0x8cd56f80, 0x99a6ba80, 0xbad5bb80, 0xa7f77680, 0xbbefbe80,
  0xdccd7780, 0x6296ee80, 0x9dd4b580, 0x66f77680, 0xeef57680,
  0xeb35b480, 0xa6df7680, 0xf35d6d80, 0xf7557780, 0xbbb5bb80,
  0xf7b57680, 0xbad5bb80, 0xedf5bb80, 0xdcad7780, 0xdcd57780,
  0x73557b00, 0x4cf53a80, 0x5a6d3a80 };

const twist_int MersenneTwisterCreator::c_[] = {
  0xdd558000, 0xf6d78000, 0xee778000, 0xddd58000, 0xeec58000,
  0xefd38000, 0xefd58000, 0xddd58000, 0xee778000, 0xf7d48000,
  0xee558000, 0xf7558000, 0x77d28000, 0xf7658000, 0xefd58000,
  0xf7558000, 0xf7d48000, 0xed758000, 0xee538000, 0xef778000,
  0xd7758000, 0xf7f58000, 0xbb578000, 0xf7708000, 0xee778000,
  0xee5f8000, 0xf7f58000, 0xf7558000, 0xd6d18000, 0xf6cb8000,
  0xee778000, 0xdbd38000, 0xf7d58000, 0xeef38000, 0xddd48000,
  0x77d78000, 0xd6e38000, 0x6fd58000, 0xee558000, 0x77518000,
  0xddd58000, 0xf7558000, 0x7b558000, 0xee758000, 0xee778000,
  0xe6d78000, 0xf7d48000, 0xf3f48000 };

BZ_NAMESPACE_END

