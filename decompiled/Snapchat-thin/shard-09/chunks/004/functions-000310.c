/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106da1894; end: 106da1917; -[SCGalleryPrivateGallerySetupFlow memoriesInformationWebViewControllerDidPressBack:] */

void FUN_106da1894(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) == param_3) {
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x68) != param_3) goto LAB_106da1908;
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  _objc_release(uVar1);
LAB_106da1908:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da1918; end: 106da1a2f; -[SCGalleryPrivateGallerySetupFlow _setPrivateGalleryPassphrase] */

void FUN_106da1918(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1e3540(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 106da1a30; end: 106da1ad7;  */

void FUN_106da1a30(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  if (param_2 == 0) {
    func_0x000108de5c34();
  }
  else {
    puVar2 = PTR_PTR_1126d2818;
    _objc_alloc();
    func_0x00010c02f980();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c11c520(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106da1ad8; end: 106da1b67; -[SCGalleryPrivateGallerySetupFlow _reset] */

void FUN_106da1ad8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106da1b68; end: 106da1d3b; -[SCGalleryPrivateGallerySetupFlow _startOffMainThread] */

void FUN_106da1b68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar8);
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106da1d3c;
  puStack_90 = &UNK_11084f340;
  puVar3 = PTR_PTR_1126ae6b8;
  uStack_88 = uVar1;
  uStack_80 = uVar2;
  func_0x00010bf54280(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0e0ea0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  puVar7 = puVar6;
  func_0x00010c25ff60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106da1d3c; end: 106da1dff;  */

void FUN_106da1d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4c0;
  _objc_retain(param_2);
  func_0x00010bfa96e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar2);
  func_0x00010bf436e0(param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106da1e00; end: 106da2097;  */

void FUN_106da1e00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c067ec0();
    if ((int)uVar1 < 1) {
      puVar5 = PTR_PTR_1126d2820;
      _objc_alloc();
      func_0x00010c02f9a0();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar5;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e860b8;
      func_0x00010c160fc0();
      _objc_release(uVar1);
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e860b8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020();
      _objc_release(uVar1);
      _objc_release(ppuVar6);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
      puVar5 = PTR_PTR_1126d27a0;
      _objc_alloc();
      func_0x00010c040300();
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar5;
      _objc_release(uVar1);
      func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c219b20(*(undefined8 *)(param_1 + 0x20));
      lVar7 = param_1 + 8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c10eda0();
      _objc_release(lVar7);
      func_0x000108df596c(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfdd160(uVar1);
      func_0x00010c25d8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfbd4e0(uVar1);
      func_0x00010c25d8c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110e86098,puVar5,0,
                          *(undefined8 *)(param_1 + 0xa8));
      lVar7 = param_1 + 8;
      _objc_loadWeakRetained(lVar7);
      func_0x000108df7438();
      _objc_release(lVar7);
      _objc_release(puVar5);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106da2098; end: 106da2133; -[SCGalleryPrivateGallerySetupFlow _hasMEOContent] */

bool FUN_106da2098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa96e0(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = puVar3;
  func_0x00010bf529e0(puVar3);
  _objc_release(puVar3);
  return puVar4 != (undefined *)0x0;
}



/* Entry: 106da2134; end: 106da214b; -[SCGalleryPrivateGallerySetupFlow delegate] */

void FUN_106da2134(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da214c; end: 106da2157; -[SCGalleryPrivateGallerySetupFlow setDelegate:] */

void FUN_106da214c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 106da2158; end: 106da2293; -[SCGalleryPrivateGallerySetupFlow .cxx_destruct] */

void FUN_106da2158(long param_1)

{
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106da2294; end: 106da2327; -[SCMemoriesPrivateGallerySetupFlowScope initWithFromViewController:delegate:] */

undefined1 *
FUN_106da2294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6db0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106da2328; end: 106da233f; -[SCMemoriesPrivateGallerySetupFlowScope fromViewController] */

void FUN_106da2328(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da2340; end: 106da2357; -[SCMemoriesPrivateGallerySetupFlowScope delegate] */

void FUN_106da2340(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da2358; end: 106da2363; -[SCMemoriesPrivateGallerySetupFlowScope setDelegate:] */

void FUN_106da2358(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106da2364; end: 106da237b; -[SCMemoriesPrivateGallerySetupFlowScope flow] */

void FUN_106da2364(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da237c; end: 106da2387; -[SCMemoriesPrivateGallerySetupFlowScope setFlow:] */

void FUN_106da237c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106da2388; end: 106da23b7; -[SCMemoriesPrivateGallerySetupFlowScope .cxx_destruct] */

void FUN_106da2388(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106da23b8; end: 106da272b; -[SCMemoriesPrivateGallerySetupFlowScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da23b8(long param_1)

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
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126d2828;
  _objc_alloc();
  lVar2 = param_1;
  FUN_106da272c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbb120();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11275e108;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar15;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11275e110;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar16;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11275e10c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000106da2750();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11275e118;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar18;
  func_0x00010c0c94c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275e11c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000106da2750();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275e120;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275e124;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar22;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0168c0();
  lVar23 = (long)_DAT_11275e0f8;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar21);
  _objc_release(lVar14);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  FUN_106da272c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar23));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  FUN_106da272c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19df20();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar23),PTR_s_start_112671080);
  return;
}



/* Entry: 106da272c; end: 106da2773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da272c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275e100);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da2774; end: 106da28f3; -[SCMemoriesPrivateGallerySetupFlowScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da2774(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275e0fc;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275e0f8);
  _objc_retain(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106da286c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  puVar3 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106da28f4; end: 106da28fb;  */

void FUN_106da28f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106da28fc; end: 106da29b3; -[SCMemoriesPrivateGallerySetupFlowScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da28fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275e124);
  _objc_destroyWeak(param_1 + _DAT_11275e120);
  _objc_destroyWeak(param_1 + _DAT_11275e11c);
  _objc_destroyWeak(param_1 + _DAT_11275e118);
  _objc_destroyWeak(param_1 + _DAT_11275e114);
  _objc_destroyWeak(param_1 + _DAT_11275e110);
  _objc_destroyWeak(param_1 + _DAT_11275e10c);
  _objc_destroyWeak(param_1 + _DAT_11275e108);
  _objc_destroyWeak(param_1 + _DAT_11275e104);
  _objc_destroyWeak(param_1 + _DAT_11275e100);
  _objc_storeStrong(param_1 + _DAT_11275e0fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e0f8,0);
  return;
}



/* Entry: 106da29b4; end: 106da2d6b; -[SCMemoriesPrivateLockedTabService initWithUserSession:reauthenticationService:deleteMutator:inlineSearchDataSource:soundEffects:userTrackedLogger:grapheneRegistry:featureSettingsService:currentPageTracker:keyService:dataObjectContext:memoriesPrivateMemoriesManager:galleryLogger:memoriesProfile:memoriesExperimentService:memoriesPrivateEntriesPurger:applicationLifecycleEvents:] */

undefined8 *
FUN_106da29b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126f6db8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
  }
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



/* Entry: 106da2d6c; end: 106da2d73; -[SCMemoriesPrivateLockedTabService userSession] */

undefined8 FUN_106da2d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106da2d74; end: 106da2d7b; -[SCMemoriesPrivateLockedTabService reauthenticationService] */

undefined8 FUN_106da2d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106da2d7c; end: 106da2d83; -[SCMemoriesPrivateLockedTabService deleteMutator] */

undefined8 FUN_106da2d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106da2d84; end: 106da2d8b; -[SCMemoriesPrivateLockedTabService inlineSearchDataSource] */

undefined8 FUN_106da2d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106da2d8c; end: 106da2d93; -[SCMemoriesPrivateLockedTabService soundEffects] */

undefined8 FUN_106da2d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106da2d94; end: 106da2d9b; -[SCMemoriesPrivateLockedTabService userTrackedLogger] */

undefined8 FUN_106da2d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106da2d9c; end: 106da2da3; -[SCMemoriesPrivateLockedTabService grapheneRegistry] */

undefined8 FUN_106da2d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106da2da4; end: 106da2dab; -[SCMemoriesPrivateLockedTabService featureSettingsService] */

undefined8 FUN_106da2da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106da2dac; end: 106da2db3; -[SCMemoriesPrivateLockedTabService currentPageTracker] */

undefined8 FUN_106da2dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106da2db4; end: 106da2dbb; -[SCMemoriesPrivateLockedTabService keyService] */

undefined8 FUN_106da2db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106da2dbc; end: 106da2dc3; -[SCMemoriesPrivateLockedTabService dataObjectContext] */

undefined8 FUN_106da2dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106da2dc4; end: 106da2dcb; -[SCMemoriesPrivateLockedTabService memoriesPrivateMemoriesManager] */

undefined8 FUN_106da2dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106da2dcc; end: 106da2dd3; -[SCMemoriesPrivateLockedTabService galleryLogger] */

undefined8 FUN_106da2dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106da2dd4; end: 106da2ddb; -[SCMemoriesPrivateLockedTabService memoriesProfile] */

undefined8 FUN_106da2dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106da2ddc; end: 106da2de3; -[SCMemoriesPrivateLockedTabService applicationLifecycleEvents] */

undefined8 FUN_106da2ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106da2de4; end: 106da2deb; -[SCMemoriesPrivateLockedTabService memoriesExperimentService] */

undefined8 FUN_106da2de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106da2dec; end: 106da2df3; -[SCMemoriesPrivateLockedTabService memoriesPrivateEntriesPurger] */

undefined8 FUN_106da2dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106da2df4; end: 106da2ed7; -[SCMemoriesPrivateLockedTabService .cxx_destruct] */

void FUN_106da2df4(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106da2ed8; end: 106da2fbb; -[SCMemoriesPrivateLockedTabServiceProvider provide] */

void FUN_106da2ed8(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d2830;
  _objc_alloc(PTR_PTR_1126d2830);
  func_0x00010c03a340();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106da2fbc; end: 106da2ffb;  */

void FUN_106da2fbc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106da2ffc; end: 106da3537; -[SCMemoriesPrivateLockedTabServiceProvider _memoriesPrivateLockedTabService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da2ffc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275e170;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar22;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275e178;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar22;
  func_0x00010c121fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275e17c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar22;
  func_0x00010bf6d080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  _objc_initWeak(auStack_70,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d2838;
  _objc_alloc();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275e194;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar22;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11275e184;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar23;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11275e188;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar24;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11275e19c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar25;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11275e198;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar26;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11275e18c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar27;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_106da35ac();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11275e1a0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar28;
  func_0x00010c0c94c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11275e1a4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar29;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  FUN_106da35ac();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11275e1a8;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar30;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11275e1ac;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar31;
  func_0x00010c1140c0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = 0;
  if (param_1 != 0) {
    lVar20 = param_1 + _DAT_11275e16c;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar20;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e3a0();
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar31);
  _objc_release(lVar18);
  _objc_release(lVar30);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar14);
  _objc_release(lVar28);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar27);
  _objc_release(lVar10);
  _objc_release(lVar26);
  _objc_release(lVar9);
  _objc_release(lVar25);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar7);
  _objc_release(lVar23);
  _objc_release(lVar6);
  _objc_release(lVar22);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106da3538; end: 106da35ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da3538(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11275e180;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010c0653c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106da35ac; end: 106da35cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da35ac(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275e190);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da35d0; end: 106da36bb; -[SCMemoriesPrivateLockedTabServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da35d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275e1ac);
  _objc_destroyWeak(param_1 + _DAT_11275e1a8);
  _objc_destroyWeak(param_1 + _DAT_11275e1a4);
  _objc_destroyWeak(param_1 + _DAT_11275e1a0);
  _objc_destroyWeak(param_1 + _DAT_11275e19c);
  _objc_destroyWeak(param_1 + _DAT_11275e198);
  _objc_destroyWeak(param_1 + _DAT_11275e194);
  _objc_destroyWeak(param_1 + _DAT_11275e190);
  _objc_destroyWeak(param_1 + _DAT_11275e18c);
  _objc_destroyWeak(param_1 + _DAT_11275e188);
  _objc_destroyWeak(param_1 + _DAT_11275e184);
  _objc_destroyWeak(param_1 + _DAT_11275e180);
  _objc_destroyWeak(param_1 + _DAT_11275e17c);
  _objc_destroyWeak(param_1 + _DAT_11275e178);
  _objc_destroyWeak(param_1 + _DAT_11275e174);
  _objc_destroyWeak(param_1 + _DAT_11275e170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275e16c);
  return;
}



/* Entry: 106da36bc; end: 106da372f; -[SCMemoriesPrivateLockedTabServices initWithPrivateLockedTabService:] */

undefined1 * FUN_106da36bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6dc0;
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



/* Entry: 106da3730; end: 106da3737; -[SCMemoriesPrivateLockedTabServices privateLockedTabService] */

undefined8 FUN_106da3730(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106da3738; end: 106da3743; -[SCMemoriesPrivateLockedTabServices .cxx_destruct] */

void FUN_106da3738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106da3744; end: 106da37ff; -[SCMemoriesEmptyStateActionHandler initWithDelegate:fromViewController:currentPageTracker:] */

undefined1 *
FUN_106da3744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106da3800; end: 106da38db; -[SCMemoriesEmptyStateActionHandler handleAction:actionModel:] */

void FUN_106da3800(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010beef1e0();
  if (lVar1 == 1) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c28f9a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeab80(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520(lVar2,param_2,param_1,1);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    if (lVar1 != 0) goto LAB_106da38c4;
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf8ee40();
  }
  _objc_release(lVar1);
LAB_106da38c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106da38dc; end: 106da3963; -[SCMemoriesEmptyStateActionHandler _webViewController:] */

void FUN_106da38dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c3a18;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c057da0();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106da3964; end: 106da39cb; -[SCMemoriesEmptyStateActionHandler memoriesInformationWebViewControllerDidPressBack:] */

void FUN_106da3964(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106da39cc; end: 106da3a0b; -[SCMemoriesEmptyStateActionHandler .cxx_destruct] */

void FUN_106da39cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106da3a0c; end: 106da3ad3; -[SCMemoriesEmptyStateDataProvider initWithViewType:hasActionDelegate:bitmojiFetcher:] */

undefined1 *
FUN_106da3a0c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6dd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    func_0x00010beb13c0(puVar1);
    if ((param_3 == 0) && (param_5 != 0)) {
      puVar3 = PTR_PTR_1126ae568;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar3;
      _objc_release(uVar2);
      func_0x00010beaaf20(puVar1);
      func_0x00010be0fe80(puVar1);
    }
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106da3ad4; end: 106da40ff; -[SCMemoriesEmptyStateDataProvider _setupViewModelWithViewType:] */

void FUN_106da3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  char cVar8;
  undefined **ppuVar9;
  
  ppuVar9 = (undefined **)PTR_PTR_1126d2840;
  switch(param_3) {
  case 0:
    puVar2 = PTR_PTR_1126d2840;
    _objc_alloc();
    ppuVar1 = *(undefined ***)(param_1 + 8);
    func_0x00010bf5e200(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7cb8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x000106da7cd0();
    _objc_retainAutoreleasedReturnValue();
    cVar8 = *(char *)(param_1 + 0x18);
    if (cVar8 == '\x01') {
      ppuVar9 = ppuVar5;
      func_0x000106da7ce8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar9;
    }
    else {
      ppuVar9 = (undefined **)0x0;
      ppuVar3 = ppuVar5;
    }
    func_0x000106da7ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e860f8;
    func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e860f8,
                        &PTR____CFConstantStringClassReference_110e83bd8,
                        &PTR____CFConstantStringClassReference_110dba938);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062180();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    if (cVar8 != '\0') {
      _objc_release(ppuVar9);
    }
    break;
  case 1:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7d00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7d18();
    _objc_retainAutoreleasedReturnValue();
    cVar8 = *(char *)(param_1 + 0x18);
    if (cVar8 == '\x01') {
      ppuVar5 = ppuVar7;
      func_0x000106da7d30();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = (undefined **)0x0;
    }
    goto code_r0x000106da4010;
  case 2:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7e38();
    _objc_retainAutoreleasedReturnValue();
    cVar8 = *(char *)(param_1 + 0x18);
    if (cVar8 == '\x01') {
      ppuVar5 = ppuVar7;
      func_0x000106da7e50();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = (undefined **)0x0;
    }
    goto code_r0x000106da4010;
  case 3:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7e38();
    _objc_retainAutoreleasedReturnValue();
    cVar8 = *(char *)(param_1 + 0x18);
    if (cVar8 == '\x01') {
      ppuVar5 = ppuVar7;
      func_0x000106da7d30();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = (undefined **)0x0;
    }
code_r0x000106da4010:
    func_0x00010c062180();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined ***)(param_1 + 0x20) = ppuVar9;
    _objc_release(uVar6);
joined_r0x000106da40c8:
    if (cVar8 == '\0') goto code_r0x000106da40d4;
    break;
  case 4:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7da8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7dc0();
    _objc_retainAutoreleasedReturnValue();
    cVar8 = *(char *)(param_1 + 0x18);
    if (cVar8 == '\x01') {
      ppuVar5 = ppuVar7;
      func_0x000106da7dd8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
    }
    else {
      ppuVar5 = (undefined **)0x0;
      ppuVar3 = ppuVar7;
    }
    func_0x000106da7ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e85f38;
    func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                        &PTR____CFConstantStringClassReference_110e83bd8,
                        &PTR____CFConstantStringClassReference_110e86118);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106da4090;
  case 5:
    ppuVar3 = (undefined **)PTR_PTR_1126d2840;
    _objc_alloc();
    ppuVar1 = ppuVar3;
    func_0x000106da7df0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7e08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x000106da7ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e85f38;
    func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                        &PTR____CFConstantStringClassReference_110e83bd8,
                        &PTR____CFConstantStringClassReference_110e86118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062180();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined ***)(param_1 + 0x20) = ppuVar3;
    _objc_release(uVar6);
    _objc_release(ppuVar9);
    break;
  case 6:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7d48();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7d60();
    _objc_retainAutoreleasedReturnValue();
    cVar8 = *(char *)(param_1 + 0x18);
    if (cVar8 == '\x01') {
      ppuVar5 = ppuVar7;
      func_0x000106da7d78();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
    }
    else {
      ppuVar5 = (undefined **)0x0;
      ppuVar3 = ppuVar7;
    }
    func_0x000106da7ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e86138;
    func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e86138,
                        &PTR____CFConstantStringClassReference_110e83bd8,
                        &PTR____CFConstantStringClassReference_110e86158);
    _objc_retainAutoreleasedReturnValue();
code_r0x000106da4090:
    func_0x00010c062180();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined ***)(param_1 + 0x20) = ppuVar9;
    _objc_release(uVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    goto joined_r0x000106da40c8;
  case 7:
    puVar2 = PTR_PTR_1126d2840;
    _objc_alloc();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e66818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66818,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062180();
    ppuVar7 = *(undefined ***)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    goto code_r0x000106da40d4;
  case 8:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7df0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7d90();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106da3ec0;
  default:
    return;
  case 10:
    _objc_alloc();
    ppuVar1 = ppuVar9;
    func_0x000106da7e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x000106da7e98();
    _objc_retainAutoreleasedReturnValue();
code_r0x000106da3ec0:
    func_0x00010c062180();
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
    *(undefined ***)(param_1 + 0x20) = ppuVar9;
  }
  _objc_release(ppuVar5);
code_r0x000106da40d4:
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106da4100; end: 106da4203; -[SCMemoriesEmptyStateDataProvider _setupBitmojiObserverAndPublisher] */

void FUN_106da4100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1ad60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106da4204; end: 106da4253;  */

void FUN_106da4204(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106da4254; end: 106da42c3; -[SCMemoriesEmptyStateDataProvider _fetchBitmojiAvatar] */

void FUN_106da4254(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
    func_0x00010c171160(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c24ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_startFetchingBitmoji_112671528);
    return;
  }
  return;
}



/* Entry: 106da42c4; end: 106da42cb; -[SCMemoriesEmptyStateDataProvider viewModel] */

undefined8 FUN_106da42c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106da42cc; end: 106da42d3; -[SCMemoriesEmptyStateDataProvider bitmojiAvatarPublishSubject] */

undefined8 FUN_106da42cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106da42d4; end: 106da431b; -[SCMemoriesEmptyStateDataProvider .cxx_destruct] */

void FUN_106da42d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106da431c; end: 106da434f;  */

void FUN_106da431c(ulong param_1,undefined8 param_2)

{
  if (param_1 < 0xb) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da4350; end: 106da4377;  */

undefined ** FUN_106da4350(long param_1)

{
  if (param_1 - 1U < 10) {
    return (undefined **)(&PTR_PTR_11097b248)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e86178;
}



/* Entry: 106da4378; end: 106da44d3; -[SCMemoriesEmptyStateViewController initWithViewType:delegate:bitmojiAvatarProvider:bitmojiImageFetcher:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106da4378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f6dd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275e1d8) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275e1dc),param_4);
    lVar4 = (long)_DAT_11275e1e0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275e1e4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275e1e8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275e1ec;
    if (*(long *)((long)puVar1 + lVar4) == 0) {
      puVar3 = PTR_PTR_1126b44d8;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
      *(undefined **)((long)puVar1 + lVar4) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106da44d4; end: 106da44e3; -[SCMemoriesEmptyStateViewController initWithViewType:delegate:currentPageTracker:] */

void FUN_106da44d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0621b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithViewType_delegate_bitmoj_1125f6278,param_3,param_4,0,0,param_5);
  return;
}



/* Entry: 106da44e4; end: 106da45bb; -[SCMemoriesEmptyStateViewController initWithViewType:delegate:collectionViewFlowLayout:bitmojiAvatarProvider:bitmojiImageFetcher:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106da44e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  func_0x00010c0621a0(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b44d8;
    _objc_alloc_init();
    lVar3 = (long)_DAT_11275e1ec;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c0ce4a0(param_5);
    func_0x00010c1c8300(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c0ce460(param_5);
    func_0x00010c1c82c0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c084a80(param_5);
    func_0x00010c1b6260(*(undefined8 *)(param_1 + lVar3));
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 106da45bc; end: 106da45cb; -[SCMemoriesEmptyStateViewController initWithViewType:delegate:collectionViewFlowLayout:currentPageTracker:] */

void FUN_106da45bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0621d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithViewType_delegate_collec_1125f6280);
  return;
}



/* Entry: 106da45cc; end: 106da4fd3; -[SCMemoriesEmptyStateViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da45cc(undefined8 param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *unaff_x27;
  long lVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  lVar8 = (long)_DAT_11275e1f0;
  *(undefined8 *)((long)param_2 + lVar8) = param_1;
  _objc_release(puVar1);
  ppuVar12 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar18 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar20,uVar19,dVar18,uVar17);
  func_0x00010c222380(param_2);
  _objc_release(puVar1);
  ppuVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(ppuVar2);
  lVar13 = (long)_DAT_11275e1d8;
  uVar7 = *(ulong *)((long)param_2 + lVar13);
  if (uVar7 < 0xb) {
    if ((1L << (uVar7 & 0x3f) & 0x632U) == 0) {
      if ((1L << (uVar7 & 0x3f) & 0x1c0U) == 0) {
        if ((1L << (uVar7 & 0x3f) & 0xcU) == 0) goto LAB_106da49a0;
        lVar9 = (long)_DAT_11275e1ec;
        func_0x00010c1c82c0(0,*(undefined8 *)((long)param_2 + lVar9));
        func_0x00010c1c8300(0x4000000000000000,*(undefined8 *)((long)param_2 + lVar9));
        func_0x00010c1b6260(*(double *)((long)param_2 + lVar8) + -2.0,0x405cc00000000000,
                            *(undefined8 *)((long)param_2 + lVar9));
        puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
        _objc_alloc();
        func_0x00010c014040(uVar20,uVar19,dVar18,uVar17);
        lVar8 = (long)_DAT_11275e1f8;
        uVar17 = *(undefined8 *)((long)param_2 + lVar8);
        *(undefined **)((long)param_2 + lVar8) = puVar1;
        _objc_release(uVar17);
        uVar17 = *(undefined8 *)((long)param_2 + lVar8);
        uVar19 = 0x3ff0000000000000;
        uVar20 = 0x3ff0000000000000;
        uVar15 = 0x3ff0000000000000;
        uVar16 = 0x3ff0000000000000;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
        _objc_alloc();
        func_0x00010c014040(uVar20,uVar19,dVar18,uVar17);
        lVar8 = (long)_DAT_11275e1f8;
        uVar17 = *(undefined8 *)((long)param_2 + lVar8);
        *(undefined **)((long)param_2 + lVar8) = puVar1;
        _objc_release(uVar17);
        uVar17 = *(undefined8 *)((long)param_2 + lVar8);
        uVar19 = 0;
        uVar20 = 0;
        uVar15 = 0;
        uVar16 = 0;
      }
      func_0x00010c181f80(uVar19,uVar20,uVar15,uVar16,uVar17);
    }
    else {
      lVar9 = (long)_DAT_11275e1ec;
      func_0x00010c1c8300(0x4000000000000000,*(undefined8 *)((long)param_2 + lVar9));
      func_0x00010c1c82c0(0,*(undefined8 *)((long)param_2 + lVar9));
      dVar14 = (*(double *)((long)param_2 + lVar8) + -3.0) * 0.25;
      func_0x00010c1b6260(dVar14,(dVar14 * 5.0) / 3.0,*(undefined8 *)((long)param_2 + lVar9));
      puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      _objc_alloc();
      func_0x00010c014040(uVar20,uVar19,dVar18,uVar17);
      uVar17 = *(undefined8 *)((long)param_2 + (long)_DAT_11275e1f8);
      *(undefined **)((long)param_2 + (long)_DAT_11275e1f8) = puVar1;
      _objc_release(uVar17);
    }
    func_0x00010be89320(param_2);
  }
  else {
LAB_106da49a0:
    if (uVar7 == 0) {
      puVar1 = PTR_PTR_1126d2848;
      _objc_alloc();
      func_0x00010bff7fc0();
      uVar15 = *(undefined8 *)((long)param_2 + (long)_DAT_11275e1f4);
      *(undefined **)((long)param_2 + (long)_DAT_11275e1f4) = puVar1;
      _objc_release(uVar15);
      ppuVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(ppuVar2);
      puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      _objc_alloc();
      func_0x00010c014040(uVar20,uVar19,dVar18,uVar17);
      lVar8 = (long)_DAT_11275e1f8;
      uVar15 = *(undefined8 *)((long)param_2 + lVar8);
      *(undefined **)((long)param_2 + lVar8) = puVar1;
      _objc_release(uVar15);
      func_0x00010c189840(*(undefined8 *)((long)param_2 + lVar8));
      func_0x00010c18b5e0(*(undefined8 *)((long)param_2 + lVar8));
      func_0x00010c1f7b20(*(undefined8 *)((long)param_2 + lVar8));
      uVar15 = *(undefined8 *)((long)param_2 + lVar13);
      FUN_106da431c(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)((long)param_2 + lVar8));
      _objc_release(uVar15);
      func_0x00010c219b60(*(undefined8 *)((long)param_2 + lVar8));
      uVar15 = *(undefined8 *)((long)param_2 + lVar8);
      _objc_opt_class(PTR_PTR_1126d2850);
      puVar1 = PTR_PTR_1126d2850;
      _objc_opt_class(PTR_PTR_1126d2850);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c126000(uVar15);
      _objc_release(puVar1);
      uVar15 = *(undefined8 *)((long)param_2 + lVar8);
      _objc_opt_class(PTR_PTR_1126d2858);
      puVar1 = PTR_PTR_1126d2858;
      _objc_opt_class(PTR_PTR_1126d2858);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c126060(uVar15);
      _objc_release(puVar1);
      ppuVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(ppuVar2);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(uVar20,uVar19,dVar18,uVar17);
      func_0x00010c219b60();
      uVar17 = *(undefined8 *)((long)param_2 + lVar13);
      FUN_106da431c(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
      _objc_release(uVar17);
      ppuVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(ppuVar2);
      puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar17 = *(undefined8 *)((long)param_2 + lVar8);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      uStack_e0 = uVar17;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d8 = ppuVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_e8 = ppuVar2;
      func_0x00010bf493c0(0x4043000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)param_2 + lVar8);
      uStack_f0 = uVar17;
      uStack_d0 = uVar17;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      uStack_100 = uVar19;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f8 = ppuVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_108 = ppuVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)((long)param_2 + lVar8);
      uStack_110 = uVar19;
      uStack_c8 = uVar19;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      uStack_120 = uVar17;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_118 = ppuVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_128 = ppuVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)param_2 + lVar8);
      uStack_130 = uVar17;
      uStack_c0 = uVar17;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      uStack_148 = uVar19;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = ppuVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_150 = ppuVar2;
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010bf493c0(-dVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      uStack_160 = uVar19;
      uStack_b8 = uVar19;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)((long)param_2 + lVar8);
      puStack_168 = puVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uStack_170 = uVar17;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      puStack_178 = puVar3;
      puStack_b0 = puVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      puStack_188 = puVar4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_180 = ppuVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_190 = ppuVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      puStack_198 = puVar4;
      puStack_158 = puVar1;
      puStack_a8 = puVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      puStack_1a0 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = puVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar6;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_138);
      _objc_release(unaff_x27);
      _objc_release(puVar4);
      _objc_release(ppuVar12);
      _objc_release(ppuVar6);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(ppuVar5);
      _objc_release(ppuVar2);
      _objc_release(puStack_1a0);
      _objc_release(puStack_198);
      _objc_release(ppuStack_190);
      _objc_release(ppuStack_180);
      _objc_release(puStack_188);
      _objc_release(puStack_178);
      _objc_release(uStack_170);
      _objc_release(puStack_168);
      _objc_release(uStack_160);
      _objc_release(ppuStack_150);
      _objc_release(ppuStack_140);
      _objc_release(uStack_148);
      _objc_release(uStack_130);
      _objc_release(ppuStack_128);
      _objc_release(ppuStack_118);
      _objc_release(uStack_120);
      _objc_release(uStack_110);
      _objc_release(ppuStack_108);
      _objc_release(ppuStack_f8);
      _objc_release(uStack_100);
      _objc_release(uStack_f0);
      _objc_release(ppuStack_e8);
      _objc_release(ppuStack_d8);
      _objc_release(uStack_e0);
      _objc_release(puStack_158);
    }
  }
  puVar1 = PTR_PTR_1126d2860;
  _objc_alloc();
  lVar9 = (long)_DAT_11275e1dc;
  lVar8 = (long)param_2 + lVar9;
  _objc_loadWeakRetained(lVar8);
  lVar11 = (long)_DAT_11275e1f4;
  uVar17 = *(undefined8 *)((long)param_2 + lVar11);
  func_0x00010bf5e200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c062220();
  uVar19 = *(undefined8 *)((long)param_2 + (long)_DAT_11275e1fc);
  *(undefined **)((long)param_2 + (long)_DAT_11275e1fc) = puVar1;
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126d2868;
  _objc_alloc();
  lVar8 = (long)param_2 + lVar9;
  _objc_loadWeakRetained();
  puVar3 = puVar1;
  func_0x00010c00a7a0();
  uVar19 = *(undefined8 *)((long)param_2 + (long)_DAT_11275e200);
  *(undefined **)((long)param_2 + (long)_DAT_11275e200) = puVar3;
  _objc_release(uVar19);
  _objc_release(lVar8);
  ppuVar2 = param_2;
  func_0x00010bead480();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puStack_1d0 = &DAT_11275e1e8;
  pcStack_1a8 = FUN_106da4fd4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11275e1f8;
  lStack_200 = lVar13;
  puStack_1f8 = unaff_x27;
  ppuStack_1f0 = ppuVar12;
  lStack_1e8 = lVar11;
  lStack_1e0 = lVar9;
  uStack_1d8 = uVar17;
  lStack_1c8 = lVar8;
  puStack_1c0 = puVar1;
  ppuStack_1b8 = param_2;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x00010c189840(*(undefined8 *)((long)ppuVar2 + lVar10));
  func_0x00010c18b5e0(*(undefined8 *)((long)ppuVar2 + lVar10));
  func_0x00010c1f7b20(*(undefined8 *)((long)ppuVar2 + lVar10));
  uVar17 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_11275e1d8);
  FUN_106da431c(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)ppuVar2 + lVar10));
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)((long)ppuVar2 + lVar10));
  uVar17 = *(undefined8 *)((long)ppuVar2 + lVar10);
  _objc_opt_class(PTR_PTR_1126d2850);
  puVar1 = PTR_PTR_1126d2850;
  _objc_opt_class(PTR_PTR_1126d2850);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)((long)ppuVar2 + lVar10);
  _objc_opt_class(PTR_PTR_1126d2870);
  puVar1 = PTR_PTR_1126d2870;
  _objc_opt_class(PTR_PTR_1126d2870);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)((long)ppuVar2 + lVar10);
  _objc_opt_class(PTR_PTR_1126d2858);
  puVar1 = PTR_PTR_1126d2858;
  _objc_opt_class(PTR_PTR_1126d2858);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)((long)ppuVar2 + lVar10);
  _objc_opt_class(PTR_PTR_1126d2878);
  puVar1 = PTR_PTR_1126d2878;
  _objc_opt_class(PTR_PTR_1126d2878);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar17);
  _objc_release(puVar1);
  ppuVar12 = ppuVar2;
  func_0x00010c29bf00(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(ppuVar12);
  puStack_268 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)((long)ppuVar2 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  lStack_238 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_230 = ppuVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_240 = ppuVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)ppuVar2 + lVar10);
  lStack_248 = lVar8;
  lStack_228 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  uStack_258 = uVar20;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = ppuVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = ppuVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)((long)ppuVar2 + lVar10);
  uStack_220 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)((long)ppuVar2 + lVar10);
  uStack_218 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_210 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_268);
  _objc_release(puVar1);
  _objc_release(uVar19);
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(ppuVar5);
  _objc_release(ppuVar12);
  _objc_release(uVar15);
  _objc_release(uVar20);
  _objc_release(ppuStack_260);
  _objc_release(ppuStack_250);
  _objc_release(uStack_258);
  _objc_release(lStack_248);
  _objc_release(ppuStack_240);
  _objc_release(ppuStack_230);
  lVar8 = lStack_238;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_106da540c;
  puStack_2a8 = PTR_PTR_1126f6dd8;
  lStack_2b0 = lVar8;
  uStack_2a0 = uVar17;
  ppuStack_298 = ppuVar5;
  ppuStack_290 = ppuVar12;
  ppuStack_288 = ppuVar2;
  ppuStack_280 = &puStack_1b0;
  _objc_msgSendSuper2(&lStack_2b0,PTR_s_viewWillLayoutSubviews_112526958);
  lVar13 = (long)_DAT_11275e1f8;
  uVar17 = *(undefined8 *)(lVar8 + lVar13);
  func_0x00010bf408e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar17);
  func_0x00010c08cdc0(*(undefined8 *)(lVar8 + lVar13));
  return;
}



/* Entry: 106da4fd4; end: 106da540b; -[SCMemoriesEmptyStateViewController _registerCollectionViewAndFullyAddToView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da4fd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11275e1f8;
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar9));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275e1d8);
  FUN_106da431c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  _objc_opt_class(PTR_PTR_1126d2850);
  puVar2 = PTR_PTR_1126d2850;
  _objc_opt_class(PTR_PTR_1126d2850);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  _objc_opt_class(PTR_PTR_1126d2870);
  puVar2 = PTR_PTR_1126d2870;
  _objc_opt_class(PTR_PTR_1126d2870);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  _objc_opt_class(PTR_PTR_1126d2858);
  puVar2 = PTR_PTR_1126d2858;
  _objc_opt_class(PTR_PTR_1126d2858);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  _objc_opt_class(PTR_PTR_1126d2878);
  puVar2 = PTR_PTR_1126d2878;
  _objc_opt_class(PTR_PTR_1126d2878);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar1);
  _objc_release(puVar2);
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_98 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  lStack_a8 = lVar3;
  lStack_88 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  uStack_b8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar9 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106da540c;
  puStack_108 = PTR_PTR_1126f6dd8;
  lStack_110 = lVar9;
  uStack_100 = uVar1;
  lStack_f8 = lVar3;
  lStack_f0 = lVar8;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_viewWillLayoutSubviews_112526958);
  lVar8 = (long)_DAT_11275e1f8;
  uVar1 = *(undefined8 *)(lVar9 + lVar8);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  func_0x00010c08cdc0(*(undefined8 *)(lVar9 + lVar8));
  return;
}



/* Entry: 106da540c; end: 106da5483; -[SCMemoriesEmptyStateViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da540c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6dd8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillLayoutSubviews_112526958);
  lVar2 = (long)_DAT_11275e1f8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 106da5484; end: 106da54fb; -[SCMemoriesEmptyStateViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5484(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6dd8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = (long)_DAT_11275e1f8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 106da54fc; end: 106da55af; -[SCMemoriesEmptyStateViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da54fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_11275e1d8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (uVar4 < 0xb) {
    ppuVar3 = (undefined **)(&PTR_PTR_11097b298)[uVar4];
  }
  else {
    ppuVar3 = &PTR_PTR_1126d2870;
  }
  puVar1 = *ppuVar3;
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106da55b0; end: 106da55f3; -[SCMemoriesEmptyStateViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106da55b0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + _DAT_11275e1d8) - 0xbU < 0xfffffffffffffff6) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + _DAT_11275e1d8) - 1;
  if (uVar1 < 10) {
    return *(undefined8 *)(&UNK_10ddee048 + uVar1 * 8);
  }
  return 3;
}



/* Entry: 106da55f4; end: 106da5747; -[SCMemoriesEmptyStateViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da55f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    if (*(ulong *)(param_1 + _DAT_11275e1d8) < 9 || *(ulong *)(param_1 + _DAT_11275e1d8) == 10) {
      puVar2 = PTR_PTR_1126d2858;
      _objc_opt_class(PTR_PTR_1126d2858);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e120(param_3,param_2,param_4,puVar2,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c1896a0(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_11275e1fc),
                          *(undefined8 *)(param_1 + _DAT_11275e200));
      func_0x00010c08cdc0(uVar1);
    }
    else {
      puVar2 = PTR_PTR_1126d2878;
      _objc_opt_class(PTR_PTR_1126d2878);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e120(param_3,param_2,param_4,puVar2,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106da5748; end: 106da5903; -[SCMemoriesEmptyStateViewController collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106da5748(double param_1,undefined8 param_2,undefined8 param_3,double param_4,ulong param_5,
             undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_7);
  func_0x00010bfed020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c262e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d2878;
  _objc_opt_class(PTR_PTR_1126d2878);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126d2858;
    _objc_opt_class(PTR_PTR_1126d2858);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    puVar1 = PTR_PTR_1126d2858;
    uVar5 = 0x3ff0000000000000;
    dVar6 = 1.0;
    if ((uVar3 & 1) == 0) goto LAB_106da58a4;
    _objc_retain(uVar2);
    _objc_opt_class(puVar1);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar3 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar2);
    if (*(long *)(param_5 + (long)_DAT_11275e1d8) - 0xbU < 0xfffffffffffffff6) {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + (long)_DAT_11275e1f8));
    }
    else {
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      func_0x00010c2766e0(uVar3);
      param_4 = param_1 + 64.0;
      _objc_release(param_5);
    }
  }
  else {
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    param_4 = 264.0;
    uVar3 = param_5;
  }
  _objc_release(uVar3);
  uVar5 = param_3;
  dVar6 = param_4;
LAB_106da58a4:
  _objc_release(uVar2);
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 106da5904; end: 106da5913; -[SCMemoriesEmptyStateViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275e1ec),PTR_s_itemSize_1125fecb0);
  return;
}



/* Entry: 106da5914; end: 106da5967; -[SCMemoriesEmptyStateViewController updateToNewStoriesViewType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5914(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == *(long *)(param_1 + _DAT_11275e1d8)) {
    return;
  }
  _objc_storeWeak(param_1 + _DAT_11275e1dc,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bed9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateHeaderViewWithViewType__112593e80,param_3);
  return;
}



/* Entry: 106da5968; end: 106da5983; -[SCMemoriesEmptyStateViewController updateToNewCameraRollViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5968(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11275e1d8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHeaderViewWithViewType__112593e80);
  return;
}



/* Entry: 106da5984; end: 106da5a53; -[SCMemoriesEmptyStateViewController updateOnboardingViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11275e1f4;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf5e200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2848;
  _objc_alloc();
  func_0x00010bff7fc0();
  puVar3 = puVar2;
  func_0x00010bf5e200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  if ((((ulong)puVar4 & 1) == 0) &&
     (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010bed9360(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11275e1d8));
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106da5a54; end: 106da5b97; -[SCMemoriesEmptyStateViewController _updateHeaderViewWithViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + _DAT_11275e1d8) = param_3;
  puVar1 = PTR_PTR_1126d2860;
  _objc_alloc();
  lVar4 = (long)_DAT_11275e1dc;
  lVar3 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c062220();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275e1fc);
  *(undefined **)(param_1 + _DAT_11275e1fc) = puVar1;
  _objc_release(uVar2);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126d2868;
  _objc_alloc();
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c00a7a0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275e200);
  *(undefined **)(param_1 + _DAT_11275e200) = puVar1;
  _objc_release(uVar2);
  _objc_release(lVar4);
  lVar3 = (long)_DAT_11275e1f8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128fa0(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf408e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106da5b98; end: 106da5c43; -[SCMemoriesEmptyStateViewController _setupKarma] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5b98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = (long)_DAT_11275e1f8;
  if (*(long *)(param_1 + lVar3) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275e1d8);
    FUN_106da4350();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e862d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106da5c44; end: 106da5cfb; -[SCMemoriesEmptyStateViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5c44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275e1e8,0);
  _objc_storeStrong(param_1 + _DAT_11275e1e4,0);
  _objc_storeStrong(param_1 + _DAT_11275e1e0,0);
  _objc_storeStrong(param_1 + _DAT_11275e1ec,0);
  _objc_storeStrong(param_1 + _DAT_11275e1f8,0);
  _objc_storeStrong(param_1 + _DAT_11275e1fc,0);
  _objc_storeStrong(param_1 + _DAT_11275e200,0);
  _objc_destroyWeak(param_1 + _DAT_11275e204);
  _objc_destroyWeak(param_1 + _DAT_11275e1dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e1f4,0);
  return;
}



/* Entry: 106da5cfc; end: 106da5d53; -[SCMemoriesEmptyStateFavoriteSnapsStoryHeaderView initWithFrame:] */

undefined1 * FUN_106da5cfc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9480(puVar1);
    func_0x00010bea9540(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106da5d54; end: 106da6043; -[SCMemoriesEmptyStateFavoriteSnapsStoryHeaderView _setUpHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da5d54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d2358;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_11275e208;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR_PTR_1126d2360;
  _objc_alloc(PTR_PTR_1126d2360);
  puVar2 = puVar1;
  func_0x000108dfd884();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108dfd83c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051fa0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493c0(0x4066800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_11275e20c;
  uVar16 = *(undefined8 *)(lVar4 + lVar17);
  *(undefined **)(lVar4 + lVar17) = puVar1;
  _objc_release(uVar16);
  func_0x00010c1cfce0(*(undefined8 *)(lVar4 + lVar17));
  func_0x00010c213040(*(undefined8 *)(lVar4 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar4 + lVar17));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar4 + lVar17));
  _objc_release(puVar1);
  func_0x000106da7e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar4 + lVar17));
  _objc_release(puVar1);
  func_0x00010befbb60(lVar4);
  func_0x00010c219b60(*(undefined8 *)(lVar4 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = *(long *)(lVar4 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar4 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar4 + _DAT_11275e208);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar4 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c08de00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar4 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(lVar4);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(uVar11);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar13 + _DAT_11275e208,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar13 + _DAT_11275e20c,0);
  return;
}



/* Entry: 106da6044; end: 106da6363; -[SCMemoriesEmptyStateFavoriteSnapsStoryHeaderView _setUpLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da6044(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_11275e20c;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  func_0x000106da7e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275e208);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_11275e208,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_11275e20c,0);
  return;
}



/* Entry: 106da6364; end: 106da63a3; -[SCMemoriesEmptyStateFavoriteSnapsStoryHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da6364(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275e208,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e20c,0);
  return;
}



/* Entry: 106da63a4; end: 106da66db; -[SCMemoriesEmptyStateHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106da63a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined *unaff_x22;
  long lVar6;
  long lVar7;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f6de8;
  puVar4 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithFrame__1125e2948);
  lVar6 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    *(undefined8 *)((long)puVar4 + (long)_DAT_11275e210) = param_1;
    _objc_release(puVar1);
    func_0x00010c219b60(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_opt_new();
    lVar7 = (long)_DAT_11275e214;
    uVar5 = *(undefined8 *)((long)puVar4 + lVar7);
    *(undefined **)((long)puVar4 + lVar7) = puVar1;
    _objc_release(uVar5);
    func_0x00010c16e060(*(undefined8 *)((long)puVar4 + lVar7));
    func_0x00010c190b80(*(undefined8 *)((long)puVar4 + lVar7));
    func_0x00010c166c00(*(undefined8 *)((long)puVar4 + lVar7));
    func_0x00010c207380(0x4038000000000000,*(undefined8 *)((long)puVar4 + lVar7));
    func_0x00010c219b60(*(undefined8 *)((long)puVar4 + lVar7));
    func_0x00010befbb60(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_opt_new();
    lVar6 = (long)_DAT_11275e218;
    uVar5 = *(undefined8 *)((long)puVar4 + lVar6);
    *(undefined **)((long)puVar4 + lVar6) = puVar1;
    _objc_release(uVar5);
    func_0x00010c16e060(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c190b80(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c166c00(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c207380(0x4020000000000000,*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c219b60(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c182220(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar4 + lVar7));
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_opt_new();
    lVar6 = (long)_DAT_11275e21c;
    uVar5 = *(undefined8 *)((long)puVar4 + lVar6);
    *(undefined **)((long)puVar4 + lVar6) = puVar1;
    _objc_release(uVar5);
    func_0x00010c16e060(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c190b80(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c166c00(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c207380(0x4030000000000000,*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010c219b60(*(undefined8 *)((long)puVar4 + lVar6));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar4 + lVar7));
    unaff_x22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(long *)((long)puVar4 + lVar7);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_78 = lVar6;
    uVar2 = *(undefined8 *)((long)puVar4 + lVar7);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf348e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(unaff_x22);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(unaff_x21);
    lVar6 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106da66dc;
  puStack_c8 = PTR_PTR_1126f6de8;
  lStack_d0 = lVar6;
  puStack_c0 = unaff_x22;
  puStack_b8 = unaff_x21;
  lStack_b0 = unaff_x20;
  puStack_a8 = puVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_d0,PTR_s_prepareForReuse_112620008);
  lVar7 = (long)_DAT_11275e220;
  func_0x00010c12c960(*(undefined8 *)(lVar6 + lVar7));
  uVar5 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = 0;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_11275e224;
  func_0x00010c12c960(*(undefined8 *)(lVar6 + lVar7));
  uVar5 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = 0;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_11275e228;
  func_0x00010c12c960(*(undefined8 *)(lVar6 + lVar7));
  uVar5 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = 0;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_11275e22c;
  func_0x00010c12c960(*(undefined8 *)(lVar6 + lVar7));
  uVar5 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = 0;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_11275e230;
  func_0x00010c12c960(*(undefined8 *)(lVar6 + lVar7));
  uVar5 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = 0;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_11275e234;
  func_0x00010c2558c0(*(undefined8 *)(lVar6 + lVar7));
  func_0x00010c12c960(*(undefined8 *)(lVar6 + lVar7));
  puVar4 = *(undefined8 **)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = 0;
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 106da66dc; end: 106da67c3; -[SCMemoriesEmptyStateHeaderView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da66dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6de8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar2 = (long)_DAT_11275e220;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275e224;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275e228;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275e22c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275e230;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275e234;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 106da67c4; end: 106da6bcb; -[SCMemoriesEmptyStateHeaderView _fillInViews] */

/* WARNING: Possible PIC construction at 0x000106da6b54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106da6b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da67c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11275e238;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1ba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11275e218);
    lVar2 = param_1;
    func_0x00010be1d1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar8);
    _objc_release(lVar2);
  }
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11275e218);
    lVar2 = param_1;
    func_0x00010be23600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar8);
    _objc_release(lVar2);
  }
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11275e218);
    lVar2 = param_1;
    func_0x00010be1e920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar8);
    _objc_release(lVar2);
  }
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1ba20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar9);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_release();
      goto LAB_106da6968;
    }
    lVar5 = *(long *)(param_1 + lVar9);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf6e300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_11275e218);
      goto code_r0x00010c12c960;
    }
  }
  else {
LAB_106da6968:
    _objc_release();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11275e21c);
    lVar2 = param_1;
    func_0x00010be21aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar8);
    _objc_release(lVar2);
  }
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28f9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11275e21c);
    lVar2 = param_1;
    func_0x00010be23a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar8);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c076be0();
  _objc_release(uVar4);
  if ((int)uVar8 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11275e21c);
    lVar2 = param_1;
    func_0x00010be20340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar8);
    _objc_release(lVar2);
  }
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar9);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c28f9a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar6 = *(ulong *)(param_1 + lVar9);
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c076be0();
      _objc_release(uVar6);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if ((uVar7 & 1) != 0) {
        return;
      }
      uVar8 = *(undefined8 *)(param_1 + _DAT_11275e21c);
code_r0x00010c12c960:
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_removeFromSuperview_112628c78);
      return;
    }
    _objc_release();
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106da6bcc; end: 106da6d33; -[SCMemoriesEmptyStateHeaderView _setupImageObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da6bcc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar8 = (long)_DAT_11275e238;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29e660();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf1adc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11275e23c);
    *(undefined8 *)(param_1 + _DAT_11275e23c) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106da6d34; end: 106da6dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da6d34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_11275e220;
    lVar1 = *(long *)(param_1 + lVar3);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275e218);
      lVar1 = param_1;
      func_0x00010be1d1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6d60(uVar2);
      _objc_release(lVar1);
      lVar1 = *(long *)(param_1 + lVar3);
    }
    func_0x00010c1a9f00(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106da6dd8; end: 106da6f83; -[SCMemoriesEmptyStateHeaderView _getAvatarImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da6dd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11275e220;
  lVar7 = *(long *)(param_1 + lVar9);
  if (lVar7 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf49420(0x4058000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    uStack_78 = uVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf49420(0x4058000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    lVar7 = param_1;
    func_0x00010bdc3f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e862f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9),param_2,lVar7);
    _objc_release(lVar7);
    lVar7 = *(long *)(param_1 + lVar9);
  }
  lVar9 = lVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar8 = (long)_DAT_11275e224;
    lVar7 = *(long *)(lVar9 + lVar8);
    if (lVar7 == 0) {
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar5 = *(undefined8 *)(lVar9 + _DAT_11275e238);
      func_0x00010c29d560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar1,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010c1cfce0(puVar1,param_2,0);
      func_0x00010c1bdb00(puVar1,param_2,0);
      func_0x00010c213040(puVar1,param_2,1);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c1e0180(*(double *)(lVar9 + _DAT_11275e210) + -80.0,puVar1);
      lVar7 = lVar9;
      func_0x00010bdc3f20(lVar9,param_2,&PTR____CFConstantStringClassReference_110e44a58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(puVar1,param_2,lVar7);
      _objc_release(lVar7);
      uVar6 = *(undefined8 *)(lVar9 + lVar8);
      *(undefined **)(lVar9 + lVar8) = puVar1;
      _objc_retain(puVar1);
      _objc_release(uVar6);
      lVar7 = *(long *)(lVar9 + lVar8);
      _objc_retain(lVar7);
      _objc_release(puVar1);
    }
    else {
      _objc_retain(lVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106da6f84; end: 106da713b; -[SCMemoriesEmptyStateHeaderView _getTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da6f84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11275e224;
  lVar4 = *(long *)(param_1 + lVar6);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275e238);
    func_0x00010c29d560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010c1cfce0(puVar1,param_2,0);
    func_0x00010c1bdb00(puVar1,param_2,0);
    func_0x00010c213040(puVar1,param_2,1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1e0180(*(double *)(param_1 + _DAT_11275e210) + -80.0,puVar1);
    lVar4 = param_1;
    func_0x00010bdc3f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e44a58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar5);
    lVar4 = *(long *)(param_1 + lVar6);
    _objc_retain(lVar4);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106da713c; end: 106da73df; -[SCMemoriesEmptyStateHeaderView _getDescLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da713c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar9;
  long lVar10;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11275e228;
  puVar8 = *(undefined **)(param_1 + lVar10);
  if (puVar8 == (undefined *)0x0) {
    unaff_x20 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275e238);
    func_0x00010c29d560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf6e300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(unaff_x20,param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010c1cfce0(unaff_x20,param_2,0);
    func_0x00010c1bdb00(unaff_x20,param_2,0);
    func_0x00010c213040(unaff_x20,param_2,1);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(unaff_x20,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(unaff_x20,param_2,puVar8);
    _objc_release(puVar8);
    unaff_x22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = unaff_x20;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar8;
    func_0x00010bf49420(*(double *)(param_1 + _DAT_11275e210) + -80.0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x20;
    puStack_78 = unaff_x23;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x24;
    func_0x00010bf494e0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(unaff_x22,param_2,unaff_x26);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x00010bdc3f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e86318);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(unaff_x20,param_2,puVar8);
    _objc_release(puVar8);
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = unaff_x20;
    _objc_retain(unaff_x20);
    _objc_release(uVar6);
    puVar8 = *(undefined **)(param_1 + lVar10);
    _objc_retain(puVar8);
    puVar1 = unaff_x20;
    _objc_release();
  }
  else {
    puVar1 = puVar8;
    _objc_retain();
    param_1 = unaff_x19;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_88 = FUN_106da73e0;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar10 = (long)_DAT_11275e22c;
    puVar5 = *(undefined **)(puVar1 + lVar10);
    puVar3 = puVar8;
    puStack_d0 = unaff_x26;
    puStack_c8 = unaff_x25;
    puStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    puStack_b0 = unaff_x22;
    puStack_a8 = puVar8;
    puStack_a0 = unaff_x20;
    puStack_98 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    if (*(undefined **)(puVar1 + lVar10) == (undefined *)0x0) {
      puVar8 = PTR_PTR_1126c3288;
      _objc_alloc();
      func_0x00010bffa0e0();
      uVar6 = *(undefined8 *)(puVar1 + lVar10);
      *(undefined **)(puVar1 + lVar10) = puVar8;
      _objc_release(uVar6);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174800(*(undefined8 *)(puVar1 + lVar10),param_2,puVar8);
      _objc_release(puVar8);
      uVar7 = *(undefined8 *)(puVar1 + lVar10);
      uVar2 = *(undefined8 *)(puVar1 + _DAT_11275e238);
      func_0x00010c29d560(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf25a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar7,param_2,uVar6,0);
      _objc_release(uVar6);
      _objc_release(uVar2);
      func_0x00010befbd60(*(undefined8 *)(puVar1 + lVar10),param_2,puVar1,
                          PTR_s__primaryButtonTapped_1125350d0,0x40);
      func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar10),param_2,0);
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar3 = *(undefined **)(puVar1 + lVar10);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = puVar3;
      func_0x00010bf49420(0x4066e00000000000);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = *(undefined **)(puVar1 + lVar10);
      puStack_e8 = unaff_x22;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010bf49420(0x4046000000000000);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = unaff_x24;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e8,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar8,param_2,unaff_x25);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(puVar3);
      puVar8 = puVar1;
      func_0x00010bdc3f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e86338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar10),param_2,puVar8);
      _objc_release(puVar8);
      param_1 = puVar1;
      puVar5 = *(undefined **)(puVar1 + lVar10);
    }
    puVar8 = puVar5;
    puVar1 = puVar8;
    _objc_retain();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      pcStack_f8 = FUN_106da761c;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar9 = (long)_DAT_11275e230;
      puVar5 = *(undefined **)(puVar1 + lVar9);
      lStack_140 = lVar10;
      puStack_138 = unaff_x25;
      puStack_130 = unaff_x24;
      puStack_128 = unaff_x23;
      puStack_120 = unaff_x22;
      puStack_118 = puVar3;
      puStack_110 = puVar8;
      puStack_108 = param_1;
      ppuStack_100 = &puStack_90;
      if (*(undefined **)(puVar1 + lVar9) == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar6 = *(undefined8 *)(puVar1 + lVar9);
        *(undefined **)(puVar1 + lVar9) = puVar8;
        _objc_release(uVar6);
        uVar7 = *(undefined8 *)(puVar1 + lVar9);
        uVar2 = *(undefined8 *)(puVar1 + _DAT_11275e238);
        func_0x00010c29d560(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c28f3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216260(uVar7,param_2,uVar6,0);
        _objc_release(uVar6);
        _objc_release(uVar2);
        uVar6 = *(undefined8 *)(puVar1 + lVar9);
        func_0x00010c271420(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(uVar6,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(puVar1 + lVar9);
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216380(uVar6,param_2,puVar8,0);
        _objc_release(puVar8);
        func_0x00010c21e900(*(undefined8 *)(puVar1 + lVar9),param_2,1);
        func_0x00010befbd60(*(undefined8 *)(puVar1 + lVar9),param_2,puVar1,
                            PTR_s__urlButtonTapped_1125350d8,0x40);
        func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar9),param_2,0);
        func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,
                            0xc024000000000000,*(undefined8 *)(puVar1 + lVar9));
        puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar7 = *(undefined8 *)(puVar1 + lVar9);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010bf494e0(0x404f800000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(puVar1 + lVar9);
        uStack_158 = uVar6;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf49420(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_150 = uVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_158,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar8,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(uVar7);
        puVar8 = puVar1;
        func_0x00010bdc3f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e86358);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar9),param_2,puVar8);
        _objc_release(puVar8);
        puVar5 = *(undefined **)(puVar1 + lVar9);
      }
      puVar8 = puVar5;
      puVar1 = puVar8;
      _objc_retain();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
        ___stack_chk_fail();
        lVar10 = (long)_DAT_11275e234;
        puVar8 = *(undefined **)(puVar1 + lVar10);
        if (puVar8 == (undefined *)0x0) {
          puVar8 = PTR_PTR_1126aeff0;
          _objc_alloc();
          func_0x00010bfffb60();
          uVar6 = *(undefined8 *)(puVar1 + lVar10);
          *(undefined **)(puVar1 + lVar10) = puVar8;
          _objc_release(uVar6);
          func_0x00010c24dbc0(*(undefined8 *)(puVar1 + lVar10));
          puVar8 = puVar1;
          func_0x00010bdc3f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e86378);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar10),param_2,puVar8);
          _objc_release(puVar8);
          puVar8 = *(undefined **)(puVar1 + lVar10);
        }
        _objc_retain(puVar8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106da73e0; end: 106da761b; -[SCMemoriesEmptyStateHeaderView _getPrimaryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da73e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  long lVar10;
  long lVar11;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11275e22c;
  lVar7 = *(long *)(param_1 + lVar10);
  if (lVar7 == 0) {
    puVar2 = PTR_PTR_1126c3288;
    _objc_alloc();
    func_0x00010bffa0e0();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174800(*(undefined8 *)(param_1 + lVar10),param_2,puVar2);
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275e238);
    func_0x00010c29d560(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf25a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar8,param_2,uVar6,0);
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar10),param_2,param_1,
                        PTR_s__primaryButtonTapped_1125350d0,0x40);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x21 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bf49420(0x4066e00000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)(param_1 + lVar10);
    uStack_68 = unaff_x22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = unaff_x24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,unaff_x25);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    lVar7 = param_1;
    func_0x00010bdc3f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e86338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10),param_2,lVar7);
    _objc_release(lVar7);
    lVar7 = *(long *)(param_1 + lVar10);
    unaff_x19 = param_1;
  }
  lVar9 = lVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_78 = FUN_106da761c;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = (long)_DAT_11275e230;
    lVar1 = *(long *)(lVar9 + lVar11);
    lStack_c0 = lVar10;
    puStack_b8 = unaff_x25;
    uStack_b0 = unaff_x24;
    uStack_a8 = unaff_x23;
    uStack_a0 = unaff_x22;
    uStack_98 = unaff_x21;
    lStack_90 = lVar7;
    lStack_88 = unaff_x19;
    puStack_80 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar9 + lVar11) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar6 = *(undefined8 *)(lVar9 + lVar11);
      *(undefined **)(lVar9 + lVar11) = puVar2;
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(lVar9 + lVar11);
      uVar3 = *(undefined8 *)(lVar9 + _DAT_11275e238);
      func_0x00010c29d560(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c28f3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar8,param_2,uVar6,0);
      _objc_release(uVar6);
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(lVar9 + lVar11);
      func_0x00010c271420(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(uVar6,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(lVar9 + lVar11);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar6,param_2,puVar2,0);
      _objc_release(puVar2);
      func_0x00010c21e900(*(undefined8 *)(lVar9 + lVar11),param_2,1);
      func_0x00010befbd60(*(undefined8 *)(lVar9 + lVar11),param_2,lVar9,
                          PTR_s__urlButtonTapped_1125350d8,0x40);
      func_0x00010c219b60(*(undefined8 *)(lVar9 + lVar11),param_2,0);
      func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,
                          0xc024000000000000,*(undefined8 *)(lVar9 + lVar11));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar8 = *(undefined8 *)(lVar9 + lVar11);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010bf494e0(0x404f800000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar9 + lVar11);
      uStack_d8 = uVar6;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf49420(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d0 = uVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d8,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar8);
      lVar7 = lVar9;
      func_0x00010bdc3f20(lVar9,param_2,&PTR____CFConstantStringClassReference_110e86358);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(*(undefined8 *)(lVar9 + lVar11),param_2,lVar7);
      _objc_release(lVar7);
      lVar1 = *(long *)(lVar9 + lVar11);
    }
    lVar7 = lVar1;
    lVar10 = lVar7;
    _objc_retain();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      lVar9 = (long)_DAT_11275e234;
      lVar7 = *(long *)(lVar10 + lVar9);
      if (lVar7 == 0) {
        puVar2 = PTR_PTR_1126aeff0;
        _objc_alloc();
        func_0x00010bfffb60();
        uVar6 = *(undefined8 *)(lVar10 + lVar9);
        *(undefined **)(lVar10 + lVar9) = puVar2;
        _objc_release(uVar6);
        func_0x00010c24dbc0(*(undefined8 *)(lVar10 + lVar9));
        lVar7 = lVar10;
        func_0x00010bdc3f20(lVar10,param_2,&PTR____CFConstantStringClassReference_110e86378);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar9),param_2,lVar7);
        _objc_release(lVar7);
        lVar7 = *(long *)(lVar10 + lVar9);
      }
      _objc_retain(lVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106da761c; end: 106da78d7; -[SCMemoriesEmptyStateHeaderView _getUrlButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da761c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11275e230;
  lVar6 = *(long *)(param_1 + lVar9);
  if (lVar6 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275e238);
    func_0x00010c29d560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c28f3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar7,param_2,uVar5,0);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c271420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar5,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar5,param_2,puVar1,0);
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar9),param_2,1);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar9),param_2,param_1,
                        PTR_s__urlButtonTapped_1125350d8,0x40);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
    func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                        *(undefined8 *)(param_1 + lVar9));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf494e0(0x404f800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    uStack_68 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar7);
    lVar6 = param_1;
    func_0x00010bdc3f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e86358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9),param_2,lVar6);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + lVar9);
  }
  lVar9 = lVar6;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar8 = (long)_DAT_11275e234;
    lVar6 = *(long *)(lVar9 + lVar8);
    if (lVar6 == 0) {
      puVar1 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      uVar5 = *(undefined8 *)(lVar9 + lVar8);
      *(undefined **)(lVar9 + lVar8) = puVar1;
      _objc_release(uVar5);
      func_0x00010c24dbc0(*(undefined8 *)(lVar9 + lVar8));
      lVar6 = lVar9;
      func_0x00010bdc3f20(lVar9,param_2,&PTR____CFConstantStringClassReference_110e86378);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(*(undefined8 *)(lVar9 + lVar8),param_2,lVar6);
      _objc_release(lVar6);
      lVar6 = *(long *)(lVar9 + lVar8);
    }
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106da78d8; end: 106da797b; -[SCMemoriesEmptyStateHeaderView _getLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da78d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275e234;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    lVar3 = param_1;
    func_0x00010bdc3f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e86378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


