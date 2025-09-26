char __thiscall sub_E09120(char *this)
{
  int *v2; // esi
  int v3; // eax
  char v5[4]; // [esp+Ch] [ebp-114h] BYREF
  _BYTE v6[256]; // [esp+10h] [ebp-110h] BYREF
  int v7; // [esp+11Ch] [ebp-4h]

  v2 = (int *)(this + 32);
  std::istream::operator>>(this + 32, std::ws);
  for ( LOBYTE(v3) = std::ios_base::eof((std::ios_base *)(this + *(_DWORD *)(*v2 + 4) + 32));
        !(_BYTE)v3;
        LOBYTE(v3) = std::ios_base::eof((std::ios_base *)(this + *(_DWORD *)(*v2 + 4) + 32)) )
  {
    v3 = std::istream::peek(v2);
    if ( v3 == 91 )
      break;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v5);
    v7 = 0;
    std::istream::operator>>(v2, std::ws);
    if ( std::istream::peek(v2) == 34 )
    {
      sub_E08DA0(this);
    }
    else
    {
      sub_C1B3B0(v2, v6);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v5, v6);
      CStringList::AddTail(this, v5);
    }
    std::istream::operator>>(v2, std::ws);
    v7 = -1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v5);
  }
  return v3;
}