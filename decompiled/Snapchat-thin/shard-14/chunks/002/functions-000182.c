/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0873e4; end: 10b08749b; -[SCMagicCaptionInteractionMetadata isEqual:] */

long FUN_10b0873e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b087474:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b087480;
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
          goto LAB_10b087480;
        }
        goto LAB_10b087474;
      }
    }
    lVar3 = 0;
  }
LAB_10b087480:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b08749c; end: 10b0874a3; -[SCMagicCaptionInteractionMetadata generationRequestId] */

undefined8 FUN_10b08749c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0874a4; end: 10b0874ab; -[SCMagicCaptionInteractionMetadata selectedCaptionId] */

undefined8 FUN_10b0874a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0874ac; end: 10b0874b3; -[SCMagicCaptionInteractionMetadata isCaptionRemoved] */

undefined1 FUN_10b0874ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0874b4; end: 10b0874e3; -[SCMagicCaptionInteractionMetadata .cxx_destruct] */

void FUN_10b0874b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0874e4; end: 10b08757f; -[SCPlusSnapModeParams initWithCoder:] */

undefined1 * FUN_10b0874e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b087580; end: 10b087607; -[SCPlusSnapModeParams initWithModeType:violiDurationMs:] */

undefined1 *
FUN_10b087580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127051f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b087608; end: 10b08762b; -[SCPlusSnapModeParams copyWithZone:] */

undefined8 FUN_10b087608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b08762c; end: 10b08768b; -[SCPlusSnapModeParams encodeWithCoder:] */

void FUN_10b08762c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f58ed8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f58ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b08768c; end: 10b0876f3; -[SCPlusSnapModeParams hash] */

long * FUN_10b08768c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b087778;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b087778;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b087778;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b087778:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b0876f4; end: 10b087793; -[SCPlusSnapModeParams isEqual:] */

long FUN_10b0876f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b087778;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b087778;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b087778;
    }
  }
  lVar3 = 1;
LAB_10b087778:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b087794; end: 10b08779b; -[SCPlusSnapModeParams modeType] */

undefined8 FUN_10b087794(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b08779c; end: 10b0877a3; -[SCPlusSnapModeParams violiDurationMs] */

undefined8 FUN_10b08779c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0877a4; end: 10b0877af; -[SCPlusSnapModeParams .cxx_destruct] */

void FUN_10b0877a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0877b0; end: 10b08785f; -[SCRemixLoggingParams initWithCoder:] */

undefined1 * FUN_10b0877b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705200;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b087860; end: 10b08790b; -[SCRemixLoggingParams initWithRemixSourceSnapId:remixType:] */

undefined1 *
FUN_10b087860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08790c; end: 10b08792f; -[SCRemixLoggingParams copyWithZone:] */

undefined8 FUN_10b08790c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b087930; end: 10b08798f; -[SCRemixLoggingParams encodeWithCoder:] */

void FUN_10b087930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f58f18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f58f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b087990; end: 10b087a03; -[SCRemixLoggingParams hash] */

undefined8 * FUN_10b087990(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b087a84:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b087a90;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b087a90;
        }
        goto LAB_10b087a84;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b087a90:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b087a04; end: 10b087aab; -[SCRemixLoggingParams isEqual:] */

long FUN_10b087a04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b087a84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b087a90;
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
          goto LAB_10b087a90;
        }
        goto LAB_10b087a84;
      }
    }
    lVar3 = 0;
  }
LAB_10b087a90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b087aac; end: 10b087ab3; -[SCRemixLoggingParams remixSourceSnapId] */

undefined8 FUN_10b087aac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b087ab4; end: 10b087abb; -[SCRemixLoggingParams remixType] */

undefined8 FUN_10b087ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b087abc; end: 10b087aeb; -[SCRemixLoggingParams .cxx_destruct] */

void FUN_10b087abc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b087aec; end: 10b087af3; -[SCTalkServices missedCallsCache] */

undefined8 FUN_10b087aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b087af4; end: 10b087b3b; -[SCTalkServices .cxx_destruct] */

void FUN_10b087af4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b087b3c; end: 10b087c3f; -[SCCall initWithConversationId:localParticipation:callMedia:publishedMedia:isMuted:remoteParticipants:caller:] */

undefined1 *
FUN_10b087b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112705210;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b087c40; end: 10b087c63; -[SCCall copyWithZone:] */

undefined8 FUN_10b087c40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b087c64; end: 10b087cf3; -[SCCall hash] */

undefined8 * FUN_10b087c64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b087dcc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b087dd8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x30);
        if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
          if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10b087dd8;
          }
          goto LAB_10b087dcc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b087dd8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b087cf4; end: 10b087df3; -[SCCall isEqual:] */

long FUN_10b087cf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b087dcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b087dd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10b087dd8;
          }
          goto LAB_10b087dcc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b087dd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b087df4; end: 10b087dfb; -[SCCall conversationId] */

undefined8 FUN_10b087df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b087dfc; end: 10b087e03; -[SCCall localParticipation] */

undefined8 FUN_10b087dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b087e04; end: 10b087e0b; -[SCCall callMedia] */

undefined8 FUN_10b087e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b087e0c; end: 10b087e13; -[SCCall publishedMedia] */

undefined8 FUN_10b087e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b087e14; end: 10b087e1b; -[SCCall isMuted] */

undefined1 FUN_10b087e14(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b087e1c; end: 10b087e23; -[SCCall remoteParticipants] */

undefined8 FUN_10b087e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b087e24; end: 10b087e2b; -[SCCall caller] */

undefined8 FUN_10b087e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b087e2c; end: 10b087e67; -[SCCall .cxx_destruct] */

void FUN_10b087e2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b087e68; end: 10b087edf; -[SCCallParticipant initWithUserId:] */

undefined1 * FUN_10b087e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705218;
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



/* Entry: 10b087ee0; end: 10b087f03; -[SCCallParticipant copyWithZone:] */

undefined8 FUN_10b087ee0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b087f04; end: 10b087f0b; -[SCCallParticipant hash] */

void FUN_10b087f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b087f0c; end: 10b087f9b; -[SCCallParticipant isEqual:] */

long FUN_10b087f0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b087f80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b087f80;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b087f80;
    }
  }
  lVar3 = 1;
LAB_10b087f80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b087f9c; end: 10b087fa3; -[SCCallParticipant userId] */

undefined8 FUN_10b087f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b087fa4; end: 10b087faf; -[SCCallParticipant .cxx_destruct] */

void FUN_10b087fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b087fb0; end: 10b08803b; -[SCPresenceTypingParticipant initWithUserId:state:activityType:] */

undefined1 *
FUN_10b087fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08803c; end: 10b08805f; -[SCPresenceTypingParticipant copyWithZone:] */

undefined8 FUN_10b08803c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b088060; end: 10b0880cf; -[SCPresenceTypingParticipant hash] */

undefined8 * FUN_10b088060(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b088164;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b088164;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b088164;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b088164:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b0880d0; end: 10b08817f; -[SCPresenceTypingParticipant isEqual:] */

long FUN_10b0880d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b088164;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b088164;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b088164;
    }
  }
  lVar3 = 1;
LAB_10b088164:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b088180; end: 10b088187; -[SCPresenceTypingParticipant userId] */

undefined8 FUN_10b088180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b088188; end: 10b08818f; -[SCPresenceTypingParticipant state] */

undefined8 FUN_10b088188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b088190; end: 10b088197; -[SCPresenceTypingParticipant activityType] */

undefined8 FUN_10b088190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b088198; end: 10b0881a3; -[SCPresenceTypingParticipant .cxx_destruct] */

void FUN_10b088198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0881a4; end: 10b08821b; -[SCPresenceTypingConversation initWithParticipants:] */

undefined1 * FUN_10b0881a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705228;
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



/* Entry: 10b08821c; end: 10b08823f; -[SCPresenceTypingConversation copyWithZone:] */

undefined8 FUN_10b08821c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b088240; end: 10b088247; -[SCPresenceTypingConversation hash] */

void FUN_10b088240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b088248; end: 10b0882d7; -[SCPresenceTypingConversation isEqual:] */

long FUN_10b088248(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0882bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b0882bc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0882bc;
    }
  }
  lVar3 = 1;
LAB_10b0882bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0882d8; end: 10b0882df; -[SCPresenceTypingConversation participants] */

undefined8 FUN_10b0882d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0882e0; end: 10b0882eb; -[SCPresenceTypingConversation .cxx_destruct] */

void FUN_10b0882e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0882ec; end: 10b088363; -[SCPresencePresentConversation initWithParticipants:] */

undefined1 * FUN_10b0882ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705230;
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



/* Entry: 10b088364; end: 10b088387; -[SCPresencePresentConversation copyWithZone:] */

undefined8 FUN_10b088364(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b088388; end: 10b08838f; -[SCPresencePresentConversation hash] */

void FUN_10b088388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b088390; end: 10b08841f; -[SCPresencePresentConversation isEqual:] */

long FUN_10b088390(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b088404;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b088404;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b088404;
    }
  }
  lVar3 = 1;
LAB_10b088404:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b088420; end: 10b088427; -[SCPresencePresentConversation participants] */

undefined8 FUN_10b088420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b088428; end: 10b088433; -[SCPresencePresentConversation .cxx_destruct] */

void FUN_10b088428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b088434; end: 10b0884ab; -[SCPresencePresentParticipant initWithUserId:] */

undefined1 * FUN_10b088434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705238;
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



/* Entry: 10b0884ac; end: 10b0884cf; -[SCPresencePresentParticipant copyWithZone:] */

undefined8 FUN_10b0884ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0884d0; end: 10b0884d7; -[SCPresencePresentParticipant hash] */

void FUN_10b0884d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b0884d8; end: 10b088567; -[SCPresencePresentParticipant isEqual:] */

long FUN_10b0884d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b08854c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b08854c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b08854c;
    }
  }
  lVar3 = 1;
LAB_10b08854c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b088568; end: 10b08856f; -[SCPresencePresentParticipant userId] */

undefined8 FUN_10b088568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b088570; end: 10b08857b; -[SCPresencePresentParticipant .cxx_destruct] */

void FUN_10b088570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08857c; end: 10b08862f; -[SCPresenceGameParticipant initWithUserId:gameId:sessionId:] */

undefined1 *
FUN_10b08857c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112705240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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



/* Entry: 10b088630; end: 10b088653; -[SCPresenceGameParticipant copyWithZone:] */

undefined8 FUN_10b088630(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b088654; end: 10b0886d3; -[SCPresenceGameParticipant hash] */

undefined8 * FUN_10b088654(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b088764:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b088770;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b088770;
        }
        goto LAB_10b088764;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b088770:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b0886d4; end: 10b08878b; -[SCPresenceGameParticipant isEqual:] */

long FUN_10b0886d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b088764:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b088770;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b088770;
        }
        goto LAB_10b088764;
      }
    }
    lVar3 = 0;
  }
LAB_10b088770:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b08878c; end: 10b088793; -[SCPresenceGameParticipant userId] */

undefined8 FUN_10b08878c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b088794; end: 10b08879b; -[SCPresenceGameParticipant gameId] */

undefined8 FUN_10b088794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b08879c; end: 10b0887a3; -[SCPresenceGameParticipant sessionId] */

undefined8 FUN_10b08879c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0887a4; end: 10b0887d3; -[SCPresenceGameParticipant .cxx_destruct] */

void FUN_10b0887a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0887d4; end: 10b08884b; -[SCPresenceGameConversation initWithParticipants:] */

undefined1 * FUN_10b0887d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705248;
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



/* Entry: 10b08884c; end: 10b08886f; -[SCPresenceGameConversation copyWithZone:] */

undefined8 FUN_10b08884c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b088870; end: 10b088877; -[SCPresenceGameConversation hash] */

void FUN_10b088870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b088878; end: 10b088907; -[SCPresenceGameConversation isEqual:] */

long FUN_10b088878(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0888ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b0888ec;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0888ec;
    }
  }
  lVar3 = 1;
LAB_10b0888ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b088908; end: 10b08890f; -[SCPresenceGameConversation participants] */

undefined8 FUN_10b088908(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b088910; end: 10b08891b; -[SCPresenceGameConversation .cxx_destruct] */

void FUN_10b088910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08891c; end: 10b088923; -[SCTAudioDeviceType__Enum init] */

void FUN_10b08891c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b088924; end: 10b08892b; -[SCTCallPageType__Enum init] */

void FUN_10b088924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b08892c; end: 10b08892f; -[SCTCallState__Enum init] */

void FUN_10b08892c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b088930; end: 10b088937; -[SCTCallStateChangeReason__Enum init] */

void FUN_10b088930(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b088938; end: 10b08893f; -[SCTFillMode__Enum init] */

void FUN_10b088938(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b088940; end: 10b088943; -[SCTFrameSize__Enum init] */

void FUN_10b088940(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b088944; end: 10b08894b; -[SCTLocalScreenShareState__Enum init] */

void FUN_10b088944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b08894c; end: 10b08894f; -[SCTMedia__Enum init] */

void FUN_10b08894c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b088950; end: 10b088957; -[SCTMediaIssueType__Enum init] */

void FUN_10b088950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b088958; end: 10b08895f; -[SCTNotificationType__Enum init] */

void FUN_10b088958(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b088960; end: 10b088967; -[SCTPlatform__Enum init] */

void FUN_10b088960(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b088968; end: 10b08896f; -[SCTRemoteVideoStreamStatus__Enum init] */

void FUN_10b088968(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b088970; end: 10b088973; -[SCTRingtone__Enum init] */

void FUN_10b088970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b088974; end: 10b088a33; -[SCSnapDialerContext initWithFriendStore:isCallButtonDefault:startChat:startAudioCall:startVideoCall:onDismiss:] */

undefined8 * FUN_10b088974(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain();
  func_0x00010b0899cc();
  func_0x00010b0899c4();
  func_0x00010b0898f4();
  func_0x00010b08997c();
  func_0x00010b089984();
  func_0x00010b0898c8();
  func_0x00010b08994c();
  func_0x00010b0898b8();
  func_0x00010b0899ac();
  func_0x00010b089928();
  puStack_58 = PTR_PTR_112705250;
  uStack_60 = param_1;
  func_0x00010b08989c();
  puVar1 = &uStack_60;
  func_0x00010b08987c(puVar1);
  func_0x00010b089894();
  func_0x00010b0898b8();
  func_0x00010b0898c8();
  func_0x00010b089920();
  func_0x00010b0898b0();
  return puVar1;
}



/* Entry: 10b088a34; end: 10b088a47; +[SCSnapDialerContext valdiMarshallableObjectDescriptor] */

void FUN_10b088a34(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_110cb41a8;
  param_1[1] = &PTR_s_SCCFriendStoring_110cb4250;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088a48; end: 10b088a7b; -[SCTAudioDevice initWithType:] */

void FUN_10b088a48(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705258;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b088a7c; end: 10b088a8f; +[SCTAudioDevice valdiMarshallableObjectDescriptor] */

void FUN_10b088a7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4260;
  param_1[1] = &PTR_DAT_110cb42c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


