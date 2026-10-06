/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ba6688; end: 106ba6707; -[SCStoriesProfileHeaderItemStory hash] */

undefined8 * FUN_106ba6688(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_106ba67a0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106ba67ac;
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
            goto LAB_106ba67ac;
          }
          goto LAB_106ba67a0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106ba67ac:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106ba6708; end: 106ba67c7; -[SCStoriesProfileHeaderItemStory isEqual:] */

long FUN_106ba6708(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106ba67a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106ba67ac;
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
            goto LAB_106ba67ac;
          }
          goto LAB_106ba67a0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106ba67ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106ba67c8; end: 106ba67cf; -[SCStoriesProfileHeaderItemStory thumbnailInfo] */

undefined8 FUN_106ba67c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ba67d0; end: 106ba67d7; -[SCStoriesProfileHeaderItemStory tapActionModel] */

undefined8 FUN_106ba67d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ba67d8; end: 106ba67df; -[SCStoriesProfileHeaderItemStory accessibilityIdentifier] */

undefined8 FUN_106ba67d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ba67e0; end: 106ba681b; -[SCStoriesProfileHeaderItemStory .cxx_destruct] */

void FUN_106ba67e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba681c; end: 106ba687f; +[SCStoriesProfileHeaderItemViewModel bitmojiGroupWithBitmojiGroup:] */

void FUN_106ba681c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0de8;
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



/* Entry: 106ba6880; end: 106ba68eb; +[SCStoriesProfileHeaderItemViewModel storyWithStory:] */

void FUN_106ba6880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0de8;
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



/* Entry: 106ba68ec; end: 106ba690f; -[SCStoriesProfileHeaderItemViewModel copyWithZone:] */

undefined8 FUN_106ba68ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ba6910; end: 106ba6987; -[SCStoriesProfileHeaderItemViewModel hash] */

void FUN_106ba6910(long param_1)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f5698;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba6988; end: 106ba69cb; -[SCStoriesProfileHeaderItemViewModel internalInit] */

void FUN_106ba6988(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5698;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba69cc; end: 106ba6a83; -[SCStoriesProfileHeaderItemViewModel isEqual:] */

long FUN_106ba69cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106ba6a5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106ba6a68;
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
          goto LAB_106ba6a68;
        }
        goto LAB_106ba6a5c;
      }
    }
    lVar3 = 0;
  }
LAB_106ba6a68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106ba6a84; end: 106ba6b07; -[SCStoriesProfileHeaderItemViewModel matchBitmojiGroup:story:] */

void FUN_106ba6a84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106ba6aec;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106ba6aec;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106ba6aec:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba6b08; end: 106ba6b37; -[SCStoriesProfileHeaderItemViewModel .cxx_destruct] */

void FUN_106ba6b08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ba6b38; end: 106ba6d67; -[SCSharedStoryProfileGroupMember initWithUsername:displayName:userId:bitmojiAvatarId:bitmojiSelfieId:bitmojiSceneId:bitmojiBackgroundId:color:talkSessionUserId:mischiefVersion:joinTimestamp:] */

undefined8 *
FUN_106ba6b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f56a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ba6d68; end: 106ba6d8b; -[SCSharedStoryProfileGroupMember copyWithZone:] */

undefined8 FUN_106ba6d68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ba6d8c; end: 106ba6e63; -[SCSharedStoryProfileGroupMember hash] */

undefined8 * FUN_106ba6d8c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
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
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106ba6fb4:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106ba6fc0;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50)))
    {
      lVar6 = *(long *)((long)puVar4 + 8);
      if ((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x20);
            if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x28);
              if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                lVar6 = *(long *)((long)puVar4 + 0x30);
                if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0)
                   ) {
                  lVar6 = *(long *)((long)puVar4 + 0x38);
                  if ((lVar6 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    lVar6 = *(long *)((long)puVar4 + 0x40);
                    if ((lVar6 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071c60(), (int)lVar6 != 0)) {
                      lVar6 = *(long *)((long)puVar4 + 0x48);
                      if ((lVar6 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                        puVar7 = *(undefined1 **)((long)puVar4 + 0x58);
                        if (puVar7 != *(undefined1 **)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_106ba6fc0;
                        }
                        goto LAB_106ba6fb4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106ba6fc0:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106ba6e64; end: 106ba6fdb; -[SCSharedStoryProfileGroupMember isEqual:] */

long FUN_106ba6e64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106ba6fb4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106ba6fc0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) {
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
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071c60(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_106ba6fc0;
                        }
                        goto LAB_106ba6fb4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106ba6fc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106ba6fdc; end: 106ba6fe3; -[SCSharedStoryProfileGroupMember username] */

undefined8 FUN_106ba6fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ba6fe4; end: 106ba6feb; -[SCSharedStoryProfileGroupMember displayName] */

undefined8 FUN_106ba6fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ba6fec; end: 106ba6ff3; -[SCSharedStoryProfileGroupMember userId] */

undefined8 FUN_106ba6fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ba6ff4; end: 106ba6ffb; -[SCSharedStoryProfileGroupMember bitmojiAvatarId] */

undefined8 FUN_106ba6ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ba6ffc; end: 106ba7003; -[SCSharedStoryProfileGroupMember bitmojiSelfieId] */

undefined8 FUN_106ba6ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ba7004; end: 106ba700b; -[SCSharedStoryProfileGroupMember bitmojiSceneId] */

undefined8 FUN_106ba7004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ba700c; end: 106ba7013; -[SCSharedStoryProfileGroupMember bitmojiBackgroundId] */

undefined8 FUN_106ba700c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ba7014; end: 106ba701b; -[SCSharedStoryProfileGroupMember color] */

undefined8 FUN_106ba7014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ba701c; end: 106ba7023; -[SCSharedStoryProfileGroupMember talkSessionUserId] */

undefined8 FUN_106ba701c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ba7024; end: 106ba702b; -[SCSharedStoryProfileGroupMember mischiefVersion] */

undefined8 FUN_106ba7024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ba702c; end: 106ba7033; -[SCSharedStoryProfileGroupMember joinTimestamp] */

undefined8 FUN_106ba702c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106ba7034; end: 106ba70c3; -[SCSharedStoryProfileGroupMember .cxx_destruct] */

void FUN_106ba7034(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106ba70c4; end: 106ba726b; -[SCSharedStoryProfileMemberCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba70c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11275993c;
  if (*(ulong *)(param_1 + lVar5) != param_3) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d0e00;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar4 = uVar1;
    func_0x00010bf12d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d9a0(param_1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf85d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(lVar5);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c292e20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar5);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar3);
    func_0x00010c0760a0();
    _objc_release(uVar1);
    func_0x00010c20eaa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba726c; end: 106ba730b; -[SCSharedStoryProfileMemberCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106ba726c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f56a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759940);
    *(undefined **)((long)puVar1 + (long)_DAT_112759940) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ba730c; end: 106ba73c3; -[SCSharedStoryProfileMemberCell _cellOnTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba730c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0e00;
  uVar4 = *(ulong *)(param_1 + _DAT_11275993c);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c06fd20();
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112759944);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba73c4; end: 106ba7463; +[SCSharedStoryProfileMemberCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106ba73c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d0e00;
  _objc_opt_class(PTR_PTR_1126d0e00);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0x404e000000000000;
  }
  else {
    uVar3 = param_4;
    func_0x00010c0760a0();
    uVar4 = 0x4051800000000000;
    if ((int)uVar3 == 0) {
      uVar4 = 0x404e000000000000;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106ba7464; end: 106ba75ef; -[SCSharedStoryProfileMemberCell setBitmojiAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112759948;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126b0870;
  _objc_alloc(PTR_PTR_1126b0870);
  func_0x00010c013de0(0,0,0x4046800000000000,0x4046800000000000);
  lVar2 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c2ec0;
  _objc_alloc(PTR_PTR_1126c2ec0);
  func_0x00010c004820();
  puVar4 = PTR_PTR_1126c2ec8;
  _objc_alloc(PTR_PTR_1126c2ec8);
  func_0x00010c0383e0(0x4046800000000000,0x4046800000000000);
  puVar5 = PTR_PTR_1126ce418;
  _objc_alloc(PTR_PTR_1126ce418);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112759940);
  lVar2 = param_1 + _DAT_11275994c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c001fc0(puVar5,param_2,uVar6,0,puVar3,puVar4,puVar1,lVar2);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ba75f0; end: 106ba75ff; -[SCSharedStoryProfileMemberCell setAvatarConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba75f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759940),PTR_s_next__112614028);
  return;
}



/* Entry: 106ba7600; end: 106ba7683; -[SCSharedStoryProfileMemberCell gestureRecognizer:shouldReceiveTouch:] */

undefined8
FUN_106ba7600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c071ae0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106ba7684; end: 106ba7693; -[SCSharedStoryProfileMemberCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba7684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759938);
}



/* Entry: 106ba7694; end: 106ba76a3; -[SCSharedStoryProfileMemberCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7694(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112759938) = param_3;
  return;
}



/* Entry: 106ba76a4; end: 106ba76b3; -[SCSharedStoryProfileMemberCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba76a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759944);
}



/* Entry: 106ba76b4; end: 106ba76f3; -[SCSharedStoryProfileMemberCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba76b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759944;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba76f4; end: 106ba7703; -[SCSharedStoryProfileMemberCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba76f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275993c);
}



/* Entry: 106ba7704; end: 106ba7713; -[SCSharedStoryProfileMemberCell bitmojiAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba7704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759948);
}



/* Entry: 106ba7714; end: 106ba7733; -[SCSharedStoryProfileMemberCell avatarScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7714(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275994c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba7734; end: 106ba7747; -[SCSharedStoryProfileMemberCell setAvatarScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7734(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275994c,param_3);
  return;
}



/* Entry: 106ba7748; end: 106ba77b3; -[SCSharedStoryProfileMemberCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7748(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275994c);
  _objc_storeStrong(param_1 + _DAT_112759948,0);
  _objc_storeStrong(param_1 + _DAT_11275993c,0);
  _objc_storeStrong(param_1 + _DAT_112759944,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759940,0);
  return;
}



/* Entry: 106ba77b4; end: 106ba783f; -[SCSharedStoryProfileMemberGroupBitmojiCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba77b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112759954;
  if (*(ulong *)(param_1 + lVar5) != param_3) {
    puVar2 = PTR_PTR_1126d0e08;
    _objc_opt_class(PTR_PTR_1126d0e08);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar4);
    func_0x00010c20eaa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba7840; end: 106ba7883; -[SCSharedStoryProfileMemberGroupBitmojiCell observableGroupImage] */

void FUN_106ba7840(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba7884; end: 106ba78e3; -[SCSharedStoryProfileMemberGroupBitmojiCell setObservableGroupImage:] */

void FUN_106ba7884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106ba78e4; end: 106ba79d3; -[SCSharedStoryProfileMemberGroupBitmojiCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106ba78e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0e10;
  _objc_alloc(PTR_PTR_1126d0e10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  func_0x00010c015080(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_5 + _DAT_112759958);
    *(undefined **)(param_5 + _DAT_112759958) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 106ba79d4; end: 106ba7a5f; +[SCSharedStoryProfileMemberGroupBitmojiCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106ba79d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d0e08;
  _objc_opt_class(PTR_PTR_1126d0e08);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (param_4 == 0) {
    uVar4 = 0x4063200000000000;
  }
  else {
    func_0x00010bf33e20(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106ba7a60; end: 106ba7a6f; -[SCSharedStoryProfileMemberGroupBitmojiCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba7a60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275995c);
}



/* Entry: 106ba7a70; end: 106ba7aaf; -[SCSharedStoryProfileMemberGroupBitmojiCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275995c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba7ab0; end: 106ba7abf; -[SCSharedStoryProfileMemberGroupBitmojiCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba7ab0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759950);
}



/* Entry: 106ba7ac0; end: 106ba7acf; -[SCSharedStoryProfileMemberGroupBitmojiCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112759950) = param_3;
  return;
}



/* Entry: 106ba7ad0; end: 106ba7adf; -[SCSharedStoryProfileMemberGroupBitmojiCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba7ad0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759954);
}



/* Entry: 106ba7ae0; end: 106ba7b2f; -[SCSharedStoryProfileMemberGroupBitmojiCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba7ae0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759954,0);
  _objc_storeStrong(param_1 + _DAT_11275995c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759958,0);
  return;
}



/* Entry: 106ba7b30; end: 106ba7c1b; -[SCSharedStoryProfileMembersFriendsDataSource initWithSnapchattersDataFetcher:queuePerformer:] */

undefined1 *
FUN_106ba7b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f56b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x20));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba7c1c; end: 106ba7c43; -[SCSharedStoryProfileMembersFriendsDataSource friendIdsToSnapchatters] */

void FUN_106ba7c1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba7c44; end: 106ba7dcb; -[SCSharedStoryProfileMembersFriendsDataSource fetch] */

void FUN_106ba7c44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ba7dcc;
  puStack_68 = &UNK_1108434e0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0d42a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0eea20(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106ba7dcc; end: 106ba7e9b;  */

void FUN_106ba7dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c960();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba7e9c; end: 106ba7fcb; -[SCSharedStoryProfileMembersFriendsDataSource _handleMutualFriendSnapchatters:error:] */

void FUN_106ba7e9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_4 != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bd86870(param_3,puVar1,&PTR___NSConcreteGlobalBlock_110964d80);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar4);
  func_0x00010bef7f60(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = uVar2;
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ba7fcc; end: 106ba80fb; -[SCSharedStoryProfileMembersFriendsDataSource _handleOutgoingFriendSnapchatters:error:] */

void FUN_106ba7fcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_4 != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bd86870(param_3,puVar1,&PTR___NSConcreteGlobalBlock_110964da0);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar4);
  func_0x00010bef7f60(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = uVar2;
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ba80fc; end: 106ba814f; -[SCSharedStoryProfileMembersFriendsDataSource .cxx_destruct] */

void FUN_106ba80fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba8150; end: 106ba82ff; -[SCSharedStoryProfileMembersSectionActionHandler initWithPublicationId:isCreator:customStoryMembersScopeExposer:customStoryMembersScopeServices:friendProfileScopeExposer:snapchattersDataFetcher:snapchattersDataMutator:friendDataSource:blizzardLogger:] */

undefined1 *
FUN_106ba8150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f56b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba8300; end: 106ba84d3; -[SCSharedStoryProfileMembersSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_106ba8300(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar5 = 0;
          goto LAB_106ba8474;
        }
        func_0x00010be30220(param_1);
        goto LAB_106ba8470;
      }
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b15c8;
      _objc_opt_class(PTR_PTR_1126b15c8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be2a4e0(param_1);
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b15c8;
      _objc_opt_class(PTR_PTR_1126b15c8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be25620(param_1);
    }
    _objc_release(uVar1);
  }
  else {
    func_0x00010be256e0(param_1);
  }
LAB_106ba8470:
  uVar5 = 1;
LAB_106ba8474:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 106ba84d4; end: 106ba857f; -[SCSharedStoryProfileMembersSectionActionHandler _handleShowMembers] */

void FUN_106ba84d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23f40(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 8),param_1,0,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106ba8580; end: 106ba861f; -[SCSharedStoryProfileMembersSectionActionHandler _handleAddMembers] */

void FUN_106ba8580(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23f20(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 8),param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106ba8620; end: 106ba8777; -[SCSharedStoryProfileMembersSectionActionHandler _handleAddFriend:] */

void FUN_106ba8620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bef8a80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ba8778; end: 106ba87cf;  */

void FUN_106ba8778(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be256a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba87d0; end: 106ba881f; -[SCSharedStoryProfileMembersSectionActionHandler _handleAddFriendWithSuccess:error:] */

void FUN_106ba87d0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 == 0)) {
    func_0x00010c0af760(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 8),
                        *(undefined1 *)(param_1 + 0x10),0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bfa4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_fetch_1125c6bc0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be25670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAddFriendError__112566f38,param_4);
  return;
}



/* Entry: 106ba8820; end: 106ba8827; -[SCSharedStoryProfileMembersSectionActionHandler _handleAddFriendError:] */

void FUN_106ba8820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_fetch_1125c6bc0);
  return;
}



/* Entry: 106ba8828; end: 106ba8937; -[SCSharedStoryProfileMembersSectionActionHandler _handleGoToFriendProfile:] */

void FUN_106ba8828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
  }
  func_0x00010c0af760(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 8),
                      *(undefined1 *)(param_1 + 0x10),0xc);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ba8938; end: 106ba8957; -[SCSharedStoryProfileMembersSectionActionHandler didDismissCustomStoryMembers] */

void FUN_106ba8938(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106ba8958; end: 106ba899f; -[SCSharedStoryProfileMembersSectionActionHandler friendProfileDidDismiss:] */

void FUN_106ba8958(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106ba89a0; end: 106ba89b7; -[SCSharedStoryProfileMembersSectionActionHandler presentingViewController] */

void FUN_106ba89a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba89b8; end: 106ba89c3; -[SCSharedStoryProfileMembersSectionActionHandler setPresentingViewController:] */

void FUN_106ba89b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106ba89c4; end: 106ba8a43; -[SCSharedStoryProfileMembersSectionActionHandler .cxx_destruct] */

void FUN_106ba89c4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba8a44; end: 106ba8e73; -[SCSharedStoryProfileMembersSectionCreator initWithStoryId:customStoryMetadata:userSession:storiesServices:dataSource:avatarProvider:imageFetcher:bitmojiAvatarScopeExposer:customStoryMembersScopeExposer:customStoryMembersScopeServices:friendProfileScopeExposer:snapchatterServices:blizzardLogger:] */

undefined8 *
FUN_106ba8a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126f56c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d0e18;
    _objc_retain(puVar3);
    _objc_alloc();
    uVar2 = puVar1[0xd];
    func_0x00010c244ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049860();
    uVar5 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar5);
    _objc_retain(puVar4);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126d0e20;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c2923e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar5);
    uVar8 = param_14;
    func_0x00010c244ac0(param_14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_14;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03bea0();
    uVar10 = puVar1[2];
    puVar1[2] = puVar6;
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ba8e74; end: 106ba8e7b; -[SCSharedStoryProfileMembersSectionCreator sharedStoryProfileSectionOrder] */

undefined8 FUN_106ba8e74(void)

{
  return 3;
}



/* Entry: 106ba8e7c; end: 106ba8fbb; -[SCSharedStoryProfileMembersSectionCreator sharedStoryProfileOrderedConfig] */

void FUN_106ba8e7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar2 = PTR_PTR_1126c3ec8;
  _objc_alloc(PTR_PTR_1126c3ec8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d660(puVar2,param_2,2,uVar3);
  puVar4 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0,0,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar1,param_2,puVar2,puVar4,puVar5,1,1,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b12f8;
  _objc_alloc(PTR_PTR_1126b12f8);
  func_0x00010c22c300(param_1);
  func_0x00010c0322a0(puVar2,param_2,param_1,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ba8fbc; end: 106ba927f; -[SCSharedStoryProfileMembersSectionCreator section] */

void FUN_106ba8fbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126d0e28;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008de0(puVar1,param_2,uVar10,uVar12,uVar9,uVar3);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar12);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5a820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar12);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d0e30;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f58e34();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if ((uVar4 & 1) == 0) {
    func_0x000108f57dcc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f57db4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0436e0(puVar5,param_2,puVar6,0,puVar7,puVar1,
                      &PTR____CFConstantStringClassReference_110e76e38);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126d0e38;
  _objc_alloc();
  func_0x00010c01a200();
  puVar7 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  puVar8 = PTR_PTR_1126d0e40;
  _objc_alloc(PTR_PTR_1126d0e40);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c244ac0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008f00(puVar8,param_2,uVar13,uVar14,uVar9,uVar15,uVar12,uVar3,uVar10,
                      *(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar10);
  _objc_release(uVar9);
  func_0x00010c1f9240(puVar7,param_2,puVar8);
  puVar11 = PTR_PTR_1126d0e48;
  _objc_alloc(PTR_PTR_1126d0e48);
  func_0x00010c008d60();
  func_0x00010c222a60(puVar7,param_2,puVar11);
  _objc_release(puVar11);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106ba9280; end: 106ba92a7; -[SCSharedStoryProfileMembersSectionCreator actionHandler] */

void FUN_106ba9280(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba92a8; end: 106ba9367; -[SCSharedStoryProfileMembersSectionCreator .cxx_destruct] */

void FUN_106ba92a8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba9368; end: 106ba940b; -[SCSharedStoryProfileMembersSectionDataProviderUpdate initWithFriendIdsToSnapchatters:member:] */

undefined1 *
FUN_106ba9368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f56c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba940c; end: 106ba9413; -[SCSharedStoryProfileMembersSectionDataProviderUpdate friendIdsToSnapchatters] */

undefined8 FUN_106ba940c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ba9414; end: 106ba941b; -[SCSharedStoryProfileMembersSectionDataProviderUpdate members] */

undefined8 FUN_106ba9414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ba941c; end: 106ba944b; -[SCSharedStoryProfileMembersSectionDataProviderUpdate .cxx_destruct] */

void FUN_106ba941c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba944c; end: 106ba9763; -[SCSharedStoryProfileMembersSectionDataProvider initWithDataSource:friendsDataSource:snapchattersDataFetcher:bitmojiAvatarScopeExposer:avatarProvider:imageFetcher:currentUserId:queuePerformer:] */

undefined8 *
FUN_106ba944c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f56d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d0e08;
    _objc_alloc(PTR_PTR_1126d0e08);
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_opt_new(PTR__OBJC_CLASS___NSUUID_1126b0270);
    puVar5 = puVar4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bac0(0x4059000000000000,puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126aea98;
    _objc_alloc();
    puVar5 = PTR_PTR_1126d0e50;
    _objc_opt_class(PTR_PTR_1126d0e50);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd260();
    uVar2 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126d0e28;
    _objc_alloc();
    func_0x00010c008de0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_retain(puVar4);
    func_0x00010bf17a60(puVar4);
    uVar2 = puVar1[2];
    puVar1[2] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ba9764; end: 106ba986b; -[SCSharedStoryProfileMembersSectionDataProvider _updateHeaderModelHeight:] */

void FUN_106ba9764(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0e08;
  _objc_alloc(PTR_PTR_1126d0e08);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_opt_new(PTR__OBJC_CLASS___NSUUID_1126b0270);
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bac0(param_1,puVar1,param_3,puVar3,0,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc();
  puVar3 = PTR_PTR_1126d0e50;
  _objc_opt_class(PTR_PTR_1126d0e50);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar2,param_3,puVar3,puVar1);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined **)(param_2 + 8) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010bf64120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ba986c; end: 106ba9887; -[SCSharedStoryProfileMembersSectionDataProvider numberOfItemsInSection:] */

long FUN_106ba986c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar1);
  return lVar1 + 1;
}



/* Entry: 106ba9888; end: 106ba996b; -[SCSharedStoryProfileMembersSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106ba9888(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0e58;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0e58;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126d0e50;
  puStack_48 = puVar2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0e50;
  _objc_opt_class();
  ppuVar5 = &puStack_48;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(puVar1 + 0x10);
    _objc_retain(ppuVar5);
    func_0x00010bf51e00();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x106ba9a14;
    puStack_a8 = &UNK_11086b8d0;
    puStack_a0 = puVar1;
    uStack_98 = uVar6;
    _objc_retain();
    ppuVar4 = ppuVar5;
    func_0x000100504554(ppuVar5,&puStack_c0);
    _objc_release(ppuVar5);
    _objc_release(uStack_98);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106ba996c; end: 106ba9ab7; -[SCSharedStoryProfileMembersSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106ba996c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106ba9a14;
  puStack_48 = &UNK_11086b8d0;
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba9ab8; end: 106ba9c57; -[SCSharedStoryProfileMembersSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106ba9ab8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106ba9c58;
  puStack_90 = &UNK_110845ae0;
  puVar8 = auStack_80;
  _objc_copyWeak(auStack_88,puVar8);
  ppuVar1 = &puStack_a8;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126d0e58;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  puStack_78 = puVar2;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126d0e50;
  ppuStack_68 = ppuVar3;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  puStack_70 = puVar4;
  _objc_retainBlock();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_60 = ppuVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_88);
  puVar7 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(puVar7);
  _objc_retain(puVar8);
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bde5380();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106ba9c58; end: 106ba9c9f;  */

void FUN_106ba9c58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba9ca0; end: 106ba9d7f; -[SCSharedStoryProfileMembersSectionDataProvider _configureMemberCell:] */

void FUN_106ba9ca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5760);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c16dba0(param_3);
    func_0x00010c170b40(param_3);
  }
  puVar2 = PTR_DAT_1126a5768;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar3 = param_3;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(param_3);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0e05e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0860(param_3);
    _objc_release(uVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba9d80; end: 106ba9fb7; -[SCSharedStoryProfileMembersSectionDataProvider setUp] */

void FUN_106ba9d80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e0600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ba9fb8;
  puStack_88 = &UNK_110842a38;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfb8260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c25a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010bfa4860(*(undefined8 *)(param_1 + 0x60));
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106ba9fb8; end: 106baa017;  */

void FUN_106ba9fb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf885a0(param_3);
  _objc_release(param_3);
  func_0x00010bed91c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106baa018; end: 106baa0a7;  */

void FUN_106baa018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d0e60;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c25a4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0157e0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106baa0a8; end: 106baa0ef;  */

void FUN_106baa0a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


