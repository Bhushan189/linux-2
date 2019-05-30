#ifndef ML_H
#define ML_H

atomic64_t _threshold_set_pte = ATOMIC64_INIT(0);
atomic64_t _threshold_pte_clear = ATOMIC64_INIT(0);
atomic64_t _threshold_pfn_pte = ATOMIC64_INIT(0);

#endif