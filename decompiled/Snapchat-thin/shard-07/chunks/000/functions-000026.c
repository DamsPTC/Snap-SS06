/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105075ab4; end: 105075c3b;  */

void FUN_105075ab4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  FUN_105077284(param_2,*(undefined8 *)(param_1 + 0x20));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar6);
  puVar5 = auStack_e8;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar2 = lVar8;
        func_0x00010c0f0700();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar8;
          func_0x00010bf35ee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          if (lVar3 != 0) {
            FUN_105076fa0(param_2,lVar8);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar5 = auStack_e8;
      lVar1 = lVar6;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_105077d44(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_105077e28(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  uVar7 = *(undefined8 *)(param_2 + 8);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c0f8500(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 105075c3c; end: 105075cf7; -[SCProfileChatAttachmentDataStore _updateFetchMetadataChecksumForOwnerId:checksum:] */

void FUN_105075c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105075cf8;
  puStack_48 = &UNK_110864a38;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105075cf8; end: 105075d07;  */

void FUN_105075cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  lVar3 = param_2;
  FUN_105077fa8(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b45e0;
    FUN_10507da54(PTR_PTR_1126b45e0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar4);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105075d08; end: 105075d37; -[SCProfileChatAttachmentDataStore .cxx_destruct] */

void FUN_105075d08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105075d38; end: 105075e1f;  */

undefined8 FUN_105075d38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c00c0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105075e20; end: 105075e33;  */

void FUN_105075e20(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  return;
}



/* Entry: 105075e34; end: 105075ee3;  */

void FUN_105075e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0becc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105075ee4; end: 105075f17;  */

void FUN_105075ee4(long param_1,ulong param_2)

{
  if (param_2 < 3) {
    *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2 - param_2;
  }
  return;
}



/* Entry: 105075f18; end: 10507602b;  */

void FUN_105075f18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10507602c;
  uStack_30 = 0x10507603c;
  uStack_28 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c00c0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10507602c; end: 105076057;  */

void FUN_10507602c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105076058; end: 10507608f;  */

void FUN_105076058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105076090; end: 1050761a3;  */

void FUN_105076090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10507602c;
  uStack_30 = 0x10507603c;
  uStack_28 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c00c0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050761a4; end: 1050761b7;  */

void FUN_1050761a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050761b8; end: 105076253;  */

void FUN_1050761b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c11f2a0(param_3);
  uVar1 = param_2;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105076254; end: 105076367;  */

void FUN_105076254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10507602c;
  uStack_30 = 0x10507603c;
  uStack_28 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c00c0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105076368; end: 10507639f;  */

void FUN_105076368(long param_1,undefined8 param_2)

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



/* Entry: 1050763a0; end: 1050763b3;  */

void FUN_1050763a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050763b4; end: 105076417; +[SCProfileArroyoChatAttachmentContentDataModel snapchatterWithUserId:] */

void FUN_1050763b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b45b8;
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



/* Entry: 105076418; end: 1050764af; +[SCProfileArroyoChatAttachmentContentDataModel textMediaAttributeWithFullText:textMediaAttribute:] */

void FUN_105076418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b45b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050764b0; end: 1050764d3; -[SCProfileArroyoChatAttachmentContentDataModel copyWithZone:] */

undefined8 FUN_1050764b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050764d4; end: 105076557; -[SCProfileArroyoChatAttachmentContentDataModel hash] */

void FUN_1050764d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e5d78;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105076558; end: 10507659b; -[SCProfileArroyoChatAttachmentContentDataModel internalInit] */

void FUN_105076558(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e5d78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10507659c; end: 10507666b; -[SCProfileArroyoChatAttachmentContentDataModel isEqual:] */

long FUN_10507659c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105076644:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105076650;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105076650;
          }
          goto LAB_105076644;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105076650:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10507666c; end: 1050766f3; -[SCProfileArroyoChatAttachmentContentDataModel matchSnapchatter:textMediaAttribute:] */

void FUN_10507666c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050766f4; end: 10507672f; -[SCProfileArroyoChatAttachmentContentDataModel .cxx_destruct] */

void FUN_1050766f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105076730; end: 1050768d7; -[SCProfileArroyoChatAttachmentDataModel initWithUniqueId:conversationId:messageId:senderUserId:messageTimestamp:content:ownerId:conversationType:] */

undefined1 *
FUN_105076730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126e5d80;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050768d8; end: 1050768fb; -[SCProfileArroyoChatAttachmentDataModel copyWithZone:] */

undefined8 FUN_1050768d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050768fc; end: 1050769b7; -[SCProfileArroyoChatAttachmentDataModel hash] */

undefined8 * FUN_1050768fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_68;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105076ac0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105076acc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[8] == param_3[8])) {
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
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[7];
                  if (puVar6 != (undefined8 *)param_3[7]) {
                    func_0x00010c071ae0();
                    goto LAB_105076acc;
                  }
                  goto LAB_105076ac0;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105076acc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050769b8; end: 105076ae7; -[SCProfileArroyoChatAttachmentDataModel isEqual:] */

long FUN_1050769b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105076ac0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105076acc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) {
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_105076acc;
                  }
                  goto LAB_105076ac0;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105076acc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105076ae8; end: 105076aef; -[SCProfileArroyoChatAttachmentDataModel uniqueId] */

undefined8 FUN_105076ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105076af0; end: 105076af7; -[SCProfileArroyoChatAttachmentDataModel conversationId] */

undefined8 FUN_105076af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105076af8; end: 105076aff; -[SCProfileArroyoChatAttachmentDataModel messageId] */

undefined8 FUN_105076af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105076b00; end: 105076b07; -[SCProfileArroyoChatAttachmentDataModel senderUserId] */

undefined8 FUN_105076b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105076b08; end: 105076b0f; -[SCProfileArroyoChatAttachmentDataModel messageTimestamp] */

undefined8 FUN_105076b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105076b10; end: 105076b17; -[SCProfileArroyoChatAttachmentDataModel content] */

undefined8 FUN_105076b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105076b18; end: 105076b1f; -[SCProfileArroyoChatAttachmentDataModel ownerId] */

undefined8 FUN_105076b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105076b20; end: 105076b27; -[SCProfileArroyoChatAttachmentDataModel conversationType] */

undefined8 FUN_105076b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105076b28; end: 105076b93; -[SCProfileArroyoChatAttachmentDataModel .cxx_destruct] */

void FUN_105076b28(long param_1)

{
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



/* Entry: 105076b94; end: 105076c2f; -[SCProfileChatAttachmentFetchMetadata initWithOwnerIdentifier:checksum:paginationSeqNumMap:expirationTimestamp:] */

undefined8
FUN_105076b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be19ae0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032b20(param_1,param_2,param_3,param_4,uVar1,param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105076c30; end: 105076c7f; -[SCProfileChatAttachmentFetchMetadata paginationSeqNumMap] */

void FUN_105076c30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f2860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becc820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105076c80; end: 105076e0f; -[SCProfileChatAttachmentFetchMetadata _toMap:] */

void FUN_105076c80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c15e680(uVar7);
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f49c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar1);
        _objc_release(uVar7);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar4 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        puVar3 = PTR_PTR_1126b45c0;
        _objc_alloc();
        puVar5 = (undefined1 *)puVar6;
        func_0x00010c0e00e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c034240();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar5);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = (undefined1 *)puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar3 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      _objc_retain();
      FUN_10507b760(param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105076e10; end: 105076f9f; -[SCProfileChatAttachmentFetchMetadata _fromMap:] */

void FUN_105076e10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126b45c0;
      _objc_alloc();
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c034240();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      _objc_release(lVar5);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  FUN_10507b760(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105076fa0; end: 105077027;  */

void FUN_105076fa0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_10507b760(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105077028; end: 105077283;  */

void FUN_105077028(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b45c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_105079538();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105077284; end: 1050775df;  */

undefined8 * FUN_105077284(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined4 uStack_534;
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined **ppuStack_518;
  undefined4 uStack_510;
  undefined4 uStack_500;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined1 uStack_4a1;
  undefined **ppuStack_4a0;
  undefined4 uStack_498;
  undefined2 uStack_488;
  undefined2 uStack_486;
  undefined1 *puStack_468;
  undefined ***pppuStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_2f8;
  undefined4 uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b45c8);
  if (param_1 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_105079538();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  uStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puStack_220 = (undefined8 *)0x0;
  puStack_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  uStack_224 = 0;
  puVar3 = &uStack_120;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_190,&puStack_220,&uStack_224);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_220 != (undefined8 *)0x0) {
    puStack_218 = puStack_220;
    __ZdlPv();
  }
  plVar6 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puStack_220 = &uStack_148;
  func_0x000100105004(&puStack_220);
  plVar6 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puStack_220 = &uStack_1c0;
  func_0x000100105004(&puStack_220);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  dVar11 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126b45d0;
      FUN_10507b6ec(PTR_PTR_1126b45d0,*(undefined8 *)((long)puVar9 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126b45d8);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_400 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_430,puVar4);
  }
  puVar2 = &uStack_4a1;
  FUN_10507d3bc();
  uStack_510 = 0xf;
  uStack_500 = 0x100;
  ppuStack_518 = &PTR_DAT_110864b98;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_4c8 = 0;
  lStack_4d0 = 0;
  plStack_4b8 = (long *)0x0;
  uStack_4c0 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_486 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_498 = 6;
  uStack_488 = 0x100;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  pppuStack_460 = &ppuStack_518;
  lStack_450 = 0;
  lStack_458 = 0;
  plStack_440 = (long *)0x0;
  uStack_448 = 0;
  plStack_438 = (long *)0x0;
  lStack_530 = 0;
  lStack_528 = 0;
  uStack_520 = 0;
  uStack_534 = 0;
  puVar3 = &uStack_430;
  lStack_4e8 = (long)dVar11;
  puStack_468 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_4a0,&lStack_530,&uStack_534);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_530 != 0) {
    lStack_528 = lStack_530;
    __ZdlPv();
  }
  plVar6 = plStack_438;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  plStack_438 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_440;
  plStack_440 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  plVar6 = plStack_4b0;
  ppuStack_518 = &PTR_DAT_110864b98;
  plStack_4b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_4b8;
  plStack_4b8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_4d0 != 0) {
    lStack_4c8 = lStack_4d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_408);
  _objc_release(uStack_418);
  _objc_release(uStack_420);
  _objc_retain(puVar3);
  puVar9 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar7 = *(undefined8 *)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126b45e0;
      FUN_10507de84(PTR_PTR_1126b45e0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c0f0720(uVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_105077284(puVar4,uVar7);
      _objc_release(uVar7);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar9 != puVar8);
    puVar9 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126b45c8);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_400 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_430,puVar4);
  }
  puVar2 = &uStack_4a1;
  FUN_1050796b0();
  uStack_510 = 0xf;
  uStack_500 = 0x100;
  ppuStack_518 = &PTR_DAT_110864b98;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_4c8 = 0;
  lStack_4d0 = 0;
  plStack_4b8 = (long *)0x0;
  uStack_4c0 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_486 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_498 = 6;
  uStack_488 = 0x100;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  pppuStack_460 = &ppuStack_518;
  lStack_450 = 0;
  lStack_458 = 0;
  plStack_440 = (long *)0x0;
  uStack_448 = 0;
  plStack_438 = (long *)0x0;
  lStack_530 = 0;
  lStack_528 = 0;
  uStack_520 = 0;
  uStack_534 = 0;
  puVar9 = &uStack_430;
  lStack_4e8 = (long)dVar11;
  puStack_468 = puVar2;
  func_0x0001000e77a0(puVar9,&ppuStack_4a0,&lStack_530,&uStack_534);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_530 != 0) {
    lStack_528 = lStack_530;
    __ZdlPv();
  }
  plVar6 = plStack_438;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  plStack_438 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_440;
  plStack_440 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  plVar6 = plStack_4b0;
  ppuStack_518 = &PTR_DAT_110864b98;
  plStack_4b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_4b8;
  plStack_4b8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_4d0 != 0) {
    lStack_4c8 = lStack_4d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_408);
  _objc_release(uStack_418);
  _objc_release(uStack_420);
  _objc_retain(puVar9);
  puVar8 = puVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar9);
      }
      uVar7 = *(undefined8 *)((long)puVar10 * 8);
      puVar5 = PTR_PTR_1126b45d0;
      FUN_10507b6ec(PTR_PTR_1126b45d0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c0f0700(uVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_105077d44(puVar4,uVar7);
      _objc_release(uVar7);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar8 != puVar10);
    puVar8 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar8 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar4);
  __Unwind_Resume();
  *puVar8 = &PTR_FUN_110864b38;
  plVar6 = (long *)puVar8[0xd];
  puVar8[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar8[0xc];
  puVar8[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar8[9] != 0) {
    puVar8[10] = puVar8[9];
    __ZdlPv();
  }
  return puVar8;
}



/* Entry: 1050775e0; end: 105077c63;  */

undefined8 * FUN_1050775e0(double param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_2c4;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_290;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined1 uStack_231;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined2 uStack_218;
  undefined2 uStack_216;
  undefined1 *puStack_1f8;
  undefined ***pppuStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126b45d8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,param_2);
  }
  puVar3 = &uStack_231;
  FUN_10507d3bc();
  uStack_2a0 = 0xf;
  uStack_290 = 0x100;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_258 = 0;
  lStack_260 = 0;
  plStack_248 = (long *)0x0;
  uStack_250 = 0;
  plStack_240 = (long *)0x0;
  uStack_216 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_228 = 6;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_FUN_110864b38;
  pppuStack_1f0 = &ppuStack_2a8;
  lStack_1e0 = 0;
  lStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c4 = 0;
  puVar4 = &uStack_1c0;
  lStack_278 = (long)param_1;
  puStack_1f8 = puVar3;
  func_0x0001000e77a0(puVar4,&ppuStack_230,&lStack_2c0,&uStack_2c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar6 = plStack_1c8;
  ppuStack_230 = &PTR_FUN_110864b38;
  plStack_1c8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  plVar6 = plStack_240;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  plStack_240 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_248;
  plStack_248 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar7 = *(undefined8 *)((long)puVar8 * 8);
      puVar2 = PTR_PTR_1126b45e0;
      FUN_10507de84(PTR_PTR_1126b45e0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c0f0720(uVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_105077284(param_2,uVar7);
      _objc_release(uVar7);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar5 != puVar8);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126b45c8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,param_2);
  }
  puVar3 = &uStack_231;
  FUN_1050796b0();
  uStack_2a0 = 0xf;
  uStack_290 = 0x100;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_258 = 0;
  lStack_260 = 0;
  plStack_248 = (long *)0x0;
  uStack_250 = 0;
  plStack_240 = (long *)0x0;
  uStack_216 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_228 = 6;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_FUN_110864b38;
  pppuStack_1f0 = &ppuStack_2a8;
  lStack_1e0 = 0;
  lStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c4 = 0;
  puVar5 = &uStack_1c0;
  lStack_278 = (long)param_1;
  puStack_1f8 = puVar3;
  func_0x0001000e77a0(puVar5,&ppuStack_230,&lStack_2c0,&uStack_2c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar6 = plStack_1c8;
  ppuStack_230 = &PTR_FUN_110864b38;
  plStack_1c8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  plVar6 = plStack_240;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  plStack_240 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_248;
  plStack_248 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_retain(puVar5);
  puVar8 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      uVar7 = *(undefined8 *)((long)puVar9 * 8);
      puVar2 = PTR_PTR_1126b45d0;
      FUN_10507b6ec(PTR_PTR_1126b45d0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c0f0700(uVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_105077d44(param_2,uVar7);
      _objc_release(uVar7);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar8 != puVar9);
    puVar8 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  __Unwind_Resume();
  *puVar8 = &PTR_FUN_110864b38;
  plVar6 = (long *)puVar8[0xd];
  puVar8[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar8[0xc];
  puVar8[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar8[9] != 0) {
    puVar8[10] = puVar8[9];
    __ZdlPv();
  }
  return puVar8;
}



/* Entry: 105077c64; end: 105077d43;  */

undefined8 * FUN_105077c64(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110864b38;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105077d44; end: 105077e27;  */

void FUN_105077d44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b45e0;
  puVar1 = PTR_PTR_1126b45d8;
  _objc_alloc(PTR_PTR_1126b45d8);
  func_0x00010c032b20();
  FUN_10507de84(puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105077e28; end: 105077eaf;  */

void FUN_105077e28(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_10507def8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105077eb0; end: 105077fa7;  */

void FUN_105077eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_105077fa8(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b45e0;
    FUN_10507da54(PTR_PTR_1126b45e0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar2);
    }
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105077fa8; end: 105078203;  */

void FUN_105077fa8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b45d8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_10507d244();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105078204; end: 105078397;  */

undefined8 * FUN_105078204(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110864b98;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105078398; end: 10507842f;  */

undefined8 * FUN_105078398(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110864b98;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x00010048aee0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105078430; end: 105078443;  */

char * FUN_105078430(undefined8 param_1,int param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  
  pcVar3 = "vector";
  func_0x000104bd47e8();
  lVar5 = *param_3;
  cVar1 = *(char *)(lVar5 + 0x19);
  cVar2 = *(char *)(lVar5 + 0x1a);
  if (param_2 == 0) {
    bVar6 = 1;
  }
  else {
    bVar6 = *(byte *)(lVar5 + 0x1b);
  }
  *(int *)(pcVar3 + 8) = param_2;
  pcVar3[0x18] = '\0';
  pcVar3[0x19] = cVar1;
  pcVar3[0x1a] = cVar2;
  pcVar3[0x1b] = bVar6 & 1;
  *(undefined ***)pcVar3 = &PTR_FUN_110864b38;
  *(long *)(pcVar3 + 0x38) = lVar5;
  pcVar3[0x48] = '\0';
  pcVar3[0x49] = '\0';
  pcVar3[0x4a] = '\0';
  pcVar3[0x4b] = '\0';
  pcVar3[0x4c] = '\0';
  pcVar3[0x4d] = '\0';
  pcVar3[0x4e] = '\0';
  pcVar3[0x4f] = '\0';
  pcVar3[0x40] = '\0';
  pcVar3[0x41] = '\0';
  pcVar3[0x42] = '\0';
  pcVar3[0x43] = '\0';
  pcVar3[0x44] = '\0';
  pcVar3[0x45] = '\0';
  pcVar3[0x46] = '\0';
  pcVar3[0x47] = '\0';
  pcVar3[0x58] = '\0';
  pcVar3[0x59] = '\0';
  pcVar3[0x5a] = '\0';
  pcVar3[0x5b] = '\0';
  pcVar3[0x5c] = '\0';
  pcVar3[0x5d] = '\0';
  pcVar3[0x5e] = '\0';
  pcVar3[0x5f] = '\0';
  pcVar3[0x50] = '\0';
  pcVar3[0x51] = '\0';
  pcVar3[0x52] = '\0';
  pcVar3[0x53] = '\0';
  pcVar3[0x54] = '\0';
  pcVar3[0x55] = '\0';
  pcVar3[0x56] = '\0';
  pcVar3[0x57] = '\0';
  pcVar3[0x68] = '\0';
  pcVar3[0x69] = '\0';
  pcVar3[0x6a] = '\0';
  pcVar3[0x6b] = '\0';
  pcVar3[0x6c] = '\0';
  pcVar3[0x6d] = '\0';
  pcVar3[0x6e] = '\0';
  pcVar3[0x6f] = '\0';
  pcVar3[0x60] = '\0';
  pcVar3[0x61] = '\0';
  pcVar3[0x62] = '\0';
  pcVar3[99] = '\0';
  pcVar3[100] = '\0';
  pcVar3[0x65] = '\0';
  pcVar3[0x66] = '\0';
  pcVar3[0x67] = '\0';
  lVar5 = *param_3;
  *param_3 = 0;
  plVar4 = *(long **)(pcVar3 + 0x60);
  *(long *)(pcVar3 + 0x60) = lVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return pcVar3;
}



/* Entry: 105078444; end: 1050784d7;  */

undefined8 * FUN_105078444(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110864b38;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050784d8; end: 1050786cf; -[SCProfileChatAttachmentDataModel initWithOwnerId:chatAttachmentId:expirationTimestamp:messageId:type:senderUsername:conversationId:messageTimeStamp:snapchatter:info:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1050784d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e5d88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1e8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1ec) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1f0) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1f4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1f8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1fc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b1fc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b200);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b200) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b204) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b208);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b208) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b20c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b20c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1050786d0; end: 1050786f3; -[SCProfileChatAttachmentDataModel copyWithZone:] */

undefined8 FUN_1050786d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050786f4; end: 1050787db; -[SCProfileChatAttachmentDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050786f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b1e8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b1ec);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + _DAT_11271b1f0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b1f4);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11271b1f8);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b1fc);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b200);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + _DAT_11271b204);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b208);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b20c);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105078954:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105078960;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + (long)_DAT_11271b1f0) ==
          *(long *)((long)param_3 + (long)_DAT_11271b1f0) &&
         (*(long *)((long)puVar3 + (long)_DAT_11271b1f8) ==
          *(long *)((long)param_3 + (long)_DAT_11271b1f8))) &&
        (*(long *)((long)puVar3 + (long)_DAT_11271b204) ==
         *(long *)((long)param_3 + (long)_DAT_11271b204))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b1e8);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b1e8)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b1ec);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b1ec)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b1f4);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b1f4)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b1fc);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b1fc)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b200);
              if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b200)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b208);
                if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b208)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271b20c);
                  if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271b20c)) {
                    func_0x00010c071ae0();
                    goto LAB_105078960;
                  }
                  goto LAB_105078954;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105078960:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050787dc; end: 10507897b; -[SCProfileChatAttachmentDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050787dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105078954:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105078960;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + (long)_DAT_11271b1f0) == *(long *)(param_3 + (long)_DAT_11271b1f0) &&
         (*(long *)(param_1 + (long)_DAT_11271b1f8) == *(long *)(param_3 + (long)_DAT_11271b1f8)))
        && (*(long *)(param_1 + (long)_DAT_11271b204) == *(long *)(param_3 + (long)_DAT_11271b204)))
       )) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271b1e8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b1e8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271b1ec);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b1ec)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11271b1f4);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b1f4)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11271b1fc);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b1fc)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_11271b200);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b200)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_11271b208);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b208)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_11271b20c);
                  if (lVar3 != *(long *)(param_3 + (long)_DAT_11271b20c)) {
                    func_0x00010c071ae0();
                    goto LAB_105078960;
                  }
                  goto LAB_105078954;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105078960:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10507897c; end: 10507898b; -[SCProfileChatAttachmentDataModel ownerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10507897c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b1e8);
}



/* Entry: 10507898c; end: 10507899b; -[SCProfileChatAttachmentDataModel chatAttachmentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10507898c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b1ec);
}



/* Entry: 10507899c; end: 1050789ab; -[SCProfileChatAttachmentDataModel expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10507899c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b1f0);
}



/* Entry: 1050789ac; end: 1050789bb; -[SCProfileChatAttachmentDataModel messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050789ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b1f4);
}



/* Entry: 1050789bc; end: 1050789cb; -[SCProfileChatAttachmentDataModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050789bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b1f8);
}



/* Entry: 1050789cc; end: 1050789db; -[SCProfileChatAttachmentDataModel senderUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050789cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b1fc);
}



/* Entry: 1050789dc; end: 1050789eb; -[SCProfileChatAttachmentDataModel conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050789dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b200);
}



/* Entry: 1050789ec; end: 1050789fb; -[SCProfileChatAttachmentDataModel messageTimeStamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050789ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b204);
}



/* Entry: 1050789fc; end: 105078a0b; -[SCProfileChatAttachmentDataModel snapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050789fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b208);
}



/* Entry: 105078a0c; end: 105078a1b; -[SCProfileChatAttachmentDataModel info] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105078a0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b20c);
}



/* Entry: 105078a1c; end: 105078aab; -[SCProfileChatAttachmentDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105078a1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b20c,0);
  _objc_storeStrong(param_1 + _DAT_11271b208,0);
  _objc_storeStrong(param_1 + _DAT_11271b200,0);
  _objc_storeStrong(param_1 + _DAT_11271b1fc,0);
  _objc_storeStrong(param_1 + _DAT_11271b1f4,0);
  _objc_storeStrong(param_1 + _DAT_11271b1ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b1e8,0);
  return;
}



/* Entry: 105078aac; end: 105078bab; -[SCProfileChatAttachmentFetchMetadata initWithOwnerIdentifier:checksum:paginationSequenceNumber:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105078aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5d90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b210);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b210) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b214);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b214) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b218);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b218) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b21c) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105078bac; end: 105078bcf; -[SCProfileChatAttachmentFetchMetadata copyWithZone:] */

undefined8 FUN_105078bac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105078bd0; end: 105078c6b; -[SCProfileChatAttachmentFetchMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105078bd0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b210);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b214);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b218);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11271b21c);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105078d34:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105078d40;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11271b21c) ==
        *(long *)((long)param_3 + (long)_DAT_11271b21c))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b210);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b210)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b214);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b214)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271b218);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271b218)) {
            func_0x00010c071ae0();
            goto LAB_105078d40;
          }
          goto LAB_105078d34;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105078d40:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105078c6c; end: 105078d5b; -[SCProfileChatAttachmentFetchMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105078c6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105078d34:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105078d40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11271b21c) == *(long *)(param_3 + (long)_DAT_11271b21c))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271b210);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b210)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271b214);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b214)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11271b218);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11271b218)) {
            func_0x00010c071ae0();
            goto LAB_105078d40;
          }
          goto LAB_105078d34;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105078d40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105078d5c; end: 105078d6b; -[SCProfileChatAttachmentFetchMetadata ownerIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105078d5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b210);
}



/* Entry: 105078d6c; end: 105078d7b; -[SCProfileChatAttachmentFetchMetadata checksum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105078d6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b214);
}



/* Entry: 105078d7c; end: 105078d8b; -[SCProfileChatAttachmentFetchMetadata paginationSequenceNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105078d7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b218);
}



/* Entry: 105078d8c; end: 105078d9b; -[SCProfileChatAttachmentFetchMetadata expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105078d8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b21c);
}



/* Entry: 105078d9c; end: 105078deb; -[SCProfileChatAttachmentFetchMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105078d9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b218,0);
  _objc_storeStrong(param_1 + _DAT_11271b214,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b210,0);
  return;
}



/* Entry: 105078dec; end: 105078ec3; -[SCProfileChatAttachmentSnapchatterDataModel initWithSnapchatterId:snapchatterUsername:snapchatterDisplayName:] */

undefined1 *
FUN_105078dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5d98;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105078ec4; end: 105078ee7; -[SCProfileChatAttachmentSnapchatterDataModel copyWithZone:] */

undefined8 FUN_105078ec4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105078ee8; end: 105078f67; -[SCProfileChatAttachmentSnapchatterDataModel hash] */

undefined8 * FUN_105078ee8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105079000:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10507900c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10507900c;
          }
          goto LAB_105079000;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10507900c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105078f68; end: 105079027; -[SCProfileChatAttachmentSnapchatterDataModel isEqual:] */

long FUN_105078f68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105079000:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10507900c;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10507900c;
          }
          goto LAB_105079000;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10507900c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105079028; end: 10507902f; -[SCProfileChatAttachmentSnapchatterDataModel snapchatterId] */

undefined8 FUN_105079028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105079030; end: 105079037; -[SCProfileChatAttachmentSnapchatterDataModel snapchatterUsername] */

undefined8 FUN_105079030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105079038; end: 10507903f; -[SCProfileChatAttachmentSnapchatterDataModel snapchatterDisplayName] */

undefined8 FUN_105079038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105079040; end: 10507907b; -[SCProfileChatAttachmentSnapchatterDataModel .cxx_destruct] */

void FUN_105079040(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10507907c; end: 105079167; -[SCProfileChatAttachmentInfoDataModel initWithText:rawText:rawTextStartIndex:rawTextEndIndex:url:] */

undefined1 *
FUN_10507907c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5da0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined4 *)((long)puVar1 + 8) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105079168; end: 10507918b; -[SCProfileChatAttachmentInfoDataModel copyWithZone:] */

undefined8 FUN_105079168(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10507918c; end: 105079217; -[SCProfileChatAttachmentInfoDataModel hash] */

undefined8 * FUN_10507918c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lStack_40 = (long)(int)*(undefined8 *)(param_1 + 8);
  lStack_38 = (long)(int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050792d0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050792dc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1050792dc;
          }
          goto LAB_1050792d0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050792dc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105079218; end: 1050792f7; -[SCProfileChatAttachmentInfoDataModel isEqual:] */

long FUN_105079218(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050792d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050792dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1050792dc;
          }
          goto LAB_1050792d0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050792dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050792f8; end: 1050792ff; -[SCProfileChatAttachmentInfoDataModel text] */

undefined8 FUN_1050792f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105079300; end: 105079307; -[SCProfileChatAttachmentInfoDataModel rawText] */

undefined8 FUN_105079300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105079308; end: 10507930f; -[SCProfileChatAttachmentInfoDataModel rawTextStartIndex] */

undefined4 FUN_105079308(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105079310; end: 105079317; -[SCProfileChatAttachmentInfoDataModel rawTextEndIndex] */

undefined4 FUN_105079310(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105079318; end: 10507931f; -[SCProfileChatAttachmentInfoDataModel url] */

undefined8 FUN_105079318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105079320; end: 10507935b; -[SCProfileChatAttachmentInfoDataModel .cxx_destruct] */

void FUN_105079320(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10507935c; end: 1050793e3; -[SCProfileChatAttachmentSequenceNumberEntry initWithParticipant:sequenceNumber:] */

undefined1 *
FUN_10507935c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5da8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050793e4; end: 105079407; -[SCProfileChatAttachmentSequenceNumberEntry copyWithZone:] */

undefined8 FUN_1050793e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105079408; end: 10507947b; -[SCProfileChatAttachmentSequenceNumberEntry hash] */

undefined8 * FUN_105079408(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105079500;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_105079500;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_105079500;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_105079500:
  _objc_release(param_3);
  return puVar5;
}


