/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106127f24; end: 106127f2b; -[SCLensInfoCardLifecycleResolver infoCardsLifecycleObservable] */

undefined8 FUN_106127f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106127f2c; end: 106127fa3; -[SCLensInfoCardLifecycleResolver .cxx_destruct] */

void FUN_106127f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106127fa4; end: 106128033; -[SCLensCameraInfoCardPresenterManager _createInfoCardPresenter] */

void FUN_106127fa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8388;
  _objc_alloc(PTR_PTR_1126c8388);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = param_1;
  func_0x00010bdea3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042060(puVar1,param_2,lVar2,uVar4,lVar3,*(undefined8 *)(param_1 + 0x50));
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106128034; end: 106128267; -[SCLensCameraInfoCardPresenterManager _createActionHandler] */

void FUN_106128034(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c090080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010c094900();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf5b680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf54520(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return;
}



/* Entry: 106128268; end: 1061282e7;  */

void FUN_106128268(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_retain(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar1;
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061282e8; end: 10612836f; -[SCLensCameraInfoCardPresenterManager _creatorProfileDismissBlock] */

void FUN_1061282e8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106128370;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106128370; end: 1061283e7;  */

void FUN_106128370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ca0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061283e8; end: 10612846f; -[SCLensCameraInfoCardPresenterManager .cxx_destruct] */

void FUN_1061283e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106128470; end: 106128633; -[SCLensCaptureCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106128470(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273ff00;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106128634;
  puStack_50 = &UNK_110910028;
  _objc_retain(lVar1);
  lStack_48 = lVar1;
  func_0x00010bf11fe0(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8390;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273ff04);
  }
  _objc_retain(uVar5);
  _objc_alloc(puVar3);
  func_0x00010c023ac0();
  func_0x00010bf9d660(uVar5,param_2,puVar3);
  _objc_release(uVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c8398;
  _objc_alloc(PTR_PTR_1126c8398);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273fef8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar4 = lVar6;
  func_0x00010c11a2a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb280(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar6);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273ff08);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 106128634; end: 10612869b;  */

void FUN_106128634(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c093ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10612869c; end: 1061286ff; -[SCLensCaptureCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612869c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ff08,0);
  _objc_storeStrong(param_1 + _DAT_11273ff04,0);
  _objc_destroyWeak(param_1 + _DAT_11273ff00);
  _objc_destroyWeak(param_1 + _DAT_11273fefc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273fef8);
  return;
}



/* Entry: 106128700; end: 106129783; -[SCCaptureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106128700(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
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
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  undefined *puVar104;
  long lVar105;
  long lVar106;
  undefined8 uVar107;
  long lVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uVar109 = *(undefined8 *)(param_1 + _DAT_11273ff0c);
  puVar1 = PTR_PTR_1126c83a0;
  _objc_opt_new(PTR_PTR_1126c83a0);
  func_0x00010bf9d660(uVar109);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126c83a8;
  _objc_alloc();
  lVar112 = param_1 + _DAT_11273ff10;
  lVar3 = lVar112;
  _objc_loadWeakRetained();
  lVar113 = lVar3;
  func_0x00010bf31600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffca40();
  _objc_release(lVar113);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126c83b0;
  _objc_alloc();
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106129784;
  puStack_88 = &UNK_110910058;
  _objc_retain(puVar2);
  puStack_80 = puVar2;
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffca60();
  _objc_release(puVar1);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273ff14));
  lVar113 = (long)_DAT_11273ff18;
  lVar3 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010bf2bbc0();
  _objc_release(lVar3);
  if (lVar5 == 9) goto LAB_106129728;
  lVar3 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010c150aa0();
  func_0x0001005d3b6c();
  _objc_release(lVar3);
  if (lVar5 == 1) {
    lVar3 = param_1 + lVar113;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010c11ef00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1 + lVar113;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1e6da0();
    _objc_release(lVar3);
    if (lVar5 == 0) goto LAB_1061288e4;
  }
  else {
LAB_1061288e4:
    lVar3 = param_1 + _DAT_11273ff1c;
    _objc_loadWeakRetained();
    lVar6 = lVar3;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5340(PTR_PTR_1126b5a50);
    lVar8 = param_1 + _DAT_11273ff6c;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bf70fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c250580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  lVar3 = param_1 + _DAT_11273ff20;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010bf2a5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010c119b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126c83b8;
  _objc_alloc();
  lVar11 = lVar112;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar112;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar112;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11273ff7c;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11273ff24;
  _objc_loadWeakRetained();
  lVar17 = lVar8;
  func_0x00010c29f260();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar112;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0924a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar112;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c270080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273ffa0;
  _objc_loadWeakRetained();
  lVar23 = lVar6;
  func_0x00010bf29180();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11273ff88;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_11273ff90;
  _objc_loadWeakRetained();
  lVar24 = param_1 + _DAT_11273ff94;
  _objc_loadWeakRetained();
  lVar105 = (long)_DAT_11273ff1c;
  lVar25 = param_1 + lVar105;
  _objc_loadWeakRetained();
  lVar26 = param_1 + _DAT_11273ff28;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_11273ff6c;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf70fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11273ff70;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_11273ff70;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c12f720();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11273ffa4;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_11273ff80;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar110 = *(undefined8 *)(param_1 + _DAT_11273ffd8);
  uVar109 = *(undefined8 *)(param_1 + _DAT_11273ffdc);
  _objc_retain();
  _objc_retain(uVar110);
  lVar36 = param_1 + _DAT_11273ffe0;
  _objc_loadWeakRetained();
  lVar37 = lVar112;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = (long)_DAT_11273ff2c;
  lVar39 = param_1 + lVar111;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = param_1 + lVar111;
  _objc_loadWeakRetained();
  lVar41 = lVar111;
  func_0x00010bf29be0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_11273ffa8;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_11273ff30;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_11273ffac;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11273ff34;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_11273ff38;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11273ff3c;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_11273ff40;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010bf06400();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + _DAT_11273ff44;
  _objc_loadWeakRetained();
  lVar57 = lVar56;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_11273ff48;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_11273ff4c;
  _objc_loadWeakRetained();
  lVar61 = lVar60;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_11273ff50;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_11273ff54;
  _objc_loadWeakRetained();
  lVar65 = lVar64;
  func_0x00010c258780();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010c08d8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = lVar112;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c22d580();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_11273ffb4;
  _objc_loadWeakRetained();
  lVar70 = param_1 + _DAT_11273ffe8;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010c095e80();
  _objc_retainAutoreleasedReturnValue();
  lVar106 = (long)_DAT_11273ff5c;
  lVar72 = param_1 + lVar106;
  _objc_loadWeakRetained();
  lVar73 = param_1 + _DAT_11273ffb8;
  _objc_loadWeakRetained();
  lVar74 = lVar73;
  func_0x00010c08eca0();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar76 = param_1 + _DAT_11273ff9c;
  _objc_loadWeakRetained();
  lVar77 = param_1 + _DAT_11273ffb0;
  _objc_loadWeakRetained();
  lVar78 = lVar77;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = param_1 + _DAT_11273ffc0;
  _objc_loadWeakRetained();
  lVar80 = lVar79;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_1 + _DAT_11273ff74;
  _objc_loadWeakRetained();
  lVar82 = param_1 + _DAT_11273ff78;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + _DAT_11273ffbc;
  _objc_loadWeakRetained();
  lVar85 = lVar84;
  func_0x00010c2522e0();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = lVar85;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar87 = param_1 + _DAT_11273ffc4;
  _objc_loadWeakRetained();
  lVar88 = param_1 + _DAT_11273ffc8;
  _objc_loadWeakRetained();
  lVar89 = param_1 + _DAT_11273ffcc;
  _objc_loadWeakRetained();
  lVar90 = lVar89;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = param_1 + _DAT_11273ffd0;
  _objc_loadWeakRetained();
  lVar92 = lVar91;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = param_1 + _DAT_11273ffd0;
  _objc_loadWeakRetained();
  lVar94 = lVar93;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = param_1 + _DAT_11273ffe4;
  _objc_loadWeakRetained();
  lVar96 = lVar95;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = lVar112;
  _objc_loadWeakRetained();
  lVar98 = lVar97;
  func_0x00010bf315a0();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = param_1 + _DAT_11273ff98;
  _objc_loadWeakRetained();
  lVar100 = param_1 + _DAT_11273ff8c;
  _objc_loadWeakRetained();
  lVar101 = param_1 + _DAT_11273ffec;
  _objc_loadWeakRetained();
  lVar102 = lVar101;
  func_0x00010c0d0660();
  _objc_retainAutoreleasedReturnValue();
  lVar103 = param_1 + _DAT_11273ff84;
  _objc_loadWeakRetained();
  func_0x00010c039300();
  lVar108 = (long)_DAT_11273ff58;
  uVar107 = *(undefined8 *)(param_1 + lVar108);
  *(undefined **)(param_1 + lVar108) = puVar1;
  _objc_release(uVar107);
  _objc_release(uVar109);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar111);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(uVar110);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar23);
  _objc_release(lVar6);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar104 = PTR_PTR_1126c83c0;
  _objc_alloc();
  lVar3 = lVar112;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010bf315a0();
  _objc_retainAutoreleasedReturnValue();
  lVar106 = param_1 + lVar106;
  _objc_loadWeakRetained();
  lVar6 = lVar106;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar113 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar105 = param_1 + lVar105;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x00010be8efe0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  func_0x00010c00a480();
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_release(lVar105);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar6);
  _objc_release(lVar106);
  _objc_release(lVar8);
  _objc_release(lVar3);
  func_0x00010bf192c0(puVar104);
  lVar112 = (long)_DAT_11273ff60;
  _objc_retain(puVar104);
  uVar109 = *(undefined8 *)(param_1 + lVar112);
  *(undefined **)(param_1 + lVar112) = puVar104;
  _objc_release(uVar109);
  _objc_initWeak(auStack_a8,*(undefined8 *)(param_1 + lVar108));
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273ff7c;
  _objc_loadWeakRetained(param_1);
  lVar112 = param_1;
  func_0x00010bf2ace0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(lVar112);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar104);
  _objc_release(lVar10);
  _objc_release(lVar5);
LAB_106129728:
  _objc_release(puVar4);
  _objc_release(puStack_80);
  _objc_release(puVar2);
  return;
}



/* Entry: 106129784; end: 1061297ab;  */

void FUN_106129784(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061297ac; end: 1061297af;  */

void FUN_1061297ac(void)

{
  return;
}



/* Entry: 1061297b0; end: 1061297d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061297b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273ffa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061297d4; end: 106129847;  */

void FUN_1061297d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c83c8;
  _objc_alloc(PTR_PTR_1126c83c8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf2b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbb20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106129848; end: 106129957; -[SCCaptureEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106129848(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_40;
  undefined *puStack_38;
  
  lVar4 = (long)_DAT_11273ff60;
  if (*(long *)(param_1 + lVar4) == 0) {
    puStack_38 = PTR_PTR_1126efd20;
    plVar2 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11273ff64;
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    _objc_retain(uVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    _objc_retain(uVar3);
    func_0x00010bf95cc0(uVar5);
    plVar2 = *(long **)(param_1 + lVar6);
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 106129958; end: 10612995f;  */

void FUN_106129958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106129960; end: 106129b37; -[SCCaptureEntryPoint _replyConfigWithPositionOverrideIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106129960(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273ff10;
  puVar3 = param_1 + lVar4;
  _objc_loadWeakRetained();
  puVar1 = puVar3;
  func_0x00010c250520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    lVar4 = (long)_DAT_11273ff18;
    puVar3 = param_1 + lVar4;
    _objc_loadWeakRetained();
    puVar1 = puVar3;
    func_0x00010c150aa0();
    _objc_release(puVar3);
    if (puVar1 != (undefined *)0x1) {
      puVar3 = (undefined *)0x0;
      goto LAB_1061299d0;
    }
    puVar3 = param_1;
    FUN_1061297b0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf29180();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    puVar2 = param_1;
    func_0x00010c0d6ca0();
    _objc_release(param_1);
    puVar3 = PTR_PTR_1126b2cb8;
    if (puVar2 == (undefined *)0x2b) {
      puVar2 = puVar1;
      func_0x00010bf398e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23f500(puVar3,param_2,puVar2);
      _objc_release(puVar2);
      if (((ulong)puVar3 & 1) != 0) {
LAB_106129ad0:
        puVar2 = PTR_PTR_1126afec8;
        func_0x00010bf299c0(PTR_PTR_1126afec8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b5f00();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126afed0;
        func_0x00010c0db140(PTR_PTR_1126afed0);
        func_0x00010c2b7d00(puVar2,param_2,puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf21f60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        goto LAB_1061299c8;
      }
    }
    else {
      puVar3 = puVar1;
      func_0x00010bfa9cc0();
      if ((int)puVar3 != 0) goto LAB_106129ad0;
    }
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(puVar1);
    puVar3 = puVar1;
    func_0x00010c250520();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1061299c8:
  _objc_release(puVar1);
LAB_1061299d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106129b38; end: 106129e1f; -[SCCaptureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106129b38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ffec);
  _objc_destroyWeak(param_1 + _DAT_11273ffe8);
  _objc_destroyWeak(param_1 + _DAT_11273ffe4);
  _objc_storeStrong(param_1 + _DAT_11273ff14,0);
  _objc_destroyWeak(param_1 + _DAT_11273ffe0);
  _objc_storeStrong(param_1 + _DAT_11273ffdc,0);
  _objc_storeStrong(param_1 + _DAT_11273ffd8,0);
  _objc_storeStrong(param_1 + _DAT_11273ff0c,0);
  _objc_destroyWeak(param_1 + _DAT_11273ffd4);
  _objc_destroyWeak(param_1 + _DAT_11273ffd0);
  _objc_destroyWeak(param_1 + _DAT_11273ffcc);
  _objc_destroyWeak(param_1 + _DAT_11273ffc8);
  _objc_destroyWeak(param_1 + _DAT_11273ffc4);
  _objc_destroyWeak(param_1 + _DAT_11273ffc0);
  _objc_destroyWeak(param_1 + _DAT_11273ffbc);
  _objc_destroyWeak(param_1 + _DAT_11273ff28);
  _objc_destroyWeak(param_1 + _DAT_11273ffb8);
  _objc_destroyWeak(param_1 + _DAT_11273ffb4);
  _objc_destroyWeak(param_1 + _DAT_11273ff20);
  _objc_destroyWeak(param_1 + _DAT_11273ff24);
  _objc_destroyWeak(param_1 + _DAT_11273ff50);
  _objc_destroyWeak(param_1 + _DAT_11273ff54);
  _objc_destroyWeak(param_1 + _DAT_11273ff38);
  _objc_destroyWeak(param_1 + _DAT_11273ffb0);
  _objc_destroyWeak(param_1 + _DAT_11273ff4c);
  _objc_destroyWeak(param_1 + _DAT_11273ff48);
  _objc_destroyWeak(param_1 + _DAT_11273ff3c);
  _objc_destroyWeak(param_1 + _DAT_11273ff44);
  _objc_destroyWeak(param_1 + _DAT_11273ff34);
  _objc_destroyWeak(param_1 + _DAT_11273ffac);
  _objc_destroyWeak(param_1 + _DAT_11273ff30);
  _objc_destroyWeak(param_1 + _DAT_11273ffa8);
  _objc_destroyWeak(param_1 + _DAT_11273ff2c);
  _objc_destroyWeak(param_1 + _DAT_11273ff40);
  _objc_destroyWeak(param_1 + _DAT_11273ffa4);
  _objc_destroyWeak(param_1 + _DAT_11273ffa0);
  _objc_destroyWeak(param_1 + _DAT_11273ff9c);
  _objc_destroyWeak(param_1 + _DAT_11273ff98);
  _objc_destroyWeak(param_1 + _DAT_11273ff94);
  _objc_destroyWeak(param_1 + _DAT_11273ff90);
  _objc_destroyWeak(param_1 + _DAT_11273ff8c);
  _objc_destroyWeak(param_1 + _DAT_11273ff88);
  _objc_destroyWeak(param_1 + _DAT_11273ff84);
  _objc_destroyWeak(param_1 + _DAT_11273ff80);
  _objc_destroyWeak(param_1 + _DAT_11273ff7c);
  _objc_destroyWeak(param_1 + _DAT_11273ff78);
  _objc_destroyWeak(param_1 + _DAT_11273ff74);
  _objc_destroyWeak(param_1 + _DAT_11273ff70);
  _objc_destroyWeak(param_1 + _DAT_11273ff1c);
  _objc_destroyWeak(param_1 + _DAT_11273ff6c);
  _objc_destroyWeak(param_1 + _DAT_11273ff18);
  _objc_destroyWeak(param_1 + _DAT_11273ff10);
  _objc_destroyWeak(param_1 + _DAT_11273ff68);
  _objc_destroyWeak(param_1 + _DAT_11273ff5c);
  _objc_storeStrong(param_1 + _DAT_11273ff58,0);
  _objc_storeStrong(param_1 + _DAT_11273ff64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ff60,0);
  return;
}



/* Entry: 106129e20; end: 106129ea7; -[SCCaptureWorkflowResultProvidingDelegate initWithCaptureWorkflowResultDelegate:] */

undefined1 * FUN_106129e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efd28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106129ea8; end: 106129f17; -[SCCaptureWorkflowResultProvidingDelegate captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_106129ea8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c83d0;
  func_0x00010bf753e0(PTR_PTR_1126c83d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf315c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106129f18; end: 106129fbf; -[SCCaptureWorkflowResultProvidingDelegate captureWorkflowWillDismissWithDidSendSnap:] */

void FUN_106129f18(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c83d0;
  func_0x00010c2a5f60(PTR_PTR_1126c83d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf31660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106129fc0; end: 10612a05f; -[SCCaptureWorkflowResultProvidingDelegate captureWorkflowDidSaveSnapToMemories] */

void FUN_106129fc0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c83d0;
  func_0x00010bf7a360(PTR_PTR_1126c83d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf315e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10612a060; end: 10612a067; -[SCCaptureWorkflowResultProvidingDelegate captureWorkflowResultObservable] */

undefined8 FUN_10612a060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10612a068; end: 10612a093; -[SCCaptureWorkflowResultProvidingDelegate .cxx_destruct] */

void FUN_10612a068(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10612a094; end: 10612a107; -[SCCaptureWorkflowResultServices initWithCaptureWorkflowResultProvider:] */

undefined1 * FUN_10612a094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efd30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10612a108; end: 10612a10f; -[SCCaptureWorkflowResultServices captureWorkflowResultProvider] */

undefined8 FUN_10612a108(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10612a110; end: 10612a11b; -[SCCaptureWorkflowResultServices .cxx_destruct] */

void FUN_10612a110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10612a11c; end: 10612a177; +[SCCaptureWorkflowResult didDismissWithDidSendSnap:] */

void FUN_10612a11c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c83d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10612a178; end: 10612a1c3; +[SCCaptureWorkflowResult didSaveSnapToMemories] */

void FUN_10612a178(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c83d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10612a1c4; end: 10612a21b; +[SCCaptureWorkflowResult willDismissWithDidSendSnap:] */

void FUN_10612a1c4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c83d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10612a21c; end: 10612a23f; -[SCCaptureWorkflowResult copyWithZone:] */

undefined8 FUN_10612a21c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10612a240; end: 10612a2a3; -[SCCaptureWorkflowResult hash] */

void FUN_10612a240(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x11);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126efd38;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10612a2a4; end: 10612a2e7; -[SCCaptureWorkflowResult internalInit] */

void FUN_10612a2a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126efd38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10612a2e8; end: 10612a38f; -[SCCaptureWorkflowResult isEqual:] */

bool FUN_10612a2e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10612a390; end: 10612a43f; -[SCCaptureWorkflowResult matchWillDismiss:didDismiss:didSaveSnapToMemories:] */

void FUN_10612a390(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_10612a41c;
      uVar1 = *(undefined1 *)(param_1 + 0x11);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10612a41c;
      uVar1 = *(undefined1 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_10612a41c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10612a440; end: 10612a6d7; -[SCLensAutoCopyOnCameraWorkflowEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612a440(long param_1,undefined8 param_2)

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
  undefined8 uVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126c83d8;
  _objc_alloc();
  lVar18 = (long)_DAT_112740008;
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274000c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfedac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112740010;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112740014;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112740018;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274001c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112740020;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfa2a40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112740024;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0227e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,1,lVar15,lVar17);
  lVar20 = (long)_DAT_112740028;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar19);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20),param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  param_1 = param_1 + lVar18;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17c80(uVar19,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10612a6d8; end: 10612a767; -[SCLensAutoCopyOnCameraWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612a6d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112740024);
  _objc_destroyWeak(param_1 + _DAT_112740020);
  _objc_destroyWeak(param_1 + _DAT_11274001c);
  _objc_destroyWeak(param_1 + _DAT_112740018);
  _objc_destroyWeak(param_1 + _DAT_112740010);
  _objc_destroyWeak(param_1 + _DAT_112740014);
  _objc_destroyWeak(param_1 + _DAT_11274000c);
  _objc_destroyWeak(param_1 + _DAT_112740008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740028,0);
  return;
}



/* Entry: 10612a768; end: 10612a933; -[SCLensAutoCopyWorkflow initWithLens:infoCardDataProvider:notificationPool:offPlatformLinkGenerationService:blizzardLogger:inviteService:autoCopySource:offPlatformShareFeatureProvider:circumstanceEngine:] */

undefined1 *
FUN_10612a768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126efd40;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10612a934; end: 10612aacf; -[SCLensAutoCopyWorkflow beginAutoCopyLensLinkWorkFlow] */

void FUN_10612a934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedb20();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10612aad0;
  puStack_78 = &UNK_1109100d8;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10612aad0; end: 10612ab2b;  */

long FUN_10612aad0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee8600();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10612ab2c; end: 10612ab73;  */

void FUN_10612ab2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be260e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10612ab74; end: 10612ab77; -[SCLensAutoCopyWorkflow beginAutoCopyLensLinkWorkFlowWithDeeplink:] */

void FUN_10612ab74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be26110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAutoCopyLensWithDeepLink__1125671e0);
  return;
}



/* Entry: 10612ab78; end: 10612abe7; -[SCLensAutoCopyWorkflow _verifyLensIdWithInfoCardData:] */

undefined8 FUN_10612ab78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10612abe8; end: 10612ac47; -[SCLensAutoCopyWorkflow _handleAutoCopyLensLink:] */

void FUN_10612abe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c094fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be26100(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612ac48; end: 10612adff; -[SCLensAutoCopyWorkflow _handleAutoCopyLensWithDeepLink:] */

void FUN_10612ac48(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77080();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x000108faa8d8();
    if (iVar1 != 0) {
      func_0x00010be26120(param_1);
      goto LAB_10612adb8;
    }
    lVar2 = param_1;
    func_0x00010be1b4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9ae0(param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10612ae00;
    puStack_68 = &UNK_110847310;
    lStack_60 = param_1;
    _objc_retain(lVar2);
    ppuVar3 = &puStack_80;
    lStack_58 = lVar2;
    _objc_retainBlock();
    _objc_initWeak(auStack_88,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf56aa0(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(ppuVar3);
    _objc_release(lStack_58);
    param_1 = lVar2;
  }
  _objc_release(param_1);
LAB_10612adb8:
  _objc_release(param_3);
  return;
}



/* Entry: 10612ae00; end: 10612ae17;  */

void FUN_10612ae00(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__copyLink_notify_logEvent_shortL_112558058,
             *(undefined8 *)(param_1 + 0x28),0,1,param_2);
  return;
}



/* Entry: 10612ae18; end: 10612ae9b;  */

void FUN_10612ae18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    _objc_release(param_3);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77080();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10612ae9c; end: 10612b163; -[SCLensAutoCopyWorkflow _handleAutoCopyLensWithDeepLinkViaOPSService:] */

void FUN_10612ae9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = param_1;
  func_0x00010be1b4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24a8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c83e0;
  func_0x00010bef2c40(PTR_PTR_1126c83e0,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2813a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024300(puVar2,param_2,uVar3,puVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b24b0;
  _objc_alloc();
  func_0x00010c027880();
  puVar4 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10612b164;
  puStack_78 = &UNK_110863958;
  lStack_70 = lVar1;
  puStack_68 = puVar7;
  _objc_retain();
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  puVar9 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  puVar10 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  lVar11 = param_1;
  func_0x00010beb1f40(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
  puVar12 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045aa0(puVar10,param_2,lVar11,0,puVar8,param_1,puVar9,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf57580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x50),param_2,0x19);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puStack_68);
  _objc_release(lStack_70);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 10612b164; end: 10612b217;  */

void FUN_10612b164(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar4,puVar2,0,6,0,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfe9ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10612b218; end: 10612b22f;  */

void FUN_10612b218(void)

{
  return;
}



/* Entry: 10612b230; end: 10612b237; -[SCLensAutoCopyWorkflow handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_10612b230(void)

{
  return 0;
}



/* Entry: 10612b238; end: 10612b267; -[SCLensAutoCopyWorkflow shareSheetDismissedWithShareDestination:] */

void FUN_10612b238(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10612b268; end: 10612b35b; -[SCLensAutoCopyWorkflow _copyLink:notify:logEvent:shortLinkURL:] */

void FUN_10612b268(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c20e7c0(puVar1);
  if (param_4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10612b35c;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
  }
  if (param_5 != 0) {
    func_0x00010be506e0(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10612b35c; end: 10612b363;  */

void FUN_10612b35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showDropdownNotificationForLink_11258bcd0);
  return;
}



/* Entry: 10612b364; end: 10612b3eb; -[SCLensAutoCopyWorkflow _generateLinkToShare:] */

void FUN_10612b364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfbf7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10612b3ec; end: 10612b473; -[SCLensAutoCopyWorkflow _showDropdownNotificationForLinkCopied] */

void FUN_10612b3ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  FUN_10612b9bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612b474; end: 10612b5ef; -[SCLensAutoCopyWorkflow _logAutoCopyEvent:shortLinkURL:] */

void FUN_10612b474(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b24a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c83e0;
  func_0x00010bef2c40(PTR_PTR_1126c83e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2813a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024300();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010beb1f40(param_2);
  func_0x000108f9516c(param_1,0,0x19,0,0,0,uVar5,param_2,param_4,0,6,0,0x18,0,puVar1,0);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10612b5f0; end: 10612b603; -[SCLensAutoCopyWorkflow _shareSourceForAutoCopySource:] */

undefined8 FUN_10612b5f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (param_3 != 0) {
    uVar1 = 0x11;
  }
  return uVar1;
}



/* Entry: 10612b604; end: 10612b61b; -[SCLensAutoCopyWorkflow delegate] */

void FUN_10612b604(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10612b61c; end: 10612b627; -[SCLensAutoCopyWorkflow setDelegate:] */

void FUN_10612b61c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 10612b628; end: 10612b6bf; -[SCLensAutoCopyWorkflow .cxx_destruct] */

void FUN_10612b628(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 10612b6c0; end: 10612b91f; -[SCLensInfoCardsAutoCopyOnCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612b6c0(long param_1)

{
  long lVar1;
  long lVar2;
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
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  lVar18 = (long)_DAT_112740060;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c247520();
  _objc_release(lVar1);
  if (((uint)lVar2 >> 7 & 1) == 0) {
    puVar3 = PTR_PTR_1126c83d8;
    _objc_alloc();
    lVar18 = param_1 + lVar18;
    _objc_loadWeakRetained();
    lVar4 = lVar18;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_112740064;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010bfedac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112740068;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11274006c;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0e1840();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112740070;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112740074;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c06a980();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_112740078;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bfa2a40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_11274007c;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0227e0();
    lVar19 = (long)_DAT_112740080;
    uVar17 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar3;
    _objc_release(uVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bf17c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar19),PTR_s_beginAutoCopyLensLinkWorkFlow_1125a38c0);
    return;
  }
  return;
}



/* Entry: 10612b920; end: 10612b9bb; -[SCLensInfoCardsAutoCopyOnCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612b920(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274007c);
  _objc_destroyWeak(param_1 + _DAT_112740078);
  _objc_destroyWeak(param_1 + _DAT_112740074);
  _objc_destroyWeak(param_1 + _DAT_112740070);
  _objc_destroyWeak(param_1 + _DAT_112740068);
  _objc_destroyWeak(param_1 + _DAT_11274006c);
  _objc_destroyWeak(param_1 + _DAT_112740064);
  _objc_destroyWeak(param_1 + _DAT_112740084);
  _objc_destroyWeak(param_1 + _DAT_112740060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740080,0);
  return;
}



/* Entry: 10612b9bc; end: 10612b9d3;  */

void FUN_10612b9bc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e42698;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e42698,
                      &PTR____CFConstantStringClassReference_110e426b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10612b9d4; end: 10612b9df; -[SCFeatureSettingsService hasDismissedCameraRollQuotedReplyBadge] */

void FUN_10612b9d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e426d8);
  return;
}



/* Entry: 10612b9e0; end: 10612b9eb; -[SCFeatureSettingsService dismissedCameraRollQuotedReplyBadgeServerParam] */

undefined ** FUN_10612b9e0(void)

{
  return &PTR____CFConstantStringClassReference_110e426d8;
}



/* Entry: 10612b9ec; end: 10612b9fb; -[SCFeatureSettingsService setDismissedCameraRollQuotedReplyBadge:] */

void FUN_10612b9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e426d8,param_3);
  return;
}



/* Entry: 10612b9fc; end: 10612ba03; -[SCFeatureSettingsService CAMERA_ROLL_QUOTED_BADGE_client_value:] */

undefined * FUN_10612b9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10612ba04; end: 10612ba0b; -[SCFeatureSettingsService CAMERA_ROLL_QUOTED_BADGE_server_value:] */

void FUN_10612ba04(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10612ba0c; end: 10612ba1b; -[SCFeatureSettingsService dismissedCameraRollQuotedReplyBadge] */

void FUN_10612ba0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e426d8,0);
  return;
}



/* Entry: 10612ba1c; end: 10612be2b; -[SCFeatureMemoriesPickerLauncher initWithMemoriesSideButtonFeatureRef:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:cameraUIScopeViewContainer:circumstanceEngine:previewScopeExposer:pageLauncher:replyConfiguration:snapReply:userSession:previewAssetVideoProvider:replyQuotingCameraScope:chatCameraScope:userTrackedLogger:pageType:pageTypeSpecific:featureSettingsService:snapDocEditorServices:shouldShowNativePhotoLibrary:previewFilterDataProviderFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10612ba1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126efd48;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112740088;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274008c,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740090,param_5);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740094,param_6);
    lVar4 = (long)_DAT_112740098;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274009c,param_8);
    lVar4 = (long)_DAT_1127400a0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400a4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127400a8,param_11);
    lVar4 = (long)_DAT_1127400ac;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400b0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400b4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127400b8,param_15);
    puVar3 = PTR_PTR_1126c83e8;
    _objc_alloc();
    func_0x00010c05f0c0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127400bc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127400bc) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400c0;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400c4;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127400c8,param_19);
    lVar4 = (long)_DAT_1127400cc;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127400d0) = param_21;
    lVar4 = (long)_DAT_1127400d4;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10612be2c; end: 10612bfab; -[SCFeatureMemoriesPickerLauncher activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612be2c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112740088;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c9880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071800();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar2 = param_1 + _DAT_1127400c8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf84fc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bfa1820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c9880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c272620();
      _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 10612bfac; end: 10612c26f; -[SCFeatureMemoriesPickerLauncher _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612bfac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  func_0x00010c0aa200(*(undefined8 *)(param_1 + _DAT_1127400bc),param_2,0xc6,
                      *(undefined8 *)(param_1 + _DAT_1127400c0),
                      *(undefined8 *)(param_1 + _DAT_1127400c4));
  lVar7 = (long)_DAT_11274008c;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1 + _DAT_112740094;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cfca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10612c270;
    puStack_88 = &UNK_110910178;
    lStack_80 = param_1;
    _objc_retain(lVar3);
    puStack_d0 = puVar5;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10612c2cc;
    puStack_b8 = &UNK_1109101a8;
    lStack_b0 = param_1;
    lStack_a8 = lVar3;
    lStack_78 = lVar3;
    _objc_retain(lVar3);
    func_0x00010c0311a0(puVar4,param_2,&puStack_a0,&puStack_d0);
    puVar5 = PTR_PTR_1126aff70;
    _objc_alloc(PTR_PTR_1126aff70);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053560(puVar5,param_2,&PTR____CFConstantStringClassReference_110e426f8,0,0,0,1,1,0,
                        0x101);
    _objc_release(puVar6);
    lVar1 = param_1 + _DAT_112740090;
    _objc_loadWeakRetained(lVar1);
    puVar6 = PTR_PTR_1126aff78;
    func_0x00010bf68ba0(PTR_PTR_1126aff78,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf24140(lVar1,param_2,puVar4,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar1);
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lStack_a8);
    _objc_release(lStack_78);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 10612c270; end: 10612c2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612c270(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1c8b80(param_2);
  _objc_storeWeak(*(long *)(param_1 + 0x20) + (long)_DAT_1127400d8,param_2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10612c2cc; end: 10612c323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612c2cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_1127400d8;
  _objc_retain(param_2);
  _objc_storeWeak(lVar1 + lVar2,0);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10612c324; end: 10612c48f; -[SCFeatureMemoriesPickerLauncher memoriesPickerV2DidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612c324(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_1127400c8;
  uVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf84fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar4 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f8e0();
    _objc_release(lVar4);
    _objc_release(lVar8);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740088);
    func_0x00010bfa1820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272620();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  lVar7 = (long)_DAT_11274008c;
  lVar8 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar4 = lVar8;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar4 != 0) {
    func_0x00010c0aa200(*(undefined8 *)(param_1 + _DAT_1127400bc),param_2,200,
                        *(undefined8 *)(param_1 + _DAT_1127400c0),
                        *(undefined8 *)(param_1 + _DAT_1127400c4));
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10612c490; end: 10612c573; -[SCFeatureMemoriesPickerLauncher memoriesPickerV2DidSelectItemsWithMediaSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612c490(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0aa200(*(undefined8 *)(param_1 + _DAT_1127400bc),param_2,199,
                        *(undefined8 *)(param_1 + _DAT_1127400c0),
                        *(undefined8 *)(param_1 + _DAT_1127400c4));
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10612c574;
    puStack_40 = &UNK_1109101d8;
    lVar2 = lVar1;
    lStack_38 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1,param_2,&puStack_58,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10612c574; end: 10612c77b;  */

void FUN_10612c574(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10612c77c;
  uStack_60 = 0x10612c78c;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10612c77c;
  uStack_90 = 0x10612c78c;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_10612c77c;
  uStack_c0 = 0x10612c78c;
  uStack_b8 = 0;
  uVar1 = param_2;
  func_0x00010bfea600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar1);
  if (param_3 == 0) {
    if (puStack_78[5] != 0) {
      func_0x00010be7d7c0(*(undefined8 *)(param_1 + 0x20));
      goto LAB_10612c6e4;
    }
  }
  if (param_3 == 0) {
    if (puStack_a8[5] != 0) {
      func_0x00010be7d860(*(undefined8 *)(param_1 + 0x20));
      goto LAB_10612c6e4;
    }
  }
  if (param_3 == 0) {
    if (puStack_d8[5] != 0) {
      func_0x00010be7dac0(*(undefined8 *)(param_1 + 0x20));
    }
  }
LAB_10612c6e4:
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10612c77c; end: 10612c793;  */

void FUN_10612c77c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10612c794; end: 10612c83b;  */

void FUN_10612c794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612c83c; end: 10612c9c7; -[SCFeatureMemoriesPickerLauncher _presentPreviewForImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612c83c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_5);
  func_0x00010bea7700(param_3,param_4,0);
  lVar5 = (long)_DAT_1127400dc;
  func_0x00010c1c5440(*(undefined8 *)(param_3 + lVar5),param_4,0);
  func_0x00010c23d0a0(param_5);
  dVar6 = param_1;
  func_0x00010c14e120(param_5);
  param_1 = param_1 * dVar6;
  param_2 = param_2 * dVar6;
  func_0x00010c1c5240(*(undefined8 *)(param_3 + lVar5));
  func_0x00010c0c6700(*(undefined8 *)(param_3 + lVar5));
  dVar6 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar6 = INFINITY;
    }
    else {
      dVar6 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar6,*(undefined8 *)(param_3 + lVar5));
  func_0x00010c1a1640(*(undefined8 *)(param_3 + lVar5),param_4,param_5);
  func_0x00010c204fa0(*(undefined8 *)(param_3 + lVar5),param_4,100);
  func_0x00010bf42760(*(undefined8 *)(param_3 + lVar5));
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127400cc);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar2 = PTR_PTR_1126affc0;
  func_0x00010c27eee0(PTR_PTR_1126affc0,param_4,param_5,&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar1;
  func_0x00010bf8cb20(uVar1,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127400e0);
  *(undefined8 *)(param_3 + _DAT_1127400e0) = uVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010be47fc0(param_3);
  return;
}



/* Entry: 10612c9c8; end: 10612ca43; -[SCFeatureMemoriesPickerLauncher _presentPreviewWithImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612c9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bea7700(param_1);
  lVar1 = (long)_DAT_1127400dc;
  func_0x00010c1c5440(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1a1660(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  func_0x00010c204fa0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf42760(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010be47fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchPreviewScope_11256f990);
  return;
}



/* Entry: 10612ca44; end: 10612cc47; -[SCFeatureMemoriesPickerLauncher _presentPreviewForVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612ca44(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_5);
  func_0x000107f703c4(param_5);
  func_0x00010bea7700(param_3);
  lVar7 = (long)_DAT_1127400dc;
  func_0x00010c1c5440(*(undefined8 *)(param_3 + lVar7));
  func_0x00010c1c5240(*(undefined8 *)(param_3 + lVar7));
  func_0x00010c0c6700(*(undefined8 *)(param_3 + lVar7));
  dVar8 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar8 = INFINITY;
    }
    else {
      dVar8 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar8,*(undefined8 *)(param_3 + lVar7));
  func_0x00010c204fa0(*(undefined8 *)(param_3 + lVar7));
  uVar2 = *(undefined8 *)(param_3 + _DAT_1127400b0);
  func_0x00010c29aec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(*(undefined8 *)(param_3 + lVar7));
  _objc_release(uVar2);
  func_0x00010c16c080(*(undefined8 *)(param_3 + lVar7));
  func_0x00010c221ca0(*(undefined8 *)(param_3 + lVar7));
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_5);
  _objc_opt_class(puVar3);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  uVar4 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_3 + _DAT_1127400cc);
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126affc0;
    func_0x00010c29a0a0(PTR_PTR_1126affc0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf8cb20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + _DAT_1127400e0);
    *(undefined8 *)(param_3 + _DAT_1127400e0) = uVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
  }
  func_0x00010bf42760(*(undefined8 *)(param_3 + lVar7));
  func_0x00010be47fc0(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10612cc48; end: 10612cccf; -[SCFeatureMemoriesPickerLauncher _presentPreviewWithVideoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612cc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bea7700(param_1);
  lVar1 = (long)_DAT_1127400dc;
  func_0x00010c1c5440(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  func_0x00010c204fa0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c16c080(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf42760(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010be47fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchPreviewScope_11256f990);
  return;
}



/* Entry: 10612ccd0; end: 10612cf7b; -[SCFeatureMemoriesPickerLauncher _presentPreviewWithSnapDocEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612ccd0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_1127400e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110910208);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(puVar2);
  if (lVar3 == 0) goto LAB_10612cf4c;
  lVar9 = param_3;
  func_0x00010c0ff640(param_3,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar4 = lVar9;
    func_0x00010c0c3fe0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0c6240(param_3,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar6;
    func_0x00010c0c6c20();
    if ((int)lVar4 == 3) {
      lVar4 = lVar9;
      func_0x00010c0c3fe0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c0c6f80(param_3,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10612cfd0;
      puStack_70 = &UNK_11086f208;
      _objc_retain(lVar9);
      lVar8 = lVar7;
      lStack_68 = lVar9;
      func_0x00010c0b8600(lVar7,param_2,&puStack_88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7dae0(param_1,param_2,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lStack_68;
LAB_10612cf38:
      _objc_release(lVar4);
    }
    else if ((int)lVar4 == 2) {
      lVar4 = lVar9;
      func_0x00010c0c3fe0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c0c7240(param_3,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7d9e0(param_1,param_2,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar5);
      goto LAB_10612cf38;
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar9);
LAB_10612cf4c:
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10612cf7c; end: 10612cfbf;  */

bool FUN_10612cf7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 10612cfc0; end: 10612cfcf;  */

void FUN_10612cfc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sc_imageWithData__112630e30,param_2);
  return;
}



/* Entry: 10612cfd0; end: 10612d06f;  */

void FUN_10612cfd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126b5fb0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c4bc0();
  func_0x00010c0613a0((double)(uVar3 & 0xffffffff) / 1000.0,puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10612d070; end: 10612d1fb; -[SCFeatureMemoriesPickerLauncher _launchPreviewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d070(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_11274009c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    lVar1 = param_1 + _DAT_1127400d8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f60(puVar3);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c83f0;
    _objc_alloc(PTR_PTR_1126c83f0);
    func_0x00010c022240();
    _objc_initWeak(auStack_38,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127400a0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c08c080(uVar5);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 10612d1fc; end: 10612d2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d1fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126c83f8;
  if (param_1 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if (uVar1 != 0) {
      lVar4 = param_1 + _DAT_11274009c;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf9d620();
      _objc_release(lVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10612d2b4; end: 10612d2b7; -[SCFeatureMemoriesPickerLauncher didCancelFromPreview:] */

void FUN_10612d2b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be031b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewIfPresented_11255e608);
  return;
}



/* Entry: 10612d2b8; end: 10612d2bb; -[SCFeatureMemoriesPickerLauncher didSendSnapsAndPostToStory:storyTypes:] */

void FUN_10612d2b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissMemoriesReplyFlowAfterSe_11255e4e8);
  return;
}



/* Entry: 10612d2bc; end: 10612d2bf; -[SCFeatureMemoriesPickerLauncher didSendChatMessage] */

void FUN_10612d2bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissMemoriesReplyFlowAfterSe_11255e4e8);
  return;
}



/* Entry: 10612d2c0; end: 10612d2c3; -[SCFeatureMemoriesPickerLauncher didPostStoryWithStoryTypes:] */

void FUN_10612d2c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissMemoriesReplyFlowAfterSe_11255e4e8);
  return;
}



/* Entry: 10612d2c4; end: 10612d2ef; -[SCFeatureMemoriesPickerLauncher _dismissMemoriesReplyFlowAfterSend] */

void FUN_10612d2c4(undefined8 param_1)

{
  func_0x00010be031a0();
  func_0x00010be02d00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be03170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPresentingCameraScope_11255e5f8);
  return;
}



/* Entry: 10612d2f0; end: 10612d373; -[SCFeatureMemoriesPickerLauncher _dismissPreviewIfPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d2f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274009c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10612d374; end: 10612d3f7; -[SCFeatureMemoriesPickerLauncher _dismissMemoriesPickerIfPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d374(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274008c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10612d3f8; end: 10612d4bb; -[SCFeatureMemoriesPickerLauncher _dismissPresentingCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d3f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_1127400b4);
  if (lVar1 == 0) {
    lVar3 = (long)_DAT_1127400b8;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf2ac40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf834c0(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf2ac40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf834c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


