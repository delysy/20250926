int __thiscall sub_DA7BB0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  __int64 v6; // [esp+20h] [ebp-28h] BYREF
  int v7; // [esp+28h] [ebp-20h] BYREF
  int v8; // [esp+2Ch] [ebp-1Ch]
  _BYTE v9[4]; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+44h] [ebp-4h]

  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v9);
  v10 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "########## Section Balancing Algorithm Configuration ###########\n");
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    &v7,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(v9, "Q_FORCED_JOIN_MODE=%d\n", nDefault);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_LIMITED_THETA_MOVE=%d\n",
    dword_F489F0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_ONE_FEEDER_FEEDERBASE=%d\n",
    dword_F48A04);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_BALANCE_BY_FEEDERTYPE=%d\n",
    dword_F44700);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_USE_PREEMPTIVE_PRODUCTION=%d\n",
    dword_F489F4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_NZ_WEIGHT=%10.7f\n",
    *(double *)&qword_F44678);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_WEIGHT_PLACE=%10.7f\n",
    *(double *)&qword_F44680);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "Q_HEAD_WEIGHT=%7.3f\n",
    *(double *)&qword_F44688);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v9,
    "################################################################\n");
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    (char *)&v6 + 4,
    v9);
  sub_E5C520(SBYTE4(v6));
  if ( *(this + 253) == 1 && !*(this + 235) )
  {
    v2 = *(this + 243);
    if ( v2 == 1 )
    {
      HIDWORD(v6) = 1;
LABEL_7:
      sub_DACF50(HIDWORD(v6));
      goto LABEL_8;
    }
    if ( v2 == 2 )
    {
      HIDWORD(v6) = 2;
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( *(this + 235) == 4 && *(_DWORD *)(*(this + 3) + 12) == 5116 )
    *(this + 235) = 1;
  if ( (unsigned __int8)sub_DB2570(v7, v8) )
  {
    v3 = sub_D871F0((int)this, v7, v8);
LABEL_21:
    v4 = v3;
    goto LABEL_23;
  }
  if ( nDefault && nDefault != 3 )
  {
LABEL_20:
    v3 = sub_D888D0(this);
    goto LABEL_21;
  }
  if ( *(_DWORD *)(*(this + 3) + 12) != 5116 || sub_D3B0F0() != 2 )
  {
    if ( !(unsigned __int8)sub_DB68B0(this, 0) )
    {
      v4 = 1072;
      goto LABEL_23;
    }
    nDefault = 2;
    sub_D701D0(v7, v8);
    goto LABEL_20;
  }
  v4 = 62191;
LABEL_23:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v9);
  return v4;
}