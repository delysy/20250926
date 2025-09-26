char __thiscall sub_E08AA0(_DWORD *this)
{
  const char *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // ecx
  _BYTE v7[4]; // [esp+10h] [ebp-114h] BYREF
  _BYTE v8[256]; // [esp+14h] [ebp-110h] BYREF
  int v9; // [esp+120h] [ebp-4h]

  v2 = (const char *)ATL::CSimpleStringT<char,1>::operator char const *(this + 7);
  v3 = this + 8;
  v4 = sub_B8A2C0((int)(this + 12), v2, 33, 64);
  v5 = *(_DWORD *)(*(this + 8) + 4);
  if ( v4 )
    std::ios::clear((char *)v3 + v5, 0, 0);
  else
    std::ios::setstate((char *)v3 + v5, 2, 0);
  if ( !*(this + 32) )
    return 0;
  while ( !std::ios_base::eof((std::ios_base *)((char *)this + *(_DWORD *)(*v3 + 4) + 32)) )
  {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v7);
    v9 = 0;
    std::istream::operator>>(this + 8, std::ws);
    if ( std::istream::peek(this + 8) == 34 )
    {
      sub_E08DA0((char *)this);
    }
    else if ( std::istream::peek(this + 8) == 91 )
    {
      sub_E08C40(this);
      sub_E09250(this);
      sub_E09120((char *)this);
    }
    else
    {
      sub_C1B3B0(this + 8, v8);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v7, v8);
      CStringList::AddTail(this, v7);
    }
    std::istream::operator>>(this + 8, std::ws);
    v9 = -1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v7);
  }
  if ( !sub_B89FB0((int)(this + 12)) )
    std::ios::setstate((char *)v3 + *(_DWORD *)(*v3 + 4), 2, 0);
  return 1;
}