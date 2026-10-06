/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008781e8; end: 10087831f; -[SCDeckTransitionEventData newPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1008781e8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11307d738);
}



/* Entry: 100878320; end: 1008783bb; -[SCPageLoadMetricManagerImpl userEnterPage:] */

void FUN_100878320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c3c548(param_1);
  lVar1 = param_1;
  func_0x000107c3c0a0(param_1);
  func_0x000107c61180();
  func_0x000107c5d960();
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c3b884();
  func_0x000107c61170(param_3);
  if (lVar1 == 0x67) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_onCustomPoint__112616730,0x45);
    return;
  }
  return;
}



/* Entry: 1008783bc; end: 10087841b; -[SCPageLoadMetricManagerImpl _setCurrentLoadingPage:] */

void FUN_1008783bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x50);
  return;
}



/* Entry: 10087841c; end: 1008784cb; -[SCPageLoadMetricManagerImpl _pageLoadMetric:] */

void FUN_10087841c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x50);
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x000107c4d9e8(puVar1,param_2,param_3);
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126c9ef8;
      func_0x000107c610f4(PTR_PTR_1126c9ef8);
      func_0x000107c47d20();
      func_0x000107c56bd8(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    }
    func_0x000107c611f0(param_1 + 0x50);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008784cc; end: 1008785c3; -[SCPageLoadMetric initWithPageName:] */

undefined1 * FUN_1008784cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f0fc8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0xffffffffffffffff;
    uVar2 = param_3;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = 1;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c9ee0;
    func_0x000107c610f4();
    func_0x000107c47d20();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008785c4; end: 100878683; -[SCPageLoadMetric userEnterPageFromSource:] */

/* WARNING: Possible PIC construction at 0x00010087860c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087864c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100878610) */
/* WARNING: Removing unreachable block (ram,0x000100878650) */

void FUN_1008785c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6071c();
  func_0x000107c611ec(param_1 + 0x3c);
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100878684; end: 1008786ab; -[SCPageLoadTrace beginPagePresentation] */

void FUN_100878684(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3e7fc(param_1,param_2,0);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1008786ac; end: 10087870b; -[SCPageLoadTrace beginSpan:] */

undefined8 FUN_1008786ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4e29c();
  func_0x000107c61180();
  uVar1 = param_1;
  FUN_100878714();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000100878794(uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10087870c; end: 100878713; -[SCPageLoadTrace pageName] */

undefined8 FUN_10087870c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100878714; end: 1008787ff;  */

void FUN_100878714(undefined **param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined *unaff_x21;
  
  func_0x000107c61174();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee4bf8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  if (param_2 < 8) {
    unaff_x21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
  }
  func_0x000107c61170(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 100878800; end: 1008788ef; -[SCPageLoadMetricManagerImpl _getPageFromName:] */

undefined8 FUN_100878800(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110e30ab8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110eb57b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f5a898);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f59ad8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110eb5718);
            uVar2 = 8;
            if ((int)uVar1 == 0) {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0x1f;
          }
        }
        else {
          uVar2 = 0x13c;
        }
      }
      else {
        uVar2 = 0x67;
      }
    }
    else {
      uVar2 = 0x4c;
    }
  }
  else {
    uVar2 = 0x93;
  }
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 1008788f0; end: 10087890b;  */

void FUN_1008788f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c1a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchWillTransition_didTransitio_11260e098,
             &PTR___NSConcreteGlobalBlock_110cb6760,&PTR___NSConcreteGlobalBlock_110cb6780);
  return;
}



/* Entry: 10087890c; end: 1008789b7;  */

void FUN_10087890c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c7ec(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008789b8; end: 1008789bb;  */

void FUN_1008789b8(void)

{
  return;
}



/* Entry: 1008789bc; end: 100878a4b;  */

/* WARNING: Possible PIC construction at 0x000100878a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100878a38) */

void FUN_1008789bc(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c4c7ec(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100878a4c; end: 100878a4f;  */

void FUN_100878a4c(void)

{
  return;
}



/* Entry: 100878a50; end: 100878b13;  */

void FUN_100878a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  func_0x000107c4c7ec(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100878b14; end: 100878b17;  */

void FUN_100878b14(void)

{
  return;
}



/* Entry: 100878b18; end: 100878d37; -[SCDeckContainerBranchChangeTransition _dismissUIKitPresentedVCsRecusivelyWithContainer:completion:] */

void FUN_100878b18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if ((param_3 != *(long *)(param_1 + 0x40)) && (*(char *)(param_1 + 0x18) == '\x01')) {
    lVar1 = param_3;
    func_0x000107c4f07c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5d8a8();
    func_0x000107c61170(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_3;
      func_0x000107c4f07c(param_3);
      func_0x000107c61180();
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_4);
      func_0x000107c420ac(lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      goto LAB_100878c24;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,1,param_3);
LAB_100878c24:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100878d38; end: 100878ec7; -[SIGLegacyContainerViewController present:usingStyle:completion:] */

void FUN_100878d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  func_0x000107c61144(auStack_58,param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1008ecaa0;
  puStack_80 = &UNK_1108aeb50;
  func_0x000107c6111c(auStack_68,auStack_58);
  uStack_60 = param_1;
  func_0x000107c61174(param_4);
  uStack_78 = param_4;
  func_0x000107c61174(param_6);
  uVar2 = param_2;
  uStack_70 = param_6;
  func_0x000107c3ce48(param_2);
  func_0x000107c61180();
  puStack_a0 = PTR_PTR_1126eef30;
  uStack_a8 = param_2;
  func_0x000107c61154(&uStack_a8,PTR_s_present_usingStyle_completion__1126205c0,param_4,param_5,
                      uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100878ec8; end: 100878fd7; -[SIGLegacyContainerViewController _wrappedCompletion:forPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100878ec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_80;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_38,*(undefined8 *)(param_1 + _DAT_11273c900));
  func_0x000107c61144(auStack_40,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1008ec6c0;
  puStack_68 = &UNK_1109070c8;
  func_0x000107c6111c(auStack_50,auStack_38);
  uStack_60 = param_4;
  uStack_58 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6111c(auStack_48,auStack_40);
  func_0x000107c61184(&puStack_80);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 100878fd8; end: 100879023;  */

/* WARNING: Possible PIC construction at 0x00010087900c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100879010) */

void FUN_100878fd8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 100879024; end: 10087918f; -[SCContainerViewController present:usingStyle:completion:] */

void FUN_100879024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f7271ec;
  FUN_1000ba800(&UNK_10f7271ec);
  uVar2 = param_1;
  func_0x000107c4105c();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5af74(param_1);
  func_0x000107c61180();
  func_0x000107c403b8();
  func_0x000107c61170(uVar3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1008ec758;
  puStack_78 = &UNK_1108843d8;
  func_0x000107c61174(param_5);
  uStack_70 = param_1;
  uStack_68 = uVar2;
  uStack_58 = param_5;
  func_0x000107c61174(param_3);
  uStack_60 = param_3;
  func_0x000107c3b55c(param_1,param_2,param_3,param_4,0,&puStack_90);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100879190; end: 1008791bf; -[SCContainerViewController currentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100879190(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c730);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008791c0; end: 1008791df; -[SCContainerViewController sigTransitionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008791c0(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_11278c748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008791e0; end: 100879267; -[SCRootContainer containerVC:willStartTransitionFrom:to:] */

/* WARNING: Possible PIC construction at 0x000100879234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100879238) */
/* WARNING: Removing unreachable block (ram,0x000100879244) */

void FUN_1008791e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4f078(param_3);
    func_0x000107c61180();
    func_0x000107c49aa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100879268; end: 10087943b; -[SCContainerViewController _doTransition:usingStyle:interactive:completion:] */

void FUN_100879268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_b0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puVar1 = &UNK_10f726fe6;
  FUN_1000ba800(&UNK_10f726fe6);
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10087943c;
  pcStack_60 = FUN_1008ee2e8;
  uStack_58 = 0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar4 = 1.60807493534087e-314;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1008ec670;
  puStack_98 = &UNK_11089f0b0;
  puStack_78 = puStack_88;
  func_0x000107c61174(param_6);
  uStack_90 = param_6;
  func_0x000107c61184(&puStack_b0);
  func_0x000107c3b560();
  func_0x000107c61180();
  uVar3 = puStack_78[5];
  puStack_78[5] = param_1;
  func_0x000107c61170(uVar3);
  uVar3 = puStack_78[5];
  func_0x000107c42378(param_4);
  if (2.220446049250313e-16 < dVar4) {
    func_0x000107c3e108(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  func_0x000107c3fef4(uVar3);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(uStack_90);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(uStack_58);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087943c; end: 10087944b;  */

void FUN_10087943c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10087944c; end: 1008799cf; -[SCContainerViewController _doTransitionInteractively:usingStyle:interactive:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087944c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined1 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined1 uStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  puVar1 = &UNK_10f72701a;
  FUN_1000ba800(&UNK_10f72701a);
  if (((*(byte *)(param_2 + _DAT_11278c738) & 1) == 0) &&
     (uVar2 = param_4, func_0x000107c49cec(), (int)uVar2 == 0)) {
    func_0x000107c3adec(param_2);
    func_0x000107c42378(param_5);
    func_0x000107c3aee0(param_2);
    uVar3 = *(ulong *)(param_2 + _DAT_11278c72c);
    func_0x000107c4f040();
    func_0x000107c61180();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1008c0f4c;
    puStack_88 = &UNK_110cb7138;
    func_0x000107c61174(param_5);
    uStack_80 = param_5;
    func_0x000107c3d84c(uVar3);
    puStack_c8 = puVar9;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1008c1a24;
    puStack_b0 = &UNK_110cb7138;
    func_0x000107c61174(param_5);
    uStack_a8 = param_5;
    func_0x000107c3d5a0(uVar3);
    puStack_f0 = puVar9;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1008c456c;
    puStack_d8 = &UNK_110cb7168;
    func_0x000107c61174(param_5);
    uStack_d0 = param_5;
    func_0x000107c3d62c(uVar3);
    puVar8 = &UNK_10f7270c4;
    FUN_1000ba800(&UNK_10f7270c4);
    func_0x000107c5d020(uVar3);
    func_0x0001000e2a84(puVar8);
    lVar4 = param_2;
    func_0x000107c5de64();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      puVar8 = &UNK_10f7270e2;
      FUN_1000ba800(&UNK_10f7270e2);
      lVar4 = param_2;
      func_0x000107c5de64(param_2);
      func_0x000107c61180();
      func_0x000107c4abfc();
      func_0x000107c61170(lVar4);
      func_0x0001000e2a84(puVar8);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    }
    uVar6 = param_5;
    func_0x000107c61164(param_5,PTR_s_timingCurveForVelocity__112679d98);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      func_0x000107c610f4(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
      func_0x000107c42378(param_5);
      func_0x000107c3ff18(param_5);
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_1008c11dc;
      puStack_128 = &UNK_110842e18;
      puStack_140 = puVar9;
      func_0x000107c61174(uVar3);
      uStack_120 = uVar3;
      func_0x000107c4670c(param_1,puVar7);
      uVar6 = uStack_120;
    }
    else {
      uVar6 = param_5;
      func_0x000107c5ca94(0,0,param_5);
      func_0x000107c61180();
      puVar7 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      func_0x000107c610f4(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
      func_0x000107c42378(param_5);
      func_0x000107c46714(puVar7);
      uStack_110 = 0xc2000000;
      puStack_108 = &UNK_10b0a00ac;
      puStack_100 = &UNK_110842e18;
      puStack_118 = puVar9;
      func_0x000107c61174(uVar3);
      uStack_f8 = uVar3;
      func_0x000107c3d5ac(puVar7);
      func_0x000107c61170(uStack_f8);
    }
    func_0x000107c61170(uVar6);
    func_0x000107c61144(auStack_148,param_2);
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1008c1b5c;
    puStack_170 = &UNK_110cb7198;
    puStack_188 = puVar9;
    func_0x000107c6111c(auStack_158,auStack_148);
    func_0x000107c61174(uVar3);
    uStack_168 = uVar3;
    uStack_150 = param_6;
    func_0x000107c61174(param_7);
    lStack_160 = param_7;
    func_0x000107c3d62c(puVar7);
    puVar8 = PTR_PTR_1126df740;
    func_0x000107c610f4(PTR_PTR_1126df740);
    uStack_1a8 = 0xc2000000;
    puStack_1a0 = &UNK_10b0a0110;
    puStack_198 = &UNK_110cb71c8;
    puStack_1b0 = puVar9;
    func_0x000107c61174(uVar3);
    uStack_190 = uVar3;
    func_0x000107c6111c(auStack_1b8,auStack_148);
    func_0x000107c456a0(puVar8);
    func_0x000107c3d798(*(undefined8 *)(param_2 + _DAT_11278c718));
    func_0x000107c61120(auStack_1b8);
    func_0x000107c61170(uStack_190);
    func_0x000107c61170(lStack_160);
    func_0x000107c61170(uStack_168);
    func_0x000107c61120(auStack_158);
    func_0x000107c61120(auStack_148);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar3);
  }
  else {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
    puVar8 = (undefined *)0x0;
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1008799d0; end: 100879a5f; -[SCContainerViewController _assertTransition:usingStyle:] */

/* WARNING: Possible PIC construction at 0x000100879a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100879a34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008799d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f72721a;
  FUN_1000ba800(&UNK_10f72721a);
  if (param_3 == 0) {
    func_0x0001000e2a84(puVar1);
  }
  else {
    func_0x000107c61148(param_1 + _DAT_11278c714);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100879a60; end: 100879c97; -[SCContainerViewController _beginPresentation:animated:interactive:] */

/* WARNING: Possible PIC construction at 0x000100879ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100879b48) */
/* WARNING: Removing unreachable block (ram,0x000100879af4) */
/* WARNING: Removing unreachable block (ram,0x000100879b24) */
/* WARNING: Removing unreachable block (ram,0x000100879b00) */
/* WARNING: Removing unreachable block (ram,0x000100879adc) */
/* WARNING: Removing unreachable block (ram,0x000100879b6c) */
/* WARNING: Removing unreachable block (ram,0x000100879bd0) */
/* WARNING: Removing unreachable block (ram,0x000100879bd4) */
/* WARNING: Removing unreachable block (ram,0x000100879be4) */
/* WARNING: Removing unreachable block (ram,0x000100879be8) */
/* WARNING: Removing unreachable block (ram,0x000100879c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100879a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  FUN_1000ba800(&UNK_10f726e49);
  *(undefined1 *)(param_1 + _DAT_11278c738) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c730);
  lVar3 = (long)_DAT_11278c73c;
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100879c98; end: 100879f07; -[SCNavigationLoggingObserver presenter:willPresent:interactively:] */

/* WARNING: Possible PIC construction at 0x000100879d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100879ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100879ed4) */
/* WARNING: Removing unreachable block (ram,0x000100879ec4) */
/* WARNING: Removing unreachable block (ram,0x000100879e90) */
/* WARNING: Removing unreachable block (ram,0x000100879ea4) */
/* WARNING: Removing unreachable block (ram,0x000100879ebc) */
/* WARNING: Removing unreachable block (ram,0x000100879e50) */
/* WARNING: Removing unreachable block (ram,0x000100879e7c) */
/* WARNING: Removing unreachable block (ram,0x000100879e24) */
/* WARNING: Removing unreachable block (ram,0x000100879da0) */
/* WARNING: Removing unreachable block (ram,0x000100879d8c) */
/* WARNING: Removing unreachable block (ram,0x000100879d54) */
/* WARNING: Removing unreachable block (ram,0x000100879d78) */
/* WARNING: Removing unreachable block (ram,0x000100879d38) */
/* WARNING: Removing unreachable block (ram,0x000100879ee4) */

void FUN_100879c98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_4);
  puVar4 = PTR_PTR_1126afdd8;
  lVar2 = param_1 + 8;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c4e2ec();
  func_0x000107c441b4(puVar4,param_2,lVar3);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4adac();
  puVar1 = PTR_PTR_1126afdd8;
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(puVar4);
  }
  else {
    lVar2 = param_1 + 8;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c4e2ec();
    func_0x000107c441b4(puVar1,param_2,lVar3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100879f08; end: 10087a027; -[SCNavigationSignPostLogger beginTransitionFrom:to:] */

void FUN_100879f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined2 uStack_54;
  undefined8 uStack_52;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar3);
  plVar4 = *(long **)(param_1 + 0x10);
  if (((long)plVar4 - 1U < 0xfffffffffffffffe) &&
     (uVar1 = uVar3, func_0x000107c611e0(), (int)uVar1 != 0)) {
    uVar1 = param_3;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    uVar2 = param_4;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    uStack_60 = 0x8220202;
    uStack_54 = 0x822;
    uStack_5c = uVar1;
    uStack_52 = uVar2;
    func_0x000107c60ea8(0x100000000,uVar3,1,plVar4,"transitions","from %{public}s to %{public}s",
                        &uStack_60,0x16);
  }
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  uVar3 = *(undefined8 *)(*plVar4 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(*plVar4 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10087a154,uVar3,0);
  return;
}



/* Entry: 10087a028; end: 10087a073;  */

void FUN_10087a028(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10087a154,uVar1,0);
  return;
}



/* Entry: 10087a074; end: 10087a07b; -[SCPagePageViewReporter setPresentedInteractively:] */

void FUN_10087a074(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x36) = param_3;
  return;
}



/* Entry: 10087a07c; end: 10087a0d7; -[SCSwipeViewContainerViewController setPPVNavigationLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087a07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = (long)_DAT_112776b18;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x000107c61164(uVar1,PTR_s_setPPVNavigationLogger__112653968);
  if ((uVar1 & 1) != 0) {
    func_0x000107c57170(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10087a0d8; end: 10087a153; -[SCSwipeViewContainerViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087a0d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b04);
  func_0x000107c61174(param_3);
  func_0x000107c5e380(uVar1);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087a154; end: 10087a3a3;  */

void FUN_10087a154(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x22;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [72];
  
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    uStack_a4 = 3;
  }
  else {
    if (*(code **)(unaff_x22 + 0xa8) == (code *)0x0) {
      param_1 = *(ulong *)(*(long *)(unaff_x22 + 0x38) + 0x28);
      func_0x000107c61434(param_1);
    }
    else {
      (**(code **)(unaff_x22 + 0xa8))();
    }
    uVar14 = param_1;
    FUN_1000ade28(param_1,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                  *(undefined1 *)(unaff_x22 + 0xc9));
    func_0x000107c6142c(param_1);
    if ((uVar14 & 1) == 0) {
LAB_10087a344:
      plVar11 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10087a028;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar11,(char *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0x90));
      return;
    }
    if (*(char *)(*(long *)(unaff_x22 + 0x38) + 0x20) == '\x01') {
      uStack_a4 = 0;
    }
    else {
      uVar14 = *(ulong *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      lVar10 = *(long *)(unaff_x22 + 0x28);
      func_0x000100257288(lVar10,*(undefined8 *)(unaff_x22 + 0x30),*(undefined1 *)(unaff_x22 + 0xc9)
                         );
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar10 + 0x28));
          uVar12 = uVar14;
          func_0x000107c60690();
          func_0x000107c606a8();
          uVar13 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
          uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar10 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
            do {
              if ((int)*(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 8) == (int)uVar14) {
                func_0x000107c6142c();
                uStack_a4 = 0;
                goto LAB_10087a190;
              }
              uVar12 = uVar12 + 1 & ~uVar13;
            } while ((*(ulong *)(lVar10 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c();
      }
      if ((*(byte *)(*(long *)(unaff_x22 + 0x38) + 0x30) & 1) == 0) goto LAB_10087a344;
      uStack_a4 = 1;
    }
  }
LAB_10087a190:
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  lVar10 = *(long *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar9 = *(long *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x90));
  (**(code **)(lVar6 + 8))(uVar1,uVar2);
  (**(code **)(lVar10 + 8))(uVar7,uVar8);
  (**(code **)(lVar9 + 8))(uVar3,uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010087a22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uStack_a4);
  return;
}



/* Entry: 10087a3a4; end: 10087a40b;  */

undefined1 FUN_10087a3a4(void)

{
  if (lRam00000001137fc110 != -1) {
    FUN_10002a2fc(0x1137fc110,&PTR___NSConcreteGlobalBlock_110d665b8);
  }
  return uRam00000001137fc00d;
}



/* Entry: 10087a40c; end: 10087a413; -[SCContainerViewController _scAllowManuallyTriggerAppearanceFix] */

undefined8 FUN_10087a40c(void)

{
  return 0;
}



/* Entry: 10087a414; end: 10087a487; -[SCSwipeViewContainerViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087a414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c3e74c(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 10087a488; end: 10087a497; -[SCViewControllerLifecycleChecker beginAppearanceTransition:isAppearing:animated:] */

void FUN_10087a488(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = param_4;
  return;
}



/* Entry: 10087a498; end: 10087a527; -[SCSwipeViewContainerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087a498(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c4b79c(*(undefined8 *)(param_1 + _DAT_112776b08));
  func_0x000107c53dec(param_1);
  puVar1 = PTR_PTR_1126da298;
  func_0x000107c610f4();
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112776b1c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c55108(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10087a528; end: 10087a54f; -[SCPageLoadTrace loadView] */

void FUN_10087a528(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3e7fc(param_1,param_2,4);
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10087a550; end: 10087a81f; -[SCSwipeViewContainerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10087a550(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [48];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126fce78;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar7 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c3ec60(puVar1);
    func_0x000107c469a4();
    lVar37 = (long)_DAT_112776adc;
    uVar35 = *(undefined8 *)((long)puVar1 + lVar37);
    *(undefined **)((long)puVar1 + lVar37) = puVar2;
    func_0x000107c61170(uVar35);
    func_0x000107c3d89c(puVar1);
    func_0x000107c534b0(*(undefined8 *)((long)puVar1 + lVar37));
    func_0x000107c5a050(*(undefined8 *)((long)puVar1 + lVar37));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar37);
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4ace0(puVar1);
    func_0x000107c61180();
    uVar35 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar38 = (long)_DAT_112776ae0;
    uVar36 = *(undefined8 *)((long)puVar1 + lVar38);
    *(undefined8 *)((long)puVar1 + lVar38) = uVar35;
    func_0x000107c61170(uVar36);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    puVar4 = puVar1;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar35 = *(undefined8 *)((long)puVar1 + lVar37);
    func_0x000107c50890(uVar35);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar39 = (long)_DAT_112776ae4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar39);
    *(undefined8 **)((long)puVar1 + lVar39) = puVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(puVar4);
    puVar4 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar35 = *(undefined8 *)((long)puVar1 + lVar37);
    func_0x000107c5cbe4(uVar35);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar40 = (long)_DAT_112776ae8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar40);
    *(undefined8 **)((long)puVar1 + lVar40) = puVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(puVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar37);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c3ec1c(puVar1);
    func_0x000107c61180();
    uVar35 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar37 = (long)_DAT_112776aec;
    uVar36 = *(undefined8 *)((long)puVar1 + lVar37);
    *(undefined8 *)((long)puVar1 + lVar37) = uVar35;
    func_0x000107c61170(uVar36);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_78 = *(undefined8 *)((long)puVar1 + lVar38);
    uStack_70 = *(undefined8 *)((long)puVar1 + lVar39);
    uStack_68 = *(undefined8 *)((long)puVar1 + lVar40);
    uStack_60 = *(undefined8 *)((long)puVar1 + lVar37);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d048(puVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c3c59c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  func_0x000107c60e78();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b52f0;
  func_0x000107c610fc();
  lVar39 = (long)_DAT_112776af0;
  uVar35 = *(undefined8 *)((long)puVar7 + lVar39);
  *(undefined **)((long)puVar7 + lVar39) = puVar2;
  func_0x000107c61170(uVar35);
  puVar2 = PTR_PTR_1126b52f0;
  func_0x000107c610fc();
  lVar38 = (long)_DAT_112776af4;
  uVar35 = *(undefined8 *)((long)puVar7 + lVar38);
  *(undefined **)((long)puVar7 + lVar38) = puVar2;
  func_0x000107c61170(uVar35);
  puVar2 = PTR_PTR_1126b52f0;
  func_0x000107c610fc();
  lVar40 = (long)_DAT_112776af8;
  uVar35 = *(undefined8 *)((long)puVar7 + lVar40);
  *(undefined **)((long)puVar7 + lVar40) = puVar2;
  func_0x000107c61170(uVar35);
  func_0x000107c5a378(*(undefined8 *)((long)puVar7 + lVar40));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar35 = *(undefined8 *)((long)puVar7 + lVar40);
  func_0x000107c5a92c(uVar35);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar35);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af8c(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar35 = *(undefined8 *)((long)puVar7 + lVar40);
  func_0x000107c5a92c(uVar35);
  func_0x000107c61180();
  func_0x000107c59a18();
  func_0x000107c61170(uVar35);
  func_0x000107c61170(puVar2);
  uVar35 = *(undefined8 *)((long)puVar7 + lVar40);
  func_0x000107c5a92c(uVar35);
  func_0x000107c61180();
  dVar41 = 1.0;
  func_0x000107c55f94(0x3ff0000000000000);
  func_0x000107c61170(uVar35);
  func_0x000107c550d8(*(undefined8 *)((long)puVar7 + lVar40));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar35 = *(undefined8 *)((long)puVar7 + lVar39);
  func_0x000107c5a92c(uVar35);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar35);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar35 = *(undefined8 *)((long)puVar7 + lVar38);
  func_0x000107c5a92c(uVar35);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar35);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(*(undefined8 *)((long)puVar7 + lVar39));
  func_0x000107c5a050(*(undefined8 *)((long)puVar7 + lVar38));
  func_0x000107c5a050(*(undefined8 *)((long)puVar7 + lVar40));
  func_0x000107c3c400(puVar7);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3e898();
  func_0x000107c61180();
  func_0x000107c4d154(dVar41,0);
  func_0x000107c3d5b0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),dVar41,0,0x3ff921fb54442d18,
                      puVar1);
  func_0x000107c3d738(dVar41,dVar41,puVar1);
  func_0x000107c3fc28(puVar1);
  func_0x000107c60888(auStack_1e0,0x3ff921fb54442d18);
  dVar42 = -dVar41;
  func_0x000107c6089c(auStack_1b0,0,dVar42,auStack_1e0);
  func_0x000107c3e050(puVar1);
  func_0x000107c60888(auStack_1e0,0x3ff921fb54442d18);
  func_0x000107c6089c(auStack_1b0,0,dVar42,auStack_1e0);
  func_0x000107c3e050(puVar1);
  func_0x000107c61178(puVar1);
  func_0x000107c3ab30();
  uVar35 = *(undefined8 *)((long)puVar7 + lVar39);
  func_0x000107c5a92c(uVar35);
  func_0x000107c61180();
  func_0x000107c57274();
  func_0x000107c61170(uVar35);
  func_0x000107c60888(auStack_1e0,0x3ff921fb54442d18);
  func_0x000107c6089c(auStack_1b0,0,dVar42,auStack_1e0);
  func_0x000107c3e050(puVar1);
  func_0x000107c61178();
  func_0x000107c3ab30();
  uVar35 = *(undefined8 *)((long)puVar7 + lVar38);
  func_0x000107c5a92c();
  func_0x000107c61180();
  func_0x000107c57274();
  func_0x000107c61170(uVar35);
  func_0x000107c3d89c(puVar7);
  func_0x000107c3d89c(puVar7);
  func_0x000107c3d89c(puVar7);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc();
  uVar8 = *(undefined8 *)((long)puVar7 + lVar39);
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar37 = (long)_DAT_112776adc;
  uVar9 = *(undefined8 *)((long)puVar7 + lVar37);
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar10 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)((long)puVar7 + lVar39);
  uStack_180 = uVar10;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x000107c40290(dVar41);
  func_0x000107c61180();
  uVar13 = *(undefined8 *)((long)puVar7 + lVar39);
  uStack_178 = uVar12;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c40290(dVar41);
  func_0x000107c61180();
  uVar15 = *(undefined8 *)((long)puVar7 + lVar39);
  uStack_170 = uVar14;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar16 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)((long)puVar7 + lVar38);
  uStack_168 = uVar16;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)((long)puVar7 + lVar37);
  func_0x000107c50890();
  func_0x000107c61180();
  uVar19 = uVar17;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar20 = *(undefined8 *)((long)puVar7 + lVar38);
  uStack_160 = uVar19;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar21 = uVar20;
  func_0x000107c40290(dVar41);
  func_0x000107c61180();
  uVar22 = *(undefined8 *)((long)puVar7 + lVar38);
  uStack_158 = uVar21;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar23 = uVar22;
  func_0x000107c40290(dVar41);
  func_0x000107c61180();
  uVar24 = *(undefined8 *)((long)puVar7 + lVar38);
  uStack_150 = uVar23;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar4 = puVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar25 = uVar24;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar26 = *(undefined8 *)((long)puVar7 + lVar40);
  uStack_148 = uVar25;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar27 = *(undefined8 *)((long)puVar7 + lVar37);
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar28 = uVar26;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar29 = *(undefined8 *)((long)puVar7 + lVar40);
  uStack_140 = uVar28;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar30 = *(undefined8 *)((long)puVar7 + lVar37);
  func_0x000107c50890();
  func_0x000107c61180();
  uVar36 = uVar29;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar31 = *(undefined8 *)((long)puVar7 + lVar40);
  uStack_138 = uVar36;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar32 = *(undefined8 *)((long)puVar7 + lVar37);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar31;
  func_0x000107c40280();
  func_0x000107c61180();
  uVar33 = *(undefined8 *)((long)puVar7 + lVar40);
  uStack_130 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar34 = *(undefined8 *)((long)puVar7 + lVar37);
  func_0x000107c5cbe4(uVar34);
  func_0x000107c61180();
  uVar35 = uVar33;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_128 = uVar35;
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61170(puVar6);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c3fdd8(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 10087a820; end: 10087b07f; -[SCSwipeViewContainerView _setRoundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087a820(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  puVar1 = PTR_PTR_1126b52f0;
  func_0x000107c610fc();
  lVar15 = (long)_DAT_112776af0;
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  func_0x000107c61170(uVar12);
  puVar1 = PTR_PTR_1126b52f0;
  func_0x000107c610fc();
  lVar14 = (long)_DAT_112776af4;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  func_0x000107c61170(uVar12);
  puVar1 = PTR_PTR_1126b52f0;
  func_0x000107c610fc();
  lVar16 = (long)_DAT_112776af8;
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  func_0x000107c61170(uVar12);
  func_0x000107c5a378(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c5a92c(uVar12);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af8c(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x20,0x21);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c5a92c(uVar12);
  func_0x000107c61180();
  func_0x000107c59a18();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c5a92c(uVar12);
  func_0x000107c61180();
  dVar17 = 1.0;
  func_0x000107c55f94(0x3ff0000000000000);
  func_0x000107c61170(uVar12);
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar16),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x000107c5a92c(uVar12);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x000107c5a92c(uVar12);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar1);
  func_0x000107c5a050(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x000107c5a050(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x000107c5a050(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x000107c3c400(param_1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3e898();
  func_0x000107c61180();
  func_0x000107c4d154(dVar17,0);
  func_0x000107c3d5b0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),dVar17,0,0x3ff921fb54442d18,
                      puVar2,param_2,1);
  func_0x000107c3d738(dVar17,dVar17,puVar2);
  func_0x000107c3fc28(puVar2);
  func_0x000107c60888(auStack_150,0x3ff921fb54442d18);
  dVar18 = -dVar17;
  func_0x000107c6089c(auStack_120,0,dVar18,auStack_150);
  func_0x000107c3e050(puVar2,param_2,auStack_120);
  func_0x000107c60888(auStack_150,0x3ff921fb54442d18);
  func_0x000107c6089c(auStack_120,0,dVar18,auStack_150);
  func_0x000107c3e050(puVar2,param_2,auStack_120);
  func_0x000107c61178(puVar2);
  func_0x000107c3ab30();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x000107c5a92c(uVar12);
  func_0x000107c61180();
  func_0x000107c57274();
  func_0x000107c61170(uVar12);
  func_0x000107c60888(auStack_150,0x3ff921fb54442d18);
  func_0x000107c6089c(auStack_120,0,dVar18,auStack_150);
  func_0x000107c3e050(puVar2,param_2,auStack_120);
  func_0x000107c61178();
  func_0x000107c3ab30();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x000107c5a92c();
  func_0x000107c61180();
  func_0x000107c57274();
  func_0x000107c61170(uVar12);
  func_0x000107c3d89c(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x000107c3d89c(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  func_0x000107c3d89c(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  puStack_158 = puVar1;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar13 = (long)_DAT_112776adc;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  uStack_160 = uVar3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uStack_168 = uVar12;
  func_0x000107c40280(uVar3,param_2,uVar12);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_170 = uVar3;
  uStack_f0 = uVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uStack_178 = uVar12;
  func_0x000107c40290(dVar17);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_180 = uVar12;
  uStack_e8 = uVar12;
  func_0x000107c5e308();
  func_0x000107c61180();
  uStack_188 = uVar3;
  func_0x000107c40290(dVar17);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_190 = uVar3;
  uStack_e0 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar15 = param_1;
  uStack_198 = uVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lStack_1a0 = lVar15;
  func_0x000107c40280(uVar12,param_2,lVar15);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_1a8 = uVar12;
  uStack_d8 = uVar12;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  uStack_1b0 = uVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  uStack_1b8 = uVar12;
  func_0x000107c40280(uVar3,param_2,uVar12);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_1c0 = uVar3;
  uStack_d0 = uVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uStack_1c8 = uVar12;
  func_0x000107c40290(dVar17);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_1d0 = uVar12;
  uStack_c8 = uVar12;
  func_0x000107c5e308();
  func_0x000107c61180();
  uStack_1d8 = uVar3;
  func_0x000107c40290(dVar17);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_1e0 = uVar3;
  uStack_c0 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar15 = param_1;
  uStack_1e8 = uVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lStack_1f0 = lVar15;
  func_0x000107c40280(uVar12,param_2,lVar15);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_1f8 = uVar12;
  uStack_b8 = uVar12;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  uStack_200 = uVar3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uStack_208 = uVar12;
  func_0x000107c40280(uVar3,param_2,uVar12);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_210 = uVar3;
  uStack_b0 = uVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_218 = uVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c40280(uVar4,param_2,uVar5);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_a8 = uVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40280(uVar6,param_2,uVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  uStack_a0 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar12 = uVar8;
  func_0x000107c40280(uVar8,param_2,uVar9);
  func_0x000107c61180();
  uVar11 = 0xc;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar12;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0);
  func_0x000107c61180();
  func_0x000107c3d7a0(puStack_158,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uStack_218);
  func_0x000107c61170(uStack_210);
  func_0x000107c61170(uStack_208);
  func_0x000107c61170(uStack_200);
  func_0x000107c61170(uStack_1f8);
  func_0x000107c61170(lStack_1f0);
  func_0x000107c61170(uStack_1e8);
  func_0x000107c61170(uStack_1e0);
  func_0x000107c61170(uStack_1d8);
  func_0x000107c61170(uStack_1d0);
  func_0x000107c61170(uStack_1c8);
  func_0x000107c61170(uStack_1c0);
  func_0x000107c61170(uStack_1b8);
  func_0x000107c61170(uStack_1b0);
  func_0x000107c61170(uStack_1a8);
  func_0x000107c61170(lStack_1a0);
  func_0x000107c61170(uStack_198);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(uStack_188);
  func_0x000107c61170(uStack_180);
  func_0x000107c61170(uStack_178);
  func_0x000107c61170(uStack_170);
  func_0x000107c61170(uStack_168);
  func_0x000107c61170(uStack_160);
  puVar1 = puStack_158;
  puVar10 = puStack_158;
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  func_0x000107c60e78();
  pcStack_228 = FUN_10087b080;
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc0000000;
  pcStack_258 = FUN_10087b0e8;
  puStack_250 = &UNK_110d65fb8;
  puStack_248 = puVar2;
  puStack_240 = puVar10;
  uStack_238 = uVar11;
  puStack_230 = &stack0xfffffffffffffff0;
  func_0x000107c3fdd8(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,&puStack_268);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087b080; end: 10087b0e7;  */

void FUN_10087b080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10087b0e8;
  puStack_30 = &UNK_110d65fb8;
  uStack_28 = param_1;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c3fdd8(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,&puStack_48);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087b0e8; end: 10087b0f7;  */

void FUN_10087b0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sig_color_compositedAgainstBack_11258c9c8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10087b0f8; end: 10087b24b;  */

void FUN_10087b0f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  if ((param_4 == 0x21) && ((param_3 == 0x6b || (param_3 == 0x2c)))) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x27);
    func_0x000107c61180();
  }
  else {
    FUN_10052bbec();
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c3fdc0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    FUN_10052bbec();
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c3fdc0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c44248(uVar1,param_2,&dStack_38,&dStack_40,&dStack_48,&dStack_50);
    func_0x000107c44248(uVar2,param_2,&dStack_58,&dStack_60,&dStack_68,auStack_70);
    dVar4 = 1.0 - dStack_50;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fde8(dStack_58 * dVar4 + dStack_50 * dStack_38,
                        dVar4 * dStack_60 + dStack_50 * dStack_40,
                        dVar4 * dStack_68 + dStack_50 * dStack_48,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10087b24c; end: 10087b26f; -[SCSwipeViewContainerView _roundedCornerRadius] */

undefined8 FUN_10087b24c(int param_1)

{
  undefined8 uVar1;
  
  FUN_100478f84();
  uVar1 = 0x402a000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4020000000000000;
  }
  return uVar1;
}



/* Entry: 10087b270; end: 10087b2b7; -[SCSwipeViewContainerView setHideCorners:] */

/* WARNING: Possible PIC construction at 0x00010087b298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087b29c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776af0),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 10087b2b8; end: 10087b3a7; -[SCSwipeViewContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b2b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x000107c5deb8(*(undefined8 *)(param_1 + _DAT_112776b04));
  if (*(long *)(param_1 + _DAT_112776b18) != 0) {
    func_0x000107c3ae2c(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b0c);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5de64(param_1);
  func_0x000107c61180();
  func_0x000107c497c4(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b1c);
  func_0x000107c3c7b4(param_1);
  func_0x000107c52e08(uVar1);
  func_0x000107c5deb4(*(undefined8 *)(param_1 + _DAT_112776b08));
  return;
}



/* Entry: 10087b3a8; end: 10087b42f; -[SCSwipeViewContainerViewController _attachUIToLoadedView:] */

/* WARNING: Possible PIC construction at 0x00010087b418: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c4a714();
  if ((int)lVar1 != 0) {
    func_0x000107c3d614(param_1,param_2,param_3);
    uVar2 = param_3;
    func_0x000107c5de64(param_3);
    func_0x000107c61180();
    func_0x000107c537d8(*(undefined8 *)(param_1 + _DAT_112776b1c),param_2,uVar2);
    func_0x000107c41c30(param_3,param_2,param_1);
    param_3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10087b430; end: 10087b6b7; -[SCSwipeViewContainerView setContainedView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b430(long param_1,undefined8 param_2,undefined *param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  func_0x000107c61174(param_3);
  lVar16 = (long)_DAT_112776afc;
  func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar16));
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = param_3;
  func_0x000107c61170(uVar2);
  if (param_3 != (undefined *)0x0) {
    func_0x000107c5a050(param_3);
    func_0x000107c49778(*(undefined8 *)(param_1 + _DAT_112776adc));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = param_3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar16 = param_1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar5 = param_3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar6 = param_1;
    func_0x000107c3ec1c(param_1);
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = param_3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar9 = param_1;
    func_0x000107c4ace0(param_1);
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = param_3;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c50890(param_1);
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    param_4 = 4;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    puVar14 = puVar13;
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  func_0x000107c60e78();
  param_3[0x28] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar14,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_3 + 0x40));
  return;
}



/* Entry: 10087b6b8; end: 10087b6cb; -[SCPanningTransitionCoordinator installOnView:useDirectionalLock:] */

void FUN_10087b6b8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10087b6cc; end: 10087b74f; -[SCSwipeViewContainerViewController _shouldShowBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10087b6cc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112776b2c);
  func_0x000107c4a76c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5ae48();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x000107c5ce94(param_1);
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5d9c8();
    bVar1 = lVar4 == 2;
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(uVar2);
  return bVar1;
}



/* Entry: 10087b750; end: 10087b757; -[SIGFooterItemConfig showBorderAroundView] */

undefined1 FUN_10087b750(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10087b758; end: 10087b76b; -[SCSwipeViewContainerView setBorderVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b758(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776af8),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 10087b76c; end: 10087b797; -[SCPageLoadTrace viewDidLoad] */

void FUN_10087b76c(long param_1,undefined8 param_2)

{
  func_0x000107c42880(param_1,param_2,*(undefined8 *)(param_1 + 0x10),4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10087b798; end: 10087b823; -[SCPageLoadTrace endSpan:forLifecycleMethod:] */

/* WARNING: Possible PIC construction at 0x00010087b7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087b808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087b7e0) */
/* WARNING: Removing unreachable block (ram,0x00010087b80c) */

void FUN_10087b798(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c4e29c();
    func_0x000107c61180();
    FUN_100878714();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10087b824; end: 10087b8a7; -[SCSwipeViewContainerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c5df30(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  func_0x000107c5722c(param_1);
  func_0x000107c5df2c(*(undefined8 *)(param_1 + _DAT_112776b08));
  return;
}



/* Entry: 10087b8a8; end: 10087b8b7; -[SCViewControllerLifecycleChecker viewWillAppear:animated:] */

void FUN_10087b8a8(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return;
}



/* Entry: 10087b8b8; end: 10087b8d3; -[SCSwipeViewContainerViewController setPartiallyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b8b8(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112776ad4) != param_3) {
    *(char *)(param_1 + _DAT_112776ad4) = (char)param_3;
  }
  return;
}



/* Entry: 10087b8d4; end: 10087b8fb; -[SCPageLoadTrace viewWillAppear] */

void FUN_10087b8d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3e7fc(param_1,param_2,5);
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Entry: 10087b8fc; end: 10087b97b; -[SCMainCameraScreenRootViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b8fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f06c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127433dc);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x000107c5df34(PTR_PTR_1126bd5f8);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10087b97c; end: 10087ba03; +[SCViewControllerLifecycleEvent viewWillAppearWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087b97c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113082590) = 1;
  *(undefined1 *)(lVar1 + _DAT_113082598) = param_3;
  *(undefined1 *)(lVar1 + _DAT_1130825a0) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825a8) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825b0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087ba04; end: 10087ba17;  */

void FUN_10087ba04(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010087ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10087ba18; end: 10087babf;  */

/* WARNING: Possible PIC construction at 0x00010087ba8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087ba90) */

void FUN_10087ba18(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28) != 0) {
    lVar1 = param_2 + 0x28;
    func_0x000107c61148(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    dVar3 = param_1;
    func_0x000107c4223c(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
    func_0x000107c3ce2c(param_1 - dVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10087bac0; end: 10087bac3;  */

void FUN_10087bac0(void)

{
  return;
}



/* Entry: 10087bac4; end: 10087bb73; -[SCMainCameraViewController viewWillAppear:] */

void FUN_10087bac4(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8338;
  uStack_30 = param_2;
  func_0x000107c61154(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_2;
  func_0x000107c5de64(param_2);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c609cc();
  func_0x000107c5dea4(-param_1,param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c5debc(param_2);
  func_0x000107c500a0(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3e2b4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10087bb74; end: 10087bbcf; -[SCCameraViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087bb74(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8378;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x000107c4e5e4(*(undefined8 *)(param_1 + _DAT_1127624cc));
  return;
}



/* Entry: 10087bbd0; end: 10087c26b; -[SCCameraViewControllerStartupWorkflow performViewWillAppear:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar17;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_7);
  puVar1 = param_7;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3f084();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4008c();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3f108();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5acfc();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  if ((int)puVar6 != 0) {
    *(undefined1 *)(param_5 + _DAT_1127626ec) = 0;
  }
  puVar1 = param_7;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ded8();
  puVar3 = param_7;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  func_0x000107c52814(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c40534();
    if (puVar2 == (undefined *)0x1) goto LAB_10087bd00;
  }
  func_0x000107c50578(param_5);
LAB_10087bd00:
  func_0x000107c61144(auStack_78,param_7);
  puVar2 = param_7;
  func_0x000107c4f078();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c51764();
  func_0x000107c61170(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000107c4ecd4(param_7);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    func_0x000107c59854();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c51750();
    puVar5 = param_7;
    func_0x000107c4ecbc();
    func_0x000107c61170(puVar2);
    if (puVar4 != puVar5) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c61180();
      func_0x000107c4ecbc(param_7);
      func_0x000107c517f0(puVar2);
      func_0x000107c61170(puVar2);
    }
  }
  puVar4 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae960;
  puVar5 = PTR_PTR_1126c82e8;
  func_0x000107c5df2c(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar2);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  uVar7 = 0x15;
  FUN_1000819a8(0x15,0);
  func_0x000107c61180();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10700ad94;
  puStack_88 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c5e070(puVar4);
  func_0x000107c611b0();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  puVar2 = param_7;
  func_0x000107c3f07c();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c43048();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  if ((int)puVar5 != 0) {
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126c82e8;
    func_0x000107c5df2c(PTR_PTR_1126c82e8);
    func_0x000107c61180();
    func_0x000107c3f044(puVar2);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    func_0x000107c6111c(auStack_a8,auStack_78);
    func_0x000107c5e070(puVar4);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61120(auStack_a8);
  }
  lVar17 = (long)_DAT_1127626d0;
  uVar8 = *(undefined8 *)(param_5 + lVar17);
  func_0x000107c3f0f4();
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  uVar9 = uVar7;
  func_0x000107c3f630();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_5 + lVar17);
  func_0x000107c3f0f4(uVar10);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c40794();
  uVar14 = *(undefined8 *)(param_5 + lVar17);
  func_0x000107c3f0f4(uVar14);
  func_0x000107c61180();
  uVar15 = uVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar16 = uVar15;
  func_0x000107c4c238();
  func_0x000107c61180();
  func_0x000107c5bb2c(param_7);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c5bb28(param_7);
  puVar2 = param_7;
  func_0x000107c3f1ac(param_7);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5de88();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bd5f8;
  func_0x000107c5df34(PTR_PTR_1126bd5f8);
  func_0x000107c61180();
  func_0x000107c4d664(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(param_5 + _DAT_1127626e4);
  puVar2 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c5df38(param_3,param_4,uVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c4bd58(param_5);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  return;
}



/* Entry: 10087c26c; end: 10087c283; -[SCCameraLaunchingConfigurationImpl shouldResetDismissalLatchOnAppear] */

void FUN_10087c26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5398,0,0);
  return;
}



/* Entry: 10087c284; end: 10087c28b; -[SCCameraViewControllerInternalState appearanceState] */

undefined8 FUN_10087c284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10087c28c; end: 10087c293; -[SCCameraViewControllerInternalState setAppearanceState:] */

void FUN_10087c28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10087c294; end: 10087c29b; -[SCMainCameraViewController prefersStatusBarHidden] */

undefined8 FUN_10087c294(void)

{
  return 0;
}



/* Entry: 10087c29c; end: 10087c317;  */

void FUN_10087c29c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c4a50c();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1128d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previousStatusBarStyle_112622450);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c252e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_statusBarStyle_1126725a8);
  return;
}



/* Entry: 10087c318; end: 10087c35b; -[SCCameraViewController preferredStatusBarStyle] */

bool FUN_10087c318(long param_1)

{
  long lVar1;
  
  func_0x000107c3f1ac();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c40534();
  func_0x000107c61170(param_1);
  return (lVar1 - 3U & 0xfffffffffffffffd) != 0;
}



/* Entry: 10087c35c; end: 10087c363; +[SCAttributedCameraTask viewWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087c35c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x16;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087c364; end: 10087c437; -[SCCameraCircumstanceEngineImpl fetchContextualPermissionsEnabled] */

undefined8 FUN_10087c364(long param_1)

{
  undefined8 uVar1;
  
  if (lRam00000001136bc4f0 != -1) {
    FUN_10002a2fc(0x1136bc4f0,&PTR___NSConcreteGlobalBlock_110890380);
  }
  if ((bRam00000001136bc4e8 & 1) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5358,0,0);
  return uVar1;
}



/* Entry: 10087c438; end: 10087c973; -[SCMainCameraViewController startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087c438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_80,param_1);
  lVar6 = (long)_DAT_11276235c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c5bce8();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_100c3d504;
    puStack_90 = &UNK_11090d240;
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c41948();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_100c42220;
    puStack_b8 = &UNK_11086e3f0;
    func_0x000107c6111c(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4b5d4();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    puStack_e8 = &UNK_106fea018;
    puStack_e0 = &UNK_11090d210;
    func_0x000107c6111c(auStack_d8,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c52094();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    puStack_110 = &UNK_100c3c3ac;
    puStack_108 = &UNK_110872b30;
    func_0x000107c6111c(auStack_100,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_148 = puVar1;
    uStack_140 = 0xc2000000;
    puStack_138 = &UNK_106fea104;
    puStack_130 = &UNK_11084e400;
    func_0x000107c6111c(auStack_128,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_150,auStack_80);
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_150);
    func_0x000107c61120(auStack_128);
    func_0x000107c61120(auStack_100);
    func_0x000107c61120(auStack_d8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087c974; end: 10087c9a7; -[SCManagedCapturerStateCoordinatorImpl lensesStateManager] */

void FUN_10087c974(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10087c9c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10087c9a8; end: 10087c9c7;  */

void FUN_10087c9a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7cf0);
  return;
}



/* Entry: 10087c9c8; end: 10087ca7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10087c9c8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112da08d0;
  plVar5 = &lStack_50;
  puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112da08d0);
  puVar8 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da08c0);
    lVar3 = 0;
    FUN_10087c9a8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112da0830) = uVar7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar5;
    func_0x000107c61174();
    FUN_10011ecd0(uVar7);
    puVar8 = (undefined1 *)plVar5;
  }
  func_0x00010011ece0(puVar6);
  return puVar8;
}



/* Entry: 10087ca7c; end: 10087ca9b; -[SCManagedCapturerLensesStateManagerImpl updateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087ca7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112da0830) + _DAT_112da0948));
  return;
}



/* Entry: 10087ca9c; end: 10087cc3b; -[SCCameraViewController startObservingCameraHardwareRequestHandlerUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087ca9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar8 = (long)_DAT_1127625dc;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    func_0x000107c61170(uVar7);
    func_0x000107c61144(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127624f8);
    func_0x000107c5036c(uVar2);
    func_0x000107c61180();
    uVar7 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar7;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    uVar4 = uVar3;
    FUN_100078e94();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c4da88(uVar3);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar6 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  return;
}



/* Entry: 10087cc3c; end: 10087cc9b;  */

void FUN_10087cc3c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0)) {
    param_1 = param_1 + 0x38;
    func_0x000107c61148(param_1);
    func_0x000107c3c32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10087cc9c; end: 10087ccef; -[SCCameraUIHardwareOwnershipRequestHandler _requestCameraHandwareOwnership] */

/* WARNING: Possible PIC construction at 0x00010087ccdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087cce0) */

void FUN_10087cc9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c503d4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10087ccf0; end: 10087cd0f;  */

void FUN_10087ccf0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d79e8);
  return;
}



/* Entry: 10087cd10; end: 10087cd3f;  */

void FUN_10087cd10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10087ccf0();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10087cd40; end: 10087cdcb; -[_TtC38SCCameraHardwareOwnershipRequesterImpl38SCCameraHardwareOwnershipRequesterImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087cd40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112da0688;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112da0690) = 0;
  lVar1 = _DAT_112da0698;
  FUN_10087cdec();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10087cdcc; end: 10087cdeb;  */

void FUN_10087cdcc(void)

{
  func_0x000107c61168(&PTR_PTR_112da06e0);
  return;
}



/* Entry: 10087cdec; end: 10087cef7;  */

undefined * FUN_10087cdec(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  FUN_10087cdcc();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar1 = PTR_PTR_1126c7818;
  func_0x000107c610f8(PTR_PTR_1126c7818);
  pcStack_40 = FUN_1008baf74;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1008baf04;
  puStack_48 = &UNK_1103bdf80;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c47608(puVar1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_38);
  puVar3 = &UNK_10d9436d0;
  func_0x0001000c10c0(&UNK_10d9436d0);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126a70e0;
  func_0x000107c610f8(PTR_PTR_1126a70e0);
  func_0x000107c46484();
  func_0x000107c61574(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(puVar3);
  return puVar4;
}



/* Entry: 10087cef8; end: 10087cf0b;  */

void FUN_10087cef8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10087cf0c; end: 10087cf47; -[_TtC38SCCameraHardwareOwnershipRequesterImpl38SCCameraHardwareOwnershipRequesterImpl requestOwnershipForOwnerType:] */

void FUN_10087cf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10087cf48(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10087cf48; end: 10087d007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10087cf48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  lVar1 = param_1;
  FUN_10087cdcc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_1;
  lVar2 = 0;
  FUN_10087d008();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar4 = lVar3 + _DAT_112da0658;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  *(undefined ***)(lVar4 + 8) = &PTR_DAT_1103bdf20;
  func_0x000107c61604();
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c50404(*(undefined8 *)(unaff_x20 + _DAT_112da0698));
  func_0x000107c61574(lVar1);
  return (undefined1 *)plVar5;
}



/* Entry: 10087d008; end: 10087d027;  */

void FUN_10087d008(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7910);
  return;
}



/* Entry: 10087d028; end: 10087d02f; -[SCStateOrchestrator requestStateChange:requester:] */

void FUN_10087d028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestStateChange_requester_com_11262b420,param_3,param_4,0);
  return;
}



/* Entry: 10087d030; end: 10087d347; -[SCStateOrchestrator requestStateChange:requester:completion:] */

void FUN_10087d030(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c611ec(param_1 + 0x18);
  uVar9 = param_1;
  func_0x000107c61158();
  func_0x000107c5acb8();
  if ((uVar9 & 1) == 0) {
    puVar1 = PTR_PTR_1126de9c0;
    func_0x000107c610f4(PTR_PTR_1126de9c0);
    func_0x000107c489b4();
    func_0x000107c56bcc(*(undefined8 *)(param_1 + 8));
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c4ff88(*(undefined8 *)(param_1 + 8));
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000107c60ae8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c43638();
  func_0x000107c61180();
  for (uVar5 = 1; uVar6 = uVar2, func_0x000107c40808(), uVar5 < uVar6; uVar5 = uVar5 + 1) {
    uVar8 = *(ulong *)(param_1 + 0x38);
    uVar6 = uVar2;
    func_0x000107c4d9a4(uVar2);
    func_0x000107c61180();
    func_0x000107c4fb34();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    uVar3 = uVar8;
  }
  uVar5 = uVar3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar6 = uVar5;
  if (uVar5 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x48);
  }
  func_0x000107c61174(uVar6);
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  if ((int)uVar9 != 0) {
    uVar5 = param_1;
    func_0x000107c61158();
    func_0x000107c4c3d0();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
  }
  func_0x000107c4d664(*(undefined8 *)(param_1 + 0x40));
  uVar9 = *(ulong *)(param_1 + 0x10);
  func_0x000107c61174(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar5;
  func_0x000107c61170(uVar4);
  if (param_5 != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,uVar9 != uVar5);
    }
    else {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        func_0x000107c61174(param_5);
        func_0x000107c4e590(lVar7);
      }
      else {
        func_0x000107c61174(param_5);
        func_0x000107c4e524(lVar7);
      }
      func_0x000107c61170(param_5);
    }
  }
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c611f0(param_1 + 0x18);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087d348; end: 10087d353; +[SCStateOrchestrator shouldRemoveState:] */

bool FUN_10087d348(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}


