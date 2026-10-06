/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ccf874; end: 106ccf8bf; -[SCCMapLayerLoader setViewModel:] */

void FUN_106ccf874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000106ccf988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ccf8c0; end: 106ccf8ff; -[SCCMapLayerLoader viewModel] */

void FUN_106ccf8c0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ccf900; end: 106ccf967;  */

void FUN_106ccf900(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ccf968; end: 106ccf9b7;  */

void FUN_106ccf968(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf9b8; end: 106ccfa9b; -[SCMemoriesSnapsTabServiceProvider provide] */

void FUN_106ccf9b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2100;
  _objc_alloc(PTR_PTR_1126d2100);
  func_0x00010c04a240();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ccfa9c; end: 106ccfadb;  */

void FUN_106ccfa9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ccfadc; end: 106cd0ab3; -[SCMemoriesSnapsTabServiceProvider _memoriesSnapsTabService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ccfadc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  undefined8 uVar98;
  long lStack_3c0;
  undefined8 uStack_388;
  long lStack_220;
  long lStack_210;
  long lStack_1e8;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_11275c198;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar58;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar58);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106cd0ab4;
  puStack_78 = &UNK_110974680;
  puVar2 = PTR_PTR_1126ae720;
  lStack_70 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d2108;
  _objc_alloc();
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_11275c19c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar58;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106cd0abc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_11275c1a0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar59;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lStack_d0 = 0;
    uStack_c8 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    lVar60 = 0;
  }
  else {
    uStack_b8 = *(undefined8 *)(param_1 + _DAT_11275c260);
    _objc_retain();
    lStack_c0 = param_1 + _DAT_11275c264;
    _objc_loadWeakRetained();
    uStack_c8 = *(undefined8 *)(param_1 + _DAT_11275c268);
    _objc_retain();
    lStack_d0 = param_1 + _DAT_11275c26c;
    _objc_loadWeakRetained();
    lVar60 = param_1 + _DAT_11275c1a4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar60;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = param_1 + _DAT_11275c1f8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar61;
  func_0x00010c0c9ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_11275c1a8;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar62;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar63 = 0;
  }
  else {
    lVar63 = param_1 + _DAT_11275c1b0;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar63;
  func_0x00010c0c97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0c97e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_11275c1b4;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar64;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_11275c1f4;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar65;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  FUN_106cd0abc();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11275c214;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar66;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_11275c20c;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar67;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_11275c1d4;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar68;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_11275c1c8;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar69;
  func_0x00010c0fa3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_11275c1cc;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar70;
  func_0x00010c0c9cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_140 = 0;
    uStack_138 = 0;
    lVar71 = 0;
  }
  else {
    uStack_138 = *(undefined8 *)(param_1 + _DAT_11275c278);
    _objc_retain();
    uStack_140 = *(undefined8 *)(param_1 + _DAT_11275c27c);
    _objc_retain();
    lVar71 = param_1 + _DAT_11275c1d8;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar71;
  func_0x00010c08f680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uStack_160 = 0;
    uStack_150 = 0;
    lStack_158 = 0;
    lVar72 = 0;
  }
  else {
    uStack_150 = *(undefined8 *)(param_1 + _DAT_11275c270);
    _objc_retain();
    lStack_158 = param_1 + _DAT_11275c274;
    _objc_loadWeakRetained();
    uStack_160 = *(undefined8 *)(param_1 + _DAT_11275c280);
    _objc_retain();
    lVar72 = param_1 + _DAT_11275c1dc;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar72;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_11275c1e0;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar73;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
  }
  else {
    lVar74 = param_1 + _DAT_11275c1e4;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar74;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar75 = 0;
  }
  else {
    lVar75 = param_1 + _DAT_11275c1e8;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar75;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar76 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_11275c1ec;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar76;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x000106cd0ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x000106cd0ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar77 = 0;
  }
  else {
    lVar77 = param_1 + _DAT_11275c1fc;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar77;
  func_0x00010c0c94c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar78 = 0;
  }
  else {
    lVar78 = param_1 + _DAT_11275c208;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar78;
  func_0x00010bfe3220();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_11275c1bc;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar79;
  func_0x00010bf97800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar80 = 0;
  }
  else {
    lVar80 = param_1 + _DAT_11275c1c0;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar80;
  func_0x00010bf53c20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar81 = 0;
  }
  else {
    lVar81 = param_1 + _DAT_11275c1c4;
    _objc_loadWeakRetained();
  }
  lVar36 = lVar81;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar82 = 0;
  }
  else {
    lVar82 = param_1 + _DAT_11275c200;
    _objc_loadWeakRetained();
  }
  lVar37 = lVar82;
  func_0x00010c2666c0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x000106cd0b04();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar83 = 0;
  }
  else {
    lVar83 = param_1 + _DAT_11275c210;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar83;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x000106cd0b04();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar84 = 0;
  }
  else {
    lVar84 = param_1 + _DAT_11275c218;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar84;
  func_0x00010bf2fa20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar85 = 0;
  }
  else {
    lVar85 = param_1 + _DAT_11275c250;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar85;
  func_0x00010c0c90a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_1e8 = 0;
    lStack_210 = 0;
    lVar86 = 0;
  }
  else {
    lStack_210 = param_1 + _DAT_11275c24c;
    _objc_loadWeakRetained();
    lStack_1e8 = param_1 + _DAT_11275c21c;
    _objc_loadWeakRetained();
    lVar86 = param_1 + _DAT_11275c220;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar86;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar87 = 0;
  }
  else {
    lVar87 = param_1 + _DAT_11275c254;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar87;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_220 = 0;
    uStack_388 = 0;
    lVar88 = 0;
  }
  else {
    uStack_388 = *(undefined8 *)(param_1 + _DAT_11275c284);
    _objc_retain();
    lStack_220 = param_1 + _DAT_11275c288;
    _objc_loadWeakRetained();
    lVar88 = param_1 + _DAT_11275c1d0;
    _objc_loadWeakRetained();
  }
  lVar47 = lVar88;
  func_0x00010c2400c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar89 = 0;
  }
  else {
    lVar89 = param_1 + _DAT_11275c224;
    _objc_loadWeakRetained();
  }
  lVar48 = lVar89;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar90 = 0;
  }
  else {
    lVar90 = param_1 + _DAT_11275c22c;
    _objc_loadWeakRetained();
  }
  lVar49 = lVar90;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar91 = 0;
  }
  else {
    lVar91 = param_1 + _DAT_11275c258;
    _objc_loadWeakRetained();
  }
  lVar50 = lVar91;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_3c0 = 0;
    lVar92 = 0;
  }
  else {
    lStack_3c0 = param_1 + _DAT_11275c228;
    _objc_loadWeakRetained();
    lVar92 = param_1 + _DAT_11275c230;
    _objc_loadWeakRetained();
  }
  lVar51 = lVar92;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar93 = 0;
  }
  else {
    lVar93 = param_1 + _DAT_11275c234;
    _objc_loadWeakRetained();
  }
  lVar52 = lVar93;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar94 = 0;
  }
  else {
    lVar94 = param_1 + _DAT_11275c238;
    _objc_loadWeakRetained();
  }
  lVar53 = lVar94;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010c2928e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar95 = 0;
  }
  else {
    lVar95 = param_1 + _DAT_11275c240;
    _objc_loadWeakRetained();
  }
  lVar56 = lVar95;
  func_0x00010c08d860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar96 = 0;
  }
  else {
    lVar96 = param_1 + _DAT_11275c244;
    _objc_loadWeakRetained();
  }
  lVar57 = lVar96;
  func_0x00010c296cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar98 = 0;
    lVar97 = 0;
    param_1 = 0;
  }
  else {
    lVar97 = param_1 + _DAT_11275c248;
    _objc_loadWeakRetained();
    uVar98 = *(undefined8 *)(param_1 + _DAT_11275c28c);
    _objc_retain(uVar98);
    param_1 = param_1 + _DAT_11275c25c;
    _objc_loadWeakRetained();
  }
  func_0x00010c05cae0(puVar3,param_2,lVar4,lVar6,lVar7,uStack_b8,lStack_c0,uStack_c8,lStack_d0,lVar8
                      ,lVar9,lVar10,lVar12,lVar13,lVar14,lVar16,lVar17,lVar18,puVar2,lVar19,lVar20,
                      lVar21,uStack_138,uStack_140,lVar22,uStack_150,lStack_158,uStack_160,lVar23,
                      lVar24,lVar25,lVar26,lVar27,lVar29,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,
                      lVar37,lVar39,lVar40,lVar42,lVar43,lVar44,lStack_210,lStack_1e8,lVar45,lVar46,
                      uStack_388,lStack_220,lVar47,lVar48,lVar49,lVar50,lStack_3c0,lVar51,lVar52,
                      lVar53,lVar55,lVar56,lVar57,lVar97,uVar98,param_1);
  _objc_release(uVar98);
  _objc_release(param_1);
  _objc_release(uStack_388);
  _objc_release(lVar97);
  _objc_release(lVar57);
  _objc_release(lVar96);
  _objc_release(lVar56);
  _objc_release(lVar95);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar94);
  _objc_release(lVar52);
  _objc_release(lVar93);
  _objc_release(lVar51);
  _objc_release(lVar92);
  _objc_release(lStack_3c0);
  _objc_release(lVar50);
  _objc_release(lVar91);
  _objc_release(lVar49);
  _objc_release(lVar90);
  _objc_release(lVar48);
  _objc_release(lVar89);
  _objc_release(lVar47);
  _objc_release(lVar88);
  _objc_release(lStack_220);
  _objc_release(lVar46);
  _objc_release(lVar87);
  _objc_release(lVar45);
  _objc_release(lVar86);
  _objc_release(lStack_1e8);
  _objc_release(lStack_210);
  _objc_release(lVar44);
  _objc_release(lVar85);
  _objc_release(lVar43);
  _objc_release(lVar84);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar83);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar82);
  _objc_release(lVar36);
  _objc_release(lVar81);
  _objc_release(lVar35);
  _objc_release(lVar80);
  _objc_release(lVar34);
  _objc_release(lVar79);
  _objc_release(lVar33);
  _objc_release(lVar78);
  _objc_release(lVar32);
  _objc_release(lVar77);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar76);
  _objc_release(lVar26);
  _objc_release(lVar75);
  _objc_release(lVar25);
  _objc_release(lVar74);
  _objc_release(lVar24);
  _objc_release(lVar73);
  _objc_release(lVar23);
  _objc_release(lVar72);
  _objc_release(uStack_160);
  _objc_release(lStack_158);
  _objc_release(uStack_150);
  _objc_release(lVar22);
  _objc_release(lVar71);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(lVar21);
  _objc_release(lVar70);
  _objc_release(lVar20);
  _objc_release(lVar69);
  _objc_release(lVar19);
  _objc_release(lVar68);
  _objc_release(lVar18);
  _objc_release(lVar67);
  _objc_release(lVar17);
  _objc_release(lVar66);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar65);
  _objc_release(lVar13);
  _objc_release(lVar64);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar63);
  _objc_release(lVar10);
  _objc_release(lVar62);
  _objc_release(lVar9);
  _objc_release(lVar61);
  _objc_release(lVar8);
  _objc_release(lVar60);
  _objc_release(lStack_d0);
  _objc_release(uStack_c8);
  _objc_release(lStack_c0);
  _objc_release(uStack_b8);
  _objc_release(lVar7);
  _objc_release(lVar59);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar58);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cd0ab4; end: 106cd0abb;  */

void FUN_106cd0ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestManager_11262b160);
  return;
}



/* Entry: 106cd0abc; end: 106cd0b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cd0abc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275c1b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cd0b28; end: 106cd0b47; -[SCMemoriesSnapsTabServiceProvider userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cd0b28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275c23c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cd0b48; end: 106cd0b5b; -[SCMemoriesSnapsTabServiceProvider setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cd0b48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275c23c,param_3);
  return;
}



/* Entry: 106cd0b5c; end: 106cd0e83; -[SCMemoriesSnapsTabServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cd0b5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c28c,0);
  _objc_destroyWeak(param_1 + _DAT_11275c288);
  _objc_storeStrong(param_1 + _DAT_11275c284,0);
  _objc_storeStrong(param_1 + _DAT_11275c280,0);
  _objc_storeStrong(param_1 + _DAT_11275c27c,0);
  _objc_storeStrong(param_1 + _DAT_11275c278,0);
  _objc_destroyWeak(param_1 + _DAT_11275c274);
  _objc_storeStrong(param_1 + _DAT_11275c270,0);
  _objc_destroyWeak(param_1 + _DAT_11275c26c);
  _objc_storeStrong(param_1 + _DAT_11275c268,0);
  _objc_destroyWeak(param_1 + _DAT_11275c264);
  _objc_storeStrong(param_1 + _DAT_11275c260,0);
  _objc_destroyWeak(param_1 + _DAT_11275c25c);
  _objc_destroyWeak(param_1 + _DAT_11275c258);
  _objc_destroyWeak(param_1 + _DAT_11275c254);
  _objc_destroyWeak(param_1 + _DAT_11275c250);
  _objc_destroyWeak(param_1 + _DAT_11275c24c);
  _objc_destroyWeak(param_1 + _DAT_11275c248);
  _objc_destroyWeak(param_1 + _DAT_11275c244);
  _objc_destroyWeak(param_1 + _DAT_11275c240);
  _objc_destroyWeak(param_1 + _DAT_11275c23c);
  _objc_destroyWeak(param_1 + _DAT_11275c238);
  _objc_destroyWeak(param_1 + _DAT_11275c234);
  _objc_destroyWeak(param_1 + _DAT_11275c230);
  _objc_destroyWeak(param_1 + _DAT_11275c22c);
  _objc_destroyWeak(param_1 + _DAT_11275c228);
  _objc_destroyWeak(param_1 + _DAT_11275c224);
  _objc_destroyWeak(param_1 + _DAT_11275c220);
  _objc_destroyWeak(param_1 + _DAT_11275c21c);
  _objc_destroyWeak(param_1 + _DAT_11275c218);
  _objc_destroyWeak(param_1 + _DAT_11275c214);
  _objc_destroyWeak(param_1 + _DAT_11275c210);
  _objc_destroyWeak(param_1 + _DAT_11275c20c);
  _objc_destroyWeak(param_1 + _DAT_11275c208);
  _objc_destroyWeak(param_1 + _DAT_11275c204);
  _objc_destroyWeak(param_1 + _DAT_11275c200);
  _objc_destroyWeak(param_1 + _DAT_11275c1fc);
  _objc_destroyWeak(param_1 + _DAT_11275c1f8);
  _objc_destroyWeak(param_1 + _DAT_11275c1f4);
  _objc_destroyWeak(param_1 + _DAT_11275c1f0);
  _objc_destroyWeak(param_1 + _DAT_11275c1ec);
  _objc_destroyWeak(param_1 + _DAT_11275c1e8);
  _objc_destroyWeak(param_1 + _DAT_11275c1e4);
  _objc_destroyWeak(param_1 + _DAT_11275c1e0);
  _objc_destroyWeak(param_1 + _DAT_11275c1dc);
  _objc_destroyWeak(param_1 + _DAT_11275c1d8);
  _objc_destroyWeak(param_1 + _DAT_11275c1d4);
  _objc_destroyWeak(param_1 + _DAT_11275c1d0);
  _objc_destroyWeak(param_1 + _DAT_11275c1cc);
  _objc_destroyWeak(param_1 + _DAT_11275c1c8);
  _objc_destroyWeak(param_1 + _DAT_11275c1c4);
  _objc_destroyWeak(param_1 + _DAT_11275c1c0);
  _objc_destroyWeak(param_1 + _DAT_11275c1bc);
  _objc_destroyWeak(param_1 + _DAT_11275c1b8);
  _objc_destroyWeak(param_1 + _DAT_11275c1b4);
  _objc_destroyWeak(param_1 + _DAT_11275c1b0);
  _objc_destroyWeak(param_1 + _DAT_11275c1ac);
  _objc_destroyWeak(param_1 + _DAT_11275c1a8);
  _objc_destroyWeak(param_1 + _DAT_11275c1a4);
  _objc_destroyWeak(param_1 + _DAT_11275c1a0);
  _objc_destroyWeak(param_1 + _DAT_11275c19c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275c198);
  return;
}



/* Entry: 106cd0e84; end: 106cd1253; -[SCGalleryMomentClusterer initWithOption:dataObjectContext:circumstanceEngine:spectaclesContentDataSource:grapheneRegistry:memoriesMergedDataSource:memoriesProfile:memoriesSaveLogger:memoriesExperimentService:userTrackingLogger:memoriesMonetizationServices:] */

undefined8 *
FUN_106cd0e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f6708;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c2572e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106cd1254; end: 106cd12b3;  */

void FUN_106cd1254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c234580(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 106cd12b4; end: 106cd1443; -[SCGalleryMomentClusterer clusterSnapsWithProgress:completion:] */

void FUN_106cd12b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_68,param_1);
  uVar1 = 0;
  _dispatch_time(0,15000000000);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106cd1444;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010058c530(uVar1,uVar2,&puStack_90);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cd1444; end: 106cd158b;  */

void FUN_106cd1444(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110e83598,
                        &PTR____CFConstantStringClassReference_110e835b8,puVar4,
                        *(undefined8 *)(param_1 + 0x78));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_f0,*(undefined8 *)(param_1 + 0x20));
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106cd17ac;
  puStack_110 = &UNK_1109746f0;
  _objc_copyWeak(auStack_100,auStack_f0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_f8 = *(undefined8 *)(param_1 + 0x38);
  ppuVar5 = &puStack_128;
  uStack_108 = uVar1;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010bf97720(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81160(*(undefined8 *)(param_1 + 0x20));
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_138,auStack_f0);
  uStack_130 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  func_0x00010bfa7440(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_138);
  _objc_release(ppuVar5);
  _objc_release(uStack_108);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f0);
  return;
}



/* Entry: 106cd158c; end: 106cd17ab;  */

void FUN_106cd158c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106cd17ac;
  puStack_a0 = &UNK_1109746f0;
  _objc_copyWeak(auStack_90,auStack_80);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  ppuVar2 = &puStack_b8;
  uStack_98 = uVar6;
  _objc_retainBlock();
  puVar1 = PTR_PTR_1126af4d0;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010bf97720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81160(*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c8,auStack_80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  func_0x00010bfa7440(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_c8);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106cd17ac; end: 106cd188f;  */

void FUN_106cd17ac(double param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = param_3;
    func_0x00010bf529e0();
    *(long *)(lVar3 + 0xa8) = *(long *)(lVar3 + 0xa8) + lVar4;
    puVar1 = PTR_PTR_1126b24e0;
    func_0x00010bf529e0(param_3);
    func_0x00010bfb06a0(puVar1);
    func_0x00010be0c280(lVar3);
    if (*(long *)(lVar3 + 0x40) == 1) {
      iVar2 = (int)*(undefined8 *)(lVar3 + 0xb8);
      func_0x00010c07ee80();
      if (iVar2 != 0) {
        _CACurrentMediaTime();
        func_0x00010be53820(param_1 - *(double *)(param_2 + 0x30),lVar3);
      }
    }
  }
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cd1890; end: 106cd192b;  */

void FUN_106cd1890(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x80) = 1;
    _CACurrentMediaTime();
    func_0x00010be51ba0(param_1 - *(double *)(param_2 + 0x30),lVar1);
    if (*(long *)(lVar1 + 0x40) == 0) {
      func_0x00010bfb0620(PTR_PTR_1126b24e0);
    }
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cd192c; end: 106cd1a7b; -[SCGalleryMomentClusterer fetchEntryForGallerySnap:] */

void FUN_106cd192c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06fc80();
    if (iVar1 == 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x3032000000;
      pcStack_48 = FUN_106cd1a7c;
      uStack_40 = 0x106cd1a8c;
      uStack_38 = 0;
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_3);
      func_0x00010c0f8240(uVar3);
      param_1 = puStack_58[5];
      _objc_retain(param_1);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_60,8);
      _objc_release(uStack_38);
    }
    else {
      func_0x00010be11020(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cd1a7c; end: 106cd1a93;  */

void FUN_106cd1a7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106cd1a94; end: 106cd1ad7;  */

void FUN_106cd1a94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be11020(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cd1ad8; end: 106cd1c0f; -[SCGalleryMomentClusterer fetchSnapsForEntry:] */

void FUN_106cd1ad8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06fc80();
    if (iVar1 == 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x3032000000;
      pcStack_48 = FUN_106cd1a7c;
      uStack_40 = 0x106cd1a8c;
      uStack_38 = 0;
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_3);
      func_0x00010c0f8240(uVar2);
      param_1 = puStack_58[5];
      _objc_retain(param_1);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_60,8);
      _objc_release(uStack_38);
    }
    else {
      func_0x00010be144e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cd1c10; end: 106cd1c53;  */

void FUN_106cd1c10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be144e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cd1c54; end: 106cd1d53; -[SCGalleryMomentClusterer isHighlightedSnap:] */

uint FUN_106cd1c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar3);
    uVar2 = (uint)*(byte *)(puStack_48 + 3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    func_0x00010be40f20(param_1);
    uVar2 = (uint)param_1;
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 106cd1d54; end: 106cd1d87;  */

void FUN_106cd1d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be40f20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 106cd1d88; end: 106cd1db3; -[SCGalleryMomentClusterer discardsSnapDocData] */

uint FUN_106cd1d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e83578,0,0);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106cd1db4; end: 106cd1eb3; -[SCGalleryMomentClusterer reClustersWithDeletes:inserts:completion:] */

void FUN_106cd1db4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106cd1eb4;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_3);
    lStack_60 = param_3;
    lStack_58 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_release(lStack_60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cd1eb4; end: 106cd2567;  */

/* WARNING: Possible PIC construction at 0x000106cd1f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106cd2304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106cd2378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106cd2308) */
/* WARNING: Removing unreachable block (ram,0x000106cd1f88) */
/* WARNING: Removing unreachable block (ram,0x000106cd2008) */
/* WARNING: Removing unreachable block (ram,0x000106cd2014) */
/* WARNING: Removing unreachable block (ram,0x000106cd2018) */
/* WARNING: Removing unreachable block (ram,0x000106cd2028) */
/* WARNING: Removing unreachable block (ram,0x000106cd2030) */
/* WARNING: Removing unreachable block (ram,0x000106cd20a4) */
/* WARNING: Removing unreachable block (ram,0x000106cd20c0) */
/* WARNING: Removing unreachable block (ram,0x000106cd2110) */
/* WARNING: Removing unreachable block (ram,0x000106cd237c) */
/* WARNING: Removing unreachable block (ram,0x000106cd23a8) */
/* WARNING: Removing unreachable block (ram,0x000106cd240c) */
/* WARNING: Removing unreachable block (ram,0x000106cd2398) */
/* WARNING: Removing unreachable block (ram,0x000106cd2410) */
/* WARNING: Removing unreachable block (ram,0x000106cd241c) */
/* WARNING: Removing unreachable block (ram,0x000106cd2504) */
/* WARNING: Removing unreachable block (ram,0x000106cd1f50) */
/* WARNING: Removing unreachable block (ram,0x000106cd2250) */

void FUN_106cd1eb4(long param_1,undefined **param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release(lVar9);
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    ppuVar6 = ppuRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (ppuRam0000000000000000 != ppuVar6) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(undefined8 *)(lVar10 * 8);
        lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010bed9460(*(undefined8 *)(param_1 + 0x28));
        _objc_retain(lVar3);
        lVar2 = lVar3;
        func_0x00010bf52a60();
        param_2 = ppuRam0000000000000000;
        if (lVar2 != 0) {
          uVar4 = uVar12;
          FUN_106e393d0(uVar12,ppuRam0000000000000000);
          if ((int)uVar4 == 0) {
            puVar11 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x38);
            func_0x00010c241220(param_2);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = 3;
            func_0x000108e01da8(3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0aeb60(uVar4);
            _objc_release(uVar5);
            _objc_release(uVar4);
            ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf977c0(uVar12);
            func_0x00010c0df760(ppuVar6);
            _objc_retainAutoreleasedReturnValue();
            param_2 = ppuVar6;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
          }
          goto code_r0x00010c0e00e0;
        }
        _objc_release(lVar3);
        param_2 = &PTR___NSConcreteGlobalBlock_110974750;
        lVar2 = lVar3;
        func_0x000100504554(lVar3,&PTR___NSConcreteGlobalBlock_110974750);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
        func_0x00010bf97200(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar4);
        _objc_release(uVar12);
        _objc_release(lVar2);
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar1);
      lVar1 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    puVar7 = puVar11;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bfb0600(PTR_PTR_1126b24e0);
    }
    func_0x00010be85ee0(*(undefined8 *)(param_1 + 0x28));
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar11 = *(undefined **)(*(long *)(puVar11 + 0x20) + 0x20);
  }
  else {
    puVar11 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x28);
    param_2 = ppuRam0000000000000000;
    func_0x00010bf97200(ppuRam0000000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar11,PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106cd2568; end: 106cd257f;  */

void FUN_106cd2568(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106cd2580; end: 106cd260f; -[SCGalleryMomentClusterer reClustersWithCompletion:] */

void FUN_106cd2580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106cd2610;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106cd2610; end: 106cd261b;  */

void FUN_106cd2610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reClustersWithCompletion__11257f158,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106cd261c; end: 106cd2643; -[SCGalleryMomentClusterer getClusterModelModifyPerformer] */

void FUN_106cd261c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cd2644; end: 106cd269f; -[SCGalleryMomentClusterer updateKeepsLockedSnaps:] */

void FUN_106cd2644(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106cd26a0;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 106cd26a0; end: 106cd26af;  */

void FUN_106cd26a0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb0) = *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 106cd26b0; end: 106cd2773; -[SCGalleryMomentClusterer _fetchEntryForGallerySnap:] */

void FUN_106cd26b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    lVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = *(long *)(param_1 + 0x58);
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfa7040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106cd2774; end: 106cd283b; -[SCGalleryMomentClusterer _isHighlightedSnap:] */

undefined8 FUN_106cd2774(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar2 = lVar1;
      func_0x00010bf97200(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4b900();
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106cd283c; end: 106cd295b; -[SCGalleryMomentClusterer _updateHighlightedMapForEntry:overwrite:] */

void FUN_106cd283c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if ((param_4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      lVar1 = param_3;
      func_0x00010bf97200(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar5 != 0) goto LAB_106cd2944;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa73e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x000100504554();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
LAB_106cd2944:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cd295c; end: 106cd2963;  */

void FUN_106cd295c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106cd2964; end: 106cd2c2f; -[SCGalleryMomentClusterer _getValidSnapsWithSnaps:entries:willClusterForFirstTime:isFirstBatch:currentCluster:] */

void FUN_106cd2964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106cd1a7c;
  uStack_b8 = 0x106cd1a8c;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar4;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x00010bf97e80(param_3);
  lVar5 = puStack_d0[5];
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010bfb0600(PTR_PTR_1126b24e0);
  }
  if (0 < (long)puStack_a0[3]) {
    func_0x00010bfb0740(PTR_PTR_1126b24e0);
  }
  if (0 < (long)puStack_80[3]) {
    func_0x00010bfb0720(PTR_PTR_1126b24e0);
  }
  puVar4 = PTR_PTR_1126d2110;
  _objc_alloc(PTR_PTR_1126d2110);
  func_0x00010c04caa0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(puStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cd2c30; end: 106cd2fa3;  */

void FUN_106cd2c30(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar8 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) goto LAB_106cd2f88;
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    lVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    _objc_release(lVar8);
    if (lVar9 != 0) goto LAB_106cd2f88;
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar10 == 0) goto LAB_106cd2f80;
    uVar10 = uVar2;
    FUN_106e393d0(uVar2,param_2);
    if ((int)uVar10 == 0) {
      _objc_release(uVar2);
      goto LAB_106cd2e0c;
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 3;
    func_0x000108e01da8(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeb60(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf977c0(uVar2);
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
    _objc_release(puVar5);
    _objc_release(uVar3);
LAB_106cd2f7c:
    _objc_release(puVar7);
  }
  else {
LAB_106cd2e0c:
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xb8);
    func_0x00010c242660();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) || (uVar10 = uVar2, func_0x00010bf99aa0(), (uVar10 & 1) != 0)) {
      uVar10 = *(ulong *)(param_1 + 0x30);
      lVar8 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(lVar8);
      if ((uVar10 & 1) == 0) {
        uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x90);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c07e5c0();
        if ((uVar10 & 1) == 0) {
          _objc_release(uVar6);
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010bf1f3c0();
          _objc_release(uVar4);
          _objc_release(uVar6);
          if ((int)uVar3 != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0x30);
            lVar8 = param_2;
            func_0x00010c241220(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar3);
            _objc_release(lVar8);
            uVar3 = *(undefined8 *)(param_1 + 0x38);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar3);
            _objc_release(puVar7);
            lVar8 = *(long *)(param_1 + 0x58);
            goto LAB_106cd2f30;
          }
        }
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar3);
        goto LAB_106cd2f7c;
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0x50);
LAB_106cd2f30:
      *(long *)(*(long *)(lVar8 + 8) + 0x18) = *(long *)(*(long *)(lVar8 + 8) + 0x18) + 1;
    }
  }
LAB_106cd2f80:
  _objc_release(uVar2);
LAB_106cd2f88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cd2fa4; end: 106cd3457; -[SCGalleryMomentClusterer _expandClusters:entries:progress:] */

void FUN_106cd2fa4(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **unaff_x23;
  undefined **ppuVar22;
  undefined **unaff_x24;
  undefined **ppuVar23;
  long unaff_x26;
  undefined **ppuVar24;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  long lStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar7 = param_3;
  func_0x00010bf529e0();
  ppuVar20 = param_4;
  func_0x00010bf529e0();
  if (ppuVar7 == ppuVar20) {
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_106cd1a7c;
    uStack_110 = 0x106cd1a8c;
    unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_108 = puVar9;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = param_1;
    func_0x00010be23be0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar20;
    func_0x00010c2570a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar20;
    ppuStack_1c8 = ppuVar1;
    func_0x00010c2966c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1e0 = ppuVar20;
    ppuStack_1d0 = ppuVar24;
    func_0x00010c296740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuStack_1d0;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_106cd3458;
    puStack_168 = &UNK_1109747c0;
    ppuStack_1d8 = ppuVar20;
    _objc_retain(ppuStack_1d0);
    ppuVar20 = ppuStack_1d8;
    ppuStack_160 = ppuVar1;
    _objc_retain(ppuStack_1d8);
    ppuStack_158 = ppuVar20;
    ppuStack_150 = param_1;
    _objc_retain(param_4);
    ppuVar20 = ppuStack_1c8;
    ppuStack_148 = param_4;
    _objc_retain(ppuStack_1c8);
    puStack_138 = &uStack_130;
    ppuStack_140 = ppuVar20;
    func_0x00010bf97e80(param_3);
    lVar2 = puStack_128[5];
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = puStack_128[5];
      func_0x00010bf51e00(uVar3);
      func_0x00010befa120(ppuVar7);
      _objc_release(uVar3);
    }
    ppuVar20 = ppuStack_1c8;
    func_0x00010bf529e0();
    if (ppuVar20 == (undefined **)0x0) {
      unaff_x28 = (undefined **)0x0;
    }
    else {
      ppuVar20 = param_1;
      func_0x00010be94860();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c06eae0(param_1[0x17]);
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_80 = puVar9;
      func_0x00010c06eae0(param_1[0x17]);
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = ppuVar20;
      func_0x00010c246cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(ppuVar20);
    }
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(ppuVar7);
    ppuVar20 = ppuVar7;
    func_0x00010bf52a60();
    unaff_x26 = 0;
    if (ppuVar20 != (undefined **)0x0) {
      lVar2 = *plStack_1b0;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if (*plStack_1b0 != lVar2) {
            _objc_enumerationMutation(ppuVar7);
          }
          lVar5 = *(long *)(lStack_1b8 + (long)unaff_x24 * 8);
          func_0x00010bf529e0();
          unaff_x26 = lVar5 + unaff_x26;
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar20 != unaff_x24);
        ppuVar20 = ppuVar7;
        func_0x00010bf52a60();
      } while (ppuVar20 != (undefined **)0x0);
    }
    unaff_x27 = (undefined **)0x0;
    _objc_release(ppuVar7);
    func_0x00010bfb06a0(PTR_PTR_1126b24e0);
    unaff_x23 = param_1;
    func_0x00010be94840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x23;
    (**(code **)(param_5 + 0x10))(param_5,unaff_x28);
    _objc_release(unaff_x23);
    _objc_release(unaff_x28);
    _objc_release(ppuStack_140);
    _objc_release(ppuStack_148);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_1d8);
    _objc_release(ppuStack_1d0);
    _objc_release(ppuStack_1c8);
    _objc_release(ppuStack_1e0);
    _objc_release(ppuVar7);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar19 = (undefined **)0x8;
  __Block_object_dispose(&uStack_130);
  ppuVar20 = param_3;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106cd3458;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_240 = unaff_x28;
  ppuStack_238 = unaff_x27;
  lStack_230 = unaff_x26;
  ppuStack_228 = param_1;
  ppuStack_220 = unaff_x24;
  ppuStack_218 = unaff_x23;
  ppuStack_210 = ppuVar7;
  lStack_208 = param_5;
  ppuStack_200 = param_4;
  ppuStack_1f8 = param_3;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar19);
  ppuVar22 = (undefined **)ppuVar20[4];
  ppuVar24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  ppuVar21 = ppuVar7;
  if (((ulong)ppuVar22 & 1) == 0) {
    ppuVar23 = (undefined **)ppuVar20[5];
    unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar23;
    ppuVar14 = unaff_x24;
    func_0x00010bf4b900();
    if (((ulong)ppuVar6 & 1) != 0) goto LAB_106cd34fc;
    _objc_release(unaff_x24);
LAB_106cd37d4:
    _objc_release(ppuVar7);
  }
  else {
LAB_106cd34fc:
    ppuVar23 = *(undefined ***)(ppuVar20[6] + 0x38);
    ppuVar24 = ppuVar19;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar24;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar24);
    if (((ulong)ppuVar22 & 1) == 0) {
      _objc_release(unaff_x24);
    }
    _objc_release(ppuVar7);
    if (ppuVar23 == (undefined **)0x0) {
      ppuVar7 = (undefined **)ppuVar20[7];
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed9460(ppuVar20[6]);
      uVar3 = *(undefined8 *)(ppuVar20[6] + 0x38);
      ppuVar1 = ppuVar19;
      func_0x00010c241220(ppuVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(ppuVar1);
      uVar3 = *(undefined8 *)(ppuVar20[6] + 0x20);
      ppuVar1 = ppuVar19;
      func_0x00010c241220(ppuVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(ppuVar1);
      lVar2 = *(long *)(ppuVar20[6] + 0x28);
      ppuVar1 = ppuVar7;
      func_0x00010bf97200(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar1);
      if (lVar2 == 0) {
        ppuVar1 = ppuVar19;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_250 = ppuVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = *(undefined ***)(ppuVar20[6] + 0x28);
        ppuVar23 = ppuVar7;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(unaff_x24);
        _objc_release(ppuVar23);
        _objc_release(puVar9);
      }
      else {
        ppuVar22 = *(undefined ***)(ppuVar20[6] + 0x28);
        ppuVar1 = ppuVar7;
        func_0x00010bf97200(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppuVar19;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = ppuVar22;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = *(undefined ***)(ppuVar20[6] + 0x28);
        unaff_x27 = ppuVar7;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar24);
        _objc_release(unaff_x27);
        _objc_release(ppuVar23);
        _objc_release(unaff_x24);
        _objc_release(ppuVar22);
      }
      _objc_release(ppuVar1);
      ppuVar21 = (undefined **)ppuVar20[8];
      ppuVar22 = ppuVar19;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar22;
      func_0x00010bf4b900();
      _objc_release(ppuVar22);
      ppuVar1 = ppuVar7;
      if (((ulong)ppuVar21 & 1) == 0) {
        ppuVar20 = *(undefined ***)(*(long *)(ppuVar20[9] + 8) + 0x28);
        ppuVar21 = ppuVar19;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar21;
        func_0x00010befa120(ppuVar20);
        _objc_release(ppuVar21);
      }
      goto LAB_106cd37d4;
    }
  }
  ppuVar7 = ppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_106cd381c;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2b0 = unaff_x28;
  ppuStack_2a8 = unaff_x27;
  ppuStack_2a0 = ppuVar24;
  ppuStack_298 = ppuVar23;
  ppuStack_290 = unaff_x24;
  ppuStack_288 = ppuVar22;
  ppuStack_280 = ppuVar21;
  ppuStack_278 = ppuVar1;
  ppuStack_270 = ppuVar20;
  ppuStack_268 = ppuVar19;
  ppuStack_260 = &puStack_1f0;
  _objc_retain(ppuVar14);
  puStack_308 = &uStack_310;
  uStack_310 = 0;
  uStack_300 = 0x3032000000;
  pcStack_2f8 = FUN_106cd1a7c;
  uStack_2f0 = 0x106cd1a8c;
  puVar9 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_2e8 = puVar9;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = ppuVar7[4];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c06eae0(ppuVar7[0x17]);
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_2d0 = puVar9;
  func_0x00010c06eae0(ppuVar7[0x17]);
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2c8 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246bc0(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar9);
  func_0x00010bf97e80(puVar10);
  lVar2 = puStack_308[5];
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = puStack_308[5];
    func_0x00010bf09f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar3);
  }
  ppuVar20 = ppuVar7;
  func_0x00010be94860();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar20;
  func_0x00010c0d3c80();
  _objc_release(ppuVar20);
  ppuVar20 = ppuVar1;
  func_0x00010bf529e0();
  puVar11 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  if (ppuVar20 != (undefined **)0x0) {
    func_0x00010c06eae0(ppuVar7[0x17]);
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_2e0 = puVar11;
    func_0x00010c06eae0(ppuVar7[0x17]);
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2d8 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(ppuVar1);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  if (ppuVar14 != (undefined **)0x0) {
    func_0x00010be94840();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar14[2])(ppuVar14,ppuVar1,ppuVar7);
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_310,8);
  _objc_release(puStack_2e8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = 8;
  __Block_object_dispose(&uStack_310,8);
  __Unwind_Resume();
  _objc_retain(uVar3);
  lVar2 = *(long *)(ppuVar14[4] + 0xb8);
  func_0x00010c242660();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar5 = lVar2, func_0x00010bf99aa0(), (int)lVar5 == 0)) goto LAB_106cd3d60;
  puVar9 = ppuVar14[5];
  uVar15 = uVar3;
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar15);
  if (((ulong)puVar9 & 1) != 0) goto LAB_106cd3d60;
  uVar16 = *(ulong *)(ppuVar14[4] + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c07e5c0();
  if ((uVar17 & 1) == 0) {
    _objc_release(uVar16);
LAB_106cd3d28:
    ppuVar14 = (undefined **)(*(long *)(ppuVar14[7] + 8) + 0x28);
  }
  else {
    uVar18 = *(undefined8 *)(ppuVar14[4] + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010bf1f3c0();
    _objc_release(uVar18);
    _objc_release(uVar16);
    if ((int)uVar15 == 0) goto LAB_106cd3d28;
    puVar9 = ppuVar14[5];
    uVar15 = uVar3;
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar9);
    _objc_release(uVar15);
    ppuVar14 = ppuVar14 + 6;
  }
  puVar9 = *ppuVar14;
  uVar15 = uVar3;
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar9);
  _objc_release(uVar15);
LAB_106cd3d60:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106cd3458; end: 106cd381b;  */

void FUN_106cd3458(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *unaff_x24;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar13 = *(ulong *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if ((uVar13 & 1) == 0) {
    uVar14 = *(ulong *)(param_1 + 0x28);
    unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x24;
    func_0x00010bf4b900();
    if ((uVar14 & 1) != 0) goto LAB_106cd34fc;
    _objc_release(unaff_x24);
LAB_106cd37d4:
    _objc_release(puVar2);
  }
  else {
LAB_106cd34fc:
    lVar15 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    puVar1 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if ((uVar13 & 1) == 0) {
      _objc_release(unaff_x24);
    }
    _objc_release(puVar2);
    if (lVar15 == 0) {
      puVar2 = *(undefined **)(param_1 + 0x38);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed9460(*(undefined8 *)(param_1 + 0x30));
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38);
      puVar3 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(puVar3);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
      puVar3 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(puVar3);
      lVar15 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
      puVar3 = puVar2;
      func_0x00010bf97200(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (lVar15 == 0) {
        puVar3 = param_2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
        puVar4 = puVar2;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar11);
        _objc_release(puVar4);
        _objc_release(puVar1);
      }
      else {
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
        puVar3 = puVar2;
        func_0x00010bf97200(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
        puVar4 = puVar2;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar16);
        _objc_release(puVar4);
        _objc_release(uVar11);
        _objc_release(puVar1);
        _objc_release(uVar12);
      }
      _objc_release(puVar3);
      uVar13 = *(ulong *)(param_1 + 0x40);
      puVar1 = param_2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf4b900();
      _objc_release(puVar1);
      if ((uVar13 & 1) == 0) {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
        puVar1 = param_2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010befa120(uVar11);
        _objc_release(puVar1);
      }
      goto LAB_106cd37d4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_106cd1a7c;
  uStack_110 = 0x106cd1a8c;
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_108 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010c0d3c80();
  _objc_release(uVar12);
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c06eae0(*(undefined8 *)(param_2 + 0xb8));
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_f0 = puVar2;
  func_0x00010c06eae0(*(undefined8 *)(param_2 + 0xb8));
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246bc0(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar2);
  func_0x00010bf97e80(uVar11);
  lVar9 = puStack_128[5];
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    uVar12 = puStack_128[5];
    func_0x00010bf09f00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(uVar12);
  }
  puVar5 = param_2;
  func_0x00010be94860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  puVar7 = puVar6;
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c06eae0(*(undefined8 *)(param_2 + 0xb8));
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_100 = puVar5;
    func_0x00010c06eae0(*(undefined8 *)(param_2 + 0xb8));
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  if (puVar3 != (undefined *)0x0) {
    func_0x00010be94840();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar3 + 0x10))(puVar3,puVar6,param_2);
    _objc_release(param_2);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = 8;
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  _objc_retain(uVar11);
  lVar9 = *(long *)(*(long *)(puVar3 + 0x20) + 0xb8);
  func_0x00010c242660();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar9 != 0) && (lVar15 = lVar9, func_0x00010bf99aa0(), (int)lVar15 == 0)) goto LAB_106cd3d60;
  uVar13 = *(ulong *)(puVar3 + 0x28);
  uVar12 = uVar11;
  func_0x00010c241220(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar12);
  if ((uVar13 & 1) != 0) goto LAB_106cd3d60;
  uVar14 = *(ulong *)(*(long *)(puVar3 + 0x20) + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010c07e5c0();
  if ((uVar13 & 1) == 0) {
    _objc_release(uVar14);
LAB_106cd3d28:
    puVar10 = (undefined8 *)(*(long *)(*(long *)(puVar3 + 0x38) + 8) + 0x28);
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(puVar3 + 0x20) + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar16;
    func_0x00010bf1f3c0();
    _objc_release(uVar16);
    _objc_release(uVar14);
    if ((int)uVar12 == 0) goto LAB_106cd3d28;
    uVar16 = *(undefined8 *)(puVar3 + 0x28);
    uVar12 = uVar11;
    func_0x00010c241220(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar16);
    _objc_release(uVar12);
    puVar10 = (undefined8 *)(puVar3 + 0x30);
  }
  uVar16 = *puVar10;
  uVar12 = uVar11;
  func_0x00010c241220(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar16);
  _objc_release(uVar12);
LAB_106cd3d60:
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 106cd381c; end: 106cd3c0f; -[SCGalleryMomentClusterer _reClustersWithCompletion:] */

void FUN_106cd381c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106cd1a7c;
  uStack_a0 = 0x106cd1a8c;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_98 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c06eae0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_80 = puVar1;
  func_0x00010c06eae0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246bc0(uVar12);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar1);
  func_0x00010bf97e80(uVar12);
  lVar6 = puStack_b8[5];
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    uVar3 = puStack_b8[5];
    func_0x00010bf09f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar3);
  }
  lVar6 = param_1;
  func_0x00010be94860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0d3c80();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  if (lVar6 != 0) {
    func_0x00010c06eae0(*(undefined8 *)(param_1 + 0xb8));
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_90 = puVar5;
    func_0x00010c06eae0(*(undefined8 *)(param_1 + 0xb8));
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(lVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  if (param_3 != 0) {
    func_0x00010be94840();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar7,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar7);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(puStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = 8;
  __Block_object_dispose(&uStack_c0,8);
  __Unwind_Resume();
  _objc_retain(uVar12);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xb8);
  func_0x00010c242660();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) && (lVar7 = lVar6, func_0x00010bf99aa0(), (int)lVar7 == 0)) goto LAB_106cd3d60;
  uVar14 = *(ulong *)(param_3 + 0x28);
  uVar3 = uVar12;
  func_0x00010c241220(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar14 & 1) != 0) goto LAB_106cd3d60;
  uVar10 = *(ulong *)(*(long *)(param_3 + 0x20) + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010c07e5c0();
  if ((uVar14 & 1) == 0) {
    _objc_release(uVar10);
LAB_106cd3d28:
    puVar13 = (undefined8 *)(*(long *)(*(long *)(param_3 + 0x38) + 8) + 0x28);
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf1f3c0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    if ((int)uVar3 == 0) goto LAB_106cd3d28;
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    uVar3 = uVar12;
    func_0x00010c241220(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11);
    _objc_release(uVar3);
    puVar13 = (undefined8 *)(param_3 + 0x30);
  }
  uVar11 = *puVar13;
  uVar3 = uVar12;
  func_0x00010c241220(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar11);
  _objc_release(uVar3);
LAB_106cd3d60:
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 106cd3c10; end: 106cd3d7f;  */

void FUN_106cd3c10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c242660();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf99aa0(), (int)lVar2 == 0)) goto LAB_106cd3d60;
  uVar7 = *(ulong *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar7 & 1) != 0) goto LAB_106cd3d60;
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c07e5c0();
  if ((uVar7 & 1) == 0) {
    _objc_release(uVar4);
LAB_106cd3d28:
    puVar6 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar3 == 0) goto LAB_106cd3d28;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(uVar3);
    puVar6 = (undefined8 *)(param_1 + 0x30);
  }
  uVar5 = *puVar6;
  uVar3 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5);
  _objc_release(uVar3);
LAB_106cd3d60:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cd3d80; end: 106cd3ed7; -[SCGalleryMomentClusterer _filterLockedSnaps:] */

void FUN_106cd3d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  uVar4 = param_3;
  if ((int)uVar3 == 0) {
    _objc_release(uVar2);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb0);
    _objc_release(uVar2);
    if ((bVar1 & 1) == 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x106cd3e50;
      puStack_40 = &UNK_1108bbf88;
      lStack_38 = param_1;
      func_0x00010c14cca0(param_3,param_2,&puStack_58);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106cd3e30;
    }
  }
  _objc_retain(param_3);
LAB_106cd3e30:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106cd3ed8; end: 106cd40c3; -[SCGalleryMomentClusterer _resolveAndFilterLockedSnapIds:] */

void FUN_106cd3ed8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f3c0();
  if ((int)uVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)(*(byte *)(param_1 + 0xb0) ^ 1);
  }
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x23 != 0) {
          if ((uVar11 & 1) != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x90);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = uVar4;
            func_0x00010c11eb40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            unaff_x24 = unaff_x25;
            func_0x00010c252440();
            _objc_release(unaff_x25);
            if ((int)unaff_x24 == 3) goto LAB_106cd4044;
          }
          func_0x00010befa120(puVar2);
        }
LAB_106cd4044:
        _objc_release(unaff_x23);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_250;
    pcStack_138 = FUN_106cd40c4;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_180 = uVar11;
    uStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    lStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    puStack_158 = puVar2;
    lStack_150 = param_1;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar7);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(puVar7);
    puVar5 = (undefined *)puVar7;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar12 = *plStack_240;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar12) {
            _objc_enumerationMutation(puVar7);
          }
          lVar13 = lVar3;
          func_0x00010be94860();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010bf529e0();
          if (lVar6 != 0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar13);
          puVar10 = puVar10 + 1;
        } while (puVar5 != puVar10);
        puVar5 = (undefined *)puVar7;
        puVar9 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(puVar9);
      lVar12 = *(long *)((long)puVar7 + 0x28);
      puVar8 = (undefined1 *)puVar9;
      func_0x00010bf97200(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar12;
      func_0x000100504554();
      _objc_release(lVar12);
      _objc_release(puVar8);
      lVar12 = lVar3;
      func_0x00010bf529e0();
      lVar13 = lVar3;
      if (lVar12 == 0) {
        lVar12 = *(long *)((long)puVar7 + 0x58);
        func_0x00010c269d40(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar12);
      }
      func_0x00010be161a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(puVar9);
      puVar2 = (undefined *)puVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cd40c4; end: 106cd4227; -[SCGalleryMomentClusterer _resolveAndFilterLockedClusterSnapIds:] */

void FUN_106cd40c4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = param_1;
        func_0x00010be94860();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf529e0();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar6);
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar2 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    lVar6 = *(long *)(param_3 + 0x28);
    puVar4 = (undefined1 *)puVar5;
    func_0x00010bf97200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x000100504554();
    _objc_release(lVar6);
    _objc_release(puVar4);
    lVar6 = lVar7;
    func_0x00010bf529e0();
    lVar3 = lVar7;
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 0x58);
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    func_0x00010be161a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar5);
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cd4228; end: 106cd4357; -[SCGalleryMomentClusterer _fetchSnapsForEntry:] */

void FUN_106cd4228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x000100504554();
  _objc_release(lVar4);
  _objc_release(uVar1);
  lVar4 = lVar2;
  func_0x00010bf529e0();
  lVar3 = lVar2;
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  func_0x00010be161a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cd4358; end: 106cd4367;  */

void FUN_106cd4358(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106cd4368; end: 106cd43f3; -[SCGalleryMomentClusterer _logFirstClusterWithDuration:] */

void FUN_106cd4368(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c245b40(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cd43f4; end: 106cd44cb; -[SCGalleryMomentClusterer _logClusterCount:duration:] */

void FUN_106cd43f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c245a40(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cd44cc; end: 106cd454f; -[SCGalleryMomentClusterer _logSnapsPerCluster:] */

void FUN_106cd44cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c245c00(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cd4550; end: 106cd4557; -[SCGalleryMomentClusterer option] */

undefined8 FUN_106cd4550(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106cd4558; end: 106cd4653; -[SCGalleryMomentClusterer .cxx_destruct] */

void FUN_106cd4558(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cd4654; end: 106cd50ab; -[SCGallerySnapsTabController _initWithContainerViewController:configuration:delegate:tabType:gridTabsService:crashServices:grapheneRegistry:memoriesScopeDelegate:inlineSearchDataSource:pickerActionHandler:snapsTabSectionPluginsFuture:snapsTabBannerPluginsFuture:snapsTabCRSectionPluginFuture:memoriesSelectionFooterBarController:circumstanceEngine:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusOpenSubscriptionManagementServices:memoriesUserDefaultsManager:] */

undefined8 *
FUN_106cd4654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_80 = PTR_PTR_1126f6710;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be787a0(puVar1);
    _CACurrentMediaTime();
    puVar1[0x42] = param_1;
    puVar1[0x43] = 0xbff0000000000000;
    puVar1[0x44] = 0xbff0000000000000;
    puVar1[0xe] = 0x7fffffffffffffff;
    _objc_retain(param_22);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_22;
    _objc_release(uVar2);
    puVar1[0x4f] = param_7;
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x4e,param_6);
    _objc_retain(param_8);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_8;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2400c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x32];
    puVar1[0x32] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c92e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 0x30,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d2118;
    _objc_alloc();
    func_0x00010c04a240();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x48) = 0;
    *(bool *)(puVar1 + 0x4b) = puVar1[0x4f] == 3;
    func_0x00010be177a0(puVar1);
    _objc_storeWeak(puVar1 + 2,param_11);
    _objc_storeWeak(puVar1 + 0x1e,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_13;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2400c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x32];
    puVar1[0x32] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c92e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 0x30,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c9320();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x31];
    puVar1[0x31] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240020();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x34];
    puVar1[0x34] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23ffe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x33];
    puVar1[0x33] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x35];
    puVar1[0x35] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x36];
    puVar1[0x36] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_18;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x3e,param_19);
    _objc_retain(param_20);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_20;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x40,param_21);
    *(undefined1 *)(puVar1 + 0x2d) = 0;
    uVar2 = param_18;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x169) = (char)uVar2;
    puVar5 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106cd50ac;
    puStack_98 = &UNK_1108429c8;
    _objc_retain(param_18);
    uStack_90 = param_18;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x46];
    puVar1[0x46] = puVar5;
    _objc_release(uVar2);
    uVar2 = param_18;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x259) = (char)uVar2;
    uVar9 = puVar1[0x21];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x4c];
    puVar1[0x4c] = uVar3;
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar9);
    puVar5 = PTR_PTR_1126d2120;
    _objc_alloc_init();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b8,puVar1);
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x106cd511c;
    puStack_c8 = &UNK_1108434e0;
    puVar6 = auStack_c0;
    _objc_copyWeak(puVar6,auStack_b8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_14);
    _objc_release(puVar6);
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x106cd5170;
    puStack_f0 = &UNK_110974840;
    puVar6 = auStack_e8;
    _objc_copyWeak(puVar6,auStack_b8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_16);
    _objc_release(puVar6);
    puVar6 = auStack_110;
    _objc_copyWeak(puVar6,auStack_b8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_15);
    _objc_release(puVar6);
    puVar7 = puVar1;
    func_0x00010c07b240();
    if ((int)puVar7 == 0) {
      uVar2 = param_5;
      func_0x00010c0fb480();
      if ((int)uVar2 == 0) {
        uVar2 = param_5;
        func_0x00010c299f60();
        if ((int)uVar2 == 0) {
          uVar2 = param_5;
          func_0x00010bf7f340();
          if ((int)uVar2 == 0) {
            uVar2 = param_8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bf8a840();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar3;
            func_0x00010bfbe800();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar10;
            func_0x00010c06bdc0();
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar3);
            _objc_release(uVar2);
            puVar4 = PTR_PTR_1126b22a0;
            if ((int)uVar8 == 0) {
              func_0x00010c263ca0(param_5);
              func_0x00010c0ec3e0(puVar4);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010c263ca0(param_5);
              func_0x00010c0ec400(puVar4);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            puVar4 = PTR_PTR_1126b22a0;
            func_0x00010c0ec360(PTR_PTR_1126b22a0);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          puVar4 = PTR_PTR_1126b22a0;
          func_0x00010c0ec3c0(PTR_PTR_1126b22a0);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar4 = PTR_PTR_1126b22a0;
        func_0x00010c0ec3a0(PTR_PTR_1126b22a0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar4 = PTR_PTR_1126b22a0;
      func_0x00010c0ec380(PTR_PTR_1126b22a0);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = puVar1[0x21];
    uVar3 = puVar1[0x22];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c0c8740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21c260();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x1f];
    puVar1[0x1f] = uVar3;
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = 0;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar5;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_17;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106cd50ac; end: 106cd521f;  */

void FUN_106cd50ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e836d8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 106cd5220; end: 106cd55df; -[SCGallerySnapsTabController initWithContainerViewController:configuration:delegate:tabType:gridTabsService:spectaclesServices:spectaclesContentStatusServices:spectaclesAppStatusServices:memoriesScopeDelegate:inlineSearchDataSource:pickerActionHandler:snapsTabSectionPluginsFuture:snapsTabBannerPluginsFuture:snapsTabCRSectionPluginFuture:heroPlayerController:memoriesSelectionFooterBarController:crashServices:grapheneRegistry:memoriesMashupStyleFeaturedStoriesGenerationWorkflow:circumstanceEngine:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusOpenSubscriptionManagementServices:memoriesUserDefaultsManager:] */

long FUN_106cd5220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  _objc_retain(param_21);
  uVar2 = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = param_21;
  _objc_retain(param_21);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010be3aba0();
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_retain(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar2);
  uVar2 = param_9;
  func_0x00010bf4d720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + 0x1d8,param_10);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  uVar2 = param_9;
  func_0x00010bf4d720(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064aa0(uVar3);
  _objc_release(param_10);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c0648a0(*(undefined8 *)(param_1 + 0x110));
  _objc_release(param_8);
  _objc_release(param_21);
  _objc_release(param_17);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 106cd55e0; end: 106cd5723; -[SCGallerySnapsTabController initWithContainerViewController:configuration:delegate:gridTabsService:tabType:memoriesScopeDelegate:inlineSearchDataSource:pickerActionHandler:] */

undefined8
FUN_106cd55e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3aba0(param_1,param_2,param_3,param_4,param_5,param_7,param_6,0,uVar2,param_8,
                      param_9,param_10,0,0,0,0,0,0,0,0,0);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106cd5724; end: 106cd582f; -[SCGallerySnapsTabController initWithContainerViewController:configuration:delegate:tabType:gridTabsService:] */

undefined8
FUN_106cd5724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3aba0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,uVar2,0,0,0,0,0,0,0,
                      0,0,0,0,0);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106cd5830; end: 106cd5917; -[SCGallerySnapsTabController shouldDisplay] */

uint FUN_106cd5830(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_1;
  func_0x00010c07b240();
  if ((int)lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfbd4e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c0c94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c07b280();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    uVar1 = (uint)uVar6 & (uint)uVar3;
  }
  return uVar1;
}



/* Entry: 106cd5918; end: 106cd5927; -[SCGallerySnapsTabController isPrivate] */

bool FUN_106cd5918(long param_1)

{
  return *(long *)(param_1 + 0x278) == 6;
}



/* Entry: 106cd5928; end: 106cd5937; -[SCGallerySnapsTabController isViewLoaded] */

bool FUN_106cd5928(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 106cd5938; end: 106cd5f03; -[SCGallerySnapsTabController loadViewIfNeeded] */

void FUN_106cd5938(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  func_0x00010c0834c0();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar26 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar26);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b44d8;
    _objc_alloc_init();
    func_0x00010c18b5e0();
    puVar4 = PTR_PTR_1126c3958;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c014040(puVar4,param_2,puVar3);
    uVar26 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar4;
    _objc_release(uVar26);
    func_0x00010c1acea0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1b6de0(*(undefined8 *)(param_1 + 0x28),param_2,1);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x28),param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c1f7e20(*(undefined8 *)(param_1 + 0x28),param_2,1);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + 0x28),param_2,0);
    func_0x00010c2026e0(*(undefined8 *)(param_1 + 0x28),param_2,0);
    func_0x00010c167a20(*(undefined8 *)(param_1 + 0x28),param_2,1);
    puVar4 = PTR_PTR_1126cfb88;
    _objc_alloc();
    func_0x00010c016d60();
    uVar26 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar4;
    _objc_release(uVar26);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x38),param_2,param_1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
    puVar5 = PTR_PTR_1126b6940;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b6948;
    _objc_opt_new(PTR_PTR_1126b6948);
    puVar4 = param_1 + 8;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c059900(puVar5,param_2,puVar6,puVar4,0);
    uVar26 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar5;
    _objc_release(uVar26);
    _objc_release(puVar4);
    _objc_release(puVar6);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0xb0),param_2,param_1);
    func_0x00010c1f7d40(*(undefined8 *)(param_1 + 0xb0),param_2,param_1);
    func_0x00010c064a80(*(undefined8 *)(param_1 + 0x110),param_2,param_1,
                        *(undefined8 *)(param_1 + 0xb0));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x28),param_2,0);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar7;
    func_0x00010bf493a0(uVar7,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = uVar26;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2793a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uStack_80 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c274200(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf493a0(uVar12,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = uVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1ff80(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010bf493a0(uVar14,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar16);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar26);
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010bde7cc0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1);
    func_0x00010c181f80(*(undefined8 *)(param_1 + 0x28));
    puVar4 = param_1;
    func_0x00010c07b240();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e836f8;
    if ((int)puVar4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e83718;
    }
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x28),param_2,ppuVar1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar4;
    _objc_release(uVar26);
    puVar4 = PTR_PTR_1126c3bb0;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar16 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar16;
    func_0x00010c0c9740();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar17;
    func_0x00010bf63f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff900(puVar4,param_2,uVar7,uVar26,uVar11);
    uVar7 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar4;
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar17);
    _objc_release(uVar26);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar16;
    func_0x00010c0c9fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar26;
    func_0x00010bf3f7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e020(*(undefined8 *)(param_1 + 0xe0),param_2,uVar11);
    _objc_release(uVar11);
    _objc_release(uVar26);
    _objc_release(uVar16);
    func_0x00010c2115c0(*(undefined8 *)(param_1 + 0xe0),param_2,3);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0xe0),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xe0),param_2,param_1);
    func_0x00010c1facc0(*(undefined8 *)(param_1 + 0xe0),param_2,param_1[0x26b]);
    func_0x00010c1b42a0(*(undefined8 *)(param_1 + 0x28),param_2,param_1[0x26b]);
    param_3 = (uint)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c17e6a0(*(undefined8 *)(param_1 + 0xb0));
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((byte)puVar3[0x269] == param_3) {
    return;
  }
  puVar3[0x269] = (char)param_3;
  puVar4 = puVar3;
  func_0x00010c07b240();
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  uVar18 = *(ulong *)(puVar3 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(puVar3 + 0x110);
  func_0x00010c248440(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211440();
  _objc_release(uVar26);
  if (puVar3[0x269] != '\x01') goto LAB_106cd610c;
  func_0x00010c265d60(*(undefined8 *)(puVar3 + 0xc0));
  uVar19 = uVar18;
  func_0x00010c08f680();
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(puVar3 + 0x18);
  func_0x00010c263840();
  if (iVar2 != 0) {
    uVar20 = *(ulong *)(puVar3 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bfbd540();
    if ((uVar23 & 1) == 0) {
      _objc_release(uVar22);
      _objc_release(uVar21);
    }
    else {
      uVar23 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar23;
      func_0x00010c22fc00();
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      if ((int)uVar24 == 0) goto LAB_106cd6088;
      puVar4 = puVar3 + 8;
      _objc_loadWeakRetained(puVar4);
      func_0x000108df9544();
      _objc_release(puVar4);
      uVar20 = uVar19;
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222f80();
    }
    _objc_release(uVar20);
  }
LAB_106cd6088:
  func_0x00010bebb080(puVar3);
  func_0x00010bed3e80(puVar3);
  if (*(long *)(puVar3 + 0x150) != 0) {
    lVar25 = *(long *)(puVar3 + 0xa0);
    func_0x00010c113c80();
    if (lVar25 == 10) {
      uVar16 = *(undefined8 *)(puVar3 + 0x108);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar16;
      func_0x00010bfbd160();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar26;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0d40();
      _objc_release(uVar11);
      _objc_release(uVar26);
      _objc_release(uVar16);
    }
  }
  _objc_release(uVar19);
LAB_106cd610c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 106cd5f04; end: 106cd6127; -[SCGallerySnapsTabController setFocused:] */

void FUN_106cd5f04(ulong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(byte *)(param_1 + 0x269) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x269) = (char)param_3;
  uVar2 = param_1;
  func_0x00010c07b240();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c248440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211440();
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x269) != '\x01') goto LAB_106cd610c;
  func_0x00010c265d60(*(undefined8 *)(param_1 + 0xc0));
  uVar4 = uVar2;
  func_0x00010c08f680();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c263840();
  if (iVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfbd540();
    if ((uVar8 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      uVar8 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c22fc00();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar9 == 0) goto LAB_106cd6088;
      lVar10 = param_1 + 8;
      _objc_loadWeakRetained(lVar10);
      func_0x000108df9544();
      _objc_release(lVar10);
      uVar5 = uVar4;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222f80();
    }
    _objc_release(uVar5);
  }
LAB_106cd6088:
  func_0x00010bebb080(param_1);
  func_0x00010bed3e80(param_1);
  if (*(long *)(param_1 + 0x150) != 0) {
    lVar10 = *(long *)(param_1 + 0xa0);
    func_0x00010c113c80();
    if (lVar10 == 10) {
      uVar11 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010bfbd160();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0d40();
      _objc_release(uVar12);
      _objc_release(uVar3);
      _objc_release(uVar11);
    }
  }
  _objc_release(uVar4);
LAB_106cd610c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cd6128; end: 106cd615f; -[SCGallerySnapsTabController tableIndexControllerDidStoppedDragging] */

void FUN_106cd6128(long param_1)

{
  if (*(long *)(param_1 + 0x130) != 0) {
    func_0x00010bddfde0();
    func_0x00010bdc5d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcb7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceClusterAppearingIfNeede_112550788)
    ;
    return;
  }
  return;
}



/* Entry: 106cd6160; end: 106cd62cb; -[SCGallerySnapsTabController _showSpectaclesUpdateOnboardingIfNeeded] */

void FUN_106cd6160(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0e8100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c234780();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar4,param_2,lVar6,1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c249320();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf24380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2492e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106cd62cc; end: 106cd62df; -[SCGallerySnapsTabController _updateBannerVisibilityIfNeeded] */

void FUN_106cd62cc(long param_1)

{
  if (*(char *)(param_1 + 0x169) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bed3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBannerVisibilityIfNeededW_112592958)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBannerVisibilityIfNeededL_112592950);
  return;
}



/* Entry: 106cd62e0; end: 106cd681f; -[SCGallerySnapsTabController _updateBannerVisibilityIfNeededLegacy] */

undefined * FUN_106cd62e0(double param_1,undefined *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar16;
  undefined *unaff_x22;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  double dVar19;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined **)(param_2 + 0x150);
  if ((puVar3 != (undefined *)0x0) && (*(long *)(param_2 + 0xa0) == 0)) {
    func_0x00010c1a7f60(puVar3,param_3,1);
  }
  if ((*(long *)(param_2 + 0x20) != 0) && (*(long *)(param_2 + 0xa0) != 0)) {
    unaff_x22 = param_2;
    func_0x00010beb5e00();
    uVar15 = (uint)unaff_x22 ^ 1;
    unaff_x21 = (undefined *)(ulong)uVar15;
    param_2[0x168] = (char)uVar15;
    puVar3 = *(undefined **)(param_2 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar3;
    func_0x00010c245a00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x24;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x25;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(puVar3);
    unaff_x23 = *(undefined **)(param_2 + 0xa0);
    _objc_retain(unaff_x20);
    _objc_retain(unaff_x23);
    if (unaff_x20 == unaff_x23) {
      _objc_release(unaff_x23);
      _objc_release(unaff_x20);
LAB_106cd6404:
      unaff_x23 = *(undefined **)(param_2 + 0x108);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c245a00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      if (unaff_x25 == (undefined *)0x0) goto LAB_106cd6478;
      puVar3 = param_2;
      func_0x00010be44360();
      if ((int)puVar3 != 0) {
        func_0x00010bedbc20(param_2);
      }
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + 0x150),param_3,unaff_x21);
    }
    else {
      if (unaff_x23 == (undefined *)0x0) {
        _objc_release();
      }
      else {
        unaff_x24 = unaff_x20;
        func_0x00010c071ae0(unaff_x20,param_3,unaff_x23);
        _objc_release(unaff_x23);
        _objc_release(unaff_x20);
        if ((int)unaff_x24 != 0) goto LAB_106cd6404;
      }
LAB_106cd6478:
      if ((uint)unaff_x22 != 0) {
        puVar3 = *(undefined **)(param_2 + 0xa0);
        _objc_retain(unaff_x20);
        _objc_retain(puVar3);
        puVar5 = unaff_x20;
        if (unaff_x20 == puVar3) {
LAB_106cd654c:
          _objc_release(puVar3);
          _objc_release(puVar5);
        }
        else if (puVar3 == (undefined *)0x0) {
          _objc_release();
LAB_106cd64d0:
          lVar8 = *(long *)(param_2 + 0x108);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar8;
          func_0x00010c245a00();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar12;
          func_0x00010c150520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar12);
          _objc_release(lVar8);
          if (lVar4 != 0) {
            puVar5 = *(undefined **)(param_2 + 0x108);
            func_0x00010c269d40(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar5;
            func_0x00010c245a00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12e1c0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            goto LAB_106cd654c;
          }
        }
        else {
          func_0x00010c071ae0(unaff_x20,param_3,puVar3);
          _objc_release(puVar3);
          _objc_release(unaff_x20);
          if (((ulong)puVar5 & 1) == 0) goto LAB_106cd64d0;
        }
        puVar3 = PTR_PTR_1126b0870;
        _objc_alloc();
        func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x20));
        func_0x00010c013de0();
        func_0x00010befbb60(*(undefined8 *)(param_2 + 0x20),param_3,puVar3);
        uVar17 = *(undefined8 *)(param_2 + 0x150);
        *(undefined **)(param_2 + 0x150) = puVar3;
        _objc_retain(puVar3);
        _objc_release(uVar17);
        puVar5 = puVar3;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf1ff80(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
        func_0x00010bf493a0(puVar5,param_3,uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_2 + 0x158);
        *(undefined **)(param_2 + 0x158) = puVar16;
        _objc_release(uVar14);
        _objc_release(uVar17);
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf1ff80(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
        func_0x00010bf493a0(puVar5,param_3,uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_2 + 0x160);
        *(undefined **)(param_2 + 0x160) = puVar16;
        _objc_release(uVar14);
        _objc_release(uVar17);
        _objc_release(puVar5);
        param_2[0x168] = 0;
        func_0x00010c219b60(puVar3,param_3,0);
        uStack_80 = *(undefined8 *)(param_2 + 0x158);
        puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar5 = puVar3;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = *(undefined **)(param_2 + 0x20);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = puVar5;
        func_0x00010bf493a0(puVar5,param_3,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar3;
        puStack_78 = unaff_x25;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x26;
        func_0x00010bf493a0(unaff_x26,param_3,unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = unaff_x28;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_80,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puStack_88,param_3,unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x23);
        _objc_release(puVar5);
        unaff_x22 = PTR_PTR_1126d2128;
        _objc_alloc();
        func_0x00010c057580();
        func_0x00010c18b5e0();
        param_2 = *(undefined **)(param_2 + 0x108);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        unaff_x21 = param_2;
        func_0x00010c245a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620();
        _objc_release(unaff_x21);
        _objc_release(param_2);
        _objc_release(unaff_x22);
      }
    }
    puVar3 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106cd6820;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined **)(puVar3 + 0x150);
  puStack_f0 = unaff_x28;
  uStack_e8 = unaff_x27;
  puStack_e0 = unaff_x26;
  puStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  puStack_c8 = unaff_x23;
  puStack_c0 = unaff_x22;
  puStack_b8 = unaff_x21;
  puStack_b0 = unaff_x20;
  puStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((puVar5 != (undefined *)0x0) && (*(long *)(puVar3 + 0xa0) == 0)) {
    func_0x00010c1a7f60(puVar5,param_3,1);
  }
  if ((*(long *)(puVar3 + 0x20) == 0) || (*(long *)(puVar3 + 0xa0) == 0)) goto LAB_106cd6de0;
  puVar16 = puVar3;
  func_0x00010beb5e00();
  puVar6 = *(undefined **)(puVar3 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar6;
  func_0x00010c245a00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar18;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar18);
  _objc_release(puVar6);
  puVar18 = *(undefined **)(puVar3 + 0xa0);
  _objc_retain(puVar5);
  _objc_retain(puVar18);
  if (puVar5 == puVar18) {
    _objc_release(puVar18);
    _objc_release(puVar5);
LAB_106cd6940:
    lVar8 = *(long *)(puVar3 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010c245a00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar4 != 0;
    _objc_release();
    _objc_release(lVar12);
    _objc_release(lVar8);
    if (((ulong)puVar16 & 1) == 0) {
      if (lVar4 != 0) {
        uVar17 = 1;
        uVar15 = 1;
        goto LAB_106cd6a68;
      }
    }
    else {
LAB_106cd69b0:
      puVar16 = puVar3;
      func_0x00010be44360();
      if ((int)puVar16 == 0) {
        uVar15 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(puVar3 + 0x260);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar14;
        func_0x00010bf1f3c0();
        if ((int)uVar17 == 0) {
          uVar15 = 0;
        }
        else {
          func_0x00010c151ea0(puVar3);
          if (param_1 <= 0.0) {
            param_1 = 0.0;
          }
          uVar15 = (uint)(20.0 < param_1);
        }
        _objc_release(uVar14);
        puVar16 = puVar3;
        func_0x00010be3e560();
        uVar15 = (uint)puVar16 | uVar15;
      }
      if (bVar2) {
        uVar17 = 0;
LAB_106cd6a68:
        puVar16 = puVar3;
        func_0x00010be44360();
        if ((int)puVar16 != 0) {
          func_0x00010bea5b80(puVar3,param_3,uVar15 & 1);
        }
        func_0x00010c1a7f60(*(undefined8 *)(puVar3 + 0x150),param_3,uVar17);
      }
      else {
        puVar16 = *(undefined **)(puVar3 + 0xa0);
        _objc_retain(puVar5);
        _objc_retain(puVar16);
        puVar18 = puVar5;
        if (puVar5 == puVar16) {
LAB_106cd6b18:
          _objc_release(puVar16);
          _objc_release(puVar18);
        }
        else if (puVar16 == (undefined *)0x0) {
          _objc_release();
LAB_106cd6a9c:
          lVar8 = *(long *)(puVar3 + 0x108);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar8;
          func_0x00010c245a00();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar12;
          func_0x00010c150520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar12);
          _objc_release(lVar8);
          if (lVar4 != 0) {
            puVar18 = *(undefined **)(puVar3 + 0x108);
            func_0x00010c269d40(puVar18);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar18;
            func_0x00010c245a00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12e1c0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            goto LAB_106cd6b18;
          }
        }
        else {
          func_0x00010c071ae0(puVar5,param_3,puVar16);
          _objc_release(puVar16);
          _objc_release(puVar5);
          if (((ulong)puVar18 & 1) == 0) goto LAB_106cd6a9c;
        }
        puVar16 = PTR_PTR_1126b0870;
        _objc_alloc();
        func_0x00010bfb68e0(*(undefined8 *)(puVar3 + 0x20));
        func_0x00010c013de0();
        func_0x00010befbb60(*(undefined8 *)(puVar3 + 0x20),param_3,puVar16);
        uVar17 = *(undefined8 *)(puVar3 + 0x150);
        *(undefined **)(puVar3 + 0x150) = puVar16;
        _objc_retain(puVar16);
        _objc_release(uVar17);
        puVar18 = puVar16;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(puVar3 + 0x20);
        func_0x00010bf1ff80(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        func_0x00010bf493a0(puVar18,param_3,uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(puVar3 + 0x158);
        *(undefined **)(puVar3 + 0x158) = puVar7;
        _objc_release(uVar14);
        _objc_release(uVar17);
        _objc_release(puVar18);
        puVar18 = puVar16;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(puVar3 + 0x20);
        func_0x00010bf1ff80(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        func_0x00010bf493a0(puVar18,param_3,uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(puVar3 + 0x160);
        *(undefined **)(puVar3 + 0x160) = puVar7;
        _objc_release(uVar14);
        _objc_release(uVar17);
        _objc_release(puVar18);
        bVar2 = (uVar15 & 1) == 0;
        param_1 = 0.0;
        if (bVar2) {
          param_1 = 1.0;
        }
        lVar12 = 0x160;
        if (bVar2) {
          lVar12 = 0x158;
        }
        func_0x00010c1677c0(puVar16);
        func_0x00010c219b60(puVar16,param_3,0);
        puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar17 = *(undefined8 *)(puVar3 + lVar12);
        uStack_110 = uVar17;
        _objc_retain();
        puVar7 = puVar16;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(puVar3 + 0x20);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010bf493a0(puVar7,param_3,uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar16;
        puStack_108 = puVar6;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(puVar3 + 0x20);
        func_0x00010c2793a0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf493a0(puVar9,param_3,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar10;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_110,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar18,param_3,puVar11);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(uVar13);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(uVar14);
        _objc_release(puVar7);
        puVar18 = PTR_PTR_1126d2128;
        _objc_alloc();
        func_0x00010c057580();
        func_0x00010c18b5e0();
        uVar14 = *(undefined8 *)(puVar3 + 0x108);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        uVar17 = uVar14;
        func_0x00010c245a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620();
        _objc_release(uVar17);
        _objc_release(uVar14);
        _objc_release(puVar18);
        _objc_release(puVar16);
      }
    }
  }
  else if (puVar18 == (undefined *)0x0) {
    _objc_release();
    if (((ulong)puVar16 & 1) != 0) {
LAB_106cd69ac:
      bVar2 = false;
      goto LAB_106cd69b0;
    }
  }
  else {
    puVar7 = puVar5;
    func_0x00010c071ae0(puVar5,param_3,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar5);
    if ((int)puVar7 != 0) goto LAB_106cd6940;
    if ((int)puVar16 != 0) goto LAB_106cd69ac;
  }
  _objc_release();
LAB_106cd6de0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar5;
  }
  ___stack_chk_fail();
  uVar14 = *(undefined8 *)(puVar5 + 0xa0);
  func_0x00010c27ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010c12d640();
  _objc_release(uVar14);
  if ((int)uVar17 == 0) {
    puVar3 = (undefined *)0x1;
  }
  else {
    puVar16 = puVar5;
    func_0x00010bf00280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010bf529e0();
    puVar3 = (undefined *)(ulong)(puVar3 != (undefined *)0x0);
    _objc_release(puVar16);
  }
  lVar12 = *(long *)(puVar5 + 0xa0);
  func_0x00010c113c80();
  if ((lVar12 == 10) || (puVar16 = puVar5, func_0x00010be44360(), (int)puVar16 != 0)) {
    cVar1 = puVar5[0x26b];
    puVar16 = puVar5 + 0x1d8;
    _objc_loadWeakRetained();
    puVar18 = puVar16;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c0debe0();
    uVar15 = 0;
    if (cVar1 == '\0' && (long)puVar6 < 1) {
      uVar15 = (uint)puVar3;
    }
    puVar3 = (undefined *)(ulong)uVar15;
    _objc_release(puVar7);
    _objc_release(puVar18);
    _objc_release(puVar16);
  }
  lVar12 = *(long *)(puVar5 + 0xa0);
  func_0x00010c113c80();
  if (lVar12 != 2) {
    lVar12 = *(long *)(puVar5 + 0xa0);
    func_0x00010c113c80();
    if (lVar12 != 0) {
      lVar12 = *(long *)(puVar5 + 0xa0);
      func_0x00010c113c80();
      if (lVar12 != 3) {
        lVar12 = *(long *)(puVar5 + 0xa0);
        func_0x00010c113c80();
        if (lVar12 != 4) {
          lVar12 = *(long *)(puVar5 + 0xa0);
          func_0x00010c113c80();
          if (lVar12 != 1) {
            return puVar3;
          }
        }
      }
    }
  }
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar14 = *(undefined8 *)(puVar5 + 0x1d0);
  dVar19 = param_1;
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088920();
  uVar13 = *(undefined8 *)(puVar5 + 0x230);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar13;
  func_0x00010c067ec0();
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(puVar16);
  uVar15 = 0;
  if ((double)((int)uVar17 * 0x3c) <= param_1 - dVar19) {
    uVar15 = (uint)puVar3;
  }
  return (undefined *)(ulong)uVar15;
}



/* Entry: 106cd6820; end: 106cd6e1b; -[SCGallerySnapsTabController _updateBannerVisibilityIfNeededWithScrollStateFix] */

ulong FUN_106cd6820(double param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  double dVar23;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ulong *)(param_2 + 0x150);
  if ((uVar3 != 0) && (*(long *)(param_2 + 0xa0) == 0)) {
    func_0x00010c1a7f60(uVar3,param_3,1);
  }
  if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(param_2 + 0xa0) == 0)) goto LAB_106cd6de0;
  uVar20 = param_2;
  func_0x00010beb5e00();
  uVar4 = *(ulong *)(param_2 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010c245a00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar22;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(uVar4);
  uVar22 = *(ulong *)(param_2 + 0xa0);
  _objc_retain(uVar3);
  _objc_retain(uVar22);
  if (uVar3 == uVar22) {
    _objc_release(uVar22);
    _objc_release(uVar3);
LAB_106cd6940:
    lVar7 = *(long *)(param_2 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar7;
    func_0x00010c245a00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar16;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar6 != 0;
    _objc_release();
    _objc_release(lVar16);
    _objc_release(lVar7);
    if ((uVar20 & 1) == 0) {
      if (lVar6 != 0) {
        uVar21 = 1;
        uVar19 = 1;
        goto LAB_106cd6a68;
      }
    }
    else {
LAB_106cd69b0:
      uVar20 = param_2;
      func_0x00010be44360();
      if ((int)uVar20 == 0) {
        uVar19 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(param_2 + 0x260);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar15;
        func_0x00010bf1f3c0();
        if ((int)uVar21 == 0) {
          uVar19 = 0;
        }
        else {
          func_0x00010c151ea0(param_2);
          if (param_1 <= 0.0) {
            param_1 = 0.0;
          }
          uVar19 = (uint)(20.0 < param_1);
        }
        _objc_release(uVar15);
        uVar20 = param_2;
        func_0x00010be3e560();
        uVar19 = (uint)uVar20 | uVar19;
      }
      if (bVar2) {
        uVar21 = 0;
LAB_106cd6a68:
        uVar20 = param_2;
        func_0x00010be44360();
        if ((int)uVar20 != 0) {
          func_0x00010bea5b80(param_2,param_3,uVar19 & 1);
        }
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + 0x150),param_3,uVar21);
      }
      else {
        uVar20 = *(ulong *)(param_2 + 0xa0);
        _objc_retain(uVar3);
        _objc_retain(uVar20);
        uVar22 = uVar3;
        if (uVar3 == uVar20) {
LAB_106cd6b18:
          _objc_release(uVar20);
          _objc_release(uVar22);
        }
        else if (uVar20 == 0) {
          _objc_release();
LAB_106cd6a9c:
          lVar7 = *(long *)(param_2 + 0x108);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar7;
          func_0x00010c245a00();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar16;
          func_0x00010c150520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar16);
          _objc_release(lVar7);
          if (lVar6 != 0) {
            uVar22 = *(ulong *)(param_2 + 0x108);
            func_0x00010c269d40(uVar22);
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar22;
            func_0x00010c245a00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12e1c0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            goto LAB_106cd6b18;
          }
        }
        else {
          func_0x00010c071ae0(uVar3,param_3,uVar20);
          _objc_release(uVar20);
          _objc_release(uVar3);
          if ((uVar22 & 1) == 0) goto LAB_106cd6a9c;
        }
        puVar8 = PTR_PTR_1126b0870;
        _objc_alloc();
        func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x20));
        func_0x00010c013de0();
        func_0x00010befbb60(*(undefined8 *)(param_2 + 0x20),param_3,puVar8);
        uVar21 = *(undefined8 *)(param_2 + 0x150);
        *(undefined **)(param_2 + 0x150) = puVar8;
        _objc_retain(puVar8);
        _objc_release(uVar21);
        puVar9 = puVar8;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf1ff80(uVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf493a0(puVar9,param_3,uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_2 + 0x158);
        *(undefined **)(param_2 + 0x158) = puVar10;
        _objc_release(uVar15);
        _objc_release(uVar21);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf1ff80(uVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf493a0(puVar9,param_3,uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_2 + 0x160);
        *(undefined **)(param_2 + 0x160) = puVar10;
        _objc_release(uVar15);
        _objc_release(uVar21);
        _objc_release(puVar9);
        bVar2 = (uVar19 & 1) == 0;
        param_1 = 0.0;
        if (bVar2) {
          param_1 = 1.0;
        }
        lVar16 = 0x160;
        if (bVar2) {
          lVar16 = 0x158;
        }
        func_0x00010c1677c0(puVar8);
        func_0x00010c219b60(puVar8,param_3,0);
        puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar21 = *(undefined8 *)(param_2 + lVar16);
        uStack_80 = uVar21;
        _objc_retain();
        puVar10 = puVar8;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf493a0(puVar10,param_3,uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar8;
        puStack_78 = puVar11;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c2793a0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf493a0(puVar12,param_3,uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar13;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_80,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar9,param_3,puVar14);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(uVar18);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar15);
        _objc_release(puVar10);
        puVar9 = PTR_PTR_1126d2128;
        _objc_alloc();
        func_0x00010c057580();
        func_0x00010c18b5e0();
        uVar15 = *(undefined8 *)(param_2 + 0x108);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar21);
        uVar21 = uVar15;
        func_0x00010c245a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620();
        _objc_release(uVar21);
        _objc_release(uVar15);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
    }
  }
  else if (uVar22 == 0) {
    _objc_release();
    if ((uVar20 & 1) != 0) {
LAB_106cd69ac:
      bVar2 = false;
      goto LAB_106cd69b0;
    }
  }
  else {
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_3,uVar22);
    _objc_release(uVar22);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) goto LAB_106cd6940;
    if ((int)uVar20 != 0) goto LAB_106cd69ac;
  }
  _objc_release();
LAB_106cd6de0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(uVar3 + 0xa0);
  func_0x00010c27ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar15;
  func_0x00010c12d640();
  _objc_release(uVar15);
  if ((int)uVar21 == 0) {
    uVar20 = 1;
  }
  else {
    uVar22 = uVar3;
    func_0x00010bf00280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar22;
    func_0x00010bf529e0();
    uVar20 = (ulong)(uVar20 != 0);
    _objc_release(uVar22);
  }
  lVar16 = *(long *)(uVar3 + 0xa0);
  func_0x00010c113c80();
  if ((lVar16 == 10) || (uVar22 = uVar3, func_0x00010be44360(), (int)uVar22 != 0)) {
    cVar1 = *(char *)(uVar3 + 0x26b);
    lVar16 = uVar3 + 0x1d8;
    _objc_loadWeakRetained();
    lVar6 = lVar16;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar7;
    func_0x00010c0debe0();
    uVar19 = 0;
    if (cVar1 == '\0' && lVar17 < 1) {
      uVar19 = (uint)uVar20;
    }
    uVar20 = (ulong)uVar19;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar16);
  }
  lVar16 = *(long *)(uVar3 + 0xa0);
  func_0x00010c113c80();
  if (lVar16 != 2) {
    lVar16 = *(long *)(uVar3 + 0xa0);
    func_0x00010c113c80();
    if (lVar16 != 0) {
      lVar16 = *(long *)(uVar3 + 0xa0);
      func_0x00010c113c80();
      if (lVar16 != 3) {
        lVar16 = *(long *)(uVar3 + 0xa0);
        func_0x00010c113c80();
        if (lVar16 != 4) {
          lVar16 = *(long *)(uVar3 + 0xa0);
          func_0x00010c113c80();
          if (lVar16 != 1) {
            return uVar20;
          }
        }
      }
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar15 = *(undefined8 *)(uVar3 + 0x1d0);
  dVar23 = param_1;
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088920();
  uVar18 = *(undefined8 *)(uVar3 + 0x230);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar18;
  func_0x00010c067ec0();
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(puVar8);
  uVar19 = 0;
  if ((double)((int)uVar21 * 0x3c) <= param_1 - dVar23) {
    uVar19 = (uint)uVar20;
  }
  return (ulong)uVar19;
}



/* Entry: 106cd6e1c; end: 106cd6feb; -[SCGallerySnapsTabController _shouldShowCurrentBanner] */

bool FUN_106cd6e1c(double param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  bool bVar11;
  double dVar12;
  
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c27ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c12d640();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    bVar2 = true;
  }
  else {
    lVar6 = param_2;
    func_0x00010bf00280(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf529e0();
    bVar2 = lVar5 != 0;
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_2 + 0xa0);
  func_0x00010c113c80();
  if ((lVar6 == 10) || (lVar6 = param_2, func_0x00010be44360(), (int)lVar6 != 0)) {
    cVar1 = *(char *)(param_2 + 0x26b);
    lVar6 = param_2 + 0x1d8;
    _objc_loadWeakRetained();
    lVar5 = lVar6;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0debe0();
    bVar11 = false;
    if (cVar1 == '\0' && lVar8 < 1) {
      bVar11 = bVar2;
    }
    bVar2 = bVar11;
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_2 + 0xa0);
  func_0x00010c113c80();
  if (lVar6 != 2) {
    lVar6 = *(long *)(param_2 + 0xa0);
    func_0x00010c113c80();
    if (lVar6 != 0) {
      lVar6 = *(long *)(param_2 + 0xa0);
      func_0x00010c113c80();
      if (lVar6 != 3) {
        lVar6 = *(long *)(param_2 + 0xa0);
        func_0x00010c113c80();
        if (lVar6 != 4) {
          lVar6 = *(long *)(param_2 + 0xa0);
          func_0x00010c113c80();
          if (lVar6 != 1) {
            return bVar2;
          }
        }
      }
    }
  }
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar3 = *(undefined8 *)(param_2 + 0x1d0);
  dVar12 = param_1;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088920();
  uVar10 = *(undefined8 *)(param_2 + 0x230);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c067ec0();
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(puVar9);
  bVar11 = false;
  if ((double)((int)uVar4 * 0x3c) <= param_1 - dVar12) {
    bVar11 = bVar2;
  }
  return bVar11;
}



/* Entry: 106cd6fec; end: 106cd706b; -[SCGallerySnapsTabController _isStorageBannerViewModel] */

bool FUN_106cd6fec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c113c80();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0xa0);
    func_0x00010c113c80();
    if (lVar1 != 2) {
      lVar1 = *(long *)(param_1 + 0xa0);
      func_0x00010c113c80();
      if (lVar1 != 3) {
        lVar1 = *(long *)(param_1 + 0xa0);
        func_0x00010c113c80();
        if (lVar1 != 4) {
          lVar1 = *(long *)(param_1 + 0xa0);
          func_0x00010c113c80();
          if (lVar1 != 5) {
            lVar1 = *(long *)(param_1 + 0xa0);
            func_0x00010c113c80(lVar1);
            return lVar1 == 1;
          }
        }
      }
    }
  }
  return true;
}



/* Entry: 106cd706c; end: 106cd70af; -[SCGallerySnapsTabController _isBannerScrollFadedOut] */

bool FUN_106cd706c(double param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x150);
  bVar1 = false;
  if (uVar2 != 0) {
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf01b40(*(undefined8 *)(param_2 + 0x150));
      bVar1 = param_1 <= 0.0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 106cd70b0; end: 106cd70d7; -[SCGallerySnapsTabController view] */

void FUN_106cd70b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cd70d8; end: 106cd70ff; -[SCGallerySnapsTabController collectionView] */

void FUN_106cd70d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cd7100; end: 106cd7127; -[SCGallerySnapsTabController allItems] */

void FUN_106cd7100(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cd7128; end: 106cd72a7; -[SCGallerySnapsTabController galleryItemIdToSnapsMap] */

void FUN_106cd7128(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0xa8);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar5 = lVar9;
      func_0x00010bfa34e0();
      if (lVar5 == 0) {
        lVar5 = lVar9;
        func_0x000107e75c30(lVar9,*(undefined8 *)(param_1 + 0x1e8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        func_0x000107e77598();
        _objc_release(lVar9);
        _objc_release(lVar5);
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar3 = *(long *)(puVar2 + 0xa8);
    func_0x00010bfa3240();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar5 = lVar9;
        func_0x00010bfa34e0();
        if (lVar5 == 1) {
          lVar5 = lVar9;
          func_0x000107e75c30(lVar9,*(undefined8 *)(puVar2 + 0x1e8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf53c00(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107e77508();
          _objc_release(lVar9);
          _objc_release(lVar5);
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar6 = puVar7;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      puVar7 = *(undefined **)(puVar7 + 0xa8);
      func_0x00010bfa3240(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106cd72a8; end: 106cd742b; -[SCGallerySnapsTabController galleryItemIdToPHAssetsMap] */

void FUN_106cd72a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0xa8);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar5 = lVar9;
      func_0x00010bfa34e0();
      if (lVar5 == 1) {
        lVar5 = lVar9;
        func_0x000107e75c30(lVar9,*(undefined8 *)(param_1 + 0x1e8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf53c00(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107e77508();
        _objc_release(lVar9);
        _objc_release(lVar5);
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar7 = *(undefined **)(puVar2 + 0xa8);
    func_0x00010bfa3240(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106cd742c; end: 106cd74a3; -[SCGallerySnapsTabController itemIdsToExclude] */

void FUN_106cd742c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bfa3240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106cd74a4; end: 106cd74ab;  */

void FUN_106cd74a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c234370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shouldShowSpinner_11266ab00);
  return;
}



/* Entry: 106cd74ac; end: 106cd74f3;  */

void FUN_106cd74ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf4c440(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cd74f4; end: 106cd74fb; -[SCGallerySnapsTabController prefersAllItemsAreNotIterated] */

undefined8 FUN_106cd74f4(void)

{
  return 1;
}



/* Entry: 106cd74fc; end: 106cd7537; -[SCGallerySnapsTabController allItemsCount] */

undefined8 FUN_106cd74fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf00280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106cd7538; end: 106cd779b; -[SCGallerySnapsTabController itemsInRect:] */

double FUN_106cd7538(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_5 + 0x28);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  dVar11 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_6,&uStack_150,auStack_110,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_140;
    lVar7 = 0x7fffffffffffffff;
    do {
      lVar10 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        lVar8 = *(long *)(lStack_148 + lVar10 * 8);
        lVar4 = lVar8;
        func_0x00010bfecf20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c1554e0();
        _objc_release(lVar4);
        if (lVar5 != lVar7) {
          lVar7 = lVar8;
          func_0x00010bfecf20(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_5;
          func_0x00010bebda40(param_5,param_6,lVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          if (lVar4 == 0) {
            lVar7 = lVar8;
            func_0x00010bfecf20(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_5;
            func_0x00010bdea1a0(param_5,param_6,lVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
          }
          func_0x00010c14c720(puVar1,param_6,lVar4);
          func_0x00010bfecf20();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar8;
          func_0x00010c1554e0();
          _objc_release(lVar8);
          _objc_release(lVar4);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_6,&uStack_150,auStack_110,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return dVar11;
  }
  ___stack_chk_fail();
  func_0x00010bf4cdc0(*(undefined8 *)(puVar1 + 0x28));
  func_0x00010be9ce80(puVar1);
  return (param_2 - dVar11) + 2.0;
}



/* Entry: 106cd779c; end: 106cd77df; -[SCGallerySnapsTabController scrollContentOffset] */

double FUN_106cd779c(double param_1,double param_2,long param_3)

{
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010be9ce80(param_3);
  return (param_2 - param_1) + 2.0;
}



/* Entry: 106cd77e0; end: 106cd7827; -[SCGallerySnapsTabController contentHeight] */

undefined8 FUN_106cd77e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf407a0();
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 106cd7828; end: 106cd7833; -[SCGallerySnapsTabController setScrollContentOffset:] */

void FUN_106cd7828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setScrollContentOffset_animated__11265b8b8,0,0);
  return;
}



/* Entry: 106cd7834; end: 106cd7957; -[SCGallerySnapsTabController setScrollContentOffset:animated:completion:] */

void FUN_106cd7834(double param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = param_1;
  _objc_retain(param_5);
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c156120(uVar1);
  _objc_release(uVar1);
  dVar8 = -2.0;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + 0x28));
  if (dVar8 == param_1 + dVar7 + -2.0) {
    if (param_5 == 0) goto LAB_106cd793c;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf4cdc0(uVar6);
    func_0x00010c182300(uVar6);
    if (param_5 == 0) goto LAB_106cd793c;
    if (param_4 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0xd8);
      lVar5 = param_5;
      _objc_retainBlock(param_5);
      func_0x00010befa120(uVar6);
      _objc_release(lVar5);
      goto LAB_106cd793c;
    }
  }
  func_0x000100162d98("APPSTORE",param_5);
LAB_106cd793c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106cd7958; end: 106cd79a7; -[SCGallerySnapsTabController scrollContentDistanceToTop] */

double FUN_106cd7958(double param_1,double param_2,long param_3)

{
  double dVar1;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010be9ce80(param_3);
  param_2 = (param_1 + -2.0) - param_2;
  dVar1 = 0.0;
  if (0.0 <= param_2) {
    dVar1 = param_2;
  }
  return dVar1;
}



/* Entry: 106cd79a8; end: 106cd79ef; -[SCGallerySnapsTabController setScrollContentInset:] */

void FUN_106cd79a8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_5 + 0x298) == param_4),
                              CONCAT24(-(ushort)(*(double *)(param_5 + 0x290) == param_3),
                                       CONCAT22(-(ushort)(*(double *)(param_5 + 0x288) == param_2),
                                                -(ushort)(*(double *)(param_5 + 0x280) == param_1)))
                             ),2);
  if ((uVar1 & 1) == 0) {
    *(double *)(param_5 + 0x280) = param_1;
    *(double *)(param_5 + 0x288) = param_2;
    *(double *)(param_5 + 0x290) = param_3;
    *(double *)(param_5 + 0x298) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bee4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateWithScrollContentInset_112596ca8);
    return;
  }
  return;
}



/* Entry: 106cd79f0; end: 106cd7ad3; -[SCGallerySnapsTabController setSelectMode:] */

void FUN_106cd79f0(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x26b) != param_3) {
    *(char *)(param_1 + 0x26b) = (char)param_3;
    func_0x00010c1b42a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1facc0(*(undefined8 *)(param_1 + 0xe0));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf01600();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1facc0(*(undefined8 *)(param_1 + 0xf8));
    }
    func_0x00010bedf260(param_1);
    lVar2 = param_1;
    func_0x00010c0834c0();
    if (((int)lVar2 != 0) && (*(char *)(param_1 + 0x268) == '\x01')) {
      if ((*(long *)(param_1 + 0xa0) != 0) &&
         (lVar2 = param_1, func_0x00010be44360(), (int)lVar2 != 0)) {
        if (*(char *)(param_1 + 0x169) == '\x01') {
          func_0x00010bea5b80(param_1);
        }
        else {
          *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_1 + 0x26b);
          func_0x00010bedbc20(param_1);
        }
      }
      func_0x00010bed3e80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be71630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__performBatchedUpdateWithAnimate_112579f28,1,0);
      return;
    }
  }
  return;
}



/* Entry: 106cd7ad4; end: 106cd7d27; -[SCGallerySnapsTabController _updateMonetizationBannerVisibility] */

void FUN_106cd7ad4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x150);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 != *(undefined **)(param_1 + 0x20)) || (*(long *)(param_1 + 0x158) == 0)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      goto LAB_106cd7d24;
    }
    lVar4 = *(long *)(param_1 + 0x160);
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x168) == '\x01') {
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf65be0(puVar2);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar2);
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf65be0(puVar1);
        _objc_release(puVar2);
      }
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf03400(0x3fd3333333333333);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
LAB_106cd7d24:
  ___stack_chk_fail();
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106cd7d28; end: 106cd7d8f;  */

void FUN_106cd7d28(long param_1)

{
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106cd7d90; end: 106cd7f67; -[SCGallerySnapsTabController _setMonetizationBannerHidden:] */

void FUN_106cd7d90(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_2 + 0x150);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 != *(undefined **)(param_2 + 0x20)) || (*(long *)(param_2 + 0x158) == 0)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      goto LAB_106cd7f64;
    }
    lVar4 = *(long *)(param_2 + 0x160);
    _objc_release();
    if (lVar4 != 0) {
      puVar1 = *(undefined **)(param_2 + 0x150);
      func_0x00010bf01b40();
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      if (param_4 == 0) {
        if (param_1 < 1.0) goto LAB_106cd7e64;
      }
      else if (0.0 < param_1) {
LAB_106cd7e64:
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf65be0(puVar2);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar2);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x00010bf03400(0x3fd3333333333333);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
LAB_106cd7f64:
  ___stack_chk_fail();
  uVar5 = 0;
  if (puVar1[0x28] == '\0') {
    uVar5 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar5,*(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106cd7f68; end: 106cd7fab;  */

void FUN_106cd7f68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106cd7fac; end: 106cd80fb; -[SCGallerySnapsTabController _updateSectionControllersSelectMode] */

void FUN_106cd7fac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0xb0);
  func_0x00010c0e0300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_e8;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c155800();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010010fab4();
      uVar1 = uVar5;
      if ((int)uVar6 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      func_0x00010c1facc0(uVar1);
      _objc_release(uVar1);
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    puVar8 = auStack_e8;
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar7 = puVar8;
  func_0x00010bfbd100();
  if (puVar7 == (undefined1 *)0x1) {
    func_0x00010bf35200(*(undefined8 *)(lVar3 + 0xe0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 106cd80fc; end: 106cd8153; -[SCGallerySnapsTabController changeSelected:forGalleryItem:] */

void FUN_106cd80fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfbd100();
  if (lVar1 == 1) {
    func_0x00010bf35200(*(undefined8 *)(param_1 + 0xe0),param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cd8154; end: 106cd815b; -[SCGallerySnapsTabController changeSelected:forGallerySnapItem:] */

void FUN_106cd8154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_changeSelected_snapItem__1125aae30);
  return;
}



/* Entry: 106cd815c; end: 106cd8167; -[SCGallerySnapsTabController changeSelected:forItems:snapItems:] */

void FUN_106cd815c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf171b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_batchSelect_items_snapItems_anno_1125a3610);
  return;
}



/* Entry: 106cd8168; end: 106cd816f; -[SCGallerySnapsTabController selectedItemCount] */

void FUN_106cd8168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_selectedItemCount_112634068);
  return;
}


