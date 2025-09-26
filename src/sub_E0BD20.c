int __thiscall sub_E0BD20(int this, char *FullPath)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const char *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  bool v39; // zf
  int v41; // [esp+0h] [ebp-5B4h]
  int v42; // [esp+0h] [ebp-5B4h]
  int v43; // [esp+0h] [ebp-5B4h]
  int v44; // [esp+0h] [ebp-5B4h]
  int v45; // [esp+0h] [ebp-5B4h]
  int v46; // [esp+0h] [ebp-5B4h]
  int v47; // [esp+0h] [ebp-5B4h]
  int v48; // [esp+0h] [ebp-5B4h]
  int v49; // [esp+0h] [ebp-5B4h]
  int v50; // [esp+0h] [ebp-5B4h]
  int v51; // [esp+0h] [ebp-5B4h]
  int v52; // [esp+0h] [ebp-5B4h]
  int v53; // [esp+0h] [ebp-5B4h]
  int v54; // [esp+0h] [ebp-5B4h]
  int v55; // [esp+0h] [ebp-5B4h]
  int v56; // [esp+0h] [ebp-5B4h]
  int v57; // [esp+0h] [ebp-5B4h]
  int v58; // [esp+0h] [ebp-5B4h]
  int v59; // [esp+0h] [ebp-5B4h]
  int v60; // [esp+0h] [ebp-5B4h]
  int v61; // [esp+0h] [ebp-5B4h]
  int v62; // [esp+0h] [ebp-5B4h]
  int v63; // [esp+0h] [ebp-5B4h]
  int v64; // [esp+0h] [ebp-5B4h]
  int v65; // [esp+0h] [ebp-5B4h]
  int v66; // [esp+0h] [ebp-5B4h]
  int v67; // [esp+0h] [ebp-5B4h]
  int v68; // [esp+4h] [ebp-5B0h]
  int v69; // [esp+4h] [ebp-5B0h]
  int v70; // [esp+4h] [ebp-5B0h]
  int v71; // [esp+4h] [ebp-5B0h]
  int v72; // [esp+4h] [ebp-5B0h]
  int v73; // [esp+4h] [ebp-5B0h]
  int v74; // [esp+4h] [ebp-5B0h]
  int v75; // [esp+4h] [ebp-5B0h]
  int v76; // [esp+4h] [ebp-5B0h]
  int v77; // [esp+4h] [ebp-5B0h]
  int v78; // [esp+4h] [ebp-5B0h]
  int v79; // [esp+4h] [ebp-5B0h]
  int v80; // [esp+4h] [ebp-5B0h]
  int v81; // [esp+4h] [ebp-5B0h]
  int v82; // [esp+4h] [ebp-5B0h]
  int v83; // [esp+4h] [ebp-5B0h]
  int v84; // [esp+4h] [ebp-5B0h]
  int v85; // [esp+4h] [ebp-5B0h]
  int v86; // [esp+4h] [ebp-5B0h]
  int v87; // [esp+4h] [ebp-5B0h]
  int v88; // [esp+4h] [ebp-5B0h]
  int v89; // [esp+4h] [ebp-5B0h]
  int v90; // [esp+4h] [ebp-5B0h]
  int v91; // [esp+4h] [ebp-5B0h]
  int v92; // [esp+4h] [ebp-5B0h]
  int v93; // [esp+4h] [ebp-5B0h]
  int v94; // [esp+4h] [ebp-5B0h]
  _BYTE v95[300]; // [esp+10h] [ebp-5A4h] BYREF
  int v96; // [esp+13Ch] [ebp-478h]
  char v97[28]; // [esp+140h] [ebp-474h] BYREF
  char Drive[4]; // [esp+15Ch] [ebp-458h] BYREF
  _BYTE v99[32]; // [esp+160h] [ebp-454h] BYREF
  int v100; // [esp+180h] [ebp-434h] BYREF
  int v101; // [esp+184h] [ebp-430h] BYREF
  int v102; // [esp+188h] [ebp-42Ch] BYREF
  char v103[4]; // [esp+18Ch] [ebp-428h] BYREF
  char Ext[260]; // [esp+190h] [ebp-424h] BYREF
  char Filename[260]; // [esp+294h] [ebp-320h] BYREF
  char Dir[260]; // [esp+398h] [ebp-21Ch] BYREF
  char Buffer[264]; // [esp+49Ch] [ebp-118h] BYREF
  int v108; // [esp+5B0h] [ebp-4h]

  sub_E35E50(v99);
  v108 = 0;
  if ( sub_E38780((CStringList *)v99, FullPath) )
  {
    *(_DWORD *)(this + 2040) = sub_E37200(v99);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(
      &v100,
      FullPath);
    LOBYTE(v108) = 1;
    v4 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::ReverseFind(&v100, 92);
    v5 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Mid(&v100, &v102, 0, v4 + 1);
    LOBYTE(v108) = 2;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v100, v5);
    LOBYTE(v108) = 1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
    v6 = sub_E37300(&v102);
    LOBYTE(v108) = 3;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(this + 2044, v6);
    LOBYTE(v108) = 1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
    *(_DWORD *)(this + 2048) = sub_E375F0(v99);
    *(_DWORD *)(this + 2052) = sub_E37640(v99);
    *(_DWORD *)(this + 2056) = sub_E37690(v99);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Left(this + 2044, v103, 11);
    LOBYTE(v108) = 4;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::MakeUpper(v103);
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-60HP") )
    {
      *(_DWORD *)(this + 2068) = 601;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-63HP") )
    {
      *(_DWORD *)(this + 2068) = 631;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-50II") )
    {
      *(_DWORD *)(this + 2068) = 502;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM411FX") )
    {
      *(_DWORD *)(this + 2068) = 4112;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM441") )
    {
      *(_DWORD *)(this + 2068) = 441;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM451")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM421P")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM451V") )
    {
      goto LABEL_127;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM451DH") )
    {
      *(_DWORD *)(this + 2068) = 4512;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM451DHPLUS") )
    {
      *(_DWORD *)(this + 2068) = 4512;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SCM1")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SCM2") )
    {
      *(_DWORD *)(this + 2068) = 4212;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SLM110S") )
    {
      *(_DWORD *)(this + 2068) = 2001;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SLM120S") )
    {
      *(_DWORD *)(this + 2068) = 2002;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "V1")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCEN") )
    {
      *(_DWORD *)(this + 2068) = 10001;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCENPLUS")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCENPRO") )
    {
      *(_DWORD *)(this + 2068) = 10002;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCENFLEX") )
    {
      *(_DWORD *)(this + 2068) = 10003;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "DECAN F2") )
    {
      *(_DWORD *)(this + 2068) = 511;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "DECAN F2 L") )
    {
      *(_DWORD *)(this + 2068) = 5114;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "DECAN L2") )
    {
      *(_DWORD *)(this + 2068) = 5112;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "DECAN L2 L") )
    {
      *(_DWORD *)(this + 2068) = 5114;
      *(_DWORD *)(this + 2072) = 5115;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "DECAN S2") )
    {
      *(_DWORD *)(this + 2068) = 5113;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "DECAN S2 L") )
    {
      *(_DWORD *)(this + 2068) = 5117;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM168L") )
    {
      *(_DWORD *)(this + 2068) = 1681;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM481L") )
    {
      *(_DWORD *)(this + 2068) = 4811;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM482L") )
    {
      *(_DWORD *)(this + 2068) = 4821;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM485") )
    {
      *(_DWORD *)(this + 2068) = 485;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM485-P4") )
    {
      *(_DWORD *)(this + 2068) = 4851;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM471P") )
    {
      *(_DWORD *)(this + 2068) = 471;
      *(_DWORD *)(this + 2072) = 4712;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM481P") )
    {
      *(_DWORD *)(this + 2068) = 481;
      *(_DWORD *)(this + 2072) = 4812;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM481PL") )
    {
      *(_DWORD *)(this + 2068) = 4811;
      *(_DWORD *)(this + 2072) = 4812;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM482P") )
    {
      *(_DWORD *)(this + 2068) = 482;
      *(_DWORD *)(this + 2072) = 4822;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM482PL") )
    {
      *(_DWORD *)(this + 2068) = 4821;
      *(_DWORD *)(this + 2072) = 4822;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCEN-D") )
    {
      *(_DWORD *)(this + 2068) = 5116;
      goto LABEL_128;
    }
    v7 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Left(v103, &v102, 6);
    LOBYTE(v108) = 5;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v103, v7);
    LOBYTE(v108) = 4;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM411F") )
    {
      *(_DWORD *)(this + 2068) = 4111;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM431L") )
    {
      *(_DWORD *)(this + 2068) = 4311;
      goto LABEL_128;
    }
    v8 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Left(v103, &v102, 5);
    LOBYTE(v108) = 6;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v103, v8);
    LOBYTE(v108) = 4;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-60") )
    {
      *(_DWORD *)(this + 2068) = 60;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-63") )
    {
      *(_DWORD *)(this + 2068) = 63;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-33") )
    {
      *(_DWORD *)(this + 2068) = 33;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-40") )
    {
      *(_DWORD *)(this + 2068) = 40;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-50") )
    {
      *(_DWORD *)(this + 2068) = 50;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-20") )
    {
      *(_DWORD *)(this + 2068) = 20;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-45") )
    {
      *(_DWORD *)(this + 2068) = 45;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "CP-55") )
    {
      *(_DWORD *)(this + 2068) = 55;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM320") )
    {
      *(_DWORD *)(this + 2068) = 320;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM421")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM421S")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM421F")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM421C")
      || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM421FC") )
    {
      *(_DWORD *)(this + 2068) = 421;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM482") )
    {
      *(_DWORD *)(this + 2068) = 482;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM321") )
    {
      *(_DWORD *)(this + 2068) = 321;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM310") )
    {
      *(_DWORD *)(this + 2068) = 310;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM420") )
    {
      *(_DWORD *)(this + 2068) = 420;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM411") )
    {
      *(_DWORD *)(this + 2068) = 411;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM471") )
    {
      *(_DWORD *)(this + 2068) = 471;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM511") )
    {
      *(_DWORD *)(this + 2068) = 511;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM481") )
    {
      *(_DWORD *)(this + 2068) = 481;
      goto LABEL_128;
    }
    if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM441") )
    {
      *(_DWORD *)(this + 2068) = 441;
      goto LABEL_128;
    }
    if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM451") )
    {
      if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "Q1000") )
      {
        if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM431") )
        {
          if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SQ1") )
          {
            if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "AP5") )
            {
              if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "SM168") )
              {
                v3 = 61354;
LABEL_196:
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(v103);
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v100);
                goto LABEL_197;
              }
              *(_DWORD *)(this + 2068) = 168;
            }
            else
            {
              *(_DWORD *)(this + 2068) = 2000;
            }
          }
          else
          {
            *(_DWORD *)(this + 2068) = 1000;
          }
        }
        else
        {
          *(_DWORD *)(this + 2068) = 431;
        }
      }
      else
      {
        *(_DWORD *)(this + 2068) = 1000;
      }
    }
    else
    {
LABEL_127:
      *(_DWORD *)(this + 2068) = 451;
    }
LABEL_128:
    v9 = *(_DWORD *)(this + 2068);
    if ( v9 == 5116 || v9 > 10000 && v9 <= 10002 )
      *(_DWORD *)(this + 2076) = 10000;
    else
      *(_DWORD *)(this + 2076) = 20000;
    _splitpath(FullPath, Drive, Dir, Filename, Ext);
    _makepath(Buffer, Drive, Dir, "READERR", "LOG");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(this + 2028, Buffer);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::MakeLower(this + 2028);
    v10 = (const char *)ATL::CSimpleStringT<char,1>::operator char const *(this + 2028);
    remove(v10);
    if ( *((_DWORD *)AfxGetModuleState() + 1) )
    {
      if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "V1") )
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v103, "EXCEN");
      if ( !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCENPLUS")
        || !ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Compare(v103, "EXCENPRO") )
      {
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(v103, "EXCENPro");
      }
      v11 = (char *)ATL::CSimpleStringT<char,1>::operator char const *(v103);
      sub_E66160(v11);
    }
    sub_E37250(&v101);
    LOBYTE(v108) = 7;
    if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
      && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
    {
      v12 = sub_B8D7F0((int)&v102, &v100, &v101);
      LOBYTE(v108) = 8;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v12);
      LOBYTE(v108) = 7;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
    }
    v13 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
    if ( (unsigned __int8)sub_E08A80((char *)(this + 104), v13) )
    {
      v14 = sub_E37E40(&v102);
      LOBYTE(v108) = 9;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v14);
      LOBYTE(v108) = 7;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
      if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
        && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
      {
        v15 = sub_B8D7F0((int)&v102, &v100, &v101);
        LOBYTE(v108) = 10;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v15);
        LOBYTE(v108) = 7;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
      }
      v16 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
      if ( (unsigned __int8)sub_E08A80((char *)(this + 344), v16) )
      {
        v17 = sub_E37150(&v102);
        LOBYTE(v108) = 11;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v17);
        LOBYTE(v108) = 7;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
        if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
          && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
        {
          v18 = sub_B8D7F0((int)&v102, &v100, &v101);
          LOBYTE(v108) = 12;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v18);
          LOBYTE(v108) = 7;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
        }
        v19 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
        if ( (unsigned __int8)sub_E08A80((char *)(this + 584), v19) )
        {
          v20 = sub_E36950(&v102);
          LOBYTE(v108) = 13;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v20);
          LOBYTE(v108) = 7;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
          if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
            && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
          {
            v21 = sub_B8D7F0((int)&v102, &v100, &v101);
            LOBYTE(v108) = 14;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v21);
            LOBYTE(v108) = 7;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
          }
          v22 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
          if ( (unsigned __int8)sub_E08A80((char *)(this + 1304), v22) )
          {
            v23 = sub_E37A00(&v102);
            LOBYTE(v108) = 15;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v23);
            LOBYTE(v108) = 7;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
            if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
              && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
            {
              v24 = sub_B8D7F0((int)&v102, &v100, &v101);
              LOBYTE(v108) = 16;
              ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v24);
              LOBYTE(v108) = 7;
              ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
            }
            v25 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
            if ( (unsigned __int8)sub_E08A80((char *)(this + 1064), v25) )
            {
              v26 = sub_E37950((CStringList *)v99, (int)&v102);
              LOBYTE(v108) = 17;
              ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v26);
              LOBYTE(v108) = 7;
              ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
              if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
                && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
              {
                v27 = sub_B8D7F0((int)&v102, &v100, &v101);
                LOBYTE(v108) = 18;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v27);
                LOBYTE(v108) = 7;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
              }
              v28 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
              if ( (unsigned __int8)sub_E08A80((char *)(this + 824), v28) )
              {
                v29 = sub_E37540((CStringList *)v99, (int)&v102);
                LOBYTE(v108) = 19;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(this + 2064, v29);
                LOBYTE(v108) = 7;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(this + 2064, 92, 0) == -1
                  && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(this + 2064, 47, 0) == -1 )
                {
                  v30 = sub_B8D7F0((int)&v102, &v100, (_DWORD *)(this + 2064));
                  LOBYTE(v108) = 20;
                  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(this + 2064, v30);
                  LOBYTE(v108) = 7;
                  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                }
                v31 = sub_E36630((CStringList *)v99, (int)&v102);
                LOBYTE(v108) = 21;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(this + 2060, v31);
                LOBYTE(v108) = 7;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                v32 = sub_E36B00((CStringList *)v99, (int)&v102);
                LOBYTE(v108) = 22;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v32);
                LOBYTE(v108) = 7;
                ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, "[", 0) == -1 )
                {
                  if ( ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 92, 0) == -1
                    && ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::Find(&v101, 47, 0) == -1 )
                  {
                    v33 = sub_B8D7F0((int)&v102, &v100, &v101);
                    LOBYTE(v108) = 23;
                    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::operator=(&v101, v33);
                    LOBYTE(v108) = 7;
                    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                  }
                  v34 = ATL::CSimpleStringT<char,1>::operator char const *(&v101);
                  sub_E08A80((char *)(this + 1784), v34);
                }
                *(_DWORD *)(this + 2080) = sub_E38200();
                *(_DWORD *)(this + 2084) = sub_E36BB0();
                *(_DWORD *)(this + 2092) = sub_E36A80();
                *(_DWORD *)(this + 2088) = sub_E373B0();
                if ( *(_DWORD *)(this + 2068) == 55 )
                {
                  if ( *(_DWORD *)(this + 2084) )
                  {
                    if ( *(_DWORD *)(this + 2084) == 2 )
                    {
                      CStringList::CStringList((CStringList *)v97, 10);
                      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                      LOBYTE(v108) = 25;
                      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::LoadStringA(&v102, 61387);
                      CStringList::AddHead(v97, &v102);
                      sub_D67E40((struct CStringList *)v97, 4, 0);
                      LOBYTE(v108) = 26;
                      v96 = dword_F446D4;
                      if ( dword_F446D4 )
                        CDialog::DoModal((CDialog *)v95);
                      LOBYTE(v108) = 25;
                      sub_BA7830((CDialog *)v95, v41, v68);
                      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v102);
                      LOBYTE(v108) = 7;
                      CStringList::~CStringList((CStringList *)v97);
                    }
                  }
                  else
                  {
                    *(_DWORD *)(this + 2084) = 1;
                  }
                }
                *(_DWORD *)(this + 2096) = sub_E37BE0(v41, v68);
                v35 = sub_E36C30(this + 2104);
                *(_BYTE *)(this + 2100) = v35 != 0;
                v36 = sub_E37050(this + 2108);
                *(_BYTE *)(this + 2101) = v36 != 0;
                if ( v35 && v36 && *(_DWORD *)(this + 2104) >= *(_DWORD *)(this + 2108) )
                {
                  v3 = 61370;
                }
                else
                {
                  sub_E382A0((bool *)(this + 2112));
                  sub_E376E0((int *)(this + 2116));
                  sub_E37450((int *)(this + 2124));
                  sub_E37B30((int *)(this + 2128));
                  *(_DWORD *)(this + 2164) = sub_E368A0(v42, v69);
                  *(_DWORD *)(this + 2132) = sub_E37DA0(v43, v70);
                  sub_E36090(this + 2136);
                  sub_E36140((bool *)(this + 2140));
                  sub_E383E0(this + 2148);
                  *(_DWORD *)(this + 2144) = sub_E36D30(v44, v71);
                  *(_DWORD *)(this + 2152) = sub_E38490(v45, v72);
                  *(_DWORD *)(this + 2160) = sub_E385D0(v46, v73);
                  *(_DWORD *)(this + 2168) = sub_E37EF0(v47, v74);
                  v37 = sub_E36800(v48, v75);
                  *(_DWORD *)(this + 2172) = v37;
                  *(_DWORD *)(this + 2176) = sub_E38280(v37);
                  *(_DWORD *)(this + 2180) = sub_E38530(v49, v76);
                  *(_DWORD *)(this + 2184) = sub_E36760(v50, v77);
                  *(_DWORD *)(this + 2188) = sub_E37830(v51, v78);
                  *(_DWORD *)(this + 2192) = sub_E37790(v52, v79);
                  *(_BYTE *)(this + 2196) = sub_E38150(v53, v80);
                  *(double *)(this + 2200) = (double)(int)sub_E361E0(v54, v81) * 0.001;
                  *(double *)(this + 2208) = (double)(int)sub_E362A0(v55, v82) * 0.001;
                  *(_DWORD *)(this + 2216) = sub_E36010(v56, v83);
                  *(_DWORD *)(this + 2220) = sub_E37AB0(v57, v84);
                  *(_BYTE *)(this + 2224) = sub_E36F10(v58, v85);
                  *(_DWORD *)(this + 2228) = sub_E36DD0(v59, v86);
                  *(_DWORD *)(this + 2240) = sub_E378D0(v60, v87);
                  v38 = sub_E36470(v61, v88);
                  v39 = *(_BYTE *)(this + 2224) == 0;
                  *(_BYTE *)(this + 2246) = v38 != 0;
                  if ( !v39 )
                  {
                    if ( *(_DWORD *)(this + 2076) == 10000 || *(_DWORD *)(this + 2068) == 10003 )
                      *(_BYTE *)(this + 2156) = 1;
                    else
                      *(_BYTE *)(this + 2224) = 0;
                  }
                  *(_DWORD *)(this + 2232) = sub_E38040(v62, v89);
                  *(_DWORD *)(this + 2236) = sub_E36E70();
                  *(_BYTE *)(this + 2244) = sub_E36590(v63, v90);
                  *(_BYTE *)(this + 2245) = sub_E37FA0(v64, v91);
                  *(_BYTE *)(this + 2247) = sub_E38670(v65, v92) != 0;
                  *(_BYTE *)(this + 2248) = sub_E36370(v66, v93) != 0;
                  *(_BYTE *)(this + 2249) = sub_E363F0() != 0;
                  *(_DWORD *)(this + 2252) = sub_E36A00(v67, v94);
                  v3 = 0;
                }
              }
              else
              {
                v3 = 61293;
              }
            }
            else
            {
              v3 = 61308;
            }
          }
          else
          {
            v3 = 32798;
          }
        }
        else
        {
          v3 = 32801;
        }
      }
      else
      {
        v3 = 61292;
      }
    }
    else
    {
      v3 = 61291;
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>>>(&v101);
    goto LABEL_196;
  }
  v3 = 1071;
LABEL_197:
  v108 = -1;
  sub_E35E70((CStringList *)v99);
  return v3;
}