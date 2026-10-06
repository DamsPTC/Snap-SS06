/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f2af90; end: 107f2af9b; -[SCGallerySearchTagUploader defaultNotifierWithLowPowerMode] */

void FUN_107f2af90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c3c50,PTR_s_defaultNotifier_1125b8108);
  return;
}



/* Entry: 107f2af9c; end: 107f2b1eb; -[SCGallerySearchTagUploader filterIneligibleSnapsFrom:] */

void FUN_107f2af9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126d8678;
    _objc_alloc_init(PTR_PTR_1126d8678);
    puVar4 = PTR_PTR_1126af4d0;
    func_0x00010bfaac00(PTR_PTR_1126af4d0,param_2,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = PTR_PTR_1126af4d0;
      func_0x00010bfa74c0(PTR_PTR_1126af4d0,param_2,lVar2,param_3,0,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar8 = puVar7;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860();
    func_0x00010c280520(puVar7,param_2,puVar9);
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860();
    puVar10 = puVar8;
    func_0x00010bf51e00(puVar8);
    func_0x00010c194000(puVar11,param_2,puVar10);
    _objc_release(puVar10);
    puVar10 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010c1ac220(puVar11,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107f2b1ec; end: 107f2b1fb;  */

void FUN_107f2b1ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107f2b1fc; end: 107f2b21b; -[SCGallerySearchTagUploader _isInvalidated] */

bool FUN_107f2b1fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 107f2b21c; end: 107f2b2cf; -[SCGallerySearchTagUploader .cxx_destruct] */

void FUN_107f2b21c(long param_1)

{
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



/* Entry: 107f2b2d0; end: 107f2b577; -[SCGalleryTagClusterIndexer findClusterForTag:configProvider:] */

void FUN_107f2b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = lRam00000001137284d8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107f2b410;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = param_4;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1137284d8,&puStack_68);
    uVar5 = uStack_48;
  }
  uVar2 = param_3;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25d0a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar2 = uRam00000001137284d0;
  func_0x00010c0e00e0(uRam00000001137284d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f2b578; end: 107f2b57f; -[SCGalleryTagClusterIndexer shouldBlockUpload] */

undefined8 FUN_107f2b578(void)

{
  return 0;
}



/* Entry: 107f2b580; end: 107f2b677; -[SCGalleryTinyClipAnalyzer initWithModelProvider:applicationLifecycleEvents:coreConfigProvider:] */

undefined1 *
FUN_107f2b580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fbb18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    func_0x00010bdff1c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f2b678; end: 107f2b81f; -[SCGalleryTinyClipAnalyzer classify:] */

void FUN_107f2b678(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    if (300.0 < param_1 - *(double *)(param_2 + 0x30)) {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_107f2b820;
      uStack_50 = 0x107f2b830;
      uStack_48 = 0;
      func_0x00010bdfb360(param_2);
      _objc_initWeak(auStack_78,param_2);
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_4);
      func_0x00010c0f8240(uVar3);
      uVar3 = puStack_68[5];
      _objc_retain(uVar3);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
      goto LAB_107f2b7cc;
    }
  }
  uVar3 = 0;
LAB_107f2b7cc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f2b820; end: 107f2b837;  */

void FUN_107f2b820(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f2b838; end: 107f2b88b;  */

void FUN_107f2b838(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bddeda0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f2b88c; end: 107f2b95b; -[SCGalleryTinyClipAnalyzer isReady] */

bool FUN_107f2b88c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108ec1d74();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c291940(lVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110eff918);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar6 != 0;
    _objc_release();
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 107f2b95c; end: 107f2ba7f; -[SCGalleryTinyClipAnalyzer version] */

ulong FUN_107f2b95c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108ec1d74();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c291940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  uVar4 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  uVar5 = uVar4;
  func_0x00010c067ec0(uVar4);
  _objc_release(uVar4);
  return uVar5;
}



/* Entry: 107f2ba80; end: 107f2bbe7; -[SCGalleryTinyClipAnalyzer _classify:] */

void FUN_107f2ba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be39fc0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b30e0;
  _objc_alloc(PTR_PTR_1126b30e0);
  func_0x00010bff3e00(0);
  func_0x00010c1427e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107f2b820;
  uStack_40 = 0x107f2b830;
  uStack_38 = 0;
  func_0x00010c0bf0a0(uVar3);
  func_0x00010bdf0780(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f2bbe8; end: 107f2bc2f;  */

void FUN_107f2bbe8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8620;
  _objc_alloc();
  func_0x00010c020e20();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f2bc30; end: 107f2be6f;  */

void FUN_107f2bc30(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar16 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar18 = *(long *)(lVar17 * 8);
      lVar3 = lVar18;
      func_0x00010c150d80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126d8618;
        _objc_alloc(PTR_PTR_1126d8618);
        lVar5 = lVar3;
        func_0x00010bf51e00();
        func_0x00010bf8dce0(lVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffc700(puVar4);
        _objc_release(lVar18);
        _objc_release(lVar5);
        func_0x00010befa120(puVar2);
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
      lVar17 = lVar17 + 1;
    } while (lVar16 != lVar17);
    lVar16 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126d8620;
  _objc_alloc();
  puVar6 = puVar2;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000108ec1d74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020e20();
  lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar14 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar4;
  _objc_release(uVar14);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) != 0) {
    return;
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x000108ec1d74();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfe70c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar12;
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107f2be70; end: 107f2bf73; -[SCGalleryTinyClipAnalyzer _initModelIfNeeded] */

void FUN_107f2be70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108ec1d74();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0d0160(uVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110eff918);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe70c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2bf74; end: 107f2c06f; -[SCGalleryTinyClipAnalyzer _didReceiveApplicationLifecycleEvents:] */

void FUN_107f2bf74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f2c070; end: 107f2c0b7;  */

void FUN_107f2c070(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f2c0b8; end: 107f2c17b; -[SCGalleryTinyClipAnalyzer _didReceiveMemoryWarning:] */

void FUN_107f2c0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f2c17c; end: 107f2c1a7;  */

void FUN_107f2c17c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f2c1a8; end: 107f2c1d3; -[SCGalleryTinyClipAnalyzer _respondeToMemoryWarning] */

void FUN_107f2c1a8(undefined8 param_1)

{
  func_0x00010be87800();
  func_0x00010bdfb360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdfb350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__destroyModel_11255c670);
  return;
}



/* Entry: 107f2c1d4; end: 107f2c213; -[SCGalleryTinyClipAnalyzer _recordMemoryWarning] */

void FUN_107f2c1d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f2c214; end: 107f2c26b; -[SCGalleryTinyClipAnalyzer _destroyModelExpirationTimer] */

void FUN_107f2c214(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107f2c26c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107f2c26c; end: 107f2c29f;  */

void FUN_107f2c26c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2c2a0; end: 107f2c2af; -[SCGalleryTinyClipAnalyzer _destroyModel] */

void FUN_107f2c2a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2c2b0; end: 107f2c313; -[SCGalleryTinyClipAnalyzer _respondeToModelExpirationTimer] */

void FUN_107f2c2b0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bdfb360();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107f2c314;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_48);
  return;
}



/* Entry: 107f2c314; end: 107f2c31b;  */

void FUN_107f2c314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__destroyModel_11255c670);
  return;
}



/* Entry: 107f2c31c; end: 107f2c3af; -[SCGalleryTinyClipAnalyzer _createNewModelExpirationTimer] */

void FUN_107f2c31c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec1f08();
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f2c3b0;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_2;
  uStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  return;
}



/* Entry: 107f2c3b0; end: 107f2c4af;  */

void FUN_107f2c3b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c069d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107f2c4b0; end: 107f2c4e3;  */

void FUN_107f2c4b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be951a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f2c4e4; end: 107f2c543; -[SCGalleryTinyClipAnalyzer .cxx_destruct] */

void FUN_107f2c4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f2c544; end: 107f2c683; -[SCGalleryVisualSearchIndexer initWithEncryptedContentManager:percMLModelProvider:applicationLifecycleEvents:coreConfigProvider:cachingMediaManager:memoriesVisualTagAnalyzer:] */

undefined1 *
FUN_107f2c544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbb20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010beb0980(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f2c684; end: 107f2c68b; -[SCGalleryVisualSearchIndexer isReady] */

void FUN_107f2c684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_isReady_1125fc920);
  return;
}



/* Entry: 107f2c68c; end: 107f2c69b; -[SCGalleryVisualSearchIndexer visualTagModelVersion] */

void FUN_107f2c68c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c298bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x10),PTR_s_version_112683d20);
    return;
  }
  return;
}



/* Entry: 107f2c69c; end: 107f2c6ab; -[SCGalleryVisualSearchIndexer tinyClipModelVersion] */

void FUN_107f2c69c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c298bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s_version_112683d20);
    return;
  }
  return;
}



/* Entry: 107f2c6ac; end: 107f2c76b; -[SCGalleryVisualSearchIndexer resultsForSnap:cloudFile:analyzeType:queue:resultHandler:] */

void FUN_107f2c6ac(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c07bc40();
  if ((((uVar1 & 1) == 0) || (param_3 == 0)) || (param_4 == 0)) {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  else {
    func_0x00010bdca6c0(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f2c76c; end: 107f2ceaf; -[SCGalleryVisualSearchIndexer _analyzeSnap:cloudFile:analyzerType:queue:resultHandler:] */

void FUN_107f2c76c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **unaff_x26;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uStack_1b0;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  ulong uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 != 0) {
    uVar1 = param_3;
    func_0x00010b5fa088();
    if (uVar1 < 0xd) {
      if ((1L << (uVar1 & 0x3f) & 0x1566U) == 0) {
        ppuStack_c8 = &puStack_d0;
        puStack_d0 = (undefined *)0x0;
        uStack_c0 = 0x2020000000;
        pcStack_b8 = (code *)((ulong)pcStack_b8 & 0xffffffffffffff00);
        _objc_initWeak(&uStack_110,param_1);
        param_1 = param_1 + 0x28;
        _objc_loadWeakRetained(param_1);
        lVar9 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_188 = 0xc2000000;
        pcStack_180 = FUN_107f2cfb4;
        puStack_178 = &UNK_110a13ab0;
        unaff_x26 = &puStack_190;
        _objc_copyWeak(auStack_158,&uStack_110);
        puStack_160 = &puStack_d0;
        _objc_retain(param_3);
        uStack_170 = param_3;
        uStack_150 = param_5;
        _objc_retain(param_7);
        lStack_168 = param_7;
        func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                            *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(param_1);
        _objc_release(lStack_168);
        _objc_release(uStack_170);
        _objc_destroyWeak(auStack_158);
        _objc_destroyWeak(&uStack_110);
        __Block_object_dispose(&puStack_d0,8);
      }
      else {
        unaff_x26 = &puStack_d0;
        puStack_d0 = (undefined *)0x0;
        uStack_c0 = 0x3032000000;
        pcStack_b8 = FUN_107f2ceb0;
        uStack_b0 = 0x107f2cec0;
        uStack_a8 = 0;
        uVar2 = *(undefined8 *)(param_1 + 8);
        ppuStack_c8 = unaff_x26;
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_107f2cec8;
        puStack_e0 = &UNK_1108bccc0;
        ppuStack_d8 = unaff_x26;
        func_0x00010c1346c0();
        _objc_release(uVar2);
        if (ppuStack_c8[5] == (undefined *)0x0) {
          (**(code **)(param_7 + 0x10))(param_7,0);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
          func_0x00010bf0b300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c3cc0(0x407c800000000000,0x407c800000000000);
          func_0x00010c169b80(puVar3);
          uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
          uVar11 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          uStack_110 = uVar11;
          uStack_108 = uVar13;
          uStack_100 = uVar2;
          func_0x00010c1ec3e0(puVar3);
          uStack_110 = uVar11;
          uStack_108 = uVar13;
          uStack_100 = uVar2;
          func_0x00010c1ec3c0(puVar3);
          puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          dVar12 = 0.05;
          _CMTimeMakeWithSeconds(&uStack_110,0x3fa999999999999a,600);
          func_0x00010c297200();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          puStack_a0 = puVar4;
          if (ppuStack_c8[5] == (undefined *)0x0) {
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_100 = 0;
          }
          else {
            func_0x00010bf8b160(&uStack_110);
          }
          _CMTimeGetSeconds(&uStack_110);
          dVar12 = dVar12 / 3.0;
          _CMTimeMakeWithSeconds(&uStack_110,dVar12,600);
          func_0x00010c297200();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          puStack_98 = puVar5;
          if (ppuStack_c8[5] == (undefined *)0x0) {
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_100 = 0;
          }
          else {
            func_0x00010bf8b160(&uStack_110);
          }
          _CMTimeGetSeconds(&uStack_110);
          dVar12 = (dVar12 + dVar12) / 3.0;
          _CMTimeMakeWithSeconds(&uStack_110,dVar12,600);
          func_0x00010c297200();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          puStack_90 = puVar6;
          if (ppuStack_c8[5] == (undefined *)0x0) {
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_100 = 0;
          }
          else {
            func_0x00010bf8b160(&uStack_110);
          }
          _CMTimeGetSeconds(&uStack_110);
          _CMTimeMakeWithSeconds(&uStack_110,dVar12 + -0.05,600);
          func_0x00010c297200();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_88 = puVar7;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release();
          _dispatch_group_create();
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf529e0(unaff_x26);
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          for (ppuVar10 = (undefined **)0x0; ppuVar8 = unaff_x26, func_0x00010bf529e0(),
              ppuVar10 < ppuVar8; ppuVar10 = (undefined **)((long)ppuVar10 + 1)) {
            _dispatch_group_enter(puVar4);
          }
          _objc_autoreleasePoolPush();
          puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_140 = 0xc2000000;
          pcStack_138 = FUN_107f2cf00;
          puStack_130 = &UNK_110a13a80;
          _objc_retain(param_3);
          uStack_128 = param_3;
          _objc_retain(puVar5);
          puStack_120 = puVar5;
          _objc_retain(puVar4);
          puStack_118 = puVar4;
          func_0x00010bfbf180(puVar3);
          _dispatch_group_wait(puVar4,0xffffffffffffffff);
          puVar6 = puVar5;
          func_0x00010bf529e0();
          if (puVar6 == (undefined *)0x0) {
            (**(code **)(param_7 + 0x10))(param_7,0);
          }
          else {
            if (((uint)param_5 >> 1 & 1) == 0) {
              uStack_1b0 = 0;
            }
            else {
              uStack_1b0 = *(undefined8 *)(param_1 + 0x10);
              puVar6 = puVar5;
              func_0x00010bf51e00(puVar5);
              func_0x00010bf39d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
            }
            if ((param_5 & 1) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(undefined8 *)(param_1 + 0x20);
              puVar6 = puVar5;
              func_0x00010bf51e00(puVar5);
              func_0x00010bf39d40(uVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
            }
            puVar6 = PTR_PTR_1126d8688;
            _objc_alloc(PTR_PTR_1126d8688);
            func_0x00010c0625a0();
            (**(code **)(param_7 + 0x10))(param_7,puVar6);
            _objc_release(puVar6);
            _objc_release(uVar2);
            _objc_release(uStack_1b0);
          }
          _objc_release(puStack_118);
          _objc_release(puStack_120);
          _objc_release(uStack_128);
          _objc_autoreleasePoolPop(ppuVar8);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(unaff_x26);
          _objc_release(puVar3);
        }
        __Block_object_dispose(&puStack_d0,8);
        _objc_release(uStack_a8);
      }
      goto LAB_107f2cdfc;
    }
    if (uVar1 != 9999) goto LAB_107f2cdfc;
  }
  (**(code **)(param_7 + 0x10))(param_7,0);
LAB_107f2cdfc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 7);
  _objc_destroyWeak(&uStack_110);
  lVar9 = 8;
  __Block_object_dispose(&puStack_d0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 107f2ceb0; end: 107f2cec7;  */

void FUN_107f2ceb0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f2cec8; end: 107f2ceff;  */

void FUN_107f2cec8(long param_1,undefined8 param_2)

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



/* Entry: 107f2cf00; end: 107f2cfb3;  */

void FUN_107f2cf00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_6;
  _objc_retain(param_6);
  if (param_5 == 0) {
    _objc_autoreleasePoolPush();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ed100(uVar2);
    func_0x00010bfe9260(0x3ff0000000000000,puVar3,param_2,param_3,(long)(int)uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar3);
    _objc_autoreleasePoolPop(uVar1);
  }
  else {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107f2cfb4; end: 107f2d02b;  */

void FUN_107f2cfb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8), (*(byte *)(lVar2 + 0x18) & 1) == 0)) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    func_0x00010be23e00(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f2d02c; end: 107f2d223; -[SCGalleryVisualSearchIndexer _getVisualIndexingResultFromImage:snap:analyzerType:resultHandler:] */

void FUN_107f2d02c(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  lVar4 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_3 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
    goto LAB_107f2d1dc;
  }
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  lVar7 = param_4;
  func_0x00010c0ed100(param_4);
  lVar4 = (long)(int)lVar7;
  func_0x00010bfe9260(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    if ((param_5 >> 1 & 1) == 0) {
      lVar7 = 0;
      if ((param_5 & 1) != 0) goto LAB_107f2d0d4;
LAB_107f2d18c:
      lVar6 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if ((param_5 & 1) == 0) goto LAB_107f2d18c;
LAB_107f2d0d4:
      lVar6 = *(long *)(param_1 + 0x20);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126d8688;
    _objc_alloc(PTR_PTR_1126d8688);
    param_3 = lVar7;
    lVar4 = lVar6;
    func_0x00010c0625a0();
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar6);
    _objc_release(lVar7);
  }
  _objc_release(puVar1);
  lVar7 = param_3;
LAB_107f2d1dc:
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d8690;
  if (lVar7 != 0) {
    _objc_retain(lVar4);
    _objc_retain(lVar7);
    _objc_alloc();
    func_0x00010c02c780();
    _objc_release(lVar4);
    _objc_release(lVar7);
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    *(undefined **)(param_4 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107f2d224; end: 107f2d2a3; -[SCGalleryVisualSearchIndexer _setupTinyClipAnalyzerWithModelProvider:applicationLifecycleEvents:] */

void FUN_107f2d224(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8690;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c02c780();
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107f2d2a4; end: 107f2d2ab; -[SCGalleryVisualSearchIndexer shouldBlockUpload] */

undefined8 FUN_107f2d2a4(void)

{
  return 0;
}



/* Entry: 107f2d2ac; end: 107f2d2fb; -[SCGalleryVisualSearchIndexer .cxx_destruct] */

void FUN_107f2d2ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f2d2fc; end: 107f2d3c3;  */

void FUN_107f2d2fc(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010bf64920(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0) || (uVar1 = param_1, func_0x00010c08fa60(), uVar1 < (ulong)(param_4 + param_3))
     ) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar1 = param_1;
    func_0x00010c25eac0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010bffa180(puVar3,param_2,uVar2,param_4,param_5);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f2d3c4; end: 107f2d417; +[SCGallerySearchSimilarQueryMap similarQueryMap] */

void FUN_107f2d3c4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137284e8 != -1) {
    func_0x00010002a2fc(0x1137284e8,&PTR___NSConcreteGlobalBlock_110a13ae0);
  }
  uVar1 = uRam00000001137284e0;
  _objc_retain(uRam00000001137284e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f2d418; end: 107f2d52b;  */

void FUN_107f2d418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc2ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar3,2,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar6 == 0) {
    lStack_40 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,1,&lStack_40)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lStack_40;
    _objc_retain(lStack_40);
    if (lVar6 == 0) {
      puVar5 = puVar4;
      func_0x00010bf51e00();
      puVar1 = puRam00000001137284e0;
      puRam00000001137284e0 = puVar5;
      _objc_release(puVar1);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(lVar6);
  return;
}



/* Entry: 107f2d52c; end: 107f2d57f;  */

void FUN_107f2d52c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137284f0 != -1) {
    func_0x00010002a2fc(0x1137284f0,&PTR___NSConcreteGlobalBlock_110a13b00);
  }
  uVar1 = uRam00000001137284f8;
  _objc_retain(uRam00000001137284f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f2d580; end: 107f2d597;  */

void FUN_107f2d580(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137284f8;
  ppuRam00000001137284f8 = &PTR__OBJC_CLASS___NSConstantArray_111181dd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2d598; end: 107f2d673; -[SCGalleryTagClusterSearch initWithMemoriesSearchDatabase:] */

undefined1 * FUN_107f2d598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbb28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f2d674; end: 107f2d67f; -[SCGalleryTagClusterSearch setUpWithGallerySearch:] */

void FUN_107f2d674(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107f2d680; end: 107f2dbcf; -[SCGalleryTagClusterSearch fetchAllResultsWithQueue:completionHandler:] */

void FUN_107f2d680(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d8698;
  _objc_alloc_init(PTR_PTR_1126d8698);
  puVar3 = PTR_PTR_1126d8610;
  func_0x00010c267020();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107f2dbd0;
  uStack_88 = 0x107f2dbe0;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107f2dbd0;
  uStack_b8 = 0x107f2dbe0;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_107f2dbd0;
  uStack_e8 = 0x107f2dbe0;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_107f2dbd0;
  uStack_118 = 0x107f2dbe0;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_107f2dbd0;
  uStack_148 = 0x107f2dbe0;
  uStack_140 = 0;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_107f2dbd0;
  uStack_178 = 0x107f2dbe0;
  uStack_170 = 0;
  puStack_1c0 = &uStack_1c8;
  uStack_1c8 = 0;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_107f2dbd0;
  uStack_1a8 = 0x107f2dbe0;
  uStack_1a0 = 0;
  puVar4 = PTR_PTR_1126d8610;
  func_0x00010c06ef00();
  if ((int)puVar4 == 0) {
    _dispatch_group_create();
    puVar5 = puVar3;
    func_0x00010c0720c0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)puVar5 != 0) {
      _dispatch_group_enter(puVar4);
      puStack_220 = puVar1;
      uStack_218 = 0xc2000000;
      pcStack_210 = FUN_107f2dbfc;
      puStack_208 = &UNK_110a13b20;
      puStack_1f8 = &uStack_a8;
      _objc_retain(puVar4);
      puStack_200 = puVar4;
      func_0x00010be10600(param_1);
      _objc_release(puStack_200);
    }
    _dispatch_group_enter(puVar4);
    puStack_250 = puVar1;
    uStack_248 = 0xc2000000;
    uStack_240 = 0x107f2dc58;
    puStack_238 = &UNK_110a13b20;
    puStack_228 = &uStack_d8;
    _objc_retain(puVar4);
    puStack_230 = puVar4;
    func_0x00010be12040(param_1);
    puVar5 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar5 != 0) {
      _dispatch_group_enter(puVar4);
      puStack_280 = puVar1;
      uStack_278 = 0xc2000000;
      uStack_270 = 0x107f2dcb4;
      puStack_268 = &UNK_110a13b20;
      puStack_258 = &uStack_108;
      _objc_retain(puVar4);
      puStack_260 = puVar4;
      func_0x00010be11960(param_1);
      _objc_release(puStack_260);
    }
    _dispatch_group_enter(puVar4);
    puStack_2b0 = puVar1;
    uStack_2a8 = 0xc2000000;
    uStack_2a0 = 0x107f2dd10;
    puStack_298 = &UNK_110a13b20;
    puStack_288 = &uStack_1c8;
    _objc_retain(puVar4);
    puStack_290 = puVar4;
    func_0x00010be14680(param_1);
    _dispatch_group_enter(puVar4);
    puStack_2e0 = puVar1;
    uStack_2d8 = 0xc2000000;
    uStack_2d0 = 0x107f2dd6c;
    puStack_2c8 = &UNK_110a13b20;
    puStack_2b8 = &uStack_138;
    _objc_retain(puVar4);
    puStack_2c0 = puVar4;
    func_0x00010be15020(param_1);
    _dispatch_group_enter(puVar4);
    puStack_310 = puVar1;
    uStack_308 = 0xc2000000;
    uStack_300 = 0x107f2ddc8;
    puStack_2f8 = &UNK_110a13b20;
    puStack_2e8 = &uStack_168;
    _objc_retain(puVar4);
    puStack_2f0 = puVar4;
    func_0x00010be12400(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_380 = puVar1;
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_107f2de24;
    puStack_368 = &UNK_110a13b50;
    puStack_348 = &uStack_138;
    puStack_340 = &uStack_108;
    puStack_338 = &uStack_198;
    puStack_330 = &uStack_1c8;
    puStack_328 = &uStack_168;
    puStack_320 = &uStack_a8;
    puStack_318 = &uStack_d8;
    lStack_360 = param_1;
    _objc_retain(param_3);
    uStack_358 = param_3;
    _objc_retain(param_4);
    puStack_350 = param_4;
    func_0x000100bc0718(puVar4,uVar6,&puStack_380);
    _objc_release(uVar6);
    _objc_release(puStack_350);
    _objc_release(uStack_358);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2c0);
    _objc_release(puStack_290);
    _objc_release(puStack_230);
  }
  else {
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e8 = 0xc2000000;
    uStack_1e0 = 0x107f2dbe8;
    puStack_1d8 = &UNK_110849530;
    _objc_retain(param_4);
    puStack_1d0 = param_4;
    func_0x00010007380c(param_3,&puStack_1f0);
    puVar4 = puStack_1d0;
  }
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_1c8,8);
  _objc_release(uStack_1a0);
  __Block_object_dispose(&uStack_198,8);
  _objc_release(uStack_170);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f2dbd0; end: 107f2dbfb;  */

void FUN_107f2dbd0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f2dbfc; end: 107f2de23;  */

void FUN_107f2dbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f2de24; end: 107f2e12b;  */

void FUN_107f2de24(float param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar4 = puVar2;
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010be73c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
  }
  uVar1 = (uint)puVar4;
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x28) != 0) {
    uVar1 = (uint)*(undefined8 *)(param_2 + 0x20);
    func_0x00010be73c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release();
  }
  if ((*(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28) != 0) &&
     (_arc4random(), uVar1 < 0x7fffffff)) {
    puVar4 = puVar2;
    func_0x00010befa160();
    uVar1 = (uint)puVar4;
  }
  if ((*(long *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28) != 0) &&
     (_arc4random(), uVar1 < 0x7fffffff)) {
    func_0x00010befa160(puVar2);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
  func_0x00010bf529e0();
  if ((lVar5 == 0) || (lVar5 = lVar3, func_0x00010bf529e0(), lVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be73c00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0dfd40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0c1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c0c1c40();
    _objc_retainAutoreleasedReturnValue();
    FUN_107f2e12c(lVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(lVar7);
    _objc_release(lVar5);
    if (param_1 < 1.0) {
      func_0x00010befa160(puVar2);
    }
  }
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28) != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be73c00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(uVar9);
  }
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28) != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be73c00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(uVar9);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107f2e20c;
  puStack_78 = &UNK_11084aaa8;
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar8);
  puStack_70 = puVar2;
  uStack_68 = uVar8;
  _objc_retain(puVar2);
  func_0x00010007380c(uVar9,&puStack_90);
  _objc_release(puStack_70);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(lVar3);
  return;
}



/* Entry: 107f2e12c; end: 107f2e20b;  */

float FUN_107f2e12c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf529e0();
  uVar2 = param_2;
  func_0x00010bf529e0();
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  if (uVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069840(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf529e0(puVar3);
    fVar5 = (float)puVar4 / (float)uVar1;
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return fVar5;
}



/* Entry: 107f2e20c; end: 107f2e21b;  */

void FUN_107f2e20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f2e218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f2e21c; end: 107f2e34b;  */

void FUN_107f2e21c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 107f2e34c; end: 107f2e45f; -[SCGalleryTagClusterSearch _fetchClusteredSearchResultWithSearchRequest:completionHandler:] */

void FUN_107f2e34c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  FUN_107f2d52c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f2e460;
  puStack_60 = &UNK_110a13b80;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c154900(lVar1,param_2,lVar2,uVar3,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107f2e460; end: 107f2e6ab;  */

void FUN_107f2e460(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  func_0x00010c0d3c80();
  func_0x00010c23b4a0();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar9 = param_4;
  func_0x00010bf529e0();
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      puVar10 = puVar1;
      func_0x00010bf529e0();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        uVar7 = param_1;
        do {
          uVar2 = param_4;
          func_0x00010c0dfd40(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c0dfd40(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          FUN_107f2e12c(uVar3,puVar5);
          param_1 = uVar7;
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (0.5 <= (float)uVar7) goto LAB_107f2e5a4;
          puVar10 = puVar10 + 1;
          puVar4 = puVar1;
          func_0x00010bf529e0();
          uVar7 = param_1;
        } while (puVar10 < puVar4);
      }
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(uVar2);
      puVar10 = puVar1;
      func_0x00010bf529e0();
      if ((undefined *)0x2 < puVar10) break;
LAB_107f2e5a4:
      uVar9 = uVar9 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar9 < uVar2);
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) && (lVar6 = *(long *)(param_2 + 0x30), _objc_release(), lVar6 != 0)) {
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107f2e6ac;
    puStack_90 = &UNK_11084a9e8;
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    uStack_78 = uVar11;
    _objc_retain(uVar8);
    uStack_88 = uVar8;
    _objc_retain(puVar1);
    puStack_80 = puVar1;
    func_0x00010007380c(uVar7,&puStack_a8);
    _objc_release(uVar7);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_78);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107f2e6ac; end: 107f2e6f7;  */

void FUN_107f2e6ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f2e6f8; end: 107f2e873; -[SCGalleryTagClusterSearch _fetchLargeEnoughConceptSearchResultWithSearchRequest:completionHandler:] */

void FUN_107f2e6f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f2e874;
  puStack_68 = &UNK_110a13bb0;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_80;
  uStack_60 = param_3;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107f2e8c4;
  puStack_a8 = &UNK_110a13be0;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  ppuStack_90 = ppuVar2;
  uStack_88 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(ppuVar2);
  _objc_retainBlock(&puStack_c0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45b20(uVar4,param_2,uVar5,ppuVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(ppuStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107f2e874; end: 107f2e8c3;  */

void FUN_107f2e874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d86a0;
  func_0x00010bdcf320(PTR_PTR_1126d86a0,param_2,param_3,3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f2e8c4; end: 107f2eb07;  */

ulong FUN_107f2e8c4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  func_0x00010c23b4a0(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar2);
      }
      uVar10 = *(ulong *)(uVar11 * 8);
      uVar4 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c067fc0();
      if (uVar5 < 3) {
        _objc_release(uVar4);
      }
      else {
        FUN_107f2eb08();
        _objc_release(uVar4);
        if ((uVar10 & 1) == 0) {
          func_0x00010befa120(puVar3);
          puVar6 = puVar3;
          func_0x00010bf529e0();
          if ((undefined *)0xe < puVar6) goto LAB_107f2ea30;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar11);
    uVar1 = uVar2;
    func_0x00010bf52a60();
  }
LAB_107f2ea30:
  _objc_release(uVar2);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),0,0);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar7);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154920(lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(lVar7);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar7 = lRam0000000113728500;
  _objc_retain();
  if (lVar7 != -1) {
    func_0x00010002a2fc(0x113728500,&PTR___NSConcreteGlobalBlock_110a13c10);
  }
  uVar1 = uRam0000000113728508;
  func_0x00010bf4b900(uRam0000000113728508);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107f2eb08; end: 107f2eb6f;  */

undefined8 FUN_107f2eb08(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam0000000113728500;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x113728500,&PTR___NSConcreteGlobalBlock_110a13c10);
  }
  uVar2 = uRam0000000113728508;
  func_0x00010bf4b900(uRam0000000113728508);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107f2eb70; end: 107f2ec2f; -[SCGalleryTagClusterSearch _fetchHolidayResultWithSearchRequest:completionHandler:] */

void FUN_107f2eb70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  if (lRam0000000113728518 != -1) {
    func_0x00010002a2fc(0x113728518,&PTR___NSConcreteGlobalBlock_110a13c30);
  }
  uVar1 = uRam0000000113728510;
  _objc_retain(uRam0000000113728510);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154920(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f2ec30; end: 107f2ecb3; -[SCGalleryTagClusterSearch _fetchStickerResultWithSearchRequest:completionHandler:] */

void FUN_107f2ec30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154920(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181df0,uVar2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f2ecb4; end: 107f2ee2f; -[SCGalleryTagClusterSearch _fetchTimetagResultWithSearchRequest:completionHandler:] */

void FUN_107f2ecb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f2ee30;
  puStack_68 = &UNK_110a13bb0;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_80;
  uStack_60 = param_3;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107f2ee80;
  puStack_a8 = &UNK_110a13be0;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  ppuStack_90 = ppuVar2;
  uStack_88 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(ppuVar2);
  _objc_retainBlock(&puStack_c0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f9a0(uVar4,param_2,uVar5,ppuVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(ppuStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107f2ee30; end: 107f2ee7f;  */

void FUN_107f2ee30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d86a0;
  func_0x00010bdcf320(PTR_PTR_1126d86a0,param_2,param_3,3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f2ee80; end: 107f2ef53;  */

void FUN_107f2ee80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_2;
    func_0x00010bf002e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1545e0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f2ef54; end: 107f2f0cf; -[SCGalleryTagClusterSearch _fetchLocationClusterSearchResultWithSearchRequest:completionHandler:] */

void FUN_107f2ef54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f2f0d0;
  puStack_68 = &UNK_110a13bb0;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_80;
  uStack_60 = param_3;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107f2f120;
  puStack_a8 = &UNK_110a13be0;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  ppuStack_90 = ppuVar2;
  uStack_88 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(ppuVar2);
  _objc_retainBlock(&puStack_c0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ed40(uVar4,param_2,uVar5,ppuVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(ppuStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107f2f0d0; end: 107f2f11f;  */

void FUN_107f2f0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d86a0;
  func_0x00010bdcf320(PTR_PTR_1126d86a0,param_2,param_3,3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f2f120; end: 107f2f373;  */

void FUN_107f2f120(long param_1,ulong param_2)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010c23b4a0(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar3);
      }
      uVar17 = *(ulong *)(uVar18 * 8);
      if ((uVar17 != 0) && (uVar5 = uVar17, func_0x00010c08fa60(), uVar5 != 0)) {
        uVar5 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c067fc0();
        if (uVar6 < 3) {
          _objc_release(uVar5);
        }
        else {
          FUN_107f2eb08();
          _objc_release(uVar5);
          if ((uVar17 & 1) == 0) {
            func_0x00010befa120(puVar4);
            puVar13 = puVar4;
            func_0x00010bf529e0();
            if ((undefined *)0xe < puVar13) goto LAB_107f2f29c;
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar2 != uVar18);
    uVar2 = uVar3;
    func_0x00010bf52a60();
  }
LAB_107f2f29c:
  _objc_release(uVar3);
  puVar13 = puVar4;
  func_0x00010bf529e0();
  if (puVar13 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained();
    puVar8 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    puVar14 = puVar8;
    func_0x00010c154920(lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar7);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0d3c80();
  func_0x00010c23b4a0();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar8 = puVar13;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      puVar16 = puVar4;
      func_0x00010bf529e0();
      if (puVar16 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        do {
          puVar9 = puVar13;
          func_0x00010c0dfd40(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar4;
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          FUN_107f2e12c(puVar10,puVar12);
          fVar1 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          if (0.5 <= fVar1) goto LAB_107f2f4b4;
          puVar16 = puVar16 + 1;
          puVar9 = puVar4;
          func_0x00010bf529e0();
        } while (puVar16 < puVar9);
      }
      puVar16 = puVar13;
      func_0x00010c0dfd40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar16);
      puVar16 = puVar4;
      func_0x00010bf529e0();
      if (puVar14 <= puVar16) break;
LAB_107f2f4b4:
      puVar8 = puVar8 + 1;
      puVar16 = puVar13;
      func_0x00010bf529e0();
    } while (puVar8 < puVar16);
  }
  puVar14 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107f2f374; end: 107f2f507; +[SCGalleryTagClusterSearch _arrayByRemovingDuplicateSearchResultsInArray:maxResultsCount:] */

void FUN_107f2f374(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  func_0x00010c0d3c80();
  func_0x00010c23b4a0();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar6 = param_4;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar7 = puVar1;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
        uVar8 = param_1;
        do {
          uVar2 = param_4;
          func_0x00010c0dfd40(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c0dfd40(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          FUN_107f2e12c(uVar3,puVar5);
          param_1 = uVar8;
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (0.5 <= (float)uVar8) goto LAB_107f2f4b4;
          puVar7 = puVar7 + 1;
          puVar4 = puVar1;
          func_0x00010bf529e0();
          uVar8 = param_1;
        } while (puVar7 < puVar4);
      }
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(uVar2);
      puVar7 = puVar1;
      func_0x00010bf529e0();
      if (param_5 <= puVar7) break;
LAB_107f2f4b4:
      uVar6 = uVar6 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar6 < uVar2);
  }
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f2f508; end: 107f2f567; -[SCGalleryTagClusterSearch _pickRandomClusters:withNum:] */

void FUN_107f2f508(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c0d3c80();
  func_0x00010c23b4a0();
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  uVar2 = param_3;
  func_0x00010c25e980(param_3,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f2f568; end: 107f2f59f; -[SCGalleryTagClusterSearch .cxx_destruct] */

void FUN_107f2f568(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107f2f5a0; end: 107f2f5db;  */

void FUN_107f2f5a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111181e08);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113728508;
  puRam0000000113728508 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2f5dc; end: 107f2f5f3;  */

void FUN_107f2f5dc(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113728510;
  ppuRam0000000113728510 = &PTR__OBJC_CLASS___NSConstantArray_111181e20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2f5f4; end: 107f2f5fb; -[SCGalleryTakenNearbySearchRequestItem request] */

undefined8 FUN_107f2f5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f2f5fc; end: 107f2f62b; -[SCGalleryTakenNearbySearchRequestItem setRequest:] */

void FUN_107f2f5fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2f62c; end: 107f2f633; -[SCGalleryTakenNearbySearchRequestItem completionQueue] */

undefined8 FUN_107f2f62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f2f634; end: 107f2f663; -[SCGalleryTakenNearbySearchRequestItem setCompletionQueue:] */

void FUN_107f2f634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2f664; end: 107f2f66b; -[SCGalleryTakenNearbySearchRequestItem completionHandler] */

undefined8 FUN_107f2f664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f2f66c; end: 107f2f673; -[SCGalleryTakenNearbySearchRequestItem setCompletionHandler:] */

void FUN_107f2f66c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107f2f674; end: 107f2f6af; -[SCGalleryTakenNearbySearchRequestItem .cxx_destruct] */

void FUN_107f2f674(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f2f6b0; end: 107f2f6b7; -[SCGalleryTakenNearbyGallerySnapItem gallerySnap] */

undefined8 FUN_107f2f6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f2f6b8; end: 107f2f6e7; -[SCGalleryTakenNearbyGallerySnapItem setGallerySnap:] */

void FUN_107f2f6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2f6e8; end: 107f2f6ef; -[SCGalleryTakenNearbyGallerySnapItem location] */

undefined8 FUN_107f2f6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f2f6f0; end: 107f2f71f; -[SCGalleryTakenNearbyGallerySnapItem setLocation:] */

void FUN_107f2f6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f2f720; end: 107f2f727; -[SCGalleryTakenNearbyGallerySnapItem distance] */

undefined8 FUN_107f2f720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f2f728; end: 107f2f72f; -[SCGalleryTakenNearbyGallerySnapItem setDistance:] */

void FUN_107f2f728(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 107f2f730; end: 107f2f75f; -[SCGalleryTakenNearbyGallerySnapItem .cxx_destruct] */

void FUN_107f2f730(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f2f760; end: 107f2f8d7; -[SCGalleryTakenNearbySearch initWithPerformer:dataObjectContext:galleryProfile:galleryEncryptedDatabase:locationPermissionsManager:locationProvider:] */

undefined1 *
FUN_107f2f760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbb30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f2f8d8; end: 107f2f9ef; -[SCGalleryTakenNearbySearch fetchTakenNearbySearchResultWithQueue:completionHandler:] */

void FUN_107f2f8d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126d8698;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126d86a8;
  _objc_alloc_init();
  func_0x00010c1ebac0();
  func_0x00010c17fc00(puVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c17fbe0(puVar2,param_2,param_4);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107f2f9f0;
  puStack_58 = &UNK_110848bd8;
  lStack_50 = param_1;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bfa8180(uVar3,param_2,&puStack_70,0);
  _objc_release(uVar3);
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f2f9f0; end: 107f2fa37;  */

void FUN_107f2f9f0(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                        *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be91410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__requestLocation_112581ea0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__completeRequestItem_withResult__112556628,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 107f2fa38; end: 107f2fed7; -[SCGalleryTakenNearbySearch getSearchResultTakenNearbyToSnapIds:withGeoTag:] */

void FUN_107f2fa38(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_107f2fed8;
  uStack_120 = 0x107f2fee8;
  uStack_118 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010bf52a60();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar2 == 0) {
    dVar14 = 0.0;
    dVar15 = 0.0;
  }
  else {
    lVar11 = *plStack_170;
    dVar14 = 0.0;
    dVar15 = 0.0;
    lVar8 = 0;
    do {
      uVar9 = 0;
      lVar7 = uVar2 + lVar8;
      do {
        if (*plStack_170 != lVar11) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010befa120(puVar1);
        uVar3 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_1a8 = puVar10;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_107f2fef0;
        puStack_190 = &UNK_11097c0a0;
        puStack_188 = &uStack_140;
        func_0x00010c135bc0();
        _objc_release(uVar3);
        func_0x00010bf51c80(puStack_138[5]);
        func_0x00010bf51c80(puStack_138[5]);
        dVar12 = (double)lVar8;
        lVar8 = lVar8 + 1;
        dVar15 = (dVar13 + dVar12 * dVar15) / (double)lVar8;
        dVar13 = param_2 + dVar12 * dVar14;
        dVar14 = dVar13 / (double)lVar8;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
      uVar2 = param_5;
      func_0x00010bf52a60();
      lVar8 = lVar7;
    } while (uVar2 != 0);
  }
  _objc_release(param_5);
  puVar10 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010c021a60(dVar15,dVar14);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be1a3e0(0x40df6eb9a0000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar10);
  uVar9 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_5;
  func_0x00010bf529e0();
  if (uVar4 < uVar9) {
    uVar9 = param_3;
    func_0x00010be1a3c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010be1a420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_107f44da0(uVar2,&lStack_1b0,&lStack_1b8,uVar3);
    lVar11 = lStack_1b0;
    _objc_retain(lStack_1b0);
    lVar8 = lStack_1b8;
    _objc_retain(lStack_1b8);
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110ec76d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec76d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    lVar7 = lVar11;
    func_0x00010bf529e0();
    if ((lVar7 == 0) || (lVar7 = lVar8, func_0x00010bf529e0(), lVar7 == 0)) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126c3bb8;
      _objc_alloc(PTR_PTR_1126c3bb8);
      func_0x00010c03fe00(0x3f800000);
    }
    _objc_release(puVar6);
    _objc_release(lVar8);
    _objc_release(lVar11);
    _objc_release(uVar2);
    uVar2 = uVar9;
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    lVar8 = 8;
    __Block_object_dispose(&uStack_140);
    __Unwind_Resume();
    *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107f2fed8; end: 107f2feef;  */

void FUN_107f2fed8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f2fef0; end: 107f2ff27;  */

void FUN_107f2fef0(long param_1,undefined8 param_2)

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


