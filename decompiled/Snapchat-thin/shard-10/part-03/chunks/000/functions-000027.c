/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d6b644; end: 107d6b6f3; -[SCNativeLocalMediaReference initWithCoder:] */

undefined1 * FUN_107d6b644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faea8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d6b6f4; end: 107d6b783; -[SCNativeLocalMediaReference initWithMediaId:mediaType:hasAudio:] */

undefined1 *
FUN_107d6b6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126faea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d6b784; end: 107d6b7a7; -[SCNativeLocalMediaReference copyWithZone:] */

undefined8 FUN_107d6b784(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d6b7a8; end: 107d6b81b; -[SCNativeLocalMediaReference encodeWithCoder:] */

void FUN_107d6b7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ebbe58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ebbe78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d6b81c; end: 107d6b897; -[SCNativeLocalMediaReference hash] */

undefined8 * FUN_107d6b81c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d6b92c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_107d6b92c;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d6b92c;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_107d6b92c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 107d6b898; end: 107d6b947; -[SCNativeLocalMediaReference isEqual:] */

long FUN_107d6b898(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d6b92c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_107d6b92c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d6b92c;
    }
  }
  lVar3 = 1;
LAB_107d6b92c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d6b948; end: 107d6b94f; -[SCNativeLocalMediaReference mediaId] */

undefined8 FUN_107d6b948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d6b950; end: 107d6b957; -[SCNativeLocalMediaReference mediaType] */

undefined8 FUN_107d6b950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d6b958; end: 107d6b95f; -[SCNativeLocalMediaReference hasAudio] */

undefined1 FUN_107d6b958(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d6b960; end: 107d6b96b; -[SCNativeLocalMediaReference .cxx_destruct] */

void FUN_107d6b960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d6b96c; end: 107d6baa7; -[SCPlatformLocalMediaReference initWithCoder:] */

undefined1 * FUN_107d6b96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faeb0;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d6baa8; end: 107d6bbb3; -[SCPlatformLocalMediaReference initWithNativeLocalMediaReference:mediaId:mediaListId:associatedValue:mediaReferenceType:mediaUploadMethod:mediaQualityType:mediaRole:] */

undefined1 *
FUN_107d6baa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126faeb0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d6bbb4; end: 107d6bbd7; -[SCPlatformLocalMediaReference copyWithZone:] */

undefined8 FUN_107d6bbb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d6bbd8; end: 107d6bcaf; -[SCPlatformLocalMediaReference encodeWithCoder:] */

void FUN_107d6bbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ebbe98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ebbe58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ebbeb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ebbed8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ebbef8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ebbf18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ebbf38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110ebbf58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d6bcb0; end: 107d6bd57; -[SCPlatformLocalMediaReference hash] */

undefined8 * FUN_107d6bcb0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d6be40:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d6be4c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[3] == param_3[3] && (puVar3[5] == param_3[5])) && (puVar3[6] == param_3[6])) &&
        ((puVar3[7] == param_3[7] && (puVar3[8] == param_3[8])))))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_107d6be4c;
          }
          goto LAB_107d6be40;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d6be4c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d6bd58; end: 107d6be67; -[SCPlatformLocalMediaReference isEqual:] */

long FUN_107d6bd58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d6be40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d6be4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107d6be4c;
          }
          goto LAB_107d6be40;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d6be4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d6be68; end: 107d6be6f; -[SCPlatformLocalMediaReference nativeLocalMediaReference] */

undefined8 FUN_107d6be68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d6be70; end: 107d6be77; -[SCPlatformLocalMediaReference mediaId] */

undefined8 FUN_107d6be70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d6be78; end: 107d6be7f; -[SCPlatformLocalMediaReference mediaListId] */

undefined8 FUN_107d6be78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d6be80; end: 107d6be87; -[SCPlatformLocalMediaReference associatedValue] */

undefined8 FUN_107d6be80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d6be88; end: 107d6be8f; -[SCPlatformLocalMediaReference mediaReferenceType] */

undefined8 FUN_107d6be88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d6be90; end: 107d6be97; -[SCPlatformLocalMediaReference mediaUploadMethod] */

undefined8 FUN_107d6be90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d6be98; end: 107d6be9f; -[SCPlatformLocalMediaReference mediaQualityType] */

undefined8 FUN_107d6be98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d6bea0; end: 107d6bea7; -[SCPlatformLocalMediaReference mediaRole] */

undefined8 FUN_107d6bea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d6bea8; end: 107d6bee3; -[SCPlatformLocalMediaReference .cxx_destruct] */

void FUN_107d6bea8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d6bee4; end: 107d6beef; -[SCMessagePresendUploadPluginScope .cxx_destruct] */

void FUN_107d6bee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d6bef0; end: 107d6bf53;  */

undefined8 FUN_107d6bef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c157500(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d6bf54; end: 107d6c0ab;  */

long FUN_107d6bf54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  func_0x00010c131740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar3 = uVar7;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf529e0();
          lVar8 = (long)(int)uVar7;
          goto LAB_107d6c05c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar8 = 0;
  }
LAB_107d6c05c:
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(lVar5);
    func_0x00010c0e9d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010bf4b900();
    _objc_release(lVar5);
    _objc_release(param_2);
    return lVar8;
  }
  return lVar8;
}



/* Entry: 107d6c0ac; end: 107d6c10f;  */

undefined8 FUN_107d6c0ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e9d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d6c110; end: 107d6c22f;  */

undefined ** FUN_107d6c110(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  ppuVar5 = (undefined **)0x0;
  if (lVar3 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        iVar2 = (int)*(undefined8 *)(lVar6 * 8);
        func_0x00010c071ae0();
        if (iVar2 == 0) {
          ppuVar5 = (undefined **)0x1;
          goto LAB_107d6c1e8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    ppuVar5 = (undefined **)0x0;
  }
LAB_107d6c1e8:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  if (0xc < param_2) {
    return &PTR____CFConstantStringClassReference_110e8dd78;
  }
  return (undefined **)(&PTR_PTR_110a0b4b0)[param_2];
}



/* Entry: 107d6c230; end: 107d6c253;  */

undefined ** FUN_107d6c230(ulong param_1)

{
  if (param_1 < 0xd) {
    return (undefined **)(&PTR_PTR_110a0b4b0)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110e8dd78;
}



/* Entry: 107d6c254; end: 107d6c323; -[SCMessagingUUID toString] */

void FUN_107d6c254(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x00010bfe5ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c057e80(puVar3,param_2,lVar1);
    _objc_release(param_1);
    puVar4 = puVar3;
    func_0x00010bdc3580(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d6c324; end: 107d6c3f7; +[SCCreativeToolsVideoTrackingUtils trajectoryManagerForTrajectoryState:isTimedTrajectory:videoTrackingServices:videoTracker:bounceEnabled:videoPlaybackFeature:] */

void FUN_107d6c324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d6c3f8;
  puStack_60 = &UNK_110a0b518;
  uStack_58 = param_8;
  _objc_retain(param_8);
  func_0x00010bece460(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d6c3f8; end: 107d6c403;  */

void FUN_107d6c3f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addVideoPlaybackSessionListener__11259cbf0,
             param_2);
  return;
}



/* Entry: 107d6c404; end: 107d6c4d7; +[SCCreativeToolsVideoTrackingUtils trajectoryManagerForTrajectoryState:isTimedTrajectory:videoTrackingServices:videoTracker:bounceEnabled:videoPlayback:] */

void FUN_107d6c404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d6c4d8;
  puStack_60 = &UNK_110a0b518;
  uStack_58 = param_8;
  _objc_retain(param_8);
  func_0x00010bece460(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d6c4d8; end: 107d6c4e3;  */

void FUN_107d6c4d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008,param_2);
  return;
}



/* Entry: 107d6c4e4; end: 107d6c6e3; +[SCCreativeToolsVideoTrackingUtils _trajectoryManagerForTrajectoryState:isTimedTrajectory:videoTrackingServices:videoTracker:bounceEnabled:listenerHandlingBlock:] */

void FUN_107d6c4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_88,lVar1);
  }
  _CMTimeGetSeconds(&uStack_88);
  _objc_release(lVar1);
  uVar2 = param_6;
  func_0x00010bfe8740(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if (param_5 == 0) {
    func_0x00010b73c82c(param_1,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d8ce0();
  }
  else {
    param_8 = uVar2;
    func_0x00010b73c8a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d9200();
  }
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c41f0;
  _objc_alloc(PTR_PTR_1126c41f0);
  func_0x00010c0553e0();
  _objc_release(param_4);
  uVar3 = param_6;
  func_0x00010c26a1e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d8be0();
  _objc_release(uVar6);
  (**(code **)(param_9 + 0x10))(param_9,uVar4);
  _objc_release(param_9);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107d6c6e4; end: 107d6c6ef; -[SCUserPreferenceTimeProviderServices .cxx_destruct] */

void FUN_107d6c6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d6c6f0; end: 107d6c82f; +[SCStickerContainer renderableEmojiWithEmoji:] */

void FUN_107d6c6f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b61c0;
  func_0x00010bf61040();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107d6c830;
  puStack_40 = &UNK_110842e18;
  _objc_retain();
  puStack_38 = puVar1;
  if (lRam0000000113727a60 != -1) {
    func_0x00010002a2fc(0x113727a60,&puStack_58);
  }
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = uRam0000000113727a58;
    func_0x00010bf4b900();
    uVar2 = param_3;
    if ((int)uVar3 == 0) {
      puVar4 = PTR_PTR_1126b0d00;
      func_0x00010c27fcc0(PTR_PTR_1126b0d00);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0();
      if ((uVar5 & 1) == 0) {
        func_0x00010c27fca0(PTR_PTR_1126b0d00);
      }
      _objc_retain(param_3);
      _objc_release(puVar4);
    }
    else {
      _objc_retain(param_3);
    }
  }
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d6c830; end: 107d6cadf;  */

undefined *
FUN_107d6c830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
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
  undefined1 auStack_1f0 [384];
  long lStack_70;
  
  puVar10 = &uStack_2b0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar2 = *(long *)(param_5 + 0x20);
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar14 = *plStack_220;
    do {
      lVar15 = 0;
      do {
        if (*plStack_220 != lVar14) {
          _objc_enumerationMutation(lVar2);
        }
        lVar3 = *(long *)(lStack_228 + lVar15 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        func_0x00010bf8e2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar16 = *plStack_260;
          do {
            lVar17 = 0;
            do {
              if (*plStack_260 != lVar16) {
                _objc_enumerationMutation(lVar3);
              }
              uVar5 = *(undefined8 *)(lStack_268 + lVar17 * 8);
              func_0x00010c26b700(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(uVar5);
              lVar17 = lVar17 + 1;
            } while (lVar4 != lVar17);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar12);
      lVar12 = lVar2;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar2);
  uVar5 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  puVar6 = PTR_PTR_1126b61c0;
  func_0x00010bfb7800();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_1f0;
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar12 = *plStack_2a0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != lVar12) {
          _objc_enumerationMutation(puVar6);
        }
        uVar8 = *(undefined8 *)(lStack_2a8 + (long)puVar13 * 8);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar8);
        puVar13 = puVar13 + 1;
      } while (puVar7 != puVar13);
      puVar11 = auStack_1f0;
      puVar7 = puVar6;
      puVar10 = &uStack_2b0;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  uVar8 = puRam0000000113727a58;
  puRam0000000113727a58 = puVar6;
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_310;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puStack_308 = PTR_PTR_1126faec8;
  puStack_310 = puVar1;
  _objc_msgSendSuper2(&puStack_310,PTR_s_init_1125d9248);
  if (ppuVar9 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar5,param_2,param_3,param_4);
    uVar8 = *(undefined8 *)((long)ppuVar9 + 0x30);
    *(undefined **)((long)ppuVar9 + 0x30) = puVar1;
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar5,param_2,param_3,param_4);
    uVar5 = *(undefined8 *)((long)ppuVar9 + 0x40);
    *(undefined **)((long)ppuVar9 + 0x40) = puVar1;
    _objc_release(uVar5);
    func_0x00010c21e900(*(undefined8 *)((long)ppuVar9 + 0x30));
    func_0x00010c21e900(*(undefined8 *)((long)ppuVar9 + 0x40));
    _objc_retain(puVar10);
    uVar5 = *(undefined8 *)((long)ppuVar9 + 0x18);
    *(undefined8 **)((long)ppuVar9 + 0x18) = puVar10;
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)ppuVar9 + 0x20);
    *(undefined **)((long)ppuVar9 + 0x20) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar9 + 8) = param_3;
    *(undefined8 *)((long)ppuVar9 + 0x10) = param_4;
    _objc_retain(puVar11);
    uVar5 = *(undefined8 *)((long)ppuVar9 + 0x28);
    *(undefined1 **)((long)ppuVar9 + 0x28) = puVar11;
    _objc_release(uVar5);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  return (undefined *)ppuVar9;
}



/* Entry: 107d6cae0; end: 107d6cc37; -[SCStickerContainer initWithFrame:stickerInjector:itemViewService:] */

undefined1 *
FUN_107d6cae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126faec8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + 0x30));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + 0x40));
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107d6cc38; end: 107d6cc8f; -[SCStickerContainer stickerViewsWithType:] */

void FUN_107d6cc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_107d6cc90;
  puStack_20 = &UNK_1108e8d00;
  uStack_18 = param_3;
  func_0x00010be165e0(param_1,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d6cc90; end: 107d6ccd7;  */

bool FUN_107d6cc90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c253880(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c27dd80();
  _objc_release(param_2);
  return lVar2 == lVar1;
}



/* Entry: 107d6ccd8; end: 107d6ce03; -[SCStickerContainer hasNonTrackingStaticSticker] */

long FUN_107d6ccd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar3 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        puVar4 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar5 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar4);
        if (((uVar5 & 1) != 0) && (func_0x00010c06c000(), (int)uVar7 == 0)) {
          lVar8 = 1;
          goto LAB_107d6cdc0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar8 = 0;
  }
LAB_107d6cdc0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar8;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(lVar2 + 0x30);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar3 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        puVar4 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar5 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar4);
        if (((uVar5 & 1) != 0) && (func_0x00010c06c000(), (uVar7 & 1) != 0)) {
          lVar8 = 1;
          goto LAB_107d6ceec;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar8 = 0;
  }
LAB_107d6ceec:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x00010be165e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    return lVar8;
  }
  return lVar8;
}



/* Entry: 107d6ce04; end: 107d6cf2f; -[SCStickerContainer hasNonTrackingAnimatedSticker] */

long FUN_107d6ce04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar3 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        puVar4 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar5 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar4);
        if (((uVar5 & 1) != 0) && (func_0x00010c06c000(), (uVar7 & 1) != 0)) {
          lVar8 = 1;
          goto LAB_107d6ceec;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar8 = 0;
  }
LAB_107d6ceec:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x00010be165e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    return lVar8;
  }
  return lVar8;
}



/* Entry: 107d6cf30; end: 107d6cf73; -[SCStickerContainer animatedStickerCount] */

undefined8 FUN_107d6cf30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be165e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a0b548);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d6cf74; end: 107d6cf7b;  */

void FUN_107d6cf74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isAnimated_1125f8a10);
  return;
}



/* Entry: 107d6cf7c; end: 107d6d17f; -[SCStickerContainer drawStaticStickersScreenshotImageInCurrentContextWithRect:] */

void FUN_107d6cf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_5;
  func_0x00010bfd97e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010be0c860();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar5 = *plStack_1a0;
      do {
        uVar6 = 0;
        do {
          if (*plStack_1a0 != lVar5) {
            _objc_enumerationMutation(uVar1);
          }
          func_0x00010c109560(*(undefined8 *)(lStack_1a8 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_6,&uStack_1b0,auStack_e8,0x10);
      } while (uVar2 != 0);
    }
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 != 0) {
      func_0x00010c1cbe20(*(undefined8 *)(param_5 + 0x30));
      func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x30));
    }
    func_0x00010bf89ce0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x30),param_6,1);
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(uVar1);
    uVar2 = uVar1;
    func_0x00010bf52a60(uVar1,param_6,&uStack_1f0,auStack_168,0x10);
    if (uVar2 != 0) {
      lVar5 = *plStack_1e0;
      do {
        uVar6 = 0;
        do {
          if (*plStack_1e0 != lVar5) {
            _objc_enumerationMutation(uVar1);
          }
          func_0x00010c13c180(*(undefined8 *)(lStack_1e8 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_6,&uStack_1f0,auStack_168,0x10);
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 != 0) {
      func_0x00010c1cbe20(*(undefined8 *)(param_5 + 0x30));
      func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x30));
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(uVar1 + 0x30);
  func_0x00010c261580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d6d180; end: 107d6d1d3; -[SCStickerContainer _exportRenderableSubviews] */

void FUN_107d6d180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c261580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d6d1d4; end: 107d6d28f;  */

void FUN_107d6d1d4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = param_2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = uVar4, func_0x00010010fab4(uVar4,PTR_DAT_1126a5a10), (uVar3 & 1) != 0))
    goto LAB_107d6d26c;
    _objc_release(uVar4);
  }
  uVar4 = 0;
LAB_107d6d26c:
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d6d290; end: 107d6d587; -[SCStickerContainer videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:] */

void FUN_107d6d290(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50200(param_1);
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar12 = *plStack_150;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(ulong *)(lStack_158 + lVar9 * 8);
        puVar3 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar4 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar3);
        if ((uVar4 & 1) != 0) {
          _objc_retain(uVar11);
          func_0x00010bf20c00(uVar11);
          uStack_190 = 0;
          uStack_180 = 0x3010000000;
          pcStack_178 = "";
          uStack_168 = *(undefined8 *)(param_1 + 0x10);
          uStack_170 = *(undefined8 *)(param_1 + 8);
          puVar3 = PTR_PTR_1126ae560;
          puStack_188 = &uStack_190;
          _objc_opt_new();
          uVar4 = uVar11;
          func_0x00010c2541a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar11);
          puVar5 = puVar3;
          _objc_retain(puVar3);
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(uVar4);
          _objc_release(puVar5);
          _objc_release(uVar4);
          puVar5 = puVar3;
          func_0x00010bfbc3e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(uVar11);
          _objc_release(puVar3);
          __Block_object_dispose(&uStack_190,8);
          _objc_release(uVar11);
        }
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar2;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_190,8);
  __Unwind_Resume();
  uVar8 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(uVar7);
  func_0x00010c26a1a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  if (*(double *)(puVar1 + 0x38) != INFINITY) {
    lVar10 = *(long *)(*(long *)(puVar1 + 0x30) + 8);
    uVar13 = *(undefined8 *)(lVar10 + 0x20);
    uVar14 = *(undefined8 *)(lVar10 + 0x28);
    func_0x00010b690934();
    *(undefined8 *)(lVar10 + 0x20) = uVar13;
    *(undefined8 *)(lVar10 + 0x28) = uVar14;
  }
  puVar3 = PTR_PTR_1126c41f0;
  _objc_alloc(PTR_PTR_1126c41f0);
  uVar13 = uVar8;
  func_0x00010c2723c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010bf45e20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0553e0(puVar3);
  _objc_release(uVar14);
  _objc_release(uVar13);
  puVar5 = PTR_PTR_1126c41f8;
  func_0x00010c279740(PTR_PTR_1126c41f8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  func_0x00010c02fc00(*(double *)(puVar1 + 0x40) /
                      *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x20),
                      *(double *)(puVar1 + 0x48) /
                      *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x28));
  _objc_release(uVar7);
  func_0x00010bf43d60(*(undefined8 *)(puVar1 + 0x28));
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107d6d588; end: 107d6d6db;  */

void FUN_107d6d588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c26a1a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(double *)(param_1 + 0x38) != INFINITY) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010b690934();
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
  }
  puVar1 = PTR_PTR_1126c41f0;
  _objc_alloc(PTR_PTR_1126c41f0);
  uVar6 = uVar4;
  func_0x00010c2723c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf45e20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0553e0(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c41f8;
  func_0x00010c279740(PTR_PTR_1126c41f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c02fc00(*(double *)(param_1 + 0x40) / *(double *)(lVar5 + 0x20),
                      *(double *)(param_1 + 0x48) / *(double *)(lVar5 + 0x28));
  _objc_release(param_2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107d6d6dc; end: 107d6d9af; -[SCStickerContainer videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:] */

undefined * FUN_107d6d6dc(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _NSStringFromSelector(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50200(param_3);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 0.0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar2 = *(long *)(param_3 + 0x30);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_160;
  lVar9 = lVar2;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar12 = *plStack_150;
    do {
      lVar10 = 0;
      do {
        if (*plStack_150 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(ulong *)(lStack_158 + lVar10 * 8);
        puVar7 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar3 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar7);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf20c00(uVar11);
          uStack_190 = 0;
          uStack_180 = 0x3010000000;
          pcStack_178 = "";
          uStack_168 = *(undefined8 *)(param_3 + 0x10);
          dVar15 = *(double *)(param_3 + 8);
          puVar7 = PTR_PTR_1126ae560;
          puStack_188 = &uStack_190;
          dStack_170 = dVar15;
          _objc_opt_new();
          func_0x00010c2541a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar7;
          _objc_retain(puVar7);
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(uVar11);
          _objc_release(puVar4);
          _objc_release(uVar11);
          puVar4 = puVar7;
          func_0x00010bfbc3e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
          _objc_release(puVar7);
          _objc_release(puVar7);
          __Block_object_dispose(&uStack_190,8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      puVar8 = &uStack_160;
      lVar9 = lVar2;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar2);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = (undefined *)0x8;
  __Block_object_dispose(&uStack_190);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar7 == (undefined *)0x0) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar8);
      puVar6 = puVar8;
    }
    func_0x00010bf43ca0(*(undefined8 *)(puVar1 + 0x20));
  }
  else {
    func_0x00010bf345e0(*(undefined8 *)(puVar1 + 0x28));
    dVar16 = *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x20);
    func_0x00010bf345e0(*(undefined8 *)(puVar1 + 0x28));
    dVar14 = *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x28);
    if (*(double *)(puVar1 + 0x38) == INFINITY) {
      dVar15 = dVar15 / dVar16;
      dVar16 = param_2 / dVar14;
    }
    else {
      dVar13 = *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x20);
      dVar16 = dVar13 * 0.5;
      dVar17 = dVar14 * 0.5;
      func_0x00010b690934();
      func_0x00010b690acc();
      func_0x00010b690910(dVar16,dVar17);
      dVar15 = dVar16;
      param_2 = dVar17;
      func_0x00010bf345e0(*(undefined8 *)(puVar1 + 0x28));
      dVar15 = (dVar15 - dVar16) / dVar13;
      func_0x00010bf345e0(*(undefined8 *)(puVar1 + 0x28));
      param_2 = param_2 - dVar17;
      lVar2 = *(long *)(*(long *)(puVar1 + 0x30) + 8);
      dVar16 = param_2 / dVar14;
      *(double *)(lVar2 + 0x20) = dVar13;
      *(double *)(lVar2 + 0x28) = dVar14;
    }
    puVar6 = (undefined8 *)PTR_PTR_1126b2700;
    _objc_alloc();
    func_0x00010c14e120(*(undefined8 *)(puVar1 + 0x28));
    dVar14 = param_2;
    func_0x00010c141a80(*(undefined8 *)(puVar1 + 0x28));
    func_0x00010c055500(dVar15,dVar16,param_2,dVar14);
    puVar4 = PTR_PTR_1126c41f8;
    func_0x00010c252d00(PTR_PTR_1126c41f8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c4200;
    _objc_alloc(PTR_PTR_1126c4200);
    func_0x00010c02fc00(*(double *)(puVar1 + 0x40) /
                        *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x20),
                        *(double *)(puVar1 + 0x48) /
                        *(double *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x28));
    func_0x00010bf43d60(*(undefined8 *)(puVar1 + 0x20));
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(puVar7 + 0x30);
  func_0x00010c261580(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  func_0x00010bf529e0();
  lVar10 = *(long *)(puVar7 + 0x40);
  func_0x00010c261580(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf529e0();
  _objc_release(lVar10);
  _objc_release(lVar12);
  return (undefined *)(lVar2 + lVar9);
}



/* Entry: 107d6d9b0; end: 107d6dc47;  */

long FUN_107d6d9b0(double param_1,double param_2,long param_3,long param_4,undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_4 == 0) {
    if (param_5 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      _objc_retain(param_5);
      puVar3 = param_5;
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
  }
  else {
    func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x28));
    dVar11 = *(double *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x20);
    func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x28));
    lVar7 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    dVar9 = *(double *)(lVar7 + 0x28);
    if (*(double *)(param_3 + 0x38) == INFINITY) {
      param_1 = param_1 / dVar11;
      dVar11 = param_2 / dVar9;
    }
    else {
      dVar8 = *(double *)(lVar7 + 0x20);
      dVar10 = dVar8 * 0.5;
      dVar12 = dVar9 * 0.5;
      func_0x00010b690934();
      func_0x00010b690acc();
      func_0x00010b690910(dVar10,dVar12);
      dVar11 = dVar10;
      param_2 = dVar12;
      func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x28));
      param_1 = (dVar11 - dVar10) / dVar8;
      func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x28));
      param_2 = param_2 - dVar12;
      lVar7 = *(long *)(*(long *)(param_3 + 0x30) + 8);
      dVar11 = param_2 / dVar9;
      *(double *)(lVar7 + 0x20) = dVar8;
      *(double *)(lVar7 + 0x28) = dVar9;
    }
    puVar3 = PTR_PTR_1126b2700;
    _objc_alloc();
    func_0x00010c14e120(*(undefined8 *)(param_3 + 0x28));
    dVar9 = param_2;
    func_0x00010c141a80(*(undefined8 *)(param_3 + 0x28));
    func_0x00010c055500(param_1,dVar11,param_2,dVar9);
    puVar2 = PTR_PTR_1126c41f8;
    func_0x00010c252d00(PTR_PTR_1126c41f8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c4200;
    _objc_alloc(PTR_PTR_1126c4200);
    lVar7 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    func_0x00010c02fc00(*(double *)(param_3 + 0x40) / *(double *)(lVar7 + 0x20),
                        *(double *)(param_3 + 0x48) / *(double *)(lVar7 + 0x28));
    func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_4;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_4 + 0x30);
  func_0x00010c261580(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf529e0();
  lVar5 = *(long *)(param_4 + 0x40);
  func_0x00010c261580(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  return lVar7 + lVar6;
}



/* Entry: 107d6dc48; end: 107d6dcb7; -[SCStickerContainer stickerCount] */

long FUN_107d6dc48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c261580(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c261580(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar4 + lVar2;
}



/* Entry: 107d6dcb8; end: 107d6dcfb; -[SCStickerContainer stickerEditCount] */

undefined8 FUN_107d6dcb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be165e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a0b5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d6dcfc; end: 107d6dd17;  */

uint FUN_107d6dcfc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0722a0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107d6dd18; end: 107d6de6f; -[SCStickerContainer unfinishedTrackingStickerCount] */

long FUN_107d6dd18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        puVar4 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        if ((uVar5 & 1) != 0) {
          func_0x00010c26a1a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010c0816e0();
          _objc_release(uVar8);
          lVar7 = lVar7 + (ulong)((uint)uVar5 ^ 1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be165f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return lVar2;
  }
  return lVar7;
}



/* Entry: 107d6de70; end: 107d6de77; -[SCStickerContainer stickerViews] */

void FUN_107d6de70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be165f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__filteredStickerViewsUsingBlock__112563318,0)
  ;
  return;
}



/* Entry: 107d6de78; end: 107d6e0cf; -[SCStickerContainer _filteredStickerViewsUsingBlock:] */

undefined * FUN_107d6de78(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined **unaff_x26;
  ulong uVar20;
  undefined **unaff_x27;
  long unaff_x28;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_698;
  undefined8 uStack_690;
  code *pcStack_688;
  undefined *puStack_680;
  undefined1 *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined1 *puStack_660;
  undefined8 uStack_658;
  undefined1 auStack_650 [8];
  undefined *puStack_648;
  undefined8 uStack_640;
  code *pcStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined1 auStack_608 [8];
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [8];
  undefined *puStack_5e8;
  undefined8 uStack_5e0;
  code *pcStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_4f8;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  long lStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined *puStack_370;
  undefined1 *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  ulong uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_260;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [256];
  long lStack_68;
  
  puVar4 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (ulong *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar1 = *(undefined ***)(param_1 + 0x40);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  ppuVar19 = &PTR_PTR_1126ba000;
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_1a0;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar17 = *(ulong *)(lStack_1a8 + (long)unaff_x27 * 8);
        puVar14 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar12 = uVar17;
        _objc_opt_isKindOfClass(uVar17,puVar14);
        if (((uVar12 & 1) != 0) &&
           ((param_3 == 0 ||
            (lVar18 = param_3, (**(code **)(param_3 + 0x10))(param_3,uVar17), (int)lVar18 != 0)))) {
          func_0x00010befa120(puVar15);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  ppuVar1 = *(undefined ***)(param_1 + 0x30);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_168;
  uVar12 = 0x10;
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar18 = *plStack_1e0;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if (*plStack_1e0 != lVar18) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar17 = *(ulong *)(lStack_1e8 + (long)unaff_x26 * 8);
        puVar14 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar12 = uVar17;
        _objc_opt_isKindOfClass(uVar17,puVar14);
        if (((uVar12 & 1) != 0) &&
           ((param_3 == 0 ||
            (lVar11 = param_3, (**(code **)(param_3 + 0x10))(param_3,uVar17), (int)lVar11 != 0)))) {
          func_0x00010befa120(puVar15);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar2 != unaff_x26);
      puVar5 = auStack_168;
      uVar12 = 0x10;
      ppuVar2 = ppuVar1;
      puVar4 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  puVar14 = puVar15;
  func_0x00010bf51e00();
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_107d6e0d0;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_330 = uVar12;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_328 = puVar15;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar4 != 0) {
    puVar4 = *(undefined8 **)(param_3 + 0x30);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(puVar4);
  }
  if ((int)puVar5 != 0) {
    puVar5 = *(undefined1 **)(param_3 + 0x40);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(puVar5);
  }
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  _objc_retain(puVar3);
  uVar12 = 0;
  puVar15 = puVar3;
  func_0x00010bf52a60();
  if (puVar15 != (undefined *)0x0) {
    unaff_x28 = *plStack_310;
    do {
      puVar4 = (undefined8 *)PTR_s_supportedFlows_112676688;
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_310 != unaff_x28) {
          _objc_enumerationMutation(puVar3);
        }
        ppuVar19 = *(undefined ***)(lStack_318 + (long)puVar14 * 8);
        puVar6 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        ppuVar2 = ppuVar19;
        _objc_opt_isKindOfClass(ppuVar19,puVar6);
        if (((ulong)ppuVar2 & 1) != 0) {
          _objc_retain(ppuVar19);
          ppuVar2 = ppuVar19;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = ppuVar2;
          _objc_opt_respondsToSelector();
          _objc_release(ppuVar2);
          if (((ulong)unaff_x27 & 1) == 0) {
LAB_107d6e29c:
            func_0x000100841590(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
            unaff_x26 = ppuVar19;
            func_0x00010c255080();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x26 != (undefined **)0x0) {
              func_0x00010befa120(puStack_328);
            }
            _objc_release(unaff_x26);
          }
          else {
            ppuVar2 = ppuVar19;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = ppuVar2;
            func_0x00010c263180();
            _objc_release(ppuVar2);
            unaff_x27 = (undefined **)0x0;
            if (ppuVar1 == (undefined **)0x0) goto LAB_107d6e29c;
            unaff_x26 = ppuVar19;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = unaff_x26;
            func_0x00010c263180();
            unaff_x27 = (undefined **)((ulong)ppuVar2 & uStack_330);
            _objc_release(unaff_x26);
            if (unaff_x27 != (undefined **)0x0) goto LAB_107d6e29c;
          }
          _objc_release(ppuVar19);
        }
        puVar14 = puVar14 + 1;
      } while (puVar15 != puVar14);
      uVar12 = 0;
      puVar15 = puVar3;
      func_0x00010bf52a60();
      puVar5 = (undefined1 *)0x0;
    } while (puVar15 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar15 = puStack_328;
  puVar14 = puStack_328;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar15;
    func_0x00010bf51e00();
  }
  _objc_release(puVar3);
  puVar6 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar10 = &uStack_460;
  puStack_348 = puVar15;
  pcStack_338 = FUN_107d6e37c;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  plStack_450 = (long *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  lStack_390 = unaff_x28;
  ppuStack_388 = unaff_x27;
  ppuStack_380 = unaff_x26;
  ppuStack_378 = ppuVar19;
  puStack_370 = (undefined *)puVar4;
  puStack_368 = puVar5;
  lStack_360 = param_3;
  puStack_358 = puVar14;
  puStack_350 = puVar3;
  ppuStack_340 = &puStack_200;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_418;
  uVar13 = 0x10;
  puVar15 = puVar6;
  func_0x00010bf52a60();
  if (puVar15 != (undefined *)0x0) {
    lVar18 = *plStack_450;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_450 != lVar18) {
          _objc_enumerationMutation(puVar6);
        }
        uVar17 = *(ulong *)(lStack_458 + (long)puVar14 * 8);
        if (((uVar12 & 1) == 0) && (uVar20 = uVar17, func_0x00010c081660(), (uVar20 & 1) == 0)) {
          uVar20 = uVar17;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar20;
          func_0x00010c27dd80();
          _objc_release(uVar20);
          if (uVar7 != 5) goto LAB_107d6e450;
        }
        else {
LAB_107d6e450:
          func_0x00010c1a7f60(uVar17);
        }
        puVar14 = puVar14 + 1;
      } while (puVar15 != puVar14);
      puVar5 = auStack_418;
      uVar13 = 0x10;
      puVar15 = puVar6;
      puVar10 = &uStack_460;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return puVar6;
  }
  ___stack_chk_fail();
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  _objc_retain(uVar13);
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = 0;
  lStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5a8 = 0;
  plStack_5b0 = (long *)0x0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  puVar14 = puVar6;
  func_0x00010bdca0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar18 = *plStack_5b0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_5b0 != lVar18) {
          _objc_enumerationMutation(puVar14);
        }
        puVar8 = PTR_PTR_1126ba960;
        uVar20 = *(ulong *)(lStack_5b8 + (long)puVar16 * 8);
        _objc_retain(uVar20);
        _objc_opt_class(puVar8);
        uVar17 = uVar20;
        _objc_opt_isKindOfClass(uVar20,puVar8);
        uVar12 = uVar20;
        if ((uVar17 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar20);
        if (uVar12 != 0) {
          uVar17 = uVar20;
          func_0x00010c074760();
          if ((uVar17 & 1) == 0) {
            func_0x00010bf80b80(uVar20);
          }
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c280560(uVar20);
          func_0x00010c0df780(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar15);
          _objc_release(puVar8);
        }
        _objc_release(uVar12);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar3 = puVar14;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  func_0x00010bf20c00(*(undefined8 *)(puVar6 + 0x30));
  _CGRectGetWidth();
  uVar22 = uVar21;
  func_0x00010bf20c00(*(undefined8 *)(puVar6 + 0x30));
  _CGRectGetHeight();
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_5e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_5e0 = 0xc2000000;
  pcStack_5d8 = FUN_107d6e8fc;
  puStack_5d0 = &UNK_110a0b5f8;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_5c8 = puVar6;
  func_0x00010c1063a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)puVar10;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_5f0,puVar6);
  puStack_648 = puVar14;
  uStack_640 = 0xc2000000;
  pcStack_638 = FUN_107d6e9ac;
  puStack_630 = &UNK_110a0b688;
  uStack_600 = uVar21;
  uStack_5f8 = uVar22;
  _objc_retain(puVar15);
  puStack_628 = puVar15;
  puStack_620 = puVar6;
  _objc_retain(puVar16);
  puStack_618 = puVar16;
  _objc_retain(puVar3);
  puStack_610 = puVar3;
  _objc_copyWeak(auStack_608,auStack_5f0);
  func_0x00010bf97e80(puVar9);
  puStack_698 = puVar14;
  uStack_690 = 0xc2000000;
  pcStack_688 = FUN_107d6f240;
  puStack_680 = &UNK_1108efe38;
  _objc_copyWeak(auStack_650,auStack_5f0);
  puStack_678 = puVar9;
  puStack_670 = puVar16;
  puStack_668 = puVar6;
  puStack_660 = puVar5;
  uStack_658 = uVar13;
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar16);
  _objc_retain(puVar9);
  puVar14 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(puVar3,PTR___dispatch_main_q_11034be20,&puStack_698);
  _objc_release(uStack_658);
  _objc_release(puStack_660);
  _objc_release(puStack_670);
  _objc_release(puStack_678);
  _objc_destroyWeak(auStack_650);
  _objc_destroyWeak(auStack_608);
  _objc_release(puStack_610);
  _objc_release(puStack_618);
  _objc_release(puStack_628);
  _objc_release(puVar16);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_5f0);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(puVar5);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return (undefined *)puVar10;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_608);
  _objc_destroyWeak(auStack_5f0);
  __Unwind_Resume();
  _objc_retain(puVar14);
  puVar15 = puVar14;
  func_0x00010c27dd80();
  if (puVar15 == (undefined *)0x1) {
    lVar11 = *(long *)((long)puVar10 + 0x20);
    _objc_opt_class();
    puVar15 = puVar14;
    func_0x00010bf8e2c0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    lVar18 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    if (lVar18 == 0) {
      puVar15 = (undefined *)0x0;
      goto LAB_107d6e988;
    }
  }
  puVar15 = (undefined *)0x1;
LAB_107d6e988:
  _objc_release(puVar14);
  return puVar15;
}



/* Entry: 107d6e0d0; end: 107d6e37b; -[SCStickerContainer stickersStateIncludingStatic:tracking:supportedFlows:] */

undefined *
FUN_107d6e0d0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong unaff_x25;
  ulong unaff_x26;
  long lVar14;
  ulong uVar15;
  ulong unaff_x27;
  undefined *puVar16;
  long unaff_x28;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  code *pcStack_498;
  undefined *puStack_490;
  undefined1 *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined1 *puStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [8];
  undefined *puStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined1 auStack_418 [8];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [8];
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_308;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_140 = param_5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_138 = puVar11;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_3 != 0) {
    param_3 = *(undefined **)(param_1 + 0x30);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar16);
    _objc_release(param_3);
  }
  if ((int)param_4 != 0) {
    param_4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar16);
    _objc_release(param_4);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar16);
  uVar2 = 0;
  puVar11 = puVar16;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    unaff_x28 = *plStack_120;
    do {
      param_3 = PTR_s_supportedFlows_112676688;
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(puVar16);
        }
        unaff_x25 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
        puVar1 = PTR_PTR_1126ba960;
        _objc_opt_class(PTR_PTR_1126ba960);
        uVar2 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar1);
        if ((uVar2 & 1) != 0) {
          _objc_retain(unaff_x25);
          uVar2 = unaff_x25;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = uVar2;
          _objc_opt_respondsToSelector();
          _objc_release(uVar2);
          if ((unaff_x27 & 1) == 0) {
LAB_107d6e29c:
            func_0x000100841590(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
            unaff_x26 = unaff_x25;
            func_0x00010c255080();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x26 != 0) {
              func_0x00010befa120(puStack_138);
            }
            _objc_release(unaff_x26);
          }
          else {
            uVar2 = unaff_x25;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar2;
            func_0x00010c263180();
            _objc_release(uVar2);
            unaff_x27 = 0;
            if (uVar12 == 0) goto LAB_107d6e29c;
            unaff_x26 = unaff_x25;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = unaff_x26;
            func_0x00010c263180();
            unaff_x27 = uVar2 & uStack_140;
            _objc_release(unaff_x26);
            if (unaff_x27 != 0) goto LAB_107d6e29c;
          }
          _objc_release(unaff_x25);
        }
        puVar10 = puVar10 + 1;
      } while (puVar11 != puVar10);
      uVar2 = 0;
      puVar11 = puVar16;
      func_0x00010bf52a60();
      param_4 = 0;
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  puVar11 = puStack_138;
  puVar10 = puStack_138;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar11;
    func_0x00010bf51e00();
  }
  _objc_release(puVar16);
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_270;
  puStack_158 = puVar11;
  pcStack_148 = FUN_107d6e37c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  puStack_180 = param_3;
  uStack_178 = param_4;
  lStack_170 = param_1;
  puStack_168 = puVar10;
  puStack_160 = puVar16;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_228;
  uVar9 = 0x10;
  puVar11 = puVar1;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    lVar14 = *plStack_260;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        uVar12 = *(ulong *)(lStack_268 + (long)puVar16 * 8);
        if (((uVar2 & 1) == 0) && (uVar15 = uVar12, func_0x00010c081660(), (uVar15 & 1) == 0)) {
          uVar15 = uVar12;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar15;
          func_0x00010c27dd80();
          _objc_release(uVar15);
          if (uVar3 != 5) goto LAB_107d6e450;
        }
        else {
LAB_107d6e450:
          func_0x00010c1a7f60(uVar12);
        }
        puVar16 = puVar16 + 1;
      } while (puVar11 != puVar16);
      puVar8 = auStack_228;
      uVar9 = 0x10;
      puVar11 = puVar1;
      puVar6 = &uStack_270;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  puVar16 = puVar1;
  func_0x00010bdca0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar16;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar14 = *plStack_3c0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_3c0 != lVar14) {
          _objc_enumerationMutation(puVar16);
        }
        puVar4 = PTR_PTR_1126ba960;
        uVar15 = *(ulong *)(lStack_3c8 + (long)puVar13 * 8);
        _objc_retain(uVar15);
        _objc_opt_class(puVar4);
        uVar12 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar4);
        uVar2 = uVar15;
        if ((uVar12 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar15);
        if (uVar2 != 0) {
          uVar12 = uVar15;
          func_0x00010c074760();
          if ((uVar12 & 1) == 0) {
            func_0x00010bf80b80(uVar15);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c280560(uVar15);
          func_0x00010c0df780(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar4);
        }
        _objc_release(uVar2);
        puVar13 = puVar13 + 1;
      } while (puVar10 != puVar13);
      puVar10 = puVar16;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  func_0x00010bf20c00(*(undefined8 *)(puVar1 + 0x30));
  _CGRectGetWidth();
  uVar18 = uVar17;
  func_0x00010bf20c00(*(undefined8 *)(puVar1 + 0x30));
  _CGRectGetHeight();
  puVar16 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_3f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3f0 = 0xc2000000;
  pcStack_3e8 = FUN_107d6e8fc;
  puStack_3e0 = &UNK_110a0b5f8;
  puVar10 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_3d8 = puVar1;
  func_0x00010c1063a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar6;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_400,puVar1);
  puStack_458 = puVar16;
  uStack_450 = 0xc2000000;
  pcStack_448 = FUN_107d6e9ac;
  puStack_440 = &UNK_110a0b688;
  uStack_410 = uVar17;
  uStack_408 = uVar18;
  _objc_retain(puVar11);
  puStack_438 = puVar11;
  puStack_430 = puVar1;
  _objc_retain(puVar13);
  puStack_428 = puVar13;
  _objc_retain(puVar10);
  puStack_420 = puVar10;
  _objc_copyWeak(auStack_418,auStack_400);
  func_0x00010bf97e80(puVar5);
  puStack_4a8 = puVar16;
  uStack_4a0 = 0xc2000000;
  pcStack_498 = FUN_107d6f240;
  puStack_490 = &UNK_1108efe38;
  _objc_copyWeak(auStack_460,auStack_400);
  puStack_488 = puVar5;
  puStack_480 = puVar13;
  puStack_478 = puVar1;
  puStack_470 = puVar8;
  uStack_468 = uVar9;
  _objc_retain();
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  _objc_retain(puVar5);
  puVar16 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(puVar10,PTR___dispatch_main_q_11034be20,&puStack_4a8);
  _objc_release(uStack_468);
  _objc_release(puStack_470);
  _objc_release(puStack_480);
  _objc_release(puStack_488);
  _objc_destroyWeak(auStack_460);
  _objc_destroyWeak(auStack_418);
  _objc_release(puStack_420);
  _objc_release(puStack_428);
  _objc_release(puStack_438);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_400);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return (undefined *)puVar6;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_418);
  _objc_destroyWeak(auStack_400);
  __Unwind_Resume();
  _objc_retain(puVar16);
  puVar11 = puVar16;
  func_0x00010c27dd80();
  if (puVar11 == (undefined *)0x1) {
    lVar7 = *(long *)((long)puVar6 + 0x20);
    _objc_opt_class();
    puVar11 = puVar16;
    func_0x00010bf8e2c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    lVar14 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    if (lVar14 == 0) {
      puVar11 = (undefined *)0x0;
      goto LAB_107d6e988;
    }
  }
  puVar11 = (undefined *)0x1;
LAB_107d6e988:
  _objc_release(puVar16);
  return puVar11;
}



/* Entry: 107d6e37c; end: 107d6e4c7; -[SCStickerContainer setStickersHiddenState:includeCustomSticker:] */

undefined1 * FUN_107d6e37c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
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
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = auStack_e8;
  uVar11 = 0x10;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar14 = *plStack_120;
    do {
      puVar16 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        uVar12 = *(ulong *)(lStack_128 + (long)puVar16 * 8);
        if (((param_4 & 1) == 0) && (uVar3 = uVar12, func_0x00010c081660(), (uVar3 & 1) == 0)) {
          uVar3 = uVar12;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar3;
          func_0x00010c27dd80();
          _objc_release(uVar3);
          if (uVar15 != 5) goto LAB_107d6e450;
        }
        else {
LAB_107d6e450:
          func_0x00010c1a7f60(uVar12);
        }
        puVar16 = puVar16 + 1;
      } while (puVar2 != puVar16);
      puVar16 = auStack_e8;
      uVar11 = 0x10;
      puVar2 = param_1;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar16);
  _objc_retain(uVar11);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puVar2 = param_1;
  func_0x00010bdca0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    lVar14 = *plStack_280;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_280 != lVar14) {
          _objc_enumerationMutation(puVar2);
        }
        puVar6 = PTR_PTR_1126ba960;
        uVar15 = *(ulong *)(lStack_288 + (long)puVar13 * 8);
        _objc_retain(uVar15);
        _objc_opt_class(puVar6);
        uVar3 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar6);
        uVar12 = uVar15;
        if ((uVar3 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar15);
        if (uVar12 != 0) {
          uVar3 = uVar15;
          func_0x00010c074760();
          if ((uVar3 & 1) == 0) {
            func_0x00010bf80b80(uVar15);
          }
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c280560(uVar15);
          func_0x00010c0df780(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(puVar6);
        }
        _objc_release(uVar12);
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar5 = puVar2;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x30));
  _CGRectGetWidth();
  uVar1 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,CONCAT12(
                                                  uVar19,CONCAT11(uVar18,uVar17)))))));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x30));
  _CGRectGetHeight();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_107d6e8fc;
  puStack_2a0 = &UNK_110a0b5f8;
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_298 = param_1;
  func_0x00010c1063a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar9;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_2c0,param_1);
  puStack_318 = puVar6;
  uStack_310 = 0xc2000000;
  pcStack_308 = FUN_107d6e9ac;
  puStack_300 = &UNK_110a0b688;
  uStack_2d0 = uVar1;
  uStack_2c8 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
  _objc_retain(puVar4);
  puStack_2f8 = puVar4;
  puStack_2f0 = param_1;
  _objc_retain(puVar8);
  puStack_2e8 = puVar8;
  _objc_retain(puVar7);
  puStack_2e0 = puVar7;
  _objc_copyWeak(auStack_2d8,auStack_2c0);
  func_0x00010bf97e80(puVar2);
  puStack_368 = puVar6;
  uStack_360 = 0xc2000000;
  pcStack_358 = FUN_107d6f240;
  puStack_350 = &UNK_1108efe38;
  _objc_copyWeak(auStack_320,auStack_2c0);
  puStack_348 = puVar2;
  puStack_340 = puVar8;
  puStack_338 = param_1;
  puStack_330 = puVar16;
  uStack_328 = uVar11;
  _objc_retain();
  _objc_retain(puVar16);
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  puVar6 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(puVar7,PTR___dispatch_main_q_11034be20,&puStack_368);
  _objc_release(uStack_328);
  _objc_release(puStack_330);
  _objc_release(puStack_340);
  _objc_release(puStack_348);
  _objc_destroyWeak(auStack_320);
  _objc_destroyWeak(auStack_2d8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2f8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_2c0);
  _objc_release(puVar7);
  _objc_release(uVar11);
  _objc_release(puVar16);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return (undefined1 *)puVar9;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_2d8);
  _objc_destroyWeak(auStack_2c0);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010c27dd80();
  if (puVar4 == (undefined *)0x1) {
    lVar10 = *(long *)((long)puVar9 + 0x20);
    _objc_opt_class();
    puVar4 = puVar6;
    func_0x00010bf8e2c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar14 = lVar10;
    func_0x00010c08fa60();
    _objc_release(lVar10);
    if (lVar14 == 0) {
      puVar16 = (undefined1 *)0x0;
      goto LAB_107d6e988;
    }
  }
  puVar16 = (undefined1 *)0x1;
LAB_107d6e988:
  _objc_release(puVar6);
  return puVar16;
}



/* Entry: 107d6e4c8; end: 107d6e8fb; -[SCStickerContainer setStickersState:configuration:completionBlock:] */

long FUN_107d6e4c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar10 = param_1;
  func_0x00010bdca0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar9 = *plStack_150;
    do {
      lVar11 = 0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        puVar4 = PTR_PTR_1126ba960;
        uVar12 = *(ulong *)(lStack_158 + lVar11 * 8);
        _objc_retain(uVar12);
        _objc_opt_class(puVar4);
        uVar5 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar4);
        uVar1 = uVar12;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar12);
        if (uVar1 != 0) {
          uVar5 = uVar12;
          func_0x00010c074760();
          if ((uVar5 & 1) == 0) {
            func_0x00010bf80b80(uVar12);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c280560(uVar12);
          func_0x00010c0df780(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar4);
        }
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      lVar8 = lVar10;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar10);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x30));
  _CGRectGetWidth();
  uVar2 = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,CONCAT12(
                                                  uVar15,CONCAT11(uVar14,uVar13)))))));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x30));
  _CGRectGetHeight();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_107d6e8fc;
  puStack_170 = &UNK_110a0b5f8;
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_168 = param_1;
  func_0x00010c1063a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_190,param_1);
  puStack_1e8 = puVar4;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_107d6e9ac;
  puStack_1d0 = &UNK_110a0b688;
  uStack_1a0 = uVar2;
  uStack_198 = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,
                                                  CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))));
  _objc_retain(puVar3);
  puStack_1c8 = puVar3;
  lStack_1c0 = param_1;
  _objc_retain(puVar7);
  puStack_1b8 = puVar7;
  _objc_retain(puVar6);
  puStack_1b0 = puVar6;
  _objc_copyWeak(auStack_1a8,auStack_190);
  func_0x00010bf97e80(lVar10);
  puStack_238 = puVar4;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_107d6f240;
  puStack_220 = &UNK_1108efe38;
  _objc_copyWeak(auStack_1f0,auStack_190);
  lStack_218 = lVar10;
  puStack_210 = puVar7;
  lStack_208 = param_1;
  uStack_200 = param_4;
  uStack_1f8 = param_5;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(puVar7);
  _objc_retain(lVar10);
  puVar4 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(puVar6,PTR___dispatch_main_q_11034be20,&puStack_238);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  _objc_release(puStack_210);
  _objc_release(lStack_218);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1c8);
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_destroyWeak(auStack_190);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_190);
  __Unwind_Resume();
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010c27dd80();
  if (puVar3 == (undefined *)0x1) {
    lVar8 = *(long *)(param_3 + 0x20);
    _objc_opt_class();
    puVar3 = puVar4;
    func_0x00010bf8e2c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar10 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    if (lVar10 == 0) {
      lVar10 = 0;
      goto LAB_107d6e988;
    }
  }
  lVar10 = 1;
LAB_107d6e988:
  _objc_release(puVar4);
  return lVar10;
}



/* Entry: 107d6e8fc; end: 107d6e9ab;  */

undefined8 FUN_107d6e8fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_opt_class();
    lVar1 = param_2;
    func_0x00010bf8e2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      uVar3 = 0;
      goto LAB_107d6e988;
    }
  }
  uVar3 = 1;
LAB_107d6e988:
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107d6e9ac; end: 107d6eec7;  */

void FUN_107d6e9ac(double param_1,double param_2,long param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_4);
  dVar15 = *(double *)(param_3 + 0x48);
  dVar16 = *(double *)(param_3 + 0x50);
  func_0x00010bf345e0(param_4);
  param_1 = dVar15 * param_1;
  func_0x00010bf345e0(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_2 = dVar16 * param_2;
  lVar12 = *(long *)(param_3 + 0x20);
  func_0x00010c280560(param_4);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar12 != 0) {
    uVar3 = param_4;
    func_0x00010c27dd80();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(param_4);
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 0x11181ac0;
    func_0x00010bf4b900();
    _objc_release(puVar2);
    func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_3 + 0x28) + 0x30));
    lVar4 = lVar12;
    func_0x00010c255080(lVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c071ae0();
    _objc_release(lVar4);
    if ((iVar1 == 0) && (uVar3 != 6 || (uVar5 & 1) != 0)) {
      func_0x00010befa120(*(undefined8 *)(param_3 + 0x30));
      func_0x00010c219b80(param_1,param_2,lVar12);
      func_0x00010c14e120(param_4);
      func_0x00010c1f5fe0(lVar12);
      func_0x00010c141a80(param_4);
      func_0x00010c1ee7a0(lVar12);
      func_0x00010c073260(param_4);
      func_0x00010c1b1160(lVar12);
      func_0x00010c123380(lVar12);
      goto LAB_107d6ee74;
    }
  }
  _dispatch_group_enter(*(undefined8 *)(param_3 + 0x38));
  uVar13 = *(undefined8 *)(param_3 + 0x30);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010befa120(uVar13);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010c07fae0();
  if ((int)uVar13 == 0) {
LAB_107d6ee64:
    _objc_release(uVar6);
  }
  else {
    uVar3 = param_4;
    func_0x00010c0846e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) goto LAB_107d6ee64;
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0846e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010bf2d360();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    if ((int)uVar13 != 0) {
      uVar3 = param_4;
      func_0x00010c0846e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_107d6eec8;
      puStack_d8 = &UNK_110a0b628;
      _objc_retain(param_4);
      uVar13 = *(undefined8 *)(param_3 + 0x30);
      uStack_d0 = param_4;
      dStack_c0 = param_1;
      dStack_b8 = param_2;
      dStack_b0 = dVar15;
      dStack_a8 = dVar16;
      _objc_retain(uVar13);
      ppuVar8 = &puStack_f0;
      uStack_c8 = uVar13;
      uStack_a0 = param_5;
      _objc_retainBlock();
      uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010c10f5a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c29ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00010c0e0460(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c0e0ea0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_f8,param_3 + 0x40);
      uVar14 = *(undefined8 *)(param_3 + 0x38);
      _objc_retain(uVar14);
      _objc_retain(uVar3);
      _objc_retain(uVar13);
      _objc_retain(ppuVar8);
      uVar11 = uVar10;
      func_0x00010c25ff60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(ppuVar8);
      _objc_release(uVar13);
      _objc_release(uVar3);
      _objc_release(uVar14);
      _objc_destroyWeak(auStack_f8);
      _objc_release(uVar6);
      _objc_release(uVar13);
      _objc_release(ppuVar8);
      _objc_release(uStack_c8);
      _objc_release(uStack_d0);
      _objc_release(uVar3);
      goto LAB_107d6ee74;
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x38));
LAB_107d6ee74:
  _objc_release(lVar12);
  _objc_release(param_4);
  return;
}



/* Entry: 107d6eec8; end: 107d6f013;  */

void FUN_107d6eec8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c280560(uVar1);
  func_0x00010c21b740(param_2);
  func_0x00010c141a80(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1ee7a0(param_2);
  func_0x00010c14e120(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1f5fe0(param_2);
  dVar2 = *(double *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x38);
  func_0x00010c17a6a0(dVar2,dVar3,param_2);
  dVar4 = *(double *)(param_1 + 0x40);
  func_0x00010c1281e0(*(undefined8 *)(param_1 + 0x20));
  dVar5 = *(double *)(param_1 + 0x48);
  func_0x00010c1281e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1739e0(0,0,dVar4 * dVar2,dVar5 * dVar3,param_2);
  func_0x00010c073260(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b1160(param_2);
  func_0x00010c06c000(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1af280(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8c1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f840();
  func_0x00010c1b29a0(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8c1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f800();
  func_0x00010c1b3d80(param_2);
  _objc_release(uVar1);
  func_0x00010c123380(param_2);
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d6f014; end: 107d6f15f;  */

void FUN_107d6f014(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107d6f160; end: 107d6f237;  */

void FUN_107d6f160(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c253ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126ba960;
      _objc_alloc(PTR_PTR_1126ba960);
      func_0x00010c04c640();
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar4);
      _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d6f238; end: 107d6f23f;  */

void FUN_107d6f238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107d6f240; end: 107d6f537;  */

void FUN_107d6f240(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar3;
  func_0x00010bdca0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      param_2 = PTR_PTR_1126ba960;
      uVar11 = *(ulong *)(lVar12 * 8);
      _objc_retain(uVar11);
      _objc_opt_class();
      uVar8 = uVar11;
      _objc_opt_isKindOfClass();
      uVar10 = uVar11;
      if ((uVar8 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar11);
      if (uVar10 != 0) {
        func_0x00010c12c960(uVar11);
      }
      _objc_release(uVar10);
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar10 = 0;
    do {
      puVar4 = *(undefined **)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_1 + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      param_2 = PTR_PTR_1126ba960;
      _objc_opt_class();
      uVar11 = uVar5;
      _objc_opt_isKindOfClass();
      uVar8 = uVar5;
      if ((uVar11 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar5);
      if (uVar8 != 0) {
        puVar6 = puVar4;
        func_0x00010bf8c1c0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2f840();
        func_0x00010c1b29a0(uVar5);
        _objc_release(puVar6);
        puVar6 = puVar4;
        func_0x00010bf8c1c0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2f800();
        func_0x00010c1b3d80(uVar5);
        _objc_release(puVar6);
        lVar3 = param_1 + 0x48;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c081660(puVar4);
        func_0x00010bdc86c0(lVar3);
        _objc_release(lVar3);
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x50);
        uVar7 = uVar5;
        func_0x00010c280560();
        if ((long)uVar11 <= (long)uVar7) {
          uVar11 = uVar7;
        }
        *(ulong *)(*(long *)(param_1 + 0x30) + 0x50) = uVar11;
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 != 0) {
          param_2 = puVar4;
          (**(code **)(lVar3 + 0x10))(lVar3,puVar4,uVar5);
        }
      }
      _objc_release(uVar8);
      _objc_release(puVar4);
      uVar10 = uVar10 + 1;
      uVar8 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar10 < uVar8);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar4 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar4;
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    _objc_release(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126ba960;
  _objc_retain(param_2);
  _objc_opt_class(puVar4);
  puVar6 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar4);
  puVar4 = param_2;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d6f538; end: 107d6f593;  */

void FUN_107d6f538(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126ba960;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d6f594; end: 107d6f5d7; -[SCStickerContainer addStickerView:] */

void FUN_107d6f594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c081660(param_3);
  func_0x00010bdc86c0(param_1,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d6f5d8; end: 107d6f637; -[SCStickerContainer _addStickerView:isTracking:] */

void FUN_107d6f5d8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x40;
  if (param_4 == 0) {
    lVar1 = 0x30;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(param_3);
  func_0x00010befbb60(uVar2,param_2,param_3);
  func_0x00010c18b5e0(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d6f638; end: 107d6f6af; -[SCStickerContainer _allStickers] */

void FUN_107d6f638(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c261580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c261580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107d6f6b0; end: 107d6f787; -[SCStickerContainer _logAndAssertForDuplicateMusicStickerForContainer:caller:] */

void FUN_107d6f6b0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (1 < uVar2) {
    func_0x00010bf529e0();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebc118);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d6f788; end: 107d6f7e7;  */

void FUN_107d6f788(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d6f7e8; end: 107d6f84f;  */

undefined8 FUN_107d6f7e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c253880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107d6f850; end: 107d6f8a3; -[SCStickerContainer previewStickerViewDidUpdate:] */

void FUN_107d6f850(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c253b40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d6f8a4; end: 107d6f8ab; -[SCStickerContainer staticStickersContainerView] */

undefined8 FUN_107d6f8a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d6f8ac; end: 107d6f8c3; -[SCStickerContainer delegate] */

void FUN_107d6f8ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d6f8c4; end: 107d6f8cf; -[SCStickerContainer setDelegate:] */

void FUN_107d6f8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107d6f8d0; end: 107d6f8d7; -[SCStickerContainer trackingStickersContainerView] */

undefined8 FUN_107d6f8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d6f8d8; end: 107d6f8df; -[SCStickerContainer trackingUpdateVersion] */

undefined8 FUN_107d6f8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d6f8e0; end: 107d6f8e7; -[SCStickerContainer setTrackingUpdateVersion:] */

void FUN_107d6f8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107d6f8e8; end: 107d6f8ef; -[SCStickerContainer maxUniqueStickerId] */

undefined8 FUN_107d6f8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d6f8f0; end: 107d6f8f7; -[SCStickerContainer setMaxUniqueStickerId:] */

void FUN_107d6f8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107d6f8f8; end: 107d6f953; -[SCStickerContainer .cxx_destruct] */

void FUN_107d6f8f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d6f954; end: 107d6f993;  */

void FUN_107d6f954(void)

{
  if (lRam0000000113727a68 != -1) {
    func_0x00010002a2fc(0x113727a68,&PTR___NSConcreteGlobalBlock_110a0b750);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727a70,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107d6f994; end: 107d6f9fb;  */

void FUN_107d6f994(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf130;
  _objc_opt_class(PTR_PTR_1126cf130);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a0b770);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727a70;
  uRam0000000113727a70 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d6f9fc; end: 107d6fa03;  */

void FUN_107d6f9fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf62090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoriesDataMutator_1125b61c8);
  return;
}



/* Entry: 107d6fa04; end: 107d6fa43;  */

void FUN_107d6fa04(void)

{
  if (lRam0000000113727a78 != -1) {
    func_0x00010002a2fc(0x113727a78,&PTR___NSConcreteGlobalBlock_110a0b790);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727a80,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107d6fa44; end: 107d6faab;  */

void FUN_107d6fa44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf130;
  _objc_opt_class(PTR_PTR_1126cf130);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a0b7b0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727a80;
  uRam0000000113727a80 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d6faac; end: 107d6fab3;  */

void FUN_107d6faac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf62070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoriesDataFetcher_1125b61c0);
  return;
}



/* Entry: 107d6fab4; end: 107d6faf3;  */

void FUN_107d6fab4(void)

{
  if (lRam0000000113727a88 != -1) {
    func_0x00010002a2fc(0x113727a88,&PTR___NSConcreteGlobalBlock_110a0b7d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727a90,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107d6faf4; end: 107d6fb5b;  */

void FUN_107d6faf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf130;
  _objc_opt_class(PTR_PTR_1126cf130);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a0b7f0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727a90;
  uRam0000000113727a90 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d6fb5c; end: 107d6fb63;  */

void FUN_107d6fb5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf620b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoriesDataSyncer_1125b61d0);
  return;
}



/* Entry: 107d6fb64; end: 107d6fba3;  */

void FUN_107d6fb64(void)

{
  if (lRam0000000113727a98 != -1) {
    func_0x00010002a2fc(0x113727a98,&PTR___NSConcreteGlobalBlock_110a0b810);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727aa0,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107d6fba4; end: 107d6fc0b;  */

void FUN_107d6fba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf130;
  _objc_opt_class(PTR_PTR_1126cf130);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a0b830);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727aa0;
  uRam0000000113727aa0 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d6fc0c; end: 107d6fc13;  */

void FUN_107d6fc0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf620d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoriesOnboardingManager_1125b61d8);
  return;
}



/* Entry: 107d6fc14; end: 107d6fc53;  */

void FUN_107d6fc14(void)

{
  if (lRam0000000113727aa8 != -1) {
    func_0x00010002a2fc(0x113727aa8,&PTR___NSConcreteGlobalBlock_110a0b850);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727ab0,PTR_s_ifExposed_1125d72b0);
  return;
}


