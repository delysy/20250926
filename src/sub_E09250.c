int __thiscall sub_E09250(int *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  _BYTE v6[7]; // [esp+Ch] [ebp-118h] BYREF
  char v7; // [esp+13h] [ebp-111h] BYREF
  _BYTE v8[256]; // [esp+14h] [ebp-110h] BYREF
  int v9; // [esp+120h] [ebp-4h]

  CStringList::AddTail(this, this + 54);
  std::istream::operator>>(this + 8, std::ws);
  if ( !std::ios_base::eof((std::ios_base *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 32)) )
  {
    while ( 1 )
    {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v6);
      v9 = 0;
      if ( std::istream::peek(this + 8) == 10 || std::istream::peek(this + 8) == 13 )
        break;
      v2 = std::istream::peek(this + 8);
      v3 = this + 8;
      if ( v2 == 32 || (v4 = std::istream::peek(v3), v3 = this + 8, v4 == 9) )
      {
        std::istream::get(v3, &v7);
      }
      else
      {
        if ( std::istream::peek(v3) == 91 )
          goto LABEL_12;
        sub_C1B3B0(this + 8, v8);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v6, v8);
        CStringList::AddTail(this, v6);
      }
      v9 = -1;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v6);
      if ( std::ios_base::eof((std::ios_base *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 32)) )
        return CStringList::AddTail(this, this + 55);
    }
    std::istream::get(this + 8, &v7);
LABEL_12:
    v9 = -1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v6);
  }
  return CStringList::AddTail(this, this + 55);
}