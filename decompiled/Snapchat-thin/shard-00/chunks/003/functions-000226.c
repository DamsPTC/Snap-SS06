/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005288b4; end: 10052894f; -[SCMergedObserver initWithObservableCount:observer:] */

undefined1 *
FUN_1005288b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e5f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100528950; end: 100528997;  */

void FUN_100528950(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100528998; end: 10052899f; -[SCMergedObserver next:] */

void FUN_100528998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028);
  return;
}



/* Entry: 1005289a0; end: 100528a27; -[SCPlusGatingStateValue isEqual:] */

bool FUN_1005289a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100528a28; end: 100528a5f;  */

void FUN_100528a28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100528a60; end: 100528c1b; -[SCPlusSubscriptionInfo isEqual:] */

bool FUN_100528a60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      func_0x000107c61158(param_1);
      uVar2 = param_3;
      func_0x000107c6115c(param_3,uVar1);
      if (((((uVar2 & 1) != 0) &&
           ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
              (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
             (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
            ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
             (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))))) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
         (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
           (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
          ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) {
        dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar3 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30)) < dVar4;
            goto LAB_100528bc8;
          }
        }
      }
      bVar3 = false;
    }
  }
LAB_100528bc8:
  func_0x000107c61170(param_3);
  return bVar3;
}



/* Entry: 100528c1c; end: 100528ce3; -[SCMultiDisposable initWithDisposables:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100528c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e4c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127966cc) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100528ce4; end: 100528dc7;  */

void FUN_100528ce4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x38);
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
  (**(code **)(lVar6 + 0x10))(lVar6,uVar2);
  if ((int)lVar6 != 0) {
    uVar3 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c4a564();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    if ((uVar5 & 1) != 0) {
      func_0x000107c61170(uVar1);
      if (*(long *)(param_1 + 0x30) != 0) {
        func_0x000107c426e0();
      }
      goto LAB_100528d98;
    }
  }
  func_0x000107c61170(uVar1);
LAB_100528d98:
  func_0x000107c610f4(PTR_PTR_1126d1a20);
  func_0x000107c4899c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100528dc8; end: 100528ddf;  */

void FUN_100528dc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b2f8,0,0);
  return;
}



/* Entry: 100528de0; end: 100528e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100528de0(long param_1,undefined8 param_2)

{
  func_0x000107c4d9c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112796818),param_2,
                      param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100528e10; end: 100528ed7;  */

void FUN_100528e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c4d9a4(param_2);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9a4(param_2);
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4d9a4(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 100528ed8; end: 1005291cf;  */

void FUN_100528ed8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  func_0x000107c61174(param_3);
  puVar7 = *(undefined **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = puVar7;
  func_0x000107c4ea40();
  func_0x000107c61180();
  puVar8 = puVar1;
  FUN_100529264();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar7);
  lVar2 = param_2;
  func_0x000107c5bcc0();
  func_0x000107c61170(param_2);
  if (lVar2 == 3) {
LAB_100528fb4:
    if (puVar8 != (undefined *)0x0) goto LAB_100529188;
  }
  else {
    puVar1 = puVar8;
    func_0x000107c4442c();
    func_0x000107c61180();
    puVar7 = puVar1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    puVar3 = puVar7;
    func_0x000106c4f910();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar1);
    if (((ulong)puVar3 & 1) != 0) goto LAB_100528fb4;
    func_0x000107c61170(puVar8);
  }
  lVar2 = param_3;
  func_0x000107c5bcc0();
  if (lVar2 == 3) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c3dea4();
    func_0x000107c61180();
    lVar5 = lVar2;
    func_0x000107c4adac();
    if (lVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar2;
      func_0x000106c4f30c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar5;
        func_0x000106c4f368(lVar5);
        func_0x000107c61180();
        puVar8 = PTR_PTR_1126d1a68;
        func_0x000107c61160(PTR_PTR_1126d1a68);
        puVar1 = PTR_PTR_1126d1aa0;
        func_0x000107c61160(PTR_PTR_1126d1aa0);
        func_0x000107c52fa4(puVar8);
        func_0x000107c61170(puVar1);
        puVar1 = PTR_PTR_1126d1aa8;
        func_0x000107c61160(PTR_PTR_1126d1aa8);
        puVar7 = puVar8;
        func_0x000107c3f040(puVar8);
        func_0x000107c61180();
        func_0x000107c531b0();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar1);
        puVar1 = puVar8;
        func_0x000107c3f040(puVar8);
        func_0x000107c61180();
        puVar7 = puVar1;
        func_0x000107c3f570();
        func_0x000107c61180();
        func_0x000107c53598();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar1);
        puVar1 = PTR_PTR_1126d1ab0;
        func_0x000107c61160(PTR_PTR_1126d1ab0);
        puVar7 = puVar8;
        func_0x000107c3f040(puVar8);
        func_0x000107c61180();
        func_0x000107c531cc();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar1);
        puVar1 = puVar8;
        func_0x000107c3f040(puVar8);
        func_0x000107c61180();
        puVar7 = puVar1;
        func_0x000107c3f5a0();
        func_0x000107c61180();
        func_0x000107c53598();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
LAB_100529188:
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c4e01c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005291d0; end: 1005291e3; -[SCFeatureSettingsService plusCustomAppThemeProto] */

void FUN_1005291d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e7b938,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 1005291e4; end: 100529253; -[SCFeatureSettingsService _stringForFeatureSetting:defaultValue:] */

void FUN_1005291e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c5dc18(param_1,param_2,param_3);
  func_0x000107c61180();
  lVar1 = param_4;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  func_0x000107c61174(lVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100529254; end: 100529263; -[SCUserProperties valString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100529254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733194);
}



/* Entry: 100529264; end: 100529327;  */

void FUN_100529264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c412e0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4adac();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126d1a68;
      func_0x000107c610f4(PTR_PTR_1126d1a68);
      func_0x000107c4636c();
      func_0x000107c61174(puVar3);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100529328; end: 100529373;  */

void FUN_100529328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c45920();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100529374; end: 1005293db; +[SCPlusCustomAppThemeCustomAppTheme descriptor] */

void FUN_100529374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6e98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25a10,
                        &PTR____CFConstantStringClassReference_110e7c418,&PTR_DAT_113179470,
                        &PTR_s_camera_113179888,5,0x28,0x1c);
    puRam00000001136c6e98 = puVar1;
  }
  return;
}



/* Entry: 1005293dc; end: 100529443; +[SCPlusCustomAppThemeGlobalTheme descriptor] */

void FUN_1005293dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25a60,
                        &PTR____CFConstantStringClassReference_110e7c438,&PTR_DAT_113179470,
                        &PTR_DAT_113179488,1,0x10,0x1c);
    puRam00000001136c6ea0 = puVar1;
  }
  return;
}



/* Entry: 100529444; end: 100529453; -[SCPlusGatingStateValue state] */

undefined8 FUN_100529444(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100529454; end: 10052949b;  */

/* WARNING: Possible PIC construction at 0x000100529488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010052948c) */

void FUN_100529454(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10052949c; end: 10052957f; -[SCPlusThemeValueProvider next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052949c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae720;
  if (param_3 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_100529714;
    puStack_40 = &UNK_110855710;
    func_0x000107c61174(param_3);
    lStack_38 = param_3;
    func_0x000107c3e4fc(puVar1,param_2,&puStack_58);
    func_0x000107c61180();
    func_0x000107c55b50(param_1,param_2,puVar1);
    func_0x000107c61170(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275b6f4);
    func_0x000107c4500c(uVar2);
    func_0x000107c61180();
    func_0x000107c4d664();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100529580; end: 10052958b; -[SCPlusThemeValueProvider setLazyCurrentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100529580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10052958c; end: 1005295db; -[SCLazy ifCreated] */

void FUN_10052958c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) == '\x02') {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005295dc; end: 1005295e3; -[SCLRUCacheNode value] */

undefined8 FUN_1005295dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005295e4; end: 100529623; -[SCLatestCombinedMultiObservable .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100529608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010052960c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005295e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796648,0);
  return;
}



/* Entry: 100529624; end: 100529673; -[SCPlusThemeValueProvider updates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100529624(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b6f4);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100529674; end: 100529703;  */

void FUN_100529674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160(PTR_PTR_1126ae820);
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c4ac38();
  func_0x000107c61180();
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4d664(puVar1,param_2,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100529704; end: 100529713; -[SCPlusThemeValueProvider lazyCurrentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100529704(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11275b6f0,1);
  return;
}



/* Entry: 100529714; end: 10052973b;  */

void FUN_100529714(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10052973c; end: 100529797; -[SCObservable switchMap:] */

void FUN_10052973c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f60;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d80();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100529798; end: 100529827; -[SCSwitchMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100529798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e518;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279672c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279672c) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100529828; end: 1005298c3; -[SCSwitchMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100529828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2f68;
  func_0x000107c610f4(PTR_PTR_1126e2f68);
  func_0x000107c47bb0();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005298c4; end: 1005298eb; -[SCSwitchMapObserver .cxx_construct] */

long FUN_1005298c4(long param_1)

{
  func_0x000107c60d30(param_1 + 0x20);
  return param_1;
}



/* Entry: 1005298ec; end: 1005299bf; -[SCSwitchMapObserver initWithObserver:mapper:] */

undefined1 *
FUN_1005298ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e600;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005299c0; end: 100529abb; -[SCSwitchMapObserver next:] */

/* WARNING: Possible PIC construction at 0x000100529a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100529a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100529a5c) */
/* WARNING: Removing unreachable block (ram,0x000100529a6c) */

void FUN_1005299c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  func_0x000107c61180();
  func_0x000107c610f4(PTR_PTR_1126e3018);
  func_0x000107c46b18();
  func_0x000107c60d28(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c4218c();
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  func_0x000107c5c310();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100529abc; end: 100529d03;  */

void FUN_100529abc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  puVar1 = *(undefined **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  func_0x000107c61174(uVar2);
  puVar3 = param_2;
  func_0x000107c4d4bc();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3e5bc();
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126ae6b8;
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar8 = (uint)puVar4;
  if (uVar8 < 2) {
LAB_100529b44:
    puVar7 = param_2;
    FUN_100529d90(param_2);
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
  }
  else {
    if (uVar8 != 5) {
      if (uVar8 != 4) goto LAB_100529cc4;
      goto LAB_100529b44;
    }
    puVar5 = param_2;
    func_0x000107c4d4bc(param_2);
    func_0x000107c61180();
    puVar3 = puVar5;
    func_0x000107c4fe3c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4fe3c();
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c3abfc();
    func_0x000107c61180();
    func_0x000107c3ac40();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126ae6b8;
    if (puVar7 == (undefined *)0x0) {
      puVar3 = param_2;
      FUN_100529d90(param_2);
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar5);
      func_0x000107c61180();
    }
    else {
      puVar3 = puVar1;
      func_0x000106c505ac(puVar1,uVar2,puVar7);
      func_0x000107c61180();
      func_0x000107c61174(param_2);
      puVar5 = puVar3;
      func_0x000107c4c280(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar7);
  puVar3 = puVar5;
LAB_100529cc4:
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100529d04; end: 100529d8f; +[SCPlusCustomAppThemeNavigationBar descriptor] */

undefined * FUN_100529d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25ec0,
                        &PTR____CFConstantStringClassReference_110e7c4b8,&PTR_DAT_113179470,
                        &PTR_s_backgroundColor_113179928,7,0x38,0x1c);
    func_0x000107c5a8b4();
    puRam00000001136c6ec8 = puVar1;
  }
  return puRam00000001136c6ec8;
}



/* Entry: 100529d90; end: 10052a123;  */

void FUN_100529d90(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c449bc();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126d1ac0;
    func_0x000107c610f4(PTR_PTR_1126d1ac0);
    func_0x000107c458dc();
    goto LAB_10052a0fc;
  }
  uVar1 = param_1;
  func_0x000107c4d4bc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3e5bc();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 4) {
    uVar1 = param_1;
    func_0x000107c4d4bc();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4b648();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c44938();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((int)uVar4 == 0) goto LAB_100529f60;
    uVar1 = param_1;
    func_0x000107c4d4bc(param_1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4b648();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4b648();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000106c4f48c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    puVar8 = PTR_PTR_1126d1ac8;
    func_0x000107c44474(PTR_PTR_1126d1ac8);
    func_0x000107c61180();
LAB_100529f6c:
    func_0x000107c61170(uVar5);
  }
  else {
    if ((int)uVar2 == 1) {
      uVar1 = param_1;
      func_0x000107c4d4bc();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c3e5a0();
      func_0x000107c61180();
      uVar4 = uVar2;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000106c5323c();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      if (uVar5 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR_PTR_1126d1ac8;
        func_0x000107c3fdd4(PTR_PTR_1126d1ac8);
        func_0x000107c61180();
      }
      goto LAB_100529f6c;
    }
LAB_100529f60:
    puVar8 = (undefined *)0x0;
  }
  uVar1 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000106c525ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar4 = param_1;
  func_0x000107c4d4bc();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000106c526d4();
  func_0x000107c61180();
  uVar1 = uVar2;
  if (uVar5 != 0) {
    uVar1 = uVar5;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  puVar6 = PTR_PTR_1126d1ad0;
  uVar4 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4d7a8();
  func_0x000107c61180();
  func_0x000107c4d7ac();
  func_0x000107c4418c(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  uVar4 = param_1;
  func_0x000107c4d4bc();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000106c52844();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000106c529b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126d1ac0;
  func_0x000107c610f4(PTR_PTR_1126d1ac0);
  func_0x000107c458dc();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar8);
LAB_10052a0fc:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10052a124; end: 10052a28f; -[SCPlusNavigationBarTheme initWithBackground:unselectedTabColor:selectedTabColor:badgeImage:badgeColor:badgeTextColor:] */

undefined1 *
FUN_10052a124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112702508;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10052a290; end: 10052a2db; +[SCObservable just:] */

void FUN_10052a290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e3000;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c49470();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10052a2dc; end: 10052a3af; -[SCJustObservable initWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10052a2dc(undefined8 param_1,undefined8 param_2,undefined8 ****param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 ***pppuStack_30;
  long lStack_28;
  
  puVar1 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar4 = param_3;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e5a0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined8 ****)0x0) {
      ppppuVar4 = &pppuStack_30;
      param_4 = 1;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_30 = param_3;
      func_0x000107c3e17c();
      func_0x000107c61180();
    }
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967d8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127967d8) = puVar2;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    ppppuVar3 = &pppuStack_80;
    func_0x000107c61174(ppppuVar4);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    puStack_78 = PTR_PTR_11270e5b0;
    pppuStack_80 = param_3;
    func_0x000107c61154(&pppuStack_80,PTR_s_init_1125d9248);
    if (ppppuVar3 != (undefined8 ****)0x0) {
      func_0x000107c61174(ppppuVar4);
      uVar5 = *(undefined8 *)((long)ppppuVar3 + 8);
      *(undefined8 *****)((long)ppppuVar3 + 8) = ppppuVar4;
      func_0x000107c61170(uVar5);
      func_0x000107c611a0((undefined1 *)((long)ppppuVar3 + 0x10),param_4);
      func_0x000107c611a0((undefined1 *)((long)ppppuVar3 + 0x18),param_5);
    }
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(ppppuVar4);
    return (undefined1 *)ppppuVar3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10052a3b0; end: 10052a46b; -[SCProxyObserver initWithGeneratedObservable:observer:delegate:] */

undefined1 *
FUN_10052a3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270e5b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10052a46c; end: 10052a5af; -[SCJustObservable subscribe:] */

/* WARNING: Possible PIC construction at 0x00010052a544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010052a570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010052a5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010052a574) */
/* WARNING: Removing unreachable block (ram,0x00010052a5ac) */
/* WARNING: Removing unreachable block (ram,0x00010052a58c) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010052a548) */
/* WARNING: Removing unreachable block (ram,0x00010052a5e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052a46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_1127967d8);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          func_0x000107c61128(lVar2);
        }
        func_0x000107c4d664(param_3,param_2,*(undefined8 *)(lStack_118 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10052a5b0; end: 10052a5f7; -[SCProxyObserver next:] */

/* WARNING: Possible PIC construction at 0x00010052a5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010052a5e8) */

void FUN_10052a5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + 0x10);
  func_0x000107c4d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10052a5f8; end: 10052a637; -[SCProxyObserver complete] */

/* WARNING: Possible PIC construction at 0x00010052a610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010052a614) */

void FUN_10052a5f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10052a638; end: 10052a68f; -[SCSwitchMapObserver proxyObserverDidComplete:] */

void FUN_10052a638(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  func_0x000107c60d28(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x61) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107c61170(uVar2);
  cVar1 = *(char *)(param_1 + 0x60);
  func_0x000107c60d2c(param_1 + 0x20);
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
    return;
  }
  return;
}



/* Entry: 10052a690; end: 10052a6a3; -[SCJustObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052a690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127967d8,0);
  return;
}



/* Entry: 10052a6a4; end: 10052a6b7; -[SCSwitchMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052a6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279672c,0);
  return;
}



/* Entry: 10052a6b8; end: 10052a73b;  */

void FUN_10052a6b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41050();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = uVar3;
  FUN_100529d90(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10052a73c; end: 10052a77f; -[SCPlusThemeValueProvider currentValue] */

void FUN_10052a73c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4ac38();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10052a780; end: 10052a7df; -[SCPlusNavigationBarTheme .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010052a798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010052a7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010052a7c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010052a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010052a79c) */
/* WARNING: Removing unreachable block (ram,0x00010052a7cc) */

void FUN_10052a780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10052a7e0; end: 10052a87b;  */

undefined *
FUN_10052a7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar4 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51724();
  uVar5 = uVar4;
  uVar6 = param_4;
  FUN_10052b600();
  dVar3 = (double)(int)puVar2;
  FUN_10052b668(dVar3);
  FUN_10052b6cc(uVar4,param_4,param_1,param_3,dVar3,param_2,uVar5,uVar6);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10052a87c; end: 10052a8bb; +[SCCameraCapriUtils capriFooterColorOnCamera] */

undefined8 FUN_10052a87c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_10052a7e0();
  iVar1 = (int)param_1;
  if ((param_1 & 1) == 0) {
    FUN_10052bb84();
    uVar2 = 0xffffffff800000d4;
    if (iVar1 == 0) {
      uVar2 = 0xffffffff80000029;
    }
  }
  else {
    uVar2 = 0xffffffff8000002b;
  }
  return uVar2;
}



/* Entry: 10052a8bc; end: 10052a8c7;  */

void FUN_10052a8bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c148fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e18f0,PTR_s_safeAreaInsets_11262fe10);
  return;
}



/* Entry: 10052a8c8; end: 10052a8d3; +[SCSafeAreaInsetsRouter safeAreaInsets] */

void FUN_10052a8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c148fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e1880,PTR_s_safeAreaInsets_11262fe10);
  return;
}



/* Entry: 10052a8d4; end: 10052a8db; +[SCSafeAreaInsetsModern safeAreaInsets] */

void FUN_10052a8d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c149010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_safeAreaInsetsForWindow__11262fe20,0);
  return;
}



/* Entry: 10052a8dc; end: 10052a9b3; +[SCSafeAreaInsetsModern safeAreaInsetsForWindow:] */

double FUN_10052a8dc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x000107c3ca48();
  dVar4 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar6 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  dVar5 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar7 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  bVar1 = false;
  if ((param_2 == dVar6) && (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
    bVar1 = param_1 == dVar4;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_4) && !NAN(dVar7))) {
    bVar2 = param_4 == dVar7;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(param_3) && !NAN(dVar5))) {
    bVar1 = param_3 == dVar5;
  }
  if (bVar1) {
    uVar3 = param_5;
    func_0x000107c3e6bc(param_5);
    func_0x000107c61180();
    func_0x000107c3e6b8();
    func_0x000107c61170(uVar3);
  }
  bVar1 = false;
  if ((param_2 == dVar6) && (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
    bVar1 = param_1 == dVar4;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_4) && !NAN(dVar7))) {
    bVar2 = param_4 == dVar7;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(param_3) && !NAN(dVar5))) {
    bVar1 = param_3 == dVar5;
  }
  if (bVar1) {
    func_0x000107c3be14(param_5,param_6,&PTR____CFConstantStringClassReference_110f8abb8);
  }
  return param_1;
}



/* Entry: 10052a9b4; end: 10052aaab; +[SCSafeAreaInsetsModern _systemSafeAreaInsetsForWindow:] */

undefined8
FUN_10052a9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_7);
  uVar1 = param_5;
  func_0x000107c3bbb8();
  if ((uVar1 & 1) == 0) {
LAB_10052aa6c:
    param_1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    if (param_7 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c82f8;
      func_0x000107c3d130();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) goto LAB_10052aa6c;
    }
    else {
      func_0x000107c61174(param_7);
      puVar2 = param_7;
    }
    func_0x000107c515a0(puVar2);
    func_0x000107c3e6bc(param_5);
    func_0x000107c61180();
    func_0x000107c5d400(param_1,param_2,param_3,param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_7);
  return param_1;
}



/* Entry: 10052aaac; end: 10052aafb; +[SCSafeAreaInsetsModern _isUIApplicationAvailable] */

bool FUN_10052aaac(void)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61158();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    bVar1 = puVar2 != (undefined *)0x0;
    func_0x000107c61170();
  }
  return bVar1;
}



/* Entry: 10052aafc; end: 10052ab83; +[SCSafeAreaWindowResolver activeKeyWindow] */

void FUN_10052aafc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x000107c3bbb8();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c40210();
    func_0x000107c61180();
    func_0x000107c3c3a4(param_1,param_2,puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10052ab84; end: 10052abd3; +[SCSafeAreaWindowResolver _isUIApplicationAvailable] */

bool FUN_10052ab84(void)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61158();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    bVar1 = puVar2 != (undefined *)0x0;
    func_0x000107c61170();
  }
  return bVar1;
}



/* Entry: 10052abd4; end: 10052b037; +[SCSafeAreaWindowResolver _resolveActiveWindowForScenes:] */

void FUN_10052abd4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar10 = *plStack_320;
    do {
      lVar12 = 0;
      do {
        if (*plStack_320 != lVar10) {
          func_0x000107c61128(param_3);
        }
        puVar8 = *(undefined8 **)(lStack_328 + lVar12 * 8);
        puVar2 = puVar8;
        func_0x000107c3d0e4();
        if (puVar2 == (undefined8 *)0x0) {
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          func_0x000107c61158(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
          puVar2 = puVar8;
          func_0x000107c6115c(puVar8,puVar3);
          if (((ulong)puVar2 & 1) != 0) {
            func_0x000107c61174(puVar8);
            lStack_368 = 0;
            uStack_370 = 0;
            uStack_358 = 0;
            plStack_360 = (long *)0x0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            puVar4 = puVar8;
            func_0x000107c5e408();
            func_0x000107c61180();
            puVar2 = &uStack_370;
            puVar5 = puVar4;
            func_0x000107c4080c();
            if (puVar5 != (undefined8 *)0x0) {
              lVar7 = *plStack_360;
              do {
                puVar11 = (undefined8 *)0x0;
                do {
                  if (*plStack_360 != lVar7) {
                    func_0x000107c61128(puVar4);
                  }
                  puVar9 = *(undefined8 **)(lStack_368 + (long)puVar11 * 8);
                  puVar6 = puVar9;
                  func_0x000107c49f64();
                  if (((ulong)puVar6 & 1) != 0) goto LAB_10052afc8;
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                } while (puVar5 != puVar11);
                puVar2 = &uStack_370;
                puVar5 = puVar4;
                func_0x000107c4080c();
              } while (puVar5 != (undefined8 *)0x0);
            }
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar8);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar1);
      lVar1 = param_3;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_3);
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  plStack_3a0 = (long *)0x0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar10 = *plStack_3a0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_3a0 != lVar10) {
          func_0x000107c61128(param_3);
        }
        puVar8 = *(undefined8 **)(lStack_3a8 + lVar12 * 8);
        puVar2 = puVar8;
        func_0x000107c3d0e4();
        if (puVar2 == (undefined8 *)0x1) {
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          func_0x000107c61158(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
          puVar2 = puVar8;
          func_0x000107c6115c(puVar8,puVar3);
          if (((ulong)puVar2 & 1) != 0) {
            func_0x000107c61174(puVar8);
            lStack_3e8 = 0;
            uStack_3f0 = 0;
            uStack_3d8 = 0;
            plStack_3e0 = (long *)0x0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            puVar4 = puVar8;
            func_0x000107c5e408();
            func_0x000107c61180();
            puVar2 = &uStack_3f0;
            puVar5 = puVar4;
            func_0x000107c4080c();
            if (puVar5 != (undefined8 *)0x0) {
              lVar7 = *plStack_3e0;
              do {
                puVar11 = (undefined8 *)0x0;
                do {
                  if (*plStack_3e0 != lVar7) {
                    func_0x000107c61128(puVar4);
                  }
                  puVar9 = *(undefined8 **)(lStack_3e8 + (long)puVar11 * 8);
                  puVar6 = puVar9;
                  func_0x000107c49f64();
                  if (((ulong)puVar6 & 1) != 0) goto LAB_10052afc8;
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                } while (puVar5 != puVar11);
                puVar2 = &uStack_3f0;
                puVar5 = puVar4;
                func_0x000107c4080c();
              } while (puVar5 != (undefined8 *)0x0);
            }
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar8);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar1);
      lVar1 = param_3;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_3);
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  func_0x000107c61174(param_3);
  puVar2 = &uStack_430;
  lVar1 = param_3;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar10 = *plStack_420;
    do {
      lVar12 = 0;
      do {
        if (*plStack_420 != lVar10) {
          func_0x000107c61128(param_3);
        }
        puVar8 = *(undefined8 **)(lStack_428 + lVar12 * 8);
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        func_0x000107c61158(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        puVar2 = puVar8;
        func_0x000107c6115c(puVar8,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x000107c61174(puVar8);
          puVar9 = param_1;
          puVar2 = puVar8;
          func_0x000107c3cab8();
          func_0x000107c61180();
          if (puVar9 != (undefined8 *)0x0) goto LAB_10052afd8;
          func_0x000107c61170(puVar8);
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar2 = &uStack_430;
      lVar1 = param_3;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_10052afe0:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x000107c61174(puVar2);
    puVar8 = puVar2;
    func_0x000107c5e408(puVar2);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x000107c61174(puVar2);
    func_0x000107c4ec5c(puVar3);
    func_0x000107c61180();
    puVar4 = puVar8;
    func_0x000107c4351c(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar8);
    puVar8 = puVar4;
    func_0x000107c5b5c0(puVar4);
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
LAB_10052afc8:
  func_0x000107c61174(puVar9);
  func_0x000107c61170(puVar4);
LAB_10052afd8:
  func_0x000107c61170(puVar8);
  goto LAB_10052afe0;
}



/* Entry: 10052b038; end: 10052b14f; +[SCSafeAreaWindowResolver _topmostVisibleWindowInScene:] */

void FUN_10052b038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5e408(param_3);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b86e428;
  puStack_40 = &UNK_110d62e60;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4ec5c(puVar2,param_2,&puStack_58);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4351c(uVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000107c5b5c0(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110d62eb0);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10052b150; end: 10052b19f; +[SCSafeAreaInsetsModern baselinePersistence] */

void FUN_10052b150(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137fbcb8 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126e1878;
    func_0x000107c610fc();
    puVar1 = puRam00000001137fbcb8;
    puRam00000001137fbcb8 = puVar2;
    func_0x000107c61170(puVar1);
  }
  puVar1 = puRam00000001137fbcb8;
  func_0x000107c61174(puRam00000001137fbcb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10052b1a0; end: 10052b1ef; -[SCSafeAreaBaselinePersistence init] */

undefined8 FUN_10052b1a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c61180();
  func_0x000107c491b4(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10052b1f0; end: 10052b28f; -[SCSafeAreaBaselinePersistence initWithUserDefaults:] */

undefined1 * FUN_10052b1f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270b690;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x000107c5ba34();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar3;
    }
    else {
      func_0x000107c61174(param_3);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_3;
    }
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10052b290; end: 10052b477; -[SCSafeAreaBaselinePersistence baselineInsets] */

double FUN_10052b290(float param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  uVar1 = param_2;
  func_0x000107c61158();
  func_0x000107c3bb20();
  if ((uVar1 & 1) == 0) {
    dVar8 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5d93c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4198c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 == 0) {
      dVar8 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    }
    else {
      func_0x000107c61158(param_2);
      func_0x000107c3b3e0();
      func_0x000107c61180();
      uVar1 = uVar2;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar4 = uVar1;
      func_0x000107c6115c(uVar1,puVar3);
      if ((uVar4 & 1) == 0) {
        dVar8 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      }
      else {
        uVar4 = uVar1;
        func_0x000107c4d9e8(uVar1);
        func_0x000107c61180();
        func_0x000107c436dc();
        dVar8 = (double)param_1;
        uVar5 = uVar1;
        func_0x000107c4d9e8(uVar1);
        func_0x000107c61180();
        func_0x000107c436dc();
        uVar6 = uVar1;
        func_0x000107c4d9e8(uVar1);
        func_0x000107c61180();
        func_0x000107c436dc();
        uVar7 = uVar1;
        func_0x000107c4d9e8(uVar1);
        func_0x000107c61180();
        func_0x000107c436dc();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(uVar2);
  }
  return dVar8;
}



/* Entry: 10052b478; end: 10052b4e3; +[SCSafeAreaBaselinePersistence _isIPhoneDevice] */

undefined * FUN_10052b478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4d07c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4040c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 10052b4e4; end: 10052b4eb; -[SCSafeAreaBaselinePersistence userDefaults] */

undefined8 FUN_10052b4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10052b4ec; end: 10052b5ff; +[SCSafeAreaBaselinePersistence _currentDeviceKey] */

void FUN_10052b4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar1;
  func_0x000107c4d07c();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c4d448(puVar2);
  func_0x000107c4d448(puVar2);
  func_0x000107c51820(puVar2);
  func_0x000107c4d488(puVar2);
  func_0x000107c51804(puVar5,param_2,&PTR____CFConstantStringClassReference_110f8ab98);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10052b600; end: 10052b667;  */

undefined4 FUN_10052b600(void)

{
  if (lRam00000001137fc180 != -1) {
    FUN_10002a2fc(0x1137fc180,&PTR___NSConcreteGlobalBlock_110d66778);
  }
  return uRam00000001137fc04c;
}



/* Entry: 10052b668; end: 10052b6cb;  */

undefined8 FUN_10052b668(void)

{
  return 0x4049000000000000;
}



/* Entry: 10052b6cc; end: 10052b7a3;  */

bool FUN_10052b6cc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,double param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  double dVar1;
  double dVar2;
  
  FUN_100456ca0();
  dVar1 = 1.5;
  if ((int)param_9 == 0) {
    dVar1 = 1.0;
  }
  FUN_10052b7a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  dVar2 = param_6 * dVar1 + -4.0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (param_9 != 1) {
    dVar2 = param_6 * dVar1;
  }
  FUN_10052b8c4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1 < dVar2;
}



/* Entry: 10052b7a4; end: 10052b8c3;  */

undefined8
FUN_10052b7a4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             double param_6,uint param_7)

{
  uint uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  FUN_100456ca0();
  uVar1 = param_7;
  FUN_100456ca0();
  dVar3 = 1.7777777777777777;
  dVar4 = dVar3;
  if ((uVar1 & param_2 < param_1) == 0) {
    dVar4 = 0.5625;
  }
  dVar5 = dVar3;
  if (uVar1 == 0) {
    dVar5 = 0.5625;
  }
  if ((param_7 & param_2 < param_1) == 0) {
    dVar3 = 0.5625;
    dVar5 = dVar4;
  }
  if (param_2 * dVar5 <= param_1) {
    param_1 = param_2 * dVar5;
  }
  param_2 = param_2 - (double)(float)(int)((double)(float)(int)param_1 / dVar3);
  FUN_100456ca0();
  dVar4 = 1.5;
  if (uVar1 == 0) {
    dVar4 = 1.0;
  }
  if (param_4 + param_3 + param_6 * dVar4 + 52.0 + -1.1920928955078125e-07 <= param_2) {
    uVar2 = 0;
  }
  else {
    dVar4 = param_6 * dVar4 + -4.0;
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    uVar2 = 2;
    if (param_4 + param_3 + dVar4 + -1.1920928955078125e-07 <= param_2) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 10052b8c4; end: 10052ba53;  */

double FUN_10052b8c4(double param_1,double param_2,undefined8 param_3,double param_4,double param_5,
                    double param_6,double param_7,double param_8,undefined8 param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar6 = (undefined4)((ulong)param_9 >> 0x20);
  uVar4 = (uint)param_9;
  FUN_100456ca0();
  uVar5 = uVar4;
  FUN_100456ca0();
  dVar7 = 1.7777777777777777;
  dVar8 = dVar7;
  if ((uVar5 & param_2 < param_1) == 0) {
    dVar8 = 0.5625;
  }
  dVar9 = dVar7;
  if (uVar5 == 0) {
    dVar9 = 0.5625;
  }
  if ((uVar4 & param_2 < param_1) == 0) {
    dVar7 = 0.5625;
    dVar9 = dVar8;
  }
  dVar8 = param_1;
  if (param_2 * dVar9 <= param_1) {
    dVar8 = param_2 * dVar9;
  }
  dVar9 = param_1;
  FUN_10052ba54(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  dVar7 = ((param_2 - (double)(float)(int)((double)(float)(int)dVar8 / dVar7)) - dVar9) - param_4;
  dVar8 = dVar7;
  if (param_7 <= dVar7) {
    dVar8 = param_7;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (dVar8 == param_7) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7) && !NAN(dVar8)) {
      bVar1 = dVar7 < dVar8;
      bVar2 = dVar7 == dVar8;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    FUN_100456ca0();
    dVar7 = 1.5;
    if (uVar5 == 0) {
      dVar7 = 1.0;
    }
    dVar7 = param_5 * dVar7;
    FUN_10052b7a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (CONCAT44(uVar6,uVar5) == 1) {
      FUN_100456ca0();
      dVar9 = 1.5;
      if (uVar5 == 0) {
        dVar9 = 1.0;
      }
      dVar9 = param_6 * dVar9 + -4.0;
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      if (dVar9 <= dVar7) {
        dVar7 = dVar9;
      }
    }
    param_8 = dVar7;
    if (dVar7 <= dVar8) {
      param_8 = dVar8;
    }
  }
  return param_8;
}



/* Entry: 10052ba54; end: 10052bb83;  */

double FUN_10052ba54(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    double param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  FUN_10052b7a4();
  if (param_7 == 2) {
    uVar3 = uRam0000000113839558;
    func_0x000107c5c734();
    uVar1 = (uint)uVar3;
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3ebcc();
    func_0x000107c61170();
    if (uVar2 != 0) {
      FUN_100456ca0();
      uVar2 = uVar1;
      FUN_100456ca0();
      dVar4 = 1.7777777777777777;
      dVar5 = dVar4;
      if ((uVar2 & param_2 < param_1) == 0) {
        dVar5 = 0.5625;
      }
      dVar6 = dVar4;
      if (uVar2 == 0) {
        dVar6 = 0.5625;
      }
      if ((uVar1 & param_2 < param_1) == 0) {
        dVar4 = 0.5625;
        dVar6 = dVar5;
      }
      if (param_2 * dVar6 <= param_1) {
        param_1 = param_2 * dVar6;
      }
      FUN_100456ca0();
      dVar5 = 1.5;
      if (uVar2 == 0) {
        dVar5 = 1.0;
      }
      param_4 = ((param_2 - (double)(float)(int)((double)(float)(int)param_1 / dVar4)) -
                param_6 * dVar5) - param_4;
      if (1.1920928955078125e-07 < param_4) {
        return param_4;
      }
    }
    param_3 = 0.0;
  }
  else if (param_7 == 0) {
    param_3 = param_3 + 52.0;
  }
  return param_3;
}



/* Entry: 10052bb84; end: 10052bbeb;  */

undefined1 FUN_10052bb84(void)

{
  if (lRam00000001137fc188 != -1) {
    FUN_10002a2fc(0x1137fc188,&PTR___NSConcreteGlobalBlock_110d66798);
  }
  return uRam00000001137fc01a;
}



/* Entry: 10052bbec; end: 10052bc8b;  */

void FUN_10052bbec(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbf38 != -1) {
    FUN_10002a2fc(0x1137fbf38,&PTR___NSConcreteGlobalBlock_110d66068);
  }
  uVar1 = uRam00000001137fbf40;
  func_0x000107c61174(uRam00000001137fbf40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10052bc8c; end: 10052bcb7;  */

void FUN_10052bc8c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1940;
  func_0x000107c610fc();
  uVar1 = puRam00000001137fbf40;
  puRam00000001137fbf40 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10052bcb8; end: 10052bd47; -[SIGStylesBase init] */

undefined1 * FUN_10052bcb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b7f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10052bd48; end: 10052be63; -[SIGStylesBase colorForStyle:] */

void FUN_10052bd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c611ec(param_1 + 0x18);
  lVar1 = param_1;
  func_0x000107c3badc();
  lVar3 = 0x10;
  if ((int)lVar1 == 0) {
    lVar3 = 8;
  }
  lVar4 = *(long *)(param_1 + lVar3);
  func_0x000107c61174(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x000107c4d9e8(lVar4,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x000107c3b0a4(param_1,param_2,param_3,lVar1);
    func_0x000107c61180();
    func_0x000107c56bd8(lVar4,param_2,lVar3,puVar2);
    func_0x000107c61170(lVar3);
  }
  lVar3 = lVar4;
  func_0x000107c4d9e8(lVar4,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c611f0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10052be64; end: 10052be77; -[SIGStylesBase _isCustomTheme] */

bool FUN_10052be64(void)

{
  return 2 < lRam00000001138466f0;
}



/* Entry: 10052be78; end: 10052bf47; -[SIGStylesBase _colorForStyle:isCustomTheme:] */

void FUN_10052be78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar2 = param_3 >> 0x1f == 0;
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = 2;
  }
  if ((param_3 & 0x40000000) != 0) {
    uVar1 = bVar2;
  }
  func_0x000107c3b634(param_1,param_2,param_3 & 0x3fffffff);
  uVar3 = param_1;
  func_0x000107c3fdc4(param_1);
  func_0x000107c61180();
  func_0x000107c3b8cc(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = param_1;
  func_0x00010054a4f4(param_1,param_3 & 0x3fffffff,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  FUN_10054a628(param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10052bf48; end: 10052bf53; -[SIGStylesBase _experimentOverrideForColor:isCustomTheme:] */

ulong FUN_10052bf48(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar4;
  
  uVar4 = param_3;
  FUN_10052bf54();
  iVar1 = (int)uVar4;
  func_0x00010052c050();
  iVar2 = iVar1;
  func_0x00010052c0b8();
  iVar3 = iVar2;
  func_0x00010052c120();
  uVar6 = 0x10000;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  uVar5 = 0x100;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  uVar6 = uVar4 & 0xffffffff | uVar5 | uVar6;
  if (param_4 == 0) {
    uVar5 = param_3;
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)&UNK_10e5f3ff0;
      do {
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar8 != param_3 && uVar8 != 0);
      uVar5 = 0x2f;
      if (uVar8 == 0) {
        uVar5 = param_3;
      }
    }
    param_3 = uVar5;
    if (((uint)uVar6 >> 8 & 1) != 0) {
      puVar7 = (ulong *)&UNK_10e5f4050;
      do {
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar8 != uVar5 && uVar8 != 0);
      param_3 = 0xd1;
      if (uVar8 == 0) {
        param_3 = uVar5;
      }
    }
    uVar5 = 0xd2;
    if (param_3 != 0x50) {
      uVar5 = param_3;
    }
    if ((uVar6 & 0x10000) != 0) {
      param_3 = uVar5;
    }
    uVar6 = 0x30;
    if (param_3 != 0x39) {
      uVar6 = param_3;
    }
    if ((uVar4 & 0x1000000) != 0 || iVar3 != 0) {
      param_3 = uVar6;
    }
  }
  return param_3;
}



/* Entry: 10052bf54; end: 10052bf93;  */

undefined1 FUN_10052bf54(void)

{
  if (lRam00000001137fc138 != -1) {
    FUN_10002a2fc(0x1137fc138,&PTR___NSConcreteGlobalBlock_110d66658);
  }
  return uRam00000001137fc012;
}



/* Entry: 10052bf94; end: 10052c027;  */

ulong FUN_10052bf94(ulong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar4;
  
  uVar4 = param_1;
  FUN_10052bf54();
  iVar1 = (int)uVar4;
  func_0x00010052c050();
  iVar2 = iVar1;
  func_0x00010052c0b8();
  iVar3 = iVar2;
  func_0x00010052c120();
  uVar6 = 0x10000;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  uVar5 = 0x100;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  uVar6 = uVar4 & 0xffffffff | uVar5 | uVar6;
  if (param_2 == 0) {
    uVar5 = param_1;
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)&UNK_10e5f3ff0;
      do {
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar8 != param_1 && uVar8 != 0);
      uVar5 = 0x2f;
      if (uVar8 == 0) {
        uVar5 = param_1;
      }
    }
    param_1 = uVar5;
    if (((uint)uVar6 >> 8 & 1) != 0) {
      puVar7 = (ulong *)&UNK_10e5f4050;
      do {
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar8 != uVar5 && uVar8 != 0);
      param_1 = 0xd1;
      if (uVar8 == 0) {
        param_1 = uVar5;
      }
    }
    uVar5 = 0xd2;
    if (param_1 != 0x50) {
      uVar5 = param_1;
    }
    if ((uVar6 & 0x10000) != 0) {
      param_1 = uVar5;
    }
    uVar6 = 0x30;
    if (param_1 != 0x39) {
      uVar6 = param_1;
    }
    if ((uVar4 & 0x1000000) != 0 || iVar3 != 0) {
      param_1 = uVar6;
    }
  }
  return param_1;
}



/* Entry: 10052c028; end: 10052c187;  */

void FUN_10052c028(void)

{
  undefined1 uVar1;
  
  uVar1 = 0x18;
  FUN_100069c44(&PTR____CFConstantStringClassReference_110f98818,0);
  uRam00000001137fc012 = uVar1;
  return;
}



/* Entry: 10052c188; end: 10052c207;  */

long FUN_10052c188(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_2 & 0x100000000) == 0) {
    lVar1 = param_1;
    if ((param_2 & 1) != 0) {
      plVar2 = (long *)&UNK_10e5f3ff0;
      do {
        lVar3 = *plVar2;
        plVar2 = plVar2 + 1;
      } while (lVar3 != param_1 && lVar3 != 0);
      lVar1 = 0x2f;
      if (lVar3 == 0) {
        lVar1 = param_1;
      }
    }
    param_1 = lVar1;
    if (((uint)param_2 >> 8 & 1) != 0) {
      plVar2 = (long *)&UNK_10e5f4050;
      do {
        lVar3 = *plVar2;
        plVar2 = plVar2 + 1;
      } while (lVar3 != lVar1 && lVar3 != 0);
      param_1 = 0xd1;
      if (lVar3 == 0) {
        param_1 = lVar1;
      }
    }
    lVar1 = 0xd2;
    if (param_1 != 0x50) {
      lVar1 = param_1;
    }
    if ((param_2 & 0x10000) != 0) {
      param_1 = lVar1;
    }
    lVar1 = 0x30;
    if (param_1 != 0x39) {
      lVar1 = param_1;
    }
    if ((param_2 & 0x1000000) != 0) {
      param_1 = lVar1;
    }
  }
  return param_1;
}



/* Entry: 10052c208; end: 10052c3af; -[SIGStylesThemed colorForStyle:resolveMode:] */

void FUN_10052c208(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x3;
  
  if (lRam00000001137fbf58 != -1) {
    FUN_10002a2fc(0x1137fbf58,&PTR___NSConcreteGlobalBlock_110d660a8);
  }
  puVar2 = puRam00000001137fbf50;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar1);
  puVar1 = puRam00000001137fbf50;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    puVar1 = puRam00000001137fbf50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d9e8(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    if (puVar3 == (undefined *)0x0) {
      FUN_10054a170(puVar1,in_x3);
      func_0x000107c61180();
    }
    else {
      func_0x000107c4d9e8(puVar1);
      func_0x000107c61180();
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10054a170; end: 10054a28f;  */

void FUN_10054a170(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  
  func_0x000107c61174();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puVar1 = param_1;
  if (param_2 == 2) {
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar2 = param_1;
    func_0x000107c4d9e8(param_1);
    func_0x000107c61180();
  }
  else {
    if (param_2 == 1) {
      unaff_x20 = param_1;
      func_0x000107c4d9e8(param_1);
      func_0x000107c61180();
      goto LAB_10054a270;
    }
    if (param_2 != 0) goto LAB_10054a270;
    func_0x000107c61174(param_1);
    func_0x000107c3fdd8(puVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar1);
  unaff_x20 = puVar2;
LAB_10054a270:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10054a290; end: 10054a29f; -[SIGStylesBase _grayRampExperimentOverrideForColor:resolvedColor:isCustomTheme:] */

void FUN_10054a290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  FUN_10054a304();
  FUN_10054a36c(param_3,param_4,uVar1,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10054a2a0; end: 10054a303;  */

void FUN_10054a2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c61174(param_2);
  FUN_10054a304();
  FUN_10054a36c(param_1,param_2,uVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10054a304; end: 10054a36b;  */

undefined1 FUN_10054a304(void)

{
  if (lRam00000001137fc158 != -1) {
    FUN_10002a2fc(0x1137fc158,&PTR___NSConcreteGlobalBlock_110d666d8);
  }
  return uRam00000001137fc016;
}



/* Entry: 10054a36c; end: 10054a627;  */

void FUN_10054a36c(long param_1,undefined *param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  if (((param_4 & 1) == 0) && (param_3 != 0)) {
    if (param_1 < 0x81) {
      if (param_1 - 0x7cU < 2) {
        uVar2 = 0x3fd2121212121212;
        uVar3 = 0x3fd2d2d2d2d2d2d3;
      }
      else if (param_1 - 0x7fU < 2) {
        uVar2 = 0x3fe3535353535353;
        uVar3 = 0x3fe3d3d3d3d3d3d4;
      }
      else {
        if (param_1 != 0x7e) goto LAB_10054a498;
        uVar2 = 0x3fd9191919191919;
        uVar3 = 0x3fd9d9d9d9d9d9da;
      }
    }
    else if (param_1 < 0x84) {
      if (param_1 - 0x81U < 2) {
        uVar2 = 0x3fe8f8f8f8f8f8f9;
        uVar3 = 0x3fe9595959595959;
      }
      else {
        if (param_1 != 0x83) goto LAB_10054a498;
        uVar2 = 0x3fec3c3c3c3c3c3c;
        uVar3 = 0x3fec9c9c9c9c9c9d;
      }
    }
    else if (param_1 == 0x84) {
      uVar2 = 0x3fee5e5e5e5e5e5e;
      uVar3 = 0x3fee9e9e9e9e9e9f;
    }
    else {
      if (param_1 != 0x85) goto LAB_10054a498;
      uVar2 = 0x3feefefefefefeff;
      uVar3 = 0x3fef3f3f3f3f3f3f;
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fde8(uVar2,uVar2,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
  }
  else {
LAB_10054a498:
    func_0x000107c61174(param_2);
    puVar1 = param_2;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10054a628; end: 10054a693;  */

void FUN_10054a628(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  if (lRam00000001137fbee8 != -1) {
    FUN_10002a2fc(0x1137fbee8,&PTR___NSConcreteGlobalBlock_110d65f78);
  }
  if ((bRam00000001137fbee0 & 1) != 0) {
    func_0x000107c592ac(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10054a694; end: 10054a6bf;  */

void FUN_10054a694(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f97638;
  func_0x000107c60af0();
  uRam00000001137fbee0 = ppuVar1 != (undefined **)0x0;
  return;
}



/* Entry: 10054a6c0; end: 10054a6db;  */

void FUN_10054a6c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010054a6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_2,param_3,param_4,param_1);
  return;
}



/* Entry: 10054a6dc; end: 10054a75f;  */

undefined8 FUN_10054a6dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  FUN_10054a760(param_1,*param_2);
  puVar1 = auStack_38;
  func_0x000107c60d84(puVar1,0,10);
  **(undefined4 **)(param_4 + 0x10) = (int)puVar1;
  FUN_100456adc();
  FUN_10054a760();
  puVar1 = auStack_38;
  func_0x000107c60d98(puVar1,0,10);
  **(long **)(param_4 + 0x18) = (long)puVar1;
  FUN_100456adc();
  return 0;
}



/* Entry: 10054a760; end: 10054a767;  */

void FUN_10054a760(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}


