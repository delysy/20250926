int __thiscall sub_E08C40(int *this)
{
  int Length; // eax
  int v4; // [esp+Ch] [ebp-118h] BYREF
  _BYTE v5[4]; // [esp+10h] [ebp-114h] BYREF
  _BYTE v6[256]; // [esp+14h] [ebp-110h] BYREF
  int v7; // [esp+120h] [ebp-4h]

  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v5);
  v7 = 0;
  sub_E07DE0(this + 8, &v4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(v5, v4);
  std::istream::operator>>(this + 8, std::ws);
  while ( !std::ios_base::eof((std::ios_base *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 32)) )
  {
    if ( std::istream::peek(this + 8) == 93 )
      break;
    sub_C1B3B0(this + 8, v6);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(v5, v6);
    Length = ATL::CSimpleStringT<char,1>::GetLength(v5);
    if ( (unsigned __int8)ATL::CSimpleStringT<char,1>::GetAt(v5, Length - 1) == 93 )
      goto LABEL_6;
    std::istream::operator>>(this + 8, std::ws);
  }
  sub_E07DE0(this + 8, &v4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(v5, v4);
LABEL_6:
  CStringList::AddTail(this, v5);
  return ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v5);
}