int __thiscall sub_DAE030(int this)
{
  _DWORD *v1; // edi
  int v2; // esi
  _DWORD *v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // ebx
  _DWORD *v8; // ecx
  int v9; // esi
  int v10; // esi
  struct __POSITION *v11; // esi
  struct __POSITION *v12; // eax
  int v13; // edi
  int v14; // ecx
  _DWORD *v15; // esi
  _DWORD *v16; // ecx
  _DWORD *v17; // eax
  int v18; // ebx
  _DWORD *v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // esi
  int v22; // ebx
  _DWORD *v23; // eax
  struct CObject *v24; // edi
  struct __POSITION *v25; // ecx
  int v26; // ebx
  _DWORD *v27; // edi
  _DWORD *v28; // esi
  int v29; // esi
  int v30; // edx
  int v31; // ecx
  void *v32; // ebx
  void *v33; // eax
  void *v34; // esi
  void *v35; // ebx
  void *v36; // eax
  void *v37; // esi
  double *v38; // ebx
  int v39; // esi
  _DWORD *v40; // ecx
  int v41; // eax
  _DWORD *v42; // edi
  int v43; // edx
  int v44; // esi
  int v45; // ebx
  int v46; // eax
  double v47; // xmm0_8
  double v48; // xmm1_8
  int v49; // ecx
  bool v50; // zf
  int v51; // eax
  double v52; // xmm1_8
  int v53; // edx
  double v54; // xmm2_8
  double v55; // xmm0_8
  int v56; // eax
  int v57; // eax
  int v58; // eax
  double v59; // xmm1_8
  double *v60; // ecx
  int v61; // esi
  int v62; // eax
  double v63; // xmm1_8
  bool v64; // cc
  _DWORD *v65; // ebx
  int v66; // edi
  _DWORD *v67; // eax
  int v68; // esi
  int v69; // esi
  struct __POSITION *v70; // ebx
  struct __POSITION *v71; // ecx
  int v72; // eax
  struct __POSITION *v73; // ebx
  int v74; // ebx
  double *v75; // eax
  _DWORD *v76; // edi
  int v77; // esi
  _DWORD *v78; // edi
  int v79; // ebx
  int v80; // eax
  _DWORD *v81; // esi
  double *v82; // ecx
  double v83; // xmm1_8
  double v84; // xmm0_8
  int v85; // esi
  int v86; // eax
  double v87; // xmm1_8
  _DWORD *v88; // ebx
  int v89; // esi
  char *v90; // edi
  int v91; // ecx
  int v92; // edi
  int v93; // edx
  void *v94; // edi
  _DWORD *v95; // ebx
  char *v96; // esi
  int i; // edi
  int j; // esi
  int v99; // edi
  int v100; // esi
  double *v101; // ecx
  double *v102; // edx
  double v103; // xmm1_8
  double v104; // xmm0_8
  double v105; // xmm1_8
  double v106; // xmm1_8
  double v107; // xmm1_8
  double *v108; // eax
  int v109; // ecx
  void *v110; // edx
  struct CObList *v112; // [esp+44h] [ebp-488h]
  struct CObList *v113; // [esp+44h] [ebp-488h]
  int v114; // [esp+44h] [ebp-488h]
  int v115; // [esp+48h] [ebp-484h]
  int v116; // [esp+48h] [ebp-484h]
  int v117; // [esp+4Ch] [ebp-480h]
  int v118; // [esp+4Ch] [ebp-480h]
  int v120; // [esp+68h] [ebp-464h]
  int v121; // [esp+68h] [ebp-464h]
  char *v122; // [esp+68h] [ebp-464h]
  int v123; // [esp+6Ch] [ebp-460h]
  int v124; // [esp+6Ch] [ebp-460h]
  void *v125; // [esp+70h] [ebp-45Ch]
  double *v126; // [esp+70h] [ebp-45Ch]
  char *v127; // [esp+70h] [ebp-45Ch]
  void *v128; // [esp+74h] [ebp-458h]
  _DWORD *v129; // [esp+74h] [ebp-458h]
  int v130; // [esp+74h] [ebp-458h]
  int v131; // [esp+78h] [ebp-454h]
  int v132; // [esp+78h] [ebp-454h]
  int v133; // [esp+7Ch] [ebp-450h]
  _DWORD *v134; // [esp+80h] [ebp-44Ch]
  int v135; // [esp+80h] [ebp-44Ch]
  _DWORD *v136; // [esp+80h] [ebp-44Ch]
  double v137; // [esp+84h] [ebp-448h]
  double v138; // [esp+84h] [ebp-448h]
  double v139; // [esp+84h] [ebp-448h]
  int v140; // [esp+8Ch] [ebp-440h]
  int v141; // [esp+8Ch] [ebp-440h]
  struct __POSITION *v142; // [esp+90h] [ebp-43Ch]
  int v143; // [esp+90h] [ebp-43Ch]
  _DWORD *v144; // [esp+90h] [ebp-43Ch]
  double *v145; // [esp+94h] [ebp-438h]
  _DWORD *v146; // [esp+98h] [ebp-434h]
  int v147; // [esp+98h] [ebp-434h]
  int v148; // [esp+98h] [ebp-434h]
  double v149; // [esp+9Ch] [ebp-430h]
  double v150; // [esp+9Ch] [ebp-430h]
  double v151; // [esp+9Ch] [ebp-430h]
  void *v152; // [esp+A8h] [ebp-424h] BYREF
  _DWORD *v153; // [esp+ACh] [ebp-420h]
  int v154; // [esp+B0h] [ebp-41Ch] BYREF
  _DWORD *v155; // [esp+B4h] [ebp-418h]
  int v156; // [esp+BCh] [ebp-410h]
  double v157; // [esp+CCh] [ebp-400h]
  struct __POSITION *v158; // [esp+D4h] [ebp-3F8h]
  int v159; // [esp+D8h] [ebp-3F4h]
  double v160; // [esp+DCh] [ebp-3F0h]
  char v161[4]; // [esp+E8h] [ebp-3E4h] BYREF
  struct __POSITION *v162; // [esp+ECh] [ebp-3E0h]
  char v163[4]; // [esp+104h] [ebp-3C8h] BYREF
  _DWORD *v164; // [esp+108h] [ebp-3C4h]
  char v165[4]; // [esp+120h] [ebp-3ACh] BYREF
  _DWORD *v166; // [esp+124h] [ebp-3A8h]
  char v167[4]; // [esp+13Ch] [ebp-390h] BYREF
  _DWORD *v168; // [esp+140h] [ebp-38Ch]
  char v169[4]; // [esp+158h] [ebp-374h] BYREF
  __int64 v170; // [esp+15Ch] [ebp-370h]
  _QWORD v171[4]; // [esp+170h] [ebp-35Ch] BYREF
  _QWORD v172[3]; // [esp+190h] [ebp-33Ch] BYREF
  double v173[8]; // [esp+1ACh] [ebp-320h] BYREF
  double v174[51]; // [esp+1ECh] [ebp-2E0h] BYREF
  _QWORD v175[32]; // [esp+384h] [ebp-148h] BYREF
  int v176; // [esp+4C8h] [ebp-4h]

  v1 = (_DWORD *)this;
  v2 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 12) + 636) = 1;
  v3 = *(_DWORD **)(this + 20);
  v131 = -1;
  if ( v3 )
  {
    do
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
      memset((void *)(v4[2] + 680), 0, 0x100u);
    }
    while ( v3 );
    v1 = (_DWORD *)this;
  }
  if ( dword_F489F4
    || (v5 = v1[3], *(_DWORD *)(v5 + 12) == 4311)
    || *(_DWORD *)(v5 + 12) == 10003
    || *(_DWORD *)(v5 + 12) == 5114
    || *(_DWORD *)(v5 + 12) == 5117 )
  {
    v65 = (_DWORD *)v1[5];
    if ( v65 )
    {
      do
      {
        v66 = v65[2];
        v65 = (_DWORD *)*v65;
        v153 = v65;
        v130 = v66;
        *(_BYTE *)(this + 964) = sub_BACAD0(v115, v117) != 0;
        memset(v173, 0, sizeof(v173));
        if ( *(_DWORD *)(v66 + 672) != v131 )
        {
          if ( v131 > -1 )
            v174[v131] = sub_D3A4B0(*(_DWORD *)(this + 12));
          sub_D3C100(*(_DWORD *)(this + 12));
        }
        v131 = *(_DWORD *)(v66 + 672);
        CObList::CObList((CObList *)v165, 10);
        v176 = 0;
        CObList::AddTail((CObList *)v165, (struct CObList *)(v66 + 196));
        v67 = v166;
        v68 = 0;
        v121 = 0;
        v150 = 0.0;
        if ( v166 )
        {
          do
          {
            if ( !v67 )
              goto LABEL_34;
            v69 = v67[2];
            v144 = (_DWORD *)*v67;
            CObList::CObList((CObList *)v161, 10);
            LOBYTE(v176) = 1;
            CObList::AddTail((CObList *)v161, (struct CObList *)(v69 + 40));
            v70 = v162;
            if ( v162 )
            {
              do
              {
                v71 = v70;
                if ( !v70 )
                  goto LABEL_34;
                v72 = *((_DWORD *)v70 + 2);
                v70 = *(struct __POSITION **)v70;
                if ( *(_DWORD *)(v72 + 40) != v66 )
                  CObList::RemoveAt((CObList *)v161, v71);
              }
              while ( v70 );
              v73 = v162;
              if ( v162 )
              {
                do
                {
                  if ( !v73 )
                    goto LABEL_34;
                  v158 = *(struct __POSITION **)v73;
                  v74 = *((_DWORD *)v73 + 2);
                  v75 = *(double **)(v74 + 40);
                  v114 = *(_DWORD *)(v74 + 44);
                  *(_QWORD *)(v74 + 112) = 0;
                  v126 = v75;
                  sub_BAE7B0(v114);
                  CObList::CObList((CObList *)v163, 10);
                  LOBYTE(v176) = 2;
                  sub_BBE700((CObList *)v163);
                  v76 = v164;
                  while ( v76 )
                  {
                    CPtrList::CPtrList((CPtrList *)v167, 10);
                    LOBYTE(v176) = 3;
                    if ( !v76 )
                      goto LABEL_34;
                    v77 = v76[2];
                    v76 = (_DWORD *)*v76;
                    sub_C585E0(v116, v118);
                    sub_C65DD0(v77);
                    sub_C66AD0((CPtrList *)v167);
                    LOBYTE(v176) = 2;
                    CPtrList::~CPtrList((CPtrList *)v167);
                  }
                  sub_BC6540(v74);
                  sub_BC6610((_QWORD *)v74, 0);
                  sub_BC6B40((_DWORD *)v74);
                  v39 = sub_BB8290((double *)v74);
                  if ( v39 )
                  {
                    LOBYTE(v176) = 1;
                    CObList::~CObList((CObList *)v163);
                    LOBYTE(v176) = 0;
LABEL_214:
                    CObList::~CObList((CObList *)v161);
                    v176 = -1;
                    CObList::~CObList((CObList *)v165);
                    return v39;
                  }
                  v78 = v164;
                  while ( v78 )
                  {
                    if ( !v78 )
                      goto LABEL_34;
                    v79 = v78[2];
                    v78 = (_DWORD *)*v78;
                    v80 = *(_DWORD *)(*(_DWORD *)(v79 + 40) + 4);
                    v157 = 0.0;
                    v147 = v80;
                    CPtrList::CPtrList((CPtrList *)&v154, 10);
                    LOBYTE(v176) = 4;
                    sub_DC8C40((CPtrList *)&v154);
                    if ( v156 )
                    {
                      v81 = v155;
                      v135 = *(_DWORD *)(*(_DWORD *)(v155[2] + 2032) + 4);
                      do
                      {
                        if ( !v81 )
                          goto LABEL_34;
                        v82 = (double *)v81[2];
                        v81 = (_DWORD *)*v81;
                        v139 = sub_DC8740(v82);
                        v83 = v139 + v157;
                        v157 = v139 + v157;
                      }
                      while ( v81 );
                      v84 = *(double *)((char *)&v172[v135 + 2] + 4);
                      if ( v84 <= v83 )
                        v84 = v83;
                      v85 = *(_DWORD *)(v79 + 40);
                      *(double *)((char *)&v172[v135 + 2] + 4) = v84;
                      v126[4 * v135 + 80 + v147] = v83;
                      v150 = v83 + v150;
                      v121 += v156;
                      *(_QWORD *)(v85 + 2040) = libm_sse2_sqrt_precise().m128_u64[0];
                    }
                    LOBYTE(v176) = 2;
                    CPtrList::~CPtrList((CPtrList *)&v154);
                  }
                  LOBYTE(v176) = 1;
                  CObList::~CObList((CObList *)v163);
                  v73 = v158;
                }
                while ( v158 );
                v66 = v130;
              }
            }
            LOBYTE(v176) = 0;
            CObList::~CObList((CObList *)v161);
            v67 = v144;
          }
          while ( v144 );
          v68 = v121;
          v65 = v153;
        }
        v86 = sub_BACAD0(v116, v118);
        *(double *)(v66 + 520) = sub_D93080(this, v173, v86, v66);
        v87 = v150 / (double)v68;
        *(double *)(v66 + 528) = v87;
        if ( v150 > 0.0 )
          *(double *)(v66 + 528) = v87;
        *(double *)*(_DWORD *)(v66 + 936) = v173[0];
        *(double *)(*(_DWORD *)(v66 + 936) + 8) = v173[1];
        *(double *)(*(_DWORD *)(v66 + 936) + 16) = v173[2];
        *(double *)(*(_DWORD *)(v66 + 936) + 24) = v173[3];
        *(double *)(*(_DWORD *)(v66 + 936) + 32) = v173[4];
        *(double *)(*(_DWORD *)(v66 + 936) + 40) = v173[5];
        *(double *)(*(_DWORD *)(v66 + 936) + 48) = v173[6];
        *(double *)(*(_DWORD *)(v66 + 936) + 56) = v173[7];
        v176 = -1;
        CObList::~CObList((CObList *)v165);
      }
      while ( v65 );
      v1 = (_DWORD *)this;
      v2 = v131;
    }
  }
  else
  {
    v125 = 0;
    if ( sub_D3AA00() > 0 && *(_DWORD *)(v1[3] + 12) == 5116 )
    {
      v125 = (void *)sub_D8C480();
      sub_E46670();
    }
    v6 = (_DWORD *)v1[5];
    while ( v6 )
    {
      v7 = v6[2];
      v134 = (_DWORD *)*v6;
      v133 = v7;
      CObList::CObList((CObList *)v165, 10);
      v176 = 5;
      CObList::AddTail((CObList *)v165, (struct CObList *)(v7 + 196));
      memset(v173, 0, sizeof(v173));
      if ( *(_DWORD *)(v7 + 672) != v2 )
      {
        if ( v2 != -1 )
          v174[v2] = sub_D3A4B0(v1[3]);
        sub_D3C100(v1[3]);
      }
      v8 = v166;
      v9 = 0;
      v132 = *(_DWORD *)(v7 + 672);
      v120 = 0;
      v157 = 0.0;
      if ( v166 )
      {
        while ( 1 )
        {
          if ( !v8 )
            goto LABEL_34;
          v146 = (_DWORD *)*v8;
          v159 = v8[2];
          v10 = v159;
          CObList::CObList((CObList *)v161, 10);
          LOBYTE(v176) = 6;
          CObList::AddTail((CObList *)v161, (struct CObList *)(v10 + 40));
          v11 = v162;
          if ( v162 )
          {
            do
            {
              v12 = v11;
              if ( !v11 )
                goto LABEL_34;
              v13 = *((_DWORD *)v11 + 2);
              v11 = *(struct __POSITION **)v11;
              if ( *(_DWORD *)(v13 + 40) != v7 )
                CObList::RemoveAt((CObList *)v161, v12);
              **(_BYTE **)(*(_DWORD *)(v13 + 44) + 56) = 1;
            }
            while ( v11 );
            v1 = (_DWORD *)this;
          }
          v14 = 1;
          if ( *(_BYTE *)(v7 + 1085) )
            v14 = 2;
          v15 = 0;
          v158 = (struct __POSITION *)v14;
          v153 = 0;
          do
          {
            CObList::CObList((CObList *)v163, 10);
            v112 = (struct CObList *)(*(_DWORD *)(v159 + 8) + 92);
            LOBYTE(v176) = 7;
            CObList::AddTail((CObList *)v163, v112);
            v16 = v164;
            if ( v164 )
            {
              while ( 1 )
              {
                v17 = v16;
                if ( !v16 )
                  break;
                v18 = v16[2];
                v16 = (_DWORD *)*v16;
                v123 = v17[2];
                if ( v15 )
                {
                  if ( v15 == (_DWORD *)1 && *(_DWORD *)(*(_DWORD *)(v18 + 44) + 132) == 1 && *(_BYTE *)(v18 + 72) )
                    goto LABEL_44;
                }
                else if ( *(_DWORD *)(*(_DWORD *)(v18 + 44) + 132) == 1 )
                {
                  goto LABEL_45;
                }
                if ( !v16 )
                  goto LABEL_39;
              }
LABEL_34:
              AfxThrowInvalidArgException();
            }
LABEL_39:
            v19 = v164;
            while ( v19 )
            {
              v20 = v19;
              if ( !v19 )
                goto LABEL_34;
              v18 = v19[2];
              v19 = (_DWORD *)*v19;
              v123 = v20[2];
              if ( *(_DWORD *)(v18 + 76) == 1 )
                goto LABEL_45;
            }
            v18 = v164[2];
LABEL_44:
            v123 = v18;
LABEL_45:
            v128 = operator new(0x108u);
            LOBYTE(v176) = 8;
            if ( v128 )
              v145 = (double *)sub_BB20F0(v1, v133, v18);
            else
              v145 = 0;
            LOBYTE(v176) = 7;
            CMapWordToPtr::CMapWordToPtr((CMapWordToPtr *)((char *)v171 + 4), 10);
            LOBYTE(v176) = 9;
            CObList::CObList((CObList *)v169, 10);
            v113 = (struct CObList *)(*(_DWORD *)(v159 + 8) + 8);
            LOBYTE(v176) = 10;
            CObList::AddTail((CObList *)v169, v113);
            v21 = (_DWORD *)v170;
            if ( (_DWORD)v170 )
            {
              while ( v21 )
              {
                v22 = v21[2];
                v21 = (_DWORD *)*v21;
                *(_QWORD *)(v22 + 1976) = 0x401A000000000000LL;
                *(_DWORD *)(v22 + 2048) = 1;
                v23 = operator new(0x2A0u);
                LOBYTE(v176) = 11;
                if ( v23 )
                  v24 = (struct CObject *)sub_C49FD0(v23, (void *)v22, (int)v145, (int)v1);
                else
                  v24 = 0;
                LOBYTE(v176) = 10;
                sub_C585E0(v115, v117);
                CObList::AddTail((CObList *)((char *)v145 + 52), v24);
                *(_DWORD *)CMapWordToPtr::operator[]((char *)v171 + 4, *(_DWORD *)(v22 + 4)) = v24;
                v1 = (_DWORD *)this;
                if ( !v21 )
                  goto LABEL_54;
              }
              goto LABEL_34;
            }
LABEL_54:
            v25 = v162;
            v152 = 0;
            if ( v162 )
            {
              v26 = v123;
              while ( 1 )
              {
                if ( !v25 )
                  goto LABEL_34;
                v142 = *(struct __POSITION **)v25;
                v140 = *((_DWORD *)v25 + 2);
                **(_BYTE **)(*(_DWORD *)(v140 + 44) + 56) = 1;
                CObList::CObList((CObList *)v172, 10);
                LOBYTE(v176) = 12;
                sub_BBE700((CObList *)v172);
                v27 = (_DWORD *)HIDWORD(v172[0]);
                v152 = 0;
                if ( HIDWORD(v172[0]) )
                  break;
LABEL_80:
                LOBYTE(v176) = 10;
                CObList::~CObList((CObList *)v172);
                v25 = v142;
                if ( !v142 )
                  goto LABEL_81;
              }
              while ( 2 )
              {
                v28 = v27;
                if ( !v27 )
                  goto LABEL_34;
                v27 = (_DWORD *)*v27;
                v29 = v28[2];
                if ( sub_D3AC60(*(_DWORD *)(this + 12)) == 10000 )
                {
                  if ( *(_BYTE *)(v26 + 72) )
                  {
                    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v29 + 32) + 44) + 72) )
                      goto LABEL_64;
                  }
                  else if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v29 + 32) + 44) + 72) )
                  {
                    goto LABEL_64;
                  }
                }
                else
                {
LABEL_64:
                  CPtrList::CPtrList((CPtrList *)&v154, 10);
                  LOBYTE(v176) = 13;
                  sub_C55820(v29);
                  sub_C585E0(v115, v117);
                  sub_C65DD0(v29);
                  sub_C66AD0((CPtrList *)&v154);
                  CMapWordToPtr::Lookup(
                    (CMapWordToPtr *)((char *)v171 + 4),
                    *(_DWORD *)(*(_DWORD *)(v29 + 40) + 4),
                    &v152);
                  v30 = *(_DWORD *)(v29 + 40);
                  v31 = *(_DWORD *)(v30 + 56);
                  if ( *(_BYTE *)(v123 + 72) )
                    v31 = *(_DWORD *)(v30 + 60);
                  if ( *(_DWORD *)(v140 + 44) == v31 )
                  {
                    while ( v156 )
                    {
                      v32 = CPtrList::RemoveTail((CPtrList *)&v154);
                      v33 = operator new(0xB78u);
                      LOBYTE(v176) = 14;
                      if ( v33 )
                        v34 = (void *)sub_B93200((int)v33);
                      else
                        v34 = 0;
                      LOBYTE(v176) = 13;
                      sub_B93E70(v32);
                      sub_C4CD00(0, v34);
                    }
                  }
                  else
                  {
                    while ( v156 )
                    {
                      v35 = CPtrList::RemoveHead((CPtrList *)&v154);
                      v36 = operator new(0xB78u);
                      LOBYTE(v176) = 15;
                      if ( v36 )
                        v37 = (void *)sub_B93200((int)v36);
                      else
                        v37 = 0;
                      LOBYTE(v176) = 13;
                      sub_B93E70(v35);
                      sub_C4CCC0(v37);
                    }
                  }
                  LOBYTE(v176) = 12;
                  CPtrList::~CPtrList((CPtrList *)&v154);
                  v26 = v123;
                }
                if ( !v27 )
                  goto LABEL_80;
                continue;
              }
            }
LABEL_81:
            v38 = v145;
            if ( v145 )
            {
              v145[14] = 0.0;
              sub_BC6650(0);
              sub_BC6540((int)v145);
              sub_BC6610(v145, 0);
              v39 = sub_BB8290(v145);
              if ( v39 )
              {
                (*(void (__thiscall **)(double *, int))(*(_DWORD *)v145 + 4))(v145, 1);
                LOBYTE(v176) = 9;
                CObList::~CObList((CObList *)v169);
                LOBYTE(v176) = 7;
                CMapWordToPtr::~CMapWordToPtr((CMapWordToPtr *)((char *)v171 + 4));
                LOBYTE(v176) = 6;
                CObList::~CObList((CObList *)v163);
                LOBYTE(v176) = 5;
                goto LABEL_214;
              }
              CObList::CObList((CObList *)v167, 10);
              LOBYTE(v176) = 16;
              sub_BBE700((CObList *)v167);
              v40 = v168;
              if ( v168 )
              {
                do
                {
                  if ( !v40 )
                    goto LABEL_34;
                  v129 = (_DWORD *)*v40;
                  v41 = *(_DWORD *)(*(_DWORD *)(v40[2] + 40) + 4);
                  v143 = v40[2];
                  v160 = 0.0;
                  v141 = v41;
                  CPtrList::CPtrList((CPtrList *)&v154, 10);
                  LOBYTE(v176) = 17;
                  sub_DC8C40((CPtrList *)&v154);
                  if ( v156 )
                  {
                    v42 = v155;
                    v149 = 0.0;
                    v43 = *(_DWORD *)(v155[2] + 2032);
                    v124 = v43;
                    v44 = 0;
                    do
                    {
                      if ( !v42 )
                        goto LABEL_34;
                      v45 = v42[2];
                      v42 = (_DWORD *)*v42;
                      if ( *(_DWORD *)(v45 + 2032) != v43 )
                      {
                        v46 = *(_DWORD *)(v43 + 4);
                        v47 = v160;
                        v48 = *(double *)((char *)&v172[v46 + 2] + 4);
                        v149 = v160;
                        if ( v48 <= v160 )
                          v48 = v160;
                        v124 = *(_DWORD *)(v45 + 2032);
                        *(double *)((char *)&v172[v46 + 2] + 4) = v48;
                        *(double *)(v133 + 8 * (v141 + 4 * v46) + 640) = v47;
                        v49 = *(_DWORD *)(this + 12);
                        v50 = *(_DWORD *)(v49 + 12) == 10003;
                        v157 = v47 + v157;
                        if ( v50 || sub_D3AC60(v49) == 10000 )
                          v160 = 0.0;
                        v44 = 0;
                      }
                      v137 = sub_DC8740((double *)v45);
                      v51 = *(_DWORD *)(*(_DWORD *)(v45 + 2032) + 44);
                      v52 = v137 + v160;
                      v160 = v137 + v160;
                      if ( v51 == *(_DWORD *)(v143 + 40) && !v44 )
                      {
                        v52 = *(double *)(v143 + 208) + v52;
                        v160 = v52;
                      }
                      v43 = v124;
                      ++v44;
                    }
                    while ( v42 );
                    v53 = *(_DWORD *)(v124 + 4);
                    v54 = *(double *)(v143 + 624) + v52;
                    v55 = *(double *)((char *)&v172[v53 + 2] + 4);
                    if ( v55 <= v54 )
                      v55 = *(double *)(v143 + 624) + v52;
                    *(double *)((char *)&v172[v53 + 2] + 4) = v55;
                    v56 = *(_DWORD *)(this + 12);
                    if ( *(_DWORD *)(v56 + 12) == 5112
                      || *(_DWORD *)(v56 + 12) == 511
                      || *(_DWORD *)(v56 + 12) == 5113
                      || *(_DWORD *)(v56 + 12) == 5117 )
                    {
                      v57 = *(_DWORD *)(this + 940);
                      if ( v57 != 2 && v57 != 1 )
                        v54 = *(double *)(*(_DWORD *)(this + 8) + 312) * v54;
                    }
                    v58 = *(_DWORD *)(v143 + 40);
                    if ( *(_DWORD *)(v58 + 508) == 3 || *(_DWORD *)(v58 + 508) == 4 )
                    {
                      v59 = v54 - v149;
                      v60 = (double *)(v133 + 8 * (v141 + 4 * v53 - 5) + 680);
                      *v60 = *(double *)(*(_DWORD *)(this + 8) + 320) * (v54 - v149);
                    }
                    else
                    {
                      v59 = v54 - v149;
                      v60 = (double *)(v133 + 8 * (v141 + 4 * v53 - 5) + 680);
                      *v60 = v54 - v149;
                    }
                    if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 12) == 5116 )
                      *v60 = v54;
                    if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 12) == 4212 )
                      *(double *)((char *)&v172[v53 + 2] + 4) = v59;
                    v61 = *(_DWORD *)(v143 + 40);
                    v120 += v156;
                    v157 = v54 + v157;
                    *(_QWORD *)(v61 + 2040) = libm_sse2_sqrt_precise().m128_u64[0];
                  }
                  LOBYTE(v176) = 16;
                  CPtrList::~CPtrList((CPtrList *)&v154);
                  v40 = v129;
                }
                while ( v129 );
                v38 = v145;
              }
              (*(void (__thiscall **)(double *, int))(*(_DWORD *)v38 + 4))(v38, 1);
              LOBYTE(v176) = 10;
              CObList::~CObList((CObList *)v167);
            }
            LOBYTE(v176) = 9;
            CObList::~CObList((CObList *)v169);
            LOBYTE(v176) = 7;
            CMapWordToPtr::~CMapWordToPtr((CMapWordToPtr *)((char *)v171 + 4));
            LOBYTE(v176) = 6;
            CObList::~CObList((CObList *)v163);
            v1 = (_DWORD *)this;
            v15 = (_DWORD *)((char *)v153 + 1);
            v153 = v15;
          }
          while ( (int)v15 < (int)v158 );
          v7 = v133;
          LOBYTE(v176) = 5;
          CObList::~CObList((CObList *)v161);
          v8 = v146;
          v1 = (_DWORD *)this;
          if ( !v146 )
          {
            v9 = v120;
            break;
          }
        }
      }
      v62 = sub_BACAD0(v115, v117);
      v138 = sub_D93080((int)v1, v173, v62, v7);
      v63 = v157;
      v64 = v157 <= 0.0;
      *(double *)(v7 + 520) = v138;
      if ( !v64 )
        *(double *)(v7 + 528) = v63 / (double)v9;
      *(double *)*(_DWORD *)(v7 + 936) = v173[0];
      *(double *)(*(_DWORD *)(v7 + 936) + 8) = v173[1];
      *(double *)(*(_DWORD *)(v7 + 936) + 16) = v173[2];
      *(double *)(*(_DWORD *)(v7 + 936) + 24) = v173[3];
      *(double *)(*(_DWORD *)(v7 + 936) + 32) = v173[4];
      *(double *)(*(_DWORD *)(v7 + 936) + 40) = v173[5];
      *(double *)(*(_DWORD *)(v7 + 936) + 48) = v173[6];
      *(double *)(*(_DWORD *)(v7 + 936) + 56) = v173[7];
      v176 = -1;
      CObList::~CObList((CObList *)v165);
      v6 = v134;
      v2 = v132;
    }
    if ( v125 )
    {
      sub_E45DE0(v125);
      operator delete(v125);
    }
  }
  v174[v2] = sub_D3A4B0(v1[3]);
  if ( !(unsigned __int8)sub_D92C00() )
    goto LABEL_212;
  CObList::CObList((CObList *)&v154, 10);
  v176 = 18;
  CObList::AddTail((CObList *)&v154, (struct CObList *)(v1 + 4));
  sub_E4AFB0((CObList *)&v154, sub_BA8EA0);
  v88 = v155;
  v89 = 0;
  v90 = *(char **)(v155[2] + 672);
  v127 = v90;
  memset(v174, 0, 0x190u);
  v91 = (int)v90;
  do
  {
    if ( !v88 )
      goto LABEL_34;
    v92 = v88[2];
    v88 = (_DWORD *)*v88;
    if ( *(_DWORD *)(v92 + 672) != v91 )
    {
      ++v89;
      v173[v89 + 7] = *(double *)(*(_DWORD *)(this + 12) + 32) + v173[v89 + 7];
    }
    if ( *(double *)(v92 + 520) <= 0.0 )
      goto LABEL_174;
    if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 12) == 471 && sub_D3AE40() == 2 )
    {
      v174[v89] = *(double *)(v92 + 520) + v174[v89];
LABEL_174:
      v93 = this;
      goto LABEL_175;
    }
    v93 = this;
    v174[v89] = *(double *)(v92 + 520) - *(double *)(*(_DWORD *)(this + 12) + 32) + v174[v89];
LABEL_175:
    v91 = *(_DWORD *)(v92 + 672);
    v148 = v91;
  }
  while ( v88 );
  v94 = v127;
  v95 = v155;
  v122 = v127;
  v174[v89] = *(double *)(*(_DWORD *)(v93 + 12) + 32) + v174[v89];
  v96 = v127;
  if ( (int)v127 <= v91 )
  {
    do
    {
      memset(v175, 0, sizeof(v175));
      if ( v95 )
      {
        do
        {
          if ( !v95 )
            goto LABEL_34;
          v136 = (_DWORD *)*v95;
          if ( *(char **)(v95[2] + 672) == v96 )
          {
            for ( i = 0; i < 8; ++i )
            {
              v151 = 0.0;
              for ( j = 0; j < 4; ++j )
              {
                if ( sub_BABFD0(i, j) > v151 )
                {
                  v151 = sub_BABFD0(i, j);
                  *(double *)&v175[4 * i + j] = v151 + *(double *)&v175[4 * i + j];
                }
              }
            }
            v96 = v122;
          }
          v95 = v136;
        }
        while ( v136 );
        v95 = v155;
        if ( v155 )
        {
          do
          {
            if ( !v95 )
              goto LABEL_34;
            v99 = v95[2];
            v95 = (_DWORD *)*v95;
            if ( *(char **)(v99 + 672) == v96 )
            {
              v100 = 0;
              v101 = (double *)&v175[1];
              v102 = (double *)(v99 + 688);
              do
              {
                v103 = *(v101 - 1);
                v104 = 0.0;
                *(v102 - 1) = v103;
                if ( v103 >= 0.0 )
                  v104 = v103;
                v105 = *v101;
                *v102 = *v101;
                if ( v104 <= v105 )
                  v104 = v105;
                v106 = v101[1];
                v102[1] = v106;
                if ( v104 <= v106 )
                  v104 = v106;
                v107 = v101[2];
                v102[2] = v107;
                if ( v104 <= v107 )
                  v104 = v107;
                v100 += 8;
                *(double *)(v100 + *(_DWORD *)(v99 + 936) - 8) = v104;
                v102 += 4;
                v101 += 4;
              }
              while ( v100 < 64 );
              v96 = v122;
            }
          }
          while ( v95 );
          v95 = v155;
        }
      }
      v122 = ++v96;
    }
    while ( (int)v96 <= v148 );
    v94 = v127;
  }
  if ( v95 )
  {
    v108 = v174;
    do
    {
      v109 = v95[2];
      v95 = (_DWORD *)*v95;
      v110 = *(void **)(v109 + 672);
      if ( v110 != v94 )
        ++v108;
      *(double *)(v109 + 520) = *v108;
      v94 = v110;
    }
    while ( v95 );
  }
  v176 = -1;
  CObList::~CObList((CObList *)&v154);
  v1 = (_DWORD *)this;
LABEL_212:
  *(_DWORD *)(v1[3] + 636) = 0;
  return 0;
}