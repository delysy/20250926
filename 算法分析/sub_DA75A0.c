int __thiscall sub_DA75A0(_DWORD *this)
{
  _DWORD *v1; // ebx
  struct CObject **v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int v7; // eax
  int i; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  int v17; // edi
  struct CObject *v18; // eax
  int v19; // edi
  struct CObject *v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // ebx
  _DWORD *v25; // edi
  int v26; // esi
  struct CObject *v27; // esi
  _DWORD *v28; // esi
  int v29; // eax
  _DWORD *v30; // ecx
  _DWORD *v31; // eax
  const struct CObArray *v33; // [esp-4h] [ebp-120h]
  struct CObList *v34; // [esp-4h] [ebp-120h]
  _BYTE v35[28]; // [esp+10h] [ebp-10Ch] BYREF
  char v36[4]; // [esp+2Ch] [ebp-F0h] BYREF
  _DWORD *v37; // [esp+30h] [ebp-ECh]
  _BYTE v38[28]; // [esp+48h] [ebp-D4h] BYREF
  char v39[4]; // [esp+64h] [ebp-B8h] BYREF
  _DWORD *v40; // [esp+68h] [ebp-B4h]
  char v41[4]; // [esp+80h] [ebp-9Ch] BYREF
  _DWORD *v42; // [esp+84h] [ebp-98h]
  char v43[4]; // [esp+9Ch] [ebp-80h] BYREF
  int v44; // [esp+A0h] [ebp-7Ch]
  int v45; // [esp+A4h] [ebp-78h]
  int v46; // [esp+B0h] [ebp-6Ch]
  _DWORD *v47; // [esp+B4h] [ebp-68h]
  char v48[4]; // [esp+B8h] [ebp-64h] BYREF
  _DWORD *v49; // [esp+BCh] [ebp-60h]
  struct CObject *v50; // [esp+C0h] [ebp-5Ch]
  int v51; // [esp+C4h] [ebp-58h]
  int j; // [esp+C8h] [ebp-54h]
  _DWORD v53[16]; // [esp+CCh] [ebp-50h]
  int v54; // [esp+118h] [ebp-4h]

  v1 = this;
  v49 = this;
  if ( *(this + 236) != 1 )
  {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v48);
    v54 = 0;
    CObList::CObList((CObList *)v38, 10);
    LOBYTE(v54) = 1;
    CObList::CObList((CObList *)v35, 10);
    LOBYTE(v54) = 2;
    CObList::CObList((CObList *)v41, 10);
    v2 = (struct CObject **)v1[19];
    LOBYTE(v54) = 3;
    if ( !v2 )
      goto LABEL_32;
    do
    {
      if ( !v2 )
        goto LABEL_43;
      v50 = *v2;
      sub_BBE700((CObList *)v41);
      sub_E4AFB0((CObList *)v41, sub_C513F0);
      v3 = v42;
      v4 = 0;
      v51 = 0;
      v5 = v42;
      if ( v42 )
      {
        while ( 1 )
        {
          v6 = v5;
          if ( !v5 )
            break;
          v5 = (_DWORD *)*v5;
          v7 = *(_DWORD *)(*(_DWORD *)(v6[2] + 44) + 12);
          if ( v7 > v4 )
            v4 = v7;
          v51 = v4;
          if ( !v5 )
            goto LABEL_9;
        }
LABEL_43:
        AfxThrowInvalidArgException();
      }
LABEL_9:
      for ( i = 0; i < v4; ++i )
      {
        if ( v3 )
        {
          do
          {
            if ( !v3 )
              goto LABEL_43;
            v9 = v3[2];
            v10 = *(_DWORD *)(v9 + 40);
            v11 = *(_DWORD *)(v9 + 44);
            v47 = (_DWORD *)*v3;
            v12 = *(_DWORD *)(v11 + 12);
            v46 = v10;
            if ( i < v12 )
            {
              if ( i < 0 )
              {
                v13 = 0;
              }
              else
              {
                if ( i >= v12 )
                  goto LABEL_43;
                v13 = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 4 * i);
              }
              v14 = *(_DWORD *)(v10 + 72);
              v15 = 0;
              for ( j = v13; v15 < v14; ++v15 )
                v53[v15] = v15;
              v16 = 0;
              if ( v14 > 0 )
              {
                do
                {
                  v17 = 88 * v53[v16];
                  v18 = *(struct CObject **)(v17 + v13 + 20);
                  v19 = v13 + v17;
                  if ( v18 )
                  {
                    if ( !CObList::Find((CObList *)v38, v18, 0) )
                    {
                      v20 = *(struct CObject **)(v19 + 20);
                      v21 = *((_DWORD *)v20 + 2);
                      if ( v21 < 0 || v21 >= *(_DWORD *)(*((_DWORD *)v20 + 5) + 44) )
                        goto LABEL_43;
                      CObList::AddTail((CObList *)v38, v20);
                    }
                    v13 = j;
                  }
                  ++v16;
                }
                while ( v16 < *(_DWORD *)(v46 + 72) );
              }
            }
            v3 = v47;
          }
          while ( v47 );
          v3 = v42;
          v4 = v51;
        }
      }
      v2 = (struct CObject **)v50;
    }
    while ( v50 );
    v1 = v49;
LABEL_32:
    CObArray::CObArray((CObArray *)v43);
    v33 = (const struct CObArray *)(v1[3] + 544);
    LOBYTE(v54) = 4;
    CObArray::Copy((CObArray *)v43, v33);
    v22 = v45;
    v23 = 0;
    j = 0;
    if ( v45 > 0 )
    {
      while ( v23 >= 0 && v23 < v22 )
      {
        v24 = 0;
        v25 = *(_DWORD **)(v44 + 4 * v23);
        if ( (int)v25[11] > 0 )
        {
          do
          {
            if ( v24 < 0 || v24 >= v25[11] )
              goto LABEL_43;
            v26 = *(_DWORD *)(v25[10] + 4 * v24);
            sub_D50A50(v24);
            v27 = *(struct CObject **)(v26 + 20);
            v50 = v27;
            if ( v27 && (*((_DWORD *)v27 + 3) != 1 || *(_DWORD *)(*(_DWORD *)(v49[3] + 816) + 944) != 2) )
            {
              if ( CObList::Find((CObList *)v38, v27, 0) )
              {
                sub_D47CE0(v27);
              }
              else
              {
                CObList::CObList((CObList *)v36, 10);
                v34 = (struct CObList *)(v49[3] + 128);
                LOBYTE(v54) = 5;
                CObList::AddTail((CObList *)v36, v34);
                v28 = v37;
                if ( v37 )
                {
                  while ( 1 )
                  {
                    v29 = v28[2];
                    v28 = (_DWORD *)*v28;
                    v51 = v29;
                    CObList::CObList((CObList *)v39, 10);
                    LOBYTE(v54) = 6;
                    sub_CCDDE0((CObList *)v39);
                    v30 = v40;
                    if ( v40 )
                      break;
LABEL_49:
                    LOBYTE(v54) = 5;
                    CObList::~CObList((CObList *)v39);
                    if ( !v28 )
                      goto LABEL_53;
                  }
                  while ( 1 )
                  {
                    v31 = v30;
                    if ( !v30 )
                      goto LABEL_43;
                    v30 = (_DWORD *)*v30;
                    if ( *(_DWORD *)(v31[2] + 8) == v25[2] )
                      break;
                    if ( !v30 )
                      goto LABEL_49;
                  }
                  LOBYTE(v54) = 5;
                  CObList::~CObList((CObList *)v39);
                  if ( v51 )
                  {
                    sub_CD9690(v50);
                    sub_D50FA0(v24);
                  }
                }
LABEL_53:
                LOBYTE(v54) = 4;
                CObList::~CObList((CObList *)v36);
              }
            }
            ++v24;
          }
          while ( v24 < v25[11] );
          v22 = v45;
          v23 = j;
        }
        j = ++v23;
        if ( v23 >= v22 )
          goto LABEL_57;
      }
      goto LABEL_43;
    }
LABEL_57:
    LOBYTE(v54) = 3;
    CObArray::~CObArray((CObArray *)v43);
    LOBYTE(v54) = 2;
    CObList::~CObList((CObList *)v41);
    LOBYTE(v54) = 1;
    CObList::~CObList((CObList *)v35);
    LOBYTE(v54) = 0;
    CObList::~CObList((CObList *)v38);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v48);
  }
  return 0;
}