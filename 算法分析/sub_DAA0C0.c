int __thiscall sub_DAA0C0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ebx
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int *v16; // edi
  _QWORD *v17; // ebx
  int v18; // eax
  int v19; // ecx
  _QWORD *v20; // edx
  _DWORD *v21; // eax
  _DWORD *v22; // ebx
  int v23; // edx
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  bool v27; // cc
  _QWORD *v28; // edx
  _DWORD *v29; // eax
  char v31[24]; // [esp+24h] [ebp-BCh] BYREF
  double v32[3]; // [esp+3Ch] [ebp-A4h] BYREF
  char v33[4]; // [esp+54h] [ebp-8Ch] BYREF
  _DWORD *v34; // [esp+58h] [ebp-88h]
  char v35[8]; // [esp+70h] [ebp-70h] BYREF
  double v36; // [esp+78h] [ebp-68h]
  double v37; // [esp+80h] [ebp-60h]
  double v38; // [esp+88h] [ebp-58h] BYREF
  double v39; // [esp+90h] [ebp-50h]
  double v40; // [esp+98h] [ebp-48h]
  int v41; // [esp+A0h] [ebp-40h]
  _DWORD *v42; // [esp+A4h] [ebp-3Ch]
  _DWORD *v43; // [esp+A8h] [ebp-38h]
  int v44; // [esp+ACh] [ebp-34h]
  int i; // [esp+B0h] [ebp-30h]
  double v46; // [esp+B4h] [ebp-2Ch]
  int v47; // [esp+BCh] [ebp-24h]
  int v48; // [esp+C0h] [ebp-20h]
  _QWORD *v49; // [esp+C4h] [ebp-1Ch]
  int v50; // [esp+C8h] [ebp-18h]
  _DWORD *v51; // [esp+CCh] [ebp-14h]
  _DWORD *v52; // [esp+D0h] [ebp-10h]
  int v53; // [esp+DCh] [ebp-4h]

  v51 = this;
  sub_E4AFB0((CObList *)(this + 4), sub_BA8DD0);
  v2 = (_DWORD *)*(this + 19);
  if ( v2 )
  {
    while ( 1 )
    {
      if ( !v2 )
        goto LABEL_63;
      v3 = (_DWORD *)v2[2];
      v43 = (_DWORD *)*v2;
      CObList::CObList((CObList *)v33, 10);
      v53 = 0;
      sub_BBE700((CObList *)v33);
      v4 = v51;
      if ( *(_DWORD *)(v51[3] + 12) == 10003 )
      {
        sub_BC6B40(v3);
        v4 = v51;
      }
      v5 = v34;
      if ( v34 )
        break;
LABEL_61:
      v53 = -1;
      CObList::~CObList((CObList *)v33);
      v2 = v43;
      if ( !v43 )
        return 0;
    }
    while ( v5 )
    {
      v6 = v5[2];
      v7 = *(_DWORD *)(v6 + 44);
      v8 = *(_DWORD **)(v6 + 40);
      v42 = (_DWORD *)*v5;
      v9 = 0;
      v52 = v8;
      v41 = v7;
      for ( i = 0; v9 < *(_DWORD *)(v7 + 12); i = v9 )
      {
        if ( *(_DWORD *)(v7 + 12) <= v9 || v9 < 0 )
        {
          v10 = 0;
        }
        else
        {
          if ( v9 >= *(_DWORD *)(v7 + 12) )
            goto LABEL_63;
          v10 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 4 * v9);
        }
        v11 = v4[3];
        v47 = v10;
        if ( sub_D3AA20(v11) == 60 || *(_DWORD *)(v51[3] + 12) == 482 )
        {
          if ( v8[127] != 5 || (unsigned __int8)sub_DC1F10(v8) )
          {
            v29 = v51;
            *(_BYTE *)(v7 + 156) = 1;
            if ( !*(_DWORD *)(v29[2] + 168) )
              sub_DCE340(v10);
            sub_DDE9C0(v10);
          }
        }
        else
        {
          v12 = v8[18];
          v13 = 0;
          v14 = 0;
          v48 = 0;
          v44 = 0;
          if ( v12 > 0 )
          {
            do
            {
              v15 = 0;
              if ( v12 > 0 )
              {
                v16 = (int *)(v10 + 36);
                do
                {
                  if ( v16[1] == v14 && *(v16 - 6) && *v16 < 0 )
                  {
                    *v16 = v13;
                    if ( v15 < 0 || v15 >= v8[18] )
                      v17 = 0;
                    else
                      v17 = *(_QWORD **)(v8[17] + 4 * v15);
                    sub_BC06D0(&v38);
                    v18 = sub_BF0480(v17, (int)v32);
                    sub_BA24E0(&v38, (int)v35, v18);
                    v8 = v52;
                    v19 = 0;
                    v20 = (_QWORD *)v52[18];
                    v50 = 0;
                    v49 = v20;
                    if ( (int)v20 > 0 )
                    {
                      v21 = v52;
                      v22 = (_DWORD *)(v47 + 16);
                      do
                      {
                        if ( v15 != v19 )
                        {
                          if ( *(v22 - 1) )
                          {
                            if ( (int)v22[5] < 0 )
                            {
                              v23 = *v22;
                              HIDWORD(v46) = *(_DWORD *)(*v22 + 80);
                              v19 = v50;
                              if ( HIDWORD(v46) != 80 )
                              {
                                if ( *(_DWORD *)(v23 + 80) != 60 || *(_DWORD *)(*(_DWORD *)(v23 + 280) + 72) )
                                {
                                  v24 = *(_DWORD *)(*(v16 - 5) + 40);
                                  v25 = *(double *)(v24 + 120);
                                  if ( *(double *)(v24 + 128) <= v25 )
                                    v25 = *(double *)(v24 + 128);
                                  if ( v25 > 0.38 )
                                  {
                                    if ( v50 < 0 || v50 >= (int)v49 )
                                    {
                                      v49 = 0;
                                    }
                                    else
                                    {
                                      if ( v50 >= v52[18] )
                                        goto LABEL_63;
                                      v49 = *(_QWORD **)(v52[17] + 4 * v50);
                                    }
                                    sub_BC06D0(v32);
                                    v26 = sub_BF0480(v49, (int)v31);
                                    sub_BA24E0(v32, (int)&v38, v26);
                                    if ( HIDWORD(v46) == 60 && *(_DWORD *)(*(_DWORD *)(*v22 + 280) + 72) == 1 )
                                    {
                                      v46 = _hypot(v36 - v39, v37 - v40);
                                      v27 = *(double *)&qword_F44080 <= v46;
                                    }
                                    else
                                    {
                                      v46 = _hypot(v36 - v39, v37 - v40);
                                      v27 = v46 >= 0.2;
                                    }
                                    v19 = v50;
                                    if ( !v27 )
                                      v22[5] = v48;
                                  }
                                }
                                v21 = v52;
                              }
                            }
                          }
                        }
                        v28 = (_QWORD *)v21[18];
                        ++v19;
                        v22 += 22;
                        v50 = v19;
                        v49 = v28;
                      }
                      while ( v19 < (int)v28 );
                      v8 = v52;
                    }
                    v14 = v44;
                    v13 = ++v48;
                  }
                  ++v15;
                  v16 += 22;
                }
                while ( v15 < v8[18] );
              }
              v12 = v8[18];
              v10 = v47;
              v44 = ++v14;
            }
            while ( v14 < v12 );
            v7 = v41;
          }
        }
        v4 = v51;
        v9 = i + 1;
      }
      v5 = v42;
      v4 = v51;
      if ( !v42 )
        goto LABEL_61;
    }
LABEL_63:
    AfxThrowInvalidArgException();
  }
  return 0;
}