/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e630f0; end: 106e63173; -[SCLensSearchLaunchConfig hash] */

ulong * FUN_106e630f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_106e63224:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e63230;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e63230;
        }
        goto LAB_106e63224;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e63230:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 106e63174; end: 106e6324b; -[SCLensSearchLaunchConfig isEqual:] */

long FUN_106e63174(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e63224:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e63230;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e63230;
        }
        goto LAB_106e63224;
      }
    }
    lVar3 = 0;
  }
LAB_106e63230:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6324c; end: 106e63253; -[SCLensSearchLaunchConfig disableScreenInsetPadding] */

undefined1 FUN_106e6324c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e63254; end: 106e6325b; -[SCLensSearchLaunchConfig useTransparentBackground] */

undefined1 FUN_106e63254(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6325c; end: 106e63263; -[SCLensSearchLaunchConfig preselectedLensId] */

undefined8 FUN_106e6325c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e63264; end: 106e6326b; -[SCLensSearchLaunchConfig themeTypeOverride] */

undefined8 FUN_106e63264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6326c; end: 106e63273; -[SCLensSearchLaunchConfig lensInfoCardEnabled] */

undefined1 FUN_106e6326c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e63274; end: 106e632a3; -[SCLensSearchLaunchConfig .cxx_destruct] */

void FUN_106e63274(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e632a4; end: 106e63377; -[SCSearchScope initWithUIContainer:metricsContext:delegate:initialQuery:] */

undefined1 *
FUN_106e632a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f74a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e63378; end: 106e6337f; -[SCSearchScope uiContainer] */

undefined8 FUN_106e63378(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e63380; end: 106e63387; -[SCSearchScope metricsContext] */

undefined8 FUN_106e63380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e63388; end: 106e6339f; -[SCSearchScope workflowDelegate] */

void FUN_106e63388(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e633a0; end: 106e633a7; -[SCSearchScope initialQuery] */

undefined8 FUN_106e633a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e633a8; end: 106e633df; -[SCSearchScope .cxx_destruct] */

void FUN_106e633a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e633e0; end: 106e63453; -[SCUserEducationTrayContentDelivery initWithContentDelivery:] */

undefined1 * FUN_106e633e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f74b0;
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



/* Entry: 106e63454; end: 106e63633; -[SCUserEducationTrayContentDelivery fetchImageForURL:completion:] */

void FUN_106e63454(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar3 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  uVar7 = param_3;
  func_0x00010c05a200();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4122750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106e63634;
  puStack_60 = &UNK_110852c80;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010c1267e0(uVar5,param_2,puVar1,puVar4,0,0,puVar2,puVar6,uVar7 & 0xffffffffffffff00,
                      &puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106e63634; end: 106e63647;  */

void FUN_106e63634(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000106e63644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 106e63648; end: 106e63653; -[SCUserEducationTrayContentDelivery .cxx_destruct] */

void FUN_106e63648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e63654; end: 106e63897; -[SCUserEducationTrayEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e63654(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2e00;
  _objc_alloc(PTR_PTR_1126d2e00);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11275fcec;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c293fc0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106e638d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7f20();
  lVar5 = param_1;
  FUN_106e638d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7f00();
  func_0x00010c027480(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126d2e08;
  _objc_alloc(PTR_PTR_1126d2e08);
  lVar7 = param_1;
  FUN_106e638d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a680(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar7);
  FUN_106e638d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106e63898; end: 106e638d7;  */

void FUN_106e63898(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e638d8; end: 106e638fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e638d8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275fce4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e638fc; end: 106e63947; -[SCUserEducationTrayEntryPoint end] */

void FUN_106e638fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bde32c0();
  puStack_28 = PTR_PTR_1126f74b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e63948; end: 106e6394b; -[SCUserEducationTrayEntryPoint userEducationTrayHostViewControllerDidDismiss:] */

void FUN_106e63948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde32d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeScope_112556650);
  return;
}



/* Entry: 106e6394c; end: 106e639ff; -[SCUserEducationTrayEntryPoint _completeScope] */

void FUN_106e6394c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  FUN_106e638d8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_106e638d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291ec0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_106e638d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e63a00; end: 106e63a83; -[SCUserEducationTrayEntryPoint _createContentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e63a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d2e10;
  _objc_alloc(PTR_PTR_1126d2e10);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275fce8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf4c240(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e63a84; end: 106e63ac7; -[SCUserEducationTrayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e63a84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275fcec);
  _objc_destroyWeak(param_1 + _DAT_11275fce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fce4);
  return;
}



/* Entry: 106e63ac8; end: 106e63b4f; -[SCUserEducationTrayLogger initWithLogger:onboardingEducationEventType:entryType:] */

undefined1 *
FUN_106e63ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f74c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e63b50; end: 106e63bc3; -[SCUserEducationTrayLogger logTrayShown] */

void FUN_106e63b50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c197620();
  func_0x00010c21acc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c196b80(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e63bc4; end: 106e63c5f; -[SCUserEducationTrayLogger logTrayDismissedThroughType:pagePosition:] */

void FUN_106e63bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c197620();
  func_0x00010c21acc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c196b80(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c20ec60(puVar1,param_2,param_3);
  func_0x00010c161c80(puVar1,param_2,param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e63c60; end: 106e63ceb; -[SCUserEducationTrayLogger logTraySwipedToPageAtPosition:] */

void FUN_106e63c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c197620();
  func_0x00010c21acc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c196b80(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c161c80(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e63cec; end: 106e63d77; -[SCUserEducationTrayLogger logTrayDoneButtonTappedAtPagePosition:] */

void FUN_106e63cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c197620();
  func_0x00010c21acc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c196b80(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c161c80(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e63d78; end: 106e63d83; -[SCUserEducationTrayLogger .cxx_destruct] */

void FUN_106e63d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e63d84; end: 106e63e4b; -[SCUserEducationPageViewController initWithPageViewModel:contentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106e63d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f74c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275fcfc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275fd00;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e63e4c; end: 106e63e93; -[SCUserEducationPageViewController viewDidLoad] */

void FUN_106e63e4c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f74c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bea9ce0(param_1);
  return;
}



/* Entry: 106e63e94; end: 106e6465f; -[SCUserEducationPageViewController _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e63e94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_11275fd04;
  uVar31 = *(undefined8 *)(param_1 + lVar32);
  *(undefined **)(param_1 + lVar32) = puVar1;
  _objc_release(uVar31);
  lVar33 = (long)_DAT_11275fcfc;
  lVar2 = *(long *)(param_1 + lVar33);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + lVar33);
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_b0,param_1);
      uVar31 = *(undefined8 *)(param_1 + _DAT_11275fd00);
      func_0x00010c269d40(uVar31);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar33);
      func_0x00010bfe8f00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_b8,auStack_b0);
      func_0x00010bfa7880(uVar31);
      _objc_release(uVar3);
      _objc_release(uVar31);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_b0);
    }
  }
  else {
    uVar31 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c269d40(uVar31);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar33);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar31);
    _objc_release(uVar3);
    _objc_release(uVar31);
  }
  uVar31 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c269d40(uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar31);
  uVar31 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c269d40(uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar31);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c269d40(uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(uVar31);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c213040(puVar4);
  func_0x00010c1bdb00(puVar4);
  func_0x00010c1cfce0(puVar4);
  func_0x00010c21ad00(puVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar1);
  uVar31 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c26b700(uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(uVar31);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar32);
  uStack_a8 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar32);
  uStack_a0 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar32);
  uStack_98 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  uStack_90 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar4;
  puStack_88 = puVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar23;
  func_0x00010bf493c0(0x4055400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar4;
  puStack_80 = puVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010bf493c0(0xc055400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar29;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(lVar28);
  _objc_release(param_1);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(lVar21);
  _objc_release(lVar32);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar33);
  _objc_release(lVar2);
  _objc_release(uVar31);
  _objc_release(uVar5);
  func_0x00010c23d620(puVar4);
  func_0x00010c181cc0(0x447a0000,puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar28 + 0x20);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume(puVar4);
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e64660; end: 106e6468f;  */

void FUN_106e64660(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e64690; end: 106e646ef;  */

void FUN_106e64690(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe93c0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea47a0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106e646f0; end: 106e647bf; -[SCUserEducationPageViewController _setImage:] */

void FUN_106e646f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106e647c0;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106e647c0; end: 106e64823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e647c0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275fd04);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e64824; end: 106e64873; -[SCUserEducationPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64824(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fd04,0);
  _objc_storeStrong(param_1 + _DAT_11275fd00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275fcfc,0);
  return;
}



/* Entry: 106e64874; end: 106e6499b; -[SCUserEducationTrayHostViewController initWithDelegate:dataSource:contentDelivery:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106e64874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f74d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275fd08),param_3);
    lVar3 = (long)_DAT_11275fd0c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275fd10;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275fd14;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275fd18) = 0;
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6499c; end: 106e649a3; -[SCUserEducationTrayHostViewController modalPresentationStyle] */

undefined8 FUN_106e6499c(void)

{
  return 5;
}



/* Entry: 106e649a4; end: 106e649eb; -[SCUserEducationTrayHostViewController viewDidLoad] */

void FUN_106e649a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f74d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bea9ce0(param_1);
  return;
}



/* Entry: 106e649ec; end: 106e64a67; -[SCUserEducationTrayHostViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e649ec(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f74d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  lVar1 = param_1;
  func_0x00010c06d1e0();
  if ((int)lVar1 != 0) {
    func_0x00010c10c5a0(0x3fe999999999999a,*(undefined8 *)(param_1 + _DAT_11275fd1c));
    func_0x00010c0b2000(*(undefined8 *)(param_1 + _DAT_11275fd14));
  }
  return;
}



/* Entry: 106e64a68; end: 106e64b07; -[SCUserEducationTrayHostViewController _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64a68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d2e18;
  _objc_alloc(PTR_PTR_1126d2e18);
  func_0x00010c008e40(0x3fe999999999999a);
  func_0x00010c18b5e0();
  puVar2 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar4 = (long)_DAT_11275fd1c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c167420(*(undefined8 *)(param_1 + lVar4),param_2,10);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e64b08; end: 106e64b73; -[SCUserEducationTrayHostViewController _dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64b08(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + _DAT_11275fd20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11275fd20) = 1;
  func_0x00010bf83180(*(undefined8 *)(param_1 + _DAT_11275fd1c),param_2,1);
  param_1 = param_1 + _DAT_11275fd08;
  _objc_loadWeakRetained(param_1);
  func_0x00010c291ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e64b74; end: 106e64bfb; -[SCUserEducationTrayHostViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64b74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if ((param_4 == 2) && ((*(byte *)(param_1 + _DAT_11275fd20) & 1) == 0)) {
    if ((*(byte *)(param_1 + _DAT_11275fd24) & 1) == 0) {
      func_0x00010c0b1fa0(*(undefined8 *)(param_1 + _DAT_11275fd14),param_2,0,
                          *(long *)(param_1 + _DAT_11275fd18) + 1);
    }
    func_0x00010be038c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e64bfc; end: 106e64c2f; -[SCUserEducationTrayHostViewController userEducationTrayViewControllerDidTapDoneButtonAtPagePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64bfc(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0b1fc0(*(undefined8 *)(param_1 + _DAT_11275fd14),param_2,param_3 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010be038d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTray_11255e7d0);
  return;
}



/* Entry: 106e64c30; end: 106e64c77; -[SCUserEducationTrayHostViewController userEducationTrayViewControllerDidTapCloseButtonAtPagePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64c30(long param_1,undefined8 param_2,long param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275fd24) = 1;
  func_0x00010c0b1fa0(*(undefined8 *)(param_1 + _DAT_11275fd14),param_2,1,param_3 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010be038d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTray_11255e7d0);
  return;
}



/* Entry: 106e64c78; end: 106e64c97; -[SCUserEducationTrayHostViewController userEducationTrayViewControllerDidSwipeToPageAtPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64c78(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + _DAT_11275fd18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c0b2030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275fd14),
             PTR_s_logTraySwipedToPageAtPosition__11260a218,param_3 + 1);
  return;
}



/* Entry: 106e64c98; end: 106e64d03; -[SCUserEducationTrayHostViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64c98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fd14,0);
  _objc_storeStrong(param_1 + _DAT_11275fd10,0);
  _objc_storeStrong(param_1 + _DAT_11275fd1c,0);
  _objc_storeStrong(param_1 + _DAT_11275fd0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fd08);
  return;
}



/* Entry: 106e64d04; end: 106e64ddf; -[SCUserEducationTrayViewController initWithDataSource:contentDelivery:trayHeightPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106e64d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f74d8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275fd28;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275fd2c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275fd30) = param_1;
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e64de0; end: 106e64e27; -[SCUserEducationTrayViewController viewDidLoad] */

void FUN_106e64de0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f74d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bea9ce0(param_1);
  return;
}



/* Entry: 106e64e28; end: 106e65def; -[SCUserEducationTrayViewController _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e64e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined *puStack_358;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined **ppuStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar16);
  _objc_release(puVar1);
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar16);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar21 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  dVar24 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar21,uVar22,uVar23,dVar24);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc_init();
  lVar16 = (long)_DAT_11275fd34;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar2;
  _objc_release(uVar15);
  func_0x00010befbb60(puVar1);
  lStack_150 = lVar16;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,dVar24);
  func_0x00010c219b60();
  func_0x00010c213040(puVar2);
  func_0x00010c21ad00(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar2);
  func_0x00010c160fc0(puVar2);
  lVar18 = (long)_DAT_11275fd28;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2711a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
  _objc_release(uVar15);
  puStack_140 = puVar2;
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  lVar16 = param_1;
  func_0x00010be36b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar16;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar16);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  func_0x00010c17d4c0(puVar2);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar2);
  func_0x00010befbd60(puVar2);
  puStack_148 = puVar2;
  puStack_138 = puVar1;
  func_0x00010befbb60(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11275fd38;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar15);
  lVar4 = *(long *)(param_1 + lVar18);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar16 != 0) {
    uVar17 = 0;
    do {
      puVar1 = PTR_PTR_1126d2e20;
      _objc_alloc(PTR_PTR_1126d2e20);
      uVar5 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c0f2660(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033500(puVar1);
      _objc_release(uVar15);
      _objc_release(uVar5);
      ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e88f38;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uStack_2e8 = uVar17;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar19));
      _objc_release(puVar1);
      uVar17 = uVar17 + 1;
      uVar6 = *(ulong *)(param_1 + lVar18);
      func_0x00010c0f2660();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
    } while (uVar17 < uVar7);
  }
  puVar1 = PTR_PTR_1126d2e28;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf51e00(uVar15);
  func_0x00010c061a80();
  lVar4 = (long)_DAT_11275fd3c;
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar15);
  lVar16 = lStack_150;
  func_0x00010bf0c980(*(undefined8 *)(param_1 + lStack_150));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIPageControl_1126d2e30;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,dVar24);
  lVar4 = (long)_DAT_11275fd40;
  uVar15 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c1cfe20(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d82a0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187760(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c187720(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(puStack_138);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11275fd44;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar15);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar19));
  uVar22 = *(undefined8 *)(param_1 + lVar19);
  uVar21 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf254c0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar21;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar22);
  _objc_release(uVar15);
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar19));
  uVar7 = *(ulong *)(param_1 + lVar18);
  func_0x00010bf254c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar7;
  func_0x00010bf92900();
  _objc_release(uVar7);
  if ((uVar17 & 1) != 0) {
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar19));
  }
  puVar3 = puStack_138;
  func_0x00010befbb60();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar20 = *(double *)(param_1 + _DAT_11275fd30);
  _objc_release(puVar1);
  puVar2 = puStack_140;
  puVar1 = puStack_140;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(puVar1);
  puStack_1a8 = puVar9;
  func_0x00010c1e3380(0x437a0000,puVar9);
  func_0x00010c181cc0(0x437a0000,puVar2);
  puVar1 = puStack_148;
  func_0x00010c181cc0(0x447a0000);
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  puStack_160 = puVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_170 = puVar10;
  puStack_130 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  puStack_180 = puVar11;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = lVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = lVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  puStack_190 = puVar11;
  puStack_128 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  puStack_1a0 = puVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_1b8 = puVar10;
  puStack_120 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar11;
  func_0x00010bf49420(dVar20 * dVar24 + -23.0 + -42.0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  puStack_1c8 = puVar11;
  puStack_118 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_1d0 = puVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar11;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  puStack_1e0 = puVar10;
  puStack_110 = puVar10;
  puStack_108 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_1e8 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar9;
  func_0x00010bf49520(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puStack_1f8 = puVar11;
  puStack_100 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  puStack_200 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = puVar10;
  func_0x00010bf49480(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_210 = puVar9;
  puStack_f8 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_220 = puVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar9;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_230 = puVar10;
  puStack_f0 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  puStack_238 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = puVar10;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_248 = puVar9;
  puStack_e8 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_250 = puVar10;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_258 = puVar10;
  puStack_e0 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  puStack_270 = puVar9;
  puStack_d8 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_278 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_280 = puVar2;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar16);
  uStack_288 = uVar15;
  uStack_d0 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  uStack_290 = uVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_298 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  uStack_2a0 = uVar21;
  uStack_c8 = uVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  uStack_2a8 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b0 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar16);
  uStack_2b8 = uVar15;
  uStack_c0 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar4);
  lStack_150 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c0 = uVar15;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar4);
  uStack_2c8 = uVar21;
  uStack_b8 = uVar21;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  uStack_2d0 = uVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d8 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar4);
  uStack_2e0 = uVar15;
  uStack_b0 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar23;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  uStack_a8 = uVar21;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar19);
  uStack_a0 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010beef8c0(puStack_218);
  _objc_release(puVar9);
  _objc_release(uVar15);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(uVar22);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar21);
  _objc_release(uVar5);
  _objc_release(uVar23);
  _objc_release(uStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2c0);
  _objc_release(lStack_150);
  _objc_release(uStack_2b8);
  _objc_release(puStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(puStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(puStack_280);
  _objc_release(uStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(puStack_248);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(puStack_210);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(lStack_1b0);
  _objc_release(lStack_198);
  _objc_release(puStack_1a0);
  _objc_release(puStack_190);
  _objc_release(lStack_188);
  _objc_release(lStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_170);
  _objc_release(lStack_168);
  _objc_release(lStack_158);
  _objc_release(puStack_160);
  _objc_release(puStack_1a8);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  puVar1 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  ppuVar14 = &puStack_370;
  pcStack_2f8 = FUN_106e65df0;
  puStack_340 = puVar9;
  uStack_338 = uVar15;
  puStack_330 = puVar3;
  uStack_328 = uVar21;
  uStack_320 = uVar13;
  uStack_318 = uVar5;
  uStack_310 = uVar22;
  puStack_308 = puVar2;
  puStack_300 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_initWeak(auStack_348,puVar1);
  puStack_370 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_368 = 0xc2000000;
  pcStack_360 = FUN_106e65f58;
  puStack_358 = &UNK_1108434b0;
  _objc_copyWeak(auStack_350,auStack_348);
  _objc_retainBlock();
  lVar18 = (long)_DAT_11275fd28;
  lVar4 = *(long *)(puVar1 + lVar18);
  func_0x00010bf254c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar4;
  func_0x00010beee0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
    (**(code **)((long)ppuVar14 + 0x10))(ppuVar14);
  }
  else {
    lVar19 = *(long *)(puVar1 + lVar18);
    func_0x00010bf254c0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar19;
    func_0x00010beee0a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar18 + 0x10))();
    _objc_release(lVar18);
    _objc_release(lVar19);
  }
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(ppuVar14);
  _objc_destroyWeak(auStack_350);
  _objc_destroyWeak(auStack_348);
  _objc_release(puVar10);
  return;
}



/* Entry: 106e65df0; end: 106e65f57; -[SCUserEducationTrayViewController _didTapDoneButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e65df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e65f58;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock();
  lVar5 = (long)_DAT_11275fd28;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf254c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beee0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x00010bf254c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010beee0a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106e65f58; end: 106e65fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e65f58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275fd40);
    func_0x00010bf5f780(uVar2);
    func_0x00010c291f60(lVar1,param_2,uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e65fbc; end: 106e66007; -[SCUserEducationTrayViewController _didTapCloseButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e65fbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275fd40);
  func_0x00010bf5f780(uVar2);
  func_0x00010c291f40(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e66008; end: 106e660c3; -[SCUserEducationTrayViewController userEducationUIPageViewControllerContainer:didMoveToPageAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66008(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c187720(*(undefined8 *)(param_1 + _DAT_11275fd40),param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275fd28);
  func_0x00010bf254c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92900();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275fd44);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275fd38);
    func_0x00010bf529e0(uVar2);
    func_0x00010c195460(uVar1,param_2,param_4 == (int)uVar2 + -1);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e660c4; end: 106e6613f; -[SCUserEducationTrayViewController _iconXSignFillImage] */

void FUN_106e660c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4010000000000000,0x4010000000000000,
                      0x4010000000000000,0x4010000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e66140; end: 106e6615f; -[SCUserEducationTrayViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66140(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275fd48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e66160; end: 106e66173; -[SCUserEducationTrayViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66160(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275fd48,param_3);
  return;
}



/* Entry: 106e66174; end: 106e6620f; -[SCUserEducationTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66174(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275fd48);
  _objc_storeStrong(param_1 + _DAT_11275fd44,0);
  _objc_storeStrong(param_1 + _DAT_11275fd40,0);
  _objc_storeStrong(param_1 + _DAT_11275fd2c,0);
  _objc_storeStrong(param_1 + _DAT_11275fd3c,0);
  _objc_storeStrong(param_1 + _DAT_11275fd38,0);
  _objc_storeStrong(param_1 + _DAT_11275fd34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275fd28,0);
  return;
}



/* Entry: 106e66210; end: 106e6629f; -[SCUserEducationUIPageViewControllerContainer initWithViewControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e66210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f74e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275fd4c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e662a0; end: 106e662e7; -[SCUserEducationUIPageViewControllerContainer viewDidLoad] */

void FUN_106e662a0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f74e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bea9ce0(param_1);
  return;
}



/* Entry: 106e662e8; end: 106e662ef; -[SCUserEducationUIPageViewControllerContainer pageViewController:viewControllerBeforeViewController:] */

void FUN_106e662e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__viewControllerBeforeViewControl_112597e90,param_4);
  return;
}



/* Entry: 106e662f0; end: 106e662f7; -[SCUserEducationUIPageViewControllerContainer pageViewController:viewControllerAfterViewController:] */

void FUN_106e662f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee9390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__viewControllerAfterViewControll_112597e88,param_4);
  return;
}



/* Entry: 106e662f8; end: 106e66397; -[SCUserEducationUIPageViewControllerContainer pageViewController:didFinishAnimating:previousViewControllers:transitionCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e662f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11275fd50);
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bfecde0(*(undefined8 *)(param_1 + _DAT_11275fd4c),param_2,lVar2);
    param_1 = param_1 + _DAT_11275fd54;
    _objc_loadWeakRetained(param_1);
    func_0x00010c291f80();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106e66398; end: 106e66593; -[SCUserEducationUIPageViewControllerContainer _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66398(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIPageViewController_1126d2e38;
  _objc_alloc();
  func_0x00010c055480();
  lVar6 = (long)_DAT_11275fd50;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  lVar2 = *(long *)(param_1 + _DAT_11275fd4c);
  func_0x00010c0dfd40(lVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2224e0(uVar4,param_2,puVar1,0,1,0);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar5 = (long)_DAT_11275fd4c;
  lVar6 = *(long *)(lVar2 + lVar5);
  func_0x00010bfecde0(lVar6,param_2,puVar3);
  if (lVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + lVar5);
    lVar6 = lVar2;
    func_0x00010bfecde0(lVar2,param_2,puVar3);
    func_0x00010c0dfd40(lVar2,param_2,lVar6 + -1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e66594; end: 106e66617; -[SCUserEducationUIPageViewControllerContainer _viewControllerBeforeViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275fd4c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar2);
    lVar2 = lVar1;
    func_0x00010bfecde0(lVar1,param_2,param_3);
    func_0x00010c0dfd40(lVar1,param_2,lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e66618; end: 106e666af; -[SCUserEducationUIPageViewControllerContainer _viewControllerAfterViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e66618(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11275fd4c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bfecde0(uVar1,param_2,param_3);
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (uVar1 < lVar2 - 1U) {
    lVar2 = *(long *)(param_1 + lVar3);
    lVar3 = lVar2;
    func_0x00010bfecde0(lVar2,param_2,param_3);
    func_0x00010c0dfd40(lVar2,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e666b0; end: 106e666cf; -[SCUserEducationUIPageViewControllerContainer delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e666b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275fd54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e666d0; end: 106e666e3; -[SCUserEducationUIPageViewControllerContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e666d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275fd54,param_3);
  return;
}



/* Entry: 106e666e4; end: 106e6672f; -[SCUserEducationUIPageViewControllerContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e666e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275fd54);
  _objc_storeStrong(param_1 + _DAT_11275fd50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275fd4c,0);
  return;
}



/* Entry: 106e66730; end: 106e6684b; -[SCWebBrowsingShareHandler initWithImmediateUserFeatureLaunchServices:conversationDestinationParser:textSender:notificationPool:] */

undefined1 *
FUN_106e66730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f74e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c15d560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6684c; end: 106e66853; -[SCWebBrowsingShareHandler isSharing] */

undefined1 FUN_106e6684c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106e66854; end: 106e669c7; -[SCWebBrowsingShareHandler shareURL:withUIContainer:delegate:] */

void FUN_106e66854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c076220();
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = param_3;
      _objc_release(uVar2);
      _objc_storeWeak(param_1 + 0x30,param_5);
      puVar3 = PTR_PTR_1126b0810;
      _objc_alloc(PTR_PTR_1126b0810);
      func_0x00010c046120();
      puVar4 = PTR_PTR_1126b0818;
      _objc_alloc(PTR_PTR_1126b0818);
      puVar5 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c044540(puVar4);
      _objc_release(puVar5);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf22760(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10));
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e669c8; end: 106e66b2f; -[SCWebBrowsingShareHandler didSendWithSelectionState:] */

void FUN_106e669c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0fc0(param_1);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b620(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c150520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e66b30; end: 106e66b5b;  */

void FUN_106e66b30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e66b5c; end: 106e66b5f; -[SCWebBrowsingShareHandler didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_106e66b5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetStates_1125828f0);
  return;
}



/* Entry: 106e66b60; end: 106e66b9f; -[SCWebBrowsingShareHandler _resetStates] */

void FUN_106e66b60(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c076220();
  if (iVar1 != 0) {
    func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x10));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 106e66ba0; end: 106e66ffb; -[SCWebBrowsingShareHandler _sendURL:withSelectedItems:] */

void FUN_106e66ba0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        lVar15 = *(long *)(lStack_1a8 + lVar13 * 8);
        lVar4 = lVar15;
        func_0x000108425b30();
        if ((int)lVar4 == 0) {
          lVar4 = lVar15;
          func_0x000108425a5c();
          if ((int)lVar4 != 0) {
            func_0x00010c122a80(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar15;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar4;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(lVar15);
            puVar8 = PTR_PTR_1126b01c0;
            func_0x00010c294260(PTR_PTR_1126b01c0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(puVar8);
            func_0x00010befa120(puVar2);
            goto LAB_106e66e54;
          }
        }
        else {
          lVar4 = lVar15;
          func_0x00010c122a80(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar14;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          _objc_release(lVar4);
          puVar8 = PTR_PTR_1126b01c0;
          func_0x00010bfcf680(PTR_PTR_1126b01c0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar8);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar15;
          func_0x00010bf52a60();
          if (lVar4 != 0) {
            lVar14 = *plStack_1e0;
            do {
              lVar12 = 0;
              do {
                if (*plStack_1e0 != lVar14) {
                  _objc_enumerationMutation(lVar15);
                }
                uVar5 = *(undefined8 *)(lStack_1e8 + lVar12 * 8);
                func_0x00010bfe5ec0(uVar5);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010c122b80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar5);
                func_0x00010befa120(puVar2);
                _objc_release(uVar6);
                lVar12 = lVar12 + 1;
              } while (lVar4 != lVar12);
              lVar4 = lVar15;
              func_0x00010bf52a60();
            } while (lVar4 != 0);
          }
          _objc_release(lVar15);
LAB_106e66e54:
          _objc_release(lVar7);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar3);
      lVar3 = param_4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  _objc_initWeak(auStack_1f8,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_106e66ffc;
  puStack_218 = &UNK_110980c90;
  puVar9 = auStack_1f8;
  _objc_copyWeak(auStack_200,puVar9);
  _objc_retain(param_3);
  puVar8 = puVar2;
  lStack_210 = param_3;
  _objc_retain(puVar2);
  puStack_208 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_230;
  func_0x00010c297260(uVar6);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puStack_208);
  _objc_release(lStack_210);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  __Unwind_Resume();
  _objc_retain(ppuVar10);
  _objc_retain(puVar9);
  lVar3 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010bde2aa0(lVar3);
  _objc_release(ppuVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106e66ffc; end: 106e6707f;  */

void FUN_106e66ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bde2aa0(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e67080; end: 106e6726b; -[SCWebBrowsingShareHandler _completeConversationDestinationParsingWithURL:conversations:numberOfParticipants:error:] */

void FUN_106e67080(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_4 == 0) || (param_6 != 0)) {
    func_0x00010be7cd60(param_1);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf026a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x000108605dfc(lVar2,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010bf50b20(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c15d840(uVar3);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e6726c; end: 106e672ff;  */

void FUN_106e6726c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106e67300;
  puStack_38 = &UNK_110846540;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 106e67300; end: 106e67333;  */

void FUN_106e67300(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e67334; end: 106e6733f; -[SCWebBrowsingShareHandler _completeTextSendingWithResult:] */

void FUN_106e67334(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentNotificationForShareSucc_11257ccf8,param_3 == 0);
  return;
}



/* Entry: 106e67340; end: 106e673df; -[SCWebBrowsingShareHandler _presentNotificationForShareSucceeded:] */

void FUN_106e67340(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbbb98;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1e378;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106e673e0; end: 106e67447; -[SCWebBrowsingShareHandler .cxx_destruct] */

void FUN_106e673e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e67448; end: 106e6744f; -[SCContactsOSPermissionOnCameraServices contactsOSPermissionOnCameraRequester] */

undefined8 FUN_106e67448(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e67450; end: 106e6745b; -[SCContactsOSPermissionOnCameraServices .cxx_destruct] */

void FUN_106e67450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6745c; end: 106e67463; -[SCPasskeyStoreServices passkeyStore] */

undefined8 FUN_106e6745c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e67464; end: 106e6746f; -[SCPasskeyStoreServices .cxx_destruct] */

void FUN_106e67464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e67470; end: 106e675bf; -[SCPasskey initWithCoder:] */

undefined1 * FUN_106e67470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e675c0; end: 106e6772b; -[SCPasskey initWithPasskeyId:name:createdDate:createdDevice:lastUsedDate:lastUsedDevice:] */

undefined1 *
FUN_106e675c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f7500;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6772c; end: 106e6774f; -[SCPasskey copyWithZone:] */

undefined8 FUN_106e6772c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e67750; end: 106e677ff; -[SCPasskey encodeWithCoder:] */

void FUN_106e67750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e88f98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e88fb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e88fd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e88ff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e89018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e67800; end: 106e678a3; -[SCPasskey hash] */

undefined8 * FUN_106e67800(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e67984:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e67990;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_106e67990;
                }
                goto LAB_106e67984;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e67990:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e678a4; end: 106e679ab; -[SCPasskey isEqual:] */

long FUN_106e678a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e67984:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e67990;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_106e67990;
                }
                goto LAB_106e67984;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e67990:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e679ac; end: 106e679b3; -[SCPasskey passkeyId] */

undefined8 FUN_106e679ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e679b4; end: 106e679bb; -[SCPasskey name] */

undefined8 FUN_106e679b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


