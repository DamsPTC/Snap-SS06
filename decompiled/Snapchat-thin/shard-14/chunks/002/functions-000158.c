/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b052bbc; end: 10b052bc3; -[SCPromptLensReplyParameters lensId] */

undefined8 FUN_10b052bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b052bc4; end: 10b052bcb; -[SCPromptLensReplyParameters promptId] */

undefined8 FUN_10b052bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b052bcc; end: 10b052bd3; -[SCPromptLensReplyParameters promptEncryptionKey] */

undefined8 FUN_10b052bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b052bd4; end: 10b052bdb; -[SCPromptLensReplyParameters flowType] */

undefined8 FUN_10b052bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b052bdc; end: 10b052be3; -[SCPromptLensReplyParameters promptCreatorId] */

undefined8 FUN_10b052bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b052be4; end: 10b052beb; -[SCPromptLensReplyParameters promptReceiverUserId] */

undefined8 FUN_10b052be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b052bec; end: 10b052bf3; -[SCPromptLensReplyParameters overWrittenReplyUserId] */

undefined8 FUN_10b052bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b052bf4; end: 10b052bfb; -[SCPromptLensReplyParameters promptCreatorName] */

undefined8 FUN_10b052bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b052bfc; end: 10b052c03; -[SCPromptLensReplyParameters responseId] */

undefined8 FUN_10b052bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b052c04; end: 10b052c0b; -[SCPromptLensReplyParameters responseEncryptionKey] */

undefined8 FUN_10b052c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b052c0c; end: 10b052c13; -[SCPromptLensReplyParameters enableCaptureButton] */

undefined1 FUN_10b052c0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b052c14; end: 10b052c1b; -[SCPromptLensReplyParameters storyServerId] */

undefined8 FUN_10b052c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b052c1c; end: 10b052c23; -[SCPromptLensReplyParameters chatMessageId] */

undefined8 FUN_10b052c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b052c24; end: 10b052c2b; -[SCPromptLensReplyParameters tappableElementKey] */

undefined8 FUN_10b052c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b052c2c; end: 10b052c33; -[SCPromptLensReplyParameters mediaFilepath] */

undefined8 FUN_10b052c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b052c34; end: 10b052c3b; -[SCPromptLensReplyParameters overlayCacheKey] */

undefined8 FUN_10b052c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b052c3c; end: 10b052c43; -[SCPromptLensReplyParameters isVideo] */

undefined1 FUN_10b052c3c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b052c44; end: 10b052d0f; -[SCPromptLensReplyParameters .cxx_destruct] */

void FUN_10b052c44(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b052d10; end: 10b052dbb; -[SCLensConfigReplyParameters initWithPromptLensReplyParams:inLensCreationReplyParams:] */

undefined1 *
FUN_10b052d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704d78;
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



/* Entry: 10b052dbc; end: 10b052ddf; -[SCLensConfigReplyParameters copyWithZone:] */

undefined8 FUN_10b052dbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b052de0; end: 10b052e53; -[SCLensConfigReplyParameters hash] */

undefined8 * FUN_10b052de0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b052ed4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b052ee0;
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
          goto LAB_10b052ee0;
        }
        goto LAB_10b052ed4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b052ee0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b052e54; end: 10b052efb; -[SCLensConfigReplyParameters isEqual:] */

long FUN_10b052e54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b052ed4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b052ee0;
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
          goto LAB_10b052ee0;
        }
        goto LAB_10b052ed4;
      }
    }
    lVar3 = 0;
  }
LAB_10b052ee0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b052efc; end: 10b052f03; -[SCLensConfigReplyParameters promptLensReplyParams] */

undefined8 FUN_10b052efc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b052f04; end: 10b052f0b; -[SCLensConfigReplyParameters inLensCreationReplyParams] */

undefined8 FUN_10b052f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b052f0c; end: 10b052f3b; -[SCLensConfigReplyParameters .cxx_destruct] */

void FUN_10b052f0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b052f3c; end: 10b053037; -[SCInLensCreationReplyParameters initWithLensId:customizationId:customizationFuture:replySenderUserId:] */

undefined1 *
FUN_10b052f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704d80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b053038; end: 10b05305b; -[SCInLensCreationReplyParameters copyWithZone:] */

undefined8 FUN_10b053038(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05305c; end: 10b0530e7; -[SCInLensCreationReplyParameters hash] */

undefined8 * FUN_10b05305c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b053198:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0531a4;
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
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b0531a4;
            }
            goto LAB_10b053198;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0531a4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0530e8; end: 10b0531bf; -[SCInLensCreationReplyParameters isEqual:] */

long FUN_10b0530e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b053198:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0531a4;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b0531a4;
            }
            goto LAB_10b053198;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0531a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0531c0; end: 10b0531c7; -[SCInLensCreationReplyParameters lensId] */

undefined8 FUN_10b0531c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0531c8; end: 10b0531cf; -[SCInLensCreationReplyParameters customizationId] */

undefined8 FUN_10b0531c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0531d0; end: 10b0531d7; -[SCInLensCreationReplyParameters customizationFuture] */

undefined8 FUN_10b0531d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0531d8; end: 10b0531df; -[SCInLensCreationReplyParameters replySenderUserId] */

undefined8 FUN_10b0531d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0531e0; end: 10b053227; -[SCInLensCreationReplyParameters .cxx_destruct] */

void FUN_10b0531e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b053228; end: 10b0532d3; -[SCInLensCreationConfigMention initWithUserId:username:] */

undefined1 *
FUN_10b053228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704d88;
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



/* Entry: 10b0532d4; end: 10b0532f7; -[SCInLensCreationConfigMention copyWithZone:] */

undefined8 FUN_10b0532d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0532f8; end: 10b05336b; -[SCInLensCreationConfigMention hash] */

undefined8 * FUN_10b0532f8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0533ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0533f8;
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
          goto LAB_10b0533f8;
        }
        goto LAB_10b0533ec;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0533f8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b05336c; end: 10b053413; -[SCInLensCreationConfigMention isEqual:] */

long FUN_10b05336c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0533ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0533f8;
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
          goto LAB_10b0533f8;
        }
        goto LAB_10b0533ec;
      }
    }
    lVar3 = 0;
  }
LAB_10b0533f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b053414; end: 10b05341b; -[SCInLensCreationConfigMention userId] */

undefined8 FUN_10b053414(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05341c; end: 10b053423; -[SCInLensCreationConfigMention username] */

undefined8 FUN_10b05341c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b053424; end: 10b053453; -[SCInLensCreationConfigMention .cxx_destruct] */

void FUN_10b053424(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b053454; end: 10b053567; -[SCInLensCreationConfig initWithCustomization:previewText:promptType:mentions:senderUserId:] */

undefined1 *
FUN_10b053454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112704d90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b053568; end: 10b05358b; -[SCInLensCreationConfig copyWithZone:] */

undefined8 FUN_10b053568(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05358c; end: 10b053623; -[SCInLensCreationConfig hash] */

undefined8 * FUN_10b05358c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0536e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0536f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0536f0;
            }
            goto LAB_10b0536e4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0536f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b053624; end: 10b05370b; -[SCInLensCreationConfig isEqual:] */

long FUN_10b053624(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0536e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0536f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0536f0;
            }
            goto LAB_10b0536e4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0536f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05370c; end: 10b053713; -[SCInLensCreationConfig customization] */

undefined8 FUN_10b05370c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b053714; end: 10b05371b; -[SCInLensCreationConfig previewText] */

undefined8 FUN_10b053714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05371c; end: 10b053723; -[SCInLensCreationConfig promptType] */

undefined8 FUN_10b05371c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b053724; end: 10b05372b; -[SCInLensCreationConfig mentions] */

undefined8 FUN_10b053724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05372c; end: 10b053733; -[SCInLensCreationConfig senderUserId] */

undefined8 FUN_10b05372c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b053734; end: 10b05377b; -[SCInLensCreationConfig .cxx_destruct] */

void FUN_10b053734(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05377c; end: 10b0537f3; -[SCCommentsSnapReplyParameters initWithOriginalCompositeStoryId:] */

undefined1 * FUN_10b05377c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704d98;
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



/* Entry: 10b0537f4; end: 10b053817; -[SCCommentsSnapReplyParameters copyWithZone:] */

undefined8 FUN_10b0537f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b053818; end: 10b05381f; -[SCCommentsSnapReplyParameters hash] */

void FUN_10b053818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b053820; end: 10b0538af; -[SCCommentsSnapReplyParameters isEqual:] */

long FUN_10b053820(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b053894;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b053894;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b053894;
    }
  }
  lVar3 = 1;
LAB_10b053894:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0538b0; end: 10b0538b7; -[SCCommentsSnapReplyParameters originalCompositeStoryId] */

undefined8 FUN_10b0538b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0538b8; end: 10b0538c3; -[SCCommentsSnapReplyParameters .cxx_destruct] */

void FUN_10b0538b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0538c4; end: 10b053977; -[SCGamesReplyParameters initWithSessionId:conversationId:isNewGameSession:] */

undefined1 *
FUN_10b0538c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704da0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b053978; end: 10b05399b; -[SCGamesReplyParameters copyWithZone:] */

undefined8 FUN_10b053978(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05399c; end: 10b053a13; -[SCGamesReplyParameters hash] */

undefined8 * FUN_10b05399c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b053aa4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b053ab0;
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
          goto LAB_10b053ab0;
        }
        goto LAB_10b053aa4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b053ab0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b053a14; end: 10b053acb; -[SCGamesReplyParameters isEqual:] */

long FUN_10b053a14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b053aa4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b053ab0;
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
          goto LAB_10b053ab0;
        }
        goto LAB_10b053aa4;
      }
    }
    lVar3 = 0;
  }
LAB_10b053ab0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b053acc; end: 10b053ad3; -[SCGamesReplyParameters sessionId] */

undefined8 FUN_10b053acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b053ad4; end: 10b053adb; -[SCGamesReplyParameters conversationId] */

undefined8 FUN_10b053ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b053adc; end: 10b053ae3; -[SCGamesReplyParameters isNewGameSession] */

undefined1 FUN_10b053adc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b053ae4; end: 10b053b13; -[SCGamesReplyParameters .cxx_destruct] */

void FUN_10b053ae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b053b14; end: 10b053bc7; -[SCStoryReplyOriginMetadata initWithIsSnapProStoryReply:posterUserId:originalSnapId:] */

undefined1 *
FUN_10b053b14(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704da8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b053bc8; end: 10b053beb; -[SCStoryReplyOriginMetadata copyWithZone:] */

undefined8 FUN_10b053bc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b053bec; end: 10b053c67; -[SCStoryReplyOriginMetadata hash] */

ulong * FUN_10b053bec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10b053cf8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b053d04;
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
          goto LAB_10b053d04;
        }
        goto LAB_10b053cf8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b053d04:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b053c68; end: 10b053d1f; -[SCStoryReplyOriginMetadata isEqual:] */

long FUN_10b053c68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b053cf8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b053d04;
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
          goto LAB_10b053d04;
        }
        goto LAB_10b053cf8;
      }
    }
    lVar3 = 0;
  }
LAB_10b053d04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b053d20; end: 10b053d27; -[SCStoryReplyOriginMetadata isSnapProStoryReply] */

undefined1 FUN_10b053d20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b053d28; end: 10b053d2f; -[SCStoryReplyOriginMetadata posterUserId] */

undefined8 FUN_10b053d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b053d30; end: 10b053d37; -[SCStoryReplyOriginMetadata originalSnapId] */

undefined8 FUN_10b053d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b053d38; end: 10b053d67; -[SCStoryReplyOriginMetadata .cxx_destruct] */

void FUN_10b053d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b053d68; end: 10b053e2f; -[SCBasicReplyParameters initWithReplyDestination:snapSource:navigationType:replyPretext:optionalParameters:] */

undefined1 *
FUN_10b053d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112704db0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b053e30; end: 10b053e53; -[SCBasicReplyParameters copyWithZone:] */

undefined8 FUN_10b053e30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b053e54; end: 10b053ed7; -[SCBasicReplyParameters hash] */

undefined8 * FUN_10b053e54(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b053f88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b053f94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
        if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b053f94;
        }
        goto LAB_10b053f88;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b053f94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b053ed8; end: 10b053faf; -[SCBasicReplyParameters isEqual:] */

long FUN_10b053ed8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b053f88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b053f94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b053f94;
        }
        goto LAB_10b053f88;
      }
    }
    lVar3 = 0;
  }
LAB_10b053f94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b053fb0; end: 10b053fb7; -[SCBasicReplyParameters replyDestination] */

undefined8 FUN_10b053fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b053fb8; end: 10b053fbf; -[SCBasicReplyParameters snapSource] */

undefined8 FUN_10b053fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b053fc0; end: 10b053fc7; -[SCBasicReplyParameters navigationType] */

undefined8 FUN_10b053fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b053fc8; end: 10b053fcf; -[SCBasicReplyParameters replyPretext] */

undefined8 FUN_10b053fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b053fd0; end: 10b053fd7; -[SCBasicReplyParameters optionalParameters] */

undefined8 FUN_10b053fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b053fd8; end: 10b054007; -[SCBasicReplyParameters .cxx_destruct] */

void FUN_10b053fd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b054008; end: 10b05412b; -[SCOptionalBasicReplyParameters initWithReplyType:context:replyUserId:replyDisplayName:quotedMessageId:isBirthday:] */

undefined1 *
FUN_10b054008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112704db8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05412c; end: 10b05414f; -[SCOptionalBasicReplyParameters copyWithZone:] */

undefined8 FUN_10b05412c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b054150; end: 10b0541eb; -[SCOptionalBasicReplyParameters hash] */

long * FUN_10b054150(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  plVar3 = &lStack_58;
  uStack_38 = uVar1;
  func_0x000107c3191c(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b0542bc:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b0542c8;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) &&
       ((plVar3[2] == param_3[2] && ((char)plVar3[1] == (char)param_3[1])))) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = plVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            plVar6 = (long *)plVar3[6];
            if (plVar6 != (long *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_10b0542c8;
            }
            goto LAB_10b0542bc;
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b0542c8:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b0541ec; end: 10b0542e3; -[SCOptionalBasicReplyParameters isEqual:] */

long FUN_10b0541ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0542bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0542c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10b0542c8;
            }
            goto LAB_10b0542bc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0542c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0542e4; end: 10b0542eb; -[SCOptionalBasicReplyParameters replyType] */

undefined8 FUN_10b0542e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0542ec; end: 10b0542f3; -[SCOptionalBasicReplyParameters context] */

undefined8 FUN_10b0542ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0542f4; end: 10b0542fb; -[SCOptionalBasicReplyParameters replyUserId] */

undefined8 FUN_10b0542f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0542fc; end: 10b054303; -[SCOptionalBasicReplyParameters replyDisplayName] */

undefined8 FUN_10b0542fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b054304; end: 10b05430b; -[SCOptionalBasicReplyParameters quotedMessageId] */

undefined8 FUN_10b054304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b05430c; end: 10b054313; -[SCOptionalBasicReplyParameters isBirthday] */

undefined1 FUN_10b05430c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b054314; end: 10b05435b; -[SCOptionalBasicReplyParameters .cxx_destruct] */

void FUN_10b054314(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b05435c; end: 10b0543c7; +[SCReplyDestination groupWithConversationId:] */

void FUN_10b05435c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6c0;
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



/* Entry: 10b0543c8; end: 10b05445f; +[SCReplyDestination multirecipientWithUserIds:groupIds:] */

void FUN_10b0543c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b054460; end: 10b0544eb; +[SCReplyDestination storyWithStoryId:addToSpotlight:addToOurStory:addToMyStory:] */

void FUN_10b054460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
  puVar2[0x28] = param_4;
  puVar2[0x29] = param_5;
  puVar2[0x2a] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0544ec; end: 10b05454f; +[SCReplyDestination userWithUsername:] */

void FUN_10b0544ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6c0;
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



/* Entry: 10b054550; end: 10b054573; -[SCReplyDestination copyWithZone:] */

undefined8 FUN_10b054550(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b054574; end: 10b05461f; -[SCReplyDestination hash] */

void FUN_10b054574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x29);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x2a);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_112704dc0;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


