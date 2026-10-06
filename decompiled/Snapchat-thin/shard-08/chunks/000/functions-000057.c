/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cb8258; end: 105cb8317; -[SCGalleryViewController statusCoordinatorNeedsToPair:deviceProductType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb8258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b6850;
  _objc_alloc(PTR_PTR_1126b6850);
  func_0x00010c056ae0();
  param_1 = param_1 + _DAT_112733800;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cb8318; end: 105cb83fb; -[SCGalleryViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb8318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112733828;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c07d640();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9bae0();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127337a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a0e0();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112733818;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152300();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb83fc; end: 105cb84b3; -[SCGalleryViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb83fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127338a4;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aecb0;
  if ((int)uVar2 < 0) {
    func_0x00010bf9b4c0(0x404e000000000000,PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067ec0();
    func_0x00010bf9b4c0((double)(int)uVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105cb84b4; end: 105cb84d3; -[SCGalleryViewController canHandleNotification:] */

bool FUN_105cb84b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c26a060(param_3);
  return param_3 == 0x10;
}



/* Entry: 105cb84d4; end: 105cb8523; -[SCGalleryViewController traitCollectionDidChange:] */

void FUN_105cb84d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecb88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c106ec0(param_1);
  func_0x000108df58d4();
  return;
}



/* Entry: 105cb8524; end: 105cba137; -[SCMemoriesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb8524(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
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
  undefined *puVar58;
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
  undefined8 uVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  undefined **ppuVar85;
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
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  undefined8 uVar123;
  long lVar124;
  long lVar125;
  long lStack_6e8;
  long lStack_4f8;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
  undefined8 uStack_480;
  long lStack_468;
  long lStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_3d0;
  long lStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_368;
  long lStack_348;
  long lStack_320;
  long lStack_318;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar120 = param_1;
  FUN_105cba138();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar120;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar120);
  func_0x0001004f1458(lVar1);
  func_0x00010bed7ee0(param_1);
  lVar120 = param_1;
  func_0x000105cba15c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar120;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065280();
  _objc_release(lVar2);
  _objc_release(lVar120);
  puVar3 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  if (param_1 == 0) {
    lVar120 = 0;
  }
  else {
    lVar120 = param_1 + _DAT_112733a1c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar120;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar120);
  lVar120 = param_1;
  func_0x000105cba180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar120;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar120);
  lVar120 = param_1;
  func_0x000105cba180();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar120;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar120);
  if (param_1 == 0) {
    lVar120 = 0;
  }
  else {
    lVar120 = param_1 + _DAT_1127339f0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar120;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar120);
  if (param_1 == 0) {
    lVar120 = 0;
  }
  else {
    lVar120 = param_1 + _DAT_112733a18;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar120;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar120);
  lVar120 = param_1;
  func_0x000105cba1a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105cba1c8;
  puStack_b8 = &UNK_1108e4178;
  puVar10 = PTR_PTR_1126ae720;
  lStack_b0 = lVar120;
  lStack_a8 = lVar2;
  lStack_a0 = lVar6;
  lStack_98 = lVar7;
  lStack_90 = lVar9;
  lStack_88 = lVar8;
  lStack_80 = lVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1;
  FUN_105cba250();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar121;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  if (param_1 == 0) {
    lVar121 = 0;
  }
  else {
    lVar121 = param_1 + _DAT_1127339f4;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar121;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  lVar121 = param_1;
  func_0x000105cba274();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar121;
  func_0x00010bfbd5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  if (param_1 == 0) {
    lVar121 = 0;
  }
  else {
    lVar121 = param_1 + _DAT_112733a28;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar121;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  if (param_1 == 0) {
    lVar121 = 0;
  }
  else {
    lVar121 = param_1 + _DAT_112733a14;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar121;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  lVar121 = param_1;
  func_0x000105cba298();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar121;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105cba2bc;
  puStack_118 = &UNK_1108e41a8;
  puVar17 = PTR_PTR_1126ae720;
  lStack_110 = lVar14;
  lStack_108 = lVar13;
  lStack_100 = lVar2;
  lStack_f8 = lVar7;
  lStack_f0 = lVar15;
  lStack_e8 = lVar6;
  lStack_e0 = lVar16;
  lStack_d8 = param_1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1;
  func_0x000105cba274();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar121;
  func_0x00010bfbd5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  puVar19 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c3a40;
  _objc_alloc();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    lStack_2b0 = 0;
    lStack_2a0 = 0;
    lStack_288 = 0;
    lStack_270 = 0;
    uStack_268 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    lStack_2a8 = 0;
    lStack_2b8 = 0;
  }
  else {
    uStack_268 = *(undefined8 *)(param_1 + _DAT_112733aa4);
    _objc_retain();
    lStack_270 = param_1 + _DAT_112733a98;
    _objc_loadWeakRetained();
    uStack_278 = *(undefined8 *)(param_1 + _DAT_112733a9c);
    _objc_retain();
    uStack_280 = *(undefined8 *)(param_1 + _DAT_112733aa0);
    _objc_retain();
    lStack_288 = param_1 + _DAT_112733980;
    _objc_loadWeakRetained();
    uStack_290 = *(undefined8 *)(param_1 + _DAT_112733aa8);
    _objc_retain();
    uStack_298 = *(undefined8 *)(param_1 + _DAT_112733aac);
    _objc_retain();
    lStack_2a0 = param_1 + _DAT_112733974;
    _objc_loadWeakRetained();
    lStack_2a8 = param_1 + _DAT_112733978;
    _objc_loadWeakRetained();
    lStack_2b0 = param_1 + _DAT_11273397c;
    _objc_loadWeakRetained();
    lStack_2b8 = param_1 + _DAT_1127339ac;
    _objc_loadWeakRetained();
  }
  lVar121 = param_1;
  func_0x000105cba298();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar121;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar86 = 0;
  }
  else {
    lVar86 = param_1 + _DAT_11273399c;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar86;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x000105cba424();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf06440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar87 = 0;
  }
  else {
    lVar87 = param_1 + _DAT_112733a44;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar87;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar4;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x000105cba448();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x000105cba46c();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar88 = 0;
  }
  else {
    lVar88 = param_1 + _DAT_112733988;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar88;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar89 = 0;
  }
  else {
    lVar89 = param_1 + _DAT_11273398c;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar89;
  func_0x00010c0c88c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar90 = 0;
  }
  else {
    lVar90 = param_1 + _DAT_1127339a8;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar90;
  func_0x00010c08f680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_320 = 0;
    lStack_318 = 0;
    lVar91 = 0;
  }
  else {
    lStack_318 = param_1 + _DAT_1127339c4;
    _objc_loadWeakRetained();
    lStack_320 = param_1 + _DAT_1127339b0;
    _objc_loadWeakRetained();
    lVar91 = param_1 + _DAT_1127339b4;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar91;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar92 = 0;
  }
  else {
    lVar92 = param_1 + _DAT_1127339b8;
    _objc_loadWeakRetained();
  }
  lVar36 = lVar92;
  func_0x00010c0c9d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar93 = 0;
  }
  else {
    lVar93 = param_1 + _DAT_1127339d0;
    _objc_loadWeakRetained();
  }
  lVar37 = lVar93;
  func_0x00010c0c8060();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar94 = 0;
  }
  else {
    lVar94 = param_1 + _DAT_1127339d4;
    _objc_loadWeakRetained();
  }
  lVar38 = lVar94;
  func_0x00010c1142c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_348 = 0;
    lVar95 = 0;
  }
  else {
    lStack_348 = param_1 + _DAT_1127339d8;
    _objc_loadWeakRetained();
    lVar95 = param_1 + _DAT_1127339bc;
    _objc_loadWeakRetained();
  }
  lVar39 = lVar95;
  func_0x00010bfce360();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar96 = 0;
  }
  else {
    lVar96 = param_1 + _DAT_112733a48;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar96;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar97 = 0;
  }
  else {
    lVar97 = param_1 + _DAT_1127339e8;
    _objc_loadWeakRetained();
  }
  lVar41 = lVar97;
  func_0x00010c0c9cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_368 = 0;
    lVar98 = 0;
  }
  else {
    uStack_368 = *(undefined8 *)(param_1 + _DAT_112733abc);
    _objc_retain();
    lVar98 = param_1 + _DAT_1127339fc;
    _objc_loadWeakRetained();
  }
  lVar42 = lVar98;
  func_0x00010bf8c440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar99 = 0;
  }
  else {
    lVar99 = param_1 + _DAT_1127339e0;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar99;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar100 = 0;
  }
  else {
    lVar100 = param_1 + _DAT_112733a20;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar100;
  func_0x00010c0c94c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_390 = 0;
    uStack_388 = 0;
    lVar101 = 0;
  }
  else {
    uStack_388 = *(undefined8 *)(param_1 + _DAT_112733ac4);
    _objc_retain();
    uStack_390 = *(undefined8 *)(param_1 + _DAT_112733ac0);
    _objc_retain();
    lVar101 = param_1 + _DAT_1127339e4;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar101;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_3a0 = 0;
    lVar102 = 0;
  }
  else {
    lStack_3a0 = param_1 + _DAT_1127339ec;
    _objc_loadWeakRetained();
    lVar102 = param_1 + _DAT_112733a04;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar102;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1;
  func_0x000105cba3e4();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x000105cba490();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x000105cba490();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar51;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar103 = 0;
  }
  else {
    lVar103 = param_1 + _DAT_112733a2c;
    _objc_loadWeakRetained();
  }
  lVar53 = lVar103;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_3d0 = 0;
    lVar104 = 0;
  }
  else {
    uStack_3d0 = *(undefined8 *)(param_1 + _DAT_112733ad4);
    _objc_retain();
    lVar104 = param_1 + _DAT_1127339c8;
    _objc_loadWeakRetained();
  }
  lVar54 = lVar104;
  func_0x00010bf0b480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar105 = 0;
  }
  else {
    lVar105 = param_1 + _DAT_1127339cc;
    _objc_loadWeakRetained();
  }
  lVar55 = lVar105;
  func_0x00010c108d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar106 = 0;
  }
  else {
    lVar106 = param_1 + _DAT_112733a30;
    _objc_loadWeakRetained();
  }
  lVar56 = lVar106;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar107 = 0;
  }
  else {
    lVar107 = param_1 + _DAT_112733a34;
    _objc_loadWeakRetained();
  }
  lVar57 = lVar107;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = puVar5;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1;
  func_0x000105cba1a4();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar108 = 0;
  }
  else {
    lVar108 = param_1 + _DAT_11273396c;
    _objc_loadWeakRetained();
  }
  lVar60 = lVar108;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1;
  func_0x000105cba15c();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = lVar61;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar109 = 0;
  }
  else {
    lVar109 = param_1 + _DAT_112733a3c;
    _objc_loadWeakRetained();
  }
  lVar63 = lVar109;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uStack_438 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    lStack_430 = 0;
    lStack_440 = 0;
  }
  else {
    uStack_420 = *(undefined8 *)(param_1 + _DAT_112733ae0);
    _objc_retain();
    uStack_428 = *(undefined8 *)(param_1 + _DAT_112733ae4);
    _objc_retain();
    lStack_430 = param_1 + _DAT_112733ae8;
    _objc_loadWeakRetained();
    uStack_438 = *(undefined8 *)(param_1 + _DAT_112733aec);
    _objc_retain();
    lStack_440 = param_1 + _DAT_112733a4c;
    _objc_loadWeakRetained();
  }
  lVar64 = param_1;
  func_0x000105cba4b4();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar110 = 0;
  }
  else {
    lVar110 = param_1 + _DAT_1127339c0;
    _objc_loadWeakRetained();
  }
  lVar65 = lVar110;
  func_0x00010c0c8720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar111 = 0;
  }
  else {
    lVar111 = param_1 + _DAT_112733a50;
    _objc_loadWeakRetained();
  }
  lVar66 = lVar111;
  func_0x00010c0c8dc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar112 = 0;
  }
  else {
    lVar112 = param_1 + _DAT_112733a54;
    _objc_loadWeakRetained();
  }
  lVar67 = lVar112;
  func_0x00010c0c8440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_468 = 0;
  }
  else {
    lStack_468 = param_1 + _DAT_112733a58;
    _objc_loadWeakRetained();
  }
  lVar68 = param_1;
  func_0x000105cba4d8();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar68;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = lVar69;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1;
  func_0x000105cba4fc();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = lVar71;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = lVar72;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    lStack_4d0 = 0;
    lStack_4b8 = 0;
    lStack_4a8 = 0;
    uStack_498 = 0;
    lStack_488 = 0;
    uStack_480 = 0;
    lStack_490 = 0;
    lStack_4a0 = 0;
    lStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    lVar113 = 0;
  }
  else {
    uStack_480 = *(undefined8 *)(param_1 + _DAT_112733af0);
    _objc_retain();
    lStack_488 = param_1 + _DAT_112733ac8;
    _objc_loadWeakRetained();
    lStack_490 = param_1 + _DAT_112733acc;
    _objc_loadWeakRetained();
    uStack_498 = *(undefined8 *)(param_1 + _DAT_112733af8);
    _objc_retain();
    lStack_4a0 = param_1 + _DAT_112733af4;
    _objc_loadWeakRetained();
    lStack_4a8 = param_1 + _DAT_112733afc;
    _objc_loadWeakRetained();
    lStack_4b0 = param_1 + _DAT_112733a74;
    _objc_loadWeakRetained();
    lStack_4b8 = param_1 + _DAT_112733a78;
    _objc_loadWeakRetained();
    uStack_4c0 = *(undefined8 *)(param_1 + _DAT_112733b00);
    _objc_retain();
    uStack_4c8 = *(undefined8 *)(param_1 + _DAT_112733b04);
    _objc_retain();
    uStack_4d8 = *(undefined8 *)(param_1 + _DAT_112733ad8);
    _objc_retain();
    lStack_4d0 = param_1 + _DAT_112733adc;
    _objc_loadWeakRetained();
    lVar113 = param_1 + _DAT_112733a68;
    _objc_loadWeakRetained();
  }
  lVar74 = lVar113;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar114 = 0;
  }
  else {
    lVar114 = param_1 + _DAT_112733a64;
    _objc_loadWeakRetained();
  }
  lVar75 = lVar114;
  func_0x00010c0c9900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar76 = 0;
  }
  else {
    uVar76 = *(undefined8 *)(param_1 + _DAT_112733b08);
  }
  _objc_retain();
  lVar77 = param_1;
  func_0x000105cba4fc();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar115 = 0;
  }
  else {
    lVar115 = param_1 + _DAT_112733a7c;
    _objc_loadWeakRetained();
  }
  lVar78 = lVar115;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar125 = 0;
    lStack_6e8 = 0;
    lStack_4f8 = 0;
    lVar124 = 0;
    lVar116 = 0;
  }
  else {
    lStack_4f8 = param_1 + _DAT_112733a80;
    _objc_loadWeakRetained();
    lStack_6e8 = param_1 + _DAT_112733a84;
    _objc_loadWeakRetained();
    lVar124 = param_1 + _DAT_112733a88;
    _objc_loadWeakRetained();
    lVar125 = param_1 + _DAT_112733ad0;
    _objc_loadWeakRetained();
    lVar116 = param_1 + _DAT_112733a40;
    _objc_loadWeakRetained();
  }
  lVar79 = lVar116;
  func_0x00010bf29180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar117 = 0;
  }
  else {
    lVar117 = param_1 + _DAT_112733a94;
    _objc_loadWeakRetained();
  }
  lVar80 = lVar117;
  func_0x00010bf13bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar118 = 0;
  }
  else {
    lVar118 = param_1 + _DAT_112733a8c;
    _objc_loadWeakRetained();
  }
  lVar81 = lVar118;
  func_0x00010bf9f1e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar119 = 0;
  }
  else {
    lVar119 = param_1 + _DAT_112733a08;
    _objc_loadWeakRetained();
  }
  lVar82 = lVar119;
  func_0x00010c0c90a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar122 = 0;
  }
  else {
    lVar122 = param_1 + _DAT_112733a90;
    _objc_loadWeakRetained();
  }
  lVar83 = lVar122;
  func_0x00010c0c97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = lVar83;
  func_0x00010c0c97e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff23c0();
  _objc_release(uVar76);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar122);
  _objc_release(lVar82);
  _objc_release(lVar119);
  _objc_release(lVar81);
  _objc_release(lVar118);
  _objc_release(lVar80);
  _objc_release(lVar117);
  _objc_release(lVar79);
  _objc_release(lVar116);
  _objc_release(lVar125);
  _objc_release(lVar124);
  _objc_release(lStack_6e8);
  _objc_release(lStack_4f8);
  _objc_release(lVar78);
  _objc_release(lVar115);
  _objc_release(lVar77);
  _objc_release(lVar75);
  _objc_release(lVar114);
  _objc_release(lVar74);
  _objc_release(lVar113);
  _objc_release(lStack_4d0);
  _objc_release(uStack_4d8);
  _objc_release(uStack_4c8);
  _objc_release(uStack_4c0);
  _objc_release(lStack_4b8);
  _objc_release(lStack_4b0);
  _objc_release(lStack_4a8);
  _objc_release(lStack_4a0);
  _objc_release(uStack_498);
  _objc_release(lStack_490);
  _objc_release(lStack_488);
  _objc_release(uStack_480);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lStack_468);
  _objc_release(lVar67);
  _objc_release(lVar112);
  _objc_release(lVar66);
  _objc_release(lVar111);
  _objc_release(lVar65);
  _objc_release(lVar110);
  _objc_release(lVar64);
  _objc_release(lStack_440);
  _objc_release(uStack_438);
  _objc_release(lStack_430);
  _objc_release(uStack_428);
  _objc_release(uStack_420);
  _objc_release(lVar63);
  _objc_release(lVar109);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar108);
  _objc_release(lVar59);
  _objc_release(puVar58);
  _objc_release(lVar57);
  _objc_release(lVar107);
  _objc_release(lVar56);
  _objc_release(lVar106);
  _objc_release(lVar55);
  _objc_release(lVar105);
  _objc_release(lVar54);
  _objc_release(lVar104);
  _objc_release(uStack_3d0);
  _objc_release(lVar53);
  _objc_release(lVar103);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar102);
  _objc_release(lStack_3a0);
  _objc_release(lVar45);
  _objc_release(lVar101);
  _objc_release(uStack_390);
  _objc_release(uStack_388);
  _objc_release(lVar44);
  _objc_release(lVar100);
  _objc_release(lVar43);
  _objc_release(lVar99);
  _objc_release(lVar42);
  _objc_release(lVar98);
  _objc_release(uStack_368);
  _objc_release(lVar41);
  _objc_release(lVar97);
  _objc_release(lVar40);
  _objc_release(lVar96);
  _objc_release(lVar39);
  _objc_release(lVar95);
  _objc_release(lStack_348);
  _objc_release(lVar38);
  _objc_release(lVar94);
  _objc_release(lVar37);
  _objc_release(lVar93);
  _objc_release(lVar36);
  _objc_release(lVar92);
  _objc_release(lVar35);
  _objc_release(lVar91);
  _objc_release(lStack_320);
  _objc_release(lStack_318);
  _objc_release(lVar34);
  _objc_release(lVar90);
  _objc_release(lVar33);
  _objc_release(lVar89);
  _objc_release(lVar32);
  _objc_release(lVar88);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(lVar25);
  _objc_release(lVar87);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar86);
  _objc_release(lVar21);
  _objc_release(lVar121);
  _objc_release(lStack_2b8);
  _objc_release(lStack_2b0);
  _objc_release(lStack_2a8);
  _objc_release(lStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(lStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(lStack_270);
  _objc_release(uStack_268);
  lVar121 = param_1;
  func_0x000105cba448(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar121;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar21);
  _objc_release(lVar121);
  puVar26 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  if (param_1 == 0) {
    uVar76 = 0;
  }
  else {
    uVar76 = *(undefined8 *)(param_1 + _DAT_112733ab0);
  }
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_105cba56c;
  puStack_140 = &UNK_110846660;
  _objc_retain(puVar5);
  puStack_138 = puVar5;
  func_0x00010bf9d5c0(uVar76);
  if (param_1 == 0) {
    uVar76 = 0;
  }
  else {
    uVar76 = *(undefined8 *)(param_1 + _DAT_112733af8);
  }
  _objc_retain(uVar76);
  _objc_initWeak(auStack_160,puVar20);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_105cba5f0;
  puStack_170 = &UNK_1108434b0;
  _objc_copyWeak(auStack_168,auStack_160);
  ppuVar85 = &puStack_188;
  _objc_retainBlock();
  if (param_1 == 0) {
    uVar123 = 0;
  }
  else {
    uVar123 = *(undefined8 *)(param_1 + _DAT_112733ab4);
  }
  _objc_retain(uVar123);
  _objc_retain(puVar26);
  _objc_retain(uVar76);
  _objc_retain(ppuVar85);
  _objc_retain(puVar3);
  func_0x00010bf9d5c0(uVar123);
  _objc_release(uVar123);
  if (param_1 == 0) {
    uVar123 = 0;
  }
  else {
    uVar123 = *(undefined8 *)(param_1 + _DAT_112733ab8);
  }
  _objc_retain(uVar123);
  _objc_retain(puVar26);
  _objc_retain(puVar20);
  _objc_retain(puVar4);
  func_0x00010bf9d5c0(uVar123);
  _objc_release(uVar123);
  func_0x00010beae140(param_1);
  _objc_release(puVar4);
  _objc_release(puVar20);
  _objc_release(puVar26);
  _objc_release(puVar3);
  _objc_release(ppuVar85);
  _objc_release(uVar76);
  _objc_release(puVar26);
  _objc_release(ppuVar85);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_160);
  _objc_release(uVar76);
  _objc_release(puStack_138);
  _objc_release(puVar26);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(lVar120);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 105cba138; end: 105cba1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cba138(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112733970);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cba1c8; end: 105cba24f;  */

void FUN_105cba1c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c234ce0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126c3a30);
    func_0x00010bfff340();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cba250; end: 105cba2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cba250(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127339f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cba2bc; end: 105cba3e3;  */

void FUN_105cba2bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = PTR_PTR_1126c3a38;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  FUN_105cba138();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  FUN_105cba250();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2416a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  FUN_105cba3e4();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ac60(puVar8,param_2,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar10,uVar12,uVar14)
  ;
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105cba3e4; end: 105cba51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cba3e4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112733a00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cba520; end: 105cba56b;  */

void FUN_105cba520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a48;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cba56c; end: 105cba5ef;  */

void FUN_105cba56c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf00560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cba5f0; end: 105cba61b;  */

void FUN_105cba5f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2385e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cba61c; end: 105cba67b;  */

void FUN_105cba61c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a50;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0373c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cba67c; end: 105cba6bb;  */

void FUN_105cba67c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cba6bc; end: 105cba71b;  */

void FUN_105cba6bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a58;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cba71c; end: 105cba75b;  */

void FUN_105cba71c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cba75c; end: 105cba7e3; -[SCMemoriesEntryPoint end] */

void FUN_105cba75c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x000105cba448();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126ecb90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cba7e4; end: 105cba94b; -[SCMemoriesEntryPoint _updateFeatureSettingsFromNotificationIfneeded] */

void FUN_105cba7e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x000105cba4d8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf1f320(uVar3,param_2,&PTR____CFConstantStringClassReference_110e27918);
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x000105cba46c(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a40();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c172fe0(uVar3,param_2,0,&PTR____CFConstantStringClassReference_110e27918);
  }
  uVar1 = uVar3;
  func_0x00010bf1f320(uVar3,param_2,&PTR____CFConstantStringClassReference_110e0a818);
  if ((int)uVar1 != 0) {
    func_0x000105cba46c(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    func_0x00010c172fe0(uVar3,param_2,0,&PTR____CFConstantStringClassReference_110e0a818);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cba94c; end: 105cbaaab; -[SCMemoriesEntryPoint _setupMemoriesCustomActionsTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cba94c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x000105cba4b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733958);
  *(undefined8 *)(param_1 + _DAT_112733958) = 0;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x000105cba180(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x000105cba180(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0c9500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x000105cba424(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf06440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273395c);
  *(undefined8 *)(param_1 + _DAT_11273395c) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733960);
  *(undefined8 *)(param_1 + _DAT_112733960) = 0;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x000105cba46c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733964);
  *(undefined8 *)(param_1 + _DAT_112733964) = 0;
  _objc_release(uVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cbaaac; end: 105cbb04b; -[SCMemoriesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbaaac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733b08,0);
  _objc_storeStrong(param_1 + _DAT_112733b04,0);
  _objc_storeStrong(param_1 + _DAT_112733b00,0);
  _objc_destroyWeak(param_1 + _DAT_112733afc);
  _objc_storeStrong(param_1 + _DAT_112733af8,0);
  _objc_destroyWeak(param_1 + _DAT_112733af4);
  _objc_storeStrong(param_1 + _DAT_112733af0,0);
  _objc_storeStrong(param_1 + _DAT_112733aec,0);
  _objc_destroyWeak(param_1 + _DAT_112733ae8);
  _objc_storeStrong(param_1 + _DAT_112733ae4,0);
  _objc_storeStrong(param_1 + _DAT_112733ae0,0);
  _objc_destroyWeak(param_1 + _DAT_112733adc);
  _objc_storeStrong(param_1 + _DAT_112733ad8,0);
  _objc_storeStrong(param_1 + _DAT_112733ad4,0);
  _objc_destroyWeak(param_1 + _DAT_112733ad0);
  _objc_destroyWeak(param_1 + _DAT_112733acc);
  _objc_destroyWeak(param_1 + _DAT_112733ac8);
  _objc_storeStrong(param_1 + _DAT_112733ac4,0);
  _objc_storeStrong(param_1 + _DAT_112733ac0,0);
  _objc_storeStrong(param_1 + _DAT_112733abc,0);
  _objc_storeStrong(param_1 + _DAT_112733ab8,0);
  _objc_storeStrong(param_1 + _DAT_112733ab4,0);
  _objc_storeStrong(param_1 + _DAT_112733ab0,0);
  _objc_storeStrong(param_1 + _DAT_112733aac,0);
  _objc_storeStrong(param_1 + _DAT_112733aa8,0);
  _objc_storeStrong(param_1 + _DAT_112733aa4,0);
  _objc_storeStrong(param_1 + _DAT_112733aa0,0);
  _objc_storeStrong(param_1 + _DAT_112733a9c,0);
  _objc_destroyWeak(param_1 + _DAT_112733a98);
  _objc_destroyWeak(param_1 + _DAT_112733a94);
  _objc_destroyWeak(param_1 + _DAT_112733a90);
  _objc_destroyWeak(param_1 + _DAT_112733a8c);
  _objc_destroyWeak(param_1 + _DAT_112733a88);
  _objc_destroyWeak(param_1 + _DAT_112733a84);
  _objc_destroyWeak(param_1 + _DAT_112733a80);
  _objc_destroyWeak(param_1 + _DAT_112733a7c);
  _objc_destroyWeak(param_1 + _DAT_112733a78);
  _objc_destroyWeak(param_1 + _DAT_112733a74);
  _objc_destroyWeak(param_1 + _DAT_112733a70);
  _objc_destroyWeak(param_1 + _DAT_112733a6c);
  _objc_destroyWeak(param_1 + _DAT_112733a68);
  _objc_destroyWeak(param_1 + _DAT_112733a64);
  _objc_destroyWeak(param_1 + _DAT_112733a60);
  _objc_destroyWeak(param_1 + _DAT_112733a5c);
  _objc_destroyWeak(param_1 + _DAT_112733a58);
  _objc_destroyWeak(param_1 + _DAT_112733a54);
  _objc_destroyWeak(param_1 + _DAT_112733a50);
  _objc_destroyWeak(param_1 + _DAT_112733a4c);
  _objc_destroyWeak(param_1 + _DAT_112733a48);
  _objc_destroyWeak(param_1 + _DAT_112733a44);
  _objc_destroyWeak(param_1 + _DAT_112733a40);
  _objc_destroyWeak(param_1 + _DAT_112733a3c);
  _objc_destroyWeak(param_1 + _DAT_112733a38);
  _objc_destroyWeak(param_1 + _DAT_112733a34);
  _objc_destroyWeak(param_1 + _DAT_112733a30);
  _objc_destroyWeak(param_1 + _DAT_112733a2c);
  _objc_destroyWeak(param_1 + _DAT_112733a28);
  _objc_destroyWeak(param_1 + _DAT_112733a24);
  _objc_destroyWeak(param_1 + _DAT_112733a20);
  _objc_destroyWeak(param_1 + _DAT_112733a1c);
  _objc_destroyWeak(param_1 + _DAT_112733a18);
  _objc_destroyWeak(param_1 + _DAT_112733a14);
  _objc_destroyWeak(param_1 + _DAT_112733a10);
  _objc_destroyWeak(param_1 + _DAT_112733a0c);
  _objc_destroyWeak(param_1 + _DAT_112733a08);
  _objc_destroyWeak(param_1 + _DAT_112733a04);
  _objc_destroyWeak(param_1 + _DAT_112733a00);
  _objc_destroyWeak(param_1 + _DAT_1127339fc);
  _objc_destroyWeak(param_1 + _DAT_1127339f8);
  _objc_destroyWeak(param_1 + _DAT_1127339f4);
  _objc_destroyWeak(param_1 + _DAT_1127339f0);
  _objc_destroyWeak(param_1 + _DAT_1127339ec);
  _objc_destroyWeak(param_1 + _DAT_1127339e8);
  _objc_destroyWeak(param_1 + _DAT_1127339e4);
  _objc_destroyWeak(param_1 + _DAT_1127339e0);
  _objc_destroyWeak(param_1 + _DAT_1127339dc);
  _objc_destroyWeak(param_1 + _DAT_1127339d8);
  _objc_destroyWeak(param_1 + _DAT_1127339d4);
  _objc_destroyWeak(param_1 + _DAT_1127339d0);
  _objc_destroyWeak(param_1 + _DAT_1127339cc);
  _objc_destroyWeak(param_1 + _DAT_1127339c8);
  _objc_destroyWeak(param_1 + _DAT_1127339c4);
  _objc_destroyWeak(param_1 + _DAT_1127339c0);
  _objc_destroyWeak(param_1 + _DAT_1127339bc);
  _objc_destroyWeak(param_1 + _DAT_1127339b8);
  _objc_destroyWeak(param_1 + _DAT_1127339b4);
  _objc_destroyWeak(param_1 + _DAT_1127339b0);
  _objc_destroyWeak(param_1 + _DAT_1127339ac);
  _objc_destroyWeak(param_1 + _DAT_1127339a8);
  _objc_destroyWeak(param_1 + _DAT_1127339a4);
  _objc_destroyWeak(param_1 + _DAT_1127339a0);
  _objc_destroyWeak(param_1 + _DAT_11273399c);
  _objc_destroyWeak(param_1 + _DAT_112733998);
  _objc_destroyWeak(param_1 + _DAT_112733994);
  _objc_destroyWeak(param_1 + _DAT_112733990);
  _objc_destroyWeak(param_1 + _DAT_11273398c);
  _objc_destroyWeak(param_1 + _DAT_112733988);
  _objc_destroyWeak(param_1 + _DAT_112733984);
  _objc_destroyWeak(param_1 + _DAT_112733980);
  _objc_destroyWeak(param_1 + _DAT_11273397c);
  _objc_destroyWeak(param_1 + _DAT_112733978);
  _objc_destroyWeak(param_1 + _DAT_112733974);
  _objc_destroyWeak(param_1 + _DAT_112733970);
  _objc_destroyWeak(param_1 + _DAT_11273396c);
  _objc_destroyWeak(param_1 + _DAT_112733968);
  _objc_storeStrong(param_1 + _DAT_112733964,0);
  _objc_storeStrong(param_1 + _DAT_11273395c,0);
  _objc_storeStrong(param_1 + _DAT_112733960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733958,0);
  return;
}



/* Entry: 105cbb04c; end: 105cbb0bf; -[SCGrapheneMemvcMetric2 init] */

undefined1 * FUN_105cbb04c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecb98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105cbb0c0; end: 105cbb137;  */

void FUN_105cbb0c0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e4278,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105cbb138; end: 105cbb21b; -[SCMemoriesSnapsTabBannerPluginScope initWithPlugInRegistry:uiContainer:delegate:presentingViewController:] */

undefined1 *
FUN_105cbb138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ecba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cbb21c; end: 105cbb223; -[SCMemoriesSnapsTabBannerPluginScope plugInRegistry] */

undefined8 FUN_105cbb21c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cbb224; end: 105cbb23b; -[SCMemoriesSnapsTabBannerPluginScope uiContainer] */

void FUN_105cbb224(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbb23c; end: 105cbb253; -[SCMemoriesSnapsTabBannerPluginScope delegate] */

void FUN_105cbb23c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbb254; end: 105cbb26b; -[SCMemoriesSnapsTabBannerPluginScope presentingViewController] */

void FUN_105cbb254(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbb26c; end: 105cbb2a7; -[SCMemoriesSnapsTabBannerPluginScope .cxx_destruct] */

void FUN_105cbb26c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cbb2a8; end: 105cbb3fb; -[SCMemoriesAddSnapsActionHandler initWithEditDataMutator:memoriesMergedDataSource:targetStory:videoImporter:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_105cbb2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ecba8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cbb3fc; end: 105cbb4d7; -[SCMemoriesAddSnapsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105cbb3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3a60;
    _objc_opt_class(PTR_PTR_1126c3a60);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    bVar1 = param_4 != 0;
    if (param_4 != 0) {
      func_0x00010be257e0(param_1);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105cbb4d8; end: 105cbb6db; -[SCMemoriesAddSnapsActionHandler _handleAddToStory:] */

void FUN_105cbb4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c38d8;
  _objc_alloc(PTR_PTR_1126c38d8);
  uVar2 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  puVar5 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0xd;
  func_0x00010bafa2a4(0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar5);
  func_0x00010c017340(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c142b00(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105cbb6dc; end: 105cbb747;  */

void FUN_105cbb6dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf4b2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c136be0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbb748; end: 105cbb75f; -[SCMemoriesAddSnapsActionHandler containerViewController] */

void FUN_105cbb748(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbb760; end: 105cbb76b; -[SCMemoriesAddSnapsActionHandler setContainerViewController:] */

void FUN_105cbb760(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105cbb76c; end: 105cbb783; -[SCMemoriesAddSnapsActionHandler workFlowDelegate] */

void FUN_105cbb76c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbb784; end: 105cbb78f; -[SCMemoriesAddSnapsActionHandler setWorkFlowDelegate:] */

void FUN_105cbb784(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105cbb790; end: 105cbb7ff; -[SCMemoriesAddSnapsActionHandler .cxx_destruct] */

void FUN_105cbb790(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105cbb800; end: 105cbbaeb; -[SCMemoriesAddSnapsDataProvider initWithActionHandler:disabledSnapIds:config:cloudSync:gridTabsService:memoriesCameraRollTabService:currentPageTracker:cameraRollFirst:grapheneRegistry:applicationLifecycleEvents:cameraConfig:circumstanceEngine:cameraRollAlbumPickerScopeExposer:memoriesExperimentService:] */

undefined8 *
FUN_105cbb800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126ecbb0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x10,param_16);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105cbbaec; end: 105cbbde7; -[SCMemoriesAddSnapsDataProvider tabControllers] */

void FUN_105cbbaec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar15 = *(long *)(param_1 + 0x18);
  if (lVar15 != 0) goto LAB_105cbbdbc;
  puVar9 = PTR_PTR_1126b2290;
  _objc_alloc_init(PTR_PTR_1126b2290);
  func_0x00010c210120();
  func_0x00010c1a81c0(puVar9,param_2,1);
  func_0x00010c1a81a0(puVar9,param_2,1);
  func_0x00010c167300(puVar9,param_2,1);
  func_0x00010c18ec80(puVar9,param_2,*(undefined8 *)(param_1 + 8));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf01500(uVar10);
  func_0x00010c210160(puVar9,param_2,uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1525e0(uVar10);
  func_0x00010c1f7cc0(puVar9,param_2,uVar10);
  iVar8 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf01380();
  if (iVar8 == 0) {
LAB_105cbbba0:
    iVar8 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bf01660();
    if (iVar8 != 0) {
      uVar11 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf01380();
      if ((uVar11 & 1) == 0) {
        func_0x00010c221620(puVar9,param_2,1);
        goto LAB_105cbbbec;
      }
    }
    uVar11 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf01660();
    if ((uVar11 & 1) == 0) {
      func_0x00010bf01380(*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf01660();
    if ((uVar11 & 1) != 0) goto LAB_105cbbba0;
    func_0x00010c1db400(puVar9,param_2,1);
  }
LAB_105cbbbec:
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  iVar8 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c23a060();
  if (iVar8 != 0) {
    puVar13 = PTR_PTR_1126b2298;
    _objc_alloc(PTR_PTR_1126b2298);
    lVar15 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar15);
    func_0x00010c002900(puVar13,param_2,lVar15,puVar9,param_1,*(undefined8 *)(param_1 + 0x58),3,0,0,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar15);
    func_0x00010befa120(puVar12,param_2,puVar13);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf011a0();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar10);
    _objc_release(puVar13);
  }
  iVar8 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c236680();
  if (iVar8 != 0) {
    puVar13 = PTR_PTR_1126c3a68;
    _objc_alloc();
    lVar15 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar15);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    lVar14 = param_1 + 0x80;
    _objc_loadWeakRetained();
    func_0x00010c0029e0(puVar13,param_2,lVar15,0,puVar9,param_1,4,uVar10,uVar1,uVar4,uVar5,uVar3,
                        uVar2,uVar6,uVar7,lVar14);
    _objc_release(lVar14);
    _objc_release(lVar15);
    func_0x00010befa120(puVar12,param_2,puVar13);
    _objc_release(puVar13);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar16 = puVar12;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar13;
    _objc_release(uVar10);
  }
  else {
    puVar13 = puVar12;
    func_0x00010bf51e00();
    puVar16 = *(undefined **)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar13;
  }
  _objc_release(puVar16);
  _objc_release(puVar12);
  _objc_release(puVar9);
  lVar15 = *(long *)(param_1 + 0x18);
LAB_105cbbdbc:
  _objc_retain(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar15);
  return;
}



/* Entry: 105cbbde8; end: 105cbbf23; -[SCMemoriesAddSnapsDataProvider selectedItemCount] */

undefined ** FUN_105cbbde8(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar8;
  undefined *unaff_x23;
  undefined **unaff_x24;
  long lVar9;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_728;
  undefined8 uStack_720;
  code *pcStack_718;
  undefined *puStack_710;
  undefined **ppuStack_708;
  undefined8 ***pppuStack_700;
  code *pcStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long *plStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  long lStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined8 ***pppuStack_5e0;
  code *pcStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_508;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_3d8;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar6 = (undefined **)0x0;
    unaff_x24 = (undefined **)*puStack_120;
    unaff_x25 = &PTR_s_selectedGeoFilterId_112634000;
    do {
      unaff_x22 = PTR_s_selectedItemCount_112634068;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        puVar4 = unaff_x23;
        func_0x00010c0834c0();
        if (((int)puVar4 != 0) &&
           (puVar4 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22),
           ((ulong)puVar4 & 1) != 0)) {
          puVar4 = unaff_x23;
          func_0x00010c159920();
          ppuVar6 = (undefined **)(puVar4 + (long)ppuVar6);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = param_1;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
    unaff_x21 = (undefined **)0x0;
  }
  ppuVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105cbbf24;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_180 = unaff_x26;
  ppuStack_178 = unaff_x25;
  ppuStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  ppuStack_158 = unaff_x21;
  ppuStack_150 = ppuVar6;
  ppuStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_240;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_240 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x22 = *(undefined **)(lStack_248 + (long)unaff_x25 * 8);
        puVar4 = unaff_x22;
        func_0x00010c0834c0();
        if ((int)puVar4 != 0) {
          func_0x00010c159720();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x22;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(ppuVar2);
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar6 != unaff_x25);
      ppuVar6 = ppuVar1;
      func_0x00010bf52a60();
      unaff_x21 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    pcStack_258 = FUN_105cbc0a4;
    lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuStack_260 = &puStack_140;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    puStack_370 = (undefined8 *)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    func_0x00010c267b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_370;
      unaff_x25 = &PTR_s_selectedGeoFilterId_112634000;
      do {
        unaff_x22 = PTR_s_selectedSnapItems_112634228;
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_370 != unaff_x24) {
            _objc_enumerationMutation(ppuVar2);
          }
          unaff_x23 = *(undefined **)(lStack_378 + (long)unaff_x26 * 8);
          puVar4 = unaff_x23;
          func_0x00010c0834c0();
          if (((int)puVar4 != 0) &&
             (puVar4 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22),
             ((ulong)puVar4 & 1) != 0)) {
            func_0x00010c15a020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c280520(ppuVar6);
            _objc_release(unaff_x23);
          }
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar1 != unaff_x26);
        ppuVar1 = ppuVar2;
        func_0x00010bf52a60();
        unaff_x21 = (undefined **)0x0;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    ppuVar1 = ppuVar6;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
      ___stack_chk_fail();
      pcStack_388 = FUN_105cbc224;
      lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      pppuStack_390 = &ppuStack_260;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      puStack_490 = (undefined8 *)0x0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      func_0x00010be9e0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar6;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        unaff_x23 = (undefined *)*puStack_490;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if ((undefined *)*puStack_490 != unaff_x23) {
              _objc_enumerationMutation(ppuVar6);
            }
            unaff_x22 = *(undefined **)(lStack_498 + (long)unaff_x24 * 8);
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar2);
            _objc_release(unaff_x22);
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar1 != unaff_x24);
          ppuVar1 = ppuVar6;
          func_0x00010bf52a60();
          unaff_x21 = (undefined **)0x0;
        } while (ppuVar1 != (undefined **)0x0);
      }
      _objc_release(ppuVar6);
      ppuVar1 = ppuVar2;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
        ___stack_chk_fail();
        pcStack_4a8 = FUN_105cbc37c;
        lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar1 = ppuVar2;
        pppuStack_4b0 = &pppuStack_390;
        func_0x00010c159720();
        _objc_retainAutoreleasedReturnValue();
        lStack_5c8 = 0;
        uStack_5d0 = 0;
        uStack_5b8 = 0;
        puStack_5c0 = (undefined8 *)0x0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        _objc_retain();
        ppuVar6 = ppuVar1;
        func_0x00010bf52a60();
        if (ppuVar6 != (undefined **)0x0) {
          unaff_x24 = (undefined **)*puStack_5c0;
          unaff_x25 = &PTR_PTR_1126bd000;
          unaff_x21 = ppuVar6;
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)*puStack_5c0 != unaff_x24) {
                _objc_enumerationMutation(ppuVar1);
              }
              unaff_x22 = *(undefined **)(lStack_5c8 + (long)unaff_x26 * 8);
              puVar3 = unaff_x22;
              func_0x00010bfbd100();
              puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
              if (puVar3 == (undefined *)0x2) {
                _objc_retain(unaff_x22);
                _objc_opt_class(puVar4);
                puVar3 = unaff_x22;
                _objc_opt_isKindOfClass(unaff_x22,puVar4);
                unaff_x23 = unaff_x22;
                if (((ulong)puVar3 & 1) == 0) {
                  unaff_x23 = (undefined *)0x0;
                }
                _objc_retain(unaff_x23);
                _objc_release(unaff_x22);
                puVar4 = unaff_x23;
                func_0x00010c0c6c20();
                if ((puVar4 == (undefined *)0x2) &&
                   (puVar4 = unaff_x23, func_0x000107f70018(unaff_x23,ppuVar2[9]),
                   ((ulong)puVar4 & 1) != 0)) {
                  _objc_release(unaff_x23);
                  ppuVar6 = (undefined **)0x0;
                  goto LAB_105cbc4c8;
                }
                _objc_release(unaff_x23);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (unaff_x21 != unaff_x26);
            unaff_x21 = ppuVar1;
            func_0x00010bf52a60();
          } while (unaff_x21 != (undefined **)0x0);
        }
        ppuVar6 = (undefined **)0x1;
LAB_105cbc4c8:
        _objc_release(ppuVar1);
        ppuVar2 = ppuVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
          return ppuVar6;
        }
        ___stack_chk_fail();
        pcStack_5d8 = FUN_105cbc518;
        lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_6e8 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        plStack_6e0 = (long *)0x0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6b8 = 0;
        uStack_6c0 = 0;
        ppuVar7 = (undefined **)ppuVar2[3];
        ppuStack_620 = unaff_x26;
        ppuStack_618 = unaff_x25;
        ppuStack_610 = unaff_x24;
        puStack_608 = unaff_x23;
        puStack_600 = unaff_x22;
        ppuStack_5f8 = unaff_x21;
        ppuStack_5f0 = ppuVar6;
        ppuStack_5e8 = ppuVar1;
        pppuStack_5e0 = &pppuStack_4b0;
        _objc_retain(ppuVar7);
        ppuVar1 = ppuVar7;
        func_0x00010bf52a60();
        if (ppuVar1 != (undefined **)0x0) {
          lVar9 = *plStack_6e0;
          do {
            ppuVar6 = (undefined **)0x0;
            do {
              if (*plStack_6e0 != lVar9) {
                _objc_enumerationMutation(ppuVar7);
              }
              uVar8 = *(undefined8 *)(lStack_6e8 + (long)ppuVar6 * 8);
              puVar4 = ppuVar2[10];
              func_0x00010c269d40(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c076be0();
              func_0x00010c1beb60(uVar8);
              _objc_release(puVar4);
              ppuVar6 = (undefined **)((long)ppuVar6 + 1);
            } while (ppuVar1 != ppuVar6);
            ppuVar1 = ppuVar7;
            func_0x00010bf52a60();
          } while (ppuVar1 != (undefined **)0x0);
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_628) {
          ___stack_chk_fail();
          pcStack_6f8 = FUN_105cbc63c;
          puStack_728 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_720 = 0xc2000000;
          pcStack_718 = FUN_105cbc694;
          puStack_710 = &UNK_110842e18;
          pcVar5 = "APPSTORE";
          ppuStack_708 = ppuVar7;
          pppuStack_700 = &pppuStack_5e0;
          func_0x000100162d98("APPSTORE",&puStack_728);
          return (undefined **)pcVar5;
        }
        return ppuVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 105cbbf24; end: 105cbc0a3; -[SCMemoriesAddSnapsDataProvider selectedGalleryItems] */

char * FUN_105cbbf24(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar8;
  undefined *unaff_x23;
  char *unaff_x24;
  long lVar9;
  undefined **unaff_x25;
  char *pcVar10;
  char *unaff_x26;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  code *pcStack_5e8;
  undefined *puStack_5e0;
  char *pcStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_4f8;
  char *pcStack_4f0;
  undefined **ppuStack_4e8;
  char *pcStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_3d8;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (char *)*puStack_110;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((char *)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(undefined **)(lStack_118 + (long)unaff_x25 * 8);
        puVar2 = unaff_x22;
        func_0x00010c0834c0();
        if ((int)puVar2 != 0) {
          func_0x00010c159720();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x22;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(pcVar6);
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar1 != unaff_x25);
      ppuVar1 = param_1;
      func_0x00010bf52a60();
      unaff_x21 = (char *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  pcVar10 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105cbc0a4;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    puStack_240 = (undefined8 *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x00010c267b40();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar6;
    func_0x00010bf52a60();
    if (pcVar10 != (char *)0x0) {
      unaff_x24 = (char *)*puStack_240;
      unaff_x25 = &PTR_s_selectedGeoFilterId_112634000;
      do {
        unaff_x22 = PTR_s_selectedSnapItems_112634228;
        unaff_x26 = (char *)0x0;
        do {
          if ((char *)*puStack_240 != unaff_x24) {
            _objc_enumerationMutation(pcVar6);
          }
          unaff_x23 = *(undefined **)(lStack_248 + (long)unaff_x26 * 8);
          puVar2 = unaff_x23;
          func_0x00010c0834c0();
          if (((int)puVar2 != 0) &&
             (puVar2 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22),
             ((ulong)puVar2 & 1) != 0)) {
            func_0x00010c15a020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c280520(pcVar3);
            _objc_release(unaff_x23);
          }
          unaff_x26 = unaff_x26 + 1;
        } while (pcVar10 != unaff_x26);
        pcVar10 = pcVar6;
        func_0x00010bf52a60();
        unaff_x21 = (char *)0x0;
      } while (pcVar10 != (char *)0x0);
    }
    _objc_release(pcVar6);
    pcVar10 = pcVar3;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      pcStack_258 = FUN_105cbc224;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      ppuStack_260 = &puStack_130;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      puStack_360 = (undefined8 *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      func_0x00010be9e0e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar3;
      func_0x00010bf52a60();
      if (pcVar10 != (char *)0x0) {
        unaff_x23 = (undefined *)*puStack_360;
        do {
          unaff_x24 = (char *)0x0;
          do {
            if ((undefined *)*puStack_360 != unaff_x23) {
              _objc_enumerationMutation(pcVar3);
            }
            unaff_x22 = *(undefined **)(lStack_368 + (long)unaff_x24 * 8);
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(pcVar6);
            _objc_release(unaff_x22);
            unaff_x24 = unaff_x24 + 1;
          } while (pcVar10 != unaff_x24);
          pcVar10 = pcVar3;
          func_0x00010bf52a60();
          unaff_x21 = (char *)0x0;
        } while (pcVar10 != (char *)0x0);
      }
      _objc_release(pcVar3);
      pcVar10 = pcVar6;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
        ___stack_chk_fail();
        pcStack_378 = FUN_105cbc37c;
        lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar10 = pcVar6;
        pppuStack_380 = &ppuStack_260;
        func_0x00010c159720();
        _objc_retainAutoreleasedReturnValue();
        lStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        puStack_490 = (undefined8 *)0x0;
        uStack_478 = 0;
        uStack_480 = 0;
        uStack_468 = 0;
        uStack_470 = 0;
        _objc_retain();
        pcVar3 = pcVar10;
        func_0x00010bf52a60();
        if (pcVar3 != (char *)0x0) {
          unaff_x24 = (char *)*puStack_490;
          unaff_x25 = &PTR_PTR_1126bd000;
          unaff_x21 = pcVar3;
          do {
            unaff_x26 = (char *)0x0;
            do {
              if ((char *)*puStack_490 != unaff_x24) {
                _objc_enumerationMutation(pcVar10);
              }
              unaff_x22 = *(undefined **)(lStack_498 + (long)unaff_x26 * 8);
              puVar4 = unaff_x22;
              func_0x00010bfbd100();
              puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
              if (puVar4 == (undefined *)0x2) {
                _objc_retain(unaff_x22);
                _objc_opt_class(puVar2);
                puVar4 = unaff_x22;
                _objc_opt_isKindOfClass(unaff_x22,puVar2);
                unaff_x23 = unaff_x22;
                if (((ulong)puVar4 & 1) == 0) {
                  unaff_x23 = (undefined *)0x0;
                }
                _objc_retain(unaff_x23);
                _objc_release(unaff_x22);
                puVar2 = unaff_x23;
                func_0x00010c0c6c20();
                if ((puVar2 == (undefined *)0x2) &&
                   (puVar2 = unaff_x23,
                   func_0x000107f70018(unaff_x23,*(undefined8 *)(pcVar6 + 0x48)),
                   ((ulong)puVar2 & 1) != 0)) {
                  _objc_release(unaff_x23);
                  pcVar6 = (char *)0x0;
                  goto LAB_105cbc4c8;
                }
                _objc_release(unaff_x23);
              }
              unaff_x26 = unaff_x26 + 1;
            } while (unaff_x21 != unaff_x26);
            unaff_x21 = pcVar10;
            func_0x00010bf52a60();
          } while (unaff_x21 != (char *)0x0);
        }
        pcVar6 = (char *)0x1;
LAB_105cbc4c8:
        _objc_release(pcVar10);
        pcVar3 = pcVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
          return pcVar6;
        }
        ___stack_chk_fail();
        pcStack_4a8 = FUN_105cbc518;
        lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5a8 = 0;
        plStack_5b0 = (long *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        pcVar7 = *(char **)(pcVar3 + 0x18);
        pcStack_4f0 = unaff_x26;
        ppuStack_4e8 = unaff_x25;
        pcStack_4e0 = unaff_x24;
        puStack_4d8 = unaff_x23;
        puStack_4d0 = unaff_x22;
        pcStack_4c8 = unaff_x21;
        pcStack_4c0 = pcVar6;
        pcStack_4b8 = pcVar10;
        pppuStack_4b0 = &pppuStack_380;
        _objc_retain(pcVar7);
        pcVar6 = pcVar7;
        func_0x00010bf52a60();
        if (pcVar6 != (char *)0x0) {
          lVar9 = *plStack_5b0;
          do {
            pcVar10 = (char *)0x0;
            do {
              if (*plStack_5b0 != lVar9) {
                _objc_enumerationMutation(pcVar7);
              }
              uVar8 = *(undefined8 *)(lStack_5b8 + (long)pcVar10 * 8);
              uVar5 = *(undefined8 *)(pcVar3 + 0x50);
              func_0x00010c269d40(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c076be0();
              func_0x00010c1beb60(uVar8);
              _objc_release(uVar5);
              pcVar10 = pcVar10 + 1;
            } while (pcVar6 != pcVar10);
            pcVar6 = pcVar7;
            func_0x00010bf52a60();
          } while (pcVar6 != (char *)0x0);
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
          ___stack_chk_fail();
          pcStack_5c8 = FUN_105cbc63c;
          puStack_5f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_5f0 = 0xc2000000;
          pcStack_5e8 = FUN_105cbc694;
          puStack_5e0 = &UNK_110842e18;
          pcVar6 = "APPSTORE";
          pcStack_5d8 = pcVar7;
          pppuStack_5d0 = &pppuStack_4b0;
          func_0x000100162d98("APPSTORE",&puStack_5f8);
          return pcVar6;
        }
        return pcVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar10);
  return pcVar10;
}



/* Entry: 105cbc0a4; end: 105cbc223; -[SCMemoriesAddSnapsDataProvider _selectedSnapItems] */

char * FUN_105cbc0a4(char *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar8;
  undefined *unaff_x23;
  char *unaff_x24;
  long lVar9;
  undefined **unaff_x25;
  char *unaff_x26;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  char *pcStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_3d8;
  char *pcStack_3d0;
  undefined **ppuStack_3c8;
  char *pcStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = param_1;
  func_0x00010bf52a60();
  if (pcVar6 != (char *)0x0) {
    unaff_x24 = (char *)*puStack_120;
    unaff_x25 = &PTR_s_selectedGeoFilterId_112634000;
    do {
      unaff_x22 = PTR_s_selectedSnapItems_112634228;
      unaff_x26 = (char *)0x0;
      do {
        if ((char *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        func_0x00010c0834c0();
        if (((int)puVar2 != 0) &&
           (puVar2 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22),
           ((ulong)puVar2 & 1) != 0)) {
          func_0x00010c15a020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280520(pcVar1);
          _objc_release(unaff_x23);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (pcVar6 != unaff_x26);
      pcVar6 = param_1;
      func_0x00010bf52a60();
      unaff_x21 = (char *)0x0;
    } while (pcVar6 != (char *)0x0);
  }
  _objc_release(param_1);
  pcVar6 = pcVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105cbc224;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    puStack_240 = (undefined8 *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x00010be9e0e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar1;
    func_0x00010bf52a60();
    if (pcVar6 != (char *)0x0) {
      unaff_x23 = (undefined *)*puStack_240;
      do {
        unaff_x24 = (char *)0x0;
        do {
          if ((undefined *)*puStack_240 != unaff_x23) {
            _objc_enumerationMutation(pcVar1);
          }
          unaff_x22 = *(undefined **)(lStack_248 + (long)unaff_x24 * 8);
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(pcVar3);
          _objc_release(unaff_x22);
          unaff_x24 = unaff_x24 + 1;
        } while (pcVar6 != unaff_x24);
        pcVar6 = pcVar1;
        func_0x00010bf52a60();
        unaff_x21 = (char *)0x0;
      } while (pcVar6 != (char *)0x0);
    }
    _objc_release(pcVar1);
    pcVar6 = pcVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      pcStack_258 = FUN_105cbc37c;
      lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar3;
      ppuStack_260 = &puStack_140;
      func_0x00010c159720();
      _objc_retainAutoreleasedReturnValue();
      lStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      puStack_370 = (undefined8 *)0x0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      _objc_retain();
      pcVar6 = pcVar1;
      func_0x00010bf52a60();
      if (pcVar6 != (char *)0x0) {
        unaff_x24 = (char *)*puStack_370;
        unaff_x25 = &PTR_PTR_1126bd000;
        unaff_x21 = pcVar6;
        do {
          unaff_x26 = (char *)0x0;
          do {
            if ((char *)*puStack_370 != unaff_x24) {
              _objc_enumerationMutation(pcVar1);
            }
            unaff_x22 = *(undefined **)(lStack_378 + (long)unaff_x26 * 8);
            puVar4 = unaff_x22;
            func_0x00010bfbd100();
            puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
            if (puVar4 == (undefined *)0x2) {
              _objc_retain(unaff_x22);
              _objc_opt_class(puVar2);
              puVar4 = unaff_x22;
              _objc_opt_isKindOfClass(unaff_x22,puVar2);
              unaff_x23 = unaff_x22;
              if (((ulong)puVar4 & 1) == 0) {
                unaff_x23 = (undefined *)0x0;
              }
              _objc_retain(unaff_x23);
              _objc_release(unaff_x22);
              puVar2 = unaff_x23;
              func_0x00010c0c6c20();
              if ((puVar2 == (undefined *)0x2) &&
                 (puVar2 = unaff_x23, func_0x000107f70018(unaff_x23,*(undefined8 *)(pcVar3 + 0x48)),
                 ((ulong)puVar2 & 1) != 0)) {
                _objc_release(unaff_x23);
                pcVar6 = (char *)0x0;
                goto LAB_105cbc4c8;
              }
              _objc_release(unaff_x23);
            }
            unaff_x26 = unaff_x26 + 1;
          } while (unaff_x21 != unaff_x26);
          unaff_x21 = pcVar1;
          func_0x00010bf52a60();
        } while (unaff_x21 != (char *)0x0);
      }
      pcVar6 = (char *)0x1;
LAB_105cbc4c8:
      _objc_release(pcVar1);
      pcVar3 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
        return pcVar6;
      }
      ___stack_chk_fail();
      pcStack_388 = FUN_105cbc518;
      lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      plStack_490 = (long *)0x0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      pcVar7 = *(char **)(pcVar3 + 0x18);
      pcStack_3d0 = unaff_x26;
      ppuStack_3c8 = unaff_x25;
      pcStack_3c0 = unaff_x24;
      puStack_3b8 = unaff_x23;
      puStack_3b0 = unaff_x22;
      pcStack_3a8 = unaff_x21;
      pcStack_3a0 = pcVar6;
      pcStack_398 = pcVar1;
      pppuStack_390 = &ppuStack_260;
      _objc_retain(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bf52a60();
      if (pcVar1 != (char *)0x0) {
        lVar9 = *plStack_490;
        do {
          pcVar6 = (char *)0x0;
          do {
            if (*plStack_490 != lVar9) {
              _objc_enumerationMutation(pcVar7);
            }
            uVar8 = *(undefined8 *)(lStack_498 + (long)pcVar6 * 8);
            uVar5 = *(undefined8 *)(pcVar3 + 0x50);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c076be0();
            func_0x00010c1beb60(uVar8);
            _objc_release(uVar5);
            pcVar6 = pcVar6 + 1;
          } while (pcVar1 != pcVar6);
          pcVar1 = pcVar7;
          func_0x00010bf52a60();
        } while (pcVar1 != (char *)0x0);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
        ___stack_chk_fail();
        pcStack_4a8 = FUN_105cbc63c;
        puStack_4d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_4d0 = 0xc2000000;
        pcStack_4c8 = FUN_105cbc694;
        puStack_4c0 = &UNK_110842e18;
        pcVar1 = "APPSTORE";
        pcStack_4b8 = pcVar7;
        pppuStack_4b0 = &pppuStack_390;
        func_0x000100162d98("APPSTORE",&puStack_4d8);
        return pcVar1;
      }
      return pcVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar6);
  return pcVar6;
}



/* Entry: 105cbc224; end: 105cbc37b; -[SCMemoriesAddSnapsDataProvider selectedGallerySnaps] */

char * FUN_105cbc224(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar7;
  ulong unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined **unaff_x25;
  char *pcVar9;
  char *unaff_x26;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  char *pcStack_388;
  undefined8 **ppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  char *pcStack_2a0;
  undefined **ppuStack_298;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010be9e0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    unaff_x23 = *puStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(ulong *)(lStack_118 + unaff_x24 * 8);
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(pcVar5);
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar8 != unaff_x24);
      lVar8 = param_1;
      func_0x00010bf52a60();
      unaff_x21 = (char *)0x0;
    } while (lVar8 != 0);
  }
  _objc_release(param_1);
  pcVar9 = pcVar5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar9);
    return pcVar9;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105cbc37c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar5;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain();
  pcVar1 = pcVar9;
  func_0x00010bf52a60();
  if (pcVar1 != (char *)0x0) {
    unaff_x24 = *plStack_240;
    unaff_x25 = &PTR_PTR_1126bd000;
    unaff_x21 = pcVar1;
    do {
      unaff_x26 = (char *)0x0;
      do {
        if (*plStack_240 != unaff_x24) {
          _objc_enumerationMutation(pcVar9);
        }
        unaff_x22 = *(ulong *)(lStack_248 + (long)unaff_x26 * 8);
        uVar2 = unaff_x22;
        func_0x00010bfbd100();
        puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        if (uVar2 == 2) {
          _objc_retain(unaff_x22);
          _objc_opt_class(puVar3);
          uVar2 = unaff_x22;
          _objc_opt_isKindOfClass(unaff_x22,puVar3);
          unaff_x23 = unaff_x22;
          if ((uVar2 & 1) == 0) {
            unaff_x23 = 0;
          }
          _objc_retain(unaff_x23);
          _objc_release(unaff_x22);
          uVar2 = unaff_x23;
          func_0x00010c0c6c20();
          if ((uVar2 == 2) &&
             (uVar2 = unaff_x23, func_0x000107f70018(unaff_x23,*(undefined8 *)(pcVar5 + 0x48)),
             (uVar2 & 1) != 0)) {
            _objc_release(unaff_x23);
            pcVar5 = (char *)0x0;
            goto LAB_105cbc4c8;
          }
          _objc_release(unaff_x23);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x21 != unaff_x26);
      unaff_x21 = pcVar9;
      func_0x00010bf52a60();
    } while (unaff_x21 != (char *)0x0);
  }
  pcVar5 = (char *)0x1;
LAB_105cbc4c8:
  _objc_release(pcVar9);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar5;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_105cbc518;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  pcVar6 = *(char **)(pcVar1 + 0x18);
  pcStack_2a0 = unaff_x26;
  ppuStack_298 = unaff_x25;
  lStack_290 = unaff_x24;
  uStack_288 = unaff_x23;
  uStack_280 = unaff_x22;
  pcStack_278 = unaff_x21;
  pcStack_270 = pcVar5;
  pcStack_268 = pcVar9;
  ppuStack_260 = &puStack_130;
  _objc_retain(pcVar6);
  pcVar5 = pcVar6;
  func_0x00010bf52a60();
  if (pcVar5 != (char *)0x0) {
    lVar8 = *plStack_360;
    do {
      pcVar9 = (char *)0x0;
      do {
        if (*plStack_360 != lVar8) {
          _objc_enumerationMutation(pcVar6);
        }
        uVar7 = *(undefined8 *)(lStack_368 + (long)pcVar9 * 8);
        uVar4 = *(undefined8 *)(pcVar1 + 0x50);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c076be0();
        func_0x00010c1beb60(uVar7);
        _objc_release(uVar4);
        pcVar9 = pcVar9 + 1;
      } while (pcVar5 != pcVar9);
      pcVar5 = pcVar6;
      func_0x00010bf52a60();
    } while (pcVar5 != (char *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return pcVar6;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_105cbc63c;
  puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a0 = 0xc2000000;
  pcStack_398 = FUN_105cbc694;
  puStack_390 = &UNK_110842e18;
  pcVar5 = "APPSTORE";
  pcStack_388 = pcVar6;
  ppuStack_380 = &ppuStack_260;
  func_0x000100162d98("APPSTORE",&puStack_3a8);
  return pcVar5;
}



/* Entry: 105cbc37c; end: 105cbc517; -[SCMemoriesAddSnapsDataProvider selectedCameraRollItemsEligibleForStory] */

char * FUN_105cbc37c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 uVar7;
  ulong unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined **unaff_x25;
  char *pcVar9;
  long unaff_x26;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  char *pcStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  char *pcStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x24 = *plStack_120;
    unaff_x25 = &PTR_PTR_1126bd000;
    unaff_x21 = lVar1;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(ulong *)(lStack_128 + unaff_x26 * 8);
        uVar2 = unaff_x22;
        func_0x00010bfbd100();
        puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        if (uVar2 == 2) {
          _objc_retain(unaff_x22);
          _objc_opt_class(puVar3);
          uVar2 = unaff_x22;
          _objc_opt_isKindOfClass(unaff_x22,puVar3);
          unaff_x23 = unaff_x22;
          if ((uVar2 & 1) == 0) {
            unaff_x23 = 0;
          }
          _objc_retain(unaff_x23);
          _objc_release(unaff_x22);
          uVar2 = unaff_x23;
          func_0x00010c0c6c20();
          if ((uVar2 == 2) &&
             (uVar2 = unaff_x23, func_0x000107f70018(unaff_x23,*(undefined8 *)(param_1 + 0x48)),
             (uVar2 & 1) != 0)) {
            _objc_release(unaff_x23);
            pcVar5 = (char *)0x0;
            goto LAB_105cbc4c8;
          }
          _objc_release(unaff_x23);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x21 != unaff_x26);
      unaff_x21 = lVar8;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  pcVar5 = (char *)0x1;
LAB_105cbc4c8:
  _objc_release(lVar8);
  lVar1 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pcVar5;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105cbc518;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  pcVar6 = *(char **)(lVar1 + 0x18);
  lStack_180 = unaff_x26;
  ppuStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  pcStack_150 = pcVar5;
  lStack_148 = lVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar6);
  pcVar5 = pcVar6;
  func_0x00010bf52a60();
  if (pcVar5 != (char *)0x0) {
    lVar8 = *plStack_240;
    do {
      pcVar9 = (char *)0x0;
      do {
        if (*plStack_240 != lVar8) {
          _objc_enumerationMutation(pcVar6);
        }
        uVar7 = *(undefined8 *)(lStack_248 + (long)pcVar9 * 8);
        uVar4 = *(undefined8 *)(lVar1 + 0x50);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c076be0();
        func_0x00010c1beb60(uVar7);
        _objc_release(uVar4);
        pcVar9 = pcVar9 + 1;
      } while (pcVar5 != pcVar9);
      pcVar5 = pcVar6;
      func_0x00010bf52a60();
    } while (pcVar5 != (char *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar6;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_105cbc63c;
  puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_105cbc694;
  puStack_270 = &UNK_110842e18;
  pcVar5 = "APPSTORE";
  pcStack_268 = pcVar6;
  ppuStack_260 = &puStack_140;
  func_0x000100162d98("APPSTORE",&puStack_288);
  return pcVar5;
}



/* Entry: 105cbc518; end: 105cbc63b; -[SCMemoriesAddSnapsDataProvider _updateCloudSyncLoadingState] */

void FUN_105cbc518(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar2 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c076be0();
        func_0x00010c1beb60(uVar4);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105cbc63c;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_105cbc694;
  puStack_140 = &UNK_110842e18;
  lStack_138 = lVar3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000100162d98("APPSTORE",&puStack_158);
  return;
}



/* Entry: 105cbc63c; end: 105cbc693; -[SCMemoriesAddSnapsDataProvider cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_105cbc63c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105cbc694;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105cbc694; end: 105cbc69b;  */

void FUN_105cbc694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCloudSyncLoadingState_112592f08);
  return;
}



/* Entry: 105cbc69c; end: 105cbc69f; -[SCMemoriesAddSnapsDataProvider tabController:browseSelected:initialItemId:items:fromView:context:] */

void FUN_105cbc69c(void)

{
  return;
}



/* Entry: 105cbc6a0; end: 105cbc6a3; -[SCMemoriesAddSnapsDataProvider tabController:browseSelected:initialItemId:items:fromView:context:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_105cbc6a0(void)

{
  return;
}



/* Entry: 105cbc6a4; end: 105cbc6ab; -[SCMemoriesAddSnapsDataProvider tabController:requestsSelectMode:isFromLongPress:] */

undefined8 FUN_105cbc6a4(void)

{
  return 0;
}



/* Entry: 105cbc6ac; end: 105cbc6b3; -[SCMemoriesAddSnapsDataProvider tabControllerRequestsNavigationToTab:] */

undefined8 FUN_105cbc6ac(void)

{
  return 0;
}



/* Entry: 105cbc6b4; end: 105cbc6b7; -[SCMemoriesAddSnapsDataProvider tabControllerRequestsNavigationToTab:withAutoScrollItem:] */

void FUN_105cbc6b4(void)

{
  return;
}



/* Entry: 105cbc6b8; end: 105cbc6bb; -[SCMemoriesAddSnapsDataProvider tabController:requestsAddToStorySelectModeForItem:] */

void FUN_105cbc6b8(void)

{
  return;
}



/* Entry: 105cbc6bc; end: 105cbc6bf; -[SCMemoriesAddSnapsDataProvider cameraRollTabControllerDidDisplayAlbumsPicker:] */

void FUN_105cbc6bc(void)

{
  return;
}



/* Entry: 105cbc6c0; end: 105cbc6c3; -[SCMemoriesAddSnapsDataProvider cameraRollTabControllerDidDismissAlbumsPicker:] */

void FUN_105cbc6c0(void)

{
  return;
}



/* Entry: 105cbc6c4; end: 105cbc6c7; -[SCMemoriesAddSnapsDataProvider tabControllerDidChangeScrollContentOffsetWithTabController:contentOffset:] */

void FUN_105cbc6c4(void)

{
  return;
}



/* Entry: 105cbc6c8; end: 105cbc6cb; -[SCMemoriesAddSnapsDataProvider tabController:didChangeDisplayedContent:] */

void FUN_105cbc6c8(void)

{
  return;
}



/* Entry: 105cbc6cc; end: 105cbc6ff; -[SCMemoriesAddSnapsDataProvider tabController:didChangeSelected:forGalleryItem:] */

void FUN_105cbc6cc(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbc700; end: 105cbc733; -[SCMemoriesAddSnapsDataProvider tabController:didChangeSelected:forGallerySnapItem:] */

void FUN_105cbc700(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbc734; end: 105cbc767; -[SCMemoriesAddSnapsDataProvider tabController:didChangeSelected:forItems:snapItems:] */

void FUN_105cbc734(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbc768; end: 105cbc76b; -[SCMemoriesAddSnapsDataProvider tabControllerWillBeginDragging:] */

void FUN_105cbc768(void)

{
  return;
}



/* Entry: 105cbc76c; end: 105cbc76f; -[SCMemoriesAddSnapsDataProvider tabControllerDidEndDragging:willDecelerate:] */

void FUN_105cbc76c(void)

{
  return;
}



/* Entry: 105cbc770; end: 105cbc773; -[SCMemoriesAddSnapsDataProvider tabControllerDidEndDecelerating:] */

void FUN_105cbc770(void)

{
  return;
}



/* Entry: 105cbc774; end: 105cbc777; -[SCMemoriesAddSnapsDataProvider tabControllerDidBeginEditing:] */

void FUN_105cbc774(void)

{
  return;
}



/* Entry: 105cbc778; end: 105cbc77b; -[SCMemoriesAddSnapsDataProvider tabControllerDidEndEditing:] */

void FUN_105cbc778(void)

{
  return;
}



/* Entry: 105cbc77c; end: 105cbc783; -[SCMemoriesAddSnapsDataProvider tabControllerTopInset:] */

undefined8 FUN_105cbc77c(void)

{
  return 0;
}



/* Entry: 105cbc784; end: 105cbc78b; -[SCMemoriesAddSnapsDataProvider operaPresenterTopInset] */

undefined8 FUN_105cbc784(void)

{
  return 0;
}



/* Entry: 105cbc78c; end: 105cbc793; -[SCMemoriesAddSnapsDataProvider tabControllerCollectionViewIsFullyVisible:] */

undefined8 FUN_105cbc78c(void)

{
  return 1;
}



/* Entry: 105cbc794; end: 105cbc797; -[SCMemoriesAddSnapsDataProvider tabControllerDidPresentOpera:] */

void FUN_105cbc794(void)

{
  return;
}



/* Entry: 105cbc798; end: 105cbc79b; -[SCMemoriesAddSnapsDataProvider tabControllerDidDismissOpera:] */

void FUN_105cbc798(void)

{
  return;
}



/* Entry: 105cbc79c; end: 105cbc79f; -[SCMemoriesAddSnapsDataProvider tabController:didTapEditStory:isCreatingStoryFromSelection:] */

void FUN_105cbc79c(void)

{
  return;
}



/* Entry: 105cbc7a0; end: 105cbc7a7; -[SCMemoriesAddSnapsDataProvider displayedTabController] */

undefined8 FUN_105cbc7a0(void)

{
  return 0;
}



/* Entry: 105cbc7a8; end: 105cbc7ab; -[SCMemoriesAddSnapsDataProvider tabController:didTriggerCreateMashupForStory:] */

void FUN_105cbc7a8(void)

{
  return;
}



/* Entry: 105cbc7ac; end: 105cbc7af; -[SCMemoriesAddSnapsDataProvider tabControllerDidFinishFirstDataLoad:] */

void FUN_105cbc7ac(void)

{
  return;
}



/* Entry: 105cbc7b0; end: 105cbc7c7; -[SCMemoriesAddSnapsDataProvider containerViewController] */

void FUN_105cbc7b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbc7c8; end: 105cbc7d3; -[SCMemoriesAddSnapsDataProvider setContainerViewController:] */

void FUN_105cbc7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105cbc7d4; end: 105cbc7eb; -[SCMemoriesAddSnapsDataProvider delegate] */

void FUN_105cbc7d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbc7ec; end: 105cbc7f7; -[SCMemoriesAddSnapsDataProvider setDelegate:] */

void FUN_105cbc7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 105cbc7f8; end: 105cbc8c3; -[SCMemoriesAddSnapsDataProvider .cxx_destruct] */

void FUN_105cbc7f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cbc8c4; end: 105cbcfdb; -[SCMemoriesAddSnapsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbc8c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar1 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1430e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000105cbd000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar5 != 0) {
    func_0x00010bf1f440();
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126c3a70;
  _objc_alloc();
  lVar1 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf80e60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112733b9c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar22;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112733b90;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar23;
  func_0x00010bfce360();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112733b94;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar24;
  func_0x00010c0c8060();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000105cbd024();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112733ba0;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar27;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112733b84;
  lVar14 = lVar21;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112733ba4;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar25;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x000105cbd000();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar26 = 0;
    lVar28 = 0;
  }
  else {
    uVar26 = *(undefined8 *)(param_1 + _DAT_112733bb0);
    _objc_retain(uVar26);
    lVar28 = param_1 + _DAT_112733ba8;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar28;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff02a0();
  _objc_release(uVar26);
  _objc_release(lVar19);
  _objc_release(lVar28);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar25);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar20 = PTR_PTR_1126c3a78;
  _objc_alloc();
  lVar1 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b2e0();
  lVar7 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar7;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar8;
  func_0x00010c143000();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_105cbcfdc();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar9;
  func_0x00010c1430e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000105cbd024();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar12 = lVar21;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112733bac;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar27;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0280();
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  FUN_105cbcfdc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf0c9a0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar20);
  _objc_release(puVar6);
  return;
}



/* Entry: 105cbcfdc; end: 105cbd047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbcfdc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112733b88);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbd048; end: 105cbd073;  */

void FUN_105cbd048(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27ebe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbd074; end: 105cbd0ff; -[SCMemoriesAddSnapsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbd074(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112733b88;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ecbb8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cbd100; end: 105cbd163; -[SCMemoriesAddSnapsEntryPoint uiAttached] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbd100(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112733b88;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didPresentPage_1125bbb48);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf78680(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cbd164; end: 105cbd217; -[SCMemoriesAddSnapsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbd164(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733bb0,0);
  _objc_destroyWeak(param_1 + _DAT_112733bac);
  _objc_destroyWeak(param_1 + _DAT_112733ba8);
  _objc_destroyWeak(param_1 + _DAT_112733ba4);
  _objc_destroyWeak(param_1 + _DAT_112733ba0);
  _objc_destroyWeak(param_1 + _DAT_112733b9c);
  _objc_destroyWeak(param_1 + _DAT_112733b98);
  _objc_destroyWeak(param_1 + _DAT_112733b94);
  _objc_destroyWeak(param_1 + _DAT_112733b90);
  _objc_destroyWeak(param_1 + _DAT_112733b8c);
  _objc_destroyWeak(param_1 + _DAT_112733b84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733b88);
  return;
}



/* Entry: 105cbd218; end: 105cbd3e3;  */

void FUN_105cbd218(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  if ((param_3 - 1U < 2) || (param_3 == 3)) {
    uVar2 = param_1;
    func_0x00010bf43280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
  }
  else {
    if (param_3 != 0) goto LAB_105cbd314;
    _objc_retain(param_2);
    uVar2 = param_1;
    func_0x00010bf43280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
  }
  _objc_release(uVar2);
LAB_105cbd314:
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105cbd3e4; end: 105cbd3f3;  */

void FUN_105cbd3e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_duplicatedFromSnapId_1125c05d8);
  return;
}



/* Entry: 105cbd3f4; end: 105cbd797; -[SCMemoriesAddSnapsViewController initWithActionHandler:dataProvider:scopeDelegate:existingSnapsCount:config:s2rFeature:s2rSubFeature:currentPageTracker:cameraRollFirst:applicationLifecycleEvents:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105cbd3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_70 = PTR_PTR_1126ecbc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733bb4) = param_6;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112733bb8,param_5);
    lVar5 = (long)_DAT_112733bbc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    func_0x00010c181a60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c227260(*(undefined8 *)((long)puVar1 + lVar5));
    lVar5 = (long)_DAT_112733bc0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c181a60(*(undefined8 *)((long)puVar1 + lVar5));
    lVar5 = (long)_DAT_112733bc4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733bc8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733bcc;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733bd0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    func_0x00010c21e060(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112733bd4) = param_11;
    uVar2 = param_7;
    func_0x00010c251a40();
    *(char *)((long)puVar1 + (long)_DAT_112733bd8) = (char)uVar2;
    lVar5 = (long)_DAT_112733bdc;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733be0);
    *(undefined **)((long)puVar1 + (long)_DAT_112733be0) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_13;
    func_0x00010bf75dc0(param_13);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105cbd798; end: 105cbd7c3;  */

void FUN_105cbd798(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbd7c4; end: 105cbe11b; -[SCMemoriesAddSnapsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbd7c4(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126ecbc0;
  puStack_a0 = param_1;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c20eaa0(param_1);
  puVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(puVar2);
  lVar15 = (long)_DAT_112733bc4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010bf012a0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112733be4;
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar2;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    ppuVar11 = &PTR____CFConstantStringClassReference_110e04f78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e04f78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar10);
    _objc_release(ppuVar11);
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar10);
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar10);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c271420(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar10);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
    puVar2 = param_1;
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010c236680();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
    func_0x00010c23a060();
    puVar3 = PTR_PTR_1126b09e0;
    if (iVar1 != 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e27978;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27978,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c267620();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112733be8);
      *(undefined **)(param_1 + _DAT_112733be8) = puVar3;
      _objc_release(uVar10);
      _objc_release(ppuVar11);
      func_0x00010befa120(puVar2);
      puVar3 = PTR_PTR_1126b09e0;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e279b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e279b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c267620();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112733bec);
      *(undefined **)(param_1 + _DAT_112733bec) = puVar3;
      _objc_release(uVar10);
      _objc_release(ppuVar11);
      func_0x00010befa120(puVar2);
      if (param_1[_DAT_112733bd4] == '\x01') {
        puVar3 = puVar2;
        func_0x00010c140180(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010bfdf5e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c211320();
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      else {
        puVar3 = param_1;
        func_0x00010bfdf5e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c211320();
      }
      _objc_release(puVar3);
    }
  }
  puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  puStack_b0 = puVar2;
  lStack_a8 = lVar15;
  _objc_alloc_init();
  func_0x00010c1f7ac0();
  func_0x00010c1c8300(0x4010000000000000,puVar3);
  func_0x00010c1c82c0(0,puVar3);
  func_0x00010c1f93e0(0,0,0,0x4010000000000000,puVar3);
  puVar2 = PTR_PTR_1126c3a80;
  _objc_alloc();
  puStack_b8 = puVar3;
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_112733bf0;
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar10);
  func_0x00010c14cd40(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar15));
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  _objc_opt_class(PTR_PTR_1126c3a88);
  puVar2 = PTR_PTR_1126c3a88;
  _objc_opt_class(PTR_PTR_1126c3a88);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar10);
  _objc_release(puVar2);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar15));
  puVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puStack_f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  uStack_c8 = uVar10;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_d8 = uVar10;
  uStack_90 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  uStack_e8 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = *(undefined **)(param_1 + lVar15);
  uStack_100 = uVar6;
  uStack_88 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_108 = puVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  puStack_80 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f8);
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_108);
  _objc_release(uStack_100);
  _objc_release(puStack_f0);
  _objc_release(puStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c0);
  _objc_release(uStack_c8);
  if (2 < lRam00000001138466f0) {
    puVar4 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar12 = (long)_DAT_112733bf4;
    uVar6 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar12);
    puVar8 = param_1;
    func_0x00010bf14800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar6);
    _objc_release(puVar8);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lStack_a8);
  func_0x00010bf00fa0();
  if (iVar1 != 0) {
    puVar4 = PTR_PTR_1126c3298;
    func_0x00010bf25cc0(PTR_PTR_1126c3298);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar4);
    _objc_release(puVar3);
    func_0x00010c1a9fc0(puVar4);
    func_0x00010c23d620(puVar4);
    puVar3 = param_1;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf5eee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar7);
    _objc_release(puVar3);
    func_0x00010befbd60(puVar4);
    func_0x00010c160fc0(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar4);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e27a38;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puStack_b8);
  puVar9 = puStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_118 = FUN_105cbe11c;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1f0 = PTR_PTR_1126ecbc0;
    puStack_1f8 = puVar9;
    uStack_160 = uVar10;
    puStack_158 = puVar5;
    puStack_150 = puVar7;
    puStack_148 = puVar3;
    puStack_140 = puVar2;
    puStack_138 = puVar8;
    puStack_130 = puVar4;
    puStack_128 = param_1;
    puStack_120 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_1f8,PTR_s_viewWillAppear__1126853f0);
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    lVar12 = *(long *)(puVar9 + _DAT_112733bc0);
    func_0x00010c267b40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar13 = *plStack_230;
      do {
        lVar14 = 0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(lVar12);
          }
          func_0x00010bfbdf00(*(undefined8 *)(lStack_238 + lVar14 * 8));
          lVar14 = lVar14 + 1;
        } while (lVar15 != lVar14);
        lVar15 = lVar12;
        func_0x00010bf52a60();
        puVar2 = (undefined *)0x0;
      } while (lVar15 != 0);
    }
    _objc_release(lVar12);
    func_0x00010c106ec0(puVar9);
    func_0x000108df58d4();
    lVar15 = 0;
    func_0x000108df583c(0,ppuVar11);
    if (puVar9[_DAT_112733bd8] == '\x01') {
      puVar9[_DAT_112733bd8] = 0;
      lVar12 = (long)_DAT_112733bf0;
      func_0x00010c128b60(*(undefined8 *)(puVar9 + lVar12));
      func_0x00010c08cdc0(*(undefined8 *)(puVar9 + lVar12));
      ppuVar11 = (undefined **)(long)_DAT_112733bec;
      func_0x00010be319a0(puVar9);
      lVar15 = *(long *)(puVar9 + (long)ppuVar11);
      func_0x00010c1fadc0();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      return;
    }
    ___stack_chk_fail();
    pcStack_248 = FUN_105cbe2b0;
    puStack_278 = PTR_PTR_1126ecbc0;
    lStack_280 = lVar15;
    puStack_270 = puVar2;
    lStack_268 = lVar12;
    ppuStack_260 = ppuVar11;
    puStack_258 = puVar9;
    ppuStack_250 = &puStack_120;
    _objc_msgSendSuper2(&lStack_280,PTR_s_viewDidAppear__112684bd0);
    uVar10 = *(undefined8 *)(lVar15 + _DAT_112733bf0);
    func_0x00010bf408e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126afdd8;
    func_0x00010c0f2220(lVar15);
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      uVar10 = *(undefined8 *)(lVar15 + _DAT_112733bd0);
      func_0x00010c0f2220(lVar15);
      func_0x00010c24fc40(uVar10);
    }
    func_0x00010bed8360(lVar15);
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 105cbe11c; end: 105cbe2af; -[SCMemoriesAddSnapsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe11c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 unaff_x22;
  long lVar5;
  long lVar6;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126ecbc0;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(&lStack_e8,PTR_s_viewWillAppear__1126853f0);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(param_1 + _DAT_112733bc0);
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bfbdf00(*(undefined8 *)(lStack_128 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c106ec0(param_1);
  func_0x000108df58d4();
  lVar2 = 0;
  func_0x000108df583c(0,param_3);
  if (*(char *)(param_1 + _DAT_112733bd8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112733bd8) = 0;
    lVar1 = (long)_DAT_112733bf0;
    func_0x00010c128b60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar1));
    param_3 = (long)_DAT_112733bec;
    func_0x00010be319a0(param_1);
    lVar2 = *(long *)(param_1 + param_3);
    func_0x00010c1fadc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105cbe2b0;
  puStack_168 = PTR_PTR_1126ecbc0;
  lStack_170 = lVar2;
  uStack_160 = unaff_x22;
  lStack_158 = lVar1;
  lStack_150 = param_3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_170,PTR_s_viewDidAppear__112684bd0);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112733bf0);
  func_0x00010bf408e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(lVar2);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112733bd0);
    func_0x00010c0f2220(lVar2);
    func_0x00010c24fc40(uVar3);
  }
  func_0x00010bed8360(lVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 105cbe2b0; end: 105cbe37b; -[SCMemoriesAddSnapsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe2b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ecbc0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733bf0);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112733bd0);
    func_0x00010c0f2220(param_1);
    func_0x00010c24fc40(uVar1);
  }
  func_0x00010bed8360(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105cbe37c; end: 105cbe3f3; -[SCMemoriesAddSnapsViewController _didPressCameraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe37c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112733bb8;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cbe3f4; end: 105cbe4b7; -[SCMemoriesAddSnapsViewController _handleTabBarViewItemTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112733bf0);
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar5,param_2,puVar4,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105cbe4b8; end: 105cbe67b; -[SCMemoriesAddSnapsViewController _addTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe4b8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112733bc4);
  func_0x00010c099100();
  if (iVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + _DAT_112733bc0);
    func_0x00010c159380();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000108dfd62c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7b4e0(param_1,param_2,0,puVar2);
      goto LAB_105cbe664;
    }
  }
  puVar2 = PTR_PTR_1126c3a60;
  _objc_alloc();
  lVar9 = (long)_DAT_112733bc0;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c159720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c159760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020540(puVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = puVar2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar7 = puVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  _objc_release(puVar5);
  if (puVar8 + (long)puVar6 != (undefined *)0x0) {
    if (puVar8 + (long)puVar6 + *(long *)(param_1 + _DAT_112733bb4) < (undefined *)0x3e9) {
      puVar5 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112733bbc),param_2,0,puVar5,0);
    }
    else {
      func_0x000108dfd644();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000108dfd65c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7b4e0(param_1,param_2,puVar5,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
LAB_105cbe664:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cbe67c; end: 105cbe7c7; -[SCMemoriesAddSnapsViewController _presentFailureAlertForTitle:dialogText:] */

void FUN_105cbe67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 105cbe7c8; end: 105cbe7d7;  */

void FUN_105cbe7c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105cbe7d8; end: 105cbe81b; -[SCMemoriesAddSnapsViewController _applicationDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe7d8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112733bc4);
  func_0x00010bf83ea0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be02290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss__11255e240,0);
    return;
  }
  return;
}


