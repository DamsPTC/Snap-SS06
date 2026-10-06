/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d9b99c; end: 105d9b9cb; -[SCPreviewFeatureRotationImpl setSnapCrop:] */

void FUN_105d9b99c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105d9b9cc; end: 105d9ba2f; -[SCPreviewFeatureRotationImpl .cxx_destruct] */

void FUN_105d9b9cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d9ba30; end: 105d9bbef; -[SCPreviewFeatureRotationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9ba30(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112735f98;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf91760();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = (undefined1)uVar3;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c48d0;
  _objc_alloc(PTR_PTR_1126c48d0);
  func_0x00010c040440();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735fac);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d9bbf0; end: 105d9bdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9bbf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_3 + 0x30) != '\x01')) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c48c0;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112735f9c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf70ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c300(puVar2,param_4,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar11 = PTR_PTR_1126c48c8;
    _objc_alloc(PTR_PTR_1126c48c8);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2485a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b8420();
    func_0x00010c0c6700(*(undefined8 *)(param_3 + 0x20));
    lVar3 = lVar1 + _DAT_112735fa0;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112735fa8;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + _DAT_112735fa4;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028320(param_1,param_2,puVar11,param_4,uVar6,lVar7,lVar8,lVar10,puVar2);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105d9bdcc; end: 105d9be37; -[SCPreviewFeatureRotationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9bdcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735fac,0);
  _objc_destroyWeak(param_1 + _DAT_112735fa8);
  _objc_destroyWeak(param_1 + _DAT_112735fa4);
  _objc_destroyWeak(param_1 + _DAT_112735fa0);
  _objc_destroyWeak(param_1 + _DAT_112735f9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735f98);
  return;
}



/* Entry: 105d9be38; end: 105d9beab; -[SCPreviewFeatureScanBlizzardLogger initWithUserTrackedLogger:] */

undefined1 * FUN_105d9be38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed0f8;
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



/* Entry: 105d9beac; end: 105d9bf5b; -[SCPreviewFeatureScanBlizzardLogger logDidDisplayPreviewScanBannerWithId:resultType:] */

void FUN_105d9beac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c48d8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c16f100();
  _objc_release(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c215e40(puVar1,param_3,(long)param_1);
  lVar3 = -(ulong)(param_5 != 1);
  if (param_5 == 2) {
    lVar3 = 1;
  }
  func_0x00010c17dc60(puVar1,param_3,lVar3);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d9bf5c; end: 105d9c01b; -[SCPreviewFeatureScanBlizzardLogger logDidTapPreviewScanBannerWithId:resultType:] */

void FUN_105d9bf5c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c48e0;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c16f100();
  _objc_release(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c215e40(puVar1,param_3,(long)param_1);
  func_0x00010c161fe0(puVar1,param_3,&PTR____CFConstantStringClassReference_110e2a058);
  lVar3 = -(ulong)(param_5 != 1);
  if (param_5 == 2) {
    lVar3 = 1;
  }
  func_0x00010c17dc60(puVar1,param_3,lVar3);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d9c01c; end: 105d9c027; -[SCPreviewFeatureScanBlizzardLogger .cxx_destruct] */

void FUN_105d9c01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d9c028; end: 105d9c1cf; -[SCPreviewFeatureScanImpl initWithScanScopeLauncher:scanConfiguration:scanCodeDecoder:scanNotificationUIScopeExposer:scanNotificationUIScopeServices:configuration:logger:scanScopeServices:] */

undefined1 *
FUN_105d9c028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126ed100;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_10;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_9;
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



/* Entry: 105d9c1d0; end: 105d9c3eb; -[SCPreviewFeatureScanImpl activate] */

void FUN_105d9c1d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  iVar4 = (int)*(undefined8 *)(param_3 + 0x38);
  func_0x00010c14ed00();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (int)*(undefined8 *)(param_3 + 0x38);
  func_0x00010c242400();
  func_0x0001085915d4();
  lVar1 = *(long *)(param_3 + 0x38);
  func_0x00010c242400();
  if (lVar1 != 0x2b) {
    lVar1 = *(long *)(param_3 + 0x38);
    func_0x00010c242400();
    if (lVar1 != 0x2a) {
      lVar1 = *(long *)(param_3 + 0x38);
      func_0x00010c242400();
      if (lVar1 != 9) goto LAB_105d9c238;
    }
  }
  iVar4 = 5;
LAB_105d9c238:
  uVar2 = *(ulong *)(param_3 + 0x38);
  func_0x00010bfbabe0();
  if (((uVar2 & 1) == 0) && (iVar4 == 10)) {
    lVar1 = *(long *)(param_3 + 0x38);
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_3);
      puStack_60 = &uStack_68;
      uStack_68 = 0;
      uVar5 = 0x3032000000;
      uStack_58 = 0x3032000000;
      pcStack_50 = FUN_105d9c3ec;
      uStack_48 = 0x105d9c3fc;
      uStack_40 = 0;
      uVar3 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010bfbbbc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c2d00(*(undefined8 *)(param_3 + 0x38));
      func_0x00010c14e760(uVar3);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010bfbbbc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9ab60(uVar5,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puStack_60[5];
      puStack_60[5] = param_3;
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar3 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105d9c404;
      puStack_80 = &UNK_110850308;
      _objc_copyWeak(auStack_70,auStack_38);
      puStack_78 = &uStack_68;
      func_0x00010007380c(uVar3,&puStack_98);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_70);
      __Block_object_dispose(&uStack_68,8);
      _objc_release(uStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 105d9c3ec; end: 105d9c403;  */

void FUN_105d9c3ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d9c404; end: 105d9c447;  */

void FUN_105d9c404(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdf8760(lVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d9c448; end: 105d9c553; -[SCPreviewFeatureScanImpl _scaledImage:scaledSize:] */

void FUN_105d9c448(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar5 = param_1;
  dVar6 = param_2;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  bVar1 = false;
  if ((dVar5 == param_1) && (bVar1 = false, !NAN(dVar6) && !NAN(param_2))) {
    bVar1 = dVar6 == param_2;
  }
  puVar4 = param_5;
  if (!bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    _objc_alloc_init(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x00010c1f5fe0(0x3ff0000000000000);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c046ac0(param_1,param_2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105d9c554;
    puStack_60 = &UNK_110866440;
    puStack_58 = param_5;
    dStack_50 = param_1;
    dStack_48 = param_2;
    _objc_retain(param_5);
    puVar4 = puVar3;
    func_0x00010bfe91c0(puVar3,param_4,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d9c554; end: 105d9c56b;  */

void FUN_105d9c554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105d9c56c; end: 105d9c573; -[SCPreviewFeatureScanImpl responderChainPriority] */

undefined8 FUN_105d9c56c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d9c574; end: 105d9c5df; -[SCPreviewFeatureScanImpl configureWithView:] */

void FUN_105d9c574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0870;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1d96a0(*(undefined8 *)(param_1 + 0x30),param_2,1);
  func_0x00010befbb60(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9c5e0; end: 105d9c6b3; -[SCPreviewFeatureScanImpl sendActionGuard] */

void FUN_105d9c5e0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d9c6b4;
  puStack_48 = &UNK_11084dd10;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = PTR_PTR_1126afee8;
  func_0x00010c113ca0(PTR_PTR_1126afee8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d9c6b4; end: 105d9c707;  */

void FUN_105d9c6b4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf952a0();
  _objc_release(param_1);
  (**(code **)(param_3 + 0x10))(param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9c708; end: 105d9c83f; -[SCPreviewFeatureScanImpl endScan] */

void FUN_105d9c708(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c150920();
    _objc_release(lVar3);
    _objc_release(uVar1);
    if (lVar4 == 6) {
      _objc_initWeak(auStack_38,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bf84460(uVar5);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d9c840; end: 105d9c86b;  */

void FUN_105d9c840(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d9c86c; end: 105d9c957; -[SCPreviewFeatureScanImpl scanWantsDismiss:] */

void FUN_105d9c86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105d9c958;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d9c958; end: 105d9c983;  */

void FUN_105d9c958(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d9c984; end: 105d9c987; -[SCPreviewFeatureScanImpl scanWantsQueryWithSource:requestedAnalyzerServiceIds:] */

void FUN_105d9c984(void)

{
  return;
}



/* Entry: 105d9c988; end: 105d9ca67; -[SCPreviewFeatureScanImpl _decodeAndPresentBannerIfNeededForImage:] */

void FUN_105d9c988(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = param_3;
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf66e60(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117f558,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105d9ca68;
    puStack_40 = &UNK_1108e8730;
    lStack_38 = param_1;
    func_0x00010c297260(uVar2,param_2,&puStack_58,0);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d9ca68; end: 105d9cbeb;  */

void FUN_105d9ca68(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x70);
    *(long *)(lVar2 + 0x70) = param_2;
    _objc_release(uVar1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105d9c3ec;
    uStack_40 = 0x105d9c3fc;
    uStack_38 = 0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105d9c3ec;
    uStack_70 = 0x105d9c3fc;
    uStack_68 = 0;
    func_0x00010c0bcec0(param_2);
    if ((puStack_58[5] != 0) && (puStack_88[5] != 0)) {
      func_0x00010be47fa0(*(undefined8 *)(param_1 + 0x20));
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d9cbec; end: 105d9cc57;  */

void FUN_105d9cbec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c48e8;
  func_0x00010c244f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_113316300;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(PTR_PTR_113316300);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d9cc58; end: 105d9ccef;  */

void FUN_105d9cc58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c48e8;
  func_0x00010c0f6420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11cda0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_2);
  puVar1 = PTR_PTR_113316308;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(PTR_PTR_113316308);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d9ccf0; end: 105d9cde3; -[SCPreviewFeatureScanImpl _launchPreviewBannerWithMetadata:] */

void FUN_105d9ccf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105d9cde4;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d9cde4; end: 105d9ce67;  */

void FUN_105d9cde4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010bf23400(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x20),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d9ce68; end: 105d9cfd3; -[SCPreviewFeatureScanImpl _launchScanWithImage:imageMetadata:analyzerIds:] */

void FUN_105d9ce68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((((param_3 != 0) && (param_5 != 0)) && (*(long *)(param_1 + 0x30) != 0)) &&
     (uVar1 = *(ulong *)(param_1 + 0x10), uVar1 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076220();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(auStack_48,param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105d9cfd4;
      puStack_70 = &UNK_110850cf8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      uStack_68 = param_4;
      _objc_retain(param_3);
      lStack_60 = param_3;
      _objc_retain(param_5);
      lStack_58 = param_5;
      func_0x0001000d76cc("APPSTORE",&puStack_88);
      _objc_release(lStack_58);
      _objc_release(lStack_60);
      _objc_release(uStack_68);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d9cfd4; end: 105d9d2cf;  */

void FUN_105d9cfd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined **)(lVar1 + 0x50) = puVar2;
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    uVar10 = *(undefined8 *)(lVar1 + 0x30);
    uVar11 = *(undefined8 *)(lVar1 + 0x50);
    puVar2 = PTR_PTR_1126b5f78;
    func_0x00010c104620(PTR_PTR_1126b5f78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23f80(uVar9,param_2,uVar10,uVar11,puVar2,6,0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bcc0();
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b3140;
    func_0x00010bf30ee0(PTR_PTR_1126b3140,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3140;
    puStack_78 = puVar3;
    func_0x00010c277300(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010befa120(puVar2);
    }
    puVar4 = PTR_PTR_1126b30f8;
    func_0x00010bfe94a0(PTR_PTR_1126b30f8,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3100;
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bfe9500(puVar3,param_2,puVar4,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b5f70;
    _objc_alloc(PTR_PTR_1126b5f70);
    puVar8 = puVar7;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c400(puVar7,param_2,puVar8,puVar5,7,puVar6);
    _objc_release(puVar8);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x50),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c076220();
  _objc_release(uVar10);
  if ((int)uVar9 != 0) {
    func_0x00010c0f3ce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105d9d2d0; end: 105d9d347; -[SCPreviewFeatureScanImpl _dimissPreviewViewController] */

void FUN_105d9d2d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c0f3ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105d9d348; end: 105d9d373; -[SCPreviewFeatureScanImpl _detachUI] */

void FUN_105d9d348(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x30),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 105d9d374; end: 105d9d37b; -[SCPreviewFeatureScanImpl notificationDidPresentWithId:resultType:] */

void FUN_105d9d374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a4ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_logDidDisplayPreviewScanBannerWi_112606dc8);
  return;
}



/* Entry: 105d9d37c; end: 105d9d45b; -[SCPreviewFeatureScanImpl notificationDidTapWithId:resultType:] */

void FUN_105d9d37c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0a4f00(*(undefined8 *)(param_1 + 0x58));
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuVar1 = &PTR_PTR_113316300;
  if (param_4 != 1) {
    ppuVar1 = &PTR_PTR_113316308;
  }
  puVar5 = *ppuVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puStack_50 = puVar5;
  _objc_retain(puVar5);
  func_0x00010bf0a140(puVar4,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48380(param_1,param_2,uVar2,uVar3,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105d9d45c; end: 105d9d45f; -[SCPreviewFeatureScanImpl notificationDidDismiss] */

void FUN_105d9d45c(void)

{
  return;
}



/* Entry: 105d9d460; end: 105d9d477; -[SCPreviewFeatureScanImpl parentViewControllerDelegate] */

void FUN_105d9d460(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d9d478; end: 105d9d483; -[SCPreviewFeatureScanImpl setParentViewControllerDelegate:] */

void FUN_105d9d478(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105d9d484; end: 105d9d54b; -[SCPreviewFeatureScanImpl .cxx_destruct] */

void FUN_105d9d484(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 105d9d54c; end: 105d9d64b; -[SCPreviewFeatureScanServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9d54c(long param_1)

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
  puVar2 = PTR_PTR_1126c48f0;
  _objc_alloc(PTR_PTR_1126c48f0);
  func_0x00010c041720();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112735ff0));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d9d64c; end: 105d9d68b;  */

void FUN_105d9d64c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d9d68c; end: 105d9d893; -[SCPreviewFeatureScanServicesEntryPoint _scan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9d68c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126c48f8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112735ff4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = param_1 + _DAT_112735ff8;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar4 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126c4900;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112735ffc;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c14f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112736000;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010c14ea60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112736004;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf3ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11273600c;
  _objc_loadWeakRetained(lVar12);
  param_1 = param_1 + _DAT_112736010;
  _objc_loadWeakRetained();
  func_0x00010c0418e0(puVar6);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d9d894; end: 105d9d927; -[SCPreviewFeatureScanServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9d894(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736008,0);
  _objc_destroyWeak(param_1 + _DAT_11273600c);
  _objc_destroyWeak(param_1 + _DAT_112735ff4);
  _objc_destroyWeak(param_1 + _DAT_112736000);
  _objc_destroyWeak(param_1 + _DAT_112736004);
  _objc_storeStrong(param_1 + _DAT_112735ff0,0);
  _objc_destroyWeak(param_1 + _DAT_112736010);
  _objc_destroyWeak(param_1 + _DAT_112735ffc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735ff8);
  return;
}



/* Entry: 105d9d928; end: 105d9d99b; -[SCScanCodeDecoderServices initWithCodeDecoder:] */

undefined1 * FUN_105d9d928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed108;
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



/* Entry: 105d9d99c; end: 105d9d9a3; -[SCScanCodeDecoderServices codeDecoder] */

undefined8 FUN_105d9d99c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d9d9a4; end: 105d9d9af; -[SCScanCodeDecoderServices .cxx_destruct] */

void FUN_105d9d9a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d9d9b0; end: 105d9e26f; -[SCPreviewFeatureSendingImpl initWithUserSession:previewScopeServices:drawing:autoCaptions:webAttachment:circumstanceEngine:commerceSticker:userTagging:storiesLegacySnapInfoCollector:memoriesEncryptedDatabase:snapRecoveryPersistence:batchCapture:caption:directorMode:infoSticker:logging:multiSnap:music:timer:videoPlayback:snapCrop:stickerContainer:userNotice:voiceover:snapVideoFilterFactory:snapVideoFilterCoordinator:lensLoggerServices:overlayFormatServices:commonLoggingServices:configuration:previewLegacyServices:galleryStorySaver:previewLoggingServices:previewABServices:remixPreviewServices:cTLensServices:templateServices:tinsel:locationProvider:filterMetadataProvider:geoFilterProvider:venueFilterController:pollServices:genAIDreamsService:stickerInjector:] */

undefined8 *
FUN_105d9d9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  puStack_70 = PTR_PTR_1126ed110;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_8);
    _objc_retain(param_5);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[4];
    puVar1[4] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[8];
    puVar1[8] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[9];
    puVar1[9] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_39;
    _objc_release(uVar2);
    uVar2 = param_36;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_47;
    _objc_release(uVar2);
  }
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105d9e270; end: 105d9e277; -[SCPreviewFeatureSendingImpl responderChainPriority] */

undefined8 FUN_105d9e270(void)

{
  return 0x7fffffff;
}



/* Entry: 105d9e278; end: 105d9eb37; -[SCPreviewFeatureSendingImpl initializeSendingState:] */

void FUN_105d9e278(undefined *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83e60();
  _objc_release(uVar2);
  func_0x00010be3bae0(param_1,param_2,param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06d080();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c233c60();
    if (iVar1 != 0) {
      puVar6 = param_1;
      func_0x00010beb5900(param_1,param_2,param_3);
      puVar12 = *(undefined **)(param_1 + 0x20);
      func_0x00010c0d2100(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar12;
      if ((int)puVar6 == 0) {
        func_0x00010c26f640();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfb4f40();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar12);
      puVar6 = *(undefined **)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c0d2440();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar12;
      func_0x00010c15e0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar8;
      _objc_release(uVar2);
      goto LAB_105d9e5dc;
    }
    puVar3 = PTR_PTR_1126c4908;
    _objc_alloc(PTR_PTR_1126c4908);
    uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c0522a0();
    puVar6 = param_1;
    func_0x00010bde1500();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      uVar16 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar16;
      func_0x00010c255480();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar2;
      func_0x00010c0d3c80();
      func_0x00010c20bc80(puVar3,param_2,uVar10);
      _objc_release(uVar10);
      _objc_release(uVar2);
      _objc_release(uVar16);
      puVar7 = *(undefined **)(param_1 + 0x80);
      func_0x00010c269d40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010bf30960();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar12;
      func_0x00010c0d3c80();
      func_0x00010c178c80(puVar3,param_2,puVar8);
    }
    else {
      puVar7 = puVar6;
      func_0x00010bfcd140();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar4 = puVar7;
      func_0x00010bf308c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar12,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c2553e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar8,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar6;
      func_0x00010c09df80();
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      puVar5 = puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar14 = *plStack_140;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_140 != lVar14) {
              _objc_enumerationMutation(puVar4);
            }
            uVar10 = *(undefined8 *)(lStack_148 + (long)puVar13 * 8);
            uVar2 = uVar10;
            func_0x00010bf308c0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar12,param_2,uVar2);
            _objc_release(uVar2);
            func_0x00010c2553e0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar8,param_2,uVar10);
            _objc_release(uVar10);
            puVar13 = puVar13 + 1;
          } while (puVar5 != puVar13);
          puVar5 = puVar4;
          func_0x00010bf52a60(puVar4,param_2,&uStack_150,auStack_f0,0x10);
        } while (puVar5 != (undefined *)0x0);
      }
      puVar5 = puVar12;
      func_0x00010c0d3c80(puVar12);
      func_0x00010c178c80(puVar3,param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = puVar8;
      func_0x00010c0d3c80(puVar8);
      func_0x00010c20bc80(puVar3,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar8);
    _objc_release(puVar12);
    _objc_release(puVar7);
    uVar16 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c1ca160(puVar3,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar16);
    uVar11 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf51e00();
    uVar16 = uVar10;
    func_0x000108454a7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2240c0(puVar3,param_2,uVar16);
    _objc_release(uVar16);
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar11);
    uVar16 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c16cc80(puVar3,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar16);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09a760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be380(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1115c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1e40(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf16100(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f3c0(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    uVar16 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010c0cece0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c1c8720(puVar3,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar16);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010c2a0fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8740(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar10);
    uVar16 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010bf07e20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c297ce0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar10,param_2,&PTR____CFConstantStringClassReference_110f274f8);
    puVar12 = puVar3;
    func_0x00010bfaee40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5920();
    _objc_release(puVar12);
    uVar2 = uVar16;
    func_0x00010bf51e00(uVar16);
    puVar12 = puVar3;
    func_0x00010bfaee40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220880();
    _objc_release(puVar12);
    _objc_release(uVar2);
    puVar12 = param_1;
    func_0x00010beb5920();
    if ((int)puVar12 == 0) {
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(param_1 + 0x188);
      func_0x00010bf529e0();
    }
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (0 < lVar14) {
      do {
        func_0x00010befa120(puVar12,param_2,puVar3);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar8 = puVar12;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar12);
    _objc_release(uVar16);
    _objc_release(uVar10);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf16ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c15e0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = *(undefined **)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar8;
LAB_105d9e5dc:
    _objc_release(puVar12);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07e920();
  if (iVar1 != 0) {
    lVar9 = *(long *)(param_1 + 0x20);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    if (lVar14 != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x188);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2440e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010bf982e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbf4e0(uVar15,param_2,uVar2,uVar16);
      _objc_release(uVar16);
      _objc_release(uVar11);
      goto LAB_105d9eae4;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x188);
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010bf982e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf4c0(uVar16,param_2,uVar2);
LAB_105d9eae4:
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x188);
  *(undefined8 *)(param_3 + 0x188) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x170);
  *(undefined8 *)(param_3 + 0x170) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d9eb38; end: 105d9eb73; -[SCPreviewFeatureSendingImpl clearSendingState] */

void FUN_105d9eb38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d9eb74; end: 105d9ec87; -[SCPreviewFeatureSendingImpl updateSendingMusicSelection:] */

void FUN_105d9eb74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c1ca160(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be78290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105d9ec88; end: 105d9ec8f; -[SCPreviewFeatureSendingImpl prepareEphemeralMediaListForSending] */

void FUN_105d9ec88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__prepareEphemeralMediaList__11257ba40,*(undefined8 *)(param_1 + 0x188));
  return;
}



/* Entry: 105d9ec90; end: 105d9ec93; -[SCPreviewFeatureSendingImpl prepareEphemeralMediaListForSaving:] */

void FUN_105d9ec90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareEphemeralMediaList__11257ba40);
  return;
}



/* Entry: 105d9ec94; end: 105d9eceb; -[SCPreviewFeatureSendingImpl sendingWillStart] */

void FUN_105d9ec94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb7720();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb76e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d9ecec; end: 105d9ecf7; -[SCPreviewFeatureSendingImpl sendDependentTasksCompleted:] */

void FUN_105d9ecec(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bea9f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setValuesOnFinalSendingStates__112588188);
  return;
}



/* Entry: 105d9ecf8; end: 105d9eef3; -[SCPreviewFeatureSendingImpl setContextHintForInteractiveStickers:prepareBlock:] */

void FUN_105d9ecf8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar2 = *(long *)(param_1 + 0x188);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar9 = 0;
      do {
        uVar3 = *(ulong *)(param_1 + 0x28);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar4 = *(undefined8 *)(param_1 + 0x188);
        func_0x00010bf98360(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar3 = uVar8;
        func_0x00010bf529e0();
        if (uVar3 != 0) {
          uVar3 = 0;
          do {
            uVar6 = uVar8;
            func_0x00010c0dfd40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            (**(code **)(param_3 + 0x10))(param_3,uVar6);
            if ((int)lVar2 != 0) {
              lVar2 = param_4;
              (**(code **)(param_4 + 0x10))(param_4,uVar5,uVar6,puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (lVar2 != 0) {
                func_0x00010c280560(lVar2);
                func_0x00010c0df780(puVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar1);
                _objc_release(puVar7);
              }
              func_0x00010c1d04c0(uVar8);
              _objc_release(lVar2);
            }
            _objc_release(uVar6);
            uVar3 = uVar3 + 1;
            uVar6 = uVar8;
            func_0x00010bf529e0();
          } while (uVar3 < uVar6);
        }
        _objc_release(uVar5);
        _objc_release(uVar8);
        uVar9 = uVar9 + 1;
        uVar8 = *(ulong *)(param_1 + 0x188);
        func_0x00010bf529e0();
      } while (uVar9 < uVar8);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9eef4; end: 105d9f34f; -[SCPreviewFeatureSendingImpl _initializeSendingEphemeralMediaList:] */

void FUN_105d9eef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  _objc_retain(param_3);
  puVar15 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar15);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf08000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c4798;
  func_0x00010c0b7b40(PTR_PTR_1126c4798,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010c0811c0();
  if ((int)puVar4 == 0) {
    puVar4 = puVar15;
    func_0x00010c06d080();
    puVar5 = puVar15;
    if ((int)puVar4 == 0) {
      puVar4 = puVar15;
      func_0x00010c070a20();
      if ((int)puVar4 == 0) {
        lVar8 = param_1;
        func_0x00010beb5900(param_1,param_2,param_3);
        puVar4 = PTR_PTR_1126c4290;
        _objc_alloc();
        if ((int)lVar8 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x110);
          puVar5 = *(undefined **)(param_1 + 0xe0);
          func_0x00010c269d40(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c017380(puVar4,param_2,uVar1,puVar5,*(undefined8 *)(param_1 + 0xe8));
          goto LAB_105d9f2a4;
        }
        func_0x00010bf12b80(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar15;
        func_0x00010c0d2100();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010bfb4f40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_1 + 0x110);
        uVar7 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_1 + 0xe8);
        puVar10 = puVar15;
        func_0x00010bf311e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar15;
        func_0x00010c243320();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar13;
        func_0x00010c0d2440();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar15;
        func_0x00010c07e920();
        lVar8 = param_1 + 0x18;
        _objc_loadWeakRetained();
        func_0x00010bfeef60(puVar4,param_2,puVar5,puVar9,uVar14,uVar7,uVar16,puVar10,puVar11,uVar1,
                            puVar3,(char)puVar12);
        _objc_release(lVar8);
        _objc_release(uVar1);
        _objc_release(uVar13);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(uVar7);
        _objc_release(puVar9);
      }
      else {
        puVar5 = *(undefined **)(param_1 + 0x50);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c4910;
        _objc_opt_new(PTR_PTR_1126c4910);
        puVar4 = puVar5;
        func_0x00010c1093c0(puVar5,param_2,0,puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar4 = PTR_PTR_1126c4290;
      _objc_alloc();
      func_0x00010bf167e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x110);
      puVar6 = *(undefined **)(param_1 + 0xe0);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + 0xe8);
      puVar9 = puVar15;
      func_0x00010bf311e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2440e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar7;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + 0xf8);
      lVar8 = param_1 + 0x18;
      _objc_loadWeakRetained();
      func_0x00010bff7420(puVar4,param_2,puVar5,uVar13,puVar6,uVar14,puVar9,uVar1,uVar16,lVar8);
      _objc_release(lVar8);
      _objc_release(uVar1);
      _objc_release(uVar7);
      _objc_release(puVar9);
    }
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010beb5920(param_1);
    puVar6 = PTR_PTR_1126c4910;
    _objc_opt_new(PTR_PTR_1126c4910);
    puVar4 = puVar5;
    func_0x00010c1093c0(puVar5,param_2,lVar8,puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
LAB_105d9f2a4:
  _objc_release(puVar5);
  puVar5 = puVar15;
  func_0x00010c07e620(puVar15);
  func_0x00010c1b13a0(puVar4,param_2,puVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined **)(param_1 + 0x188) = puVar4;
  _objc_retain(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar15);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9f350; end: 105da1967; -[SCPreviewFeatureSendingImpl _prepareEphemeralMediaList:] */

void FUN_105d9f350(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  undefined *puVar33;
  long lVar34;
  undefined **ppuVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lStack_3c8;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  ulong uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  ulong uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  ulong uStack_238;
  long lStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06d080();
  if (iVar1 == 0) {
    lVar3 = param_1;
    func_0x00010beb5900();
    if ((int)lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5fac0();
      func_0x00010c14a2a0(uVar2);
      _objc_release(uVar4);
      goto LAB_105d9f464;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fa80();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fac0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf16ae0();
LAB_105d9f464:
    _objc_release(uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08f640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf42b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb3e0(param_3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c0b3920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284180();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c0b3920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284120();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c0b3920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(param_3);
  func_0x00010c2b4200(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  lVar7 = *(long *)(param_1 + 0x118);
  func_0x00010c254980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c0fbac0();
  _objc_release(lVar7);
  if (0 < lVar3) {
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c254980(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(uVar5);
    func_0x00010c2551a0(uVar5);
    uVar2 = uVar4;
    func_0x00010c2549a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c07a0(param_3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dad4b8;
  func_0x00010bfbabe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e2a0d8;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  puStack_90 = puVar8;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102ac0();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb3e0(param_3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(puVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c0b3920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f540(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar2 = uVar5;
  func_0x00010c272420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfddcc0();
  if ((int)uVar4 != 0) {
    uVar4 = uVar2;
    func_0x00010bf63640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bd60(param_3);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar11);
  func_0x00010c1a2bc0(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar11;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar13;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar23;
  func_0x00010c06aee0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09a760(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar20;
  func_0x0001084c1c3c(uVar20,uVar14,uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166200(param_3);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar12);
  puVar9 = PTR_PTR_1126c4538;
  uVar11 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c255460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar11);
  uVar20 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar21;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar20;
  func_0x00010bf00540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(uVar20);
  uVar36 = param_3;
  func_0x00010bfb1160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c131e40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010c11ee60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6d60(uVar36);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar36);
  uVar36 = param_3;
  func_0x00010bfb1160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c131e40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010c134520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb8a0(uVar36);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar36);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010c11ea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_105da1968;
  puStack_240 = &UNK_1108e8790;
  _objc_retain(param_3);
  puStack_280 = puVar8;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_105da19a8;
  puStack_268 = &UNK_1108e87c0;
  uStack_238 = param_3;
  _objc_retain(param_3);
  uStack_260 = param_3;
  func_0x00010c0bd380(uVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c129860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar25 = *(long *)(param_1 + 0x20);
    func_0x00010c129720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar25;
    func_0x00010c129860();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(lVar3);
    _objc_release(lVar25);
    _objc_release(lVar7);
    if (lVar3 != 0) goto LAB_105d9fcf8;
  }
  else {
    _objc_retain();
    _objc_release(lVar3);
    _objc_release(lVar7);
LAB_105d9fcf8:
    uVar20 = uVar11;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(lVar3);
    uVar11 = uVar20;
  }
  func_0x00010c1ce7e0(param_3);
  lVar7 = *(long *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c293d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(uVar21);
  _objc_release(lVar7);
  lVar7 = lVar3;
  func_0x00010c0e00e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar3;
  func_0x00010c0e00e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar3;
  func_0x00010c0e00e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a40(param_3);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar7);
  uVar21 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010c275ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ac0(param_3);
  _objc_release(uVar20);
  _objc_release(uVar21);
  func_0x00010be76220(param_1);
  uVar20 = uVar5;
  func_0x00010bf93ae0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a40(param_3);
  _objc_release(uVar20);
  func_0x00010bfbabe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c176700(param_3);
  uVar20 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  func_0x00010c1d6440(param_3);
  _objc_release(uVar20);
  uVar36 = param_3;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar36;
  func_0x00010bfbd7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar36);
  if (uVar31 == 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df220(param_3);
    _objc_release(uVar20);
    _objc_release(uVar21);
    uVar24 = *(ulong *)(param_1 + 0x10);
    func_0x00010c240640(uVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar36;
    func_0x00010bf30e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179000(param_3);
    _objc_release(uVar31);
    _objc_release(uVar36);
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2440e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar23;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puStack_2a8 = puVar8;
    uStack_2a0 = 0xc2000000;
    uStack_298 = 0x105da19b0;
    puStack_290 = &UNK_1108e87f0;
    _objc_retain(param_3);
    uStack_288 = param_3;
    func_0x00010c135bc0(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar23);
    _objc_release(uVar22);
    uVar24 = uStack_288;
  }
  _objc_release(uVar24);
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c131e40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010c0fd0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc380(param_3);
  _objc_release(uVar20);
  _objc_release(uVar21);
  uVar36 = param_3;
  func_0x00010c078080();
  if ((uVar36 & 1) == 0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = *(long *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar25;
    func_0x00010bf2fd60();
    _objc_release(lVar25);
    if (lVar7 != 0) {
      uVar21 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar21;
      func_0x00010beffc20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar10);
      _objc_release(uVar20);
      _objc_release(uVar21);
      uVar23 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar23;
      func_0x00010bf30960();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x0001084111c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20cce0(param_3);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar23);
    }
    uVar21 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c253a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar10);
    _objc_release(uVar20);
    _objc_release(uVar21);
    puVar26 = puVar10;
    func_0x00010bf529e0();
    if (puVar26 != (undefined *)0x0) {
      puVar26 = puVar10;
      func_0x000108e225bc(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178ac0(param_3);
      _objc_release(puVar26);
    }
    _objc_release(puVar10);
  }
  uVar36 = param_3;
  func_0x00010c078080();
  if ((uVar36 & 1) == 0) {
    lVar25 = *(long *)(param_1 + 0xd8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar25;
    func_0x00010bf0d6c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      lVar30 = param_1;
      func_0x00010be9dea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar32 = lVar30;
      func_0x00010c28f360();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(lVar32);
      _objc_release(lVar30);
    }
    else {
      _objc_retain(lVar7);
      lVar32 = lVar7;
    }
    _objc_release(lVar7);
    _objc_release(lVar25);
    func_0x00010c16b3c0(param_3);
    _objc_release(lVar32);
  }
  uVar20 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  func_0x00010c1ac2c0(param_3);
  _objc_release(uVar20);
  lVar7 = param_1;
  func_0x00010beb5920();
  if ((int)lVar7 != 0) {
    func_0x00010c1ac2c0(param_3);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075080();
  if (iVar1 == 0) {
    uVar31 = *(ulong *)(param_1 + 0x10);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar31;
    func_0x00010bf926c0();
    if ((uVar36 & 1) == 0) {
      func_0x00010bf0f0e0();
    }
    else {
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c240000(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdc700();
      _objc_release(uVar20);
    }
    _objc_release(uVar31);
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2440e0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar21;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5fa124();
      _objc_release(uVar20);
      _objc_release(uVar21);
    }
    func_0x00010c21acc0(param_3);
    uVar36 = param_3;
    func_0x00010c078080();
    if ((uVar36 & 1) == 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c276200();
      goto LAB_105da04a4;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2440e0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar21;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5fa124();
      _objc_release(uVar20);
      _objc_release(uVar21);
    }
    func_0x00010c21acc0(param_3);
    uVar20 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe75c0();
LAB_105da04a4:
    func_0x00010c214bc0(param_3);
    _objc_release(uVar20);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06d080();
  if (iVar1 != 0) {
    uVar36 = param_3;
    func_0x00010bf98360();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar36;
    func_0x00010bf529e0();
    _objc_release(uVar36);
    if (uVar31 != 0) {
      uVar36 = 0;
      do {
        uVar31 = param_3;
        func_0x00010bf98360(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar31;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar31);
        uVar27 = *(ulong *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar27;
        func_0x00010c14bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar31;
        func_0x00010c1583a0();
        _objc_release(uVar31);
        _objc_release(uVar27);
        if ((long)uVar28 < 0) {
LAB_105da0618:
          func_0x00010c21acc0(uVar24);
        }
        else {
          uVar29 = *(ulong *)(param_1 + 0x20);
          func_0x00010bf167e0();
          _objc_retainAutoreleasedReturnValue();
          uVar31 = uVar29;
          func_0x00010c1585e0();
          _objc_retainAutoreleasedReturnValue();
          uVar27 = uVar31;
          func_0x00010bf529e0();
          _objc_release(uVar31);
          _objc_release(uVar29);
          if (uVar27 <= uVar28) goto LAB_105da0618;
          uVar22 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf167e0();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar22;
          func_0x00010c1585e0();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar20;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar20);
          _objc_release(uVar22);
          uVar20 = uVar21;
          func_0x00010c083320();
          if ((int)uVar20 != 0) {
            func_0x00010bfd4500();
          }
          func_0x00010c21acc0(uVar24);
          _objc_release(uVar21);
        }
        uVar31 = uVar24;
        func_0x00010bf42a00(uVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80(uVar24);
        func_0x00010c2b3b00(uVar31);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar31);
        _objc_release(uVar24);
        uVar36 = uVar36 + 1;
        uVar31 = param_3;
        func_0x00010bf98360();
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar31;
        func_0x00010bf529e0();
        _objc_release(uVar31);
      } while (uVar36 < uVar24);
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010806607c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dae0(param_3);
  _objc_release(uVar20);
  _objc_release(uVar21);
  func_0x00010c243400(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c2056c0(param_3);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf680c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176420(param_3);
  _objc_release(uVar20);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c243400();
  if (lVar7 == 0x11) {
    lVar30 = *(long *)(param_1 + 0x20);
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar30;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar7;
    func_0x00010c0dfa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar30);
    if (lVar25 != 0) {
      lVar30 = *(long *)(param_1 + 0xd8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar30;
      func_0x00010bf0d6c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        lVar32 = param_1;
        func_0x00010be9dea0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar34 = lVar32;
        func_0x00010c28f360();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_release(lVar34);
        _objc_release(lVar32);
      }
      else {
        _objc_retain(lVar7);
        lVar34 = lVar7;
      }
      _objc_release(lVar7);
      _objc_release(lVar30);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf680c0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar21;
      func_0x00010bf05000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204ae0(param_3);
      _objc_release(uVar20);
      _objc_release(uVar21);
      _objc_release(lVar34);
    }
    _objc_release(lVar25);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010bf3f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf3f860(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168e40(param_3);
    _objc_release(uVar20);
  }
  lVar25 = *(long *)(param_1 + 0x20);
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar25;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar25);
  if (lVar7 != 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf680c0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60(param_3);
    _objc_release(uVar20);
    _objc_release(uVar21);
  }
  lVar25 = *(long *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar25;
  func_0x00010c255320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = lVar7;
  func_0x00010bf529e0();
  if (lVar25 != 0) {
    lVar25 = lVar7;
    func_0x000100504554(lVar7,&PTR___NSConcreteGlobalBlock_1108e8840);
    func_0x00010c175fc0(param_3);
    _objc_release(lVar25);
  }
  lVar25 = *(long *)(param_1 + 0x188);
  func_0x00010bf529e0();
  if (lVar25 != 0) {
    uVar36 = 0;
    do {
      uVar21 = *(undefined8 *)(param_1 + 0x188);
      func_0x00010bf98360(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar21;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      lVar30 = *(long *)(param_1 + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar30;
      func_0x00010bef0d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar21 = uVar20;
      if (lVar25 == 0) {
        lVar32 = *(long *)(param_1 + 0x20);
        func_0x00010c134300();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar32;
        func_0x00010c0d3a00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar32);
        if (lVar25 != 0) {
          func_0x00010841fa68(uVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar32 = *(long *)(param_1 + 0x20);
          func_0x00010c134300(lVar32);
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar32;
          func_0x00010c0d3a00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ca400(uVar21);
          _objc_release(lVar25);
          goto LAB_105da0ab0;
        }
      }
      else {
        func_0x00010841fa68(uVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar32 = lVar30;
        func_0x00010bef0d20(lVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ca160(uVar21);
LAB_105da0ab0:
        _objc_release(lVar32);
        _objc_release(uVar21);
      }
      uVar21 = uVar20;
      func_0x00010841fa68(uVar20);
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar30;
      func_0x00010c2553e0(lVar30);
      _objc_retainAutoreleasedReturnValue();
      lVar32 = lVar25;
      func_0x00010808d58c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca2e0(uVar21);
      _objc_release(lVar32);
      _objc_release(lVar25);
      _objc_release(uVar21);
      uVar21 = uVar20;
      func_0x00010841fa68(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16bea0();
      _objc_release(uVar21);
      _objc_release(lVar30);
      _objc_release(uVar20);
      uVar36 = uVar36 + 1;
      uVar31 = *(ulong *)(param_1 + 0x188);
      func_0x00010bf529e0();
    } while (uVar36 < uVar31);
  }
  lVar25 = *(long *)(param_1 + 0x20);
  func_0x00010bf105c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar25 != 0) {
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf105c0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c640(param_3);
    _objc_release(uVar20);
  }
  lVar30 = *(long *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar30;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar30);
  if (lVar25 != 0) {
    uVar22 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar22;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar23;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072080(uVar20);
    _objc_release(uVar21);
    _objc_release(uVar23);
    _objc_release(uVar20);
    _objc_release(uVar22);
    func_0x00010c1ee860(param_3);
  }
  lVar25 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar25;
  func_0x00010bf529e0();
  _objc_release(lVar25);
  if (lVar30 != 0) {
    uVar22 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010c1299a0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c1299e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1299c0();
    func_0x00010c21e2e0(param_3);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar22);
  }
  lVar30 = *(long *)(param_1 + 0x20);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar30;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar25 == 0) {
    lVar32 = *(long *)(param_1 + 0x20);
    func_0x00010c129720();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar32;
    func_0x00010c247b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(lVar25);
    _objc_release(lVar32);
    _objc_release(lVar30);
    if (lVar25 == 0) goto LAB_105da0e5c;
  }
  else {
    _objc_retain();
    _objc_release(lVar25);
    _objc_release(lVar30);
  }
  lVar32 = *(long *)(param_1 + 0x20);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar32;
  func_0x00010c129a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar30 == 0) {
    lVar38 = *(long *)(param_1 + 0x20);
    func_0x00010c129720(lVar38);
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar38;
    func_0x00010c247de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(lVar34);
    _objc_release(lVar38);
  }
  else {
    _objc_retain(lVar30);
    lVar34 = lVar30;
  }
  _objc_release(lVar30);
  _objc_release(lVar32);
  lVar32 = *(long *)(param_1 + 0x20);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar32;
  func_0x00010c1297c0();
  if (lVar30 == 0) {
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c129720(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1297c0();
    _objc_release(uVar20);
  }
  _objc_release(lVar32);
  func_0x00010c1ea140(param_3);
  _objc_release(lVar34);
  _objc_release(lVar25);
LAB_105da0e5c:
  lVar30 = *(long *)(param_1 + 0x20);
  func_0x00010c134300();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar30;
  func_0x00010c1343c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar30);
  if (lVar25 != 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c134300(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c1343c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb7e0(param_3);
    _objc_release(uVar20);
    _objc_release(uVar21);
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar32 = *(long *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar32;
  func_0x00010c1592e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar25;
  func_0x00010bf529e0();
  _objc_release(lVar25);
  _objc_release(lVar32);
  if (lVar30 != 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c1592e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280520(puVar10);
    _objc_release(uVar20);
    _objc_release(uVar21);
  }
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar30 = *(long *)(param_1 + 0x20);
  func_0x00010c22cfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar30;
  func_0x00010bf9ba40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lStack_3c8 = lVar25;
  func_0x00010bf52a60();
  if (lStack_3c8 != 0) {
    lVar30 = *plStack_2e0;
    do {
      lVar32 = 0;
      do {
        if (*plStack_2e0 != lVar30) {
          _objc_enumerationMutation(lVar25);
        }
        lVar38 = *(long *)(lStack_2e8 + lVar32 * 8);
        lVar34 = lVar38;
        func_0x00010bf422c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar34 != 0) {
          lVar34 = lVar38;
          func_0x00010bf422c0(lVar38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280520(puVar10);
          _objc_release(lVar34);
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          func_0x00010bf422c0();
          _objc_retainAutoreleasedReturnValue();
          lVar34 = lVar38;
          func_0x00010bf52a60();
          if (lVar34 != 0) {
            lVar39 = *plStack_320;
            do {
              lVar37 = 0;
              do {
                if (*plStack_320 != lVar39) {
                  _objc_enumerationMutation(lVar38);
                }
                uVar20 = *(undefined8 *)(lStack_328 + lVar37 * 8);
                puStack_358 = puVar8;
                uStack_350 = 0xc2000000;
                uStack_348 = 0x105da1a04;
                puStack_340 = &UNK_1108e8860;
                _objc_retain(puVar26);
                puStack_338 = puVar26;
                func_0x00010c0bf620(uVar20);
                _objc_release(puStack_338);
                lVar37 = lVar37 + 1;
              } while (lVar34 != lVar37);
              lVar34 = lVar38;
              func_0x00010bf52a60();
            } while (lVar34 != 0);
          }
          _objc_release(lVar38);
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 != lStack_3c8);
      lStack_3c8 = lVar25;
      func_0x00010bf52a60();
    } while (lStack_3c8 != 0);
  }
  _objc_release(lVar25);
  puVar33 = puVar26;
  func_0x00010bf529e0();
  if (puVar33 != (undefined *)0x0) {
    func_0x00010c1ff8c0(param_3);
  }
  puVar33 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar30 = *(long *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar30;
  func_0x00010bf4f3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = lVar25;
  func_0x00010bf529e0();
  if (lVar30 != 0) {
    func_0x00010befa160(puVar33);
  }
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010bf926c0();
  _objc_release(uVar21);
  if ((int)uVar20 == 0) {
    lVar30 = *(long *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar30;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar30);
    lVar30 = lVar34;
    func_0x00010bf52a60();
    lVar32 = lRam0000000000000000;
    while (lVar30 != 0) {
      lVar38 = 0;
      do {
        if (lRam0000000000000000 != lVar32) {
          _objc_enumerationMutation(lVar34);
        }
        lVar39 = *(long *)(lVar38 * 8);
        func_0x000108e36f3c();
        _objc_retainAutoreleasedReturnValue();
        if (lVar39 != 0) {
          func_0x00010befa120(puVar33);
        }
        _objc_release(lVar39);
        lVar38 = lVar38 + 1;
      } while (lVar30 != lVar38);
      lVar30 = lVar34;
      func_0x00010bf52a60();
    }
  }
  else {
    lVar30 = *(long *)(param_1 + 0x10);
    func_0x00010c240000(lVar30);
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar30;
    func_0x00010c0ff5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar30);
    puStack_380 = puVar8;
    uStack_378 = 0xc2000000;
    uStack_370 = 0x105da1ab0;
    puStack_368 = &UNK_1108e88b0;
    lVar30 = lVar34;
    lStack_360 = param_1;
    func_0x000100504554(lVar34,&puStack_380);
    func_0x00010befa160(puVar33);
    _objc_release(lVar30);
  }
  _objc_release(lVar34);
  func_0x00010c174ea0(param_3);
  puVar8 = puVar10;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar10;
    func_0x00010bf51e00(puVar10);
    func_0x00010c17f0e0(param_3);
    _objc_release(puVar8);
  }
  uVar31 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar31;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar31);
  lVar30 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar32 = lVar30;
  func_0x000108c2bd8c();
  _objc_release(lVar30);
  if ((int)lVar32 != 0) {
    lVar34 = *(long *)(param_1 + 0x20);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar34;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar30;
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar30);
    _objc_release(lVar34);
    if (lVar32 != 0) {
      lVar30 = lVar32;
      func_0x00010bf8a400(lVar32);
      _objc_retainAutoreleasedReturnValue();
      lVar34 = lVar32;
      func_0x00010bf8a7e0(lVar32);
      _objc_retainAutoreleasedReturnValue();
      lVar38 = lVar32;
      func_0x00010c094540(lVar32);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c191d20(param_3);
      _objc_release(lVar38);
      _objc_release(lVar34);
      _objc_release(lVar30);
      lVar30 = lVar32;
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = lVar30;
      func_0x00010bf529e0();
      _objc_release(lVar30);
      if (lVar34 != 0) {
        lVar30 = lVar32;
        func_0x00010c292720(lVar32);
        _objc_retainAutoreleasedReturnValue();
        lVar34 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar38 = lVar34;
        func_0x00010bf529e0();
        lVar39 = lVar30;
        if (lVar38 != 0) {
          lVar38 = lVar30;
          func_0x00010c0d3c80(lVar30);
          func_0x00010befa160();
          lVar39 = lVar38;
          func_0x00010bf51e00(lVar38);
          _objc_release(lVar30);
          _objc_release(lVar38);
        }
        ppuVar35 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3aa8;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        lVar30 = lVar3;
        func_0x00010c0e00e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_228 = ppuVar35;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c6a40(param_3);
        _objc_release(puVar8);
        _objc_release(lVar30);
        _objc_release(ppuVar35);
        _objc_release(lVar34);
        _objc_release(lVar39);
      }
    }
    if ((uVar36 != 0) &&
       ((uVar31 = uVar36, func_0x00010bf3d240(), (uVar31 & 0x7b40) != 0 ||
        (uVar31 = uVar36, func_0x00010bf977c0(), (int)uVar31 == 0x39)))) {
      func_0x00010c191d20(param_3);
    }
    lVar38 = *(long *)(param_1 + 0x20);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar38;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar30;
    func_0x00010b5f869c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar30);
    _objc_release(lVar38);
    lVar30 = lVar34;
    func_0x00010c08fa60();
    if (lVar30 != 0) {
      func_0x00010c204060(param_3);
    }
    _objc_release(lVar34);
    _objc_release(lVar32);
  }
  lVar32 = *(long *)(param_1 + 0x128);
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  lVar32 = lVar30;
  func_0x00010befee20();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar30;
  func_0x00010c06bcc0();
  if (((int)lVar34 != 0) && (lVar34 = lVar32, func_0x00010c08fa60(), lVar34 != 0)) {
    func_0x00010c204060(param_3);
  }
  if ((uVar36 != 0) && (uVar31 = uVar36, func_0x00010bf3d240(), (uVar31 & 0xffe0) != 0)) {
    func_0x00010bf3d240();
    func_0x00010c1a23a0(param_3);
  }
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010bf926c0();
  _objc_release(uVar21);
  if ((int)uVar20 != 0) {
    lVar39 = *(long *)(param_1 + 0x130);
    func_0x00010bfe0aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar39;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c240000(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = lVar34;
    func_0x00010c26afe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar21);
    _objc_release(lVar34);
    _objc_release(lVar39);
    if (lVar38 != 0) {
      func_0x00010c212c80(param_3);
    }
    _objc_release(lVar38);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075060();
  if (iVar1 != 0) {
    func_0x00010c1608a0(param_3);
  }
  lVar34 = param_1;
  func_0x00010bdf8ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9b60(param_3);
  _objc_release(lVar34);
  lVar34 = param_1;
  func_0x00010becc360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7300();
  if ((int)param_1 == 0) {
    if (lVar34 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_230 = lVar34;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199480(param_3);
      _objc_release(puVar8);
    }
  }
  else {
    func_0x00010c1bf240(param_3);
  }
  _objc_release(lVar34);
  _objc_release(lVar32);
  _objc_release(lVar30);
  _objc_release(uVar36);
  _objc_release(lVar25);
  _objc_release(puVar33);
  _objc_release(puVar26);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(uStack_260);
  _objc_release(uStack_238);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfb1160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105da1968; end: 105da19a7;  */

void FUN_105da1968(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105da19a8; end: 105da19bb;  */

void FUN_105da19a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2208d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setVenueId__112665c58);
  return;
}



/* Entry: 105da19bc; end: 105da1a4b;  */

void FUN_105da19bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c253880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105da1a4c; end: 105da1b3b;  */

bool FUN_105da1a4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 2;
}



/* Entry: 105da1b3c; end: 105da1e8b; -[SCPreviewFeatureSendingImpl _prepareTinselMediaForCameraRollSticker] */

void FUN_105da1b3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = lVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar23 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar24 = *(long *)(lVar23 * 8);
      lVar25 = lVar24;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar25;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar12;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf2aa80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf4db80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c08fa60();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar12);
      _objc_release(lVar25);
      puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (lVar10 != 0) {
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar24;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar25;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010bf2aa80();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf4db80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar12);
        _objc_release(lVar25);
        _objc_release(lVar24);
        lVar12 = *(long *)(param_1 + 0x140);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar12;
        func_0x00010c109400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        _objc_release(lVar12);
        if (lVar25 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(lVar25);
        _objc_release(puVar11);
      }
      lVar23 = lVar23 + 1;
    } while (lVar2 != lVar23);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
    ___stack_chk_fail();
    lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *(long *)(lVar3 + 0x10);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = lVar5;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar2;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar22;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar22);
        }
        puVar26 = *(undefined **)(lVar25 * 8);
        puVar11 = puVar26;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar11;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar21;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar13;
        func_0x00010bfede40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar20;
        func_0x00010c27dd80();
        if ((int)puVar14 == 0x16) {
          puVar14 = puVar26;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010bfc0fa0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010c09d760();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar18;
          func_0x00010c08fa60();
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar20);
          _objc_release(puVar13);
          _objc_release(puVar21);
          _objc_release(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
          if (puVar19 != (undefined *)0x0) {
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar26;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar21;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar13;
            func_0x00010bfc0fa0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar20;
            func_0x00010c09d760();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfad300();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            _objc_release(puVar20);
            _objc_release(puVar13);
            _objc_release(puVar21);
            _objc_release(puVar26);
            puVar20 = *(undefined **)(lVar3 + 0x140);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar20;
            func_0x00010c109400();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar13);
            _objc_release(puVar20);
            if (puVar21 != (undefined *)0x0) {
              func_0x00010befa120(puVar4);
            }
            goto LAB_105da21b4;
          }
        }
        else {
          _objc_release(puVar20);
          _objc_release(puVar13);
LAB_105da21b4:
          _objc_release(puVar21);
          _objc_release(puVar11);
        }
        lVar25 = lVar25 + 1;
      } while (lVar2 != lVar25);
      lVar2 = lVar22;
      func_0x00010bf52a60();
    }
    _objc_release(lVar22);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
      ___stack_chk_fail();
      puVar21 = *(undefined **)(lVar5 + 0x20);
      func_0x00010c26fea0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar21;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      func_0x000100504554();
      _objc_release(puVar11);
      _objc_release(puVar21);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105da1e8c; end: 105da223f; -[SCPreviewFeatureSendingImpl _prepareTinselMediaForCreativeKit] */

void FUN_105da1e8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = lVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
        ___stack_chk_fail();
        puVar15 = *(undefined **)(lVar3 + 0x20);
        func_0x00010c26fea0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar15;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x000100504554();
        _objc_release(puVar6);
        _objc_release(puVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      puVar18 = *(undefined **)(lVar17 * 8);
      puVar6 = puVar18;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar7;
      func_0x00010bfede40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar14;
      func_0x00010c27dd80();
      if ((int)puVar8 == 0x16) {
        puVar8 = puVar18;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bfc0fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c09d760();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c08fa60();
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar14);
        _objc_release(puVar7);
        _objc_release(puVar15);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if (puVar13 != (undefined *)0x0) {
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar18;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar15;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar7;
          func_0x00010bfc0fa0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar14;
          func_0x00010c09d760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfad300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar14);
          _objc_release(puVar7);
          _objc_release(puVar15);
          _objc_release(puVar18);
          puVar14 = *(undefined **)(param_1 + 0x140);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c109400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar14);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
          goto LAB_105da21b4;
        }
      }
      else {
        _objc_release(puVar14);
        _objc_release(puVar7);
LAB_105da21b4:
        _objc_release(puVar15);
        _objc_release(puVar6);
      }
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105da2240; end: 105da22a7; -[SCPreviewFeatureSendingImpl _prepareTinselMediaForDirectorModeCameraRollImport] */

void FUN_105da2240(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26fea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105da22a8; end: 105da22af;  */

void FUN_105da22a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c270ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_tinselMedia_112679dd8);
  return;
}



/* Entry: 105da22b0; end: 105da239f; -[SCPreviewFeatureSendingImpl _prepareTinselMediaForLensCameraRollImport] */

void FUN_105da22b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9dee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126be7a0;
    func_0x00010bf6e940(PTR_PTR_1126be7a0,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
      func_0x00010c270ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf529e0();
      _objc_release(puVar6);
      puVar6 = PTR____NSArray0__struct_11034ab48;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar4;
        func_0x00010c270ec0(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105da23a0; end: 105da26c7; -[SCPreviewFeatureSendingImpl _prepareTinselMediaForSnapCameraContent] */

undefined * FUN_105da23a0(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar14 = &puStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined *)(param_1 + 0x18);
  _objc_loadWeakRetained();
  puVar2 = puVar15;
  func_0x00010bf1f440();
  _objc_release();
  puVar11 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar2 == 0) goto LAB_105da2688;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c08fa60();
    uVar16 = (uint)(lVar9 == 0);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  else {
    uVar16 = 0;
  }
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108066230(uVar10,*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x150));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c070a20();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar1 == 0) {
    puVar11 = PTR____NSArray0__struct_11034ab48;
    if ((uVar16 & (uint)uVar10) == 1) {
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar12;
      func_0x00010c2bd7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar12);
      puVar11 = PTR____NSArray0__struct_11034ab48;
      if (lVar4 != 0) {
        puVar13 = *(undefined **)(param_1 + 0x20);
        func_0x00010c29ae80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010c2bd7e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar15;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        goto LAB_105da261c;
      }
    }
  }
  else {
    puVar11 = *(undefined **)(param_1 + 0x20);
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar11;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar2;
    uStack_90 = 0xc0000000;
    pcStack_88 = FUN_105da26c8;
    puStack_80 = &UNK_1108e8920;
    uStack_78 = (undefined1)uVar10;
    puVar13 = puVar15;
    func_0x0001006372a4();
    _objc_release(puVar15);
    _objc_release(puVar11);
    puVar11 = puVar13;
    func_0x000100504554(puVar13,&PTR___NSConcreteGlobalBlock_1108e8940);
LAB_105da261c:
    _objc_release(puVar13);
  }
  puVar15 = puVar11;
  func_0x0001006372a4(puVar11,&PTR___NSConcreteGlobalBlock_1108e8980);
  _objc_release(puVar11);
  puStack_c0 = puVar2;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105da2728;
  puStack_a8 = &UNK_1108e89a0;
  puVar11 = puVar15;
  lStack_a0 = param_1;
  func_0x000100504554(puVar15,&puStack_c0);
  _objc_release();
  param_2 = (undefined1 *)ppuVar14;
LAB_105da2688:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (puVar15[0x20] == '\x01') {
      func_0x00010bef0a60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = (undefined *)(ulong)(param_2 == (undefined1 *)0x0);
      _objc_release();
    }
    else {
      puVar15 = (undefined *)0x0;
    }
    return puVar15;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 105da26c8; end: 105da2713;  */

bool FUN_105da26c8(long param_1,long param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bef0a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_2 == 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 105da2714; end: 105da2727;  */

void FUN_105da2714(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetURL_1125a07a0);
  return;
}



/* Entry: 105da2728; end: 105da27ff;  */

void FUN_105da2728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x140);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar3;
  func_0x00010c109400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = puVar3;
    func_0x00010be794c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010be79480(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010be794a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010be79500(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar4);
    func_0x00010be794e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126be7a0;
      _objc_alloc();
      func_0x00010c052ba0();
      puVar4 = puVar3;
      func_0x00010c15e800();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        _objc_retain(puVar4);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105da2800; end: 105da2963; -[SCPreviewFeatureSendingImpl _tinselLocalPlatformData] */

void FUN_105da2800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be794c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be79480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be794a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be79500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be794e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126be7a0;
    _objc_alloc();
    func_0x00010c052ba0();
    puVar4 = puVar3;
    func_0x00010c15e800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_retain(puVar4);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105da2964; end: 105da29ab; -[SCPreviewFeatureSendingImpl _shouldUseLocalPlatformDataForTinselMetadata] */

long FUN_105da2964(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1f440();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105da29ac; end: 105da2d4b; -[SCPreviewFeatureSendingImpl _deduplicatedMediaOrigins] */

void FUN_105da29ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x128);
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06bcc0();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x128);
    func_0x00010c0f7f60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c079d60();
    if ((uVar5 & 1) != 0) {
      _objc_release(uVar3);
      _objc_release(uVar4);
      goto LAB_105da2a48;
    }
    uVar14 = *(ulong *)(param_1 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c074560();
    _objc_release(uVar14);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      puVar17 = (undefined *)0x0;
      goto LAB_105da2a7c;
    }
  }
  else {
LAB_105da2a48:
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar17 = PTR_PTR_1126c4548;
  _objc_alloc();
  func_0x00010c032420();
LAB_105da2a7c:
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 != (undefined *)0x0) {
    func_0x00010befa120(puVar7,param_2,puVar17);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0ed1a0(puVar17);
    func_0x00010c0df780(puVar8,param_2,puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar8);
    _objc_release(puVar8);
  }
  puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar9 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar10);
        }
        lVar18 = *(long *)(lStack_128 + lVar16 * 8);
        lVar11 = lVar18;
        func_0x00010bfea4a0();
        func_0x00010baf7bb0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar11 == 0) {
          lVar12 = lVar18;
          func_0x00010c0ed1a0(lVar18);
          func_0x00010c0df780(puVar8,param_2,lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar6;
          func_0x00010bf4b900(puVar6,param_2,puVar8);
          _objc_release(puVar8);
          if (((ulong)puVar13 & 1) == 0) {
            func_0x00010befa120(puVar7,param_2,lVar18);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0ed1a0(lVar18);
            func_0x00010c0df780(puVar8,param_2,lVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6,param_2,puVar8);
            _objc_release(puVar8);
          }
        }
        else {
          puVar8 = puVar17;
          func_0x00010bf4b900(puVar17,param_2,lVar11);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x00010befa120(puVar17,param_2,lVar11);
            func_0x00010befa120(puVar7,param_2,lVar18);
          }
        }
        _objc_release(lVar11);
        lVar16 = lVar16 + 1;
      } while (lVar9 != lVar16);
      lVar9 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar10);
  _objc_release(puVar17);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be80ec0();
  return;
}



/* Entry: 105da2d4c; end: 105da2da3; -[SCPreviewFeatureSendingImpl _setValuesOnFinalSendingStates:] */

void FUN_105da2d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105da2da4;
  puStack_40 = &UNK_1108e89d0;
  uStack_38 = param_5;
  uStack_30 = param_1;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x00010be80ec0(param_5,param_6,&puStack_58);
  return;
}



/* Entry: 105da2da4; end: 105da361b;  */

void FUN_105da2da4(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  double dVar20;
  
  _objc_retain(param_2);
  uVar2 = param_3;
  _objc_retain();
  dVar20 = *(double *)(param_1 + 0x28);
  _CGRectIsEmpty(dVar20,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
  if ((uVar2 & 1) != 0) goto LAB_105da359c;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    func_0x00010c0c4080(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  else {
    dVar20 = *(double *)(param_1 + 0x38) / *(double *)(param_1 + 0x40);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010be5b1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uVar19 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf4b8e0();
    uVar19 = (uint)uVar5 ^ 1;
    _objc_release(uVar2);
  }
  uVar2 = param_2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfda680();
  _objc_release(uVar2);
  if (((uVar5 & 1) != 0) || (uVar19 != 0)) {
    func_0x00010be8c760(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = param_2;
  func_0x00010841fa68(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c097460(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2120a0(dVar20,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x188);
  func_0x00010bf98360(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(uVar6);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c23ff60();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(lVar7);
  if (lVar4 != 0) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0120();
    _objc_release(uVar2);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar7;
    func_0x00010bf8c3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfdc300();
    if ((int)lVar9 == 0) {
LAB_105da3104:
      _objc_release(lVar8);
    }
    else {
      lVar9 = lVar4;
      func_0x00010c103300();
      _objc_release(lVar8);
      if (lVar9 != 0) {
        lVar9 = lVar4;
        func_0x00010c1032e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar10;
        func_0x00010c1032c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar9);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168);
        func_0x00010c103760(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x188);
        func_0x00010bfb1160(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1da380(uVar6);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar6);
        _objc_release(uVar11);
        goto LAB_105da3104;
      }
    }
    _objc_release(lVar7);
  }
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c070a20();
  uVar2 = param_2;
  func_0x00010841fa68(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c4538;
  if (iVar1 == 0) {
    puVar14 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c26fea0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215a60(uVar2);
  }
  else {
    uVar5 = param_3;
    func_0x00010c2553e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293d80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf308c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar13;
    func_0x00010c293d60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar13);
    uVar13 = uVar6;
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6a40(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c26fea0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18e3e0(uVar2);
    _objc_release(uVar13);
    _objc_release(uVar6);
  }
  _objc_release(puVar14);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010841fa68(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0d1c80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9420(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c27dd80();
  if ((uVar2 == 0x19) || (uVar2 = param_2, func_0x00010c27dd80(), uVar2 == 0x1a)) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aff60();
    _objc_release(uVar2);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c091b80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb340(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0956e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0956e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc320(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c075060();
  if (iVar1 != 0) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1608a0();
    _objc_release(uVar2);
  }
  uVar15 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x128);
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c06bcc0();
  if ((uVar5 & 1) == 0) {
    uVar16 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x128);
    func_0x00010c0f7f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar5;
    func_0x00010c079d60();
    if ((uVar17 & 1) != 0) {
      _objc_release(uVar5);
      _objc_release(uVar16);
      goto LAB_105da34c4;
    }
    uVar18 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010c074560();
    _objc_release(uVar18);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(uVar2);
    _objc_release(uVar15);
    if ((uVar17 & 1) != 0) goto LAB_105da34d4;
  }
  else {
LAB_105da34c4:
    _objc_release(uVar2);
    _objc_release(uVar15);
LAB_105da34d4:
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df020();
    _objc_release(uVar2);
  }
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c080de0();
  if (iVar1 != 0) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213580();
    _objc_release(uVar2);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf1b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar2 = param_2;
    func_0x00010841fa68(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf1b440(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170d40(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_105da359c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105da361c; end: 105da36f3; -[SCPreviewFeatureSendingImpl _processEphemeralMediaWithFinalSendingState:] */

void FUN_105da361c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0x188);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar6 = 0;
      do {
        uVar2 = *(undefined8 *)(param_1 + 0x188);
        func_0x00010bf98360(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_3 + 0x10))(param_3,uVar3,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar6 = uVar6 + 1;
        uVar5 = *(ulong *)(param_1 + 0x188);
        func_0x00010bf529e0();
      } while (uVar6 < uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105da36f4; end: 105da3c5b; -[SCPreviewFeatureSendingImpl populateChatMediaWithContextIfNecessary:] */

void FUN_105da36f4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4918;
  if (puVar2 == (undefined *)0x0) {
    _objc_opt_new();
  }
  else {
    func_0x00010c242140(PTR_PTR_1126c4918,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = puVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 != 0) {
      puVar7 = *(undefined **)(param_1 + 0x20);
      func_0x00010c09a760(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(puVar3,param_2,puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar8);
      goto LAB_105da382c;
    }
  }
  else {
LAB_105da382c:
    _objc_release(puVar7);
  }
  puVar8 = *(undefined **)(param_1 + 0x188);
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x00010bf4e840(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aafe0(puVar3,param_2,puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar10);
      goto LAB_105da38f0;
    }
  }
  else {
LAB_105da38f0:
    _objc_release(puVar8);
  }
  puVar8 = param_3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      puVar10 = *(undefined **)(param_1 + 0x28);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar10;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar8;
      func_0x00010bf529e0();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        puStack_88 = puVar7;
        puStack_80 = param_1;
        puStack_78 = puVar3;
        do {
          puVar3 = puVar8;
          func_0x00010c0dfd40(puVar8,param_2,puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c08fa60();
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar9);
          _objc_release(puVar7);
          _objc_release(puVar3);
          if (puVar13 != (undefined *)0x0) {
            puVar3 = puVar8;
            func_0x00010c0dfd40(puVar8,param_2,puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar9;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2208c0(param_3,param_2,puVar12);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar9);
            _objc_release(puVar7);
            _objc_release(puVar3);
          }
          puVar10 = puVar10 + 1;
          puVar9 = puVar8;
          func_0x00010bf529e0();
          param_1 = puStack_80;
          puVar7 = puStack_88;
          puVar3 = puStack_78;
        } while (puVar10 < puVar9);
      }
    }
    else {
      puVar8 = puVar7;
      func_0x00010c297e20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(param_3,param_2,puVar8);
    }
    _objc_release(puVar8);
  }
  puVar8 = param_3;
  func_0x00010c23f440();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x00010bf0d6a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2039e0(param_3,param_2,puVar8);
      goto LAB_105da3b28;
    }
  }
  else {
LAB_105da3b28:
    _objc_release(puVar8);
  }
  puVar8 = param_3;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c07e920();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c4550;
    if (iVar1 == 0) goto LAB_105da3bd8;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c8e40(uVar15);
    func_0x00010c0c5ba0(puVar8,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar8;
    if (puVar8 != (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4de0(param_3,param_2,puVar10);
      _objc_release(puVar10);
    }
  }
  _objc_release(puVar8);
LAB_105da3bd8:
  puVar8 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204e80(param_3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_105da3c5c;
    lVar4 = *(long *)(puVar3 + 0x150);
    puStack_c0 = param_1;
    puStack_b8 = puVar8;
    puStack_b0 = puVar2;
    puStack_a8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf07e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 == 0) {
      uVar15 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(puVar3 + 0x158);
      func_0x00010bfc1440(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105da3d5c;
      puStack_d0 = &UNK_110861678;
      _objc_retain(lVar6);
      uVar15 = uVar14;
      lStack_c8 = lVar6;
      func_0x00010bfb2040(uVar14,param_2,&puStack_e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lStack_c8);
      _objc_release(uVar14);
    }
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
    return;
  }
  return;
}



/* Entry: 105da3c5c; end: 105da3d5b; -[SCPreviewFeatureSendingImpl _selectedGeoFilter] */

void FUN_105da3c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010bfc1440(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105da3d5c;
    puStack_40 = &UNK_110861678;
    _objc_retain(lVar3);
    uVar5 = uVar4;
    lStack_38 = lVar3;
    func_0x00010bfb2040(uVar4,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105da3d5c; end: 105da3da3;  */

undefined8 FUN_105da3d5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105da3da4; end: 105da3f07; -[SCPreviewFeatureSendingImpl _populateVenueFilterInfoToEphemeralMediaList:] */

void FUN_105da3da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x160);
  func_0x00010c15a3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be9dea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      lVar4 = *(long *)(param_1 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c298020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar3 == 0) goto LAB_105da3edc;
      lVar5 = *(long *)(param_1 + 0x98);
      func_0x00010c269d40(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010c298020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c297b40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(param_3,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      lVar5 = lVar2;
      func_0x00010c297e20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(param_3,param_2,lVar5);
    }
    _objc_release(lVar5);
  }
  else {
    func_0x00010c2208c0(param_3,param_2,lVar1);
  }
LAB_105da3edc:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105da3f08; end: 105da406b; -[SCPreviewFeatureSendingImpl _shouldSendAsMultiSnap:] */

bool FUN_105da3f08(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c233c60();
  if ((iVar2 != 0) && (uVar3 = param_3, func_0x00010c07a900(), (uVar3 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010c07a8e0();
    if ((int)uVar3 != 0) {
      uVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      uVar7 = uVar3;
      func_0x00010bf1f440();
      _objc_release(uVar3);
      if ((uVar7 & 1) != 0) goto LAB_105da400c;
    }
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar8 = lVar4;
    func_0x000108f49514();
    if ((int)lVar8 == 0) {
      _objc_release(lVar4);
      if (param_3 != 0) {
LAB_105da3fb4:
        if ((*(byte *)(param_3 + 0x10) & 1) != 0) goto LAB_105da400c;
      }
    }
    else {
      if (param_3 != 0) {
        bVar1 = *(byte *)(param_3 + 9);
        _objc_release(lVar4);
        if ((bVar1 & 1) == 0) goto LAB_105da3fb4;
        goto LAB_105da400c;
      }
      _objc_release(lVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07f160();
    _objc_release(uVar5);
    if ((int)uVar6 == 0) {
      bVar9 = true;
      goto LAB_105da4010;
    }
    uVar7 = *(ulong *)(param_1 + 0x20);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c06e820();
    _objc_release(uVar7);
    if ((uVar3 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      func_0x00010c0d2100(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010bfb4f60();
      bVar9 = 1 < lVar4;
      _objc_release(lVar8);
      goto LAB_105da4010;
    }
  }
LAB_105da400c:
  bVar9 = false;
LAB_105da4010:
  _objc_release(param_3);
  return bVar9;
}



/* Entry: 105da406c; end: 105da40e7; -[SCPreviewFeatureSendingImpl _shouldSendAsSegmentedTimelineSnap] */

undefined8 FUN_105da406c(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06e820();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0811c0();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c07e920();
      if (iVar1 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c073bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_isFromLegacyMultiSnaps_1125fa908);
        return uVar4;
      }
    }
  }
  return 0;
}



/* Entry: 105da40e8; end: 105da4147; -[SCPreviewFeatureSendingImpl _clipsEditingStateHandler] */

void FUN_105da40e8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c070a20();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105da4148; end: 105da44d7; -[SCPreviewFeatureSendingImpl _removeLyricLensTappableData] */

undefined * FUN_105da4148(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long lVar13;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined *puStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  lStack_208 = param_1;
  puStack_1f8 = puVar11;
  func_0x00010c097460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    param_1 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != param_1) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x25 = *(ulong *)(lStack_1a8 + lVar10 * 8);
        uVar4 = unaff_x25;
        func_0x00010c27dd80();
        if ((int)uVar4 == 7) {
          unaff_x26 = unaff_x25;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x26;
          func_0x00010bf31ca0();
          if ((int)uVar4 != 0x1a) {
            _objc_release(unaff_x26);
            goto LAB_105da42ec;
          }
          unaff_x27 = unaff_x25;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x27;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c08fa60();
          uStack_200 = uVar5;
          _objc_release(uVar4);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          if (uStack_200 == 0) goto LAB_105da42ec;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x25;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(unaff_x25);
          uVar12 = uVar4;
          unaff_x25 = uVar4;
        }
        else {
LAB_105da42ec:
          func_0x00010befa120(puVar1,param_2,unaff_x25);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar3 != 0);
    unaff_x24 = 0;
  }
  _objc_release(lVar2);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar2 = *(long *)(lStack_208 + 0x20);
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2698a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_1e0;
    do {
      param_1 = 0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x25 = *(ulong *)(lStack_1e8 + param_1 * 8);
        unaff_x26 = unaff_x25;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = unaff_x26;
        func_0x00010c08fa60();
        if (uVar4 == 0) {
          _objc_release(unaff_x26);
LAB_105da4410:
          func_0x00010befa120(puStack_1f8,param_2,unaff_x25);
        }
        else {
          uVar4 = unaff_x25;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          _objc_release(unaff_x26);
          if ((unaff_x27 & 1) == 0) goto LAB_105da4410;
        }
        param_1 = param_1 + 1;
      } while (lVar2 != param_1);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
      unaff_x24 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  lVar2 = lStack_208;
  func_0x00010c1bd020(*(undefined8 *)(lStack_208 + 0x20),param_2,puVar1);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_1f8;
  func_0x00010c212060();
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(puVar11);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  ___stack_chk_fail();
  puStack_228 = puVar11;
  pcStack_218 = FUN_105da44d8;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar2 = *(long *)(puVar7 + 0x20);
  puStack_270 = puVar1;
  uStack_268 = unaff_x27;
  uStack_260 = unaff_x26;
  uStack_258 = unaff_x25;
  uStack_250 = unaff_x24;
  lStack_248 = lVar3;
  uStack_240 = uVar12;
  uStack_238 = uVar6;
  lStack_230 = param_1;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x00010c097460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  puVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    lVar10 = *plStack_330;
    do {
      lVar13 = 0;
      do {
        if (*plStack_330 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        puVar11 = *(undefined **)(lStack_338 + lVar13 * 8);
        puVar1 = puVar11;
        func_0x00010c27dd80();
        if ((int)puVar1 == 7) {
          puVar1 = puVar11;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar1;
          func_0x00010bf31ca0();
          if ((int)puVar7 == 0x1a) {
            puVar7 = puVar11;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c08fa60();
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar1);
            if (puVar9 != (undefined *)0x0) {
              func_0x00010beedca0(puVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar11;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              goto LAB_105da4648;
            }
          }
          else {
            _objc_release(puVar1);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_340,auStack_2f8,0x10);
    } while (lVar3 != 0);
    puVar1 = (undefined *)0x0;
  }
LAB_105da4648:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    return *(undefined **)(lVar2 + 0x188);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 105da44d8; end: 105da468f; -[SCPreviewFeatureSendingImpl _lyricsLensTrackIdFromLensTappableElements] */

long FUN_105da44d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c097460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar8 = 0;
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010c27dd80();
        if ((int)lVar3 == 7) {
          lVar3 = lVar7;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf31ca0();
          if ((int)lVar4 == 0x1a) {
            lVar4 = lVar7;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c08fa60();
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(lVar3);
            if (lVar6 != 0) {
              func_0x00010beedca0(lVar7);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar7);
              goto LAB_105da4648;
            }
          }
          else {
            _objc_release(lVar3);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
    lVar8 = 0;
  }
LAB_105da4648:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return *(long *)(lVar1 + 0x188);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return lVar8;
}



/* Entry: 105da4690; end: 105da4697; -[SCPreviewFeatureSendingImpl ephemeralMediaList] */

undefined8 FUN_105da4690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 105da4698; end: 105da48e7; -[SCPreviewFeatureSendingImpl .cxx_destruct] */

void FUN_105da4698(long param_1)

{
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105da48e8; end: 105da49ff; -[SCPreviewFeatureSendingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da48e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4928;
  _objc_alloc(PTR_PTR_1126c4928);
  func_0x00010c0447e0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273618c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105da4a00; end: 105da5327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da4a00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  undefined *puVar81;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar81 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_1127360dc;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar81 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar81);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    puVar81 = PTR_PTR_1126c4920;
    _objc_alloc();
    lVar4 = param_1 + _DAT_1127360e0;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112736150;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_11273610c;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_1127360f8;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112736140;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_1127360e4;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_112736104;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf426c0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_112736134;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c293d00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_11273615c;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c258780();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c08d8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_1127360f0;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c0c8880();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + _DAT_112736124;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_1127360fc;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + _DAT_112736100;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + _DAT_112736108;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1 + _DAT_112736110;
    _objc_loadWeakRetained();
    lVar33 = lVar32;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_1 + _DAT_112736114;
    _objc_loadWeakRetained();
    lVar35 = lVar34;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1 + _DAT_112736118;
    _objc_loadWeakRetained();
    lVar37 = lVar36;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_1 + _DAT_11273611c;
    _objc_loadWeakRetained();
    lVar39 = lVar38;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = param_1 + _DAT_11273612c;
    _objc_loadWeakRetained();
    lVar41 = lVar40;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1 + _DAT_112736138;
    _objc_loadWeakRetained();
    lVar43 = lVar42;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_1 + _DAT_112736120;
    _objc_loadWeakRetained();
    lVar45 = lVar44;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = param_1 + _DAT_112736128;
    _objc_loadWeakRetained();
    lVar47 = lVar46;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1 + _DAT_112736130;
    _objc_loadWeakRetained();
    lVar49 = lVar48;
    func_0x00010c292f60();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1 + _DAT_11273613c;
    _objc_loadWeakRetained();
    lVar51 = lVar50;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    lVar52 = param_1 + _DAT_112736158;
    _objc_loadWeakRetained();
    lVar53 = lVar52;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = param_1 + _DAT_112736158;
    _objc_loadWeakRetained();
    lVar55 = lVar54;
    func_0x00010c243b00();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = param_1 + _DAT_1127360ec;
    _objc_loadWeakRetained();
    lVar57 = param_1 + _DAT_1127360f4;
    _objc_loadWeakRetained();
    lVar58 = param_1 + _DAT_1127360e8;
    _objc_loadWeakRetained();
    lVar59 = param_1 + _DAT_112736144;
    _objc_loadWeakRetained();
    lVar60 = param_1 + _DAT_112736168;
    _objc_loadWeakRetained();
    lVar61 = lVar60;
    func_0x00010bfbdac0();
    _objc_retainAutoreleasedReturnValue();
    lVar62 = param_1 + _DAT_112736148;
    _objc_loadWeakRetained();
    lVar63 = param_1 + _DAT_11273614c;
    _objc_loadWeakRetained();
    lVar64 = param_1 + _DAT_112736154;
    _objc_loadWeakRetained();
    lVar65 = param_1 + _DAT_112736160;
    _objc_loadWeakRetained();
    lVar66 = param_1 + _DAT_112736164;
    _objc_loadWeakRetained();
    lVar67 = param_1 + _DAT_11273616c;
    _objc_loadWeakRetained();
    lVar68 = lVar67;
    func_0x00010c270e80();
    _objc_retainAutoreleasedReturnValue();
    lVar69 = param_1 + _DAT_112736170;
    _objc_loadWeakRetained();
    lVar70 = lVar69;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar71 = param_1 + _DAT_112736174;
    _objc_loadWeakRetained();
    lVar72 = lVar71;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    lVar73 = param_1 + _DAT_112736178;
    _objc_loadWeakRetained();
    lVar74 = lVar73;
    func_0x00010bfc1300();
    _objc_retainAutoreleasedReturnValue();
    lVar75 = param_1 + _DAT_11273617c;
    _objc_loadWeakRetained();
    lVar76 = param_1 + _DAT_112736180;
    _objc_loadWeakRetained();
    lVar77 = param_1 + _DAT_112736184;
    _objc_loadWeakRetained();
    lVar78 = lVar77;
    func_0x00010bfbe800();
    _objc_retainAutoreleasedReturnValue();
    lVar79 = param_1 + _DAT_112736188;
    _objc_loadWeakRetained();
    lVar80 = lVar79;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e240(puVar81);
    _objc_release(uVar1);
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
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
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
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
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
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar81);
  return;
}



/* Entry: 105da5328; end: 105da5567; -[SCPreviewFeatureSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5328(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273618c,0);
  _objc_destroyWeak(param_1 + _DAT_112736188);
  _objc_destroyWeak(param_1 + _DAT_112736184);
  _objc_destroyWeak(param_1 + _DAT_112736180);
  _objc_destroyWeak(param_1 + _DAT_11273617c);
  _objc_destroyWeak(param_1 + _DAT_112736178);
  _objc_destroyWeak(param_1 + _DAT_112736174);
  _objc_destroyWeak(param_1 + _DAT_112736170);
  _objc_destroyWeak(param_1 + _DAT_11273616c);
  _objc_destroyWeak(param_1 + _DAT_112736168);
  _objc_destroyWeak(param_1 + _DAT_112736164);
  _objc_destroyWeak(param_1 + _DAT_112736160);
  _objc_destroyWeak(param_1 + _DAT_11273615c);
  _objc_destroyWeak(param_1 + _DAT_112736158);
  _objc_destroyWeak(param_1 + _DAT_112736154);
  _objc_destroyWeak(param_1 + _DAT_112736150);
  _objc_destroyWeak(param_1 + _DAT_11273614c);
  _objc_destroyWeak(param_1 + _DAT_112736148);
  _objc_destroyWeak(param_1 + _DAT_112736144);
  _objc_destroyWeak(param_1 + _DAT_112736140);
  _objc_destroyWeak(param_1 + _DAT_11273613c);
  _objc_destroyWeak(param_1 + _DAT_112736138);
  _objc_destroyWeak(param_1 + _DAT_112736134);
  _objc_destroyWeak(param_1 + _DAT_112736130);
  _objc_destroyWeak(param_1 + _DAT_11273612c);
  _objc_destroyWeak(param_1 + _DAT_112736128);
  _objc_destroyWeak(param_1 + _DAT_112736124);
  _objc_destroyWeak(param_1 + _DAT_112736120);
  _objc_destroyWeak(param_1 + _DAT_11273611c);
  _objc_destroyWeak(param_1 + _DAT_112736118);
  _objc_destroyWeak(param_1 + _DAT_112736114);
  _objc_destroyWeak(param_1 + _DAT_112736110);
  _objc_destroyWeak(param_1 + _DAT_11273610c);
  _objc_destroyWeak(param_1 + _DAT_112736108);
  _objc_destroyWeak(param_1 + _DAT_112736104);
  _objc_destroyWeak(param_1 + _DAT_112736100);
  _objc_destroyWeak(param_1 + _DAT_1127360fc);
  _objc_destroyWeak(param_1 + _DAT_1127360f8);
  _objc_destroyWeak(param_1 + _DAT_1127360f4);
  _objc_destroyWeak(param_1 + _DAT_1127360f0);
  _objc_destroyWeak(param_1 + _DAT_1127360ec);
  _objc_destroyWeak(param_1 + _DAT_1127360e8);
  _objc_destroyWeak(param_1 + _DAT_1127360e4);
  _objc_destroyWeak(param_1 + _DAT_1127360e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127360dc);
  return;
}



/* Entry: 105da5568; end: 105da5613; -[SCPreviewFeatureSendingServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5568(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736190;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736198;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c15dfc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105da5614; end: 105da5657; -[SCPreviewFeatureSendingServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5614(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736198);
  _objc_destroyWeak(param_1 + _DAT_112736194);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736190);
  return;
}



/* Entry: 105da5658; end: 105da585f; +[SCCropOverlayViewImpl canSubView:completelyCoverSuperView:isCropOverlaySubviewV2MethodDisabled:] */

undefined8
FUN_105da5658(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  int iVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_9 & 1) == 0) {
    func_0x00010bfb68e0(param_7);
    dVar3 = param_3;
    dVar5 = param_4;
    func_0x00010b690acc(param_3,param_4);
    func_0x00010bfb68e0(param_8);
    func_0x00010b690acc(dVar3,dVar5);
    dVar4 = dVar3;
    dVar6 = dVar5;
    func_0x00010bfb68e0(param_7);
    lVar7 = (long)dVar4;
    func_0x00010bfb68e0(param_7);
    lVar8 = (long)dVar6;
    func_0x00010bfb68e0(param_8);
    func_0x00010bfb68e0(param_8);
    _objc_release(param_8);
    _CGRectContainsRect(lVar7,lVar8,param_3,param_4,(long)dVar4,(long)dVar6,dVar3,dVar5);
  }
  else {
    func_0x00010bf51200(0,0,param_7,param_6,param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf51200(param_3,0,param_7,param_6,param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf51200(0,param_4,param_7,param_6,param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf51200(param_3,param_4,param_7,param_6,param_8);
    _objc_release(param_8);
    uVar2 = param_7;
    func_0x00010bf20c00();
    iVar1 = (int)uVar2;
    _CGRectContainsPoint();
    if (iVar1 != 0) {
      uVar2 = param_7;
      func_0x00010bf20c00();
      iVar1 = (int)uVar2;
      _CGRectContainsPoint();
      if (iVar1 != 0) {
        uVar2 = param_7;
        func_0x00010bf20c00();
        iVar1 = (int)uVar2;
        _CGRectContainsPoint();
        if (iVar1 != 0) {
          param_8 = param_7;
          func_0x00010bf20c00(param_7);
          _CGRectContainsPoint();
          goto LAB_105da5834;
        }
      }
    }
    param_8 = 0;
  }
LAB_105da5834:
  _objc_release(param_7);
  return param_8;
}



/* Entry: 105da5860; end: 105da5d0b; -[SCCropOverlayViewImpl initWithFrame:aspectRatio:croppingState:simpleContentFetcher:isCropOverlaySubviewV2MethodDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105da5860(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined1 param_10)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar2 = &uStack_a0;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_98 = PTR_PTR_1126ed118;
  uStack_a0 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_a0,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11273619c;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_9;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127361a0) = param_10;
    func_0x00010c17d4c0(puVar2);
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127361a4) = param_5;
    pdVar1 = (double *)((long)puVar2 + (long)_DAT_1127361a8);
    func_0x00010bf20c80(param_8);
    func_0x00010bf20c80(param_8);
    *pdVar1 = 0.0;
    pdVar1[1] = 0.0;
    pdVar1[2] = param_1;
    pdVar1[3] = param_2;
    puVar4 = PTR_PTR_1126c4930;
    _objc_alloc();
    dVar10 = *pdVar1;
    func_0x00010c013de0(dVar10,pdVar1[1],pdVar1[2],pdVar1[3]);
    lVar8 = (long)_DAT_1127361ac;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar4;
    _objc_release(uVar3);
    func_0x00010bf20c00(puVar2);
    _CGRectGetMidX();
    dVar12 = dVar10;
    func_0x00010bf20c00(puVar2);
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar10,dVar12,*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010befbb60(puVar2);
    func_0x00010c27ade0(param_8);
    dVar11 = *pdVar1;
    _CGRectGetWidth(dVar11,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar12 = dVar11;
    func_0x00010bf20c00(puVar2);
    _CGRectGetMidX();
    dVar13 = dVar12 + dVar11 * dVar10;
    func_0x00010c27ae20(param_8);
    dVar11 = *pdVar1;
    _CGRectGetHeight(dVar11,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar10 = dVar11;
    func_0x00010bf20c00(puVar2);
    _CGRectGetMidY();
    func_0x00010c219b80(dVar13,dVar10 + dVar11 * dVar12,*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c141a80(param_8);
    func_0x00010c1ee7a0(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c14e120(param_8);
    func_0x00010c1f5fe0(*(undefined8 *)((long)puVar2 + lVar8));
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010bf20c00(puVar2);
    _CGRectGetHeight();
    dVar12 = -13.0;
    dVar11 = dVar13 + -13.0;
    func_0x00010c23d0a0(puVar4);
    dVar11 = dVar11 - dVar12;
    func_0x00010c23d0a0(puVar4);
    func_0x00010c23d0a0(puVar4);
    dVar10 = 16.0;
    func_0x00010c013de0(0x4030000000000000,dVar11,dVar13,dVar12);
    lVar9 = (long)_DAT_1127361b0;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined **)((long)puVar2 + lVar9) = puVar5;
    _objc_release(uVar3);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + lVar9));
    func_0x00010bed3320(puVar2);
    func_0x00010befbd40(*(undefined8 *)((long)puVar2 + lVar9));
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar2 + lVar9));
    _CGRectGetMaxX();
    uVar3 = 0x4038000000000000;
    dVar11 = dVar10 + 24.0;
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar2 + lVar9));
    _CGRectGetMinY();
    dVar12 = dVar10;
    func_0x00010c23d0a0(puVar5);
    func_0x00010c23d0a0(puVar5);
    func_0x00010c013de0(dVar11,dVar10,dVar12,uVar3);
    lVar8 = (long)_DAT_1127361b4;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar6;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010befbd40(*(undefined8 *)((long)puVar2 + lVar8));
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c23d0a0(puVar6);
    func_0x00010c23d0a0(puVar6);
    dVar13 = 0.0;
    func_0x00010c013de0(0,0,dVar11,dVar10);
    lVar8 = (long)_DAT_1127361b8;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar7;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010bf20c00(puVar2);
    _CGRectGetWidth();
    dVar12 = dVar13;
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar2 + lVar8));
    _CGRectGetWidth();
    func_0x00010bf345e0(*(undefined8 *)((long)puVar2 + lVar9));
    func_0x00010c17a6a0(dVar13 + dVar12 * -0.5,uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010befbd40(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar2;
}



/* Entry: 105da5d0c; end: 105da5d63; -[SCCropOverlayViewImpl setButtonsHidden:] */

/* WARNING: Possible PIC construction at 0x000105da5d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105da5d38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361b0),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 105da5d64; end: 105da5d67; -[SCCropOverlayViewImpl viewDidLayoutSubviews] */

void FUN_105da5d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beda770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayout_112594380);
  return;
}



/* Entry: 105da5d68; end: 105da5e03; -[SCCropOverlayViewImpl currentTranslation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105da5d68(double param_1,long param_2)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar2 = (long)_DAT_1127361ac;
  func_0x00010c27ada0(*(undefined8 *)(param_2 + lVar2));
  dVar4 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  pdVar1 = (double *)(param_2 + _DAT_1127361a8);
  dVar3 = *pdVar1;
  dVar5 = pdVar1[1];
  _CGRectGetWidth(dVar3,dVar5,pdVar1[2],pdVar1[3]);
  dVar6 = (param_1 - dVar4) / dVar3;
  func_0x00010c27ada0(*(undefined8 *)(param_2 + lVar2));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  dVar4 = *pdVar1;
  _CGRectGetHeight(dVar4,pdVar1[1],pdVar1[2],pdVar1[3]);
  auVar7._8_8_ = (dVar5 - dVar3) / dVar4;
  auVar7._0_8_ = dVar6;
  return auVar7;
}



/* Entry: 105da5e04; end: 105da5e13; -[SCCropOverlayViewImpl currentRotation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c141a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361ac),PTR_s_rotation_11262e0c0);
  return;
}


