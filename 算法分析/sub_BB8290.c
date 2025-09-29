int __thiscall sub_BB8290(double *this)
{
  struct _Mtx_internal_imp_t *v2; // eax
  int v3; // eax
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 **v5; // eax
  int v6; // eax
  volatile signed __int32 *v7; // edi
  struct _Mtx_internal_imp_t *v8; // eax
  int v9; // eax
  volatile signed __int32 *v10; // ecx
  volatile signed __int32 **v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  volatile signed __int32 *v17; // edi
  struct _Mtx_internal_imp_t *v18; // eax
  int v19; // eax
  volatile signed __int32 *v20; // ecx
  volatile signed __int32 **v21; // eax
  int v22; // eax
  struct _Mtx_internal_imp_t *v23; // eax
  int v24; // eax
  volatile signed __int32 *v25; // ecx
  volatile signed __int32 **v26; // eax
  int v27; // eax
  volatile signed __int32 *v28; // edi
  struct _Mtx_internal_imp_t *v29; // eax
  int v30; // eax
  volatile signed __int32 *v31; // ecx
  volatile signed __int32 **v32; // eax
  int v33; // eax
  volatile signed __int32 *v34; // edi
  _DWORD *v35; // edi
  _DWORD *v36; // eax
  int v37; // edi
  _DWORD *v38; // ecx
  _DWORD *v39; // eax
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  int v43; // esi
  int v44; // ebx
  int v45; // eax
  int v46; // edx
  __int64 v47; // xmm0_8
  int v48; // eax
  __int64 v49; // xmm0_8
  int v50; // eax
  __int64 v51; // xmm0_8
  int v52; // eax
  __int64 v53; // xmm0_8
  int v54; // eax
  int v55; // eax
  LONG v56; // esi
  int v57; // ecx
  int v58; // esi
  void (*v59)(int *, const char *, ...); // edi
  struct _Mtx_internal_imp_t *v60; // eax
  int v61; // eax
  volatile signed __int32 *v62; // ecx
  volatile signed __int32 **v63; // eax
  int v64; // eax
  void (__thiscall ***v65)(_DWORD); // edx
  int v66; // ecx
  _DWORD *v67; // edi
  _DWORD *v68; // ecx
  int v69; // eax
  __int64 v70; // xmm0_8
  LONG left; // ecx
  LONG top; // ecx
  LONG v73; // ecx
  LONG v74; // ecx
  double *v75; // edi
  int v76; // ecx
  bool v77; // zf
  double v78; // xmm2_8
  _DWORD *v79; // ecx
  int v80; // eax
  int v81; // eax
  __int64 v82; // xmm1_8
  _DWORD *i; // edi
  const char *v84; // eax
  double *v85; // edi
  int *v86; // eax
  int v87; // ebx
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // edi
  int v98; // esi
  unsigned __int8 v99; // bl
  int v100; // eax
  struct _Mtx_internal_imp_t *v101; // eax
  int v102; // eax
  volatile signed __int32 *v103; // ecx
  volatile signed __int32 **v104; // eax
  int v105; // eax
  volatile signed __int32 *v106; // esi
  struct _Mtx_internal_imp_t *v107; // eax
  int v108; // eax
  volatile signed __int32 *v109; // ecx
  volatile signed __int32 **v110; // eax
  int v111; // eax
  volatile signed __int32 *v112; // edi
  const char *v113; // edi
  struct _Mtx_internal_imp_t *v114; // eax
  int v115; // eax
  volatile signed __int32 *v116; // ecx
  volatile signed __int32 **v117; // eax
  int v118; // eax
  void (__thiscall ***v119)(_DWORD); // edx
  int v120; // ecx
  struct _Mtx_internal_imp_t *v121; // eax
  int v122; // eax
  volatile signed __int32 *v123; // ecx
  volatile signed __int32 **v124; // eax
  int v125; // eax
  void (__thiscall ***v126)(_DWORD); // edx
  int v127; // ecx
  _DWORD *v128; // ecx
  double v129; // xmm1_8
  int v130; // eax
  double *v131; // esi
  double v132; // xmm1_8
  struct _Mtx_internal_imp_t *v133; // eax
  int v134; // eax
  volatile signed __int32 *v135; // ecx
  volatile signed __int32 **v136; // eax
  int v137; // eax
  void (__thiscall ***v138)(_DWORD); // edx
  int v139; // ecx
  int v140; // eax
  struct _Mtx_internal_imp_t *v141; // eax
  int v142; // eax
  volatile signed __int32 *v143; // ecx
  volatile signed __int32 **v144; // eax
  int v145; // eax
  volatile signed __int32 *v146; // esi
  _DWORD *v147; // eax
  int v148; // ecx
  int v149; // esi
  int v150; // eax
  bool v151; // cc
  struct _Mtx_internal_imp_t *v152; // eax
  int v153; // eax
  volatile signed __int32 *v154; // ecx
  volatile signed __int32 **v155; // eax
  int v156; // eax
  void (__thiscall ***v157)(_DWORD); // edx
  int v158; // ecx
  int v159; // edi
  int v160; // esi
  double *v161; // ebx
  int v162; // esi
  int v163; // eax
  int v164; // eax
  int v165; // eax
  int v166; // eax
  double v167; // xmm0_8
  double v168; // xmm0_8
  int v169; // eax
  double v170; // xmm0_8
  double v171; // xmm0_8
  struct _Mtx_internal_imp_t *v172; // eax
  int v173; // eax
  volatile signed __int32 *v174; // ecx
  volatile signed __int32 **v175; // eax
  int v176; // eax
  volatile signed __int32 *v177; // esi
  int v178; // esi
  struct _Mtx_internal_imp_t *v179; // eax
  int v180; // eax
  volatile signed __int32 *v181; // ecx
  volatile signed __int32 **v182; // eax
  int v183; // eax
  volatile signed __int32 *v184; // esi
  struct _Mtx_internal_imp_t *v185; // eax
  int v186; // eax
  volatile signed __int32 *v187; // ecx
  volatile signed __int32 **v188; // eax
  int v189; // eax
  volatile signed __int32 *v190; // esi
  struct _Mtx_internal_imp_t *v191; // eax
  int v192; // eax
  volatile signed __int32 *v193; // ecx
  volatile signed __int32 **v194; // eax
  int v195; // eax
  volatile signed __int32 *v196; // esi
  struct _Mtx_internal_imp_t *v197; // eax
  int v198; // eax
  volatile signed __int32 *v199; // ecx
  volatile signed __int32 **v200; // eax
  int v201; // eax
  volatile signed __int32 *v202; // esi
  struct _Mtx_internal_imp_t *v203; // eax
  int v204; // eax
  volatile signed __int32 *v205; // ecx
  volatile signed __int32 **v206; // eax
  int v207; // eax
  volatile signed __int32 *v208; // esi
  struct _Mtx_internal_imp_t *v209; // eax
  int v210; // eax
  volatile signed __int32 *v211; // ecx
  volatile signed __int32 **v212; // eax
  int v213; // eax
  volatile signed __int32 *v214; // esi
  struct _Mtx_internal_imp_t *v215; // eax
  int v216; // eax
  volatile signed __int32 *v217; // ecx
  volatile signed __int32 **v218; // eax
  int v219; // eax
  volatile signed __int32 *v220; // esi
  struct _Mtx_internal_imp_t *v221; // eax
  int v222; // eax
  volatile signed __int32 *v223; // ecx
  volatile signed __int32 **v224; // eax
  int v225; // eax
  volatile signed __int32 *bottom; // esi
  struct _Mtx_internal_imp_t *v227; // eax
  int v228; // eax
  volatile signed __int32 *v229; // ecx
  volatile signed __int32 **v230; // eax
  int v231; // eax
  volatile signed __int32 *v232; // esi
  volatile signed __int32 *v234; // [esp+A0h] [ebp-2F8h]
  int v235; // [esp+A8h] [ebp-2F0h]
  long double v236; // [esp+A8h] [ebp-2F0h]
  volatile signed __int32 *v237; // [esp+B0h] [ebp-2E8h]
  int v238; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v239; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v240; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v241; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v242; // [esp+B0h] [ebp-2E8h]
  int v243; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v244; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v245; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v246; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v247; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v248; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v249; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v250; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v251; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v252; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v253; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v254; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v255; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v256; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v257; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v258; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v259; // [esp+B0h] [ebp-2E8h]
  volatile signed __int32 *v260; // [esp+B0h] [ebp-2E8h]
  int v261; // [esp+B4h] [ebp-2E4h]
  int v262; // [esp+B4h] [ebp-2E4h]
  int v263; // [esp+B4h] [ebp-2E4h]
  int v264; // [esp+B4h] [ebp-2E4h]
  int v265; // [esp+B4h] [ebp-2E4h]
  int v266; // [esp+B4h] [ebp-2E4h]
  int v267; // [esp+B4h] [ebp-2E4h]
  int v268; // [esp+B4h] [ebp-2E4h]
  int v269; // [esp+B4h] [ebp-2E4h]
  int v270; // [esp+B4h] [ebp-2E4h]
  int v271; // [esp+B4h] [ebp-2E4h]
  int v272; // [esp+B4h] [ebp-2E4h]
  int v273; // [esp+B4h] [ebp-2E4h]
  int v274; // [esp+B4h] [ebp-2E4h]
  int v275; // [esp+B4h] [ebp-2E4h]
  volatile signed __int32 *v276; // [esp+C8h] [ebp-2D0h] BYREF
  int v277; // [esp+170h] [ebp-228h] BYREF
  volatile signed __int32 *v278; // [esp+174h] [ebp-224h]
  int v279; // [esp+178h] [ebp-220h] BYREF
  volatile signed __int32 *v280; // [esp+17Ch] [ebp-21Ch]
  int v281; // [esp+180h] [ebp-218h] BYREF
  volatile signed __int32 *v282; // [esp+184h] [ebp-214h]
  int v283; // [esp+188h] [ebp-210h] BYREF
  int v284; // [esp+18Ch] [ebp-20Ch]
  char v285[4]; // [esp+190h] [ebp-208h] BYREF
  _DWORD *v286; // [esp+194h] [ebp-204h]
  __int64 v287; // [esp+1ACh] [ebp-1ECh]
  int v288[2]; // [esp+1B4h] [ebp-1E4h] BYREF
  __int64 v289; // [esp+1BCh] [ebp-1DCh]
  int v290[2]; // [esp+1C4h] [ebp-1D4h] BYREF
  char v291[4]; // [esp+1CCh] [ebp-1CCh] BYREF
  _DWORD *v292; // [esp+1D0h] [ebp-1C8h]
  double v293; // [esp+1E8h] [ebp-1B0h]
  double v294; // [esp+1F0h] [ebp-1A8h]
  double v295; // [esp+1F8h] [ebp-1A0h]
  double v296; // [esp+200h] [ebp-198h]
  int v297[2]; // [esp+208h] [ebp-190h] BYREF
  int v298[2]; // [esp+210h] [ebp-188h] BYREF
  int v299[2]; // [esp+218h] [ebp-180h] BYREF
  int v300[2]; // [esp+220h] [ebp-178h] BYREF
  double v301; // [esp+228h] [ebp-170h]
  _DWORD *v302; // [esp+230h] [ebp-168h] BYREF
  long double v303; // [esp+234h] [ebp-164h]
  char v304[4]; // [esp+23Ch] [ebp-15Ch] BYREF
  LONG v305; // [esp+240h] [ebp-158h]
  int v306; // [esp+244h] [ebp-154h]
  int v307; // [esp+248h] [ebp-150h] BYREF
  _DWORD *v308; // [esp+24Ch] [ebp-14Ch] BYREF
  int v309; // [esp+250h] [ebp-148h] BYREF
  int v310; // [esp+254h] [ebp-144h] BYREF
  int v311[2]; // [esp+258h] [ebp-140h] BYREF
  long double *v312; // [esp+260h] [ebp-138h]
  double *v313; // [esp+264h] [ebp-134h]
  int v314; // [esp+268h] [ebp-130h] BYREF
  int v315; // [esp+26Ch] [ebp-12Ch] BYREF
  int v316; // [esp+270h] [ebp-128h] BYREF
  int v317; // [esp+274h] [ebp-124h]
  char v318[4]; // [esp+278h] [ebp-120h] BYREF
  int v319; // [esp+27Ch] [ebp-11Ch] BYREF
  volatile signed __int32 *v320[20]; // [esp+280h] [ebp-118h] BYREF
  _QWORD v321[11]; // [esp+2D0h] [ebp-C8h] BYREF
  void *v322[2]; // [esp+328h] [ebp-70h] BYREF
  RECT rcSrc1; // [esp+330h] [ebp-68h] BYREF
  void *v324[2]; // [esp+340h] [ebp-58h] BYREF
  struct tagRECT rcDst; // [esp+348h] [ebp-50h] BYREF
  void *v326[2]; // [esp+358h] [ebp-40h] BYREF
  RECT rcSrc2; // [esp+360h] [ebp-38h] BYREF
  void *v328[4]; // [esp+370h] [ebp-28h] BYREF
  int v329; // [esp+380h] [ebp-18h]
  unsigned int v330; // [esp+384h] [ebp-14h]
  int v331; // [esp+394h] [ebp-4h]

  v313 = this;
  rcDst.bottom = 15;
  rcDst.right = 0;
  LOBYTE(v324[0]) = 0;
  sub_B83570(v324, "OPT", 3u);
  v331 = 0;
  v2 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
  v3 = sub_B837F0(v2, (int)v311, (int)v324);
  v4 = *(volatile signed __int32 **)v3;
  LOBYTE(v331) = 1;
  v237 = *(volatile signed __int32 **)(v3 + 4);
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v5 = sub_B81000(v320, v4, v237);
  LOBYTE(v331) = 2;
  v6 = sub_B81300(v5);
  sub_B81FC0(v6, "\n[CYCLE TIME CALCULATION]\n");
  LOBYTE(v331) = 1;
  sub_B81170();
  v7 = (volatile signed __int32 *)v311[1];
  LOBYTE(v331) = 0;
  if ( v311[1] )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
    }
  }
  v331 = -1;
  if ( rcDst.bottom >= 0x10u )
    operator delete(v324[0]);
  rcDst.bottom = 15;
  rcDst.right = 0;
  LOBYTE(v324[0]) = 0;
  sub_B83570(v324, "OPT", 3u);
  v238 = *(_DWORD *)(*((_DWORD *)this + 11) + 4);
  v235 = *(_DWORD *)(*((_DWORD *)this + 10) + 4);
  v331 = 3;
  v8 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
  v9 = sub_B837F0(v8, (int)v311, (int)v324);
  v10 = *(volatile signed __int32 **)v9;
  LOBYTE(v331) = 4;
  v234 = *(volatile signed __int32 **)(v9 + 4);
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  v11 = sub_B81000(v320, v10, v234);
  LOBYTE(v331) = 5;
  v12 = sub_B81300(v11);
  v13 = sub_B81FC0(v12, "Board #");
  v14 = std::ostream::operator<<(v13, v235);
  v15 = sub_B81FC0(v14, ", Station #");
  v16 = std::ostream::operator<<(v15, v238);
  sub_B81FC0(v16, "\n");
  LOBYTE(v331) = 4;
  sub_B81170();
  v17 = (volatile signed __int32 *)v311[1];
  LOBYTE(v331) = 3;
  if ( v311[1] )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v17)(v17);
      if ( !_InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v17 + 4))(v17);
    }
  }
  v331 = -1;
  if ( rcDst.bottom >= 0x10u )
    operator delete(v324[0]);
  if ( *(int *)(*((_DWORD *)this + 10) + 424) > 0 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 20) + 8) + 2724) & 1) != 0 )
    {
      sub_B836D0(v328, "OPT");
      v331 = 9;
      v23 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
      v24 = sub_B837F0(v23, (int)v311, (int)v328);
      v25 = *(volatile signed __int32 **)v24;
      LOBYTE(v331) = 10;
      v240 = *(volatile signed __int32 **)(v24 + 4);
      *(_DWORD *)v24 = 0;
      *(_DWORD *)(v24 + 4) = 0;
      v26 = sub_B81000(v320, v25, v240);
      LOBYTE(v331) = 11;
      v27 = sub_B81300(v26);
      sub_B81FC0(v27, "Expansion by PCB\n");
      LOBYTE(v331) = 10;
      sub_B81170();
      LOBYTE(v331) = 9;
    }
    else
    {
      sub_B836D0(v328, "OPT");
      v331 = 6;
      v18 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
      v19 = sub_B837F0(v18, (int)v311, (int)v328);
      v20 = *(volatile signed __int32 **)v19;
      LOBYTE(v331) = 7;
      v239 = *(volatile signed __int32 **)(v19 + 4);
      *(_DWORD *)v19 = 0;
      *(_DWORD *)(v19 + 4) = 0;
      v21 = sub_B81000(v320, v20, v239);
      LOBYTE(v331) = 8;
      v22 = sub_B81300(v21);
      sub_B81FC0(v22, "Expansion by POINT\n");
      LOBYTE(v331) = 7;
      sub_B81170();
      LOBYTE(v331) = 6;
    }
    v28 = (volatile signed __int32 *)v311[1];
    if ( v311[1] )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v28)(v28);
        if ( !_InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v28 + 4))(v28);
      }
    }
    v331 = -1;
    if ( v330 >= 0x10 )
      operator delete(v328[0]);
  }
  if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 20) + 8) + 280) )
  {
    rcDst.bottom = 15;
    rcDst.right = 0;
    LOBYTE(v324[0]) = 0;
    sub_B83570(v324, "OPT", 3u);
    v331 = 12;
    v29 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
    v30 = sub_B837F0(v29, (int)v311, (int)v324);
    v31 = *(volatile signed __int32 **)v30;
    LOBYTE(v331) = 13;
    v241 = *(volatile signed __int32 **)(v30 + 4);
    *(_DWORD *)v30 = 0;
    *(_DWORD *)(v30 + 4) = 0;
    v32 = sub_B81000(v320, v31, v241);
    LOBYTE(v331) = 14;
    v33 = sub_B81300(v32);
    sub_B81FC0(v33, "[Phase Progress]\n");
    LOBYTE(v331) = 13;
    sub_B81170();
    v34 = (volatile signed __int32 *)v311[1];
    LOBYTE(v331) = 12;
    if ( v311[1] )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v34)(v34);
        if ( !_InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v34 + 4))(v34);
      }
    }
    v331 = -1;
    if ( rcDst.bottom >= 0x10u )
      operator delete(v324[0]);
  }
  CObList::CObList((CObList *)v285, 10);
  v331 = 15;
  CObList::RemoveAll((CObList *)v285);
  CObList::AddTail((CObList *)v285, (struct CObList *)((char *)this + 52));
  v35 = v286;
  if ( v286 )
  {
    while ( 1 )
    {
      v36 = v35;
      if ( !v35 )
        goto LABEL_70;
      v308 = (_DWORD *)*v35;
      v37 = v35[2];
      v306 = v36[2];
      *(_QWORD *)(v37 + 664) = 0;
      sub_C65FF0((_DWORD *)v37);
      sub_C68730((_DWORD *)v37, -1, 0);
      sub_C67780(v37);
      CObList::CObList((CObList *)v291, 10);
      LOBYTE(v331) = 16;
      sub_CC8B80((CObList *)v291);
      v38 = v292;
      if ( v292 )
        break;
LABEL_35:
      sub_CDA160(*(_DWORD *)(v37 + 40));
      v40 = sub_C72D70(v37);
      v307 = v40;
      if ( *(int *)(v40 + 12) > 0 )
      {
        v41 = 0;
        v310 = 0;
        do
        {
          v42 = *(_DWORD *)(v37 + 40);
          v43 = 0;
          v309 = 0;
          if ( *(int *)(v42 + 72) > 0 )
          {
            v44 = 0;
            do
            {
              if ( *(_DWORD *)(v40 + 12) <= v41 || v41 < 0 )
              {
                v45 = 0;
              }
              else
              {
                if ( v41 >= *(_DWORD *)(v40 + 12) )
                  goto LABEL_70;
                v45 = *(_DWORD *)(*(_DWORD *)(v40 + 8) + 4 * v41);
              }
              if ( *(_DWORD *)(v45 + v44 + 12) )
              {
                v46 = *(_DWORD *)(v37 + 40);
                qmemcpy(v321, (const void *)(v44 + v45 + 8), sizeof(v321));
                v47 = v321[6];
                *(_DWORD *)(v46 + v44 + 548) = HIDWORD(v321[0]);
                *(_QWORD *)(v46 + v44 + 552) = v321[1];
                v41 = v310;
                v43 = v309;
                v37 = v306;
                *(_QWORD *)(v46 + v44 + 560) = v321[2];
                *(_QWORD *)(v46 + v44 + 568) = v321[3];
                v48 = v321[4];
                *(_QWORD *)(v46 + v44 + 592) = v47;
                v49 = v321[7];
                *(_DWORD *)(v46 + v44 + 576) = v48;
                v50 = HIDWORD(v321[4]);
                *(_QWORD *)(v46 + v44 + 600) = v49;
                v51 = v321[8];
                *(_DWORD *)(v46 + v44 + 580) = v50;
                v52 = v321[5];
                *(_QWORD *)(v46 + v44 + 608) = v51;
                *(_QWORD *)(v46 + v44 + 616) = v321[9];
                v53 = v321[10];
                *(_DWORD *)(v46 + v44 + 584) = v52;
                v54 = HIDWORD(v321[5]);
                *(_QWORD *)(v46 + v44 + 624) = v53;
                *(_DWORD *)(v46 + v44 + 588) = v54;
                v40 = v307;
              }
              v55 = *(_DWORD *)(v37 + 40);
              ++v43;
              v44 += 88;
              v309 = v43;
            }
            while ( v43 < *(_DWORD *)(v55 + 72) );
          }
          v310 = ++v41;
        }
        while ( v41 < *(_DWORD *)(v40 + 12) );
      }
      sub_C65DC0((_BYTE *)v37);
      LOBYTE(v331) = 15;
      CObList::~CObList((CObList *)v291);
      v35 = v308;
      if ( !v308 )
      {
        v35 = v286;
        goto LABEL_50;
      }
    }
    while ( 1 )
    {
      v39 = v38;
      if ( !v38 )
        break;
      v38 = (_DWORD *)*v38;
      *(_QWORD *)(v39[2] + 120) = 0;
      if ( !v38 )
        goto LABEL_35;
    }
LABEL_70:
    AfxThrowInvalidArgException();
  }
LABEL_50:
  v56 = 0;
  v315 = 0;
  v305 = 0;
  if ( v35 )
  {
    do
    {
      v57 = v35[2];
      v35 = (_DWORD *)*v35;
      v58 = *(_DWORD *)(v57 + 40);
      *(_DWORD *)(v58 + 2008) = sub_C5E5D0();
      sub_CDA070(v58 + 2376);
      *(_QWORD *)(v58 + 2040) = 0;
    }
    while ( v35 );
    v56 = 0;
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v304);
  v59 = (void (*)(int *, const char *, ...))ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format;
  LOBYTE(v331) = 17;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    v304,
    "Gant   # Phase\t     CurrT  PosX;   PosY\tLimY\tFrms\tloadPallet\tPalletExcg\tGant   # Phase\t     CurrT  PosX;   Po"
    "sY\tLimY\tFrms\tloadPallet\tPalletExcg\n");
  rcSrc2.bottom = 15;
  rcSrc2.right = 0;
  LOBYTE(v326[0]) = 0;
  sub_B83570(v326, "OPT", 3u);
  LOBYTE(v331) = 18;
  v261 = ATL::CSimpleStringT<char,1>::operator char const *(v304);
  v60 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
  v61 = sub_B837F0(v60, (int)v311, (int)v326);
  v62 = *(volatile signed __int32 **)v61;
  LOBYTE(v331) = 19;
  v242 = *(volatile signed __int32 **)(v61 + 4);
  *(_DWORD *)v61 = 0;
  *(_DWORD *)(v61 + 4) = 0;
  v63 = sub_B81000(v320, v62, v242);
  LOBYTE(v331) = 20;
  v64 = sub_B81300(v63);
  sub_B81FC0(v64, v261);
  LOBYTE(v331) = 19;
  sub_B81170();
  v65 = (void (__thiscall ***)(_DWORD))v311[1];
  LOBYTE(v331) = 18;
  v307 = v311[1];
  if ( v311[1] )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
    {
      (**v65)(v65);
      v66 = v307;
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v307 + 8), 0xFFFFFFFF) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v66 + 4))(v66);
    }
  }
  LOBYTE(v331) = 17;
  if ( rcSrc2.bottom >= 0x10u )
    operator delete(v326[0]);
  sub_BC8250(v313);
  v315 = sub_BBB8B0(v313);
  if ( !v315 )
  {
LABEL_149:
    v128 = v286;
    v129 = 0.0;
    if ( v286 )
    {
      while ( v128 )
      {
        v130 = v128[2];
        v128 = (_DWORD *)*v128;
        if ( *(double *)(v130 + 664) > v129 )
          v129 = *(double *)(v130 + 664);
        if ( !v128 )
          goto LABEL_154;
      }
    }
    else
    {
LABEL_154:
      v131 = v313;
      v132 = v129 + *(double *)(*(_DWORD *)(*((_DWORD *)v313 + 20) + 12) + 32);
      v330 = 15;
      v329 = 0;
      LOBYTE(v328[0]) = 0;
      v313[4] = v132;
      sub_B83570(v328, "OPT", 3u);
      LOBYTE(v331) = 40;
      v133 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
      v134 = sub_B837F0(v133, (int)v311, (int)v328);
      v135 = *(volatile signed __int32 **)v134;
      LOBYTE(v331) = 41;
      v248 = *(volatile signed __int32 **)(v134 + 4);
      *(_DWORD *)v134 = 0;
      *(_DWORD *)(v134 + 4) = 0;
      v136 = sub_B81000(v320, v135, v248);
      LOBYTE(v331) = 42;
      v137 = sub_B81300(v136);
      sub_B81FC0(v137, "\n[Cycle Time Table]\n");
      LOBYTE(v331) = 41;
      sub_B81170();
      v138 = (void (__thiscall ***)(_DWORD))v311[1];
      LOBYTE(v331) = 40;
      v317 = v311[1];
      if ( v311[1] )
      {
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
        {
          (**v138)(v138);
          v139 = v317;
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v317 + 8), 0xFFFFFFFF) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v139 + 4))(v139);
        }
      }
      if ( v330 >= 0x10 )
        operator delete(v328[0]);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v309);
      v140 = *(_DWORD *)(*((_DWORD *)v131 + 20) + 12);
      LOBYTE(v331) = 43;
      v59(&v309, "Conveyor time = %.3lfs\n", *(long double *)(v140 + 32));
      v330 = 15;
      v329 = 0;
      LOBYTE(v328[0]) = 0;
      sub_B83570(v328, "OPT", 3u);
      LOBYTE(v331) = 44;
      v264 = ATL::CSimpleStringT<char,1>::operator char const *(&v309);
      v141 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
      v142 = sub_B837F0(v141, (int)v311, (int)v328);
      v143 = *(volatile signed __int32 **)v142;
      LOBYTE(v331) = 45;
      v249 = *(volatile signed __int32 **)(v142 + 4);
      *(_DWORD *)v142 = 0;
      *(_DWORD *)(v142 + 4) = 0;
      v144 = sub_B81000(v320, v143, v249);
      LOBYTE(v331) = 46;
      v145 = sub_B81300(v144);
      sub_B81FC0(v145, v264);
      LOBYTE(v331) = 45;
      sub_B81170();
      v146 = (volatile signed __int32 *)v311[1];
      LOBYTE(v331) = 44;
      if ( v311[1] )
      {
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v311[1] + 4), 0xFFFFFFFF) )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v146)(v146);
          if ( !_InterlockedExchangeAdd(v146 + 2, 0xFFFFFFFF) )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v146 + 4))(v146);
        }
      }
      LOBYTE(v331) = 43;
      if ( v330 >= 0x10 )
        operator delete(v328[0]);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
        &v307,
        "Gant Cycle  Arr  fid   BdTransfer  ANC      pick       wait   vision   LDCheck place      total accumulated ||  "
        "  FLUX PickR PickRWait PlaceR PlaceRWait PlaceXY ||     R   RWait\n");
      v147 = v286;
      LOBYTE(v331) = 47;
      if ( !v286 )
      {
LABEL_238:
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v310);
        LOBYTE(v331) = 78;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
          &v308,
          Caption);
        v274 = dword_F487A0++;
        LOBYTE(v331) = 79;
        v59((int *)&v308, "Pallet Exchange count : %d \n", v274);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v310, &v308);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 80;
        v275 = ATL::CSimpleStringT<char,1>::operator char const *(&v310);
        v221 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v222 = sub_B837F0(v221, (int)&rcSrc2.right, (int)v328);
        v223 = *(volatile signed __int32 **)v222;
        LOBYTE(v331) = 81;
        v259 = *(volatile signed __int32 **)(v222 + 4);
        *(_DWORD *)v222 = 0;
        *(_DWORD *)(v222 + 4) = 0;
        v224 = sub_B81000(v320, v223, v259);
        LOBYTE(v331) = 82;
        v225 = sub_B81300(v224);
        sub_B81FC0(v225, v275);
        LOBYTE(v331) = 81;
        sub_B81170();
        bottom = (volatile signed __int32 *)rcSrc2.bottom;
        LOBYTE(v331) = 80;
        if ( rcSrc2.bottom )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(rcSrc2.bottom + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))bottom)(bottom);
            if ( !_InterlockedExchangeAdd(bottom + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*bottom + 4))(bottom);
          }
        }
        LOBYTE(v331) = 79;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        rcSrc1.bottom = 15;
        rcSrc1.right = 0;
        LOBYTE(v322[0]) = 0;
        sub_B83570(v322, "OPT", 3u);
        LOBYTE(v331) = 83;
        v227 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v228 = sub_B837F0(v227, (int)&rcSrc2.right, (int)v322);
        v229 = *(volatile signed __int32 **)v228;
        LOBYTE(v331) = 84;
        v260 = *(volatile signed __int32 **)(v228 + 4);
        *(_DWORD *)v228 = 0;
        *(_DWORD *)(v228 + 4) = 0;
        v230 = sub_B81000(&v276, v229, v260);
        LOBYTE(v331) = 85;
        v231 = sub_B81300(v230);
        sub_B81FC0(v231, "\n");
        LOBYTE(v331) = 84;
        sub_B81170();
        v232 = (volatile signed __int32 *)rcSrc2.bottom;
        LOBYTE(v331) = 83;
        if ( rcSrc2.bottom )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(rcSrc2.bottom + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v232)(v232);
            if ( !_InterlockedDecrement(v232 + 2) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v232 + 4))(v232);
          }
        }
        if ( rcSrc1.bottom >= 0x10u )
          operator delete(v322[0]);
        rcSrc1.bottom = 15;
        rcSrc1.right = 0;
        LOBYTE(v322[0]) = 0;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v308);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v310);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v307);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v309);
        v162 = 0;
        goto LABEL_251;
      }
      while ( 1 )
      {
        v303 = 0.0;
        if ( !v147 )
          break;
        v148 = v147[2];
        v302 = (_DWORD *)*v147;
        v149 = *(_DWORD *)(v148 + 44);
        v150 = *((_DWORD *)v313 + 10);
        v314 = v148;
        v151 = *(_DWORD *)(v150 + 424) <= 1;
        v306 = v149;
        if ( !v151 )
        {
          v149 = *(_DWORD *)(v148 + 400);
          v306 = v149;
        }
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 48;
        v265 = ATL::CSimpleStringT<char,1>::operator char const *(&v307);
        v152 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v153 = sub_B837F0(v152, (int)&v283, (int)v328);
        v154 = *(volatile signed __int32 **)v153;
        LOBYTE(v331) = 49;
        v250 = *(volatile signed __int32 **)(v153 + 4);
        *(_DWORD *)v153 = 0;
        *(_DWORD *)(v153 + 4) = 0;
        v155 = sub_B81000(v320, v154, v250);
        LOBYTE(v331) = 50;
        v156 = sub_B81300(v155);
        sub_B81FC0(v156, v265);
        LOBYTE(v331) = 49;
        sub_B81170();
        v157 = (void (__thiscall ***)(_DWORD))v284;
        LOBYTE(v331) = 48;
        v317 = v284;
        if ( v284 )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v284 + 4), 0xFFFFFFFF) )
          {
            (**v157)(v157);
            v158 = v317;
            if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v317 + 8), 0xFFFFFFFF) )
              (*(void (__thiscall **)(int))(*(_DWORD *)v158 + 4))(v158);
          }
        }
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v319);
        LOBYTE(v331) = 51;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
          &v316,
          Caption);
        LOBYTE(v331) = 52;
        v59(
          &v316,
          "--------------------------------------------------------------------------------------------------------------"
          "------------------------------------------------------\n");
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        v159 = 0;
        *(double *)v298 = 0.0;
        *(double *)v297 = 0.0;
        *(double *)v299 = 0.0;
        v312 = 0;
        v305 = 0;
        v295 = 0.0;
        v294 = 0.0;
        v301 = 0.0;
        v296 = 0.0;
        *(double *)v311 = 0.0;
        v293 = 0.0;
        *(double *)v300 = 0.0;
        if ( *(int *)(v149 + 12) > 0 )
        {
          do
          {
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
              v318,
              Caption);
            LOBYTE(v331) = 53;
            if ( *(_DWORD *)(v149 + 12) <= v159 || v159 < 0 )
            {
              v160 = 0;
            }
            else
            {
              if ( v159 >= *(_DWORD *)(v149 + 12) )
                goto LABEL_70;
              v160 = *(_DWORD *)(*(_DWORD *)(v149 + 8) + 4 * v159);
            }
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "G%d   %4d   %2d  ",
              *(_DWORD *)(*(_DWORD *)(v314 + 40) + 4),
              ++v159,
              *(_DWORD *)v160);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "%6.3f ",
              *(double *)(v160 + 1440));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            *(double *)v298 = *(double *)(v160 + 1440) + *(double *)v298;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              " %6.3f  ",
              *(double *)(v160 + 1696));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            *(double *)v300 = *(double *)(v160 + 1696) + *(double *)v300;
            v163 = sub_DCBF40((_DWORD *)v160);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "%6.3f(%d) ",
              *(double *)(v160 + 1456),
              v163);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            *(double *)v297 = *(double *)(v160 + 1456) + *(double *)v297;
            v164 = sub_DCBF40((_DWORD *)v160);
            v312 = (long double *)((char *)v312 + v164);
            v165 = sub_DCC3C0((int *)v160);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "%6.3f(%2d) ",
              *(double *)(v160 + 1464),
              v165);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            *(double *)v299 = *(double *)v299 + *(double *)(v160 + 1464);
            v166 = sub_DCC3C0((int *)v160);
            v167 = *(double *)(v160 + 1432);
            v305 += v166;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(v318, "%6.3f ", v167);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            v77 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v313 + 20) + 12) + 12) == 10003;
            v295 = v295 + *(double *)(v160 + 1432);
            v168 = *(double *)(v160 + 1472);
            if ( v77 )
              ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
                v318,
                "%6.3f(%2d) ",
                v168,
                *(_DWORD *)(v160 + 2896));
            else
              ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
                v318,
                "%6.3f(%2d) ",
                v168,
                *(_DWORD *)(v160 + 2028));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            v294 = v294 + *(double *)(v160 + 1472);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "%6.3f ",
              *(double *)(v160 + 1648));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            v293 = v293 + *(double *)(v160 + 1648);
            v169 = sub_DCC400(v160);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "%6.3f(%2d) ",
              *(double *)(v160 + 1480),
              v169);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            v301 = v301 + *(double *)(v160 + 1480);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              ": %7.3f ",
              *(double *)(v160 + 1424));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            v303 = v303 + *(double *)(v160 + 1424);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(v318, "%11.3f ", (double)v303);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "  %6.3f %6.3f %6.3f   %6.3f %6.3f     %6.3f ",
              *(double *)(v160 + 1640) + *(double *)(v160 + 1632),
              *(double *)(v160 + 1656),
              *(double *)(v160 + 1664),
              *(double *)(v160 + 1680),
              *(double *)(v160 + 1688),
              *(double *)(v160 + 1672));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
              v318,
              "    %6.3f  %6.3f\n",
              *(double *)(v160 + 1680) + *(double *)(v160 + 1656),
              *(double *)(v160 + 1664) + *(double *)(v160 + 1688));
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, v318);
            v170 = *(double *)(v160 + 1488) + v296;
            v330 = 15;
            v296 = v170;
            v171 = *(double *)(v160 + 1496) + *(double *)v311;
            v329 = 0;
            LOBYTE(v328[0]) = 0;
            *(double *)v311 = v171;
            sub_B83570(v328, "OPT", 3u);
            LOBYTE(v331) = 54;
            v267 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
            v172 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
            v173 = sub_B837F0(v172, (int)&v281, (int)v328);
            v174 = *(volatile signed __int32 **)v173;
            LOBYTE(v331) = 55;
            v251 = *(volatile signed __int32 **)(v173 + 4);
            *(_DWORD *)v173 = 0;
            *(_DWORD *)(v173 + 4) = 0;
            v175 = sub_B81000(v320, v174, v251);
            LOBYTE(v331) = 56;
            v176 = sub_B81300(v175);
            sub_B81FC0(v176, v267);
            LOBYTE(v331) = 55;
            sub_B81170();
            v177 = v282;
            LOBYTE(v331) = 54;
            if ( v282 )
            {
              if ( !_InterlockedExchangeAdd(v282 + 1, 0xFFFFFFFF) )
              {
                (**(void (__thiscall ***)(volatile signed __int32 *))v177)(v177);
                if ( !_InterlockedExchangeAdd(v177 + 2, 0xFFFFFFFF) )
                  (*(void (__thiscall **)(volatile signed __int32 *))(*v177 + 4))(v177);
              }
            }
            if ( v330 >= 0x10 )
              operator delete(v328[0]);
            ATL::CSimpleStringT<char,1>::Empty(&v319);
            LOBYTE(v331) = 52;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v318);
            v149 = v306;
          }
          while ( v159 < *(_DWORD *)(v306 + 12) );
        }
        v59 = (void (*)(int *, const char *, ...))ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "-----------------------------------------------------------------------------------------------\n");
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        v178 = v314;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "Board FidMark Inspection Time : \t\t\t\t\t\t\t %6.3f\n",
          *(double *)(v314 + 224));
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "BadMark Inspection Time : \t\t\t\t\t\t\t\t %6.3f\n",
          *(double *)(v178 + 216));
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "Height Sensing Time : \t\t\t\t\t\t\t\t\t %6.3f\n",
          *(double *)(v178 + 208));
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "-----------------------------------------------------------------------------------------------\n");
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 57;
        v268 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
        v179 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v180 = sub_B837F0(v179, (int)&v279, (int)v328);
        v181 = *(volatile signed __int32 **)v180;
        LOBYTE(v331) = 58;
        v252 = *(volatile signed __int32 **)(v180 + 4);
        *(_DWORD *)v180 = 0;
        *(_DWORD *)(v180 + 4) = 0;
        v182 = sub_B81000(v320, v181, v252);
        LOBYTE(v331) = 59;
        v183 = sub_B81300(v182);
        sub_B81FC0(v183, v268);
        LOBYTE(v331) = 58;
        sub_B81170();
        v184 = v280;
        LOBYTE(v331) = 57;
        if ( v280 )
        {
          if ( !_InterlockedExchangeAdd(v280 + 1, 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v184)(v184);
            if ( !_InterlockedExchangeAdd(v184 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v184 + 4))(v184);
          }
        }
        LOBYTE(v331) = 52;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        ATL::CSimpleStringT<char,1>::Empty(&v319);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "Total:          %6.3f  %6.3f  %6.3f(%d) %6.3f(%d) %6.3f %6.3f %6.3f %6.3f(-)\t\t %6.3f\n",
          *(double *)v298,
          *(double *)v300,
          *(double *)v297,
          v312,
          *(double *)v299,
          v305,
          v295,
          v294,
          v293,
          v301,
          (double)(*(double *)(v314 + 208) + v303));
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "WaitTimeForRAxis : %6.4f \n",
          v296);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "WaitTimeForFeeding : %6.4f \n",
          *(double *)v311);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v316,
          "-----------------------------------------------------------------------------------------------\n");
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(&v319, &v316);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 60;
        v269 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
        v185 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v186 = sub_B837F0(v185, (int)&v277, (int)v328);
        v187 = *(volatile signed __int32 **)v186;
        LOBYTE(v331) = 61;
        v253 = *(volatile signed __int32 **)(v186 + 4);
        *(_DWORD *)v186 = 0;
        *(_DWORD *)(v186 + 4) = 0;
        v188 = sub_B81000(v320, v187, v253);
        LOBYTE(v331) = 62;
        v189 = sub_B81300(v188);
        sub_B81FC0(v189, v269);
        LOBYTE(v331) = 61;
        sub_B81170();
        v190 = v278;
        LOBYTE(v331) = 60;
        if ( v278 )
        {
          if ( !_InterlockedExchangeAdd(v278 + 1, 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v190)(v190);
            if ( !_InterlockedExchangeAdd(v190 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v190 + 4))(v190);
          }
        }
        LOBYTE(v331) = 52;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        v312 = *(long double **)(v314 + 40);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v319,
          "XY Time = %6.3lfs\n",
          v312[297]);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 63;
        v270 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
        v191 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v192 = sub_B837F0(v191, (int)v288, (int)v328);
        v193 = *(volatile signed __int32 **)v192;
        LOBYTE(v331) = 64;
        v254 = *(volatile signed __int32 **)(v192 + 4);
        *(_DWORD *)v192 = 0;
        *(_DWORD *)(v192 + 4) = 0;
        v194 = sub_B81000(v320, v193, v254);
        LOBYTE(v331) = 65;
        v195 = sub_B81300(v194);
        sub_B81FC0(v195, v270);
        LOBYTE(v331) = 64;
        sub_B81170();
        v196 = (volatile signed __int32 *)v288[1];
        LOBYTE(v331) = 63;
        if ( v288[1] )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v288[1] + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v196)(v196);
            if ( !_InterlockedExchangeAdd(v196 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v196 + 4))(v196);
          }
        }
        LOBYTE(v331) = 52;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(&v319, "Z Time = %6.3lfs\n", v312[299]);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 66;
        v271 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
        v197 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v198 = sub_B837F0(v197, (int)v290, (int)v328);
        v199 = *(volatile signed __int32 **)v198;
        LOBYTE(v331) = 67;
        v255 = *(volatile signed __int32 **)(v198 + 4);
        *(_DWORD *)v198 = 0;
        *(_DWORD *)(v198 + 4) = 0;
        v200 = sub_B81000(v320, v199, v255);
        LOBYTE(v331) = 68;
        v201 = sub_B81300(v200);
        sub_B81FC0(v201, v271);
        LOBYTE(v331) = 67;
        sub_B81170();
        v202 = (volatile signed __int32 *)v290[1];
        LOBYTE(v331) = 66;
        if ( v290[1] )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v290[1] + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v202)(v202);
            if ( !_InterlockedExchangeAdd(v202 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v202 + 4))(v202);
          }
        }
        LOBYTE(v331) = 52;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(&v319, "R Time = %6.3lfs\n", v312[298]);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 69;
        v272 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
        v203 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v204 = sub_B837F0(v203, (int)&rcDst.right, (int)v328);
        v205 = *(volatile signed __int32 **)v204;
        LOBYTE(v331) = 70;
        v256 = *(volatile signed __int32 **)(v204 + 4);
        *(_DWORD *)v204 = 0;
        *(_DWORD *)(v204 + 4) = 0;
        v206 = sub_B81000(v320, v205, v256);
        LOBYTE(v331) = 71;
        v207 = sub_B81300(v206);
        sub_B81FC0(v207, v272);
        LOBYTE(v331) = 70;
        sub_B81170();
        v208 = (volatile signed __int32 *)rcDst.bottom;
        LOBYTE(v331) = 69;
        if ( rcDst.bottom )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(rcDst.bottom + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v208)(v208);
            if ( !_InterlockedExchangeAdd(v208 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v208 + 4))(v208);
          }
        }
        LOBYTE(v331) = 52;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
          &v319,
          "Etc Time = %6.3lfs\n",
          v312[300]);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 72;
        v273 = ATL::CSimpleStringT<char,1>::operator char const *(&v319);
        v209 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v210 = sub_B837F0(v209, (int)&rcSrc1.right, (int)v328);
        v211 = *(volatile signed __int32 **)v210;
        LOBYTE(v331) = 73;
        v257 = *(volatile signed __int32 **)(v210 + 4);
        *(_DWORD *)v210 = 0;
        *(_DWORD *)(v210 + 4) = 0;
        v212 = sub_B81000(v320, v211, v257);
        LOBYTE(v331) = 74;
        v213 = sub_B81300(v212);
        sub_B81FC0(v213, v273);
        LOBYTE(v331) = 73;
        sub_B81170();
        v214 = (volatile signed __int32 *)rcSrc1.bottom;
        LOBYTE(v331) = 72;
        if ( rcSrc1.bottom )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(rcSrc1.bottom + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v214)(v214);
            if ( !_InterlockedExchangeAdd(v214 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v214 + 4))(v214);
          }
        }
        LOBYTE(v331) = 52;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 75;
        v215 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v216 = sub_B837F0(v215, (int)&rcSrc2.right, (int)v328);
        v217 = *(volatile signed __int32 **)v216;
        LOBYTE(v331) = 76;
        v258 = *(volatile signed __int32 **)(v216 + 4);
        *(_DWORD *)v216 = 0;
        *(_DWORD *)(v216 + 4) = 0;
        v218 = sub_B81000(v320, v217, v258);
        LOBYTE(v331) = 77;
        v219 = sub_B81300(v218);
        sub_B81FC0(
          v219,
          "-----------------------------------------------------------------------------------------------\n\n");
        LOBYTE(v331) = 76;
        sub_B81170();
        v220 = (volatile signed __int32 *)rcSrc2.bottom;
        LOBYTE(v331) = 75;
        if ( rcSrc2.bottom )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(rcSrc2.bottom + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v220)(v220);
            if ( !_InterlockedExchangeAdd(v220 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v220 + 4))(v220);
          }
        }
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v316);
        LOBYTE(v331) = 47;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v319);
        v147 = v302;
        if ( !v302 )
          goto LABEL_238;
      }
    }
    goto LABEL_70;
  }
  while ( 1 )
  {
    sub_C64230(-1);
    v67 = (_DWORD *)*((_DWORD *)v313 + 14);
    while ( v67 )
    {
      v68 = (_DWORD *)v67[2];
      v69 = v68[75];
      v67 = (_DWORD *)*v67;
      if ( v68 != (_DWORD *)v315 )
        v56 = (LONG)v68;
      v305 = v56;
      if ( v69 != v68[74] )
        sub_C68730(v68, -1, 0);
    }
    v319 = 0;
    rcSrc1 = *(RECT *)(v315 + 244);
    memset(&rcSrc2, 0, sizeof(rcSrc2));
    memset(&rcDst, 0, sizeof(rcDst));
    if ( v56 )
    {
      if ( *(_DWORD *)(v56 + 300) != 6 || *(_DWORD *)(v315 + 304) == 6 )
      {
        *(_QWORD *)&rcSrc2.left = *(_QWORD *)(v56 + 244);
        v70 = *(_QWORD *)(v56 + 252);
      }
      else
      {
        *(_QWORD *)&rcSrc2.left = *(_QWORD *)(v56 + 276);
        v70 = *(_QWORD *)(v56 + 284);
      }
      left = rcSrc1.left;
      *(_QWORD *)&rcSrc2.right = v70;
      if ( rcSrc1.left > rcSrc1.right )
      {
        rcSrc1.left = rcSrc1.right;
        rcSrc1.right = left;
      }
      top = rcSrc1.top;
      if ( rcSrc1.top > rcSrc1.bottom )
      {
        rcSrc1.top = rcSrc1.bottom;
        rcSrc1.bottom = top;
      }
      v73 = rcSrc2.left;
      if ( rcSrc2.left > rcSrc2.right )
      {
        rcSrc2.left = rcSrc2.right;
        rcSrc2.right = v73;
      }
      v74 = rcSrc2.top;
      if ( rcSrc2.top > rcSrc2.bottom )
      {
        rcSrc2.top = rcSrc2.bottom;
        rcSrc2.bottom = v74;
      }
      if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
      {
        v75 = v313;
        v76 = *((_DWORD *)v313 + 20);
        if ( *(_DWORD *)(*(_DWORD *)(v76 + 12) + 12) != 471 || *(_DWORD *)(v76 + 940) )
        {
          CObList::CObList((CObList *)v291, 10);
          LOBYTE(v331) = 21;
          sub_BBD360((CObList *)v291);
          v77 = *(_DWORD *)(v56 + 300) == 99;
          v78 = *(double *)(v56 + 664);
          v319 = 1;
          if ( !v77 )
          {
            v79 = (_DWORD *)v315;
            v80 = *(_DWORD *)(v315 + 300);
            if ( v80 == 99 )
              goto LABEL_88;
            *(_DWORD *)(v315 + 292) = v80;
            v81 = v315;
            v82 = *(_QWORD *)(v315 + 252);
            *(_QWORD *)(v315 + 276) = *(_QWORD *)(v315 + 244);
            *(_QWORD *)(v81 + 284) = v82;
            *(_DWORD *)(v315 + 300) = 6;
            if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v75 + 20) + 12) + 12) != 471 )
              sub_C625A0(COERCE__INT64(v78 + 0.001));
          }
          v79 = (_DWORD *)v315;
LABEL_88:
          sub_C68730(v79, v79[75], v56);
          if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v75 + 20) + 12) + 12) == 471 && *(_DWORD *)(v315 + 300) != 99 )
            sub_D8EE70(&v315, v56);
          LOBYTE(v331) = 17;
          CObList::~CObList((CObList *)v291);
        }
      }
    }
    sub_C56A50(v56);
    sub_C73070(v56);
    v316 = 1;
    for ( i = (_DWORD *)*((_DWORD *)v313 + 14); i; v316 = (int)v84 )
    {
      i = (_DWORD *)*i;
      v309 = 0;
      sub_C6E740(&v309);
      v84 = (const char *)v316;
      if ( !v309 )
        v84 = 0;
    }
    v85 = v313;
    if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v313 + 20) + 8) + 280) )
    {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v318);
      LOBYTE(v331) = 22;
      CObList::CObList((CObList *)v291, 10);
      LOBYTE(v331) = 23;
      CObList::RemoveAll((CObList *)v291);
      CObList::AddTail((CObList *)v291, (struct CObList *)((char *)v85 + 52));
      v86 = v292;
      if ( v292 )
      {
        do
        {
          if ( !v86 )
            goto LABEL_70;
          v87 = v86[2];
          v88 = *v86;
          v289 = *(_QWORD *)(v87 + 244);
          *(_QWORD *)v290 = *(_QWORD *)(v87 + 252);
          v317 = v88;
          v89 = 32;
          v296 = (double)SHIDWORD(v289) * 0.001;
          v287 = *(_QWORD *)(v87 + 244);
          *(_QWORD *)v288 = *(_QWORD *)(v87 + 252);
          if ( v87 == v315 )
            v89 = 42;
          HIDWORD(v301) = v89;
          v90 = *((_DWORD *)v85 + 10);
          *(double *)v311 = (double)v288[1] * 0.001;
          v306 = *(_DWORD *)(v90 + 4);
          v308 = (_DWORD *)v87;
          v303 = 0.0;
          if ( dword_F4879C )
            v310 = *(_DWORD *)(dword_F4879C + 272);
          else
            v310 = 0;
          v91 = *(_DWORD *)(v87 + 40);
          v314 = 0;
          if ( (*(_DWORD *)(v91 + 508) == 5 || *(_DWORD *)(v91 + 508) == 7) && *(_DWORD *)(v87 + 300) == 3 )
          {
            v92 = sub_C5BA30(v87);
            if ( (unsigned __int8)sub_DD4670(v92) )
            {
              v93 = sub_C5BA30(v87);
              if ( sub_DE3D20(v93) )
              {
                v94 = sub_C5BA30(v87);
                v314 = *(_DWORD *)(sub_DE3D20(v94) + 272);
              }
              else
              {
                v314 = 0;
              }
              v95 = sub_C5BA30(v87);
              if ( sub_DE3D20(v95) )
              {
                v96 = sub_C5BA30(v87);
                v303 = *(double *)(sub_DE3D20(v96) + 120);
              }
              else
              {
                v303 = 0.0;
              }
            }
          }
          v312 = 0;
          if ( sub_C5BA30(v87) )
            v312 = *(long double **)(*(_DWORD *)(sub_C5BA30(v87) + 2032) + 4);
          v307 = sub_BBF590(&v302);
          v262 = v310;
          v97 = *(_DWORD *)(*(_DWORD *)(v87 + 40) + 4);
          v243 = v314;
          v98 = *(_DWORD *)(v87 + 236);
          v99 = *(_BYTE *)(*(_DWORD *)(v87 + 524) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v87 + 32) + 44) + 56));
          v236 = v303;
          LOBYTE(v331) = 24;
          v100 = sub_BBF730(v328);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
            v318,
            "%d %d%c%dBS%d\tG%d %4d %-10s %6.3f (%.1lf; %.1lf)\t%.1lf\t%.2lf\t\t%d\t%d\t",
            v99,
            v308[131],
            SBYTE4(v301),
            v306,
            v312,
            v97,
            v98 + 1,
            *(const char **)v307,
            *((double *)v308 + 83),
            v296,
            *(long double *)v311,
            *(long double *)(v100 + 16),
            v236,
            v243,
            v262);
          LOBYTE(v331) = 23;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v302);
          v330 = 15;
          v329 = 0;
          LOBYTE(v328[0]) = 0;
          sub_B83570(v328, "OPT", 3u);
          LOBYTE(v331) = 25;
          v263 = ATL::CSimpleStringT<char,1>::operator char const *(v318);
          v101 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
          v102 = sub_B837F0(v101, (int)v298, (int)v328);
          v103 = *(volatile signed __int32 **)v102;
          LOBYTE(v331) = 26;
          v244 = *(volatile signed __int32 **)(v102 + 4);
          *(_DWORD *)v102 = 0;
          *(_DWORD *)(v102 + 4) = 0;
          v104 = sub_B81000(v320, v103, v244);
          LOBYTE(v331) = 27;
          v105 = sub_B81300(v104);
          sub_B81FC0(v105, v263);
          LOBYTE(v331) = 26;
          sub_B81170();
          v106 = (volatile signed __int32 *)v298[1];
          LOBYTE(v331) = 25;
          if ( v298[1] )
          {
            if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v298[1] + 4), 0xFFFFFFFF) )
            {
              (**(void (__thiscall ***)(volatile signed __int32 *))v106)(v106);
              if ( !_InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) )
                (*(void (__thiscall **)(volatile signed __int32 *))(*v106 + 4))(v106);
            }
          }
          LOBYTE(v331) = 23;
          if ( v330 >= 0x10 )
            operator delete(v328[0]);
          v86 = (int *)v317;
          v85 = v313;
        }
        while ( v317 );
        v56 = v305;
      }
      if ( v319 )
      {
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 28;
        v107 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v108 = sub_B837F0(v107, (int)v300, (int)v328);
        v109 = *(volatile signed __int32 **)v108;
        LOBYTE(v331) = 29;
        v245 = *(volatile signed __int32 **)(v108 + 4);
        *(_DWORD *)v108 = 0;
        *(_DWORD *)(v108 + 4) = 0;
        v110 = sub_B81000(v320, v109, v245);
        LOBYTE(v331) = 30;
        v111 = sub_B81300(v110);
        sub_B81FC0(v111, "OVL");
        LOBYTE(v331) = 29;
        sub_B81170();
        v112 = (volatile signed __int32 *)v300[1];
        LOBYTE(v331) = 28;
        if ( v300[1] )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v300[1] + 4), 0xFFFFFFFF) )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v112)(v112);
            if ( !_InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v112 + 4))(v112);
          }
        }
        LOBYTE(v331) = 23;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
      }
      v113 = (const char *)v316;
      if ( v316 )
      {
        v330 = 15;
        v329 = 0;
        LOBYTE(v328[0]) = 0;
        sub_B83570(v328, "OPT", 3u);
        LOBYTE(v331) = 31;
        v114 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
        v115 = sub_B837F0(v114, (int)v297, (int)v328);
        v116 = *(volatile signed __int32 **)v115;
        LOBYTE(v331) = 32;
        v246 = *(volatile signed __int32 **)(v115 + 4);
        *(_DWORD *)v115 = 0;
        *(_DWORD *)(v115 + 4) = 0;
        v117 = sub_B81000(v320, v116, v246);
        LOBYTE(v331) = 33;
        v118 = sub_B81300(v117);
        sub_B81FC0(v118, " DEADLOCK");
        LOBYTE(v331) = 32;
        sub_B81170();
        v119 = (void (__thiscall ***)(_DWORD))v297[1];
        LOBYTE(v331) = 31;
        v317 = v297[1];
        if ( v297[1] )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v297[1] + 4), 0xFFFFFFFF) )
          {
            (**v119)(v119);
            v120 = v317;
            if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v317 + 8), 0xFFFFFFFF) )
              (*(void (__thiscall **)(int))(*(_DWORD *)v120 + 4))(v120);
          }
        }
        LOBYTE(v331) = 23;
        if ( v330 >= 0x10 )
          operator delete(v328[0]);
      }
      v330 = 15;
      v329 = 0;
      LOBYTE(v328[0]) = 0;
      sub_B83570(v328, "OPT", 3u);
      LOBYTE(v331) = 34;
      v121 = (struct _Mtx_internal_imp_t *)sub_BC1C80();
      v122 = sub_B837F0(v121, (int)v299, (int)v328);
      v123 = *(volatile signed __int32 **)v122;
      LOBYTE(v331) = 35;
      v247 = *(volatile signed __int32 **)(v122 + 4);
      *(_DWORD *)v122 = 0;
      *(_DWORD *)(v122 + 4) = 0;
      v124 = sub_B81000(v320, v123, v247);
      LOBYTE(v331) = 36;
      v125 = sub_B81300(v124);
      sub_B81FC0(v125, "\n");
      LOBYTE(v331) = 35;
      sub_B81170();
      v126 = (void (__thiscall ***)(_DWORD))v299[1];
      LOBYTE(v331) = 34;
      v317 = v299[1];
      if ( v299[1] )
      {
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v299[1] + 4), 0xFFFFFFFF) )
        {
          (**v126)(v126);
          v127 = v317;
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v317 + 8), 0xFFFFFFFF) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v127 + 4))(v127);
        }
      }
      if ( v330 >= 0x10 )
        operator delete(v328[0]);
      LOBYTE(v331) = 22;
      CObList::~CObList((CObList *)v291);
      LOBYTE(v331) = 17;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v318);
    }
    else
    {
      v113 = (const char *)v316;
    }
    if ( v113 )
      break;
    v315 = sub_BBB8B0(v313);
    if ( !v315 )
    {
      v59 = (void (*)(int *, const char *, ...))ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format;
      goto LABEL_149;
    }
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v318);
  LOBYTE(v331) = 37;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::LoadStringA(v318, 62042);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v314);
  v161 = v313;
  v266 = *((_DWORD *)v313 + 10) + 8;
  LOBYTE(v331) = 38;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
    &v316,
    v266);
  LOBYTE(v331) = 39;
  if ( (unsigned __int8)ATL::CSimpleStringT<char,1>::IsEmpty(&v316) )
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
      &v316,
      "#%d",
      *(_DWORD *)(*((_DWORD *)v161 + 10) + 4));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Format(
    &v314,
    " Board <%s>, Station #%d",
    (const char *)v316,
    *(_DWORD *)(*((_DWORD *)v161 + 11) + 4));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator+=(v318, &v314);
  sub_D6E7A0(v318);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v316);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v314);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v318);
  v162 = 61384;
LABEL_251:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v304);
  v331 = -1;
  CObList::~CObList((CObList *)v285);
  return v162;
}