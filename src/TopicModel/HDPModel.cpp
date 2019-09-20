#include "HDPModel.hpp"

namespace tomoto
{
	template class HDPModel<TermWeight::one>;
	template class HDPModel<TermWeight::idf>;
	template class HDPModel<TermWeight::pmi>;

    IHDPModel* IHDPModel::create(TermWeight _weight, size_t _K, FLOAT _alpha , FLOAT _eta, FLOAT _gamma, const RANDGEN& _rg)
	{
		SWITCH_TW(_weight, HDPModel, _K, _alpha, _eta, _gamma, _rg);
	}
}