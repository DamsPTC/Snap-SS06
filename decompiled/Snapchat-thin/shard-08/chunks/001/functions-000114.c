/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105de1a48; end: 105de1bdf; -[SCPreviewCommonLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de1a48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == 0) {
    lVar8 = 0;
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736ad4;
    _objc_loadWeakRetained();
    lVar5 = param_1 + _DAT_112736ad8;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_112736adc;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112736ae0;
    _objc_loadWeakRetained();
    lVar8 = param_1 + _DAT_112736ae4;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_112736ae8;
    _objc_loadWeakRetained();
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105de1be0;
  puStack_98 = &UNK_1108e9b30;
  puVar1 = PTR_PTR_1126ae720;
  lStack_90 = lVar4;
  lStack_88 = lVar5;
  lStack_80 = lVar6;
  lStack_78 = lVar7;
  lStack_70 = lVar8;
  lStack_68 = lVar9;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4bc8;
  _objc_alloc(PTR_PTR_1126c4bc8);
  func_0x00010c0277a0();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736aec);
  }
  func_0x00010bf9d660(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 105de1be0; end: 105de1c17;  */

void FUN_105de1be0(void)

{
  _objc_alloc(PTR_PTR_1126c4bc0);
  func_0x00010c039b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de1c18; end: 105de1c8f; -[SCPreviewCommonLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de1c18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736aec,0);
  _objc_destroyWeak(param_1 + _DAT_112736ae8);
  _objc_destroyWeak(param_1 + _DAT_112736ae4);
  _objc_destroyWeak(param_1 + _DAT_112736ae0);
  _objc_destroyWeak(param_1 + _DAT_112736adc);
  _objc_destroyWeak(param_1 + _DAT_112736ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736ad4);
  return;
}



/* Entry: 105de1c90; end: 105de2ccf; -[SCPreviewFeaturesServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de1c90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar62;
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
  
  puVar1 = PTR_PTR_1126c4bd0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar63 = 0;
  }
  else {
    lVar63 = param_1 + _DAT_112736af8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar63;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_112736afc;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar64;
  func_0x00010bf0d2c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_112736b00;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar65;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_112736b04;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar66;
  func_0x00010bf0f6a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_112736b08;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar67;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_112736b0c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar68;
  func_0x00010bf115c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_112736b10;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar69;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_112736b14;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar70;
  func_0x00010bf207a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar71 = 0;
  }
  else {
    lVar71 = param_1 + _DAT_112736b18;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar71;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_112736b1c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar72;
  func_0x00010bf42260();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_112736b20;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar73;
  func_0x00010bf426c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
  }
  else {
    lVar74 = param_1 + _DAT_112736b24;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar74;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar75 = 0;
  }
  else {
    lVar75 = param_1 + _DAT_112736b28;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar75;
  func_0x00010bf5afe0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  FUN_105de2cd0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf5ce40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  FUN_105de2cd0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c094ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar76 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_112736b30;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar76;
  func_0x00010c110ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar77 = 0;
  }
  else {
    lVar77 = param_1 + _DAT_112736b34;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar77;
  func_0x00010bf71d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar78 = 0;
  }
  else {
    lVar78 = param_1 + _DAT_112736b38;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar78;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_112736b3c;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar79;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar80 = 0;
  }
  else {
    lVar80 = param_1 + _DAT_112736b40;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar80;
  func_0x00010bfe0a80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar81 = 0;
  }
  else {
    lVar81 = param_1 + _DAT_112736b44;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar81;
  func_0x00010bfe8440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar82 = 0;
  }
  else {
    lVar82 = param_1 + _DAT_112736b48;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar82;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar83 = 0;
  }
  else {
    lVar83 = param_1 + _DAT_112736b4c;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar83;
  func_0x00010c092a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar84 = 0;
  }
  else {
    lVar84 = param_1 + _DAT_112736b50;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar84;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar85 = 0;
  }
  else {
    lVar85 = param_1 + _DAT_112736b54;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar85;
  func_0x00010c0b6540();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar86 = 0;
  }
  else {
    lVar86 = param_1 + _DAT_112736b58;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar86;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar87 = 0;
  }
  else {
    lVar87 = param_1 + _DAT_112736b5c;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar87;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar88 = 0;
  }
  else {
    lVar88 = param_1 + _DAT_112736b60;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar88;
  func_0x00010c0ef680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar89 = 0;
  }
  else {
    lVar89 = param_1 + _DAT_112736b64;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar89;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar90 = 0;
  }
  else {
    lVar90 = param_1 + _DAT_112736bd0;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar90;
  func_0x00010c102540();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar91 = 0;
  }
  else {
    lVar91 = param_1 + _DAT_112736b68;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar91;
  func_0x00010c103780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar92 = 0;
  }
  else {
    lVar92 = param_1 + _DAT_112736b6c;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar92;
  func_0x00010c10ab20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar93 = 0;
  }
  else {
    lVar93 = param_1 + _DAT_112736b70;
    _objc_loadWeakRetained();
  }
  lVar36 = lVar93;
  func_0x00010c114380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar94 = 0;
  }
  else {
    lVar94 = param_1 + _DAT_112736b74;
    _objc_loadWeakRetained();
  }
  lVar37 = lVar94;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar95 = 0;
  }
  else {
    lVar95 = param_1 + _DAT_112736b78;
    _objc_loadWeakRetained();
  }
  lVar38 = lVar95;
  func_0x00010c14e820();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar96 = 0;
  }
  else {
    lVar96 = param_1 + _DAT_112736b7c;
    _objc_loadWeakRetained();
  }
  lVar39 = lVar96;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar97 = 0;
  }
  else {
    lVar97 = param_1 + _DAT_112736b80;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar97;
  func_0x00010c23eec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar98 = 0;
  }
  else {
    lVar98 = param_1 + _DAT_112736b84;
    _objc_loadWeakRetained();
  }
  lVar41 = lVar98;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar99 = 0;
  }
  else {
    lVar99 = param_1 + _DAT_112736b88;
    _objc_loadWeakRetained();
  }
  lVar42 = lVar99;
  func_0x00010c241880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar100 = 0;
  }
  else {
    lVar100 = param_1 + _DAT_112736b8c;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar100;
  func_0x00010c242ac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar101 = 0;
  }
  else {
    lVar101 = param_1 + _DAT_112736b90;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar101;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar102 = 0;
  }
  else {
    lVar102 = param_1 + _DAT_112736b94;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar102;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar103 = 0;
  }
  else {
    lVar103 = param_1 + _DAT_112736bd4;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar103;
  func_0x00010c26c8e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar104 = 0;
  }
  else {
    lVar104 = param_1 + _DAT_112736b98;
    _objc_loadWeakRetained();
  }
  lVar47 = lVar104;
  func_0x00010c26fe40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar105 = 0;
  }
  else {
    lVar105 = param_1 + _DAT_112736b9c;
    _objc_loadWeakRetained();
  }
  lVar48 = lVar105;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar106 = 0;
  }
  else {
    lVar106 = param_1 + _DAT_112736ba4;
    _objc_loadWeakRetained();
  }
  lVar49 = lVar106;
  func_0x00010c273d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar107 = 0;
  }
  else {
    lVar107 = param_1 + _DAT_112736ba0;
    _objc_loadWeakRetained();
  }
  lVar50 = lVar107;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar108 = 0;
  }
  else {
    lVar108 = param_1 + _DAT_112736ba8;
    _objc_loadWeakRetained();
  }
  lVar51 = lVar108;
  func_0x00010c27e580();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar109 = 0;
  }
  else {
    lVar109 = param_1 + _DAT_112736bac;
    _objc_loadWeakRetained();
  }
  lVar52 = lVar109;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar110 = 0;
  }
  else {
    lVar110 = param_1 + _DAT_112736bb0;
    _objc_loadWeakRetained();
  }
  lVar53 = lVar110;
  func_0x00010c292f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar111 = 0;
  }
  else {
    lVar111 = param_1 + _DAT_112736bb4;
    _objc_loadWeakRetained();
  }
  lVar54 = lVar111;
  func_0x00010c293d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar112 = 0;
  }
  else {
    lVar112 = param_1 + _DAT_112736bc8;
    _objc_loadWeakRetained();
  }
  lVar55 = lVar112;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar113 = 0;
  }
  else {
    lVar113 = param_1 + _DAT_112736bc0;
    _objc_loadWeakRetained();
  }
  lVar56 = lVar113;
  func_0x00010c29a9a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar114 = 0;
  }
  else {
    lVar114 = param_1 + _DAT_112736bbc;
    _objc_loadWeakRetained();
  }
  lVar57 = lVar114;
  func_0x00010c29a9a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar115 = 0;
  }
  else {
    lVar115 = param_1 + _DAT_112736bc4;
    _objc_loadWeakRetained();
  }
  lVar58 = lVar115;
  func_0x00010c29b9c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar116 = 0;
  }
  else {
    lVar116 = param_1 + _DAT_112736bb8;
    _objc_loadWeakRetained();
  }
  lVar59 = lVar116;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar117 = 0;
  }
  else {
    lVar117 = param_1 + _DAT_112736bcc;
    _objc_loadWeakRetained();
  }
  lVar60 = lVar117;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar118 = 0;
  }
  else {
    lVar118 = param_1 + _DAT_112736bd8;
    _objc_loadWeakRetained();
  }
  lVar61 = lVar118;
  func_0x00010c14a3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2a20(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,
                      lVar12,lVar13,lVar14,lVar16,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,
                      lVar25,lVar26,lVar27,lVar28,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,
                      lVar36,lVar37,lVar38,lVar39,lVar40,lVar41,lVar42,lVar43,lVar44,lVar45,lVar46,
                      lVar47,lVar48,lVar49,lVar50,lVar51,lVar52,lVar53,lVar54,lVar55,lVar56,lVar57,
                      lVar58,lVar59,lVar60,lVar61);
  _objc_release(lVar61);
  _objc_release(lVar118);
  _objc_release(lVar60);
  _objc_release(lVar117);
  _objc_release(lVar59);
  _objc_release(lVar116);
  _objc_release(lVar58);
  _objc_release(lVar115);
  _objc_release(lVar57);
  _objc_release(lVar114);
  _objc_release(lVar56);
  _objc_release(lVar113);
  _objc_release(lVar55);
  _objc_release(lVar112);
  _objc_release(lVar54);
  _objc_release(lVar111);
  _objc_release(lVar53);
  _objc_release(lVar110);
  _objc_release(lVar52);
  _objc_release(lVar109);
  _objc_release(lVar51);
  _objc_release(lVar108);
  _objc_release(lVar50);
  _objc_release(lVar107);
  _objc_release(lVar49);
  _objc_release(lVar106);
  _objc_release(lVar48);
  _objc_release(lVar105);
  _objc_release(lVar47);
  _objc_release(lVar104);
  _objc_release(lVar46);
  _objc_release(lVar103);
  _objc_release(lVar45);
  _objc_release(lVar102);
  _objc_release(lVar44);
  _objc_release(lVar101);
  _objc_release(lVar43);
  _objc_release(lVar100);
  _objc_release(lVar42);
  _objc_release(lVar99);
  _objc_release(lVar41);
  _objc_release(lVar98);
  _objc_release(lVar40);
  _objc_release(lVar97);
  _objc_release(lVar39);
  _objc_release(lVar96);
  _objc_release(lVar38);
  _objc_release(lVar95);
  _objc_release(lVar37);
  _objc_release(lVar94);
  _objc_release(lVar36);
  _objc_release(lVar93);
  _objc_release(lVar35);
  _objc_release(lVar92);
  _objc_release(lVar34);
  _objc_release(lVar91);
  _objc_release(lVar33);
  _objc_release(lVar90);
  _objc_release(lVar32);
  _objc_release(lVar89);
  _objc_release(lVar31);
  _objc_release(lVar88);
  _objc_release(lVar30);
  _objc_release(lVar87);
  _objc_release(lVar29);
  _objc_release(lVar86);
  _objc_release(lVar28);
  _objc_release(lVar85);
  _objc_release(lVar27);
  _objc_release(lVar84);
  _objc_release(lVar26);
  _objc_release(lVar83);
  _objc_release(lVar25);
  _objc_release(lVar82);
  _objc_release(lVar24);
  _objc_release(lVar81);
  _objc_release(lVar23);
  _objc_release(lVar80);
  _objc_release(lVar22);
  _objc_release(lVar79);
  _objc_release(lVar21);
  _objc_release(lVar78);
  _objc_release(lVar20);
  _objc_release(lVar77);
  _objc_release(lVar19);
  _objc_release(lVar76);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar75);
  _objc_release(lVar13);
  _objc_release(lVar74);
  _objc_release(lVar12);
  _objc_release(lVar73);
  _objc_release(lVar11);
  _objc_release(lVar72);
  _objc_release(lVar10);
  _objc_release(lVar71);
  _objc_release(lVar9);
  _objc_release(lVar70);
  _objc_release(lVar8);
  _objc_release(lVar69);
  _objc_release(lVar7);
  _objc_release(lVar68);
  _objc_release(lVar6);
  _objc_release(lVar67);
  _objc_release(lVar5);
  _objc_release(lVar66);
  _objc_release(lVar4);
  _objc_release(lVar65);
  _objc_release(lVar3);
  _objc_release(lVar64);
  _objc_release(lVar2);
  _objc_release(lVar63);
  if (param_1 == 0) {
    uVar62 = 0;
  }
  else {
    uVar62 = *(undefined8 *)(param_1 + _DAT_112736bdc);
  }
  func_0x00010bf9d660(uVar62,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de2cd0; end: 105de2cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de2cd0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736b2c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de2cf4; end: 105de2fe7; -[SCPreviewFeaturesServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de2cf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736bdc,0);
  _objc_destroyWeak(param_1 + _DAT_112736bd8);
  _objc_destroyWeak(param_1 + _DAT_112736bd4);
  _objc_destroyWeak(param_1 + _DAT_112736bd0);
  _objc_destroyWeak(param_1 + _DAT_112736bcc);
  _objc_destroyWeak(param_1 + _DAT_112736bc8);
  _objc_destroyWeak(param_1 + _DAT_112736bc4);
  _objc_destroyWeak(param_1 + _DAT_112736bc0);
  _objc_destroyWeak(param_1 + _DAT_112736bbc);
  _objc_destroyWeak(param_1 + _DAT_112736bb8);
  _objc_destroyWeak(param_1 + _DAT_112736bb4);
  _objc_destroyWeak(param_1 + _DAT_112736bb0);
  _objc_destroyWeak(param_1 + _DAT_112736bac);
  _objc_destroyWeak(param_1 + _DAT_112736ba8);
  _objc_destroyWeak(param_1 + _DAT_112736ba4);
  _objc_destroyWeak(param_1 + _DAT_112736ba0);
  _objc_destroyWeak(param_1 + _DAT_112736b9c);
  _objc_destroyWeak(param_1 + _DAT_112736b98);
  _objc_destroyWeak(param_1 + _DAT_112736b94);
  _objc_destroyWeak(param_1 + _DAT_112736b90);
  _objc_destroyWeak(param_1 + _DAT_112736b8c);
  _objc_destroyWeak(param_1 + _DAT_112736b88);
  _objc_destroyWeak(param_1 + _DAT_112736b84);
  _objc_destroyWeak(param_1 + _DAT_112736b80);
  _objc_destroyWeak(param_1 + _DAT_112736b7c);
  _objc_destroyWeak(param_1 + _DAT_112736b78);
  _objc_destroyWeak(param_1 + _DAT_112736b74);
  _objc_destroyWeak(param_1 + _DAT_112736b70);
  _objc_destroyWeak(param_1 + _DAT_112736b6c);
  _objc_destroyWeak(param_1 + _DAT_112736b68);
  _objc_destroyWeak(param_1 + _DAT_112736b64);
  _objc_destroyWeak(param_1 + _DAT_112736b60);
  _objc_destroyWeak(param_1 + _DAT_112736b5c);
  _objc_destroyWeak(param_1 + _DAT_112736b58);
  _objc_destroyWeak(param_1 + _DAT_112736b54);
  _objc_destroyWeak(param_1 + _DAT_112736b50);
  _objc_destroyWeak(param_1 + _DAT_112736b4c);
  _objc_destroyWeak(param_1 + _DAT_112736b48);
  _objc_destroyWeak(param_1 + _DAT_112736b44);
  _objc_destroyWeak(param_1 + _DAT_112736b40);
  _objc_destroyWeak(param_1 + _DAT_112736b3c);
  _objc_destroyWeak(param_1 + _DAT_112736b38);
  _objc_destroyWeak(param_1 + _DAT_112736b34);
  _objc_destroyWeak(param_1 + _DAT_112736b30);
  _objc_destroyWeak(param_1 + _DAT_112736b2c);
  _objc_destroyWeak(param_1 + _DAT_112736b28);
  _objc_destroyWeak(param_1 + _DAT_112736b24);
  _objc_destroyWeak(param_1 + _DAT_112736b20);
  _objc_destroyWeak(param_1 + _DAT_112736b1c);
  _objc_destroyWeak(param_1 + _DAT_112736b18);
  _objc_destroyWeak(param_1 + _DAT_112736b14);
  _objc_destroyWeak(param_1 + _DAT_112736b10);
  _objc_destroyWeak(param_1 + _DAT_112736b0c);
  _objc_destroyWeak(param_1 + _DAT_112736b08);
  _objc_destroyWeak(param_1 + _DAT_112736b04);
  _objc_destroyWeak(param_1 + _DAT_112736b00);
  _objc_destroyWeak(param_1 + _DAT_112736afc);
  _objc_destroyWeak(param_1 + _DAT_112736af8);
  _objc_destroyWeak(param_1 + _DAT_112736af4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736af0);
  return;
}



/* Entry: 105de2fe8; end: 105de30a7; -[SCPreviewAggregateLatencyGrapheneLogger initWithGrapheneServices:] */

undefined1 * FUN_105de2fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed1f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105de30a8; end: 105de3127; -[SCPreviewAggregateLatencyGrapheneLogger startLatencyMeasurementForAction:subAction:] */

void FUN_105de30a8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 | param_4 << 3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de3128; end: 105de32ef; -[SCPreviewAggregateLatencyGrapheneLogger endLatencyMeasurementForAction:subAction:] */

void FUN_105de3128(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  param_4 = param_4 | param_5 << 3;
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar5 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_3,puVar1);
  _objc_release(puVar1);
  lVar4 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_3,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 - dVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de32f0; end: 105de366b; -[SCPreviewAggregateLatencyGrapheneLogger logAndFlushLatencyMeasurementsForAction:] */

void FUN_105de32f0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar11 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar11);
  puVar10 = &uStack_140;
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        uVar9 = uVar15;
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar11);
          uVar9 = uVar15;
        }
        uVar14 = *(ulong *)(lStack_138 + lVar12 * 8);
        uVar2 = uVar14;
        func_0x00010c067fc0();
        uVar15 = uVar9;
        if ((uVar2 & 7) == param_3) {
          lVar3 = param_1;
          func_0x00010be24660(param_1,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010bdce460(param_1,param_2,lVar3,(long)uVar2 >> 3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar4;
          func_0x00010c2ac460(lVar4,param_2,&PTR____CFConstantStringClassReference_110db8578,
                              &PTR____CFConstantStringClassReference_110e2a5b8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = param_1;
          func_0x00010be24660(param_1,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010bdce460(param_1,param_2,lVar4,(long)uVar2 >> 3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = lVar5;
          func_0x00010c2ac460(lVar5,param_2,&PTR____CFConstantStringClassReference_110db8578,
                              &PTR____CFConstantStringClassReference_110e2a5d8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0e00e0(uVar6,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c296f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar15 = uVar9;
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0e00e0(uVar6,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c296f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar8 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010bfcdfa0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010c242680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befc000(uVar9);
          _objc_release(uVar6);
          _objc_release(uVar7);
          _objc_release(uVar8);
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010bfcdfa0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar9;
          func_0x00010c242680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befc000();
          _objc_release(uVar7);
          _objc_release(uVar9);
          _objc_release(uVar6);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0e00e0(uVar9,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12adc0();
          _objc_release(uVar9);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar10 = &uStack_140;
      lVar1 = lVar11;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (puVar10 == (undefined8 *)0x0) {
      func_0x00010c0d2340(PTR_PTR_1126c3cc8);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 105de366c; end: 105de369b; -[SCPreviewAggregateLatencyGrapheneLogger _grapheneMetricForAction:] */

void FUN_105de366c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010c0d2340(PTR_PTR_1126c3cc8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de369c; end: 105de3703; -[SCPreviewAggregateLatencyGrapheneLogger _applyMetricDimensionsToMetric:forSubAction:] */

void FUN_105de369c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_4 < 5) {
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a5f8,
                        (&PTR_PTR_1108e9b60)[param_4]);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105de3704; end: 105de373f; -[SCPreviewAggregateLatencyGrapheneLogger .cxx_destruct] */

void FUN_105de3704(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105de3740; end: 105de391b; -[SCPreviewBlizzardLogger initWithBlizzardUserServices:grapheneServices:userLocationServices:audioSessionServices:lensPlusTierService:lensPlusCofService:imagineLensService:editContentDivergenceServices:] */

undefined1 *
FUN_105de3740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ed200;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105de391c; end: 105de3adf; -[SCPreviewBlizzardLogger logPreviewActionWithActionIntent:interactionType:commonLoggingParams:] */

void FUN_105de391c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c4bd8;
  _objc_opt_new(PTR_PTR_1126c4bd8);
  func_0x00010c161a80();
  func_0x00010c1ae260(puVar1,param_2,param_4);
  lVar2 = param_5;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_5;
    func_0x00010bf31200(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_5;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_5;
    func_0x00010c243340(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_5;
  func_0x00010c247a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_5;
    func_0x00010c247a00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1f80(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_5;
  func_0x00010c247520(param_5);
  func_0x00010c206c40(puVar1,param_2,lVar2);
  lVar2 = param_5;
  func_0x00010c240640(param_5);
  func_0x00010c204260(puVar1,param_2,lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105de3ae0; end: 105de3bd3; -[SCPreviewBlizzardLogger logDirectSnapEditWithCaptureSessionId:source:snapSource:snapSessionID:withDirectorModeDraft:] */

void FUN_105de3ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4be0;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c179280();
  _objc_release(param_3);
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c2056c0(puVar1,param_2,param_5);
  func_0x00010c205660(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c226140(puVar1,param_2,param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de3bd4; end: 105de3edb; -[SCPreviewBlizzardLogger logPreviewPerformanceMetricEndWithSessionId:snapSource:performanceLogging:captionSessions:] */

void FUN_105de3bd4(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c4be8;
  _objc_alloc_init();
  func_0x00010c08cd00(param_6);
  dVar13 = param_1;
  func_0x00010c1603c0(param_6);
  param_1 = param_1 - dVar13;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar8 = (long)param_1;
  func_0x00010c100e80(param_6);
  dVar13 = param_1;
  func_0x00010c1603c0(param_6);
  param_1 = param_1 - dVar13;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar10 = (long)param_1;
  func_0x00010c1e1de0(puVar1,param_3,lVar8);
  func_0x00010c1e2020(puVar1,param_3,lVar10);
  func_0x00010c205660(puVar1,param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_7);
  lVar3 = param_7;
  func_0x00010bf52a60(param_7,param_3,&uStack_140,auStack_100,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_7);
        }
        uVar9 = *(undefined8 *)(lStack_138 + lVar11 * 8);
        puVar4 = PTR_PTR_1126c4bf0;
        _objc_alloc_init(PTR_PTR_1126c4bf0);
        uVar5 = uVar9;
        func_0x00010bf305c0(uVar9);
        func_0x00010c178a60(puVar4,param_3,uVar5);
        uVar5 = uVar9;
        func_0x00010bf305e0(uVar9);
        func_0x00010c178a80(puVar4,param_3,uVar5);
        func_0x00010bfbbe80(uVar9);
        dVar12 = dVar13;
        func_0x00010c250fa0(uVar9);
        dVar13 = dVar13 - dVar12;
        if (dVar13 <= 0.0) {
          dVar13 = 0.0;
        }
        func_0x00010c211e60(puVar4,param_3,(long)dVar13);
        func_0x00010c081b80(uVar9);
        dVar12 = dVar13;
        func_0x00010c250fa0(uVar9);
        dVar13 = dVar13 - dVar12;
        if (dVar13 <= 0.0) {
          dVar13 = 0.0;
        }
        func_0x00010c211f60(puVar4,param_3,(long)dVar13);
        func_0x00010bf7de20(uVar9);
        dVar12 = dVar13;
        func_0x00010c250fa0(uVar9);
        dVar13 = dVar13 - dVar12;
        if (dVar13 <= 0.0) {
          dVar13 = 0.0;
        }
        func_0x00010c215560(puVar4,param_3,(long)dVar13);
        func_0x00010befa120(puVar2,param_3,puVar4);
        _objc_release(puVar4);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = param_7;
      func_0x00010bf52a60(param_7,param_3,&uStack_140,auStack_100,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_7);
  func_0x00010c178720(puVar1,param_3,puVar2);
  func_0x00010be54600(param_2,param_3,lVar8,lVar10,param_5);
  uVar9 = *(undefined8 *)(param_2 + 8);
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = param_4;
  func_0x00010c243460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010c111380(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar9,param_3,puVar2,lVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010c1113a0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar9,param_3,puVar2,puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 105de3edc; end: 105de407b; -[SCPreviewBlizzardLogger _logGraphenePreviewPerformanceMetricWithLayoutFinishedMillis:playerReadyMillis:snapSource:] */

void FUN_105de3edc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010c243460(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3cc8;
  func_0x00010c111380(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar4,param_2,puVar6,param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3cc8;
  func_0x00010c1113a0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar4,param_2,puVar6,param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105de407c; end: 105de4c97; -[SCPreviewBlizzardLogger logSnapPreviewAction:geofilterLogger:destinationInfo:] */

void FUN_105de407c(float param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  double dVar21;
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
  undefined8 uStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010beb6980(param_2,param_3,param_4);
  lVar2 = param_4;
  func_0x00010b06f544();
  if (((int)lVar2 != 0) && ((uVar1 & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010bde6b00(param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c293fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010bde6d40(param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x00010c067fc0(lVar2);
    func_0x00010c206c40(uVar1,param_3,lVar5);
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar3);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105de4c98;
  puStack_128 = &UNK_11084c4a0;
  _objc_retain(uVar4);
  uStack_120 = uVar4;
  _objc_retain(uVar1);
  uStack_118 = uVar1;
  _objc_retain(param_4);
  lStack_110 = param_4;
  _objc_retain(uVar3);
  ppuVar6 = &puStack_140;
  uStack_108 = uVar3;
  _objc_retainBlock();
  lVar5 = param_4;
  func_0x00010c247520();
  lVar7 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  if ((((uint)(lVar5 - 0xcU < 0x36) & (uint)(0x20000008000007 >> (lVar5 - 0xcU & 0x3f))) == 1) &&
     (lVar8 != 0)) {
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar9;
    func_0x00010c095ce0();
    _objc_release(uVar9);
    _objc_release(lVar7);
    if ((int)uVar17 != 0) {
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c094540(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar9;
      func_0x00010c095300(uVar9,param_3,lVar5,0x15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puStack_180 = puVar10;
      uStack_178 = 0xc2000000;
      uStack_170 = 0x105de4d6c;
      puStack_168 = &UNK_1108e9b88;
      _objc_retain(uVar1);
      uStack_148 = 1;
      uStack_160 = uVar1;
      uStack_158 = uVar9;
      _objc_retain(ppuVar6);
      ppuStack_150 = ppuVar6;
      _objc_retain(uVar9);
      func_0x00010c297260(uVar17,param_3,&puStack_180,0);
      _objc_release(ppuStack_150);
      _objc_release(uStack_158);
      _objc_release(uStack_160);
      _objc_release(uVar9);
      _objc_release(uVar17);
      goto LAB_105de43d0;
    }
  }
  else {
    _objc_release(lVar7);
  }
  if (ppuVar6 != (undefined **)0x0) {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
LAB_105de43d0:
  lVar5 = param_4;
  func_0x00010c110bc0();
  if (((0xb < lVar5 + 1U) || ((1L << (lVar5 + 1U & 0x3f) & 0xfbbU) == 0)) &&
     (lVar5 = param_4, func_0x00010c14a280(), lVar5 == 0)) {
    puVar10 = PTR_PTR_1126c4bf8;
    _objc_opt_new();
    lVar5 = param_4;
    func_0x00010c247520(param_4);
    func_0x00010c2056c0(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010bf31200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar10,param_3,lVar5);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010c07e5e0(param_4);
    func_0x00010c1b4700(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010bfb2540(param_4);
    func_0x00010c19daa0(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010bfb2520(param_4);
    func_0x00010c19db40(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x000108441e7c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee3c0(puVar10,param_3,lVar5);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010c140fc0(param_4);
    func_0x00010c1ee440(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010c140f80(param_4);
    func_0x00010c1ee340(puVar10,param_3,lVar5);
    func_0x00010bfbbd00(param_4);
    dVar21 = (double)param_1;
    func_0x00010c1a16c0(dVar21,puVar10);
    lVar5 = param_4;
    func_0x00010bfd3440(param_4);
    func_0x00010c1a5460(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010bfd3460(param_4);
    func_0x00010c1a54a0(puVar10,param_3,lVar5);
    lVar5 = param_4;
    func_0x000108441ef0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010c216da0(puVar10,param_3,lVar5);
    }
    lVar7 = param_4;
    func_0x0001084427bc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x00010c227b80(puVar10,param_3,lVar7);
    }
    lVar8 = param_4;
    func_0x000108441fa8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8fe0(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010844258c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9480(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c2a8020(param_4);
    func_0x00010c225ba0(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c2a7fe0(param_4);
    func_0x00010c225b80(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010bfbb160(param_4);
    func_0x00010c226360(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c0b59a0(param_4);
    func_0x00010c1c1040(puVar10,param_3,lVar8);
    func_0x00010c23b560(param_4);
    func_0x00010c2027a0(puVar10);
    func_0x00010bf04ae0(param_4);
    func_0x00010c168620(puVar10);
    func_0x00010bdc1760(param_4);
    func_0x00010c1a9600(puVar10,param_3,(long)dVar21);
    fVar20 = SUB84(dVar21,0);
    func_0x00010bf21200(param_4);
    func_0x00010c173c60(puVar10);
    lVar8 = param_4;
    func_0x00010c247520(param_4);
    func_0x00010c2056c0(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c097820(param_4);
    func_0x00010c1bd160(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c094800(param_4);
    func_0x00010c1bbea0(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c096ca0(param_4);
    func_0x00010c1bcca0(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c095800(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc3e0(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010bf2ae80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffc60(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c14f140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f64e0(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c24b740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    func_0x00010c095f40(param_4);
    dVar21 = (double)fVar20;
    func_0x00010c1768c0(dVar21,puVar10);
    fVar20 = SUB84(dVar21,0);
    lVar8 = param_4;
    func_0x00010bf13940(param_4);
    func_0x00010c16e1e0(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010bf09180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcf40(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010bf09160(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c11fae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c11fa40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010c26a320(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212740(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    puVar11 = PTR_PTR_1126c4738;
    _objc_opt_new();
    lVar8 = param_4;
    func_0x00010c070860(param_4);
    func_0x00010c1b06a0(puVar11,param_3,lVar8);
    func_0x00010c0d1300(param_4);
    dVar21 = (double)fVar20;
    func_0x00010c1c91e0(dVar21,puVar11);
    fVar20 = SUB84(dVar21,0);
    func_0x00010c1c9180(puVar10,param_3,puVar11);
    lVar8 = param_4;
    func_0x00010c06c6a0(param_4);
    func_0x00010c1af380(puVar10,param_3,lVar8);
    func_0x00010bf212c0(param_4);
    func_0x00010c173cc0((double)fVar20,puVar10);
    lVar8 = param_4;
    func_0x00010c06f5c0(param_4);
    func_0x00010c1b0260(puVar10,param_3,lVar8);
    lVar8 = param_4;
    func_0x00010c2736c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x000108ee0cac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(lVar8);
    lVar8 = lVar13;
    func_0x00010c0976a0(lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bd0c0(puVar10,param_3,lVar8);
    _objc_release(lVar8);
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lVar8 = param_4;
    func_0x00010c091c60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar19 = *plStack_1b0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_1b0 != lVar19) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(undefined8 *)(lStack_1b8 + lVar18 * 8);
          puVar15 = PTR_PTR_1126c4718;
          _objc_opt_new(PTR_PTR_1126c4718);
          uVar17 = uVar9;
          func_0x00010c094540(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(puVar15,param_3,uVar17);
          _objc_release(uVar17);
          uVar17 = uVar9;
          func_0x00010c096ca0(uVar9);
          func_0x00010c1bccc0(puVar15,param_3,uVar17);
          uVar17 = uVar9;
          func_0x00010c094800(uVar9);
          func_0x00010c1bbec0(puVar15,param_3,uVar17);
          uVar17 = uVar9;
          func_0x00010c095800(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bc400(puVar15,param_3,uVar17);
          _objc_release(uVar17);
          uVar17 = uVar9;
          func_0x00010c11fae0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74c0(puVar15,param_3,uVar17);
          _objc_release(uVar17);
          uVar17 = uVar9;
          func_0x00010c11fa40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74e0(puVar15,param_3,uVar17);
          _objc_release(uVar17);
          func_0x00010c0972c0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bcec0(puVar15,param_3,uVar9);
          _objc_release(uVar9);
          func_0x00010befa120(puVar14,param_3,puVar15);
          _objc_release(puVar15);
          lVar18 = lVar18 + 1;
        } while (lVar12 != lVar18);
        lVar12 = lVar8;
        func_0x00010bf52a60(lVar8,param_3,&uStack_1c0,auStack_100,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(lVar8);
    puVar15 = puVar14;
    func_0x00010bf529e0();
    if (puVar15 != (undefined *)0x0) {
      puVar15 = puVar14;
      func_0x00010bf51e00(puVar14);
      func_0x00010c1bb320(puVar10,param_3,puVar15);
      _objc_release(puVar15);
    }
    uVar9 = *(undefined8 *)(param_2 + 8);
    func_0x00010c293fc0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar17);
    _objc_release(uVar9);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(puVar11);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(puVar10);
  }
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  puVar10 = PTR_PTR_1126c4c00;
  func_0x00010c23cfa0(PTR_PTR_1126c4c00,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar17,param_3,puVar10);
  _objc_release(puVar10);
  _objc_release(ppuVar6);
  _objc_release(uStack_108);
  _objc_release(lStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0b2e60(*(undefined8 *)(param_4 + 0x20),param_3,*(undefined8 *)(param_4 + 0x28));
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010c254340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_4 + 0x38);
  func_0x00010c2553e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010bf31200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010c243340(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123a00(uVar4,param_3,0,uVar9,uVar16,uVar3);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105de4c98; end: 105de4e2f;  */

void FUN_105de4c98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c254340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2553e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf31200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c243340(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123a00(uVar3,param_2,0,uVar4,uVar5,uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105de4e30; end: 105de4ecb; -[SCPreviewBlizzardLogger logSnapPreviewActionForBatchCapture:geofilterLogger:uniqueSnapCreationCount:deletedSegmentCaptureSessionIDs:destinationInfo:] */

void FUN_105de4e30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be58be0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c4c00;
  func_0x00010bf16de0(PTR_PTR_1126c4c00,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de4ecc; end: 105de4f8b; -[SCPreviewBlizzardLogger logPreviewPageViewFromPreviousPage:commonLoggingParams:] */

void FUN_105de4ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4c08;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1e26a0();
  uVar2 = param_4;
  func_0x00010bf31200(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c179280(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de4f8c; end: 105de5067; -[SCPreviewBlizzardLogger logDirectSegmentReorderWithCaptureSessionId:snapSessionId:snapSource:] */

void FUN_105de4f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c4c10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c179280();
  _objc_release(param_3);
  func_0x00010c205660(puVar1,param_2,param_4);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126c4c18;
  func_0x00010bf7efe0(PTR_PTR_1126c4c18,param_2,param_5);
  func_0x00010c206c40(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de5068; end: 105de5103; -[SCPreviewBlizzardLogger logSnapPreviewActionForTimelineOrDM:geofilterLogger:uniqueSnapCreationCount:deletedSegmentCaptureSessionIDs:destinationInfo:] */

void FUN_105de5068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be58be0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c4c00;
  func_0x00010c270460(PTR_PTR_1126c4c00,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de5104; end: 105de532f; -[SCPreviewBlizzardLogger logPreviewEditExport:errorString:success:] */

void FUN_105de5104(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c4c20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  lVar3 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c1972e0(puVar2,param_2,param_4);
  _objc_release(param_4);
  lVar3 = param_3;
  func_0x00010c0c6c20();
  uVar1 = lVar3 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar5 = 1;
      if ((lVar3 + 1U < 0x1c) && ((1L << (lVar3 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar3 + 1U < 0x1b) {
          uVar5 = *(undefined8 *)(&UNK_10ddd09e0 + (lVar3 + 1U) * 8);
        }
        else {
          uVar5 = 0;
        }
      }
      goto LAB_105de51fc;
    }
    if (uVar1 == 8) {
      uVar5 = 5;
      goto LAB_105de51fc;
    }
    if (uVar1 == 10) {
      uVar5 = 0xe;
      goto LAB_105de51fc;
    }
  }
  uVar5 = 2;
LAB_105de51fc:
  func_0x00010c1c5440(puVar2,param_2,uVar5);
  lVar3 = param_3;
  func_0x00010c243340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf9d100(param_3);
  func_0x00010c198f60(puVar2,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c14bfe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5da0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c110c40(param_3);
  func_0x00010c226380(puVar2,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c110c20(param_3);
  func_0x00010c225ea0(puVar2,param_2,lVar3);
  func_0x00010c20f8a0(puVar2,param_2,param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010be545e0(param_1,param_2,param_3,param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105de5330; end: 105de54fb; -[SCPreviewBlizzardLogger _logGraphenePreviewEditExportWithSnapCommonLoggingParameters:success:] */

void FUN_105de5330(long param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126c3cc8;
  if (param_3 != (undefined **)0x0) {
    _objc_retain(param_3);
    func_0x00010c110b20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010c0c6c20();
    func_0x000108442d24();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9478,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(ppuVar3);
    ppuVar3 = param_3;
    func_0x00010c110c40();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)ppuVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar2 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e2a638,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    ppuVar3 = param_3;
    func_0x00010c110c20();
    _objc_release(param_3);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)ppuVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e2a658,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
    if (param_4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
    }
    puVar2 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfcdfa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c242680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105de54fc; end: 105de56ef; -[SCPreviewBlizzardLogger logDirectSnapShareWithActivityType:isSnapWithLens:commonLoggingParams:] */

void FUN_105de54fc(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_68 = param_3;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e2a678;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e2a698;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0df6e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  lVar13 = 0;
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 4;
  func_0x00010c008340(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bc038;
  _objc_opt_new();
  func_0x00010c1ae1e0();
  func_0x00010c1ae280(puVar3,param_2,puVar1);
  uVar4 = param_5;
  func_0x00010c247520();
  _objc_release(param_5);
  func_0x00010c206c40(puVar3,param_2,uVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(lVar12);
  puVar1 = PTR_PTR_1126c4c28;
  _objc_retain(lVar13);
  _objc_opt_new(puVar1);
  lVar6 = lVar13;
  func_0x00010bfbb520(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  lVar8 = lVar13;
  func_0x00010bf0a3a0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf529e0();
  func_0x00010c184440(puVar1,param_2,lVar9 + lVar7);
  _objc_release(lVar8);
  _objc_release(lVar6);
  puVar3 = puVar11;
  func_0x00010c122b20(puVar11);
  func_0x00010c1e88a0(puVar1,param_2,puVar3);
  lVar6 = lVar13;
  func_0x00010bf6f800(lVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar6;
  func_0x00010c0de0e0(lVar6);
  func_0x00010c1a49c0(puVar1,param_2,lVar13);
  lVar13 = lVar6;
  func_0x00010c0de400(lVar6);
  func_0x00010c1a4bc0(puVar1,param_2,lVar13);
  lVar13 = lVar6;
  func_0x00010c0de420(lVar6);
  func_0x00010c218b20(puVar1,param_2,lVar13);
  lVar13 = lVar6;
  func_0x00010c122d80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x000108606e18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8a20(puVar1,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar13);
  puVar3 = puVar11;
  func_0x00010bf2fbe0(puVar11);
  func_0x00010c178480(puVar1,param_2,puVar3);
  lVar13 = lVar12;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 != 0) {
    lVar13 = lVar12;
    func_0x00010c135700(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar1,param_2,lVar13);
    _objc_release(lVar13);
  }
  puVar3 = puVar11;
  func_0x00010bf30860(puVar11);
  func_0x00010c178bc0(puVar1,param_2,puVar3);
  puVar3 = puVar11;
  func_0x00010bf30440(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  puVar10 = puVar11;
  func_0x00010c282c80(puVar11);
  func_0x00010c1e9680(puVar3,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010c2681e0(puVar11);
  func_0x00010c2117e0(puVar3,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010bf5bb60(puVar11);
  func_0x00010c1e59c0(puVar3,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010bfb92e0(puVar11);
  func_0x00010c170060(puVar3,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010c268220(puVar11);
  func_0x00010c211800(puVar3,param_2,puVar10);
  func_0x00010c21f5a0(puVar1,param_2,puVar3);
  puVar10 = puVar11;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = puVar11;
    func_0x00010bf9f120(puVar11);
    func_0x00010c199b20(puVar1,param_2,puVar10);
    puVar10 = puVar11;
    func_0x00010bf9f040(puVar11);
    func_0x00010c199a40(puVar1,param_2,puVar10);
    puVar10 = puVar11;
    func_0x00010c0947c0(puVar11);
    func_0x00010c1bbe80(puVar1,param_2,puVar10);
    puVar10 = puVar11;
    func_0x00010c094800(puVar11);
    func_0x00010c1bbea0(puVar1,param_2,puVar10);
    puVar10 = puVar11;
    func_0x00010c090320(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(puVar1,param_2,puVar10);
    _objc_release(puVar10);
    puVar10 = puVar11;
    func_0x00010c08fda0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(puVar1,param_2,puVar10);
    _objc_release(puVar10);
    puVar10 = puVar11;
    func_0x00010c096da0(puVar11);
    func_0x00010c208420(puVar1,param_2,puVar10);
  }
  puVar10 = puVar11;
  func_0x00010bfadd80(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c040(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010c243340(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010bf31200(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010bf1b840(puVar11);
  func_0x00010c20afe0(puVar1,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010bf1b880(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b020(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010bf1c3c0(puVar11);
  func_0x00010c20b000(puVar1,param_2,puVar10);
  func_0x00010bfae680(puVar11);
  func_0x00010c19c720(puVar1);
  puVar10 = puVar11;
  func_0x00010c298120(puVar11);
  func_0x00010c220b20(puVar1,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010c297de0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c6c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010bfadd80(puVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c072ec0(lVar12,param_2,puVar10);
  func_0x00010c1b1820(puVar1,param_2,lVar13);
  _objc_release(puVar10);
  func_0x00010c1dfba0(puVar1,param_2,0xffffffffffffffff);
  puVar10 = puVar11;
  func_0x00010c2a8860(puVar11);
  func_0x00010c225c80(puVar1,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010bf0f140(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010bf0ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = puVar11;
    func_0x00010bf0ed80(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c4160(puVar1);
    _objc_release(puVar10);
  }
  puVar10 = puVar11;
  func_0x00010bf11440(puVar11);
  func_0x00010c16cc40(puVar1,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010c2a09e0(puVar11);
  func_0x00010c224100(puVar1,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010c29a680(puVar11);
  func_0x00010c221b20(puVar1,param_2,puVar10);
  puVar10 = puVar11;
  func_0x00010c2a0400(puVar11);
  func_0x00010c223e80(puVar1,param_2,puVar10);
  func_0x00010beac0e0(puVar2,param_2,puVar1,puVar11);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105de56f0; end: 105de5c93; -[SCPreviewBlizzardLogger _constructGeoEventWithCommonLoggingParameters:geofilterLogger:destinationInfo:] */

void FUN_105de56f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4c28;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  lVar2 = param_5;
  func_0x00010bfbb520(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = param_5;
  func_0x00010bf0a3a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  func_0x00010c184440(puVar1,param_2,lVar5 + lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c122b20(param_3);
  func_0x00010c1e88a0(puVar1,param_2,lVar2);
  lVar2 = param_5;
  func_0x00010bf6f800(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar3 = lVar2;
  func_0x00010c0de0e0(lVar2);
  func_0x00010c1a49c0(puVar1,param_2,lVar3);
  lVar3 = lVar2;
  func_0x00010c0de400(lVar2);
  func_0x00010c1a4bc0(puVar1,param_2,lVar3);
  lVar3 = lVar2;
  func_0x00010c0de420(lVar2);
  func_0x00010c218b20(puVar1,param_2,lVar3);
  lVar3 = lVar2;
  func_0x00010c122d80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108606e18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8a20(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf2fbe0(param_3);
  func_0x00010c178480(puVar1,param_2,lVar3);
  lVar3 = param_4;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010c135700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar1,param_2,lVar3);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf30860(param_3);
  func_0x00010c178bc0(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010bf30440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  lVar3 = param_3;
  func_0x00010c282c80(param_3);
  func_0x00010c1e9680(puVar6,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c2681e0(param_3);
  func_0x00010c2117e0(puVar6,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010bf5bb60(param_3);
  func_0x00010c1e59c0(puVar6,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010bfb92e0(param_3);
  func_0x00010c170060(puVar6,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c268220(param_3);
  func_0x00010c211800(puVar6,param_2,lVar3);
  func_0x00010c21f5a0(puVar1,param_2,puVar6);
  lVar3 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf9f120(param_3);
    func_0x00010c199b20(puVar1,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010bf9f040(param_3);
    func_0x00010c199a40(puVar1,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c0947c0(param_3);
    func_0x00010c1bbe80(puVar1,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c094800(param_3);
    func_0x00010c1bbea0(puVar1,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c090320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c08fda0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c096da0(param_3);
    func_0x00010c208420(puVar1,param_2,lVar3);
  }
  lVar3 = param_3;
  func_0x00010bfadd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c040(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c243340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf1b840(param_3);
  func_0x00010c20afe0(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010bf1b880(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b020(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf1c3c0(param_3);
  func_0x00010c20b000(puVar1,param_2,lVar3);
  func_0x00010bfae680(param_3);
  func_0x00010c19c720(puVar1);
  lVar3 = param_3;
  func_0x00010c298120(param_3);
  func_0x00010c220b20(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c297de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c6c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfadd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c072ec0(param_4,param_2,lVar3);
  func_0x00010c1b1820(puVar1,param_2,lVar4);
  _objc_release(lVar3);
  func_0x00010c1dfba0(puVar1,param_2,0xffffffffffffffff);
  lVar3 = param_3;
  func_0x00010c2a8860(param_3);
  func_0x00010c225c80(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010bf0f140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf0ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf0ed80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c4160(puVar1);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf11440(param_3);
  func_0x00010c16cc40(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c2a09e0(param_3);
  func_0x00010c224100(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c29a680(param_3);
  func_0x00010c221b20(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c2a0400(param_3);
  func_0x00010c223e80(puVar1,param_2,lVar3);
  func_0x00010beac0e0(param_1,param_2,puVar1,param_3);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105de5c94; end: 105de6003; -[SCPreviewBlizzardLogger _fillLensPlusParametersForEvent:withCommonParams:] */

void FUN_105de5c94(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  float fVar29;
  double dVar30;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar23 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010c091c60();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = &uStack_130;
  lVar26 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  fVar29 = (float)uVar23;
  if (lVar2 != 0) {
    lVar27 = *plStack_120;
    do {
      lVar26 = 0;
      do {
        if (*plStack_120 != lVar27) {
          _objc_enumerationMutation(lVar1);
        }
        uVar28 = *(undefined8 *)(lStack_128 + lVar26 * 8);
        uVar22 = uVar28;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_4;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar22;
        func_0x00010c0720c0(uVar22,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(uVar22);
        if ((int)uVar4 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar28;
          func_0x00010c07ed60(uVar28);
          lVar3 = param_3;
          _objc_opt_class(param_3);
          uVar4 = uVar28;
          func_0x00010c094540(uVar28);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c094e20(uVar5,param_2,uVar22,lVar3,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar5);
          func_0x00010c1bc180(param_3,param_2,uVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar28;
          func_0x00010c07ed60(uVar28);
          uVar4 = uVar28;
          func_0x00010c094540(uVar28);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010c0766a0(uVar7,param_2,uVar22,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar7);
          func_0x00010c1b22e0(param_3,param_2,uVar5);
          lVar3 = param_4;
          func_0x00010bfb75c0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar3;
          func_0x00010c08fa60();
          lVar12 = lVar3;
          if (lVar8 == 0) {
            lVar9 = *(long *)(param_1 + 0x30);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar9;
            func_0x00010bfc1f80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            lVar9 = lVar8;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 != 0) {
              lVar10 = lVar8;
              func_0x00010c094540();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c094540();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar10;
              func_0x00010c0720c0(lVar10,param_2,uVar28);
              _objc_release(uVar28);
              _objc_release(lVar10);
              _objc_release(lVar9);
              if ((int)lVar11 != 0) {
                lVar12 = lVar8;
                func_0x00010bfceb20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar3);
              }
            }
            _objc_release(lVar8);
          }
          func_0x00010c19f820(param_3,param_2,lVar12);
          _objc_release(lVar12);
          _objc_release(uVar6);
        }
        lVar26 = lVar26 + 1;
      } while (lVar2 != lVar26);
      puVar25 = &uStack_130;
      lVar26 = 0x10;
      lVar2 = lVar1;
      func_0x00010bf52a60();
      fVar29 = (float)uVar23;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar25);
    puVar13 = PTR_PTR_1126c4c30;
    _objc_retain(lVar26);
    _objc_opt_new(puVar13);
    puVar14 = puVar25;
    func_0x00010c07e5e0(puVar25);
    func_0x00010c1b4700(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c1188c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = puVar25;
      func_0x00010c094540(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c240(puVar13,param_2,puVar14);
      _objc_release(puVar14);
      puVar14 = puVar25;
      func_0x00010c095a20(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc480(puVar13,param_2,puVar14);
      _objc_release(puVar14);
      puVar14 = puVar25;
      func_0x00010c096ca0(puVar25);
      func_0x00010c1bcca0(puVar13,param_2,puVar14);
      puVar14 = puVar25;
      func_0x00010c091c60(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010b06f648();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbee0(puVar13,param_2,puVar15);
      _objc_release(puVar15);
      _objc_release(puVar14);
      puVar14 = puVar25;
      func_0x00010c26a320(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212740(puVar13,param_2,puVar14);
      _objc_release(puVar14);
      puVar14 = puVar25;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar14 != (undefined8 *)0x0) {
        puVar14 = puVar25;
        func_0x00010bf9f120(puVar25);
        func_0x00010c199b20(puVar13,param_2,puVar14);
        puVar14 = puVar25;
        func_0x00010bf9f040(puVar25);
        func_0x00010c199a40(puVar13,param_2,puVar14);
        puVar14 = puVar25;
        func_0x00010c0947c0(puVar25);
        func_0x00010c1bbe80(puVar13,param_2,puVar14);
        puVar14 = puVar25;
        func_0x00010c094800(puVar25);
        func_0x00010c1bbea0(puVar13,param_2,puVar14);
        puVar14 = puVar25;
        func_0x00010c090320(puVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1baba0(puVar13,param_2,puVar14);
        _objc_release(puVar14);
        puVar14 = puVar25;
        func_0x00010c08fda0(puVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c208000(puVar13,param_2,puVar14);
        _objc_release(puVar14);
        puVar14 = puVar25;
        func_0x00010c096da0(puVar25);
        func_0x00010c208420(puVar13,param_2,puVar14);
      }
    }
    func_0x00010be15d40(param_3,param_2,puVar13,puVar25);
    lVar1 = lVar26;
    func_0x00010bfbb520(lVar26);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    lVar27 = lVar26;
    func_0x00010bf0a3a0(lVar26);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar27;
    func_0x00010bf529e0();
    func_0x00010c184440(puVar13,param_2,lVar3 + lVar2);
    _objc_release(lVar27);
    _objc_release(lVar1);
    puVar14 = puVar25;
    func_0x00010c122b20(puVar25);
    func_0x00010c1e88a0(puVar13,param_2,puVar14);
    lVar1 = lVar26;
    func_0x00010bf6f800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar26);
    lVar2 = lVar1;
    func_0x00010c0de0e0(lVar1);
    func_0x00010c1a49c0(puVar13,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c0de400(lVar1);
    func_0x00010c1a4bc0(puVar13,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c0de420(lVar1);
    func_0x00010c218b20(puVar13,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c122d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar2;
    func_0x000108606e18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8a20(puVar13,param_2,lVar26);
    _objc_release(lVar26);
    _objc_release(lVar2);
    puVar14 = puVar25;
    func_0x00010c1046c0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df0c0(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010c2b3580(puVar25);
    func_0x00010c2266e0(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c2b9e40(puVar25);
    func_0x00010c226ec0(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c2aef40(puVar25);
    func_0x00010c226460(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c2ba540(puVar25);
    func_0x00010c226f40(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c095800(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc3e0(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010bf2fbe0(puVar25);
    func_0x00010c178480(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bf30860(puVar25);
    func_0x00010c178bc0(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bf30440(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178920(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar16 = PTR_PTR_1126c4720;
    _objc_opt_new(PTR_PTR_1126c4720);
    puVar14 = puVar25;
    func_0x00010c282c80(puVar25);
    func_0x00010c1e9680(puVar16,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c2681e0(puVar25);
    func_0x00010c2117e0(puVar16,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bf5bb60(puVar25);
    func_0x00010c1e59c0(puVar16,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bfb92e0(puVar25);
    func_0x00010c170060(puVar16,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c268220(puVar25);
    func_0x00010c211800(puVar16,param_2,puVar14);
    func_0x00010c21f5a0(puVar13,param_2,puVar16);
    puVar14 = puVar25;
    func_0x00010c243340(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010bf31200(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010bfae280(puVar25);
    func_0x00010c19c3c0(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bfae500(puVar25);
    func_0x00010c19c600(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c2a8860(puVar25);
    func_0x00010c225c80(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bf0f140(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c4e0(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010bf0ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined8 *)0x0) {
      puVar14 = puVar25;
      func_0x00010bf0ed80(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c1c4160(puVar13);
      _objc_release(puVar14);
    }
    puVar14 = puVar25;
    func_0x00010c2a0400(puVar25);
    func_0x00010c223e80(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c0b59a0(puVar25);
    func_0x00010c1c1040(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bfd3440(puVar25);
    func_0x00010c1a5460(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bfb2520(puVar25);
    func_0x00010c19db40(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x000108441e7c(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee3c0(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010c140fc0(puVar25);
    func_0x00010c1ee440(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c140f80(puVar25);
    func_0x00010c1ee340(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010bf29800(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176660(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = puVar25;
    func_0x00010c1412c0(puVar25);
    func_0x00010c178da0(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x00010c29b480();
    if (puVar14 != (undefined8 *)0x0) {
      puVar14 = puVar25;
      func_0x00010c29b480(puVar25);
      func_0x00010c222000(puVar13,param_2,puVar14);
    }
    func_0x00010c095f40(puVar25);
    dVar30 = (double)fVar29;
    func_0x00010c1768c0(dVar30,puVar13);
    fVar29 = SUB84(dVar30,0);
    puVar14 = puVar25;
    func_0x00010bf13940(puVar25);
    func_0x00010c16e1e0(puVar13,param_2,puVar14);
    puVar14 = puVar25;
    func_0x000108441ef0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 != (undefined8 *)0x0) {
      func_0x00010c216da0(puVar13,param_2,puVar14);
    }
    puVar15 = puVar25;
    func_0x0001084427bc();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 != (undefined8 *)0x0) {
      func_0x00010c227b80(puVar13,param_2,puVar15);
    }
    puVar17 = puVar25;
    func_0x000108441fa8(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8fe0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf31280(puVar25);
    func_0x00010c1792c0(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c0c75c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar17 != (undefined8 *)0x0) {
      puVar17 = puVar25;
      func_0x00010c0c75c0(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c067fc0();
      func_0x00010c2059a0(puVar13,param_2,puVar18);
      _objc_release(puVar17);
    }
    puVar17 = puVar25;
    func_0x00010bfb25c0(puVar25);
    func_0x00010c19dbc0(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c2bd260(puVar25);
    func_0x00010c2271c0(puVar13,param_2,puVar17);
    func_0x00010c2bf3e0(puVar25);
    func_0x00010c227be0(puVar13);
    puVar17 = puVar25;
    func_0x00010c096b60(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf09180(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcf40(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf09160(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf5ad40(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x000108441b08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185860(puVar13,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c2485e0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2075c0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c0d3a20(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca440(puVar13,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c0d3300(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9fe0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c0d3840(puVar25);
    func_0x00010c1ca4e0(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bf4f080(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1833c0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c0c1aa0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2f20(puVar13,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c0d37c0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca220(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c06c6a0(puVar25);
    func_0x00010c1af380(puVar13,param_2,puVar17);
    puVar19 = PTR_PTR_1126c4738;
    _objc_opt_new(PTR_PTR_1126c4738);
    puVar17 = puVar25;
    func_0x00010c070860(puVar25);
    func_0x00010c1b06a0(puVar19,param_2,puVar17);
    func_0x00010c0d1300(puVar25);
    dVar30 = (double)fVar29;
    func_0x00010c1c91e0(dVar30,puVar19);
    fVar29 = SUB84(dVar30,0);
    func_0x00010c1c9180(puVar13,param_2,puVar19);
    puVar17 = puVar25;
    func_0x00010c1295a0(puVar25);
    func_0x00010c1e9e20(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c1297e0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c129a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea120(puVar13,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar20 = PTR_PTR_1126c4728;
    _objc_opt_new(PTR_PTR_1126c4728);
    puVar17 = puVar25;
    func_0x00010c1297e0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c129aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea1a0(puVar20,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    func_0x00010c1e9e60(puVar13,param_2,puVar20);
    puVar17 = puVar25;
    func_0x00010c1343c0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb7e0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf1c3a0(puVar25);
    func_0x00010c20a860(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bf1c420(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a8c0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c244220(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b920(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c2441e0(puVar25);
    func_0x00010c20b8c0(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c2539a0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a960(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c253980(puVar25);
    func_0x00010c20a940(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bf61e60(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20ace0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf61f40(puVar25);
    func_0x00010c20ac00(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bf8e9a0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20aec0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf8e960(puVar25);
    func_0x00010c20ae60(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bfee080(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b1c0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bfee060(puVar25);
    func_0x00010c20b1a0(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bfccbc0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b060(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bfccb60(puVar25);
    func_0x00010c20b040(puVar13,param_2,puVar17);
    puVar21 = PTR_PTR_1126c4730;
    _objc_opt_new(PTR_PTR_1126c4730);
    puVar17 = puVar25;
    func_0x00010c0d2c80(puVar25);
    func_0x00010c1c9c60(puVar21,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c2a0a00(puVar25);
    func_0x00010c224120(puVar21,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c0d30c0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c9f60(puVar21);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c2a0ba0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c224160(puVar21);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bf160e0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c16f3a0(puVar21);
    _objc_release(puVar17);
    func_0x00010c16bee0(puVar13,param_2,puVar21);
    puVar17 = puVar25;
    func_0x00010c26c920(puVar25);
    func_0x00010c213840(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010c26c980(puVar25);
    func_0x00010c213860(puVar13,param_2,puVar17);
    puVar18 = puVar25;
    func_0x00010c158420();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar18;
    func_0x00010bf529e0();
    _objc_release(puVar18);
    puVar18 = puVar25;
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = puVar25;
      func_0x00010bef0520(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c176a60(puVar13,param_2,puVar17);
      _objc_release(puVar17);
      func_0x00010bf6f7a0(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c600(puVar13,param_2,puVar18);
    }
    else {
      puVar17 = puVar25;
      func_0x00010b070344();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c176a60(puVar13,param_2,puVar17);
      _objc_release(puVar17);
      puVar17 = puVar25;
      func_0x00010b0704c8(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c600(puVar13,param_2,puVar17);
      _objc_release(puVar17);
      func_0x00010c158420(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar18;
      func_0x00010bf529e0();
      func_0x00010c18e4e0(puVar13,param_2,puVar17);
    }
    _objc_release(puVar18);
    puVar17 = puVar25;
    func_0x00010bf2ae80(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffc60(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010844258c(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9480(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar17 != (undefined8 *)0x0) {
      puVar17 = puVar25;
      func_0x00010c241220(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204680(puVar13,param_2,puVar17);
      _objc_release(puVar17);
    }
    puVar17 = puVar25;
    func_0x00010c0c9fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar17 != (undefined8 *)0x0) {
      puVar17 = puVar25;
      func_0x00010c0c9fe0(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c067fc0();
      _objc_release(puVar17);
      func_0x00010c1a1aa0(puVar13,param_2,puVar18);
      func_0x00010c1ddc60(puVar13,param_2,1);
      puVar17 = puVar25;
      func_0x00010bf97180(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199560(puVar13,param_2,puVar17);
      _objc_release(puVar17);
      puVar17 = puVar25;
      func_0x00010bfbcb60(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a00(puVar13,param_2,puVar17);
      _objc_release(puVar17);
    }
    puVar17 = puVar25;
    func_0x00010c0c6840(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c52e0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c26afc0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    uVar22 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c15fac0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef220();
    func_0x00010c1c56a0(puVar13,param_2,(long)(fVar29 * 100.0));
    _objc_release(uVar23);
    _objc_release(uVar22);
    puVar17 = puVar25;
    func_0x00010c2736c0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar18;
    func_0x000108ee0cac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar24;
    func_0x00010c0976a0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf529e0();
    func_0x00010c2260c0(puVar13,param_2,puVar18 != (undefined8 *)0x0);
    _objc_release(puVar17);
    puVar17 = puVar24;
    func_0x00010bfd8c80(puVar24);
    func_0x00010c226620(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010befeb80(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf07d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1861a0(puVar13,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar24;
    func_0x00010c0976a0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bd0c0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x000108edfb08(puVar25);
    func_0x00010c1a67a0(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x0001084425f0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c16c0(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c2543a0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c0b5c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9ee0(puVar13,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c0b5c60(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1160(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010c247400(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206b60(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar25;
    func_0x00010bfd6ec0(puVar25);
    func_0x00010c226260(puVar13,param_2,puVar17);
    puVar17 = puVar25;
    func_0x00010bf9e300(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199680(puVar13,param_2,puVar17);
    _objc_release(puVar17);
    func_0x00010bea7d40(param_3,param_2,puVar13,puVar25);
    func_0x00010beac0e0(param_3,param_2,puVar13,puVar25);
    _objc_release(puVar24);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar16);
    _objc_release(lVar1);
    _objc_release(puVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  return;
}



/* Entry: 105de6004; end: 105de72bb; -[SCPreviewBlizzardLogger _constructNonGeoEventWithCommonLoggingParameters:geofilterLogger:destinationInfo:] */

void FUN_105de6004(float param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  double dVar15;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4c30;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  lVar2 = param_4;
  func_0x00010c07e5e0(param_4);
  func_0x00010c1b4700(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c1188c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar1,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c095a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc480(puVar1,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c096ca0(param_4);
    func_0x00010c1bcca0(puVar1,param_3,lVar2);
    lVar2 = param_4;
    func_0x00010c091c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010b06f648();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbee0(puVar1,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c26a320(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212740(puVar1,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_4;
      func_0x00010bf9f120(param_4);
      func_0x00010c199b20(puVar1,param_3,lVar2);
      lVar2 = param_4;
      func_0x00010bf9f040(param_4);
      func_0x00010c199a40(puVar1,param_3,lVar2);
      lVar2 = param_4;
      func_0x00010c0947c0(param_4);
      func_0x00010c1bbe80(puVar1,param_3,lVar2);
      lVar2 = param_4;
      func_0x00010c094800(param_4);
      func_0x00010c1bbea0(puVar1,param_3,lVar2);
      lVar2 = param_4;
      func_0x00010c090320(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1baba0(puVar1,param_3,lVar2);
      _objc_release(lVar2);
      lVar2 = param_4;
      func_0x00010c08fda0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208000(puVar1,param_3,lVar2);
      _objc_release(lVar2);
      lVar2 = param_4;
      func_0x00010c096da0(param_4);
      func_0x00010c208420(puVar1,param_3,lVar2);
    }
  }
  func_0x00010be15d40(param_2,param_3,puVar1,param_4);
  lVar2 = param_6;
  func_0x00010bfbb520(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = param_6;
  func_0x00010bf0a3a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  func_0x00010c184440(puVar1,param_3,lVar5 + lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c122b20(param_4);
  func_0x00010c1e88a0(puVar1,param_3,lVar2);
  lVar2 = param_6;
  func_0x00010bf6f800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar3 = lVar2;
  func_0x00010c0de0e0(lVar2);
  func_0x00010c1a49c0(puVar1,param_3,lVar3);
  lVar3 = lVar2;
  func_0x00010c0de400(lVar2);
  func_0x00010c1a4bc0(puVar1,param_3,lVar3);
  lVar3 = lVar2;
  func_0x00010c0de420(lVar2);
  func_0x00010c218b20(puVar1,param_3,lVar3);
  lVar3 = lVar2;
  func_0x00010c122d80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108606e18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8a20(puVar1,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c1046c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df0c0(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c2b3580(param_4);
  func_0x00010c2266e0(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c2b9e40(param_4);
  func_0x00010c226ec0(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c2aef40(param_4);
  func_0x00010c226460(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c2ba540(param_4);
  func_0x00010c226f40(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c095800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bf2fbe0(param_4);
  func_0x00010c178480(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bf30860(param_4);
  func_0x00010c178bc0(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bf30440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  lVar3 = param_4;
  func_0x00010c282c80(param_4);
  func_0x00010c1e9680(puVar6,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c2681e0(param_4);
  func_0x00010c2117e0(puVar6,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bf5bb60(param_4);
  func_0x00010c1e59c0(puVar6,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bfb92e0(param_4);
  func_0x00010c170060(puVar6,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c268220(param_4);
  func_0x00010c211800(puVar6,param_3,lVar3);
  func_0x00010c21f5a0(puVar1,param_3,puVar6);
  lVar3 = param_4;
  func_0x00010c243340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bf31200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bfae280(param_4);
  func_0x00010c19c3c0(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bfae500(param_4);
  func_0x00010c19c600(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c2a8860(param_4);
  func_0x00010c225c80(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bf0f140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bf0ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010bf0ed80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c4160(puVar1);
    _objc_release(lVar3);
  }
  lVar3 = param_4;
  func_0x00010c2a0400(param_4);
  func_0x00010c223e80(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c0b59a0(param_4);
  func_0x00010c1c1040(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bfd3440(param_4);
  func_0x00010c1a5460(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bfb2520(param_4);
  func_0x00010c19db40(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x000108441e7c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee3c0(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c140fc0(param_4);
  func_0x00010c1ee440(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c140f80(param_4);
  func_0x00010c1ee340(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010bf29800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176660(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c1412c0(param_4);
  func_0x00010c178da0(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x00010c29b480();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010c29b480(param_4);
    func_0x00010c222000(puVar1,param_3,lVar3);
  }
  func_0x00010c095f40(param_4);
  dVar15 = (double)param_1;
  func_0x00010c1768c0(dVar15,puVar1);
  fVar14 = SUB84(dVar15,0);
  lVar3 = param_4;
  func_0x00010bf13940(param_4);
  func_0x00010c16e1e0(puVar1,param_3,lVar3);
  lVar3 = param_4;
  func_0x000108441ef0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c216da0(puVar1,param_3,lVar3);
  }
  lVar4 = param_4;
  func_0x0001084427bc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c227b80(puVar1,param_3,lVar4);
  }
  lVar5 = param_4;
  func_0x000108441fa8(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fe0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf31280(param_4);
  func_0x00010c1792c0(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c0c75c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c0c75c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c067fc0();
    func_0x00010c2059a0(puVar1,param_3,lVar7);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010bfb25c0(param_4);
  func_0x00010c19dbc0(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c2bd260(param_4);
  func_0x00010c2271c0(puVar1,param_3,lVar5);
  func_0x00010c2bf3e0(param_4);
  func_0x00010c227be0(puVar1);
  lVar5 = param_4;
  func_0x00010c096b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf09180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf09160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a100(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf5ad40(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x000108441b08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185860(puVar1,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c2485e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2075c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0d3a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(puVar1,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0d3300(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fe0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0d3840(param_4);
  func_0x00010c1ca4e0(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0c1aa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(puVar1,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0d37c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c06c6a0(param_4);
  func_0x00010c1af380(puVar1,param_3,lVar5);
  puVar8 = PTR_PTR_1126c4738;
  _objc_opt_new(PTR_PTR_1126c4738);
  lVar5 = param_4;
  func_0x00010c070860(param_4);
  func_0x00010c1b06a0(puVar8,param_3,lVar5);
  func_0x00010c0d1300(param_4);
  dVar15 = (double)fVar14;
  func_0x00010c1c91e0(dVar15,puVar8);
  fVar14 = SUB84(dVar15,0);
  func_0x00010c1c9180(puVar1,param_3,puVar8);
  lVar5 = param_4;
  func_0x00010c1295a0(param_4);
  func_0x00010c1e9e20(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c1297e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(puVar1,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  puVar9 = PTR_PTR_1126c4728;
  _objc_opt_new(PTR_PTR_1126c4728);
  lVar5 = param_4;
  func_0x00010c1297e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar9,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  func_0x00010c1e9e60(puVar1,param_3,puVar9);
  lVar5 = param_4;
  func_0x00010c1343c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf1c3a0(param_4);
  func_0x00010c20a860(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf1c420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c244220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c2441e0(param_4);
  func_0x00010c20b8c0(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c2539a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a960(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c253980(param_4);
  func_0x00010c20a940(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf61e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ace0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf61f40(param_4);
  func_0x00010c20ac00(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf8e9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf8e960(param_4);
  func_0x00010c20ae60(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bfee080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bfee060(param_4);
  func_0x00010c20b1a0(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bfccbc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bfccb60(param_4);
  func_0x00010c20b040(puVar1,param_3,lVar5);
  puVar10 = PTR_PTR_1126c4730;
  _objc_opt_new(PTR_PTR_1126c4730);
  lVar5 = param_4;
  func_0x00010c0d2c80(param_4);
  func_0x00010c1c9c60(puVar10,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c2a0a00(param_4);
  func_0x00010c224120(puVar10,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c0d30c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar10);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c2a0ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar10);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf160e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar10);
  _objc_release(lVar5);
  func_0x00010c16bee0(puVar1,param_3,puVar10);
  lVar5 = param_4;
  func_0x00010c26c920(param_4);
  func_0x00010c213840(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c26c980(param_4);
  func_0x00010c213860(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  lVar5 = param_4;
  if (lVar7 == 0) {
    lVar7 = param_4;
    func_0x00010bef0520(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar1,param_3,lVar7);
    _objc_release(lVar7);
    func_0x00010bf6f7a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c600(puVar1,param_3,lVar5);
  }
  else {
    lVar7 = param_4;
    func_0x00010b070344();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar1,param_3,lVar7);
    _objc_release(lVar7);
    lVar7 = param_4;
    func_0x00010b0704c8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c600(puVar1,param_3,lVar7);
    _objc_release(lVar7);
    func_0x00010c158420(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf529e0();
    func_0x00010c18e4e0(puVar1,param_3,lVar7);
  }
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf2ae80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010844258c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9480(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar1,param_3,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010c0c9fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c0c9fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c067fc0();
    _objc_release(lVar5);
    func_0x00010c1a1aa0(puVar1,param_3,lVar7);
    func_0x00010c1ddc60(puVar1,param_3,1);
    lVar5 = param_4;
    func_0x00010bf97180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199560(puVar1,param_3,lVar5);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010bfbcb60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1,param_3,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010c0c6840(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52e0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c26afc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c20(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c15fac0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c1c56a0(puVar1,param_3,(long)(fVar14 * 100.0));
  _objc_release(uVar12);
  _objc_release(uVar11);
  lVar5 = param_4;
  func_0x00010c2736c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar7;
  func_0x000108ee0cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = lVar13;
  func_0x00010c0976a0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf529e0();
  func_0x00010c2260c0(puVar1,param_3,lVar7 != 0);
  _objc_release(lVar5);
  lVar5 = lVar13;
  func_0x00010bfd8c80(lVar13);
  func_0x00010c226620(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010befeb80(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(puVar1,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = lVar13;
  func_0x00010c0976a0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd0c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x000108edfb08(param_4);
  func_0x00010c1a67a0(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x0001084425f0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(puVar1,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0b5c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c247400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bfd6ec0(param_4);
  func_0x00010c226260(puVar1,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf9e300(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199680(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  func_0x00010bea7d40(param_2,param_3,puVar1,param_4);
  func_0x00010beac0e0(param_2,param_3,puVar1,param_4);
  _objc_release(lVar13);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105de72bc; end: 105de7597; -[SCPreviewBlizzardLogger _logSnapPreviewActionForMultiCapture:geofilterLogger:uniqueSnapCreationCount:deletedSegmentCaptureSessionIDs:destinationInfo:] */

void FUN_105de72bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010beb6980(param_1,param_2,param_3);
  uVar2 = param_3;
  func_0x00010b06f544();
  if (((int)uVar2 != 0) && ((uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bde6b00(param_1,param_2,param_3,param_4,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ad220();
    uVar2 = param_6;
    func_0x00010bf446e0(param_6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b9a0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c293fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bde6d40(param_1,param_2,param_3,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ad220();
  uVar2 = param_6;
  func_0x00010bf446e0(param_6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b9a0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x00010c067fc0(lVar5);
    func_0x00010c206c40(uVar1,param_2,lVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010c254340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2553e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c243340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123a00(uVar3,param_2,0,uVar7,uVar8,uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de7598; end: 105de8b07; -[SCPreviewBlizzardLogger _setupDirectSnapPreviewBaseEventEvent:loggingParameters:] */

void FUN_105de7598(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf29de0(param_5);
  func_0x00010c1769e0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf037a0(param_5);
  func_0x00010c167f20(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf03500(param_5);
  func_0x00010c167e60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2a8340(param_5);
  func_0x00010c225be0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c250280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2057e0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c088ba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7ce0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfae2c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179ba0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfadfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010bfadfc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c19c200(param_4);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c0d2360(param_5);
  func_0x00010c1c9920(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c0d22c0(param_5);
  func_0x00010c1c98a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c27c860(param_5);
  func_0x00010c21a560(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c27c840(param_5);
  func_0x00010c21a540(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfd7ee0(param_5);
  func_0x00010c1a6100(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf6cf80(param_5);
  func_0x00010c18b9e0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c247520(param_5);
  func_0x00010c206c40(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfd82e0(param_5);
  func_0x00010c1a61e0(param_4,param_3,uVar1);
  uVar2 = param_5;
  func_0x00010c0c6c20();
  uVar1 = uVar2 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar6 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_105de8b00;
        uVar6 = 0xe;
      }
    }
    else {
      uVar6 = 1;
      if ((uVar2 + 1 < 0x1c) && ((1L << (uVar2 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (uVar2 + 1 < 0x1b) {
          uVar6 = *(undefined8 *)(&UNK_10ddd09e0 + (uVar2 + 1) * 8);
        }
        else {
          uVar6 = 0;
        }
      }
    }
  }
  else {
LAB_105de8b00:
    uVar6 = 2;
  }
  func_0x00010c1c5440(param_4,param_3,uVar6);
  uVar1 = param_5;
  func_0x00010bfb2540(param_5);
  func_0x00010c19daa0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfd3440(param_5);
  func_0x00010c1a5460(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c087d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_5;
    func_0x00010bfbb160(param_5);
    func_0x00010c176040(param_4,param_3,uVar1 & 0xffffffff);
  }
  else {
    func_0x00010c176040(param_4,param_3,2);
    uVar1 = param_5;
    func_0x00010c087d20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73e0(param_4,param_3,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c087b00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7380(param_4,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010c0c4ba0(param_5);
  dVar8 = (double)((float)(int)(param_1 * 10.0) / 10.0);
  func_0x00010c205880(dVar8,param_4);
  fVar7 = SUB84(dVar8,0);
  uVar1 = param_5;
  func_0x00010c243700(param_5);
  func_0x00010c205840(param_4,param_3,uVar1);
  func_0x00010c29e480(param_5);
  func_0x00010c222d20((double)((float)(int)(fVar7 * 10.0) / 10.0),param_4);
  uVar1 = param_5;
  func_0x00010bf89ea0(param_5);
  func_0x00010c191960(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf2fba0(param_5);
  func_0x00010c178460(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf5c920(param_5);
  func_0x00010c226060(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf5c9e0(param_5);
  func_0x00010c226080(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfadfa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108442be8();
  func_0x00010c19c1c0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfae8c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108442868();
  func_0x00010c19c760(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf30820(param_5);
  func_0x00010c178b80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf2fe80(param_5);
  func_0x00010c1785c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf2fbe0(param_5);
  func_0x00010c178480(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf30860(param_5);
  func_0x00010c178bc0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30260();
  func_0x00010c178820(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf30440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178960(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178940(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf303e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1788e0(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf303c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1788c0(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c252a80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178780(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c252ac0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178c60(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf30220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1787e0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30160();
  func_0x00010c178740(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf30660(param_5);
  func_0x00010c178ae0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf307a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010bf30600(param_5);
    func_0x00010c178aa0(param_4,param_3,uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30420();
  func_0x00010c178680(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf300e0();
  func_0x00010c1786a0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fca0();
  func_0x00010c1784c0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fce0();
  func_0x00010c1784e0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fd00();
  func_0x00010c178500(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fc00();
  func_0x00010c1784a0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf304e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  func_0x00010c226760(param_4,param_3,uVar3 != 0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf11440(param_5);
  func_0x00010c16cc40(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2a09e0(param_5);
  func_0x00010c224100(param_4,param_3,uVar1);
  puVar4 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  uVar1 = param_5;
  func_0x00010c282c80(param_5);
  func_0x00010c1e9680(puVar4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2681e0(param_5);
  func_0x00010c2117e0(puVar4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf5bb60(param_5);
  func_0x00010c1e59c0(puVar4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfb92e0(param_5);
  func_0x00010c170060(puVar4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c268220(param_5);
  func_0x00010c211800(puVar4,param_3,uVar1);
  func_0x00010c21f5a0(param_4,param_3,puVar4);
  uVar1 = param_5;
  func_0x00010c253c00(param_5);
  func_0x00010c20abc0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2551a0(param_5);
  func_0x00010c20ba80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c253de0(param_5);
  func_0x00010c20adc0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2538c0(param_5);
  func_0x00010c20a840(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c254000(param_5);
  func_0x00010c20af80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2543a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c253f80();
  func_0x00010c20af60(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c255260(param_5);
  func_0x00010c20bb60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c1101a0(param_5);
  func_0x00010c1e1760(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c1084c0(param_5);
  func_0x00010c1e0780(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf8e960(param_5);
  func_0x00010c20ae60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf8e9a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf8e980(param_5);
  func_0x00010c20aea0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf1c3a0(param_5);
  func_0x00010c20a860(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf1c420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf1c3c0(param_5);
  func_0x00010c20a8a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf61f40(param_5);
  func_0x00010c20ac00(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf61d60(param_5);
  func_0x00010c20ac20(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf61d80(param_5);
  func_0x00010c20ac60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf61f60(param_5);
  func_0x00010c20acc0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf61da0(param_5);
  func_0x00010c20ac40(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf61dc0(param_5);
  func_0x00010c20ac80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfee080(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfee060(param_5);
  func_0x00010c20b1a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf4f960(param_5);
  func_0x00010c20ab80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf4f980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfedfe0(param_5);
  func_0x00010c20b1e0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2441e0(param_5);
  func_0x00010c20b8c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c244200(param_5);
  func_0x00010c20b900(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c281340(param_5);
  func_0x00010c20bb20(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c281380(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfccb60(param_5);
  func_0x00010c20b040(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfccbc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c244220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c252c60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b5c0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010c2543c0(param_5);
  func_0x00010c20b320(param_4);
  uVar1 = param_5;
  func_0x00010c2543a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2543e0();
  func_0x00010c20b340(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c2543a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c254c00();
  func_0x00010c20b5a0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c255140(param_5);
  func_0x00010c20ba40(param_4,param_3,uVar1);
  uVar2 = param_5;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf2a7c0();
  func_0x00010c20aaa0(param_4,param_3,uVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf2a960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aac0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = param_5;
  func_0x00010c2453c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c091c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
LAB_105de8324:
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_5;
    func_0x00010c1188c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uVar2 = param_5;
      func_0x00010c091c60(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c094540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199cc0(param_4,param_3,uVar2);
      _objc_release(uVar2);
      goto LAB_105de8324;
    }
  }
  uVar1 = param_5;
  func_0x00010bfae160(param_5);
  func_0x00010c19c2c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfae340(param_5);
  func_0x00010c19c460(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c264640(param_5);
  func_0x00010c210580(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfb1de0(param_5);
  func_0x00010c19d6a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfadf40(param_5);
  func_0x00010c19c260(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfae380(param_5);
  func_0x00010c19c740(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfada80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108441fec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010bfc1280(uVar2);
    func_0x00010c19c0a0(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010bfc13a0(uVar2);
    func_0x00010c19c0c0(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010c297f20(uVar2);
    func_0x00010c19c6e0(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010c298160(uVar2);
    func_0x00010c19c700(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010bfb6de0(uVar2);
    func_0x00010c19bf60(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010bfb7200(uVar2);
    func_0x00010c19bf80(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010bf1bd20(uVar2);
    func_0x00010c19bd80(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010bf1c660(uVar2);
    func_0x00010c19bda0(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010c24a600(uVar2);
    func_0x00010c19c520(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010c24ab80(uVar2);
    func_0x00010c19c540(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010c0ed040(uVar2);
    func_0x00010c19c360(param_4,param_3,uVar1);
    uVar1 = uVar2;
    func_0x00010c0ed0c0(uVar2);
    func_0x00010c19c380(param_4,param_3,uVar1);
  }
  uVar1 = param_5;
  func_0x00010c247520(param_5);
  func_0x00010c2056c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c23fde0(param_5);
  func_0x00010c226de0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c23fd80(param_5);
  func_0x00010c226f40(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c241820(param_5);
  func_0x00010c226c40(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2aea60(param_5);
  func_0x00010c2263c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c14a280(param_5);
  func_0x00010c1f5840(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c23fda0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c23fdc0();
    if ((int)uVar1 == 0) goto LAB_105de8568;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  func_0x00010c1f5960(param_4,param_3,uVar6);
LAB_105de8568:
  uVar1 = param_5;
  func_0x00010c0ce9a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c268ec0(param_5);
  func_0x00010c211b80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf219a0(param_5);
  func_0x00010c174020(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf219e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf89ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191720(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf89c80(param_5);
  func_0x00010c2261c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf89cc0(param_5);
  func_0x00010c1917a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf89f80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1919e0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf8a280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191ac0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf8a260(param_5);
  func_0x00010c191aa0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf8a2a0(param_5);
  func_0x00010c191ae0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2a8860(param_5);
  func_0x00010c225c80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf0f140(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c247460(param_5);
  func_0x00010c226e60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf0ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010bf0ed80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c4160(param_4);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c29a680(param_5);
  func_0x00010c221b20(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c110bc0(param_5);
  func_0x00010c1e1be0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2b6aa0(param_5);
  func_0x00010c226ba0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2a0400(param_5);
  func_0x00010c223e80(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfae400(param_5);
  func_0x00010c19c560(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfae420(param_5);
  func_0x00010c19c580(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf89c60(param_5);
  func_0x00010c2261a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf8e300(param_5);
  func_0x00010c226220(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf0d3a0(param_5);
  func_0x00010c225ce0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c270860(param_5);
  func_0x00010c227060(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c247440(param_5);
  func_0x00010c226ea0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf373c0(param_5);
  func_0x00010c225f60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c105360(param_5);
  func_0x00010c226a00(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf11560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cd20(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c2adfe0(param_5);
  func_0x00010c2262c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bfcf360(param_5);
  func_0x00010c1a4b40(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf12700(param_5);
  func_0x00010c16d6c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf9c9c0(param_5);
  func_0x00010c198cc0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010bf126c0(param_5);
  func_0x00010c16d640(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c2b4400(param_5);
  func_0x00010c2267c0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c0e1ae0(param_5);
  func_0x00010c1d0b60(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c22c060(param_5);
  func_0x00010c1ff200(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c29dee0(param_5);
  func_0x00010c222aa0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c1511a0();
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010c1511a0(param_5);
    func_0x00010c1f7320(param_4,param_3,uVar1);
  }
  uVar1 = param_5;
  func_0x00010c259e40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d2c0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c23ef00(param_5);
  func_0x00010c203740(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c07a080(param_5);
  func_0x00010c1b34a0(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c27c4a0(param_5);
  func_0x00010c21a480(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c247500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c00(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c102520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    puVar5 = PTR_PTR_1126c4740;
    _objc_opt_new(PTR_PTR_1126c4740);
    uVar1 = param_5;
    func_0x00010c102520(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0cfda0();
    func_0x00010c1c8cc0(puVar5,param_3,uVar3);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c102520();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c29f900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      uVar1 = param_5;
      func_0x00010c102520(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c29f900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c222600(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    func_0x00010c1de4e0(param_4,param_3,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105de8b08; end: 105de8ba3; -[SCPreviewBlizzardLogger _setSpotlightParamatersWithDirectSnapPreviewEvent:loggingParameters:] */

void FUN_105de8b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x000100817178();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010bf00560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c52e0(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de8ba4; end: 105de8c03;  */

void FUN_105de8ba4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c67c0();
  if (lVar1 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0c67c0(param_2);
    func_0x00010bb1394c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105de8c04; end: 105de8c67; -[SCPreviewBlizzardLogger snapSourceStringForPerformanceSummaryWithSnapSource:] */

void FUN_105de8c04(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 + 1U < 0x2d) && ((1L << (param_3 + 1U & 0x3f) & 0x100400203216U) != 0)) {
    func_0x0001008cc2b4(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de8c68; end: 105de8d47; -[SCPreviewBlizzardLogger _shouldSkipGeoDirectSnapPreviewForParams:] */

bool FUN_105de8c68(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfd76a0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfadd80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if ((lVar3 == 0) && (lVar3 = param_3, func_0x00010bf1b840(), lVar3 < 1)) {
      lVar3 = param_3;
      func_0x00010c297de0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar4 = param_3;
        func_0x00010c281360(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        bVar1 = lVar5 == 0;
        _objc_release(lVar4);
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar3);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105de8d48; end: 105de8d4f; -[SCPreviewBlizzardLogger previewActionObservable] */

undefined8 FUN_105de8d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105de8d50; end: 105de8ddf; -[SCPreviewBlizzardLogger .cxx_destruct] */

void FUN_105de8d50(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105de8de0; end: 105de8e9f; -[SCSelectedCaptionLogEvent initWithFilterId:itemPosition:hasBackground:captionStyle:] */

undefined1 *
FUN_105de8de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed208;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105de8ea0; end: 105de8ea7; -[SCSelectedCaptionLogEvent filterId] */

undefined8 FUN_105de8ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105de8ea8; end: 105de8eaf; -[SCSelectedCaptionLogEvent hasBackground] */

undefined1 FUN_105de8ea8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105de8eb0; end: 105de8eb7; -[SCSelectedCaptionLogEvent itemPosition] */

undefined8 FUN_105de8eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105de8eb8; end: 105de8ebf; -[SCSelectedCaptionLogEvent captionStyle] */

undefined8 FUN_105de8eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105de8ec0; end: 105de8eef; -[SCSelectedCaptionLogEvent .cxx_destruct] */

void FUN_105de8ec0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105de8ef0; end: 105de8fef; -[SCPreviewCaptionLogger initWithBlizzardServices:] */

undefined1 * FUN_105de8ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105de8ff0; end: 105de901f; -[SCPreviewCaptionLogger setCaptureSessionID:] */

void FUN_105de8ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105de9020; end: 105de902f; -[SCPreviewCaptionLogger logCaptionAdded] */

void FUN_105de9020(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return;
}



/* Entry: 105de9030; end: 105de903f; -[SCPreviewCaptionLogger logCaptionRemoved] */

void FUN_105de9030(long param_1)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}



/* Entry: 105de9040; end: 105de9047; -[SCPreviewCaptionLogger logCaptionCarouselStyleItemTapped:] */

void FUN_105de9040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 105de9048; end: 105de9057; -[SCPreviewCaptionLogger logCaptionCarouselUserTaggingItemTapped] */

void FUN_105de9048(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 105de9058; end: 105de9067; -[SCPreviewCaptionLogger logUserTaggingFromTextInput] */

void FUN_105de9058(long param_1)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 105de9068; end: 105de9077; -[SCPreviewCaptionLogger logUserTaggingFromButtonTap] */

void FUN_105de9068(long param_1)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return;
}



/* Entry: 105de9078; end: 105de9087; -[SCPreviewCaptionLogger logUserTaggingFromSticker] */

void FUN_105de9078(long param_1)

{
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  return;
}



/* Entry: 105de9088; end: 105de931f; -[SCPreviewCaptionLogger logCaptionEditingActionFromLoggingParameters:] */

void FUN_105de9088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126c4c38;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110efb738);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  func_0x00010c225ee0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110efb758);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  func_0x00010c226fa0(puVar1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110efb778);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  func_0x00010c225f40(puVar1,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110efb798);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  func_0x00010c225f00(puVar1,param_2,uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110efb7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c067fc0();
  func_0x00010c178640(puVar1,param_2,uVar7);
  uVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea05f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c179280(puVar1,param_2,uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar8);
  func_0x00010c178c00(puVar1,param_2,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf446e0(uVar8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178c40(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar9;
  _objc_release(uVar8);
  func_0x00010c2118c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010c2118a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x00010c211860(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x00010c211880(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c293fc0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de9320; end: 105de9527; -[SCPreviewCaptionLogger updateCaptionMetricsInSnapCommonLoggingParams:captionStyleLoggingParams:magicCaptionLoggingParams:] */

void FUN_105de9320(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar11 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c2a9fc0(param_3,param_2,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9fe0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4448;
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010bf30480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf30460();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf303e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf303c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf30260();
  uVar7 = param_4;
  func_0x00010bf30420();
  uVar8 = param_4;
  func_0x00010bf300e0();
  func_0x00010bf30160();
  uVar9 = param_4;
  func_0x00010bf30180();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bffc660(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7 & 0xffffffff,(char)uVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2aa080(param_3,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3460(param_3,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de9528; end: 105de954f; -[SCPreviewCaptionLogger getCaptionPerformanceSessions] */

void FUN_105de9528(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105de9550; end: 105de9597; -[SCPreviewCaptionLogger logCaptionStylesExpected:captionStylesFailed:] */

void FUN_105de9550(double param_1,long param_2)

{
  func_0x00010c178a60(*(undefined8 *)(param_2 + 0x78));
  func_0x00010c178a80(*(undefined8 *)(param_2 + 0x78));
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c1a1770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * 1000.0,*(undefined8 *)(param_2 + 0x78),
             PTR_s_setFullyLoadedTimeMillis__112645ff8);
  return;
}



/* Entry: 105de9598; end: 105de95e3; -[SCPreviewCaptionLogger logStartedTyping] */

void FUN_105de9598(double param_1,long param_2)

{
  func_0x00010bf7de20(*(undefined8 *)(param_2 + 0x78));
  if (param_1 != 0.0) {
    return;
  }
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c18df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * 1000.0,*(undefined8 *)(param_2 + 0x78),PTR_s_setDidTypeTimeMillis__1126411f0)
  ;
  return;
}



/* Entry: 105de95e4; end: 105de962f; -[SCPreviewCaptionLogger logCaptionCanEnterText] */

void FUN_105de95e4(double param_1,long param_2)

{
  func_0x00010bf7de20(*(undefined8 *)(param_2 + 0x78));
  if (param_1 != 0.0) {
    return;
  }
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c1b5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * 1000.0,*(undefined8 *)(param_2 + 0x78),
             PTR_s_setIsTypableTimeMillis__11264af08);
  return;
}



/* Entry: 105de9630; end: 105de9727; -[SCPreviewCaptionLogger logCaptionPickerOpenedWithOpenAction:] */

void FUN_105de9630(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x58) = param_1;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar1;
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = uVar2;
  _objc_release(uVar3);
  *(undefined8 *)(param_2 + 0x70) = param_4;
  puVar1 = PTR_PTR_1126c4c40;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined **)(param_2 + 0x78) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c44c0;
  _objc_opt_new(PTR_PTR_1126c44c0);
  func_0x00010c1db720();
  func_0x00010c179280(puVar1,param_3,*(undefined8 *)(param_2 + 0x50));
  func_0x00010c1db7c0(puVar1,param_3,2);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de9728; end: 105de98a7; -[SCPreviewCaptionLogger logCaptionPickerClosedWithExitSource:captionAdded:captionDeleted:] */

void FUN_105de9728(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126c4c48;
  func_0x00010beea8c0(PTR_PTR_1126c4c48,param_3,*(undefined8 *)(param_2 + 0x70));
  if (((int)param_6 == 0) || (((ulong)puVar1 & 1) == 0)) {
    func_0x00010be515a0(param_2);
  }
  if (((int)param_6 != 0) && ((int)puVar1 != 1)) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010bfadea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be51580(param_2,param_3,uVar2);
    _objc_release(uVar2);
  }
  lVar3 = param_2;
  func_0x00010be0bf40(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be515c0(param_2,param_3,lVar3,param_6);
  _objc_release(lVar3);
  _CACurrentMediaTime();
  dVar5 = *(double *)(param_2 + 0x58);
  puVar1 = PTR_PTR_1126c44c8;
  _objc_opt_new(PTR_PTR_1126c44c8);
  func_0x00010c1db720();
  func_0x00010c179280(puVar1,param_3,*(undefined8 *)(param_2 + 0x50));
  func_0x00010c1db7c0(puVar1,param_3,2);
  func_0x00010c222d40(param_1 - dVar5,puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010bf529e0(uVar2);
  func_0x00010c186560(puVar1,param_3,uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_2 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de98a8; end: 105de98ab; -[SCPreviewCaptionLogger logCaptionDeletedFilterId:] */

void FUN_105de98a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logCaptionDeletedWithFilterId__112571f00);
  return;
}



/* Entry: 105de98ac; end: 105de98ef; -[SCPreviewCaptionLogger logCaptionShowedFilterId:] */

void FUN_105de98ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de98f0; end: 105de997b; -[SCPreviewCaptionLogger logCaptionFilterIdWasSelected:itemPosition:hasBackground:captionStyle:] */

void FUN_105de98f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4c50;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c013180();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105de997c; end: 105de9987; -[SCPreviewCaptionLogger logCaptionCarouselPollPromptTap] */

void FUN_105de997c(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* Entry: 105de9988; end: 105de9993; -[SCPreviewCaptionLogger logCaptionCarouseQuestionPromptTap] */

void FUN_105de9988(long param_1)

{
  *(undefined1 *)(param_1 + 0x89) = 1;
  return;
}



/* Entry: 105de9994; end: 105de999f; -[SCPreviewCaptionLogger logCaptionCarouselExitPromptTap] */

void FUN_105de9994(long param_1)

{
  *(undefined1 *)(param_1 + 0x8a) = 1;
  return;
}



/* Entry: 105de99a0; end: 105de9ab7; -[SCPreviewCaptionLogger logCaptionStickerSuggestionItemTappedWithStickerId:stickerType:] */

void FUN_105de99a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bac00;
  _objc_opt_new(PTR_PTR_1126bac00);
  func_0x00010c1db720();
  func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1db7c0(puVar1,param_2,10);
  puVar2 = PTR_PTR_1126bac08;
  _objc_opt_new(PTR_PTR_1126bac08);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1b5f20(puVar2,param_2,param_3);
  }
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c20baa0(puVar2,param_2,param_4);
  }
  func_0x00010c1b5fe0(puVar1,param_2,puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de9ab8; end: 105de9c97; -[SCPreviewCaptionLogger _logCaptionPickerItemViewedWithExitAction:captionDeleted:] */

void FUN_105de9ab8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126c4c58;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1db720();
  func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1db7c0(puVar1,param_2,2);
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf529e0(uVar3);
    func_0x00010c186560(puVar1,param_2,uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf09f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186400(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  if ((param_4 & 1) == 0) {
    func_0x00010c226540(puVar1,param_2,1);
  }
  uVar5 = *(ulong *)(param_1 + 0x80);
  func_0x00010bf529e0();
  if (((param_4 & 1) == 0) && (uVar5 < 5)) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x80),param_2,*(undefined8 *)(param_1 + 0x78));
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfadea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db7a0(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfadea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  func_0x00010c198400(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2a718);
  func_0x00010c1981e0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de9c98; end: 105de9dfb; -[SCPreviewCaptionLogger _logCaptionPickerItemPicked] */

void FUN_105de9c98(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126bac00;
  _objc_opt_new(PTR_PTR_1126bac00);
  func_0x00010c1db720();
  func_0x00010c179280(puVar2,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1db7c0(puVar2,param_2,2);
  puVar3 = PTR_PTR_1126bac08;
  _objc_opt_new(PTR_PTR_1126bac08);
  lVar4 = *(long *)(param_1 + 0x68);
  iVar1 = 0;
  if (lVar4 != 0) {
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178860(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfadea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db7a0(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c084960(uVar5);
    func_0x00010c1b61a0(puVar3,param_2,uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfadea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
  }
  func_0x00010bfd4740();
  if (iVar1 != 0) {
    func_0x00010c186360(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcdfb8);
  }
  func_0x00010c1b5fe0(puVar2,param_2,puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c293fc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105de9dfc; end: 105de9e9f; -[SCPreviewCaptionLogger _logCaptionDeletedWithFilterId:] */

void FUN_105de9dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4c60;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c18b860();
  func_0x00010c178860(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de9ea0; end: 105de9ecb; -[SCPreviewCaptionLogger _exitActionFromExitSource:] */

undefined ** FUN_105de9ea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2a78;
  if (param_3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2a6d8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != -1) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 105de9ecc; end: 105de9edb; +[SCPreviewCaptionLogger _wasCaptionNew:] */

bool FUN_105de9ecc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (param_3 - 2U & 0xfffffffffffffffd) != 0;
}



/* Entry: 105de9edc; end: 105de9f8b; +[SCPreviewCaptionLogger actionFromString:] */

undefined8 FUN_105de9edc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f53b58);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f53b78);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f53b98);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f53bf8);
        uVar2 = 4;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105de9f8c; end: 105dea003; -[SCPreviewCaptionLogger .cxx_destruct] */

void FUN_105de9f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105dea004; end: 105dea05f; -[SCPreviewCaptionPerformanceLogger init] */

undefined1 * FUN_105dea004(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed218;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    *(double *)((long)puVar1 + 8) = param_1 * 1000.0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105dea060; end: 105dea067; -[SCPreviewCaptionPerformanceLogger startTimeMillis] */

undefined8 FUN_105dea060(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105dea068; end: 105dea06f; -[SCPreviewCaptionPerformanceLogger setStartTimeMillis:] */

void FUN_105dea068(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 105dea070; end: 105dea077; -[SCPreviewCaptionPerformanceLogger captionStylesExpected] */

undefined8 FUN_105dea070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105dea078; end: 105dea07f; -[SCPreviewCaptionPerformanceLogger setCaptionStylesExpected:] */

void FUN_105dea078(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105dea080; end: 105dea087; -[SCPreviewCaptionPerformanceLogger captionStylesFailed] */

undefined8 FUN_105dea080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105dea088; end: 105dea08f; -[SCPreviewCaptionPerformanceLogger setCaptionStylesFailed:] */

void FUN_105dea088(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105dea090; end: 105dea097; -[SCPreviewCaptionPerformanceLogger isTypableTimeMillis] */

undefined8 FUN_105dea090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105dea098; end: 105dea09f; -[SCPreviewCaptionPerformanceLogger setIsTypableTimeMillis:] */

void FUN_105dea098(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 105dea0a0; end: 105dea0a7; -[SCPreviewCaptionPerformanceLogger fullyLoadedTimeMillis] */

undefined8 FUN_105dea0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105dea0a8; end: 105dea0af; -[SCPreviewCaptionPerformanceLogger setFullyLoadedTimeMillis:] */

void FUN_105dea0a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 105dea0b0; end: 105dea0b7; -[SCPreviewCaptionPerformanceLogger didTypeTimeMillis] */

undefined8 FUN_105dea0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105dea0b8; end: 105dea0bf; -[SCPreviewCaptionPerformanceLogger setDidTypeTimeMillis:] */

void FUN_105dea0b8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 105dea0c0; end: 105dea16b; -[SCPreviewCarouselLogger initWithBlizzardServices:latencyLogger:] */

undefined1 *
FUN_105dea0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dea16c; end: 105dea19f; -[SCPreviewCarouselLogger onItemChangedAtIndex:totalCount:] */

void FUN_105dea16c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07a780();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onCarouselUpdate_112616588);
    return;
  }
  return;
}



/* Entry: 105dea1a0; end: 105dea363; -[SCPreviewCarouselLogger logPreviewCarouselUpdateWithSessionId:snapSessionId:snapSource:mediaType:locationEnabled:] */

void FUN_105dea1a0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126c4c68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar2);
  func_0x00010c21c4e0();
  func_0x00010c179280(puVar2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c205660(puVar2,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c2056c0(puVar2,param_3,param_6);
  uVar1 = param_7 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar4 = 1;
      if ((param_7 + 1U < 0x1c) && ((1L << (param_7 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (param_7 + 1U < 0x1b) {
          uVar4 = *(undefined8 *)(&UNK_10ddd0ab8 + (param_7 + 1U) * 8);
        }
        else {
          uVar4 = 0;
        }
      }
      goto LAB_105dea29c;
    }
    if (uVar1 == 8) {
      uVar4 = 5;
      goto LAB_105dea29c;
    }
    if (uVar1 == 10) {
      uVar4 = 0xe;
      goto LAB_105dea29c;
    }
  }
  uVar4 = 2;
LAB_105dea29c:
  func_0x00010c1c5440(puVar2,param_3,uVar4);
  func_0x00010c1bf9a0(puVar2,param_3,param_8);
  func_0x00010c110920(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c179ac0(puVar2,param_3,(long)param_1);
  func_0x00010c19d7e0(puVar2,param_3,(long)*(double *)(param_2 + 0x20));
  func_0x00010c1b8dc0(puVar2,param_3,(long)*(double *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105dea364; end: 105dea3af; -[SCPreviewCarouselLogger onCarouselUpdate] */

void FUN_105dea364(double param_1,long param_2)

{
  _CACurrentMediaTime();
  if (*(double *)(param_2 + 0x20) == 0.0) {
    *(double *)(param_2 + 0x20) = param_1 * 1000.0;
  }
  *(double *)(param_2 + 0x28) = param_1 * 1000.0;
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
  return;
}



/* Entry: 105dea3b0; end: 105dea3cf; -[SCPreviewCarouselLogger isPositionVisible:totalCount:] */

bool FUN_105dea3b0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  return param_4 < 8 || ((long)param_3 < 4 || param_4 - 5U < param_3);
}



/* Entry: 105dea3d0; end: 105dea3ff; -[SCPreviewCarouselLogger .cxx_destruct] */

void FUN_105dea3d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105dea400; end: 105dea4c7; -[SCPreviewGeoFilterLogger initWithGrapheneServices:] */

undefined1 * FUN_105dea400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined1 *)((long)puVar1 + 0x2c) = 1;
    func_0x00010c220040(puVar1);
    func_0x00010c2105c0(puVar1);
    func_0x00010c21b580(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dea4c8; end: 105dea547; -[SCPreviewGeoFilterLogger swipeOverViewWithFilterId:] */

void FUN_105dea4c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c286580();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dea548; end: 105dea54f; -[SCPreviewGeoFilterLogger setSnapIsCancelled:] */

void FUN_105dea548(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2c) = param_3;
  return;
}



/* Entry: 105dea550; end: 105dea55f; -[SCPreviewGeoFilterLogger didSwipe] */

void FUN_105dea550(long param_1)

{
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}



/* Entry: 105dea560; end: 105dea5cf; -[SCPreviewGeoFilterLogger upsertIfNecessary:withNewStage:] */

void FUN_105dea560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee61e0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dea5d0; end: 105dea5d7; -[SCPreviewGeoFilterLogger upsertIfNecessary:] */

void FUN_105dea5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee61f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__upsertIfNecessary_withNewStage__112597220,param_3,0);
  return;
}


