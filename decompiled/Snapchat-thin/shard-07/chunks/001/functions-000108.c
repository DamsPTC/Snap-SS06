/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105218f7c; end: 105219023; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt isEqual:] */

long FUN_105218f7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105218ffc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105219008;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105219008;
        }
        goto LAB_105218ffc;
      }
    }
    lVar3 = 0;
  }
LAB_105219008:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105219024; end: 10521902b; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt title] */

undefined8 FUN_105219024(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10521902c; end: 105219033; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt message] */

undefined8 FUN_10521902c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105219034; end: 105219063; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt .cxx_destruct] */

void FUN_105219034(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105219064; end: 105219117; -[SCNGOPhoneEntrySuccess initWithPhoneNumber:verificationNeeded:response:] */

undefined1 *
FUN_105219064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6fc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105219118; end: 10521913b; -[SCNGOPhoneEntrySuccess copyWithZone:] */

undefined8 FUN_105219118(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10521913c; end: 1052191b3; -[SCNGOPhoneEntrySuccess hash] */

undefined8 * FUN_10521913c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105219244:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105219250;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105219250;
        }
        goto LAB_105219244;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105219250:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1052191b4; end: 10521926b; -[SCNGOPhoneEntrySuccess isEqual:] */

long FUN_1052191b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105219244:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105219250;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105219250;
        }
        goto LAB_105219244;
      }
    }
    lVar3 = 0;
  }
LAB_105219250:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10521926c; end: 105219273; -[SCNGOPhoneEntrySuccess phoneNumber] */

undefined8 FUN_10521926c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105219274; end: 10521927b; -[SCNGOPhoneEntrySuccess verificationNeeded] */

undefined1 FUN_105219274(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10521927c; end: 105219283; -[SCNGOPhoneEntrySuccess response] */

undefined8 FUN_10521927c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105219284; end: 1052192b3; -[SCNGOPhoneEntrySuccess .cxx_destruct] */

void FUN_105219284(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1052192b4; end: 105219377; +[SCNGOPhoneEntrySubmitRequestResponse cosChallengeWithAppChallengeData:authSessionPayload:clientNetworkRequestId:] */

void FUN_1052192b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afb38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105219378; end: 1052193e3; +[SCNGOPhoneEntrySubmitRequestResponse magicCodeWithMagicCodeAdaptor:] */

void FUN_105219378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afb38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052193e4; end: 10521942f; +[SCNGOPhoneEntrySubmitRequestResponse none] */

void FUN_1052193e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afb38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105219430; end: 10521947b; +[SCNGOPhoneEntrySubmitRequestResponse redirectToReg] */

void FUN_105219430(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afb38;
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



/* Entry: 10521947c; end: 1052194c7; +[SCNGOPhoneEntrySubmitRequestResponse redirectToUsernamePassword] */

void FUN_10521947c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afb38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052194c8; end: 1052194eb; -[SCNGOPhoneEntrySubmitRequestResponse copyWithZone:] */

undefined8 FUN_1052194c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1052194ec; end: 10521957b; -[SCNGOPhoneEntrySubmitRequestResponse hash] */

void FUN_1052194ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e6fc8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10521957c; end: 1052195bf; -[SCNGOPhoneEntrySubmitRequestResponse internalInit] */

void FUN_10521957c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e6fc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052195c0; end: 1052196a7; -[SCNGOPhoneEntrySubmitRequestResponse isEqual:] */

long FUN_1052195c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105219680:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10521968c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10521968c;
            }
            goto LAB_105219680;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10521968c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1052196a8; end: 1052197c7; -[SCNGOPhoneEntrySubmitRequestResponse matchCosChallenge:magicCode:redirectToReg:redirectToUsernamePassword:none:] */

void FUN_1052196a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20));
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else {
    if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_105219790;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
    else if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_105219790;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_105219790;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
    (*pcVar2)(lVar1);
  }
LAB_105219790:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052197c8; end: 10521980f; -[SCNGOPhoneEntrySubmitRequestResponse .cxx_destruct] */

void FUN_1052197c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105219810; end: 105219a1f;  */

void FUN_105219810(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae6f8,
                      &PTR____CFConstantStringClassReference_110dcbb78,0);
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



/* Entry: 105219a20; end: 105219b43; -[SCUserVerificationSnapTokenEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105219a20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe08);
  *(undefined **)(param_1 + _DAT_11271fe08) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b65a8;
  _objc_alloc(PTR_PTR_1126b65a8);
  func_0x00010c01e860();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11271fe28));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105219b44; end: 105219b97;  */

void FUN_105219b44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105219b98; end: 105219bd3; -[SCUserVerificationSnapTokenEntryPoint end] */

void FUN_105219b98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6fd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105219bd4; end: 10521a177; -[SCUserVerificationSnapTokenEntryPoint _snapTokenManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105219bd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126b65b0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b65b8;
  _objc_alloc(PTR_PTR_1126b65b8);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11271fe1c;
    _objc_loadWeakRetained(lVar12);
  }
  lVar3 = lVar12;
  func_0x00010c292f40(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271fe18;
    _objc_loadWeakRetained(lVar13);
  }
  lVar4 = lVar13;
  func_0x00010bf07a00(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c8c0(puVar2,param_2,lVar3,puVar1,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  puVar5 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108708d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b65c0;
  _objc_alloc(PTR_PTR_1126b65c0);
  lVar12 = param_1;
  FUN_10521a184(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_10521a184(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad20(puVar6,param_2,lVar13,lVar8,puVar5,puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  puVar9 = PTR_PTR_1126b65c8;
  _objc_alloc(PTR_PTR_1126b65c8);
  func_0x00010c0271a0();
  puVar10 = PTR_PTR_1126b65d0;
  _objc_alloc(PTR_PTR_1126b65d0);
  lVar12 = param_1 + _DAT_11271fe0c;
  _objc_loadWeakRetained(lVar12);
  lVar3 = lVar12;
  func_0x00010bf39900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271fe14;
    _objc_loadWeakRetained(lVar13);
  }
  lVar4 = lVar13;
  func_0x00010c2923e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f660(puVar10,param_2,puVar6,lVar3,puVar2,lVar4,puVar9,
                      &PTR____CFConstantStringClassReference_110dcbe18);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  param_1 = param_1 + _DAT_11271fe10;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010c13dac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c282c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(param_1);
  puVar11 = puVar10;
  func_0x00010c243940(puVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c293740(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c243380();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010c293740(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28cfe0(puVar11,param_2,lVar3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10521a178; end: 10521a183;  */

void FUN_10521a178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af568,PTR_s_shared_1126687d0);
  return;
}



/* Entry: 10521a184; end: 10521a1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a184(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271fe24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10521a1a8; end: 10521a23b; -[SCUserVerificationSnapTokenEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a1a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271fe28,0);
  _objc_destroyWeak(param_1 + _DAT_11271fe0c);
  _objc_destroyWeak(param_1 + _DAT_11271fe10);
  _objc_destroyWeak(param_1 + _DAT_11271fe24);
  _objc_destroyWeak(param_1 + _DAT_11271fe20);
  _objc_destroyWeak(param_1 + _DAT_11271fe1c);
  _objc_destroyWeak(param_1 + _DAT_11271fe18);
  _objc_destroyWeak(param_1 + _DAT_11271fe14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271fe08,0);
  return;
}



/* Entry: 10521a23c; end: 10521a2c7; -[SCUserSessionValidationEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10521a23c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6fd8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe2c) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe30) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe34) = 0;
    _objc_release(uVar2);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe38) = param_1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10521a2c8; end: 10521a403; -[SCUserSessionValidationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a2c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11271fe48;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271fe34);
  *(long *)(param_1 + _DAT_11271fe34) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = param_1 + _DAT_11271fe4c;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c293920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271fe2c);
  *(long *)(param_1 + _DAT_11271fe2c) = lVar1;
  _objc_release(uVar4);
  _objc_release(lVar5);
  func_0x00010beb0f20(param_1);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain();
  func_0x00010bee7c40(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10521a404; end: 10521a493; -[SCUserSessionValidationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a404(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11271fe30;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe2c);
  *(undefined8 *)(param_1 + _DAT_11271fe2c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe34);
  *(undefined8 *)(param_1 + _DAT_11271fe34) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e6fd8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10521a494; end: 10521a5e3; -[SCUserSessionValidationEntryPoint _setupUserSessionValidationOnAppUserLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a494(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271fe30);
  *(undefined **)(param_1 + _DAT_11271fe30) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_11271fe40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf72840();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10521a5e4; end: 10521a617;  */

void FUN_10521a5e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee7c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521a618; end: 10521a73f; -[SCUserSessionValidationEntryPoint _validateSessionWithReferrer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010be943c0(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe38);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = uVar2;
  func_0x00010c296aa0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10521a740; end: 10521a777;  */

void FUN_10521a740(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be76b20(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10521a778; end: 10521a7a3; -[SCUserSessionValidationEntryPoint _resetValidityCheckpoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a778(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11271fe38) = param_1;
  return;
}



/* Entry: 10521a7a4; end: 10521a863; -[SCUserSessionValidationEntryPoint _preLogoutHandlerWithReferrer:checkpointTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a7a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  puVar1 = PTR_PTR_1126b65d8;
  dVar4 = param_1;
  _objc_retain(param_4);
  func_0x00010c0b47e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _CACurrentMediaTime();
  lVar3 = (long)_DAT_11271fe34;
  func_0x00010befbfe0(*(undefined8 *)(param_2 + lVar3),param_3,puVar2,
                      (long)((dVar4 - param_1) * 1000.0));
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + lVar3),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10521a864; end: 10521a8ef; -[SCUserSessionValidationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521a864(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271fe4c);
  _objc_destroyWeak(param_1 + _DAT_11271fe48);
  _objc_destroyWeak(param_1 + _DAT_11271fe44);
  _objc_destroyWeak(param_1 + _DAT_11271fe40);
  _objc_destroyWeak(param_1 + _DAT_11271fe3c);
  _objc_storeStrong(param_1 + _DAT_11271fe34,0);
  _objc_storeStrong(param_1 + _DAT_11271fe30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271fe2c,0);
  return;
}



/* Entry: 10521a8f0; end: 10521a91b; +[SCGrapheneUserSessionValidationMetric logoutLag] */

void FUN_10521a8f0(void)

{
  _objc_alloc(PTR_PTR_1126b65d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10521a91c; end: 10521a9bb; -[SCGrapheneUserSessionValidationMetric description] */

void FUN_10521a91c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcbe98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dcbe98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e6fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10521a9bc; end: 10521aaff; -[SCGrapheneRegistry userSessionValidationGraphene] */

void FUN_10521a9bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10521aa44;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9518 != -1) {
    func_0x00010002a2fc(0x1136b9518,&puStack_48);
  }
  uVar1 = uRam00000001136b9510;
  _objc_retain(uRam00000001136b9510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10521ab00; end: 10521ab9f;  */

void FUN_10521ab00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10521aba0;
  puStack_48 = &UNK_1108708f0;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain();
  func_0x00010bf97bc0(param_1,param_2,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_40);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10521aba0; end: 10521abeb;  */

void FUN_10521aba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10521abec; end: 10521aecf; -[SCSpectaclesContentPageBusinessLogic initWithDevice:delegate:spectaclesManager:spectaclesStartWiFiController:exportWorkflowBuilder:removeContentDelay:exitContentPageDelay:preferences:analyticsLogger:interceptorsProvider:interceptorsCheck:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10521abec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_70 = PTR_PTR_1126e6fe8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11271fe50;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_68;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271fe54,puVar3);
    _objc_release(puVar3);
    lVar6 = (long)_DAT_11271fe58;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271fe5c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe60);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe60) = uVar2;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe64);
    *(undefined **)((long)puVar1 + (long)_DAT_11271fe64) = puVar4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe68) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe6c) = param_9;
    lVar6 = (long)_DAT_11271fe70;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271fe74) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271fe78) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271fe7c) = 0;
    lVar6 = (long)_DAT_11271fe80;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_opt_new();
    lVar6 = (long)_DAT_11271fe84;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(uVar2);
    _objc_release(puVar4);
    lVar6 = (long)_DAT_11271fe88;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271fe8c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10521aed0; end: 10521b067; -[SCSpectaclesContentPageBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521aed0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10521b068;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_70);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271fe50);
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf11c00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfde1c0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if ((int)uVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6be0();
    _objc_release(uVar2);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10521b068; end: 10521b093;  */

void FUN_10521b068(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be881c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521b094; end: 10521b383; -[SCSpectaclesContentPageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10521b094(undefined1 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = param_1;
  _objc_initWeak(auStack_108,param_1);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar9 = *(long *)(param_1 + _DAT_11271fe90);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_140;
    do {
      lVar12 = 0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lStack_148 + lVar12 * 8);
        lVar3 = lVar10;
        func_0x00010bf4df40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          puVar8 = auStack_108;
          _objc_copyWeak(auStack_158,puVar8);
          func_0x00010c29da40(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar10);
          _objc_destroyWeak(auStack_158);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar5 = PTR_PTR_1126b65e0;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271fe50);
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf86080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0531a0();
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar8);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  puVar5 = puVar1;
  func_0x00010bde8080();
  _objc_release(puVar8);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 10521b384; end: 10521b3df;  */

long FUN_10521b384(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8080();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10521b3e0; end: 10521b4df; -[SCSpectaclesContentPageBusinessLogic handleAction:] */

void FUN_10521b3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10521b4e0;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10521b508;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10521b514;
  puStack_80 = &UNK_110850cc8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10521b520;
  puStack_a8 = &UNK_110850cc8;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10521b52c;
  puStack_d0 = &UNK_110850cc8;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10521b538;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x10521b540;
  puStack_120 = &UNK_110842e18;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c1520(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138);
  return;
}



/* Entry: 10521b4e0; end: 10521b507;  */

void FUN_10521b4e0(long param_1)

{
  func_0x00010bec2200(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010beaba70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupConnectionInterruptedObser_112588840);
  return;
}



/* Entry: 10521b508; end: 10521b54b;  */

void FUN_10521b508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exitContentPageWithStopWiFiDela_1125609a0,0);
  return;
}



/* Entry: 10521b54c; end: 10521ba07; -[SCSpectaclesContentPageBusinessLogic _refreshAllContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10521b54c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  double dVar20;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CACurrentMediaTime();
  lVar13 = (long)_DAT_11271fe50;
  lVar1 = *(long *)(param_2 + lVar13);
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c26f500(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2ee0(param_2);
    _objc_release(lVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar15 = (long)_DAT_11271fea4;
  uVar14 = *(undefined8 *)(param_2 + lVar15);
  *(undefined **)(param_2 + lVar15) = puVar5;
  _objc_release(uVar14);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  lVar7 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar7 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    do {
      lVar16 = 0;
      puVar10 = puVar5;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar18 = *(long *)(lVar16 * 8);
        uVar14 = *(undefined8 *)(param_2 + lVar15);
        lVar8 = lVar18;
        func_0x00010bdc3540(lVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar14);
        _objc_release(lVar8);
        puVar5 = puVar10;
        if (lVar17 == 0) {
LAB_10521b760:
          puVar9 = puVar10;
          func_0x00010bf529e0();
          if (puVar9 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
            puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            _objc_release(puVar10);
          }
          func_0x00010c26f500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar17);
          lVar17 = lVar18;
        }
        else {
          lVar8 = lVar18;
          func_0x00010c26f500(lVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          func_0x00010bf43460();
          _objc_release(lVar8);
          if (puVar9 != (undefined *)0x0) goto LAB_10521b760;
        }
        func_0x00010befa120(puVar5);
        lVar16 = lVar16 + 1;
        puVar10 = puVar5;
      } while (lVar7 != lVar16);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar3);
  func_0x00010befa120(puVar4);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar20 = 0.0;
  _objc_retain(puVar4);
  puVar10 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar10 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar11 = PTR_PTR_1126b65e8;
      _objc_alloc(PTR_PTR_1126b65e8);
      func_0x00010c003fc0();
      func_0x00010befa120(puVar9);
      _objc_release(puVar11);
      puVar19 = puVar19 + 1;
    } while (puVar10 != puVar19);
    puVar10 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11271fe90);
  *(undefined **)(param_2 + _DAT_11271fe90) = puVar9;
  _objc_retain(puVar9);
  _objc_release(uVar14);
  lVar1 = param_2;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar14 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010bf002e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8780(param_2);
  _objc_release(uVar14);
  _CACurrentMediaTime();
  uVar14 = *(undefined8 *)(param_2 + _DAT_11271fe80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_2 + lVar13);
  func_0x00010c0a3e20((dVar20 - param_1) * 1000.0);
  _objc_release(puVar9);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar17);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  func_0x00010c26f500(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf433a0(lVar1);
  _objc_release(uVar14);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10521ba08; end: 10521ba8b;  */

undefined8 FUN_10521ba08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26f500(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10521ba8c; end: 10521be33; -[SCSpectaclesContentPageBusinessLogic _importContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10521ba8c(long param_1,undefined8 param_2,long param_3)

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
  long lVar10;
  undefined **unaff_x22;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    func_0x00010bdd8780(param_1);
    _objc_initWeak(auStack_a8,param_1);
    lVar10 = (long)_DAT_11271fe88;
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c14b480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    uStack_a0 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10521be34;
    puStack_b8 = &UNK_110848ca8;
    _objc_copyWeak(auStack_b0,auStack_a8);
    uVar3 = uVar2;
    func_0x00010c27a1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    uStack_98 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf17580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    uStack_90 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x10521be6c;
    puStack_e8 = &UNK_110870990;
    _objc_copyWeak(auStack_d8,auStack_a8);
    _objc_retain(param_3);
    uVar7 = uVar6;
    lStack_e0 = param_3;
    func_0x00010bf82e80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar1);
    lVar10 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11271fe8c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10521beac;
    puStack_120 = &UNK_11084f3a0;
    _objc_retain(lVar10);
    unaff_x22 = &puStack_138;
    lStack_110 = lVar10;
    _objc_copyWeak(auStack_108,auStack_a8);
    _objc_retain(param_3);
    lStack_118 = param_3;
    func_0x00010bf38080(uVar9);
    _objc_release(uVar9);
    _objc_release(lStack_118);
    _objc_destroyWeak(auStack_108);
    _objc_release(lStack_110);
    _objc_release(lVar10);
    _objc_release(puVar8);
    _objc_release(lStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 6);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar10 = param_3;
  func_0x00010be45160();
  _objc_release(param_3);
  return lVar10;
}



/* Entry: 10521be34; end: 10521beab;  */

long FUN_10521be34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be45160();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10521beac; end: 10521bf5f;  */

void FUN_10521beac(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10521bf60;
  puStack_50 = &UNK_1108488f8;
  uStack_38 = param_2;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10521bf60; end: 10521bfa3;  */

void FUN_10521bf60(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be71ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10521bfa4; end: 10521c05b; -[SCSpectaclesContentPageBusinessLogic _performImportContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521bfa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe80);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3e00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10521c05c; end: 10521c46f; -[SCSpectaclesContentPageBusinessLogic _exportContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10521c05c(long param_1,undefined8 param_2,long param_3)

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
  long lVar10;
  undefined **unaff_x22;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf529e0();
  if ((lVar10 != 0) && (*(long *)(param_1 + _DAT_11271feb0) == 0)) {
    func_0x00010bdd8780(param_1);
    _objc_initWeak(auStack_a8,param_1);
    lVar10 = (long)_DAT_11271fe88;
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10521c470;
    puStack_b8 = &UNK_110848ca8;
    _objc_copyWeak(auStack_b0,auStack_a8);
    uVar9 = uVar1;
    func_0x00010c0e8a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    uStack_a0 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10521c4a8;
    puStack_e0 = &UNK_110848ca8;
    _objc_copyWeak(auStack_d8,auStack_a8);
    uVar3 = uVar2;
    func_0x00010c27a1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    uStack_98 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf17580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    uStack_90 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x10521c4e0;
    puStack_110 = &UNK_110870990;
    _objc_copyWeak(auStack_100,auStack_a8);
    _objc_retain(param_3);
    uVar7 = uVar6;
    lStack_108 = param_3;
    func_0x00010bf82e80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar1);
    lVar10 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11271fe8c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10521c520;
    puStack_148 = &UNK_11084f3a0;
    _objc_retain(lVar10);
    unaff_x22 = &puStack_160;
    lStack_138 = lVar10;
    _objc_copyWeak(auStack_130,auStack_a8);
    _objc_retain(param_3);
    lStack_140 = param_3;
    func_0x00010bf38080(uVar9);
    _objc_release(uVar9);
    _objc_release(lStack_140);
    _objc_destroyWeak(auStack_130);
    _objc_release(lStack_138);
    _objc_release(lVar10);
    _objc_release(puVar8);
    _objc_release(lStack_108);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 6);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar10 = param_3;
  func_0x00010be44cc0();
  _objc_release(param_3);
  return lVar10;
}



/* Entry: 10521c470; end: 10521c51f;  */

long FUN_10521c470(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be44cc0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10521c520; end: 10521c5d3;  */

void FUN_10521c520(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10521c5d4;
  puStack_50 = &UNK_1108488f8;
  uStack_38 = param_2;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10521c5d4; end: 10521c617;  */

void FUN_10521c5d4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be71bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10521c618; end: 10521c6db; -[SCSpectaclesContentPageBusinessLogic _performExportContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521c618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_11271fe60);
  pcVar3 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_3);
  (*pcVar3)(lVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271feb0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3e00();
  _objc_release(uVar1);
  func_0x00010bf19060(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10521c6dc; end: 10521c853; -[SCSpectaclesContentPageBusinessLogic _calculateMediaTypeCounts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521c6dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11271fea8;
  *(undefined8 *)(param_1 + lVar6) = 0;
  lVar7 = (long)_DAT_11271feac;
  *(undefined8 *)(param_1 + lVar7) = 0;
  uVar3 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(long *)(param_1 + _DAT_11271fea4);
        func_0x00010c0e00e0(unaff_x22,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 != 0) {
          lVar2 = unaff_x22;
          func_0x00010c27dd80();
          if (lVar2 == 0) {
            *(long *)(param_1 + lVar6) = *(long *)(param_1 + lVar6) + 1;
          }
          else {
            lVar2 = unaff_x22;
            func_0x00010c27dd80();
            if (lVar2 == 1) {
              *(long *)(param_1 + lVar7) = *(long *)(param_1 + lVar7) + 1;
            }
          }
        }
        _objc_release(unaff_x22);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10521c854;
  lStack_170 = lVar7;
  lStack_168 = lVar6;
  lStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _CACurrentMediaTime();
  *(undefined8 *)(lVar1 + _DAT_11271feb4) = uVar3;
  func_0x00010bdd8780(lVar1,param_2,puVar5);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11271fe80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3e00();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11271fe58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b960(uVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_10521c9a8;
  puStack_180 = &UNK_1108709c0;
  lStack_178 = lVar1;
  func_0x00010bf97e80(puVar5,param_2,&puStack_198);
  func_0x00010be08680(lVar1,param_2,puVar5);
  func_0x00010be8bc00(lVar1,param_2,puVar5,*(undefined8 *)(lVar1 + _DAT_11271fe68));
  _objc_release(puVar5);
  return;
}



/* Entry: 10521c854; end: 10521c9a7; -[SCSpectaclesContentPageBusinessLogic _deleteContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521c854(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11271feb4) = param_1;
  func_0x00010bdd8780(param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11271fe80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3e00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11271fe58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b960(uVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10521c9a8;
  puStack_50 = &UNK_1108709c0;
  lStack_48 = param_2;
  func_0x00010bf97e80(param_4,param_3,&puStack_68);
  func_0x00010be08680(param_2,param_3,param_4);
  func_0x00010be8bc00(param_2,param_3,param_4,*(undefined8 *)(param_2 + _DAT_11271fe68));
  _objc_release(param_4);
  return;
}



/* Entry: 10521c9a8; end: 10521c9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521c9a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271fe64),
             PTR_s_setObject_forKey__112651b80,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bee88,
             param_2);
  return;
}



/* Entry: 10521c9c8; end: 10521ca43; -[SCSpectaclesContentPageBusinessLogic _exitContentPageWithStopWiFiDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521c9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe5c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  func_0x00010bec3c20(param_1,param_2,param_3);
  param_1 = param_1 + _DAT_11271fe54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521ca44; end: 10521cb83; -[SCSpectaclesContentPageBusinessLogic _exitContentPageIfNoContentExits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521ca44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_11271fe90);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11271fe6c) - *(long *)(param_1 + _DAT_11271fe68);
    if (lVar1 == 0 || *(long *)(param_1 + _DAT_11271fe6c) < *(long *)(param_1 + _DAT_11271fe68)) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__exitContentPageWithStopWiFiDela_1125609a0,0);
      return;
    }
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    _dispatch_time(0,lVar1 * 1000000000);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10521cb84;
    puStack_50 = &UNK_110848708;
    lStack_48 = param_1;
    _objc_retain(param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010058c530(uVar2,PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_destroyWeak(auStack_40);
    _objc_release(lStack_48);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10521cb84; end: 10521cc13;  */

void FUN_10521cb84(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10521cc14;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10521cc14; end: 10521cc43;  */

void FUN_10521cc14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521cc44; end: 10521ce37; -[SCSpectaclesContentPageBusinessLogic _startWiFiIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521cc44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe50);
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf86080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2a5460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  lVar7 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271fe8c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10521ce38;
  puStack_70 = &UNK_110849380;
  _objc_retain(lVar7);
  uStack_b8 = SUB81(auStack_58,0);
  lStack_68 = lVar7;
  _objc_copyWeak(auStack_60);
  func_0x00010bf38080(uVar5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_release(lStack_68);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_98 = FUN_10521ce38;
  lVar7 = *(long *)(puVar6 + 0x20);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10521cecc;
  puStack_c8 = &UNK_11084ceb8;
  uStack_b0 = uVar5;
  puStack_a8 = puVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_c0,puVar6 + 0x28);
  (**(code **)(lVar7 + 0x10))(lVar7,&puStack_e0);
  _objc_destroyWeak(auStack_c0);
  return;
}



/* Entry: 10521ce38; end: 10521cecb;  */

void FUN_10521ce38(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10521cecc;
  puStack_38 = &UNK_11084ceb8;
  uStack_28 = param_2;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 10521cecc; end: 10521cf07;  */

void FUN_10521cecc(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be72a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10521cf08; end: 10521cf9f; -[SCSpectaclesContentPageBusinessLogic _performStartWiFi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521cf08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + _DAT_11271fe74) = 0;
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11271fe5c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10521cfa0; end: 10521cfe3; -[SCSpectaclesContentPageBusinessLogic _stopWifiWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521cfa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe5c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf812c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10521cfe4; end: 10521cfff; -[SCSpectaclesContentPageBusinessLogic _tapWiFiButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521cfe4(long param_1)

{
  if (*(long *)(param_1 + _DAT_11271fe74) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be72a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performStartWiFi_11257a430);
    return;
  }
  return;
}



/* Entry: 10521d000; end: 10521d1e3; -[SCSpectaclesContentPageBusinessLogic _updateViewModelsForExportTransferSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521d000(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = param_3;
  func_0x00010c0f75c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        func_0x00010bdc3540(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beea0,
                            uVar3);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c23e340();
  _objc_release(lVar5);
  if ((int)lVar2 != 0) {
    lVar5 = param_3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beea0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  func_0x00010bea2f40(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10521d1e4;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_160 = lVar5;
  puStack_158 = puVar1;
  uStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11271fe64;
  uVar3 = *(undefined8 *)(lVar2 + lVar5);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x10521d28c;
  puStack_170 = &UNK_1108709f0;
  puStack_168 = puVar4;
  _objc_retain();
  func_0x00010bf97ce0(uVar3,param_2,&puStack_188);
  func_0x00010bef7f60(*(undefined8 *)(lVar2 + lVar5),param_2,puVar4);
  _objc_release(puStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10521d1e4; end: 10521d2e7; -[SCSpectaclesContentPageBusinessLogic _completeCurrentExportingContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521d1e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11271fe64;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10521d28c;
  puStack_40 = &UNK_1108709f0;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bf97ce0(uVar2,param_2,&puStack_58);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10521d2e8; end: 10521d807; -[SCSpectaclesContentPageBusinessLogic _updateViewModelsForImportTransferSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521d2e8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3a8 [128];
  long lStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c27a400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60(puVar4,param_2,&uStack_230,auStack_f0,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_220;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar8) {
          _objc_enumerationMutation(puVar4);
        }
        uVar5 = *(undefined8 *)(lStack_228 + (long)puVar10 * 8);
        func_0x00010bdc3540(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beed0,
                            uVar5);
        _objc_release(uVar5);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_230,auStack_f0,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  puStack_2c8 = puVar4;
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar4 = param_3;
  func_0x00010c0f7680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar10 = param_3;
  func_0x00010bfea5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x00010c0ce860(puVar4,param_2,puVar3);
  puVar10 = param_3;
  func_0x00010bf44300();
  puVar6 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010c137620();
  puStack_2b8 = param_3;
  if (puVar10 == puVar11) {
    puVar11 = param_3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  *(undefined **)(param_1 + _DAT_11271feb8) = puVar6;
  puVar6 = puVar4;
  func_0x00010bf529e0();
  *(undefined **)(param_1 + _DAT_11271febc) = puVar6;
  puStack_2d0 = puVar11;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271fec0);
  *(undefined **)(param_1 + _DAT_11271fec0) = puVar11;
  lStack_2c0 = param_1;
  _objc_release(uVar5);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(puVar3);
  puVar6 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_270,auStack_170,0x10);
  if (puVar6 != (undefined *)0x0) {
    lVar8 = *plStack_260;
    do {
      param_3 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar8) {
          _objc_enumerationMutation(puVar3);
        }
        uVar5 = *(undefined8 *)(lStack_268 + (long)param_3 * 8);
        func_0x00010bdc3540(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beee8,
                            uVar5);
        _objc_release(uVar5);
        param_3 = param_3 + 1;
      } while (puVar6 != param_3);
      puVar6 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_270,auStack_170,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  puStack_2a0 = (undefined8 *)0x0;
  _objc_retain(puVar4);
  puVar6 = puVar4;
  func_0x00010bf52a60(puVar4,param_2,&uStack_2b0,auStack_1f0,0x10);
  if (puVar6 != (undefined *)0x0) {
    puVar10 = (undefined *)*puStack_2a0;
    do {
      param_3 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_2a0 != puVar10) {
          _objc_enumerationMutation(puVar4);
        }
        uVar12 = *(undefined8 *)(lStack_2a8 + (long)param_3 * 8);
        uVar5 = uVar12;
        func_0x00010bdc3540(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bef00,
                            uVar5);
        _objc_release(uVar5);
        func_0x00010bdc3540(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar12);
        _objc_release(uVar12);
        param_3 = param_3 + 1;
      } while (puVar6 != param_3);
      puVar6 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_2b0,auStack_1f0,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar6 = puStack_2d0;
  if (puStack_2d0 != (undefined *)0x0) {
    puVar11 = puStack_2d0;
    func_0x00010c137620(puStack_2d0);
    puVar7 = puVar6;
    func_0x00010c070dc0(puVar6,param_2,puVar11);
    if (((ulong)puVar7 & 1) == 0) {
      puVar11 = puVar6;
      func_0x00010bdc3540(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beee8,
                          puVar11);
      _objc_release(puVar11);
    }
  }
  lVar8 = lStack_2c0;
  func_0x00010bea2f40(lStack_2c0,param_2,puVar1);
  func_0x00010be8bc00(lVar8,param_2,puVar2,*(undefined8 *)(lVar8 + _DAT_11271fe68));
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_2c8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar11 = puStack_2b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_300 = puVar6;
  lStack_2e8 = lVar8;
  pcStack_2d8 = FUN_10521d808;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(puVar11 + _DAT_11271febc) = 0;
  *(undefined8 *)(puVar11 + _DAT_11271feb8) = 0;
  uVar5 = *(undefined8 *)(puVar11 + _DAT_11271fec0);
  *(undefined8 *)(puVar11 + _DAT_11271fec0) = 0;
  puStack_320 = puVar10;
  puStack_318 = puVar4;
  puStack_310 = puVar3;
  puStack_308 = param_3;
  puStack_2f8 = puVar2;
  puStack_2f0 = puVar1;
  puStack_2e0 = &stack0xfffffffffffffff0;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  lVar9 = *(long *)(puVar11 + _DAT_11271fe64);
  _objc_retain(lVar9);
  lVar8 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_3f0,auStack_3a8,0x10);
  if (lVar8 != 0) {
    lVar13 = *plStack_3e0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_3e0 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beed0,
                            *(undefined8 *)(lStack_3e8 + lVar14 * 8));
        lVar14 = lVar14 + 1;
      } while (lVar8 != lVar14);
      lVar8 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_3f0,auStack_3a8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar9);
  puVar2 = puVar1;
  func_0x00010bea2f40(puVar11,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_sync_enter(puVar1);
  func_0x00010bef7f60(*(undefined8 *)(puVar1 + _DAT_11271fe64),param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bf002e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08680(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_sync_exit(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10521d808; end: 10521d96b; -[SCSpectaclesContentPageBusinessLogic _resetContentStatesAndUpdateViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521d808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + _DAT_11271febc) = 0;
  *(undefined8 *)(param_1 + _DAT_11271feb8) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fec0);
  *(undefined8 *)(param_1 + _DAT_11271fec0) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + _DAT_11271fe64);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beed0,
                            *(undefined8 *)(lStack_118 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  puVar5 = puVar2;
  func_0x00010bea2f40(param_1,param_2,puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  _objc_sync_enter(puVar2);
  func_0x00010bef7f60(*(undefined8 *)(puVar2 + _DAT_11271fe64),param_2,puVar5);
  puVar4 = puVar5;
  func_0x00010bf002e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08680(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10521d96c; end: 10521da0f; -[SCSpectaclesContentPageBusinessLogic _setContentStateDict:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521d96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + _DAT_11271fe64),param_2,param_3);
  uVar1 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08680(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10521da10; end: 10521da67; -[SCSpectaclesContentPageBusinessLogic _contentStateForContentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10521da10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11271fe64);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10521da68; end: 10521dbab; -[SCSpectaclesContentPageBusinessLogic _removeContents:afterDelayInSeconds:] */

void FUN_10521da68(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    if (param_4 < 1) {
      func_0x00010be8bc20(param_1);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      func_0x00010c0e2ba0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      _dispatch_time(0,param_4 * 1000000000);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10521dbac;
      puStack_58 = &UNK_110848378;
      uStack_48 = param_1;
      _objc_retain(param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      lStack_50 = param_3;
      func_0x00010058c530(uVar2,PTR___dispatch_main_q_11034be20,&puStack_70);
      _objc_release(lStack_50);
      _objc_destroyWeak(auStack_40);
      _objc_release(uStack_48);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10521dbac; end: 10521dc5b;  */

void FUN_10521dbac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10521dc5c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10521dc5c; end: 10521dc8f;  */

void FUN_10521dc5c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8bc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521dc90; end: 10521df5b; -[SCSpectaclesContentPageBusinessLogic _removeContentsImmediately:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521dc90(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11271fe90;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    dVar10 = 1.60807493534087e-314;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10521df5c;
    puStack_98 = &UNK_110870a20;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(puVar1);
    puStack_88 = puVar1;
    _objc_retain(puVar2);
    puStack_80 = puVar2;
    _objc_retain(puVar3);
    puStack_78 = puVar3;
    func_0x00010bf97e80(uVar6,param_2,&puStack_b0);
    _objc_retain(puVar1);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar6);
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + _DAT_11271fea4),param_2,param_3);
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + _DAT_11271fe64),param_2,param_3);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar2;
      func_0x00010bf51e00();
    }
    lVar8 = (long)_DAT_11271fe98;
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar7;
    _objc_release(uVar6);
    if (puVar4 != (undefined *)0x0) {
      _objc_release(puVar7);
    }
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar3;
      func_0x00010bf51e00();
    }
    lVar9 = (long)_DAT_11271fe9c;
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar7;
    _objc_release(uVar6);
    if (puVar4 != (undefined *)0x0) {
      _objc_release(puVar7);
    }
    lVar5 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))();
    _objc_release(lVar5);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
    _objc_release(uVar6);
    _CACurrentMediaTime();
    dVar11 = *(double *)(param_1 + _DAT_11271feb4);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271fe80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3de0((dVar10 - dVar11) * 1000.0);
    _objc_release(uVar6);
    func_0x00010be0bfe0(param_1);
    _objc_release(puStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_release(lStack_90);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10521df5c; end: 10521e03b;  */

void FUN_10521df5c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c12ba00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x38));
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      lVar2 = lVar1;
      func_0x00010bfed220(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10521e03c; end: 10521e17f; -[SCSpectaclesContentPageBusinessLogic _emitViewModelWithUpdatedContentIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271fe90);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10521e180;
  puStack_58 = &UNK_110870a50;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x00010bf97e80(uVar4,param_2,&puStack_70);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf51e00();
  }
  lVar6 = (long)_DAT_11271fe94;
  _objc_retain(puVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar5;
  _objc_release(uVar4);
  if (puVar2 != (undefined *)0x0) {
    _objc_release(puVar5);
  }
  lVar3 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar4);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10521e180; end: 10521e1fb;  */

void FUN_10521e180(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bfed4c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010bfed220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10521e1fc; end: 10521e43b; -[SCSpectaclesContentPageBusinessLogic _progressBarViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e1fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = (long)_DAT_11271feb8;
  lVar2 = (long)_DAT_11271febc;
  lVar1 = *(long *)(param_1 + lVar5) + *(long *)(param_1 + lVar2);
  if ((0 < lVar1) && (*(long *)(param_1 + _DAT_11271fec0) != 0)) {
    puVar3 = *(undefined **)(param_1 + _DAT_11271fea4);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 != (undefined *)0x0) {
      if (*(long *)(param_1 + lVar5) == 0) {
        if (lVar1 != 1) {
          func_0x0001090256d8();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be18a80(param_1,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar7,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10521e3d8;
        }
        func_0x0001090256c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar1 != 1) {
        func_0x000109025708();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                            *(long *)(param_1 + lVar2) + 1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010be18a80(param_1,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be18a80(param_1,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        _objc_release(puVar6);
        param_1 = lVar5;
LAB_10521e3d8:
        _objc_release(param_1);
        _objc_release(puVar3);
        _objc_release(puVar4);
        puVar4 = puVar7;
      }
      else {
        func_0x0001090256f0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1126b65f0;
      _objc_alloc(PTR_PTR_1126b65f0);
      func_0x00010c003600();
      _objc_release(puVar4);
      goto LAB_10521e418;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10521e418:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10521e43c; end: 10521e4c7; -[SCSpectaclesContentPageBusinessLogic _formatNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271fec4;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1d02e0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c25d4c0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10521e4c8; end: 10521e51f; -[SCSpectaclesContentPageBusinessLogic _setContentLastViewedDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe50);
  _objc_retain(param_3);
  func_0x00010bf4d6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214e20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10521e520; end: 10521e6df; -[SCSpectaclesContentPageBusinessLogic _setupConnectionInterruptedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e520(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined **ppuVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined **)(long)_DAT_11271fec8;
  lVar3 = param_1;
  uStack_a8 = param_2;
  if (*(long *)(param_1 + (long)ppuVar8) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf700e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + (long)ppuVar8);
    *(undefined8 *)(param_1 + (long)ppuVar8) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    unaff_x20 = *(undefined8 *)(param_1 + _DAT_11271fe8c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_40 = *(undefined8 *)(param_1 + (long)ppuVar8);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10521e6e0;
    puStack_60 = &UNK_110849380;
    _objc_retain(lVar3);
    ppuVar8 = &puStack_78;
    uStack_a8 = SUB81(auStack_48,0);
    lStack_58 = lVar3;
    _objc_copyWeak(auStack_50);
    func_0x00010bf38080(unaff_x20);
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 5);
  _objc_destroyWeak(auStack_48);
  lVar5 = lVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_10521e6e0;
  lVar7 = *(long *)(lVar5 + 0x20);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10521e774;
  puStack_b8 = &UNK_11084ceb8;
  uStack_a0 = unaff_x20;
  lStack_98 = lVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_b0,lVar5 + 0x28);
  (**(code **)(lVar7 + 0x10))(lVar7,&puStack_d0);
  _objc_destroyWeak(auStack_b0);
  return;
}



/* Entry: 10521e6e0; end: 10521e773;  */

void FUN_10521e6e0(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10521e774;
  puStack_38 = &UNK_11084ceb8;
  uStack_28 = param_2;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 10521e774; end: 10521e7af;  */

void FUN_10521e774(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521e7b0; end: 10521e7e3; -[SCSpectaclesContentPageBusinessLogic _isUserSelectedTooManyContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10521e7b0(long param_1)

{
  if (0x14 < *(ulong *)(param_1 + _DAT_11271fea8)) {
    return true;
  }
  return 200 < *(ulong *)(param_1 + _DAT_11271feac);
}



/* Entry: 10521e7e4; end: 10521e91f; -[SCSpectaclesContentPageBusinessLogic _extraDiskSpaceNeededToTransferContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10521e7e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(param_1 + _DAT_11271fea4);
        func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(lStack_128 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf9e860();
        uVar4 = lVar2 + uVar4;
        _objc_release(lVar1);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + _DAT_11271fec0) == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = *(long *)(param_3 + _DAT_11271fea4);
      func_0x00010c0e00e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = (ulong)(lVar3 != 0);
      _objc_release();
    }
    return uVar4;
  }
  return uVar4;
}


