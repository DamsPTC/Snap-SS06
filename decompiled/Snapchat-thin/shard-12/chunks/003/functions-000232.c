/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ffb450; end: 108ffb4af; -[SCBitmojiAvatarViewModelSnapchatterInfo .cxx_destruct] */

void FUN_108ffb450(long param_1)

{
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



/* Entry: 108ffb4b0; end: 108ffb51b; +[SCBitmojiAvatarViewModelSnapchatterParameters snapchatterInfoWithSnapchatterInfo:] */

void FUN_108ffb4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb010;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ffb51c; end: 108ffb57f; +[SCBitmojiAvatarViewModelSnapchatterParameters snapchatterWithSnapchatter:] */

void FUN_108ffb51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb010;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ffb580; end: 108ffb5a3; -[SCBitmojiAvatarViewModelSnapchatterParameters copyWithZone:] */

undefined8 FUN_108ffb580(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffb5a4; end: 108ffb61b; -[SCBitmojiAvatarViewModelSnapchatterParameters hash] */

void FUN_108ffb5a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ffcb8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffb61c; end: 108ffb65f; -[SCBitmojiAvatarViewModelSnapchatterParameters internalInit] */

void FUN_108ffb61c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffcb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffb660; end: 108ffb717; -[SCBitmojiAvatarViewModelSnapchatterParameters isEqual:] */

long FUN_108ffb660(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffb6f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffb6fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108ffb6fc;
        }
        goto LAB_108ffb6f0;
      }
    }
    lVar3 = 0;
  }
LAB_108ffb6fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffb718; end: 108ffb79b; -[SCBitmojiAvatarViewModelSnapchatterParameters matchSnapchatter:snapchatterInfo:] */

void FUN_108ffb718(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_108ffb780;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108ffb780;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108ffb780:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ffb79c; end: 108ffb7cb; -[SCBitmojiAvatarViewModelSnapchatterParameters .cxx_destruct] */

void FUN_108ffb79c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ffb7cc; end: 108ffb8f7; -[SCBitmojiAvatarViewModelParameters initWithSnapchatterParameters:contexts:feature:dontUsePrior:viewType:placeholderColorOverride:configuration:] */

undefined1 *
FUN_108ffb7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ffcc0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ffb8f8; end: 108ffb91b; -[SCBitmojiAvatarViewModelParameters copyWithZone:] */

undefined8 FUN_108ffb8f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffb91c; end: 108ffb9bb; -[SCBitmojiAvatarViewModelParameters hash] */

undefined8 * FUN_108ffb91c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  lStack_50 = (long)*(int *)(param_1 + 0xc);
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ffba9c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ffbaa8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) &&
        (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
            if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_108ffbaa8;
            }
            goto LAB_108ffba9c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ffbaa8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ffb9bc; end: 108ffbac3; -[SCBitmojiAvatarViewModelParameters isEqual:] */

long FUN_108ffb9bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffba9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffbaa8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_108ffbaa8;
            }
            goto LAB_108ffba9c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ffbaa8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffbac4; end: 108ffbacb; -[SCBitmojiAvatarViewModelParameters snapchatterParameters] */

undefined8 FUN_108ffbac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ffbacc; end: 108ffbad3; -[SCBitmojiAvatarViewModelParameters contexts] */

undefined8 FUN_108ffbacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ffbad4; end: 108ffbadb; -[SCBitmojiAvatarViewModelParameters feature] */

undefined4 FUN_108ffbad4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108ffbadc; end: 108ffbae3; -[SCBitmojiAvatarViewModelParameters dontUsePrior] */

undefined1 FUN_108ffbadc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ffbae4; end: 108ffbaeb; -[SCBitmojiAvatarViewModelParameters viewType] */

undefined8 FUN_108ffbae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ffbaec; end: 108ffbaf3; -[SCBitmojiAvatarViewModelParameters placeholderColorOverride] */

undefined8 FUN_108ffbaec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ffbaf4; end: 108ffbafb; -[SCBitmojiAvatarViewModelParameters configuration] */

undefined8 FUN_108ffbaf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ffbafc; end: 108ffbb43; -[SCBitmojiAvatarViewModelParameters .cxx_destruct] */

void FUN_108ffbafc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ffbb44; end: 108ffbb5f; +[SCBitmojiAvatarViewModelParametersBuilder bitmojiAvatarViewModelParameters] */

void FUN_108ffbb44(void)

{
  _objc_alloc_init(PTR_PTR_1126dce30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffbb60; end: 108ffbd3f; +[SCBitmojiAvatarViewModelParametersBuilder bitmojiAvatarViewModelParametersFromExistingBitmojiAvatarViewModelParameters:] */

void FUN_108ffbb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126dce30;
  _objc_retain(param_3);
  func_0x00010bf1ae60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c244600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9960(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf4f6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ab0e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfa1820(param_3);
  puVar7 = puVar5;
  func_0x00010c2adae0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf882c0(param_3);
  puVar8 = puVar7;
  func_0x00010c2ac8e0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c29e660(param_3);
  puVar9 = puVar8;
  func_0x00010c2bc9a0(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0fd7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2b5640(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar12 = puVar10;
  func_0x00010c2aac40(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108ffbd40; end: 108ffbd8b; -[SCBitmojiAvatarViewModelParametersBuilder build] */

void FUN_108ffbd40(void)

{
  _objc_alloc(PTR_PTR_1126cb018);
  func_0x00010c0494c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffbd8c; end: 108ffbdc3; -[SCBitmojiAvatarViewModelParametersBuilder withSnapchatterParameters:] */

long FUN_108ffbd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ffbdc4; end: 108ffbdfb; -[SCBitmojiAvatarViewModelParametersBuilder withContexts:] */

long FUN_108ffbdc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ffbdfc; end: 108ffbe03; -[SCBitmojiAvatarViewModelParametersBuilder withFeature:] */

void FUN_108ffbdfc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108ffbe04; end: 108ffbe0b; -[SCBitmojiAvatarViewModelParametersBuilder withDontUsePrior:] */

void FUN_108ffbe04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 108ffbe0c; end: 108ffbe13; -[SCBitmojiAvatarViewModelParametersBuilder withViewType:] */

void FUN_108ffbe0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108ffbe14; end: 108ffbe4b; -[SCBitmojiAvatarViewModelParametersBuilder withPlaceholderColorOverride:] */

long FUN_108ffbe14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ffbe4c; end: 108ffbe83; -[SCBitmojiAvatarViewModelParametersBuilder withConfiguration:] */

long FUN_108ffbe4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ffbe84; end: 108ffbecb; -[SCBitmojiAvatarViewModelParametersBuilder .cxx_destruct] */

void FUN_108ffbe84(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ffbecc; end: 108ffbf53; -[SCGroupBitmojiNotificationAvatarViewModel initWithImage:displayingBitmoji:] */

undefined1 *
FUN_108ffbecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffcc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ffbf54; end: 108ffbf77; -[SCGroupBitmojiNotificationAvatarViewModel copyWithZone:] */

undefined8 FUN_108ffbf54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffbf78; end: 108ffbfe3; -[SCGroupBitmojiNotificationAvatarViewModel hash] */

undefined8 * FUN_108ffbf78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108ffc068;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108ffc068;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108ffc068;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108ffc068:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108ffbfe4; end: 108ffc083; -[SCGroupBitmojiNotificationAvatarViewModel isEqual:] */

long FUN_108ffbfe4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffc068;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108ffc068;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108ffc068;
    }
  }
  lVar3 = 1;
LAB_108ffc068:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffc084; end: 108ffc08b; -[SCGroupBitmojiNotificationAvatarViewModel image] */

undefined8 FUN_108ffc084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ffc08c; end: 108ffc093; -[SCGroupBitmojiNotificationAvatarViewModel displayingBitmoji] */

undefined1 FUN_108ffc08c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ffc094; end: 108ffc09f; -[SCGroupBitmojiNotificationAvatarViewModel .cxx_destruct] */

void FUN_108ffc094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ffc0a0; end: 108ffc117; -[SCAvatarBadgeViewModel initWithBadgeImage:] */

undefined1 * FUN_108ffc0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffcd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ffc118; end: 108ffc13b; -[SCAvatarBadgeViewModel copyWithZone:] */

undefined8 FUN_108ffc118(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffc13c; end: 108ffc143; -[SCAvatarBadgeViewModel hash] */

void FUN_108ffc13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108ffc144; end: 108ffc1d3; -[SCAvatarBadgeViewModel isEqual:] */

long FUN_108ffc144(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffc1b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108ffc1b8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108ffc1b8;
    }
  }
  lVar3 = 1;
LAB_108ffc1b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffc1d4; end: 108ffc1db; -[SCAvatarBadgeViewModel badgeImage] */

undefined8 FUN_108ffc1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ffc1dc; end: 108ffc1e7; -[SCAvatarBadgeViewModel .cxx_destruct] */

void FUN_108ffc1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ffc1e8; end: 108ffc25f; -[SCAvatarActivityIndicatorViewModel initWithBackgroundColor:] */

undefined1 * FUN_108ffc1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffcd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ffc260; end: 108ffc283; -[SCAvatarActivityIndicatorViewModel copyWithZone:] */

undefined8 FUN_108ffc260(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffc284; end: 108ffc28b; -[SCAvatarActivityIndicatorViewModel hash] */

void FUN_108ffc284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108ffc28c; end: 108ffc31b; -[SCAvatarActivityIndicatorViewModel isEqual:] */

long FUN_108ffc28c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffc300;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108ffc300;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071c60();
      goto LAB_108ffc300;
    }
  }
  lVar3 = 1;
LAB_108ffc300:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffc31c; end: 108ffc323; -[SCAvatarActivityIndicatorViewModel backgroundColor] */

undefined8 FUN_108ffc31c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ffc324; end: 108ffc32f; -[SCAvatarActivityIndicatorViewModel .cxx_destruct] */

void FUN_108ffc324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ffc330; end: 108ffc41b;  */

void FUN_108ffc330(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _CGAffineTransformMakeTranslation(&uStack_60,0,param_1 * 0.3555000126361847);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_2,param_3,&uStack_90);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108ffc41c;
  puStack_a0 = &UNK_110842e18;
  uStack_98 = param_2;
  _objc_retain(param_2);
  func_0x00010bf03460(0x3fd3333340000000,0x3fa99999a0000000,0x3fe8000000000000,0x3fb99999a0000000,
                      puVar1,param_3,0,&puStack_b8,&PTR___NSConcreteGlobalBlock_110ad2af0);
  _objc_release(uStack_98);
  _objc_release(param_2);
  return;
}



/* Entry: 108ffc41c; end: 108ffc457;  */

void FUN_108ffc41c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 108ffc458; end: 108ffc45b;  */

void FUN_108ffc458(void)

{
  return;
}



/* Entry: 108ffc45c; end: 108ffc57b;  */

void FUN_108ffc45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_4);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_2,param_3,&uStack_70);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108ffc57c;
  puStack_88 = &UNK_110848c48;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108ffc5d8;
  puStack_b0 = &UNK_110842508;
  uStack_a8 = param_4;
  uStack_80 = param_2;
  uStack_78 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010bf03460(0x3fd3333340000000,0,0x3fe8000000000000,0x3fb99999a0000000,puVar1,param_3,0,
                      &puStack_a0,&puStack_c8);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 108ffc57c; end: 108ffc5d7;  */

void FUN_108ffc57c(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeTranslation(&uStack_50,0,*(double *)(param_1 + 0x28) * 0.3555000126361847);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 108ffc5d8; end: 108ffc5eb;  */

void FUN_108ffc5d8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ffc5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ffc5ec; end: 108ffc6d3;  */

void FUN_108ffc5ec(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _CGAffineTransformMakeTranslation(&uStack_60,0,param_1 * 0.3555000126361847);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_2,param_3,&uStack_90);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108ffc6d4;
  puStack_a0 = &UNK_110842e18;
  uStack_98 = param_2;
  _objc_retain(param_2);
  func_0x00010bf03460(0x3fd3333340000000,0,0x3fe8000000000000,0x3fb99999a0000000,puVar1,param_3,0,
                      &puStack_b8,&PTR___NSConcreteGlobalBlock_110ad2b10);
  _objc_release(uStack_98);
  _objc_release(param_2);
  return;
}



/* Entry: 108ffc6d4; end: 108ffc70f;  */

void FUN_108ffc6d4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 108ffc710; end: 108ffc713;  */

void FUN_108ffc710(void)

{
  return;
}



/* Entry: 108ffc714; end: 108ffc7fb;  */

void FUN_108ffc714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf03420(0x3fc99999a0000000,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108ffc7fc; end: 108ffc857;  */

void FUN_108ffc7fc(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeTranslation(&uStack_50,0,*(double *)(param_1 + 0x28) * 0.3555000126361847);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 108ffc858; end: 108ffc86b;  */

void FUN_108ffc858(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ffc864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ffc86c; end: 108ffca9b; -[SCTypingBubbleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108ffc86c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ffce0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f84c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f84c) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010befbb60();
    func_0x000108ffe280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f850);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277f850) = puVar4;
    _objc_release(uVar5);
    puVar4 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release();
    func_0x000108ffe280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f854);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277f854) = puVar4;
    _objc_release(uVar5);
    puVar4 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release();
    func_0x000108ffe280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f858);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277f858) = puVar4;
    _objc_release(uVar5);
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_f8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_100 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_150 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    _CATransform3DScale(&uStack_d0,0,0,0,&uStack_150);
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    func_0x00010c219960();
    _objc_release(puVar4);
  }
  return puVar1;
}



/* Entry: 108ffca9c; end: 108ffcaab; -[SCTypingBubbleView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffca9c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11277f848) = 0;
  return;
}



/* Entry: 108ffcaac; end: 108ffcc23; -[SCTypingBubbleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffcaac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffce0;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar4 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010bf20c00(param_2);
  lVar1 = (long)_DAT_11277f84c;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(param_1,uVar4,*(undefined8 *)(param_2 + lVar1));
  _CGRectIntegral(0,0,0x4008000000000000,0x4008000000000000);
  lVar1 = (long)_DAT_11277f850;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectIntegral(0,0,0x4008000000000000,0x4008000000000000);
  lVar2 = (long)_DAT_11277f854;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar2));
  dVar5 = 0.0;
  _CGRectIntegral(0,0,0x4008000000000000,0x4008000000000000);
  lVar3 = (long)_DAT_11277f858;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  dVar6 = dVar5;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar6 = (dVar6 + -9.0 + -4.0) * 0.5 + 1.5;
  func_0x00010c1dee80(dVar6,dVar5,*(undefined8 *)(param_2 + lVar1));
  dVar6 = dVar6 + 5.0;
  func_0x00010c1dee80(dVar6,dVar5,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c1dee80(dVar6 + 5.0,dVar5,*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 108ffcc24; end: 108ffcd4b; -[SCTypingBubbleView animateWithTypingAnimationState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffcc24(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11277f848;
  uVar1 = *(ulong *)(param_1 + lVar2);
  if (uVar1 != param_3) {
    if ((long)param_3 < 3) {
      if (param_3 == 0) {
        if (5 < uVar1 || (1L << (uVar1 & 0x3f) & 0x31U) == 0) {
          func_0x00010c12aac0(param_1);
        }
      }
      else if (param_3 == 1) {
        func_0x00010c24dd60(param_1,param_2,param_4);
      }
      else if (param_3 == 2) {
        func_0x00010c0f5bc0(param_1);
      }
    }
    else if (param_3 == 3) {
      func_0x00010c13d2a0(param_1);
    }
    else if (param_3 == 4) {
      if (5 < uVar1 || (1L << (uVar1 & 0x3f) & 0x31U) == 0) {
        func_0x00010bf2de00(param_1,param_2,param_4);
      }
    }
    else if ((param_3 == 5) && (5 < uVar1 || (1L << (uVar1 & 0x3f) & 0x31U) == 0)) {
      func_0x00010c122100(param_1,param_2,param_4);
    }
    *(ulong *)(param_1 + lVar2) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ffcd4c; end: 108ffd073; -[SCTypingBubbleView startAnimationWithCompletionBlock:] */

void FUN_108ffcd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe921fb54442d18,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar2);
  _objc_release(puVar3);
  func_0x00010c216920(puVar2);
  func_0x00010c192d40(0x3fd3333340000000,puVar2);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar4);
  func_0x00010c192d40(0x3fd3333340000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  func_0x00010c192d40(0x3fd3333340000000,puVar5);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar3);
  func_0x00010c192d40(0x3fd3333340000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_retain(param_3);
  func_0x00010c17fb40(puVar3);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bec13e0(*(undefined8 *)(puVar2 + 0x20));
  func_0x00010bdcb2e0(*(undefined8 *)(puVar2 + 0x20));
  if (*(long *)(puVar2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ffd0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ffd074; end: 108ffd0b7;  */

void FUN_108ffd074(long param_1)

{
  func_0x00010bec13e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdcb2e0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ffd0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ffd0b8; end: 108ffd187; -[SCTypingBubbleView _startPulsingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffd0b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010beb4ac0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantFloatNumber_111186560);
  func_0x00010c1eabe0(0x7f800000,puVar2);
  func_0x00010c16d4c0(puVar2,param_2,1);
  func_0x00010c192d40(0x3fd3333340000000,puVar2);
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11277f84c);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ffd188; end: 108ffd277; -[SCTypingBubbleView _animateTypingDots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffd188(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010beb4ac0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11277f850);
  FUN_108ffd278(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8f298);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11277f854);
  FUN_108ffd278(0x3fe3333340000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbf558);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11277f858);
  FUN_108ffd278(0x3ff3333340000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8f278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ffd278; end: 108ffd4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffd278(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined1 **ppuStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110e446f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174c20();
  func_0x00010c192d40(0x3fe3333340000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2);
  _objc_release(puVar3);
  func_0x00010c16d4c0(puVar2);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3);
  func_0x00010c192d40(0x3fe3333340000000,puVar3);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar3);
  _objc_release(puVar4);
  func_0x00010c16d4c0(puVar3);
  puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar4);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3ffccccce0000000,puVar4);
  dVar9 = 1.05685337245341e-314;
  func_0x00010c1eabe0(0x7f800000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c216080(puVar4);
  _objc_release(puVar5);
  _CACurrentMediaTime();
  func_0x00010c16fd40(param_1 + dVar9,puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uStack_d0 = 0x3fe3333340000000;
  pcStack_78 = FUN_108ffd4ac;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_c8 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3);
  func_0x00010c192d40(0x3fc99999a0000000,puVar3);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  uStack_378 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_380 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_388 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_390 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_398 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_3a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_3a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_3b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_3b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_3c0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_3c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_3d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_3d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_3e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_3e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_3f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  uStack_1f0 = uStack_3c0;
  uStack_1e8 = uStack_3b8;
  uStack_1e0 = uStack_3d0;
  uStack_1d8 = uStack_3c8;
  uStack_1d0 = uStack_3e0;
  uStack_1c8 = uStack_3d8;
  uStack_1c0 = uStack_3f0;
  uStack_1b8 = uStack_3e8;
  uStack_1b0 = uStack_380;
  uStack_1a8 = uStack_378;
  uStack_1a0 = uStack_390;
  uStack_198 = uStack_388;
  uStack_190 = uStack_3a0;
  uStack_188 = uStack_398;
  uStack_180 = uStack_3b0;
  uStack_178 = uStack_3a8;
  _CATransform3DRotate(&uStack_170,0x3fd0c152382d7365,0,0,0x3ff0000000000000,&uStack_1f0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fd0c152382d7365,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar4);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fc99999a0000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  uStack_228 = uStack_378;
  uStack_230 = uStack_380;
  uStack_218 = uStack_388;
  uStack_220 = uStack_390;
  uStack_208 = uStack_398;
  uStack_210 = uStack_3a0;
  uStack_1f8 = uStack_3a8;
  uStack_200 = uStack_3b0;
  uStack_268 = uStack_3b8;
  uStack_270 = uStack_3c0;
  uStack_258 = uStack_3c8;
  uStack_260 = uStack_3d0;
  uStack_248 = uStack_3d8;
  uStack_250 = uStack_3e0;
  uStack_238 = uStack_3e8;
  uStack_240 = uStack_3f0;
  _CATransform3DScale(&uStack_1f0,0x3ff8000000000000,0x3ff8000000000000,0x3ff8000000000000,
                      &uStack_270);
  func_0x00010c216920(puVar5);
  func_0x00010c192d40(0x3fc99999a0000000,puVar5);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar3;
  puStack_e8 = puVar4;
  puStack_e0 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fc99999a0000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(puVar8);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_228 = uStack_128;
  uStack_230 = uStack_130;
  uStack_218 = uStack_118;
  uStack_220 = uStack_120;
  uStack_208 = uStack_108;
  uStack_210 = uStack_110;
  uStack_1f8 = uStack_f8;
  uStack_200 = uStack_100;
  uStack_268 = uStack_168;
  uStack_270 = uStack_170;
  uStack_258 = uStack_158;
  uStack_260 = uStack_160;
  uStack_248 = uStack_148;
  uStack_250 = uStack_150;
  uStack_238 = uStack_138;
  uStack_240 = uStack_140;
  uStack_328 = uStack_1a8;
  uStack_330 = uStack_1b0;
  uStack_318 = uStack_198;
  uStack_320 = uStack_1a0;
  uStack_308 = uStack_188;
  uStack_310 = uStack_190;
  uStack_2f8 = uStack_178;
  uStack_300 = uStack_180;
  uStack_368 = uStack_1e8;
  uStack_370 = uStack_1f0;
  uStack_358 = uStack_1d8;
  uStack_360 = uStack_1e0;
  uStack_348 = uStack_1c8;
  uStack_350 = uStack_1d0;
  uStack_338 = uStack_1b8;
  uStack_340 = uStack_1c0;
  _CATransform3DConcat(&uStack_2f0,&uStack_270,&uStack_370);
  puVar8 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = uStack_2a8;
  uStack_230 = uStack_2b0;
  uStack_218 = uStack_298;
  uStack_220 = uStack_2a0;
  uStack_208 = uStack_288;
  uStack_210 = uStack_290;
  uStack_1f8 = uStack_278;
  uStack_200 = uStack_280;
  uStack_268 = uStack_2e8;
  uStack_270 = uStack_2f0;
  uStack_258 = uStack_2d8;
  uStack_260 = uStack_2e0;
  uStack_248 = uStack_2c8;
  uStack_250 = uStack_2d0;
  uStack_238 = uStack_2b8;
  uStack_240 = uStack_2c0;
  func_0x00010c219960();
  _objc_release(puVar8);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3f8 = FUN_108ffd860;
  puVar6 = puVar8;
  puStack_420 = puVar5;
  puStack_418 = puVar4;
  puStack_410 = puVar3;
  puStack_408 = puVar2;
  ppuStack_400 = &puStack_80;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    uStack_490 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_4a0,puVar6);
  }
  iVar1 = (int)&uStack_4a0;
  _CATransform3DIsIdentity();
  _objc_release(puVar6);
  if (iVar1 == 0) {
    func_0x00010c0f62a0(puVar8);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar2);
    func_0x00010c192d40(0x3fd3333340000000,puVar2);
    puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar8;
    func_0x00010c08c0e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(puVar3);
    uStack_458 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_460 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_448 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_450 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_438 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_440 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_428 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_430 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_498 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_4a0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_488 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_490 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_478 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_480 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_468 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_470 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    _CATransform3DScale(&uStack_520,0x3fe8000000000000,0x3fe8000000000000,0x3fe8000000000000,
                        &uStack_4a0);
    puVar3 = puVar8;
    func_0x00010c08c0e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uStack_458 = uStack_4d8;
    uStack_460 = uStack_4e0;
    uStack_448 = uStack_4c8;
    uStack_450 = uStack_4d0;
    uStack_438 = uStack_4b8;
    uStack_440 = uStack_4c0;
    uStack_428 = uStack_4a8;
    uStack_430 = uStack_4b0;
    uStack_498 = uStack_518;
    uStack_4a0 = uStack_520;
    uStack_488 = uStack_508;
    uStack_490 = uStack_510;
    uStack_478 = uStack_4f8;
    uStack_480 = uStack_500;
    uStack_468 = uStack_4e8;
    uStack_470 = uStack_4f0;
    func_0x00010c219960();
    _objc_release(puVar3);
    puVar3 = puVar8;
    func_0x00010c08c0e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(puVar3);
    func_0x00010c12aaa0(*(undefined8 *)(puVar8 + _DAT_11277f850));
    func_0x00010c12aaa0(*(undefined8 *)(puVar8 + _DAT_11277f854));
    func_0x00010c12aaa0(*(undefined8 *)(puVar8 + _DAT_11277f858));
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 108ffd4ac; end: 108ffd85f; -[SCTypingBubbleView receiveAnimationWithCompletionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffd4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3);
  func_0x00010c192d40(0x3fc99999a0000000,puVar3);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  uStack_308 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_310 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_318 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_320 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_328 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_330 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_338 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_340 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_348 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_350 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_358 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_360 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_368 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_370 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_378 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_380 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  uStack_180 = uStack_350;
  uStack_178 = uStack_348;
  uStack_170 = uStack_360;
  uStack_168 = uStack_358;
  uStack_160 = uStack_370;
  uStack_158 = uStack_368;
  uStack_150 = uStack_380;
  uStack_148 = uStack_378;
  uStack_140 = uStack_310;
  uStack_138 = uStack_308;
  uStack_130 = uStack_320;
  uStack_128 = uStack_318;
  uStack_120 = uStack_330;
  uStack_118 = uStack_328;
  uStack_110 = uStack_340;
  uStack_108 = uStack_338;
  _CATransform3DRotate(&uStack_100,0x3fd0c152382d7365,0,0,0x3ff0000000000000,&uStack_180);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fd0c152382d7365,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar4);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fc99999a0000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  uStack_1b8 = uStack_308;
  uStack_1c0 = uStack_310;
  uStack_1a8 = uStack_318;
  uStack_1b0 = uStack_320;
  uStack_198 = uStack_328;
  uStack_1a0 = uStack_330;
  uStack_188 = uStack_338;
  uStack_190 = uStack_340;
  uStack_1f8 = uStack_348;
  uStack_200 = uStack_350;
  uStack_1e8 = uStack_358;
  uStack_1f0 = uStack_360;
  uStack_1d8 = uStack_368;
  uStack_1e0 = uStack_370;
  uStack_1c8 = uStack_378;
  uStack_1d0 = uStack_380;
  _CATransform3DScale(&uStack_180,0x3ff8000000000000,0x3ff8000000000000,0x3ff8000000000000,
                      &uStack_200);
  func_0x00010c216920(puVar5);
  func_0x00010c192d40(0x3fc99999a0000000,puVar5);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  puStack_78 = puVar4;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fc99999a0000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar2);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_1b8 = uStack_b8;
  uStack_1c0 = uStack_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  uStack_198 = uStack_98;
  uStack_1a0 = uStack_a0;
  uStack_188 = uStack_88;
  uStack_190 = uStack_90;
  uStack_1f8 = uStack_f8;
  uStack_200 = uStack_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  uStack_1d8 = uStack_d8;
  uStack_1e0 = uStack_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  uStack_2b8 = uStack_138;
  uStack_2c0 = uStack_140;
  uStack_2a8 = uStack_128;
  uStack_2b0 = uStack_130;
  uStack_298 = uStack_118;
  uStack_2a0 = uStack_120;
  uStack_288 = uStack_108;
  uStack_290 = uStack_110;
  uStack_2f8 = uStack_178;
  uStack_300 = uStack_180;
  uStack_2e8 = uStack_168;
  uStack_2f0 = uStack_170;
  uStack_2d8 = uStack_158;
  uStack_2e0 = uStack_160;
  uStack_2c8 = uStack_148;
  uStack_2d0 = uStack_150;
  _CATransform3DConcat(&uStack_280,&uStack_200,&uStack_300);
  uVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uStack_238;
  uStack_1c0 = uStack_240;
  uStack_1a8 = uStack_228;
  uStack_1b0 = uStack_230;
  uStack_198 = uStack_218;
  uStack_1a0 = uStack_220;
  uStack_188 = uStack_208;
  uStack_190 = uStack_210;
  uStack_1f8 = uStack_278;
  uStack_200 = uStack_280;
  uStack_1e8 = uStack_268;
  uStack_1f0 = uStack_270;
  uStack_1d8 = uStack_258;
  uStack_1e0 = uStack_260;
  uStack_1c8 = uStack_248;
  uStack_1d0 = uStack_250;
  func_0x00010c219960();
  _objc_release(uVar2);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar6 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_388 = FUN_108ffd860;
  puVar7 = puVar6;
  puStack_3b0 = puVar5;
  puStack_3a8 = puVar4;
  puStack_3a0 = puVar3;
  uStack_398 = param_1;
  puStack_390 = &stack0xfffffffffffffff0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_430,puVar7);
  }
  iVar1 = (int)&uStack_430;
  _CATransform3DIsIdentity();
  _objc_release(puVar7);
  if (iVar1 == 0) {
    func_0x00010c0f62a0(puVar6);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar3);
    func_0x00010c192d40(0x3fd3333340000000,puVar3);
    puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010c08c0e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(puVar4);
    uStack_3e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_3f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_3d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_3e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_3c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_3d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_3b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_3c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_428 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_430 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_418 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_420 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_408 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_410 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_3f8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_400 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    _CATransform3DScale(&uStack_4b0,0x3fe8000000000000,0x3fe8000000000000,0x3fe8000000000000,
                        &uStack_430);
    puVar4 = puVar6;
    func_0x00010c08c0e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uStack_3e8 = uStack_468;
    uStack_3f0 = uStack_470;
    uStack_3d8 = uStack_458;
    uStack_3e0 = uStack_460;
    uStack_3c8 = uStack_448;
    uStack_3d0 = uStack_450;
    uStack_3b8 = uStack_438;
    uStack_3c0 = uStack_440;
    uStack_428 = uStack_4a8;
    uStack_430 = uStack_4b0;
    uStack_418 = uStack_498;
    uStack_420 = uStack_4a0;
    uStack_408 = uStack_488;
    uStack_410 = uStack_490;
    uStack_3f8 = uStack_478;
    uStack_400 = uStack_480;
    func_0x00010c219960();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010c08c0e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(puVar4);
    func_0x00010c12aaa0(*(undefined8 *)(puVar6 + _DAT_11277f850));
    func_0x00010c12aaa0(*(undefined8 *)(puVar6 + _DAT_11277f854));
    func_0x00010c12aaa0(*(undefined8 *)(puVar6 + _DAT_11277f858));
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 108ffd860; end: 108ffda73; -[SCTypingBubbleView pauseAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffd860(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_b0,lVar2);
  }
  iVar1 = (int)&uStack_b0;
  _CATransform3DIsIdentity();
  _objc_release(lVar2);
  if (iVar1 == 0) {
    func_0x00010c0f62a0(param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                        &PTR____CFConstantStringClassReference_110dc8938);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111185e50);
    func_0x00010c192d40(0x3fd3333340000000,puVar3);
    puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(lVar2);
    uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_58 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_60 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_48 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_50 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_38 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_40 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_b0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    _CATransform3DScale(&uStack_130,0x3fe8000000000000,0x3fe8000000000000,0x3fe8000000000000,
                        &uStack_b0);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_38 = uStack_b8;
    uStack_40 = uStack_c0;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    func_0x00010c219960();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(lVar2);
    func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_11277f850));
    func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_11277f854));
    func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_11277f858));
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 108ffda74; end: 108ffdc2b; -[SCTypingBubbleView resumeAnimation] */

void FUN_108ffda74(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_b0;
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_b0,lVar2);
  }
  _CATransform3DIsIdentity();
  _objc_release(lVar2);
  if (iVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                        &PTR____CFConstantStringClassReference_110dc8938);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantFloatNumber_111186560);
    func_0x00010c192d40(0x3fd3333340000000,puVar3);
    puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_58 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_60 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_48 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_50 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_38 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_40 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_b0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    func_0x00010c219960();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(lVar2);
    func_0x00010bdcb2e0(param_1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c27e2e0(param_1);
  }
  return;
}



/* Entry: 108ffdc2c; end: 108ffdf53; -[SCTypingBubbleView cancelAnimationWithCompletionBlock:] */

void FUN_108ffdc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  uVar9 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uVar5 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uVar17 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uVar13 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uVar10 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uVar6 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uVar18 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uVar14 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uVar11 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uVar7 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uVar19 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uVar15 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uVar8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uVar20 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uVar16 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  uStack_180 = uVar7;
  uStack_178 = uVar11;
  uStack_170 = uVar15;
  uStack_168 = uVar19;
  uStack_160 = uVar8;
  uStack_158 = uVar12;
  uStack_150 = uVar16;
  uStack_148 = uVar20;
  uStack_140 = uVar5;
  uStack_138 = uVar9;
  uStack_130 = uVar13;
  uStack_128 = uVar17;
  uStack_120 = uVar6;
  uStack_118 = uVar10;
  uStack_110 = uVar14;
  uStack_108 = uVar18;
  _CATransform3DRotate(&uStack_f8,0xbfd0c152382d7365,0,0,0x3ff0000000000000,&uStack_180);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0xbfd0c152382d7365,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fc99999a0000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  uStack_200 = uVar7;
  uStack_1f8 = uVar11;
  uStack_1f0 = uVar15;
  uStack_1e8 = uVar19;
  uStack_1e0 = uVar8;
  uStack_1d8 = uVar12;
  uStack_1d0 = uVar16;
  uStack_1c8 = uVar20;
  uStack_1c0 = uVar5;
  uStack_1b8 = uVar9;
  uStack_1b0 = uVar13;
  uStack_1a8 = uVar17;
  uStack_1a0 = uVar6;
  uStack_198 = uVar10;
  uStack_190 = uVar14;
  uStack_188 = uVar18;
  _CATransform3DScale(&uStack_180,0,0,0,&uStack_200);
  func_0x00010c216920(puVar2);
  func_0x00010c192d40(0x3fc99999a0000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fc99999a0000000,puVar3);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar5);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_1b8 = uStack_b0;
  uStack_1c0 = uStack_b8;
  uStack_1a8 = uStack_a0;
  uStack_1b0 = uStack_a8;
  uStack_198 = uStack_90;
  uStack_1a0 = uStack_98;
  uStack_188 = uStack_80;
  uStack_190 = uStack_88;
  uStack_1f8 = uStack_f0;
  uStack_200 = uStack_f8;
  uStack_1e8 = uStack_e0;
  uStack_1f0 = uStack_e8;
  uStack_1d8 = uStack_d0;
  uStack_1e0 = uStack_d8;
  uStack_1c8 = uStack_c0;
  uStack_1d0 = uStack_c8;
  uStack_2b8 = uStack_138;
  uStack_2c0 = uStack_140;
  uStack_2a8 = uStack_128;
  uStack_2b0 = uStack_130;
  uStack_298 = uStack_118;
  uStack_2a0 = uStack_120;
  uStack_288 = uStack_108;
  uStack_290 = uStack_110;
  uStack_2f8 = uStack_178;
  uStack_300 = uStack_180;
  uStack_2e8 = uStack_168;
  uStack_2f0 = uStack_170;
  uStack_2d8 = uStack_158;
  uStack_2e0 = uStack_160;
  uStack_2c8 = uStack_148;
  uStack_2d0 = uStack_150;
  _CATransform3DConcat(&uStack_280,&uStack_200,&uStack_300);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uStack_238;
  uStack_1c0 = uStack_240;
  uStack_1a8 = uStack_228;
  uStack_1b0 = uStack_230;
  uStack_198 = uStack_218;
  uStack_1a0 = uStack_220;
  uStack_188 = uStack_208;
  uStack_190 = uStack_210;
  uStack_1f8 = uStack_278;
  uStack_200 = uStack_280;
  uStack_1e8 = uStack_268;
  uStack_1f0 = uStack_270;
  uStack_1d8 = uStack_258;
  uStack_1e0 = uStack_260;
  uStack_1c8 = uStack_248;
  uStack_1d0 = uStack_250;
  func_0x00010c219960();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(puVar2);
  func_0x00010bec13e0(puVar1);
  func_0x00010bdcb2e0(puVar1);
  return;
}



/* Entry: 108ffdf54; end: 108ffe013; -[SCTypingBubbleView typingPulsingAnimation] */

void FUN_108ffdf54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar1);
  func_0x00010bec13e0(param_1);
  func_0x00010bdcb2e0(param_1);
  return;
}



/* Entry: 108ffe014; end: 108ffe0df; -[SCTypingBubbleView pausedPulsingAnimation] */

void FUN_108ffe014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [128];
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(uVar1);
  _CATransform3DMakeScale(auStack_b0,0x3fe8000000000000,0x3fe8000000000000,0x3fe8000000000000);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar1);
  func_0x00010bec13e0(param_1);
  return;
}



/* Entry: 108ffe0e0; end: 108ffe137; -[SCTypingBubbleView removeAllAnimationsAndHideView] */

void FUN_108ffe0e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d940();
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ffe138; end: 108ffe21f; -[SCTypingBubbleView _shouldOptimizePulsingAnimation] */

bool FUN_108ffe138(float param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c07e1c0();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0772e0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17500();
      if (param_1 <= 0.0) {
        bVar1 = false;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
        func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17500();
        bVar1 = param_1 < 0.2;
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
      return bVar1;
    }
  }
  return true;
}



/* Entry: 108ffe220; end: 108ffe343; -[SCTypingBubbleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ffe220(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f858,0);
  _objc_storeStrong(param_1 + _DAT_11277f854,0);
  _objc_storeStrong(param_1 + _DAT_11277f850,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f84c,0);
  return;
}



/* Entry: 108ffe344; end: 108ffe3a3; -[SCAvatarCustomRadiusBlurEffect effectSettings] */

void FUN_108ffe344(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffce8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_effectSettings_1125392d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ffe3a4; end: 108ffe457; -[SCAvatarShapeBlurView init] */

undefined1 * FUN_108ffe3a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR_PTR_1126dce38;
  _objc_opt_new(PTR_PTR_1126dce38);
  puStack_38 = PTR_PTR_1126ffcf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithEffect__1125e1558,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108ffe458; end: 108ffe49b; -[SCAvatarShapeBlurView shapeMask] */

void FUN_108ffe458(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ffe49c; end: 108ffe597;  */

void FUN_108ffe49c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_48 = param_1;
  if (param_1 == 0.0) {
    dStack_48 = 1.100000023841858;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108ffe598;
  puStack_58 = &UNK_110848c48;
  _objc_retain(param_2);
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108ffe5e8;
  puStack_80 = &UNK_110841f20;
  uStack_78 = param_2;
  uStack_50 = param_2;
  _objc_retain(param_2);
  func_0x00010bf03460(0x3fd3333340000000,0,0x3fe99999a0000000,0x3ff0000000000000,puVar1,param_3,4,
                      &puStack_70,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 108ffe598; end: 108ffe5e7;  */

void FUN_108ffe598(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 108ffe5e8; end: 108ffe623;  */

void FUN_108ffe5e8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 108ffe624; end: 108ffe70f;  */

ulong FUN_108ffe624(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  long extraout_x8;
  ulong uVar6;
  ushort *puVar7;
  ushort auStack_40 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar3 = param_1;
  func_0x00010c08fa60();
  uVar6 = uVar3;
  if (0x1f < uVar3) {
    uVar6 = 0x20;
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar6 << 1);
    func_0x00010bfc3900(param_1);
    uVar5 = 0;
    puVar7 = (ushort *)((long)auStack_40 - (extraout_x8 + 0x11U & 0xfffffffffffffff0));
    do {
      uVar5 = (uint)*puVar7 + uVar5 * 0x1f;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
    uVar1 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar6 = (ulong)uVar1;
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar2 = lRam0000000113730630;
  _objc_retain();
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113730630,&PTR___NSConcreteGlobalBlock_110ad2b30);
  }
  FUN_108ffe624(param_1);
  _objc_release(param_1);
  func_0x00010bf529e0();
  uVar6 = uRam0000000113730638;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return uVar6;
}



/* Entry: 108ffe710; end: 108ffe7bf;  */

void FUN_108ffe710(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = lRam0000000113730630;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x113730630,&PTR___NSConcreteGlobalBlock_110ad2b30);
  }
  FUN_108ffe624(param_1);
  _objc_release(param_1);
  func_0x00010bf529e0();
  uVar3 = uRam0000000113730638;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ffe7c0; end: 108ffeedf;  */

void FUN_108ffe7c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  long lVar35;
  
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd80030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = puRam0000000113730638;
  puRam0000000113730638 = puVar33;
  _objc_release(uVar34);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar35) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = 1;
  FUN_108ffef38(1,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar34);
  return;
}



/* Entry: 108ffeee0; end: 108ffef37;  */

void FUN_108ffeee0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 1;
  FUN_108ffef38(1,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ffef38; end: 108fff2db;  */

void FUN_108ffef38(undefined8 param_1,double *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double *pdVar13;
  double *pdVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar13 = param_2;
  _objc_retain(param_2);
  if (param_2 == (double *)0x0) {
    param_2 = (double *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
  }
  pdVar4 = param_2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar19 = 0x3ff0000000000000;
  if (pdVar4 == (double *)0x0) {
LAB_108fff010:
    dVar21 = 1.0;
    dVar20 = 1.0;
    dVar22 = 1.0;
  }
  else {
    pdVar5 = pdVar4;
    _CGColorGetNumberOfComponents();
    _CGColorGetComponents();
    if ((pdVar4 == (double *)0x0) || (pdVar5 < (double *)0x4)) {
      if (pdVar4 == (double *)0x0) goto LAB_108fff010;
      dVar21 = 1.0;
      dVar20 = 1.0;
      dVar22 = 1.0;
      if (pdVar5 < (double *)0x2) goto LAB_108fff01c;
      dVar21 = *pdVar4;
      lVar18 = 8;
      dVar20 = dVar21;
      dVar22 = dVar21;
    }
    else {
      lVar18 = 0x18;
      dVar21 = pdVar4[2];
      dVar20 = pdVar4[1];
      dVar22 = *pdVar4;
    }
    uVar19 = *(undefined8 *)((long)pdVar4 + lVar18);
  }
LAB_108fff01c:
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(dVar22,dVar20,dVar21,uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(puVar6);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf09c20(puVar6);
  _objc_release(puVar6);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release();
  FUN_109001238();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680((dVar20 * 0.587 + dVar22 * 0.299 + dVar21 * 0.114) * 0.5,uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    _objc_alloc_init();
    func_0x00010c1d4c20();
    puVar11 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc();
    func_0x00010c046ac0(0x4051800000000000,0x4057800000000000);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    puVar8 = puVar11;
    func_0x00010bfe91c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      puVar12 = puVar8;
      FUN_109001238();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(puVar12);
    }
    _objc_retain(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar9);
  }
  else {
    _objc_retain(puVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdc1000(pdVar13);
  dVar22 = *(double *)(puVar6 + 0x30);
  dVar20 = *(double *)(puVar6 + 0x38);
  uVar19 = *(undefined8 *)(puVar6 + 0x20);
  pdVar4 = *(double **)(puVar6 + 0x28);
  cVar1 = puVar6[0x40];
  cVar2 = puVar6[0x41];
  _objc_retain(uVar19);
  pdVar5 = pdVar4;
  _objc_retain();
  iVar3 = (int)pdVar5;
  func_0x00010b88a6d8();
  _objc_retain(uVar19);
  pdVar5 = pdVar4;
  _objc_retain(pdVar4);
  if (iVar3 == 0) {
    if (cVar2 != '\0') {
      dVar21 = (double)(float)(int)(dVar22 / 0.75);
      puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf199a0((dVar22 - dVar21) * 0.5,0,dVar21,dVar21,
                          PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      _CGContextAddPath(pdVar13,puVar8);
      _CGContextClip(pdVar13);
      _CGContextTranslateCTM(0,dVar20 * 0.15000000596046448,pdVar13);
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d18c0(0x40517a3d70a3d70a,0x4057400000000000);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef98c0(puVar7);
    func_0x00010bef7ba0(0x404b3c28f5c28f5c,0x4042d1eb851eb852,puVar7);
    func_0x00010bef98c0(0x404b466666666666,puVar7);
    func_0x00010bef7ba0(0x404cdae147ae147b,0x403ec51eb851eb85,0x404bb0a3d70a3d71,0x4042628f5c28f5c3,
                        0x404caccccccccccd,0x404188f5c28f5c29,puVar7);
    func_0x00010bef7ba0(0x404c67ae147ae148,0x40395eb851eb851f,0x404cf9999999999a,0x403bf0a3d70a3d71,
                        0x404cd47ae147ae14,0x403a3ae147ae147b,puVar7);
    func_0x00010bef98c0(0x404c666666666666,0x40395c28f5c28f5c,puVar7);
    func_0x00010bef7ba0(0x404bcccccccccccd,0x4038ca3d70a3d70a,0x404c3d70a3d70a3d,0x40390a3d70a3d70a,
                        0x404c07ae147ae148,0x4038d70a3d70a3d7,puVar7);
    func_0x00010bef98c0(0x404bce147ae147ae,puVar7);
    func_0x00010bef7ba0(0x404b5d70a3d70a3d,0x402b3851eb851eb8,0x404bf70a3d70a3d7,0x4034fd70a3d70a3d,
                        0x404bd1eb851eb852,0x40313d70a3d70a3d,puVar7);
    func_0x00010bef7ba0(0x4041800000000000,0,0x404a2a3d70a3d70a,0x4015666666666666,
                        0x40464b851eb851ec,0,puVar7);
    func_0x00010bef7ba0(0x402e8f5c28f5c28f,0x402b3d70a3d70a3d,0x403968f5c28f5c29,0,
                        0x4031ab851eb851ec,0x4015666666666666,puVar7);
    func_0x00010bef98c0(0x402e8f5c28f5c28f,puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef98c0(puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef98c0(0x402f1eb851eb851f,puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef98c0(puVar7);
    func_0x00010bef7ba0(puVar7);
    func_0x00010bef7ba0(0x3fb70a3d70a3d70a,0x4057400000000000,puVar7);
    func_0x00010bef98c0(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,puVar7);
    func_0x00010bef98c0(0x4051800000000000,0x4057728f5c28f5c3,puVar7);
    func_0x00010bef98c0(0x40517a3d70a3d70a,0x4057400000000000,puVar7);
    func_0x00010bf3dc80(puVar7);
    func_0x00010c19bbe0(uVar19);
    _objc_retainAutorelease(pdVar4);
    func_0x00010bdc0fe0();
    _CGColorGetAlpha();
    func_0x00010bfad680(0x3ff0000000000000,puVar7);
    _CGContextSaveGState(pdVar13);
    _CGContextSetAlpha(0x3fc999999999999a,pdVar13);
    if (cVar1 != '\0') {
      puVar8 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d18c0(0x40517a3d70a3d70a,0x4057400000000000);
      func_0x00010bef7ba0(0x404da3d70a3d70a4,0x405050a3d70a3d71,0x40513a3d70a3d70a,
                          0x4052e5c28f5c28f6,0x40503a3d70a3d70a,0x40517147ae147ae1,puVar8);
      func_0x00010bef7ba0(0x4044eb851eb851ec,0x404d59999999999a,0x404b39999999999a,
                          0x404eb1eb851eb852,0x4047e66666666666,0x404de147ae147ae1,puVar8);
      func_0x00010bef98c0(0x4044e00000000000,0x404cd9999999999a,puVar8);
      func_0x00010bef7ba0(0x404b39999999999a,0x4042d9999999999a,0x4048a00000000000,
                          0x404a8a3d70a3d70a,0x4049a7ae147ae148,0x40481d70a3d70a3d,puVar8);
      func_0x00010bef98c0(0x404b451eb851eb85,0x4042a7ae147ae148,puVar8);
      func_0x00010bef7ba0(0x404cd9999999999a,0x403ec7ae147ae148,0x404baf5c28f5c28f,
                          0x404263d70a3d70a4,0x404cab851eb851ec,0x40418a3d70a3d70a,puVar8);
      func_0x00010bef7ba0(0x404c666666666666,0x40396147ae147ae1,0x404cf851eb851eb8,
                          0x403bf33333333333,0x404cd33333333333,0x403a3d70a3d70a3d,puVar8);
      func_0x00010bef98c0(0x404c651eb851eb85,0x40395eb851eb851f,puVar8);
      func_0x00010bef7ba0(0x404bcb851eb851ec,0x4038cccccccccccd,0x404c3c28f5c28f5c,
                          0x40390ccccccccccd,0x404c066666666666,0x4038d9999999999a,puVar8);
      func_0x00010bef98c0(0x404bcccccccccccd,0x4038b5c28f5c28f6,puVar8);
      func_0x00010bef7ba0(0x404b5d70a3d70a3d,0x402b428f5c28f5c3,0x404bf5c28f5c28f6,
                          0x4035000000000000,0x404bd0a3d70a3d71,0x4031400000000000,puVar8);
      func_0x00010bef7ba0(0x4041800000000000,0,0x404a2a3d70a3d70a,0x4015666666666666,
                          0x40464b851eb851ec,0,puVar8);
      func_0x00010bef98c0(0x4041800000000000,0,puVar8);
      func_0x00010bef7ba0(0x402e8f5c28f5c28f,0x402b3d70a3d70a3d,0x403968f5c28f5c29,0,
                          0x4031ab851eb851ec,0x4015666666666666,puVar8);
      func_0x00010bef98c0(0x402e8f5c28f5c28f,0x402b333333333333,puVar8);
      func_0x00010bef7ba0(0x402cd1eb851eb852,0x4038ae147ae147ae,0x402cc28f5c28f5c3,
                          0x40313851eb851eb8,0x402c2e147ae147ae,0x4034f851eb851eb8,puVar8);
      func_0x00010bef98c0(0x402cd70a3d70a3d7,0x4038c51eb851eb85,puVar8);
      func_0x00010bef7ba0(0x402a70a3d70a3d71,0x4039570a3d70a3d7,0x402beb851eb851ec,
                          0x4038d1eb851eb852,0x402b147ae147ae14,0x4039051eb851eb85,puVar8);
      func_0x00010bef7ba0(0x40289eb851eb851f,0x403ec00000000000,0x4028b851eb851eb8,
                          0x403a35c28f5c28f6,0x402823d70a3d70a4,0x403bee147ae147ae,puVar8);
      func_0x00010bef7ba0(0x402ef0a3d70a3d71,0x4042a3d70a3d70a4,0x4029570a3d70a3d7,
                          0x4041866666666666,0x402d47ae147ae148,0x4042600000000000,puVar8);
      func_0x00010bef98c0(0x402f1eb851eb851f,0x4042d5c28f5c28f6,puVar8);
      func_0x00010bef7ba0(0x403c428f5c28f5c3,0x404cd5c28f5c28f6,0x4032b33333333333,
                          0x40481ae147ae147b,0x4034c28f5c28f5c3,0x404a87ae147ae148,puVar8);
      func_0x00010bef98c0(0x403c2b851eb851ec,0x404d55c28f5c28f6,puVar8);
      func_0x00010bef7ba0(0x402575c28f5c28f6,0x40504eb851eb851f,0x40362b851eb851ec,
                          0x404ddd70a3d70a3d,0x402f1eb851eb851f,0x404eae147ae147ae,puVar8);
      func_0x00010bef7ba0(0x3fb70a3d70a3d70a,0x4057400000000000,0x401451eb851eb852,
                          0x40516eb851eb851f,0x3ff1c28f5c28f5c3,0x4052e33333333333,puVar8);
      func_0x00010bef98c0(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,puVar8);
      func_0x00010bef98c0(0x4051800000000000,0x4057728f5c28f5c3,puVar8);
      func_0x00010bef98c0(0x40517a3d70a3d70a,0x4057400000000000,puVar8);
      func_0x00010bf3dc80(puVar8);
      func_0x00010c0d18c0(0x4041800000000000,0x4057100000000000,puVar8);
      func_0x00010bef98c0(0x3ffa3d70a3d70a3d,0x4057100000000000,puVar8);
      func_0x00010bef7ba0(0x402747ae147ae148,0x405098f5c28f5c29,0x400599999999999a,
                          0x4052ff5c28f5c28f,0x4019ae147ae147ae,0x4051a51eb851eb85,puVar8);
      func_0x00010bef7ba0(0x403d000000000000,0x404e000000000000,0x40306147ae147ae1,
                          0x404f4e147ae147ae,0x403711eb851eb852,0x404e866666666666,puVar8);
      func_0x00010bef98c0(0x403d91eb851eb852,0x404df33333333333,puVar8);
      func_0x00010bef98c0(0x403ddc28f5c28f5c,0x404c6b851eb851ec,puVar8);
      func_0x00010bef98c0(0x403d733333333333,0x404c4ccccccccccd,puVar8);
      func_0x00010bef7ba0(0x4031000000000000,0x4042a51eb851eb85,0x4036000000000000,
                          0x404a19999999999a,0x40342147ae147ae1,0x4047e51eb851eb85,puVar8);
      func_0x00010bef98c0(0x4030c28f5c28f5c3,0x4042251eb851eb85,puVar8);
      func_0x00010bef98c0(0x40306b851eb851ec,0x404210a3d70a3d71,puVar8);
      func_0x00010bef7ba0(0x402b947ae147ae14,0x403ea66666666666,0x4030547ae147ae14,
                          0x404210a3d70a3d71,0x402c51eb851eb852,0x4041866666666666,puVar8);
      func_0x00010bef7ba0(0x402c851eb851eb85,0x403a6b851eb851ec,0x402b0f5c28f5c28f,
                          0x403b87ae147ae148,0x402c19999999999a,0x403aa66666666666,puVar8);
      func_0x00010bef7ba0(0x402f6b851eb851ec,0x403a570a3d70a3d7,0x402db851eb851eb8,
                          0x4039c28f5c28f5c3,0x402eb33333333333,0x403a800000000000,puVar8);
      func_0x00010bef7ba0(0x402feb851eb851ec,0x4039570a3d70a3d7,0x403011eb851eb852,
                          0x403a2e147ae147ae,0x402feb851eb851ec,0x4039570a3d70a3d7,puVar8);
      func_0x00010bef98c0(0x402fe66666666666,0x40393ae147ae147b,puVar8);
      func_0x00010bef7ba0(0x4030bd70a3d70a3d,0x402bd70a3d70a3d7,0x402f19999999999a,
                          0x4035733333333333,0x402fa3d70a3d70a4,0x40319eb851eb851f,puVar8);
      func_0x00010bef7ba0(0x4041800000000000,0x3ff8000000000000,0x4032eb851eb851ec,
                          0x4019ae147ae147ae,0x403a19999999999a,0x3ff8000000000000,puVar8);
      func_0x00010bef7ba0(0x404aa3d70a3d70a4,0x402c000000000000,0x4045f33333333333,
                          0x3ff8000000000000,0x40498a3d70a3d70a,0x4019ae147ae147ae,puVar8);
      func_0x00010bef98c0(0x404a9d70a3d70a3d,0x402b9eb851eb851f,puVar8);
      func_0x00010bef7ba0(0x404b028f5c28f5c3,0x40391eb851eb851f,0x404b133333333333,
                          0x4031828f5c28f5c3,0x404b35c28f5c28f6,0x4035570a3d70a3d7,puVar8);
      func_0x00010bef7ba0(0x404b200000000000,0x403a59999999999a,0x404b000000000000,
                          0x403959999999999a,0x404af1eb851eb852,0x403a28f5c28f5c29,puVar8);
      func_0x00010bef7ba0(0x404bd9999999999a,0x403a6e147ae147ae,0x404b4e147ae147ae,
                          0x403a8a3d70a3d70a,0x404b8ccccccccccd,0x4039c51eb851eb85,puVar8);
      func_0x00010bef7ba0(0x404c15c28f5c28f6,0x403ea8f5c28f5c29,0x404bf5c28f5c28f6,
                          0x403aab851eb851ec,0x404c370a3d70a3d7,0x403b8a3d70a3d70a,puVar8);
      func_0x00010bef7ba0(0x404ac51eb851eb85,0x404211eb851eb852,0x404be66666666666,
                          0x404187ae147ae148,0x404ad1eb851eb852,0x40420ccccccccccd,puVar8);
      func_0x00010bef98c0(0x404a99999999999a,0x4042266666666666,puVar8);
      func_0x00010bef98c0(0x404a7ae147ae147b,0x4042a66666666666,puVar8);
      func_0x00010bef7ba0(0x404443d70a3d70a4,0x404c51eb851eb852,0x4048ea3d70a3d70a,
                          0x4047e66666666666,0x4047fae147ae147b,0x404a1ae147ae147b,puVar8);
      func_0x00010bef98c0(0x40440f5c28f5c28f,0x404c70a3d70a3d71,puVar8);
      func_0x00010bef98c0(0x4044347ae147ae14,0x404df851eb851eb8,puVar8);
      func_0x00010bef98c0(0x4044800000000000,0x404e000000000000,puVar8);
      func_0x00010bef7ba0(0x404d2a3d70a3d70a,0x4050966666666666,0x404775c28f5c28f6,
                          0x404e800000000000,0x404acccccccccccd,0x404f4a3d70a3d70a,puVar8);
      func_0x00010bef7ba0(0x4051151eb851eb85,0x40570d70a3d70a3d,0x404fc8f5c28f5c29,
                          0x4051a28f5c28f5c3,0x4050d51eb851eb85,0x4052fd70a3d70a3d,puVar8);
      func_0x00010bef98c0(0x4041800000000000,0x4057100000000000,puVar8);
      func_0x00010bf3dc80(puVar8);
      func_0x00010c19bbe0(pdVar4);
      func_0x00010bfad4a0(puVar8);
      _objc_release(puVar8);
    }
    _CGContextRestoreGState(pdVar13);
    _objc_release(puVar7);
  }
  else {
    if (cVar2 != '\0') {
      dVar21 = (double)(float)(int)(dVar22 / 0.75);
      _CGContextAddEllipseInRect((dVar22 - dVar21) * 0.5,0,dVar21,dVar21,pdVar13);
      _CGContextClip(pdVar13);
      _CGContextBeginPath(pdVar13);
      pdVar5 = pdVar13;
      _CGContextTranslateCTM(0,dVar20 * 0.15000000596046448,pdVar13);
    }
    _CGPathCreateMutable();
    dVar20 = 69.91;
    _CGPathMoveToPoint(0x40517a3d70a3d70a,0x4057400000000000);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddLineToPoint(pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddLineToPoint(0x404b466666666666,pdVar5,0);
    _CGPathAddCurveToPoint
              (0x404bb0a3d70a3d71,0x4042628f5c28f5c3,0x404caccccccccccd,0x404188f5c28f5c29,
               0x404cdae147ae147b,0x403ec51eb851eb85,pdVar5,0);
    _CGPathAddCurveToPoint
              (0x404cf9999999999a,0x403bf0a3d70a3d71,0x404cd47ae147ae14,0x403a3ae147ae147b,
               0x404c67ae147ae148,pdVar5,0);
    _CGPathAddLineToPoint(0x404c666666666666,0x40395c28f5c28f5c,pdVar5,0);
    _CGPathAddCurveToPoint
              (0x404c3d70a3d70a3d,0x40390a3d70a3d70a,0x404c07ae147ae148,0x4038d70a3d70a3d7,
               0x404bcccccccccccd,0x4038ca3d70a3d70a,pdVar5,0);
    _CGPathAddLineToPoint(0x404bce147ae147ae,pdVar5,0);
    _CGPathAddCurveToPoint
              (0x404bf70a3d70a3d7,0x4034fd70a3d70a3d,0x404bd1eb851eb852,0x40313d70a3d70a3d,
               0x404b5d70a3d70a3d,0x402b3851eb851eb8,pdVar5,0);
    _CGPathAddCurveToPoint
              (0x404a2a3d70a3d70a,0x4015666666666666,0x40464b851eb851ec,0,0x4041800000000000,0,
               pdVar5,0);
    _CGPathAddCurveToPoint
              (0x403968f5c28f5c29,0,0x4031ab851eb851ec,0x4015666666666666,0x402e8f5c28f5c28f,pdVar5,
               0);
    _CGPathAddLineToPoint(0x402e8f5c28f5c28f,pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddLineToPoint(pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddLineToPoint(0x402f1eb851eb851f,pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddLineToPoint(pdVar5,0);
    _CGPathAddCurveToPoint(0x40362b851eb851ec,0x404ddd70a3d70a3d,0x402f1eb851eb851f,pdVar5,0);
    _CGPathAddCurveToPoint(pdVar5,0);
    _CGPathAddLineToPoint(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,pdVar5,0);
    _CGPathAddLineToPoint(0x4051800000000000,0x4057728f5c28f5c3,pdVar5,0);
    _CGPathAddLineToPoint(0x40517a3d70a3d70a,0x4057400000000000,pdVar5,0);
    _CGPathCloseSubpath(pdVar5);
    pdVar14 = pdVar5;
    _CGPathCreateCopy();
    _CGPathRelease(pdVar5);
    _CGContextAddPath(pdVar13,pdVar14);
    _CGPathRelease(pdVar14);
    uVar15 = uVar19;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(pdVar13,uVar15);
    _objc_retainAutorelease(pdVar4);
    func_0x00010bdc0fe0();
    _CGColorGetAlpha();
    uVar16 = 0x11;
    if (dVar20 != 1.0) {
      uVar16 = 0;
    }
    _CGContextSetBlendMode(pdVar13,uVar16);
    _CGContextSetAlpha(0x3ff0000000000000,pdVar13);
    _CGContextFillPath(pdVar13);
    _CGContextSaveGState(pdVar13);
    _CGContextSetAlpha(0x3fc999999999999a,pdVar13);
    pdVar5 = pdVar13;
    _CGContextSetBlendMode(pdVar13,0);
    if (cVar1 != '\0') {
      _CGPathCreateMutable();
      _CGPathMoveToPoint(0x40517a3d70a3d70a,0x4057400000000000);
      _CGPathAddCurveToPoint
                (0x40513a3d70a3d70a,0x4052e5c28f5c28f6,0x40503a3d70a3d70a,0x40517147ae147ae1,
                 0x404da3d70a3d70a4,0x405050a3d70a3d71,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404b39999999999a,0x404eb1eb851eb852,0x4047e66666666666,0x404de147ae147ae1,
                 0x4044eb851eb851ec,0x404d59999999999a,pdVar5,0);
      _CGPathAddLineToPoint(0x4044e00000000000,0x404cd9999999999a,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4048a00000000000,0x404a8a3d70a3d70a,0x4049a7ae147ae148,0x40481d70a3d70a3d,
                 0x404b39999999999a,0x4042d9999999999a,pdVar5,0);
      _CGPathAddLineToPoint(0x404b451eb851eb85,0x4042a7ae147ae148,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404baf5c28f5c28f,0x404263d70a3d70a4,0x404cab851eb851ec,0x40418a3d70a3d70a,
                 0x404cd9999999999a,0x403ec7ae147ae148,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404cf851eb851eb8,0x403bf33333333333,0x404cd33333333333,0x403a3d70a3d70a3d,
                 0x404c666666666666,0x40396147ae147ae1,pdVar5,0);
      _CGPathAddLineToPoint(0x404c651eb851eb85,0x40395eb851eb851f,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404c3c28f5c28f5c,0x40390ccccccccccd,0x404c066666666666,0x4038d9999999999a,
                 0x404bcb851eb851ec,0x4038cccccccccccd,pdVar5,0);
      _CGPathAddLineToPoint(0x404bcccccccccccd,0x4038b5c28f5c28f6,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404bf5c28f5c28f6,0x4035000000000000,0x404bd0a3d70a3d71,0x4031400000000000,
                 0x404b5d70a3d70a3d,0x402b428f5c28f5c3,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404a2a3d70a3d70a,0x4015666666666666,0x40464b851eb851ec,0,0x4041800000000000,0,
                 pdVar5,0);
      _CGPathAddLineToPoint(0x4041800000000000,0,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x403968f5c28f5c29,0,0x4031ab851eb851ec,0x4015666666666666,0x402e8f5c28f5c28f,
                 0x402b3d70a3d70a3d,pdVar5,0);
      _CGPathAddLineToPoint(0x402e8f5c28f5c28f,0x402b333333333333,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x402cc28f5c28f5c3,0x40313851eb851eb8,0x402c2e147ae147ae,0x4034f851eb851eb8,
                 0x402cd1eb851eb852,0x4038ae147ae147ae,pdVar5,0);
      _CGPathAddLineToPoint(0x402cd70a3d70a3d7,0x4038c51eb851eb85,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x402beb851eb851ec,0x4038d1eb851eb852,0x402b147ae147ae14,0x4039051eb851eb85,
                 0x402a70a3d70a3d71,0x4039570a3d70a3d7,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4028b851eb851eb8,0x403a35c28f5c28f6,0x402823d70a3d70a4,0x403bee147ae147ae,
                 0x40289eb851eb851f,0x403ec00000000000,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4029570a3d70a3d7,0x4041866666666666,0x402d47ae147ae148,0x4042600000000000,
                 0x402ef0a3d70a3d71,0x4042a3d70a3d70a4,pdVar5,0);
      _CGPathAddLineToPoint(0x402f1eb851eb851f,0x4042d5c28f5c28f6,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4032b33333333333,0x40481ae147ae147b,0x4034c28f5c28f5c3,0x404a87ae147ae148,
                 0x403c428f5c28f5c3,0x404cd5c28f5c28f6,pdVar5,0);
      _CGPathAddLineToPoint(0x403c2b851eb851ec,0x404d55c28f5c28f6,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x40362b851eb851ec,0x404ddd70a3d70a3d,0x402f1eb851eb851f,0x404eae147ae147ae,
                 0x402575c28f5c28f6,0x40504eb851eb851f,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x401451eb851eb852,0x40516eb851eb851f,0x3ff1c28f5c28f5c3,0x4052e33333333333,
                 0x3fb70a3d70a3d70a,0x4057400000000000,pdVar5,0);
      _CGPathAddLineToPoint(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,pdVar5,0);
      _CGPathAddLineToPoint(0x4051800000000000,0x4057728f5c28f5c3,pdVar5,0);
      _CGPathAddLineToPoint(0x40517a3d70a3d70a,0x4057400000000000,pdVar5,0);
      _CGPathCloseSubpath(pdVar5);
      _CGPathMoveToPoint(0x4041800000000000,0x4057100000000000,pdVar5,0);
      _CGPathAddLineToPoint(0x3ffa3d70a3d70a3d,0x4057100000000000,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x400599999999999a,0x4052ff5c28f5c28f,0x4019ae147ae147ae,0x4051a51eb851eb85,
                 0x402747ae147ae148,0x405098f5c28f5c29,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x40306147ae147ae1,0x404f4e147ae147ae,0x403711eb851eb852,0x404e866666666666,
                 0x403d000000000000,0x404e000000000000,pdVar5,0);
      _CGPathAddLineToPoint(0x403d91eb851eb852,0x404df33333333333,pdVar5,0);
      _CGPathAddLineToPoint(0x403ddc28f5c28f5c,0x404c6b851eb851ec,pdVar5,0);
      _CGPathAddLineToPoint(0x403d733333333333,0x404c4ccccccccccd,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4036000000000000,0x404a19999999999a,0x40342147ae147ae1,0x4047e51eb851eb85,
                 0x4031000000000000,0x4042a51eb851eb85,pdVar5,0);
      _CGPathAddLineToPoint(0x4030c28f5c28f5c3,0x4042251eb851eb85,pdVar5,0);
      _CGPathAddLineToPoint(0x40306b851eb851ec,0x404210a3d70a3d71,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4030547ae147ae14,0x404210a3d70a3d71,0x402c51eb851eb852,0x4041866666666666,
                 0x402b947ae147ae14,0x403ea66666666666,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x402b0f5c28f5c28f,0x403b87ae147ae148,0x402c19999999999a,0x403aa66666666666,
                 0x402c851eb851eb85,0x403a6b851eb851ec,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x402db851eb851eb8,0x4039c28f5c28f5c3,0x402eb33333333333,0x403a800000000000,
                 0x402f6b851eb851ec,0x403a570a3d70a3d7,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x403011eb851eb852,0x403a2e147ae147ae,0x402feb851eb851ec,0x4039570a3d70a3d7,
                 0x402feb851eb851ec,0x4039570a3d70a3d7,pdVar5,0);
      _CGPathAddLineToPoint(0x402fe66666666666,0x40393ae147ae147b,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x402f19999999999a,0x4035733333333333,0x402fa3d70a3d70a4,0x40319eb851eb851f,
                 0x4030bd70a3d70a3d,0x402bd70a3d70a3d7,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4032eb851eb851ec,0x4019ae147ae147ae,0x403a19999999999a,0x3ff8000000000000,
                 0x4041800000000000,0x3ff8000000000000,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4045f33333333333,0x3ff8000000000000,0x40498a3d70a3d70a,0x4019ae147ae147ae,
                 0x404aa3d70a3d70a4,0x402c000000000000,pdVar5,0);
      _CGPathAddLineToPoint(0x404a9d70a3d70a3d,0x402b9eb851eb851f,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404b133333333333,0x4031828f5c28f5c3,0x404b35c28f5c28f6,0x4035570a3d70a3d7,
                 0x404b028f5c28f5c3,0x40391eb851eb851f,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404b000000000000,0x403959999999999a,0x404af1eb851eb852,0x403a28f5c28f5c29,
                 0x404b200000000000,0x403a59999999999a,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404b4e147ae147ae,0x403a8a3d70a3d70a,0x404b8ccccccccccd,0x4039c51eb851eb85,
                 0x404bd9999999999a,0x403a6e147ae147ae,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404bf5c28f5c28f6,0x403aab851eb851ec,0x404c370a3d70a3d7,0x403b8a3d70a3d70a,
                 0x404c15c28f5c28f6,0x403ea8f5c28f5c29,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404be66666666666,0x404187ae147ae148,0x404ad1eb851eb852,0x40420ccccccccccd,
                 0x404ac51eb851eb85,0x404211eb851eb852,pdVar5,0);
      _CGPathAddLineToPoint(0x404a99999999999a,0x4042266666666666,pdVar5,0);
      _CGPathAddLineToPoint(0x404a7ae147ae147b,0x4042a66666666666,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x4048ea3d70a3d70a,0x4047e66666666666,0x4047fae147ae147b,0x404a1ae147ae147b,
                 0x404443d70a3d70a4,0x404c51eb851eb852,pdVar5,0);
      _CGPathAddLineToPoint(0x40440f5c28f5c28f,0x404c70a3d70a3d71,pdVar5,0);
      _CGPathAddLineToPoint(0x4044347ae147ae14,0x404df851eb851eb8,pdVar5,0);
      _CGPathAddLineToPoint(0x4044800000000000,0x404e000000000000,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404775c28f5c28f6,0x404e800000000000,0x404acccccccccccd,0x404f4a3d70a3d70a,
                 0x404d2a3d70a3d70a,0x4050966666666666,pdVar5,0);
      _CGPathAddCurveToPoint
                (0x404fc8f5c28f5c29,0x4051a28f5c28f5c3,0x4050d51eb851eb85,0x4052fd70a3d70a3d,
                 0x4051151eb851eb85,0x40570d70a3d70a3d,pdVar5,0);
      _CGPathAddLineToPoint(0x4041800000000000,0x4057100000000000,pdVar5,0);
      _CGPathCloseSubpath(pdVar5);
      pdVar14 = pdVar5;
      _CGPathCreateCopy();
      _CGPathRelease(pdVar5);
      _CGContextAddPath(pdVar13,pdVar14);
      _CGPathRelease(pdVar14);
      pdVar5 = pdVar4;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGContextSetFillColorWithColor(pdVar13,pdVar5);
      _CGContextFillPath(pdVar13);
    }
    _CGContextRestoreGState(pdVar13);
  }
  _objc_release(pdVar4);
  _objc_release(uVar19);
  _objc_release(pdVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar19);
  return;
}



/* Entry: 108fff2dc; end: 109001237;  */

void FUN_108fff2dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar6;
  
  func_0x00010bdc1000(param_2);
  dVar13 = *(double *)(param_1 + 0x30);
  dVar12 = *(double *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  cVar3 = *(char *)(param_1 + 0x40);
  cVar4 = *(char *)(param_1 + 0x41);
  _objc_retain(uVar1);
  uVar6 = uVar2;
  _objc_retain();
  iVar5 = (int)uVar6;
  func_0x00010b88a6d8();
  _objc_retain(uVar1);
  uVar6 = uVar2;
  _objc_retain(uVar2);
  if (iVar5 == 0) {
    if (cVar4 != '\0') {
      dVar11 = (double)(float)(int)(dVar13 / 0.75);
      puVar8 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf199a0((dVar13 - dVar11) * 0.5,0,dVar11,dVar11,
                          PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      _CGContextAddPath(param_2,puVar9);
      _CGContextClip(param_2);
      _CGContextTranslateCTM(0,dVar12 * 0.15000000596046448,param_2);
      _objc_release(puVar8);
    }
    puVar8 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d18c0(0x40517a3d70a3d70a,0x4057400000000000);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef98c0(puVar8);
    func_0x00010bef7ba0(0x404b3c28f5c28f5c,0x4042d1eb851eb852,puVar8);
    func_0x00010bef98c0(0x404b466666666666,puVar8);
    func_0x00010bef7ba0(0x404cdae147ae147b,0x403ec51eb851eb85,0x404bb0a3d70a3d71,0x4042628f5c28f5c3,
                        0x404caccccccccccd,0x404188f5c28f5c29,puVar8);
    func_0x00010bef7ba0(0x404c67ae147ae148,0x40395eb851eb851f,0x404cf9999999999a,0x403bf0a3d70a3d71,
                        0x404cd47ae147ae14,0x403a3ae147ae147b,puVar8);
    func_0x00010bef98c0(0x404c666666666666,0x40395c28f5c28f5c,puVar8);
    func_0x00010bef7ba0(0x404bcccccccccccd,0x4038ca3d70a3d70a,0x404c3d70a3d70a3d,0x40390a3d70a3d70a,
                        0x404c07ae147ae148,0x4038d70a3d70a3d7,puVar8);
    func_0x00010bef98c0(0x404bce147ae147ae,puVar8);
    func_0x00010bef7ba0(0x404b5d70a3d70a3d,0x402b3851eb851eb8,0x404bf70a3d70a3d7,0x4034fd70a3d70a3d,
                        0x404bd1eb851eb852,0x40313d70a3d70a3d,puVar8);
    func_0x00010bef7ba0(0x4041800000000000,0,0x404a2a3d70a3d70a,0x4015666666666666,
                        0x40464b851eb851ec,0,puVar8);
    func_0x00010bef7ba0(0x402e8f5c28f5c28f,0x402b3d70a3d70a3d,0x403968f5c28f5c29,0,
                        0x4031ab851eb851ec,0x4015666666666666,puVar8);
    func_0x00010bef98c0(0x402e8f5c28f5c28f,puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef98c0(puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef98c0(0x402f1eb851eb851f,puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef98c0(puVar8);
    func_0x00010bef7ba0(puVar8);
    func_0x00010bef7ba0(0x3fb70a3d70a3d70a,0x4057400000000000,puVar8);
    func_0x00010bef98c0(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,puVar8);
    func_0x00010bef98c0(0x4051800000000000,0x4057728f5c28f5c3,puVar8);
    func_0x00010bef98c0(0x40517a3d70a3d70a,0x4057400000000000,puVar8);
    func_0x00010bf3dc80(puVar8);
    func_0x00010c19bbe0(uVar1);
    _objc_retainAutorelease(uVar2);
    func_0x00010bdc0fe0();
    _CGColorGetAlpha();
    func_0x00010bfad680(0x3ff0000000000000,puVar8);
    _CGContextSaveGState(param_2);
    _CGContextSetAlpha(0x3fc999999999999a,param_2);
    if (cVar3 != '\0') {
      puVar9 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d18c0(0x40517a3d70a3d70a,0x4057400000000000);
      func_0x00010bef7ba0(0x404da3d70a3d70a4,0x405050a3d70a3d71,0x40513a3d70a3d70a,
                          0x4052e5c28f5c28f6,0x40503a3d70a3d70a,0x40517147ae147ae1,puVar9);
      func_0x00010bef7ba0(0x4044eb851eb851ec,0x404d59999999999a,0x404b39999999999a,
                          0x404eb1eb851eb852,0x4047e66666666666,0x404de147ae147ae1,puVar9);
      func_0x00010bef98c0(0x4044e00000000000,0x404cd9999999999a,puVar9);
      func_0x00010bef7ba0(0x404b39999999999a,0x4042d9999999999a,0x4048a00000000000,
                          0x404a8a3d70a3d70a,0x4049a7ae147ae148,0x40481d70a3d70a3d,puVar9);
      func_0x00010bef98c0(0x404b451eb851eb85,0x4042a7ae147ae148,puVar9);
      func_0x00010bef7ba0(0x404cd9999999999a,0x403ec7ae147ae148,0x404baf5c28f5c28f,
                          0x404263d70a3d70a4,0x404cab851eb851ec,0x40418a3d70a3d70a,puVar9);
      func_0x00010bef7ba0(0x404c666666666666,0x40396147ae147ae1,0x404cf851eb851eb8,
                          0x403bf33333333333,0x404cd33333333333,0x403a3d70a3d70a3d,puVar9);
      func_0x00010bef98c0(0x404c651eb851eb85,0x40395eb851eb851f,puVar9);
      func_0x00010bef7ba0(0x404bcb851eb851ec,0x4038cccccccccccd,0x404c3c28f5c28f5c,
                          0x40390ccccccccccd,0x404c066666666666,0x4038d9999999999a,puVar9);
      func_0x00010bef98c0(0x404bcccccccccccd,0x4038b5c28f5c28f6,puVar9);
      func_0x00010bef7ba0(0x404b5d70a3d70a3d,0x402b428f5c28f5c3,0x404bf5c28f5c28f6,
                          0x4035000000000000,0x404bd0a3d70a3d71,0x4031400000000000,puVar9);
      func_0x00010bef7ba0(0x4041800000000000,0,0x404a2a3d70a3d70a,0x4015666666666666,
                          0x40464b851eb851ec,0,puVar9);
      func_0x00010bef98c0(0x4041800000000000,0,puVar9);
      func_0x00010bef7ba0(0x402e8f5c28f5c28f,0x402b3d70a3d70a3d,0x403968f5c28f5c29,0,
                          0x4031ab851eb851ec,0x4015666666666666,puVar9);
      func_0x00010bef98c0(0x402e8f5c28f5c28f,0x402b333333333333,puVar9);
      func_0x00010bef7ba0(0x402cd1eb851eb852,0x4038ae147ae147ae,0x402cc28f5c28f5c3,
                          0x40313851eb851eb8,0x402c2e147ae147ae,0x4034f851eb851eb8,puVar9);
      func_0x00010bef98c0(0x402cd70a3d70a3d7,0x4038c51eb851eb85,puVar9);
      func_0x00010bef7ba0(0x402a70a3d70a3d71,0x4039570a3d70a3d7,0x402beb851eb851ec,
                          0x4038d1eb851eb852,0x402b147ae147ae14,0x4039051eb851eb85,puVar9);
      func_0x00010bef7ba0(0x40289eb851eb851f,0x403ec00000000000,0x4028b851eb851eb8,
                          0x403a35c28f5c28f6,0x402823d70a3d70a4,0x403bee147ae147ae,puVar9);
      func_0x00010bef7ba0(0x402ef0a3d70a3d71,0x4042a3d70a3d70a4,0x4029570a3d70a3d7,
                          0x4041866666666666,0x402d47ae147ae148,0x4042600000000000,puVar9);
      func_0x00010bef98c0(0x402f1eb851eb851f,0x4042d5c28f5c28f6,puVar9);
      func_0x00010bef7ba0(0x403c428f5c28f5c3,0x404cd5c28f5c28f6,0x4032b33333333333,
                          0x40481ae147ae147b,0x4034c28f5c28f5c3,0x404a87ae147ae148,puVar9);
      func_0x00010bef98c0(0x403c2b851eb851ec,0x404d55c28f5c28f6,puVar9);
      func_0x00010bef7ba0(0x402575c28f5c28f6,0x40504eb851eb851f,0x40362b851eb851ec,
                          0x404ddd70a3d70a3d,0x402f1eb851eb851f,0x404eae147ae147ae,puVar9);
      func_0x00010bef7ba0(0x3fb70a3d70a3d70a,0x4057400000000000,0x401451eb851eb852,
                          0x40516eb851eb851f,0x3ff1c28f5c28f5c3,0x4052e33333333333,puVar9);
      func_0x00010bef98c0(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,puVar9);
      func_0x00010bef98c0(0x4051800000000000,0x4057728f5c28f5c3,puVar9);
      func_0x00010bef98c0(0x40517a3d70a3d70a,0x4057400000000000,puVar9);
      func_0x00010bf3dc80(puVar9);
      func_0x00010c0d18c0(0x4041800000000000,0x4057100000000000,puVar9);
      func_0x00010bef98c0(0x3ffa3d70a3d70a3d,0x4057100000000000,puVar9);
      func_0x00010bef7ba0(0x402747ae147ae148,0x405098f5c28f5c29,0x400599999999999a,
                          0x4052ff5c28f5c28f,0x4019ae147ae147ae,0x4051a51eb851eb85,puVar9);
      func_0x00010bef7ba0(0x403d000000000000,0x404e000000000000,0x40306147ae147ae1,
                          0x404f4e147ae147ae,0x403711eb851eb852,0x404e866666666666,puVar9);
      func_0x00010bef98c0(0x403d91eb851eb852,0x404df33333333333,puVar9);
      func_0x00010bef98c0(0x403ddc28f5c28f5c,0x404c6b851eb851ec,puVar9);
      func_0x00010bef98c0(0x403d733333333333,0x404c4ccccccccccd,puVar9);
      func_0x00010bef7ba0(0x4031000000000000,0x4042a51eb851eb85,0x4036000000000000,
                          0x404a19999999999a,0x40342147ae147ae1,0x4047e51eb851eb85,puVar9);
      func_0x00010bef98c0(0x4030c28f5c28f5c3,0x4042251eb851eb85,puVar9);
      func_0x00010bef98c0(0x40306b851eb851ec,0x404210a3d70a3d71,puVar9);
      func_0x00010bef7ba0(0x402b947ae147ae14,0x403ea66666666666,0x4030547ae147ae14,
                          0x404210a3d70a3d71,0x402c51eb851eb852,0x4041866666666666,puVar9);
      func_0x00010bef7ba0(0x402c851eb851eb85,0x403a6b851eb851ec,0x402b0f5c28f5c28f,
                          0x403b87ae147ae148,0x402c19999999999a,0x403aa66666666666,puVar9);
      func_0x00010bef7ba0(0x402f6b851eb851ec,0x403a570a3d70a3d7,0x402db851eb851eb8,
                          0x4039c28f5c28f5c3,0x402eb33333333333,0x403a800000000000,puVar9);
      func_0x00010bef7ba0(0x402feb851eb851ec,0x4039570a3d70a3d7,0x403011eb851eb852,
                          0x403a2e147ae147ae,0x402feb851eb851ec,0x4039570a3d70a3d7,puVar9);
      func_0x00010bef98c0(0x402fe66666666666,0x40393ae147ae147b,puVar9);
      func_0x00010bef7ba0(0x4030bd70a3d70a3d,0x402bd70a3d70a3d7,0x402f19999999999a,
                          0x4035733333333333,0x402fa3d70a3d70a4,0x40319eb851eb851f,puVar9);
      func_0x00010bef7ba0(0x4041800000000000,0x3ff8000000000000,0x4032eb851eb851ec,
                          0x4019ae147ae147ae,0x403a19999999999a,0x3ff8000000000000,puVar9);
      func_0x00010bef7ba0(0x404aa3d70a3d70a4,0x402c000000000000,0x4045f33333333333,
                          0x3ff8000000000000,0x40498a3d70a3d70a,0x4019ae147ae147ae,puVar9);
      func_0x00010bef98c0(0x404a9d70a3d70a3d,0x402b9eb851eb851f,puVar9);
      func_0x00010bef7ba0(0x404b028f5c28f5c3,0x40391eb851eb851f,0x404b133333333333,
                          0x4031828f5c28f5c3,0x404b35c28f5c28f6,0x4035570a3d70a3d7,puVar9);
      func_0x00010bef7ba0(0x404b200000000000,0x403a59999999999a,0x404b000000000000,
                          0x403959999999999a,0x404af1eb851eb852,0x403a28f5c28f5c29,puVar9);
      func_0x00010bef7ba0(0x404bd9999999999a,0x403a6e147ae147ae,0x404b4e147ae147ae,
                          0x403a8a3d70a3d70a,0x404b8ccccccccccd,0x4039c51eb851eb85,puVar9);
      func_0x00010bef7ba0(0x404c15c28f5c28f6,0x403ea8f5c28f5c29,0x404bf5c28f5c28f6,
                          0x403aab851eb851ec,0x404c370a3d70a3d7,0x403b8a3d70a3d70a,puVar9);
      func_0x00010bef7ba0(0x404ac51eb851eb85,0x404211eb851eb852,0x404be66666666666,
                          0x404187ae147ae148,0x404ad1eb851eb852,0x40420ccccccccccd,puVar9);
      func_0x00010bef98c0(0x404a99999999999a,0x4042266666666666,puVar9);
      func_0x00010bef98c0(0x404a7ae147ae147b,0x4042a66666666666,puVar9);
      func_0x00010bef7ba0(0x404443d70a3d70a4,0x404c51eb851eb852,0x4048ea3d70a3d70a,
                          0x4047e66666666666,0x4047fae147ae147b,0x404a1ae147ae147b,puVar9);
      func_0x00010bef98c0(0x40440f5c28f5c28f,0x404c70a3d70a3d71,puVar9);
      func_0x00010bef98c0(0x4044347ae147ae14,0x404df851eb851eb8,puVar9);
      func_0x00010bef98c0(0x4044800000000000,0x404e000000000000,puVar9);
      func_0x00010bef7ba0(0x404d2a3d70a3d70a,0x4050966666666666,0x404775c28f5c28f6,
                          0x404e800000000000,0x404acccccccccccd,0x404f4a3d70a3d70a,puVar9);
      func_0x00010bef7ba0(0x4051151eb851eb85,0x40570d70a3d70a3d,0x404fc8f5c28f5c29,
                          0x4051a28f5c28f5c3,0x4050d51eb851eb85,0x4052fd70a3d70a3d,puVar9);
      func_0x00010bef98c0(0x4041800000000000,0x4057100000000000,puVar9);
      func_0x00010bf3dc80(puVar9);
      func_0x00010c19bbe0(uVar2);
      func_0x00010bfad4a0(puVar9);
      _objc_release(puVar9);
    }
    _CGContextRestoreGState(param_2);
    _objc_release(puVar8);
  }
  else {
    if (cVar4 != '\0') {
      dVar11 = (double)(float)(int)(dVar13 / 0.75);
      _CGContextAddEllipseInRect((dVar13 - dVar11) * 0.5,0,dVar11,dVar11,param_2);
      _CGContextClip(param_2);
      _CGContextBeginPath(param_2);
      uVar6 = param_2;
      _CGContextTranslateCTM(0,dVar12 * 0.15000000596046448,param_2);
    }
    _CGPathCreateMutable();
    dVar12 = 69.91;
    _CGPathMoveToPoint(0x40517a3d70a3d70a,0x4057400000000000);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddLineToPoint(uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddLineToPoint(0x404b466666666666,uVar6,0);
    _CGPathAddCurveToPoint
              (0x404bb0a3d70a3d71,0x4042628f5c28f5c3,0x404caccccccccccd,0x404188f5c28f5c29,
               0x404cdae147ae147b,0x403ec51eb851eb85,uVar6,0);
    _CGPathAddCurveToPoint
              (0x404cf9999999999a,0x403bf0a3d70a3d71,0x404cd47ae147ae14,0x403a3ae147ae147b,
               0x404c67ae147ae148,uVar6,0);
    _CGPathAddLineToPoint(0x404c666666666666,0x40395c28f5c28f5c,uVar6,0);
    _CGPathAddCurveToPoint
              (0x404c3d70a3d70a3d,0x40390a3d70a3d70a,0x404c07ae147ae148,0x4038d70a3d70a3d7,
               0x404bcccccccccccd,0x4038ca3d70a3d70a,uVar6,0);
    _CGPathAddLineToPoint(0x404bce147ae147ae,uVar6,0);
    _CGPathAddCurveToPoint
              (0x404bf70a3d70a3d7,0x4034fd70a3d70a3d,0x404bd1eb851eb852,0x40313d70a3d70a3d,
               0x404b5d70a3d70a3d,0x402b3851eb851eb8,uVar6,0);
    _CGPathAddCurveToPoint
              (0x404a2a3d70a3d70a,0x4015666666666666,0x40464b851eb851ec,0,0x4041800000000000,0,uVar6
               ,0);
    _CGPathAddCurveToPoint
              (0x403968f5c28f5c29,0,0x4031ab851eb851ec,0x4015666666666666,0x402e8f5c28f5c28f,uVar6,0
              );
    _CGPathAddLineToPoint(0x402e8f5c28f5c28f,uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddLineToPoint(uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddLineToPoint(0x402f1eb851eb851f,uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddLineToPoint(uVar6,0);
    _CGPathAddCurveToPoint(0x40362b851eb851ec,0x404ddd70a3d70a3d,0x402f1eb851eb851f,uVar6,0);
    _CGPathAddCurveToPoint(uVar6,0);
    _CGPathAddLineToPoint(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,uVar6,0);
    _CGPathAddLineToPoint(0x4051800000000000,0x4057728f5c28f5c3,uVar6,0);
    _CGPathAddLineToPoint(0x40517a3d70a3d70a,0x4057400000000000,uVar6,0);
    _CGPathCloseSubpath(uVar6);
    uVar7 = uVar6;
    _CGPathCreateCopy(uVar6);
    _CGPathRelease(uVar6);
    _CGContextAddPath(param_2,uVar7);
    _CGPathRelease(uVar7);
    uVar6 = uVar1;
    _objc_retainAutorelease(uVar1);
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(param_2,uVar6);
    _objc_retainAutorelease(uVar2);
    func_0x00010bdc0fe0();
    _CGColorGetAlpha();
    uVar10 = 0x11;
    if (dVar12 != 1.0) {
      uVar10 = 0;
    }
    _CGContextSetBlendMode(param_2,uVar10);
    _CGContextSetAlpha(0x3ff0000000000000,param_2);
    _CGContextFillPath(param_2);
    _CGContextSaveGState(param_2);
    _CGContextSetAlpha(0x3fc999999999999a,param_2);
    uVar6 = param_2;
    _CGContextSetBlendMode(param_2,0);
    if (cVar3 != '\0') {
      _CGPathCreateMutable();
      _CGPathMoveToPoint(0x40517a3d70a3d70a,0x4057400000000000);
      _CGPathAddCurveToPoint
                (0x40513a3d70a3d70a,0x4052e5c28f5c28f6,0x40503a3d70a3d70a,0x40517147ae147ae1,
                 0x404da3d70a3d70a4,0x405050a3d70a3d71,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404b39999999999a,0x404eb1eb851eb852,0x4047e66666666666,0x404de147ae147ae1,
                 0x4044eb851eb851ec,0x404d59999999999a,uVar6,0);
      _CGPathAddLineToPoint(0x4044e00000000000,0x404cd9999999999a,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4048a00000000000,0x404a8a3d70a3d70a,0x4049a7ae147ae148,0x40481d70a3d70a3d,
                 0x404b39999999999a,0x4042d9999999999a,uVar6,0);
      _CGPathAddLineToPoint(0x404b451eb851eb85,0x4042a7ae147ae148,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404baf5c28f5c28f,0x404263d70a3d70a4,0x404cab851eb851ec,0x40418a3d70a3d70a,
                 0x404cd9999999999a,0x403ec7ae147ae148,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404cf851eb851eb8,0x403bf33333333333,0x404cd33333333333,0x403a3d70a3d70a3d,
                 0x404c666666666666,0x40396147ae147ae1,uVar6,0);
      _CGPathAddLineToPoint(0x404c651eb851eb85,0x40395eb851eb851f,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404c3c28f5c28f5c,0x40390ccccccccccd,0x404c066666666666,0x4038d9999999999a,
                 0x404bcb851eb851ec,0x4038cccccccccccd,uVar6,0);
      _CGPathAddLineToPoint(0x404bcccccccccccd,0x4038b5c28f5c28f6,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404bf5c28f5c28f6,0x4035000000000000,0x404bd0a3d70a3d71,0x4031400000000000,
                 0x404b5d70a3d70a3d,0x402b428f5c28f5c3,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404a2a3d70a3d70a,0x4015666666666666,0x40464b851eb851ec,0,0x4041800000000000,0,
                 uVar6,0);
      _CGPathAddLineToPoint(0x4041800000000000,0,uVar6,0);
      _CGPathAddCurveToPoint
                (0x403968f5c28f5c29,0,0x4031ab851eb851ec,0x4015666666666666,0x402e8f5c28f5c28f,
                 0x402b3d70a3d70a3d,uVar6,0);
      _CGPathAddLineToPoint(0x402e8f5c28f5c28f,0x402b333333333333,uVar6,0);
      _CGPathAddCurveToPoint
                (0x402cc28f5c28f5c3,0x40313851eb851eb8,0x402c2e147ae147ae,0x4034f851eb851eb8,
                 0x402cd1eb851eb852,0x4038ae147ae147ae,uVar6,0);
      _CGPathAddLineToPoint(0x402cd70a3d70a3d7,0x4038c51eb851eb85,uVar6,0);
      _CGPathAddCurveToPoint
                (0x402beb851eb851ec,0x4038d1eb851eb852,0x402b147ae147ae14,0x4039051eb851eb85,
                 0x402a70a3d70a3d71,0x4039570a3d70a3d7,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4028b851eb851eb8,0x403a35c28f5c28f6,0x402823d70a3d70a4,0x403bee147ae147ae,
                 0x40289eb851eb851f,0x403ec00000000000,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4029570a3d70a3d7,0x4041866666666666,0x402d47ae147ae148,0x4042600000000000,
                 0x402ef0a3d70a3d71,0x4042a3d70a3d70a4,uVar6,0);
      _CGPathAddLineToPoint(0x402f1eb851eb851f,0x4042d5c28f5c28f6,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4032b33333333333,0x40481ae147ae147b,0x4034c28f5c28f5c3,0x404a87ae147ae148,
                 0x403c428f5c28f5c3,0x404cd5c28f5c28f6,uVar6,0);
      _CGPathAddLineToPoint(0x403c2b851eb851ec,0x404d55c28f5c28f6,uVar6,0);
      _CGPathAddCurveToPoint
                (0x40362b851eb851ec,0x404ddd70a3d70a3d,0x402f1eb851eb851f,0x404eae147ae147ae,
                 0x402575c28f5c28f6,0x40504eb851eb851f,uVar6,0);
      _CGPathAddCurveToPoint
                (0x401451eb851eb852,0x40516eb851eb851f,0x3ff1c28f5c28f5c3,0x4052e33333333333,
                 0x3fb70a3d70a3d70a,0x4057400000000000,uVar6,0);
      _CGPathAddLineToPoint(0x3fb70a3d70a3d70a,0x4057728f5c28f5c3,uVar6,0);
      _CGPathAddLineToPoint(0x4051800000000000,0x4057728f5c28f5c3,uVar6,0);
      _CGPathAddLineToPoint(0x40517a3d70a3d70a,0x4057400000000000,uVar6,0);
      _CGPathCloseSubpath(uVar6);
      _CGPathMoveToPoint(0x4041800000000000,0x4057100000000000,uVar6,0);
      _CGPathAddLineToPoint(0x3ffa3d70a3d70a3d,0x4057100000000000,uVar6,0);
      _CGPathAddCurveToPoint
                (0x400599999999999a,0x4052ff5c28f5c28f,0x4019ae147ae147ae,0x4051a51eb851eb85,
                 0x402747ae147ae148,0x405098f5c28f5c29,uVar6,0);
      _CGPathAddCurveToPoint
                (0x40306147ae147ae1,0x404f4e147ae147ae,0x403711eb851eb852,0x404e866666666666,
                 0x403d000000000000,0x404e000000000000,uVar6,0);
      _CGPathAddLineToPoint(0x403d91eb851eb852,0x404df33333333333,uVar6,0);
      _CGPathAddLineToPoint(0x403ddc28f5c28f5c,0x404c6b851eb851ec,uVar6,0);
      _CGPathAddLineToPoint(0x403d733333333333,0x404c4ccccccccccd,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4036000000000000,0x404a19999999999a,0x40342147ae147ae1,0x4047e51eb851eb85,
                 0x4031000000000000,0x4042a51eb851eb85,uVar6,0);
      _CGPathAddLineToPoint(0x4030c28f5c28f5c3,0x4042251eb851eb85,uVar6,0);
      _CGPathAddLineToPoint(0x40306b851eb851ec,0x404210a3d70a3d71,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4030547ae147ae14,0x404210a3d70a3d71,0x402c51eb851eb852,0x4041866666666666,
                 0x402b947ae147ae14,0x403ea66666666666,uVar6,0);
      _CGPathAddCurveToPoint
                (0x402b0f5c28f5c28f,0x403b87ae147ae148,0x402c19999999999a,0x403aa66666666666,
                 0x402c851eb851eb85,0x403a6b851eb851ec,uVar6,0);
      _CGPathAddCurveToPoint
                (0x402db851eb851eb8,0x4039c28f5c28f5c3,0x402eb33333333333,0x403a800000000000,
                 0x402f6b851eb851ec,0x403a570a3d70a3d7,uVar6,0);
      _CGPathAddCurveToPoint
                (0x403011eb851eb852,0x403a2e147ae147ae,0x402feb851eb851ec,0x4039570a3d70a3d7,
                 0x402feb851eb851ec,0x4039570a3d70a3d7,uVar6,0);
      _CGPathAddLineToPoint(0x402fe66666666666,0x40393ae147ae147b,uVar6,0);
      _CGPathAddCurveToPoint
                (0x402f19999999999a,0x4035733333333333,0x402fa3d70a3d70a4,0x40319eb851eb851f,
                 0x4030bd70a3d70a3d,0x402bd70a3d70a3d7,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4032eb851eb851ec,0x4019ae147ae147ae,0x403a19999999999a,0x3ff8000000000000,
                 0x4041800000000000,0x3ff8000000000000,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4045f33333333333,0x3ff8000000000000,0x40498a3d70a3d70a,0x4019ae147ae147ae,
                 0x404aa3d70a3d70a4,0x402c000000000000,uVar6,0);
      _CGPathAddLineToPoint(0x404a9d70a3d70a3d,0x402b9eb851eb851f,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404b133333333333,0x4031828f5c28f5c3,0x404b35c28f5c28f6,0x4035570a3d70a3d7,
                 0x404b028f5c28f5c3,0x40391eb851eb851f,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404b000000000000,0x403959999999999a,0x404af1eb851eb852,0x403a28f5c28f5c29,
                 0x404b200000000000,0x403a59999999999a,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404b4e147ae147ae,0x403a8a3d70a3d70a,0x404b8ccccccccccd,0x4039c51eb851eb85,
                 0x404bd9999999999a,0x403a6e147ae147ae,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404bf5c28f5c28f6,0x403aab851eb851ec,0x404c370a3d70a3d7,0x403b8a3d70a3d70a,
                 0x404c15c28f5c28f6,0x403ea8f5c28f5c29,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404be66666666666,0x404187ae147ae148,0x404ad1eb851eb852,0x40420ccccccccccd,
                 0x404ac51eb851eb85,0x404211eb851eb852,uVar6,0);
      _CGPathAddLineToPoint(0x404a99999999999a,0x4042266666666666,uVar6,0);
      _CGPathAddLineToPoint(0x404a7ae147ae147b,0x4042a66666666666,uVar6,0);
      _CGPathAddCurveToPoint
                (0x4048ea3d70a3d70a,0x4047e66666666666,0x4047fae147ae147b,0x404a1ae147ae147b,
                 0x404443d70a3d70a4,0x404c51eb851eb852,uVar6,0);
      _CGPathAddLineToPoint(0x40440f5c28f5c28f,0x404c70a3d70a3d71,uVar6,0);
      _CGPathAddLineToPoint(0x4044347ae147ae14,0x404df851eb851eb8,uVar6,0);
      _CGPathAddLineToPoint(0x4044800000000000,0x404e000000000000,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404775c28f5c28f6,0x404e800000000000,0x404acccccccccccd,0x404f4a3d70a3d70a,
                 0x404d2a3d70a3d70a,0x4050966666666666,uVar6,0);
      _CGPathAddCurveToPoint
                (0x404fc8f5c28f5c29,0x4051a28f5c28f5c3,0x4050d51eb851eb85,0x4052fd70a3d70a3d,
                 0x4051151eb851eb85,0x40570d70a3d70a3d,uVar6,0);
      _CGPathAddLineToPoint(0x4041800000000000,0x4057100000000000,uVar6,0);
      _CGPathCloseSubpath(uVar6);
      uVar7 = uVar6;
      _CGPathCreateCopy();
      _CGPathRelease(uVar6);
      _CGContextAddPath(param_2,uVar7);
      _CGPathRelease(uVar7);
      uVar6 = uVar2;
      _objc_retainAutorelease(uVar2);
      func_0x00010bdc0fe0();
      _CGContextSetFillColorWithColor(param_2,uVar6);
      _CGContextFillPath(param_2);
    }
    _CGContextRestoreGState(param_2);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109001238; end: 10900128b;  */

void FUN_109001238(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730640 != -1) {
    func_0x000107c27d9c(0x113730640,&PTR___NSConcreteGlobalBlock_110ad2b80);
  }
  uVar1 = uRam0000000113730648;
  _objc_retain(uRam0000000113730648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10900128c; end: 1090012b7;  */

void FUN_10900128c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam0000000113730648;
  puRam0000000113730648 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090012b8; end: 10900132b; -[SCImageDownloaderCancellableImpl initWithItemDownloaderHandler:] */

undefined1 * FUN_1090012b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffcf8;
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



/* Entry: 10900132c; end: 109001333; -[SCImageDownloaderCancellableImpl cancel] */

void FUN_10900132c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 109001334; end: 10900133f; -[SCImageDownloaderCancellableImpl .cxx_destruct] */

void FUN_109001334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109001340; end: 10900148b; -[SCLegacyImageDownloader initWithRequestManager:avatarDownloader:storiesThumbnailDownloader:contentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109001340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ffd00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277f860;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277f864;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277f868;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f86c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f86c) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277f870;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900148c; end: 109001497;  */

void FUN_10900148c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ced20,PTR_s_searchImageDataCache_1126328d8);
  return;
}


