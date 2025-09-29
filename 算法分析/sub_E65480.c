int __thiscall sub_E65480(int this)
{
  char *v2; // eax
  int v3; // ebx
  int v4; // eax
  __time64_t v5; // rax
  bool v6; // cf
  int v7; // esi
  int v8; // eax
  _BYTE v10[148]; // [esp+10h] [ebp-164h] BYREF
  _BYTE v11[124]; // [esp+A4h] [ebp-D0h] BYREF
  _BYTE v12[28]; // [esp+120h] [ebp-54h] BYREF
  int v13; // [esp+13Ch] [ebp-38h]
  _BYTE v14[28]; // [esp+140h] [ebp-34h] BYREF
  int v15; // [esp+15Ch] [ebp-18h] BYREF
  _BYTE v16[4]; // [esp+160h] [ebp-14h] BYREF
  _BYTE v17[4]; // [esp+164h] [ebp-10h] BYREF
  int v18; // [esp+170h] [ebp-4h]

  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v16);
  v18 = 0;
  *(_DWORD *)(this + 164) = 1;
  CWnd::ShowWindow((CWnd *)(this + 3776), 5);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::LoadStringA(v16, 2025);
  v2 = (char *)ATL::CSimpleStringT<char,1>::operator char const *(v16);
  sub_E67100(v2);
  sub_DB06B0(*(_DWORD *)(this + 392));
  v15 = 0;
  v3 = sub_DA2C70(&v15);
  if ( !v3 && v15 )
  {
    CStringList::CStringList((CStringList *)v14, 10);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v17);
    LOBYTE(v18) = 2;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::LoadStringA(v17, 61369);
    CStringList::AddHead(v14, v17);
    sub_D67E40((struct CStringList *)v14, 4, 0);
    LOBYTE(v18) = 3;
    v13 = dword_F446D4;
    if ( dword_F446D4 )
      CDialog::DoModal((CDialog *)v10);
    LOBYTE(v18) = 5;
    CStringList::~CStringList((CStringList *)v12);
    LOBYTE(v18) = 4;
    CEdit::~CEdit((CEdit *)v11);
    LOBYTE(v18) = 2;
    CDialog::~CDialog((CDialog *)v10);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v17);
    LOBYTE(v18) = 0;
    CStringList::~CStringList((CStringList *)v14);
  }
  *(_DWORD *)(this + 164) = 0;
  sub_E5F170(this);
  SendMessageA(*(HWND *)(this + 3692), 0x402u, 0x64u, 0);
  sub_E67B30(100);
  v4 = *(_DWORD *)(this + 392);
  if ( v4 )
    sub_B8CAF0(1, 100, *(_DWORD *)(*(_DWORD *)(v4 + 12) + 8) - 1);
  v5 = _time64(0);
  *(_DWORD *)(this + 184) = v5;
  v6 = (unsigned int)v5 < *(_DWORD *)(this + 176);
  LODWORD(v5) = v5 - *(_DWORD *)(this + 176);
  *(_DWORD *)(this + 188) = HIDWORD(v5);
  HIDWORD(v5) -= v6 + *(_DWORD *)(this + 180);
  *(_QWORD *)(this + 192) = v5;
  CWnd::ShowWindow((CWnd *)(this + 3776), 0);
  v7 = *(_DWORD *)(*(_DWORD *)(this + 392) + 8);
  sub_E5F170(v7);
  v8 = *(_DWORD *)(v7 + 160);
  *(_DWORD *)(v7 + 160) = 0;
  if ( v8 )
  {
    sub_D9B000("User canceled Optimization.");
    v3 = 1072;
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v16);
  return v3;
}