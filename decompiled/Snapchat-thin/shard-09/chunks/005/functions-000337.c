/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e402c0; end: 106e40363; -[SCCountdownsCreationPresenterConfig hash] */

undefined8 * FUN_106e402c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
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
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  puVar5 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(puVar5,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_106e40454:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e40460;
    puVar6 = puVar5;
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar3 & 1) != 0) && (puVar5[4] == param_3[4])) {
      lVar4 = puVar5[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar5[2];
        if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = puVar5[3];
          if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = puVar5[5];
            if ((lVar4 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              puVar6 = (undefined8 *)puVar5[6];
              puVar5 = (undefined8 *)param_3[6];
              if (puVar6 != puVar5) {
                _objc_retainBlock();
                func_0x00010c071ae0(puVar6);
                _objc_release(puVar5);
                goto LAB_106e40460;
              }
              goto LAB_106e40454;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e40460:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e40364; end: 106e4047b; -[SCCountdownsCreationPresenterConfig isEqual:] */

long FUN_106e40364(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e40454:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e40460;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar4 = *(long *)(param_1 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x10);
        if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x18);
          if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x28);
            if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x30);
              lVar3 = *(long *)(param_3 + 0x30);
              if (lVar4 != lVar3) {
                _objc_retainBlock();
                func_0x00010c071ae0(lVar4);
                _objc_release(lVar3);
                goto LAB_106e40460;
              }
              goto LAB_106e40454;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_106e40460:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e4047c; end: 106e404cf; -[SCCountdownsCreationPresenterConfig .cxx_destruct] */

void FUN_106e4047c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e404d0; end: 106e4062f;  */

undefined1 *
FUN_106e404d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126f7230;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_5;
      *(undefined1 *)((long)plVar1 + 9) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_8;
      _objc_release(uVar2);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 106e40630; end: 106e40653; -[SCCountdownDetailsPresenterConfig copyWithZone:] */

undefined8 FUN_106e40630(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e40654; end: 106e406ff; -[SCCountdownDetailsPresenterConfig hash] */

undefined8 * FUN_106e40654(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  puVar5 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_106e40810:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e4081c;
    puVar6 = puVar5;
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar3 & 1) != 0) &&
       (((*(char *)(puVar5 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) && (puVar5[5] == param_3[5])
        ))) {
      lVar4 = puVar5[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar5[3];
        if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = puVar5[4];
          if ((lVar4 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = puVar5[6];
            if ((lVar4 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              puVar6 = (undefined8 *)puVar5[7];
              puVar5 = (undefined8 *)param_3[7];
              if (puVar6 != puVar5) {
                _objc_retainBlock();
                func_0x00010c071ae0(puVar6);
                _objc_release(puVar5);
                goto LAB_106e4081c;
              }
              goto LAB_106e40810;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e4081c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e40700; end: 106e40837; -[SCCountdownDetailsPresenterConfig isEqual:] */

long FUN_106e40700(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e40810:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e4081c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar4 = *(long *)(param_1 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x20);
          if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x30);
            if ((lVar4 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x38);
              lVar3 = *(long *)(param_3 + 0x38);
              if (lVar4 != lVar3) {
                _objc_retainBlock();
                func_0x00010c071ae0(lVar4);
                _objc_release(lVar3);
                goto LAB_106e4081c;
              }
              goto LAB_106e40810;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_106e4081c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e40838; end: 106e4088b; -[SCCountdownDetailsPresenterConfig .cxx_destruct] */

void FUN_106e40838(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e4088c; end: 106e40907; -[SCLegacyMyProfileScopeLauncherServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4088c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar2 = PTR_PTR_1126d2c70;
  _objc_alloc(PTR_PTR_1126d2c70);
  func_0x00010c042100();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275f7c8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e40908; end: 106e40953; -[SCLegacyMyProfileScopeLauncherServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e40908(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f7c8,0);
  _objc_storeStrong(param_1 + _DAT_11275f7c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275f7cc);
  return;
}



/* Entry: 106e40954; end: 106e409c7; -[SCLegacyMyProfileScopeLauncherService initWithScopeLauncher:] */

undefined1 * FUN_106e40954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7238;
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



/* Entry: 106e409c8; end: 106e409cf; -[SCLegacyMyProfileScopeLauncherService legacyMyProfileScopeLauncher] */

undefined8 FUN_106e409c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e409d0; end: 106e409db; -[SCLegacyMyProfileScopeLauncherService .cxx_destruct] */

void FUN_106e409d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e409dc; end: 106e40a4f; -[SCBirthdayPageComposerContextProviderServices initWithBirthdayPageContextProvider:] */

undefined1 * FUN_106e409dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7240;
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



/* Entry: 106e40a50; end: 106e40a57; -[SCBirthdayPageComposerContextProviderServices birthdayPageContextProvider] */

undefined8 FUN_106e40a50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e40a58; end: 106e40a63; -[SCBirthdayPageComposerContextProviderServices .cxx_destruct] */

void FUN_106e40a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e40a64; end: 106e40ad7; -[SCBirthdayPageServices initWithBirthdayPagePresenter:] */

undefined1 * FUN_106e40a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7248;
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



/* Entry: 106e40ad8; end: 106e40adf; -[SCBirthdayPageServices birthdayPagePresenter] */

undefined8 FUN_106e40ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e40ae0; end: 106e40aeb; -[SCBirthdayPageServices .cxx_destruct] */

void FUN_106e40ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e40aec; end: 106e40b07; +[SCCModerationSpotlightActionHandling valdiMarshallableObjectDescriptor] */

void FUN_106e40aec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f040;
  param_1[1] = &PTR_DAT_11097f070;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106e40b08; end: 106e40b43;  */

undefined8 FUN_106e40b08(undefined8 param_1)

{
  func_0x000106e40ff0();
  func_0x000106e40fe8();
  func_0x000106e40f64();
  func_0x000106e40f80();
  return param_1;
}



/* Entry: 106e40b44; end: 106e40b67; +[SCCSpotlightReplyActionHandling valdiMarshallableObjectDescriptor] */

void FUN_106e40b44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f0e8;
  param_1[1] = &PTR_DAT_11097f160;
  param_1[2] = &PTR_s_ob_v_11097f088;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106e40b68; end: 106e40b8f;  */

undefined8 FUN_106e40b68(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 106e40b90; end: 106e40bdf;  */

void FUN_106e40b90(void)

{
  func_0x000106e40fc8();
  func_0x000106e40fa0();
  func_0x000106e40f54(FUN_106e40ea4);
  func_0x000106e40fe0();
  func_0x000106e40f8c();
  func_0x000106e40f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e40be0; end: 106e40c0f;  */

undefined8 FUN_106e40be0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],*(uint *)(param_2 + 4) & 1);
  return 0;
}



/* Entry: 106e40c10; end: 106e40c5f;  */

void FUN_106e40c10(void)

{
  func_0x000106e40fc8();
  func_0x000106e40fa0();
  func_0x000106e40f54(0x106e40ed4);
  func_0x000106e40fe0();
  func_0x000106e40f8c();
  func_0x000106e40f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e40c60; end: 106e40c77;  */

void FUN_106e40c60(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106e40c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
  return;
}



/* Entry: 106e40c78; end: 106e40cc7;  */

void FUN_106e40c78(void)

{
  func_0x000106e40fc8();
  func_0x000106e40fa0();
  func_0x000106e40f54(0x106e40f08);
  func_0x000106e40fe0();
  func_0x000106e40f8c();
  func_0x000106e40f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e40cc8; end: 106e40d03;  */

undefined8 FUN_106e40cc8(undefined8 param_1)

{
  func_0x000106e40ff0();
  func_0x000106e40fe8();
  func_0x000106e40f64();
  func_0x000106e40f80();
  return param_1;
}



/* Entry: 106e40d04; end: 106e40d1f; +[SCCStoryReplyInsightsHandling valdiMarshallableObjectDescriptor] */

void FUN_106e40d04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f1a0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_11097f170;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106e40d20; end: 106e40d4f;  */

undefined8 FUN_106e40d20(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
  return 0;
}



/* Entry: 106e40d50; end: 106e40d9f;  */

void FUN_106e40d50(void)

{
  func_0x000106e40fc8();
  func_0x000106e40fa0();
  func_0x000106e40f54(0x106e40f2c);
  func_0x000106e40fe0();
  func_0x000106e40f8c();
  func_0x000106e40f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e40da0; end: 106e40ddb;  */

undefined8 FUN_106e40da0(undefined8 param_1)

{
  func_0x000106e40ff0();
  func_0x000106e40fe8();
  func_0x000106e40f64();
  func_0x000106e40f80();
  return param_1;
}



/* Entry: 106e40ddc; end: 106e40de7; +[SCCNotificationCenterPage componentPath] */

undefined ** FUN_106e40ddc(void)

{
  return &PTR____CFConstantStringClassReference_110e87f98;
}



/* Entry: 106e40de8; end: 106e40e1b; -[SCCNotificationCenterPage initWithViewModel:componentContext:runtime:] */

void FUN_106e40de8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7250;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106e40e1c; end: 106e40e67; -[SCCNotificationCenterPage setViewModel:] */

void FUN_106e40e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000106e40f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e40e68; end: 106e40ea3; -[SCCNotificationCenterPage viewModel] */

void FUN_106e40e68(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e40f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e40ea4; end: 106e40f53;  */

void FUN_106e40ea4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106e40f54; end: 106e40ff7;  */

void FUN_106e40f54(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 106e40ff8; end: 106e41017; -[SCCModerationNotificationCellServices init] */

void FUN_106e40ff8(void)

{
  func_0x000106e41168(PTR_PTR_1126f7258);
  return;
}



/* Entry: 106e41018; end: 106e4102b; +[SCCModerationNotificationCellServices valdiMarshallableObjectDescriptor] */

void FUN_106e41018(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_11097f1d0;
  param_1[1] = &PTR_s_SCCFoundationProvider_11097f248;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e4102c; end: 106e4104b; -[SCCNotificationCenterCustomCellServices init] */

void FUN_106e4102c(void)

{
  func_0x000106e41168(PTR_PTR_1126f7260);
  return;
}



/* Entry: 106e4104c; end: 106e4105f; +[SCCNotificationCenterCustomCellServices valdiMarshallableObjectDescriptor] */

void FUN_106e4104c(undefined8 *param_1)

{
  *param_1 = &PTR_s_storyReply_11097f278;
  param_1[1] = &PTR_DAT_11097f2f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e41060; end: 106e4107f; -[SCCNotificationCenterPageContext init] */

void FUN_106e41060(void)

{
  func_0x000106e41168(PTR_PTR_1126f7268);
  return;
}



/* Entry: 106e41080; end: 106e41093; +[SCCNotificationCenterPageContext valdiMarshallableObjectDescriptor] */

void FUN_106e41080(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f318;
  param_1[1] = &PTR_DAT_11097f378;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e41094; end: 106e410b3; -[SCCNotificationCenterPageViewModel init] */

void FUN_106e41094(void)

{
  func_0x000106e41168(PTR_PTR_1126f7270);
  return;
}



/* Entry: 106e410b4; end: 106e410cb; +[SCCNotificationCenterPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_106e410b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddee4c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e410cc; end: 106e410eb; -[SCCPostMentionsNotificationCellServices init] */

void FUN_106e410cc(void)

{
  func_0x000106e41168(PTR_PTR_1126f7278);
  return;
}



/* Entry: 106e410ec; end: 106e410ff; +[SCCPostMentionsNotificationCellServices valdiMarshallableObjectDescriptor] */

void FUN_106e410ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f388;
  param_1[1] = &PTR_s_SCCFoundationProvider_11097f3d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e41100; end: 106e4111f; -[SCCSpotlightReplyNotificationCellServices init] */

void FUN_106e41100(void)

{
  func_0x000106e41168(PTR_PTR_1126f7280);
  return;
}



/* Entry: 106e41120; end: 106e41133; +[SCCSpotlightReplyNotificationCellServices valdiMarshallableObjectDescriptor] */

void FUN_106e41120(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f3f0;
  param_1[1] = &PTR_s_SCCFoundationProvider_11097f438;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e41134; end: 106e41153; -[SCCStoryReplyNotificationCellServices init] */

void FUN_106e41134(void)

{
  func_0x000106e41168(PTR_PTR_1126f7288);
  return;
}



/* Entry: 106e41154; end: 106e41193; +[SCCStoryReplyNotificationCellServices valdiMarshallableObjectDescriptor] */

void FUN_106e41154(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097f458;
  param_1[1] = &PTR_s_SCCFoundationProvider_11097f4b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e41194; end: 106e4119f; -[SCFeatureSettingsService isNotificationFriendSuggestionsAvailable] */

void FUN_106e41194(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e87fb8);
  return;
}



/* Entry: 106e411a0; end: 106e411ab; -[SCFeatureSettingsService notificationFriendSuggestionsContactsServerParam] */

undefined ** FUN_106e411a0(void)

{
  return &PTR____CFConstantStringClassReference_110e87fb8;
}



/* Entry: 106e411ac; end: 106e411bb; -[SCFeatureSettingsService setNotificationFriendSuggestionsContacts:] */

void FUN_106e411ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e87fb8,param_3);
  return;
}



/* Entry: 106e411bc; end: 106e411c3; -[SCFeatureSettingsService notification_friend_suggestions_contacts_client_value:] */

undefined * FUN_106e411bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e411c4; end: 106e411cb; -[SCFeatureSettingsService notification_friend_suggestions_contacts_server_value:] */

void FUN_106e411c4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e411cc; end: 106e411db; -[SCFeatureSettingsService notificationFriendSuggestionsContacts] */

void FUN_106e411cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e87fb8,1);
  return;
}



/* Entry: 106e411dc; end: 106e411e7; -[SCFeatureSettingsService isNotificationFriendSuggestionsRegularAvailable] */

void FUN_106e411dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e87fd8);
  return;
}



/* Entry: 106e411e8; end: 106e411f3; -[SCFeatureSettingsService notificationFriendSuggestionsRegularServerParam] */

undefined ** FUN_106e411e8(void)

{
  return &PTR____CFConstantStringClassReference_110e87fd8;
}



/* Entry: 106e411f4; end: 106e41203; -[SCFeatureSettingsService setNotificationFriendSuggestionsRegular:] */

void FUN_106e411f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e87fd8,param_3);
  return;
}



/* Entry: 106e41204; end: 106e4120b; -[SCFeatureSettingsService notification_friend_suggestions_regular_client_value:] */

undefined * FUN_106e41204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4120c; end: 106e41213; -[SCFeatureSettingsService notification_friend_suggestions_regular_server_value:] */

void FUN_106e4120c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41214; end: 106e41223; -[SCFeatureSettingsService notificationFriendSuggestionsRegular] */

void FUN_106e41214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e87fd8,1);
  return;
}



/* Entry: 106e41224; end: 106e4122f; -[SCFeatureSettingsService isNotificationFriendSuggestionsPendingAvailable] */

void FUN_106e41224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e87ff8);
  return;
}



/* Entry: 106e41230; end: 106e4123b; -[SCFeatureSettingsService notificationFriendSuggestionsPendingServerParam] */

undefined ** FUN_106e41230(void)

{
  return &PTR____CFConstantStringClassReference_110e87ff8;
}



/* Entry: 106e4123c; end: 106e4124b; -[SCFeatureSettingsService setNotificationFriendSuggestionsPending:] */

void FUN_106e4123c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e87ff8,param_3);
  return;
}



/* Entry: 106e4124c; end: 106e41253; -[SCFeatureSettingsService notification_friend_suggestions_pending_client_value:] */

undefined * FUN_106e4124c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41254; end: 106e4125b; -[SCFeatureSettingsService notification_friend_suggestions_pending_server_value:] */

void FUN_106e41254(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e4125c; end: 106e4126b; -[SCFeatureSettingsService notificationFriendSuggestionsPending] */

void FUN_106e4125c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e87ff8,1);
  return;
}



/* Entry: 106e4126c; end: 106e41277; -[SCFeatureSettingsService isNotificationMessageRemindersFriendAvailable] */

void FUN_106e4126c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88018);
  return;
}



/* Entry: 106e41278; end: 106e41283; -[SCFeatureSettingsService notificationMessageRemindersFriendServerParam] */

undefined ** FUN_106e41278(void)

{
  return &PTR____CFConstantStringClassReference_110e88018;
}



/* Entry: 106e41284; end: 106e41293; -[SCFeatureSettingsService setNotificationMessageRemindersFriend:] */

void FUN_106e41284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88018,param_3);
  return;
}



/* Entry: 106e41294; end: 106e4129b; -[SCFeatureSettingsService notification_message_reminders_friend_client_value:] */

undefined * FUN_106e41294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4129c; end: 106e412a3; -[SCFeatureSettingsService notification_message_reminders_friend_server_value:] */

void FUN_106e4129c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e412a4; end: 106e412b3; -[SCFeatureSettingsService notificationMessageRemindersFriend] */

void FUN_106e412a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88018,1);
  return;
}



/* Entry: 106e412b4; end: 106e412bf; -[SCFeatureSettingsService isNotificationMessageRemindersPendingAvailable] */

void FUN_106e412b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88038);
  return;
}



/* Entry: 106e412c0; end: 106e412cb; -[SCFeatureSettingsService notificationMessageRemindersPendingServerParam] */

undefined ** FUN_106e412c0(void)

{
  return &PTR____CFConstantStringClassReference_110e88038;
}



/* Entry: 106e412cc; end: 106e412db; -[SCFeatureSettingsService setNotificationMessageRemindersPending:] */

void FUN_106e412cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88038,param_3);
  return;
}



/* Entry: 106e412dc; end: 106e412e3; -[SCFeatureSettingsService notification_message_reminders_pending_client_value:] */

undefined * FUN_106e412dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e412e4; end: 106e412eb; -[SCFeatureSettingsService notification_message_reminders_pending_server_value:] */

void FUN_106e412e4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e412ec; end: 106e412fb; -[SCFeatureSettingsService notificationMessageRemindersPending] */

void FUN_106e412ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88038,1);
  return;
}



/* Entry: 106e412fc; end: 106e41307; -[SCFeatureSettingsService isNotificationPublicContentTrendingAvailable] */

void FUN_106e412fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88058);
  return;
}



/* Entry: 106e41308; end: 106e41313; -[SCFeatureSettingsService notificationPublicContentTrendingServerParam] */

undefined ** FUN_106e41308(void)

{
  return &PTR____CFConstantStringClassReference_110e88058;
}



/* Entry: 106e41314; end: 106e41323; -[SCFeatureSettingsService setNotificationPublicContentTrending:] */

void FUN_106e41314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88058,param_3);
  return;
}



/* Entry: 106e41324; end: 106e4132b; -[SCFeatureSettingsService notification_public_content_trending_client_value:] */

undefined * FUN_106e41324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4132c; end: 106e41333; -[SCFeatureSettingsService notification_public_content_trending_server_value:] */

void FUN_106e4132c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41334; end: 106e41343; -[SCFeatureSettingsService notificationPublicContentTrending] */

void FUN_106e41334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88058,1);
  return;
}



/* Entry: 106e41344; end: 106e4134f; -[SCFeatureSettingsService isNotificationPublicContentSubscriptionAvailable] */

void FUN_106e41344(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88078);
  return;
}



/* Entry: 106e41350; end: 106e4135b; -[SCFeatureSettingsService notificationPublicContentSubscriptionServerParam] */

undefined ** FUN_106e41350(void)

{
  return &PTR____CFConstantStringClassReference_110e88078;
}



/* Entry: 106e4135c; end: 106e4136b; -[SCFeatureSettingsService setNotificationPublicContentSubscription:] */

void FUN_106e4135c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88078,param_3);
  return;
}



/* Entry: 106e4136c; end: 106e41373; -[SCFeatureSettingsService notification_public_content_subscription_client_value:] */

undefined * FUN_106e4136c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41374; end: 106e4137b; -[SCFeatureSettingsService notification_public_content_subscription_server_value:] */

void FUN_106e41374(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e4137c; end: 106e4138b; -[SCFeatureSettingsService notificationPublicContentSubscription] */

void FUN_106e4137c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88078,1);
  return;
}



/* Entry: 106e4138c; end: 106e41397; -[SCFeatureSettingsService isNotificationPublicContentFriendsOfFriendsAvailable] */

void FUN_106e4138c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88098);
  return;
}



/* Entry: 106e41398; end: 106e413a3; -[SCFeatureSettingsService notificationPublicContentFriendsOfFriendsServerParam] */

undefined ** FUN_106e41398(void)

{
  return &PTR____CFConstantStringClassReference_110e88098;
}



/* Entry: 106e413a4; end: 106e413b3; -[SCFeatureSettingsService setNotificationPublicContentFriendsOfFriends:] */

void FUN_106e413a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88098,param_3);
  return;
}



/* Entry: 106e413b4; end: 106e413bb; -[SCFeatureSettingsService notification_public_content_friends_of_friends_client_value:] */

undefined * FUN_106e413b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e413bc; end: 106e413c3; -[SCFeatureSettingsService notification_public_content_friends_of_friends_server_value:] */

void FUN_106e413bc(undefined8 param_1,undefined8 param_2,int param_3)

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


