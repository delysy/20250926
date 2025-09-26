int __thiscall sub_E64280(int this)
{
  char v2; // bl
  int v3; // eax
  int v4; // eax
  struct _Mtx_internal_imp_t *v5; // eax
  int v6; // eax
  void *Buffer; // eax
  struct _Mtx_internal_imp_t *v8; // eax
  volatile signed __int32 *v9; // edi
  int v10; // edi
  struct _Mtx_internal_imp_t *v11; // eax
  int result; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  struct _Mtx_internal_imp_t *v22; // eax
  void *v23; // eax
  struct _Mtx_internal_imp_t *v24; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // edi
  _DWORD *v32; // ebx
  int v33; // edi
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int v62; // edi
  int v63; // esi
  int v64; // [esp-20h] [ebp-C4h] BYREF
  int v65; // [esp-1Ch] [ebp-C0h]
  int v66; // [esp-18h] [ebp-BCh] BYREF
  int v67; // [esp-14h] [ebp-B8h]
  int v68; // [esp-10h] [ebp-B4h]
  int v69; // [esp-Ch] [ebp-B0h]
  char *v70; // [esp-8h] [ebp-ACh] BYREF
  int v71; // [esp-4h] [ebp-A8h]
  int v72; // [esp+0h] [ebp-A4h]
  int v73; // [esp+4h] [ebp-A0h]
  _BYTE v74[4]; // [esp+10h] [ebp-94h] BYREF
  _DWORD *v75; // [esp+14h] [ebp-90h]
  _BYTE v76[4]; // [esp+2Ch] [ebp-78h] BYREF
  _DWORD *v77; // [esp+30h] [ebp-74h]
  int v78; // [esp+48h] [ebp-5Ch]
  void *v79; // [esp+4Ch] [ebp-58h]
  char v80[4]; // [esp+50h] [ebp-54h] BYREF
  void *v81; // [esp+54h] [ebp-50h]
  _BYTE v82[4]; // [esp+58h] [ebp-4Ch] BYREF
  int v83; // [esp+5Ch] [ebp-48h] BYREF
  void *v84[5]; // [esp+60h] [ebp-44h] BYREF
  unsigned int v85; // [esp+74h] [ebp-30h]
  _BYTE v86[4]; // [esp+78h] [ebp-2Ch] BYREF
  void *v87[4]; // [esp+7Ch] [ebp-28h] BYREF
  int v88; // [esp+8Ch] [ebp-18h]
  unsigned int v89; // [esp+90h] [ebp-14h]
  int v90; // [esp+A0h] [ebp-4h]

  v2 = 0;
  v83 = 0;
  *(_QWORD *)(this + 176) = _time64(0);
  if ( *(_DWORD *)(this + 2688) )
    goto LABEL_87;
  if ( *(_DWORD *)(this + 168) )
    *(_BYTE *)(this + 2588) = 1;
  *(_DWORD *)(this + 3180) = -1;
  sub_E4F410(this);
  *(_DWORD *)(this + 4192) = operator new(0x160u);
  sub_E4F490(this);
  *(_DWORD *)(this + 2464) = *(_DWORD *)(this + 4192);
  v3 = ATL::CSimpleStringT<char,1>::operator char const *(this + 3140);
  v78 = sub_E152D0((void *)(this + 432), v3);
  if ( v78 )
  {
    sub_E669D0((CWnd *)this, this + 432);
    sub_E66340(*(_DWORD *)(this + 2708));
    v90 = 0;
    if ( operator new(8u) )
    {
      sub_B836D0((int)v87, (void *)Src);
      v2 = 1;
      LOBYTE(v90) = 1;
      v83 = 1;
      v4 = sub_B87510(v87);
    }
    else
    {
      v4 = 0;
    }
    v79 = &v70;
    v90 = 2;
    v70 = 0;
    v71 = 0;
    sub_B85810(v4);
    v81 = &v64;
    v90 = 3;
    sub_B836D0((int)&v64, "OPT");
    LOBYTE(v90) = 4;
    v5 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
    LOBYTE(v90) = 2;
    sub_B838C0(v5, v64, v65, v66, v67, v68, v69, (char)v70, v71);
    v90 = -1;
    if ( (v2 & 1) != 0 && v89 >= 0x10 )
      operator delete(v87[0]);
    v6 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
           &v83,
           this + 3148);
    v90 = 5;
    Buffer = (void *)ATL::CSimpleStringT<char,1>::GetBuffer(v6, 0);
    sub_B836D0((int)v87, Buffer);
    LOBYTE(v90) = 6;
    sub_B836D0((int)v84, "OPT");
    v71 = (int)v84;
    v70 = v80;
    LOBYTE(v90) = 7;
    v8 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
    sub_B837F0(v8, (int)v70, v71);
    LOBYTE(v90) = 8;
    sub_B875F0(v87);
    v9 = (volatile signed __int32 *)v81;
    LOBYTE(v90) = 7;
    if ( v81 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v81 + 1, 0xFFFFFFFF) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v9)(v9);
        if ( !_InterlockedDecrement(v9 + 2) )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v9 + 4))(v9);
      }
    }
    if ( v85 >= 0x10 )
      operator delete(v84[0]);
    v85 = 15;
    v84[4] = 0;
    LOBYTE(v84[0]) = 0;
    if ( v89 >= 0x10 )
      operator delete(v87[0]);
    v89 = 15;
    v88 = 0;
    LOBYTE(v87[0]) = 0;
    v90 = -1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v83);
    v10 = v78;
    sub_E4DF20(this, v78);
    v81 = &v66;
    sub_B836D0((int)&v66, "OPT");
    v90 = 9;
    v11 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
    v90 = -1;
    sub_B83730(v11, v66, v67, v68, v69, (int)v70, v71);
    return v10;
  }
  result = sub_E356E0(v72, v73);
  if ( !result )
  {
    sub_E669D0((CWnd *)this, this + 432);
    sub_E66340(*(_DWORD *)(this + 2708));
    v81 = operator new(0x538u);
    v90 = 10;
    if ( v81 )
      v13 = sub_D6C760(this);
    else
      v13 = 0;
    v71 = this + 432;
    v90 = -1;
    *(_DWORD *)(this + 392) = v13;
    sub_DAD200(v71);
    sub_DB1D10(this + 432);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v82);
    v14 = *(_DWORD *)(this + 392);
    v90 = 11;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
      v82,
      "%d",
      *(_DWORD *)(*(_DWORD *)(v14 + 12) + 8));
    v15 = *(_DWORD *)(*(_DWORD *)(this + 392) + 12);
    v71 = 0;
    v16 = *(_DWORD *)(v15 + 8);
    v17 = ATL::CSimpleStringT<char,1>::GetBuffer(v82, 0);
    sub_B8D1A0(v16 - 1, 0, v17);
    v18 = *(_DWORD *)(*(_DWORD *)(this + 392) + 12);
    v71 = 0;
    v19 = *(_DWORD *)(v18 + 8);
    v20 = ATL::CSimpleStringT<char,1>::GetBuffer(this + 2712, 0);
    sub_B8D1A0(v19 - 1, 1, v20);
    v81 = operator new(8u);
    LOBYTE(v90) = 12;
    if ( v81 )
    {
      sub_B836D0((int)v87, (void *)Src);
      v2 = 2;
      LOBYTE(v90) = 13;
      v83 = 2;
      v21 = sub_B87510(v87);
    }
    else
    {
      v21 = 0;
    }
    v81 = &v70;
    v90 = 14;
    v70 = 0;
    v71 = 0;
    sub_B85810(v21);
    v79 = &v64;
    v90 = 15;
    sub_B836D0((int)&v64, "OPT");
    LOBYTE(v90) = 16;
    v22 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
    LOBYTE(v90) = 14;
    sub_B838C0(v22, v64, v65, v66, v67, v68, v69, (char)v70, v71);
    v90 = 11;
    if ( (v2 & 2) != 0 )
      sub_B82D80(v87);
    v23 = (void *)ATL::CSimpleStringT<char,1>::GetBuffer(this + 3148, 0);
    sub_B836D0((int)v84, v23);
    LOBYTE(v90) = 17;
    sub_B836D0((int)v87, "OPT");
    v71 = (int)v87;
    v70 = v80;
    LOBYTE(v90) = 18;
    v24 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
    sub_B837F0(v24, (int)v70, v71);
    LOBYTE(v90) = 19;
    sub_B875F0(v84);
    sub_B83E80(v80);
    if ( v89 >= 0x10 )
      operator delete(v87[0]);
    v89 = 15;
    v88 = 0;
    LOBYTE(v87[0]) = 0;
    LOBYTE(v90) = 11;
    if ( v85 >= 0x10 )
      operator delete(v84[0]);
    if ( *(_DWORD *)(*(_DWORD *)(this + 392) + 1012) == 1 )
    {
      CObList::CObList((CObList *)v86, 10);
      v71 = *(_DWORD *)(this + 392) + 16;
      LOBYTE(v90) = 20;
      CObList::AddTail((CObList *)v86, (struct CObList *)v71);
      v25 = v87[0];
      if ( v87[0] )
      {
        while ( 1 )
        {
          v26 = v25;
          if ( !v25 )
            break;
          v25 = (_DWORD *)*v25;
          v27 = *(_DWORD *)(v26[2] + 4);
          if ( v27 % 2 )
            dword_F447A8 = v27;
          else
            dword_F447A4 = v27;
          if ( !v25 )
            goto LABEL_41;
        }
LABEL_47:
        AfxThrowInvalidArgException();
      }
LABEL_41:
      LOBYTE(v90) = 11;
      CObList::~CObList((CObList *)v86);
    }
    sub_DACDD0(v72, v73);
    if ( *(_DWORD *)(this + 168) )
    {
      v28 = *(_DWORD *)(this + 392);
      if ( *(_DWORD *)(v28 + 1012) == 1 && !*(_DWORD *)(v28 + 940) )
      {
        *(_DWORD *)(v28 + 940) = 1;
        *(_BYTE *)(*(_DWORD *)(this + 392) + 133) = 1;
        if ( *(_DWORD *)(sub_D93970(*(_DWORD *)(this + 392)) + 4) == dword_F447A4 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 392) + 972) = 1;
        }
        else if ( *(_DWORD *)(sub_D93970(*(_DWORD *)(this + 392)) + 4) == dword_F447A8 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 392) + 972) = 2;
        }
      }
    }
    CObList::CObList((CObList *)v76, 10);
    v71 = *(_DWORD *)(*(_DWORD *)(this + 392) + 12) + 128;
    LOBYTE(v90) = 21;
    CObList::AddTail((CObList *)v76, (struct CObList *)v71);
    v29 = v77;
    if ( v77 )
    {
      while ( v29 )
      {
        v30 = v29[2];
        v29 = (_DWORD *)*v29;
        if ( *(_DWORD *)(v30 + 2160) != 1 || *(_DWORD *)(this + 336) != 1 )
          *(_DWORD *)(v30 + 2160) = 0;
        if ( !v29 )
          goto LABEL_56;
      }
      goto LABEL_47;
    }
LABEL_56:
    sub_E65D30(v72, v73);
    v31 = sub_D8BBA0(v72, v73);
    if ( v31 )
      goto LABEL_76;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 392) + 12) + 12) = *(_DWORD *)(this + 3184);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 392) + 12) + 16) = *(_DWORD *)(this + 3188);
    sub_E65C90(this);
    if ( dword_F44738 != 1 )
      sub_DA9F60(*(_DWORD *)(this + 392));
    if ( dword_F489C4 == 1 )
      sub_DA9E50(v72, v73);
    sub_E52B10(v72, v73);
    if ( *(int *)(this + 3136) >= 481 )
    {
      CObList::CObList((CObList *)v74, 10);
      v71 = *(_DWORD *)(*(_DWORD *)(this + 392) + 12) + 128;
      LOBYTE(v90) = 22;
      CObList::AddTail((CObList *)v74, (struct CObList *)v71);
      v32 = v75;
      if ( v75 )
      {
        while ( v32 )
        {
          v33 = v32[2];
          v32 = (_DWORD *)*v32;
          sub_C81510(v72, v73);
          sub_CDDCF0(v33);
          if ( !v32 )
            goto LABEL_65;
        }
        goto LABEL_47;
      }
LABEL_65:
      LOBYTE(v90) = 21;
      CObList::~CObList((CObList *)v74);
    }
    sub_DA8F80(v72, v73);
    sub_D3C350(*(_DWORD *)(*(_DWORD *)(this + 392) + 12));
    sub_D3F350(v72, v73);
    if ( (unsigned __int8)sub_D81820(v72, v73) )
      sub_E67C40(v72, v73);
    v34 = *(_DWORD *)(this + 392);
    *(_DWORD *)(this + 3180) = 0;
    v31 = sub_DA1EA0(v34);
    v35 = this;
    if ( v31 )
      goto LABEL_78;
    sub_E57850(v72, v73);
    sub_E50530(v72, v73);
    if ( *(_DWORD *)(this + 168) || *(_BYTE *)(*(_DWORD *)(this + 392) + 1037) )
    {
      v36 = sub_E65360(7);
      v31 = v36;
      if ( !v36 )
        goto LABEL_81;
      if ( v36 != 62178 )
      {
LABEL_85:
        LOBYTE(v90) = 11;
        CObList::~CObList((CObList *)v76);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v82);
        return v31;
      }
    }
    v71 = 5;
    *(_DWORD *)(this + 164) = 1;
    CWnd::ShowWindow((CWnd *)(this + 3196), v71);
    CCmdTarget::BeginWaitCursor((CCmdTarget *)this);
    v37 = *(_DWORD *)(this + 392);
    if ( *(_DWORD *)(*(_DWORD *)(v37 + 12) + 112) == 1 )
    {
      *(_DWORD *)(this + 3180) = 1;
      v31 = sub_E4CC60((CCmdTarget *)this);
      if ( v31 || (v31 = sub_DA19E0(v72, v73)) != 0 )
      {
LABEL_76:
        sub_E4DF20(this, v31);
        goto LABEL_85;
      }
      goto LABEL_83;
    }
    v31 = sub_DA7BB0(v37, v72, v73);
    v35 = this;
    if ( v31 )
    {
LABEL_78:
      sub_E4DF20(v35, v31);
      goto LABEL_85;
    }
    if ( sub_E4CE00(v72, v73) )
    {
LABEL_83:
      if ( (unsigned __int8)sub_E4D530(this) )
      {
        v31 = 1072;
        goto LABEL_85;
      }
      LOBYTE(v90) = 11;
      CObList::~CObList((CObList *)v76);
      v90 = -1;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v82);
LABEL_87:
      if ( *(_DWORD *)(*(_DWORD *)(this + 392) + 1012) && *(_DWORD *)(this + 2700) )
        sub_DA6D10(v72, v73);
      v38 = *(_DWORD *)(this + 2756);
      if ( !v38 || v38 == 2 )
      {
        v10 = sub_DAD540(v72, v73);
        if ( v10 )
          goto LABEL_110;
      }
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 392) + 12) + 12) == 482 )
      {
        sub_D8D6D0(v72, v73);
        sub_D6E7B0(v72, v73);
      }
      CWnd::ShowWindow((CWnd *)(this + 3196), 0);
      *(_DWORD *)(this + 164) = 0;
      CCmdTarget::EndWaitCursor((CCmdTarget *)this);
      if ( !*(_DWORD *)(*(_DWORD *)(this + 392) + 1044) )
        sub_D736C0(v72, v73);
      if ( *(_BYTE *)(*(_DWORD *)(this + 392) + 921) )
        sub_DA3550(v72, v73);
      v39 = *(_DWORD *)(this + 3192) == 10000;
      *(_DWORD *)(this + 3180) = 2;
      if ( v39 )
      {
        v10 = sub_E4EE20(v72, v73);
        if ( v10 )
        {
          if ( *(int *)(this + 2688) < 1 || (v40 = *(_DWORD *)(this + 392), *(_BYTE *)(v40 + 976)) )
          {
            if ( v10 != 62043 )
              goto LABEL_110;
            return v10;
          }
          *(_DWORD *)(v40 + 1016) = 1;
          v41 = *(_DWORD *)(this + 392);
          v71 = 3;
          *(_BYTE *)(v41 + 977) = 1;
          sub_D3CC00(v71);
          if ( sub_DA4270(v72, v73) == 1 )
          {
            v42 = *(_DWORD *)(this + 392);
            v71 = 2;
            *(_BYTE *)(v42 + 976) = 1;
            sub_DA6490(v71);
            sub_DA9460(*(_DWORD *)(this + 392));
            v10 = sub_E64280(this);
          }
          if ( v10 == 1 )
            return 1;
          if ( v10 )
            return v10;
        }
      }
      else
      {
        v10 = sub_E4C8A0(v72, v73);
        if ( v10 )
        {
          if ( *(int *)(this + 2688) < 1 )
            goto LABEL_110;
          v43 = *(_DWORD *)(this + 392);
          if ( *(_BYTE *)(v43 + 976) )
            goto LABEL_110;
          *(_DWORD *)(v43 + 1016) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 392) + 977) = 1;
          if ( sub_DA4270(v72, v73) == 1 )
          {
            v44 = *(_DWORD *)(this + 392);
            v71 = 2;
            *(_BYTE *)(v44 + 976) = 1;
            sub_DA6490(v71);
            sub_DA9460(*(_DWORD *)(this + 392));
            v10 = sub_E64280(this);
          }
          if ( v10 == 1 )
            return 1;
          if ( v10 )
            return v10;
        }
      }
      if ( sub_B8BEE0(0, v72) == 2 || sub_B8BEE0(0, v72) == 3 )
      {
        sub_E5BBE0(this, "return User Canceled\n");
      }
      else
      {
        Sleep(0);
        v45 = *(_DWORD *)(this + 392);
        if ( *(int *)(v45 + 1064) > 0 )
        {
          sub_E58780(v72, v73);
          v10 = sub_D730D0(v72, v73);
          if ( !v10 )
          {
            sub_DADBC0(v72, v73);
            v46 = sub_E673C0(this);
            v47 = 1;
            if ( v46 == 61323 )
              return 61323;
            return v47;
          }
LABEL_110:
          sub_E4DF20(this, v10);
          return v10;
        }
        if ( *(_DWORD *)(this + 2732) == 1 )
          *(_BYTE *)(v45 + 884) = 1;
        sub_E5BBE0(this, "Before PostOptimization().....\n");
        sub_E58780(v72, v73);
        sub_DA1B90(v72, v73);
        Sleep(0);
        v10 = sub_D730D0(v72, v73);
        if ( v10 )
          goto LABEL_110;
        Sleep(0);
        sub_DA7510(v72, v73);
        sub_E56A80(v72, v73);
        Sleep(0);
        *(_DWORD *)(this + 3180) = 3;
        v48 = sub_E65480(v72, v73);
        v49 = v48;
        if ( v48 )
        {
          sub_E4DF20(this, v48);
          return v49;
        }
        if ( !(unsigned __int8)sub_E4D530(this) )
        {
          Sleep(0);
          if ( sub_D97F30(*(_DWORD *)(this + 392)) < 30000 && *(_DWORD *)(this + 2784) == 1 )
          {
            v50 = *(_DWORD *)(this + 3184);
            if ( v50 != 5114 && v50 != 5117 && v50 != 5116 )
            {
              sub_B974C0(*(_DWORD *)(this + 392), 0, 0);
              sub_B974C0(*(_DWORD *)(this + 392), 1, 0);
            }
          }
          nullsub_5(0);
          v10 = sub_DA4B00(v72, v73);
          if ( v10 )
            goto LABEL_110;
          if ( *(_DWORD *)(this + 344) )
            sub_DB1580(v72, v73);
          v10 = sub_D6F2F0(v72, v73);
          if ( v10 )
            goto LABEL_110;
          v51 = *(_DWORD *)(this + 2756);
          if ( !v51 || v51 == 2 )
          {
            v10 = sub_DA75A0(v72, v73);
            if ( v10 )
              goto LABEL_110;
            sub_D77460(v72, v73);
            sub_DA34B0(v72, v73);
            if ( *(_DWORD *)(this + 2756) == 2 && *(_DWORD *)(this + 3184) == 10003 )
            {
              v10 = sub_D730D0(v72, v73);
              if ( v10 )
                goto LABEL_110;
            }
          }
          Sleep(0);
          v10 = sub_E67AE0(this + 396);
          if ( v10 )
            goto LABEL_110;
          Sleep(0);
          v52 = *(_DWORD *)(this + 3184);
          if ( v52 == 10003 || v52 == 471 || v52 == 481 || v52 == 482 || v52 == 485 || v52 == 4851 )
            sub_DAA4E0(v72, v73);
          if ( ((v71 = *(_DWORD *)(this + 2688),
                 sub_E5BBE0(this, "\n*** Before Simulation() *** Re-Balancing Count: %2d\n"),
                 sub_E50BF0(v72, v73),
                 sub_E58780(v72, v73),
                 Sleep(0),
                 *(_DWORD *)(this + 3192) == 10000)
             || *(_DWORD *)(this + 3184) == 10003)
            && ((v53 = *(_DWORD *)(*(_DWORD *)(this + 392) + 940), v53 == 2) || v53 == 1) )
          {
            v54 = sub_DAF510(v72, v73);
          }
          else
          {
            v54 = sub_DAE030(*(_DWORD *)(this + 392));
          }
          v10 = v54;
          if ( !(unsigned __int8)sub_E4D530(this) )
          {
            v55 = *(_DWORD *)(*(_DWORD *)(this + 392) + 940);
            if ( v55 == 2 || v55 == 1 )
              v10 = sub_DBC840(v72, v73);
            Sleep(0);
            if ( v10 )
              return v10;
            *(_BYTE *)(*(_DWORD *)(this + 392) + 1008) = 0;
            v83 = 0;
            if ( sub_D8DCA0(v72, v73) == 1 )
            {
              sub_DB62A0(v72, v73);
              v56 = sub_DA3920(v72, v73);
              v83 = v56;
              if ( v56 )
              {
                if ( v56 == 1 )
                {
                  sub_DA6490(0);
                  goto LABEL_174;
                }
              }
              else
              {
                v57 = *(_DWORD *)(this + 392);
                if ( !*(_BYTE *)(v57 + 977) && *(int *)(this + 2688) > 0 )
                {
                  *(_BYTE *)(v57 + 977) = 1;
                  if ( sub_DA4270(v72, v73) == 1 )
                  {
                    v58 = *(_DWORD *)(this + 392);
                    v71 = 1;
                    *(_BYTE *)(v58 + 976) = 1;
                    sub_DA6490(v71);
                    sub_DA9460(*(_DWORD *)(this + 392));
LABEL_174:
                    v10 = sub_E64280(this);
                  }
                }
              }
            }
            if ( *(_DWORD *)(*(_DWORD *)(this + 392) + 1032) && sub_DA10F0(v72, v73) )
            {
              sub_E5BBE0(
                this,
                "\n########### ReRun To Improve Balancing :: NO Part Speed Level Grouping ############\n");
              *(_DWORD *)(*(_DWORD *)(this + 392) + 1032) = 0;
              if ( *(int *)(this + 2688) > 5 )
                *(_DWORD *)(this + 2688) = 5;
              *(_BYTE *)(*(_DWORD *)(this + 392) + 977) = 0;
              sub_DB62A0(v72, v73);
              *(_BYTE *)(*(_DWORD *)(this + 392) + 976) = 0;
              v59 = sub_DA3920(v72, v73);
              v83 = v59;
              if ( !v59 )
              {
LABEL_182:
                if ( !v10 )
                {
                  if ( !v59 && sub_D97F30(*(_DWORD *)(this + 392)) < 30000 && *(_DWORD *)(this + 3192) == 10000 )
                  {
                    v60 = *(_DWORD *)(this + 392);
                    v61 = *(_DWORD *)(v60 + 940);
                    if ( v61 == 2 || v61 == 1 )
                    {
                      sub_B974C0(v60, 3, 0);
                      sub_B974C0(*(_DWORD *)(this + 392), 2, 0);
                      sub_B974C0(*(_DWORD *)(this + 392), 4, 0);
                    }
                  }
                  v62 = sub_DB12B0(v72, v73);
                  sub_E59BB0(v72, v73);
                  if ( v62 )
                  {
                    CWnd::ShowWindow((CWnd *)(this + 3892), 0);
                    return v62;
                  }
                  else
                  {
                    sub_E59900(v72, v73);
                    Sleep(0);
                    v63 = sub_E673C0(this);
                    Sleep(0);
                    result = 1;
                    if ( v63 == 61323 )
                      return 61323;
                  }
                  return result;
                }
                return v10;
              }
              sub_DA6490(0);
              v10 = sub_E64280(this);
            }
            v59 = v83;
            goto LABEL_182;
          }
        }
      }
      return 1072;
    }
    if ( dword_F489CC )
    {
LABEL_82:
      v31 = 1;
      goto LABEL_85;
    }
LABEL_81:
    sub_E673C0(this);
    goto LABEL_82;
  }
  return result;
}