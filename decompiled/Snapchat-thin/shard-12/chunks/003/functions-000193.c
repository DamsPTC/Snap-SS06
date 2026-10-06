/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f5c830; end: 108f5c837; -[SCSendToRecipientViewModel iconImage] */

undefined8 FUN_108f5c830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108f5c838; end: 108f5c83f; -[SCSendToRecipientViewModel iconBackgroundColor] */

undefined8 FUN_108f5c838(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108f5c840; end: 108f5c847; -[SCSendToRecipientViewModel officialBadgeType] */

undefined8 FUN_108f5c840(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108f5c848; end: 108f5c84f; -[SCSendToRecipientViewModel officialFriendmoji] */

undefined8 FUN_108f5c848(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108f5c850; end: 108f5c857; -[SCSendToRecipientViewModel viewStyle] */

undefined8 FUN_108f5c850(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108f5c858; end: 108f5c85f; -[SCSendToRecipientViewModel accessoryButtonViewModel] */

undefined8 FUN_108f5c858(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108f5c860; end: 108f5c92b; -[SCSendToRecipientViewModel .cxx_destruct] */

void FUN_108f5c860(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108f5c92c; end: 108f5c9b3; -[SCSendToSelectionItem initWithItemId:itemType:] */

undefined1 *
FUN_108f5c92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff568;
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



/* Entry: 108f5c9b4; end: 108f5c9d7; -[SCSendToSelectionItem copyWithZone:] */

undefined8 FUN_108f5c9b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5c9d8; end: 108f5ca4b; -[SCSendToSelectionItem hash] */

undefined8 * FUN_108f5c9d8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f5cad0;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108f5cad0;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108f5cad0;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108f5cad0:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108f5ca4c; end: 108f5caeb; -[SCSendToSelectionItem isEqual:] */

long FUN_108f5ca4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5cad0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108f5cad0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f5cad0;
    }
  }
  lVar3 = 1;
LAB_108f5cad0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5caec; end: 108f5caf3; -[SCSendToSelectionItem itemId] */

undefined8 FUN_108f5caec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5caf4; end: 108f5cafb; -[SCSendToSelectionItem itemType] */

undefined8 FUN_108f5caf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5cafc; end: 108f5cb07; -[SCSendToSelectionItem .cxx_destruct] */

void FUN_108f5cafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f5cb08; end: 108f5cd0f; -[SCSendToSelectionResult initWithMyStorySelected:myStoryPrivacyOverride:sharedStoriesSelected:customStoriesSelected:friendRecipientsSelected:groupRecipientsSelected:quickAddFriendsSelected:contactSnapchattersSelected:searchedUsersSelected:businessProfilesSelected:createHighlightSelected:] */

undefined8 *
FUN_108f5cb08(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ff570;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
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
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108f5cd10; end: 108f5cd33; -[SCSendToSelectionResult copyWithZone:] */

undefined8 FUN_108f5cd10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5cd34; end: 108f5ce07; -[SCSendToSelectionResult hash] */

ulong * FUN_108f5cd34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_108f5cf50:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5cf5c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_108f5cf5c;
                      }
                      goto LAB_108f5cf50;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f5cf5c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 108f5ce08; end: 108f5cf77; -[SCSendToSelectionResult isEqual:] */

long FUN_108f5ce08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5cf50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5cf5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_108f5cf5c;
                      }
                      goto LAB_108f5cf50;
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
LAB_108f5cf5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5cf78; end: 108f5cf7f; -[SCSendToSelectionResult myStorySelected] */

undefined1 FUN_108f5cf78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5cf80; end: 108f5cf87; -[SCSendToSelectionResult myStoryPrivacyOverride] */

undefined8 FUN_108f5cf80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5cf88; end: 108f5cf8f; -[SCSendToSelectionResult sharedStoriesSelected] */

undefined8 FUN_108f5cf88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5cf90; end: 108f5cf97; -[SCSendToSelectionResult customStoriesSelected] */

undefined8 FUN_108f5cf90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5cf98; end: 108f5cf9f; -[SCSendToSelectionResult friendRecipientsSelected] */

undefined8 FUN_108f5cf98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5cfa0; end: 108f5cfa7; -[SCSendToSelectionResult groupRecipientsSelected] */

undefined8 FUN_108f5cfa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5cfa8; end: 108f5cfaf; -[SCSendToSelectionResult quickAddFriendsSelected] */

undefined8 FUN_108f5cfa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f5cfb0; end: 108f5cfb7; -[SCSendToSelectionResult contactSnapchattersSelected] */

undefined8 FUN_108f5cfb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f5cfb8; end: 108f5cfbf; -[SCSendToSelectionResult searchedUsersSelected] */

undefined8 FUN_108f5cfb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f5cfc0; end: 108f5cfc7; -[SCSendToSelectionResult businessProfilesSelected] */

undefined8 FUN_108f5cfc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f5cfc8; end: 108f5cfcf; -[SCSendToSelectionResult createHighlightSelected] */

undefined1 FUN_108f5cfc8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f5cfd0; end: 108f5d053; -[SCSendToSelectionResult .cxx_destruct] */

void FUN_108f5cfd0(long param_1)

{
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



/* Entry: 108f5d054; end: 108f5d12b; -[SCSendToQueryState initWithQueryText:queryUuid:querySource:] */

undefined1 *
FUN_108f5d054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff578;
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



/* Entry: 108f5d12c; end: 108f5d14f; -[SCSendToQueryState copyWithZone:] */

undefined8 FUN_108f5d12c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5d150; end: 108f5d1cf; -[SCSendToQueryState hash] */

undefined8 * FUN_108f5d150(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f5d268:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5d274;
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
            goto LAB_108f5d274;
          }
          goto LAB_108f5d268;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f5d274:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f5d1d0; end: 108f5d28f; -[SCSendToQueryState isEqual:] */

long FUN_108f5d1d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5d268:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5d274;
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
            goto LAB_108f5d274;
          }
          goto LAB_108f5d268;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f5d274:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5d290; end: 108f5d297; -[SCSendToQueryState queryText] */

undefined8 FUN_108f5d290(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5d298; end: 108f5d29f; -[SCSendToQueryState queryUuid] */

undefined8 FUN_108f5d298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5d2a0; end: 108f5d2a7; -[SCSendToQueryState querySource] */

undefined8 FUN_108f5d2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5d2a8; end: 108f5d2e3; -[SCSendToQueryState .cxx_destruct] */

void FUN_108f5d2a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f5d2e4; end: 108f5d3a3; -[SCSelectRecipientsConfiguration initWithFriendsIncluded:recentsIncluded:storiesIncluded:bestOfSpectaclesIncluded:contactsSnapchatterIncluded:mischiefsIncluded:friendIdsToExclude:] */

undefined1 *
FUN_108f5d2e4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ff580;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5d3a4; end: 108f5d3c7; -[SCSelectRecipientsConfiguration copyWithZone:] */

undefined8 FUN_108f5d3a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5d3c8; end: 108f5d457; -[SCSelectRecipientsConfiguration hash] */

ulong * FUN_108f5d3c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  ulong uVar9;
  
  puVar3 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar8 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar6;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_28 = (ulong)*(byte *)(param_1 + 0xd);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000107c3191c(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (ulong *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5d52c;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((*(char *)((long)puVar3 + 8) != param_3[8] || (*(char *)((long)puVar3 + 9) != param_3[9]))
         || (*(char *)((long)puVar3 + 10) != param_3[10])))) ||
       (((*(char *)((long)puVar3 + 0xb) != param_3[0xb] ||
         (*(char *)((long)puVar3 + 0xc) != param_3[0xc])) ||
        (*(char *)((long)puVar3 + 0xd) != param_3[0xd])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_108f5d52c;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f5d52c;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_108f5d52c:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 108f5d458; end: 108f5d547; -[SCSelectRecipientsConfiguration isEqual:] */

long FUN_108f5d458(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5d52c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       (((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
         (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
        (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))))) {
      lVar3 = 0;
      goto LAB_108f5d52c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f5d52c;
    }
  }
  lVar3 = 1;
LAB_108f5d52c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5d548; end: 108f5d54f; -[SCSelectRecipientsConfiguration friendsIncluded] */

undefined1 FUN_108f5d548(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5d550; end: 108f5d557; -[SCSelectRecipientsConfiguration recentsIncluded] */

undefined1 FUN_108f5d550(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f5d558; end: 108f5d55f; -[SCSelectRecipientsConfiguration storiesIncluded] */

undefined1 FUN_108f5d558(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f5d560; end: 108f5d567; -[SCSelectRecipientsConfiguration bestOfSpectaclesIncluded] */

undefined1 FUN_108f5d560(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108f5d568; end: 108f5d56f; -[SCSelectRecipientsConfiguration contactsSnapchatterIncluded] */

undefined1 FUN_108f5d568(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108f5d570; end: 108f5d577; -[SCSelectRecipientsConfiguration mischiefsIncluded] */

undefined1 FUN_108f5d570(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108f5d578; end: 108f5d57f; -[SCSelectRecipientsConfiguration friendIdsToExclude] */

undefined8 FUN_108f5d578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5d580; end: 108f5d58b; -[SCSelectRecipientsConfiguration .cxx_destruct] */

void FUN_108f5d580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f5d58c; end: 108f5d5cb;  */

void FUN_108f5d58c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init();
  uVar1 = puRam0000000113730420;
  puRam0000000113730420 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c166c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam0000000113730420,PTR_s_setAlignment__112637520,1);
  return;
}



/* Entry: 108f5d5cc; end: 108f5d72f;  */

void FUN_108f5d5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar2);
  if (lRam0000000113730418 != -1) {
    func_0x000107c27d9c(0x113730418,&PTR___NSConcreteGlobalBlock_110acecd0);
  }
  uVar1 = uRam0000000113730420;
  _objc_retain(uRam0000000113730420);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  uVar5 = param_1;
  func_0x00010c04e840(puVar2);
  uVar4 = (undefined1)uVar5;
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uRam0000000113730428 = uVar4;
  return;
}



/* Entry: 108f5d730; end: 108f5d73b; +[SCUnifiedProfileBaseCollectionViewCell setIsLayoutOptimisationsEnabled:] */

void FUN_108f5d730(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam0000000113730428 = param_3;
  return;
}



/* Entry: 108f5d73c; end: 108f5d747; +[SCUnifiedProfileBaseCollectionViewCell isLayoutOptimisationsEnabled] */

undefined1 FUN_108f5d73c(void)

{
  return uRam0000000113730428;
}



/* Entry: 108f5d748; end: 108f5d8eb; -[SCUnifiedProfileBaseCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f5d748(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff588;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11277e250;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11277e254;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e258);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e258) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277e25c) = 0xffffffffffffffff;
    func_0x000108f7494c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e260);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277e260) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f5d8ec; end: 108f5dc13; -[SCUnifiedProfileBaseCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5d8ec(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126ff588;
  uStack_a0 = param_5;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_5;
  func_0x00010bf20c00();
  pdVar1 = (double *)(param_5 + (long)_DAT_11277e264);
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
    lVar8 = (long)_DAT_11277e268;
    uVar7 = (uint)*(ulong *)(param_5 + lVar8);
    dVar12 = 0.0;
    if ((*(ulong *)(param_5 + lVar8) & 1) != 0) {
      func_0x00010b816670();
      uVar7 = (uint)*(undefined8 *)(param_5 + lVar8);
      dVar12 = param_1;
    }
    dVar13 = 0.0;
    if ((uVar7 >> 1 & 1) != 0) {
      func_0x00010b816670();
      dVar13 = param_1;
    }
    uVar2 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_1 + 0.0;
    param_2 = dVar12 + param_2;
    param_4 = param_4 - (dVar12 + dVar13);
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277e258;
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar9));
    uVar2 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bea22a0(param_5);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_5 + lVar9);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_5 + (long)_DAT_11277e26c);
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 != lVar10) {
      func_0x00010c15cda0(*(undefined8 *)(param_5 + lVar9));
    }
    uVar2 = param_5;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(ulong *)(param_5 + lVar9);
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar2);
    if (uVar6 != uVar11) {
      uVar2 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cda0();
      _objc_release(uVar2);
    }
    uVar7 = (uint)*(ulong *)(param_5 + lVar8);
    if ((*(ulong *)(param_5 + lVar8) & 1) != 0) {
      dVar12 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      dVar13 = param_1;
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      dVar14 = dVar13;
      func_0x00010b816670();
      dVar15 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar16 = dVar15;
      func_0x00010b816670();
      func_0x00010b816528(dVar12,dVar13 - dVar14,dVar15,dVar16);
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + (long)_DAT_11277e270));
      uVar7 = (uint)*(undefined8 *)(param_5 + lVar8);
    }
    if ((uVar7 >> 1 & 1) != 0) {
      dVar12 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      dVar13 = param_1;
      _CGRectGetMaxY(param_1,param_2,param_3,param_4);
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar14 = param_1;
      func_0x00010b816670();
      func_0x00010b816528(dVar12,dVar13,param_1,dVar14);
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + (long)_DAT_11277e274));
    }
  }
  return;
}



/* Entry: 108f5dc14; end: 108f5dc77; -[SCUnifiedProfileBaseCollectionViewCell drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5dc14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff588;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_drawRect__1125271c8);
  lVar2 = (long)_DAT_11277e278;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108f5dc78; end: 108f5dce7; -[SCUnifiedProfileBaseCollectionViewCell applyLayoutAttributes:] */

void FUN_108f5dc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126ff588;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108f5dce8; end: 108f5dd87; -[SCUnifiedProfileBaseCollectionViewCell setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5dce8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar2 = &puStack_30;
  puVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)puVar1) {
    puStack_28 = PTR_PTR_1126ff588;
    puStack_30 = param_1;
    _objc_msgSendSuper2(&puStack_30,PTR_s_setHighlighted__112647c38,param_3);
    if (((int)param_3 == 0) ||
       (ppuVar2 = (undefined1 **)param_1, func_0x00010c22dc20(), ((ulong)ppuVar2 & 1) == 0)) {
      func_0x000108f7491c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f7492c();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1795e0(*(undefined8 *)(param_1 + _DAT_11277e26c));
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 108f5dd88; end: 108f5dd9f; -[SCUnifiedProfileBaseCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5dd88(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277e27c);
                    /* WARNING: Could not recover jumptable at 0x00010bea22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,
             PTR_s__setBackgroundViewsWithRoundedCo_112586250);
  return;
}



/* Entry: 108f5dda0; end: 108f5de67; -[SCUnifiedProfileBaseCollectionViewCell setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5dda0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = (long)_DAT_11277e268;
  if (*(long *)(param_1 + lVar2) != param_3) {
    *(long *)(param_1 + lVar2) = param_3;
    puVar1 = (undefined8 *)(param_1 + _DAT_11277e264);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar5;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    if ((*(byte *)(param_1 + lVar2) & 1) != 0) {
      func_0x00010be3a920(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e270));
    if ((*(byte *)(param_1 + lVar2) >> 1 & 1) != 0) {
      func_0x00010be39620(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e274));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108f5de68; end: 108f5deef; -[SCUnifiedProfileBaseCollectionViewCell setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5de68(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e260;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277e270),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277e274),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f5def0; end: 108f5df73; -[SCUnifiedProfileBaseCollectionViewCell gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f5def0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar2 = &lStack_30;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11277e280);
  if ((uVar1 == 0) || ((**(code **)(uVar1 + 0x10))(), (uVar1 & 1) == 0)) {
    puStack_28 = PTR_PTR_1126ff588;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_gestureRecognizerShouldBegin__1125ce098,param_3);
  }
  else {
    plVar2 = (long *)0x0;
  }
  _objc_release(param_3);
  return (undefined1 *)plVar2;
}



/* Entry: 108f5df74; end: 108f5dfb3; -[SCUnifiedProfileBaseCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108f5df74(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108f5dfb4; end: 108f5dfb7; -[SCUnifiedProfileBaseCollectionViewCell handleTapAction] */

void FUN_108f5dfb4(void)

{
  return;
}



/* Entry: 108f5dfb8; end: 108f5dfbf; -[SCUnifiedProfileBaseCollectionViewCell canHandleLongPressAction] */

undefined8 FUN_108f5dfb8(void)

{
  return 0;
}



/* Entry: 108f5dfc0; end: 108f5dfc3; -[SCUnifiedProfileBaseCollectionViewCell handleLongPressAction] */

void FUN_108f5dfc0(void)

{
  return;
}



/* Entry: 108f5dfc4; end: 108f5dfcb; -[SCUnifiedProfileBaseCollectionViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_108f5dfc4(void)

{
  return 1;
}



/* Entry: 108f5dfcc; end: 108f5e003; -[SCUnifiedProfileBaseCollectionViewCell setOnFirstFullContentDraw:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5dfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e278);
  *(undefined8 *)(param_1 + _DAT_11277e278) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f5e004; end: 108f5e007; -[SCUnifiedProfileBaseCollectionViewCell _didSingleTap:] */

void FUN_108f5e004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleTapAction_1125d24d0);
  return;
}



/* Entry: 108f5e008; end: 108f5e0ab; -[SCUnifiedProfileBaseCollectionViewCell _didLongPress:] */

void FUN_108f5e008(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    uVar3 = param_1;
    func_0x00010bf2cbc0();
    if ((int)uVar3 != 0) {
      func_0x00010bfd1780(param_1);
    }
  }
  else if ((lVar2 == 3) && (uVar3 = param_1, func_0x00010bf2cbc0(), (uVar3 & 1) == 0)) {
    func_0x00010c09ef00(param_3,param_2,param_1);
    uVar3 = param_1;
    func_0x00010bf20c00();
    iVar1 = (int)uVar3;
    _CGRectContainsPoint();
    if (iVar1 != 0) {
      func_0x00010bfd2ca0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f5e0ac; end: 108f5e123; -[SCUnifiedProfileBaseCollectionViewCell cardBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e0ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277e26c;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277e25c);
    lVar1 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bea22a0(param_1,param_2,uVar2);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f5e124; end: 108f5e16b; -[SCUnifiedProfileBaseCollectionViewCell traitCollectionDidChange:] */

void FUN_108f5e124(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bedfc80(param_1);
  return;
}



/* Entry: 108f5e16c; end: 108f5e35f; -[SCUnifiedProfileBaseCollectionViewCell _setBackgroundViewsWithRoundedCorner:roundedRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = (long)_DAT_11277e25c;
  lVar7 = (long)_DAT_11277e27c;
  uVar3 = param_5;
  if (*(long *)(param_5 + lVar6) == param_7) {
    puVar1 = (undefined8 *)(param_5 + lVar7);
    _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  puVar1 = (undefined8 *)(param_5 + lVar7);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(long *)(param_5 + lVar6) = param_7;
  puVar4 = PTR__CGRectZero_110347608;
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)PTR__CGRectZero_110347608,
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if ((uVar3 & 1) != 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277e264);
  uVar5 = *(undefined8 *)puVar4;
  uVar9 = *(undefined8 *)(puVar4 + 0x18);
  uVar8 = *(undefined8 *)(puVar4 + 0x10);
  puVar1[1] = *(undefined8 *)(puVar4 + 8);
  *puVar1 = uVar5;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  lVar6 = (long)_DAT_11277e26c;
  if (*(long *)(param_5 + lVar6) == 0) {
    puVar4 = PTR_PTR_1126b0ca8;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar4;
    _objc_release(uVar5);
    func_0x00010c0762e0(PTR_PTR_1126b4160);
    func_0x00010c1b2240(*(undefined8 *)(param_5 + lVar6));
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c1842e0(0x4024000000000000,uVar5);
    func_0x000108f7491c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1795e0(*(undefined8 *)(param_5 + lVar6));
    _objc_release(uVar5);
    func_0x00010bedfc80(param_5);
    func_0x00010c1fe7a0(0,0x3ff0000000000000,*(undefined8 *)(param_5 + lVar6));
    func_0x00010c1fe800(0x3ff0000000000000,*(undefined8 *)(param_5 + lVar6));
    func_0x00010c1fe840(0x4004000000000000,*(undefined8 *)(param_5 + lVar6));
    func_0x00010c066fa0(*(undefined8 *)(param_5 + (long)_DAT_11277e258));
  }
  else {
    func_0x00010c15cda0(*(undefined8 *)(param_5 + (long)_DAT_11277e258));
  }
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar6));
  uVar3 = 10;
  if ((~(uint)param_7 & 3) == 0) {
    uVar3 = 0xb;
  }
  uVar2 = uVar3 | 4;
  if ((~(uint)param_7 & 0xc) != 0) {
    uVar2 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fe790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar6),PTR_s_setShadowEdges__11265d408,uVar2);
  return;
}



/* Entry: 108f5e360; end: 108f5e40f; -[SCUnifiedProfileBaseCollectionViewCell _updateShadowColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e360(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292b20();
  _objc_release(puVar1);
  if (lRam00000001138466f0 < 3) {
    if (puVar2 != (undefined *)0x2) {
      func_0x000108f7495c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108f5e3e4;
    }
    uVar3 = 0xd4;
  }
  else {
    uVar3 = 0xd6;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_108f5e3e4:
  func_0x00010c1fe740(*(undefined8 *)(param_1 + _DAT_11277e26c),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f5e410; end: 108f5e493; -[SCUnifiedProfileBaseCollectionViewCell _initTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e410(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277e270;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e258),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108f5e494; end: 108f5e517; -[SCUnifiedProfileBaseCollectionViewCell _initBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e494(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277e274;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e258),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108f5e518; end: 108f5e527; -[SCUnifiedProfileBaseCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5e518(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e25c);
}



/* Entry: 108f5e528; end: 108f5e537; -[SCUnifiedProfileBaseCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5e528(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e284);
}



/* Entry: 108f5e538; end: 108f5e577; -[SCUnifiedProfileBaseCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e284;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f5e578; end: 108f5e587; -[SCUnifiedProfileBaseCollectionViewCell separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5e578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e268);
}



/* Entry: 108f5e588; end: 108f5e597; -[SCUnifiedProfileBaseCollectionViewCell separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5e588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e260);
}



/* Entry: 108f5e598; end: 108f5e5a7; -[SCUnifiedProfileBaseCollectionViewCell cardContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5e598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e258);
}



/* Entry: 108f5e5a8; end: 108f5e5b7; -[SCUnifiedProfileBaseCollectionViewCell isParentScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5e5a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e280);
}



/* Entry: 108f5e5b8; end: 108f5e5c3; -[SCUnifiedProfileBaseCollectionViewCell setIsParentScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e5b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108f5e5c4; end: 108f5e683; -[SCUnifiedProfileBaseCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e5c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e280,0);
  _objc_storeStrong(param_1 + _DAT_11277e258,0);
  _objc_storeStrong(param_1 + _DAT_11277e26c,0);
  _objc_storeStrong(param_1 + _DAT_11277e260,0);
  _objc_storeStrong(param_1 + _DAT_11277e284,0);
  _objc_storeStrong(param_1 + _DAT_11277e254,0);
  _objc_storeStrong(param_1 + _DAT_11277e250,0);
  _objc_storeStrong(param_1 + _DAT_11277e278,0);
  _objc_storeStrong(param_1 + _DAT_11277e274,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e270,0);
  return;
}



/* Entry: 108f5e684; end: 108f5e6b7; -[SCUnifiedProfileButtonCollectionViewCell initWithFrame:] */

void FUN_108f5e684(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff590;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 108f5e6b8; end: 108f5ea37; -[SCUnifiedProfileButtonCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5e6b8(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar13 = (long)_DAT_11277e288;
  uVar11 = *(ulong *)(param_2 + lVar13);
  _objc_retain(param_4);
  _objc_retain(uVar11);
  if (param_4 == uVar11) {
    _objc_release(uVar11);
    uVar11 = param_4;
  }
  else {
    if (uVar11 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_4;
      func_0x00010c071ae0();
      _objc_release(uVar11);
      _objc_release(param_4);
      if ((uVar1 & 1) != 0) goto LAB_108f5e9f4;
    }
    uVar11 = param_4;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_2 + lVar13);
    *(ulong *)(param_2 + lVar13) = uVar11;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126dcb30;
    uVar12 = *(ulong *)(param_2 + lVar13);
    _objc_retain(uVar12);
    _objc_opt_class(puVar2);
    uVar1 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar2);
    uVar11 = uVar12;
    if ((uVar1 & 1) == 0) {
      uVar11 = 0;
    }
    _objc_retain(uVar11);
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11277e28c;
    uVar10 = *(undefined8 *)(param_2 + lVar13);
    *(undefined **)(param_2 + lVar13) = puVar2;
    _objc_release(uVar10);
    if (uVar11 != 0) {
      uVar10 = *(undefined8 *)(param_2 + lVar13);
      uVar1 = uVar12;
      func_0x00010c2711a0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar10);
      _objc_release(uVar1);
      uVar10 = *(undefined8 *)(param_2 + lVar13);
      uVar1 = uVar12;
      func_0x00010bfe6ac0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(uVar10);
      _objc_release(uVar1);
      func_0x00010befbd60(*(undefined8 *)(param_2 + lVar13));
      func_0x00010c20eaa0(*(undefined8 *)(param_2 + lVar13));
      func_0x00010c1aab40(*(undefined8 *)(param_2 + lVar13));
      func_0x00010c076be0(uVar12);
      func_0x00010c1beb60(*(undefined8 *)(param_2 + lVar13));
      func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar13));
    }
    lVar3 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar13));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    uVar7 = uVar6;
    func_0x00010bf49420(param_1 * 0.95);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(param_2);
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar11);
LAB_108f5e9f4:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108f5ea38; end: 108f5ea43; +[SCUnifiedProfileButtonCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f5ea38(void)

{
  return;
}



/* Entry: 108f5ea44; end: 108f5eaf3; -[SCUnifiedProfileButtonCollectionViewCell _handleButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5ea44(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126dcb30;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e288);
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
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277e290);
    func_0x00010c0cfdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f5eaf4; end: 108f5eb03; -[SCUnifiedProfileButtonCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5eaf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e290);
}



/* Entry: 108f5eb04; end: 108f5eb43; -[SCUnifiedProfileButtonCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5eb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e290;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f5eb44; end: 108f5eb53; -[SCUnifiedProfileButtonCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5eb44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e288);
}



/* Entry: 108f5eb54; end: 108f5eba3; -[SCUnifiedProfileButtonCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5eb54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e288,0);
  _objc_storeStrong(param_1 + _DAT_11277e290,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e28c,0);
  return;
}



/* Entry: 108f5eba4; end: 108f5ec6f; -[SCUnifiedProfileEmptyStateCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f5eba4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277e294;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e298);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e298) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f5ec70; end: 108f5ec8b;  */

void FUN_108f5ec70(void)

{
  _objc_opt_new(PTR_PTR_1126b56f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f5ec8c; end: 108f5eec3; -[SCUnifiedProfileEmptyStateCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5ec8c(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ff598;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar8 = -32.0;
  param_1 = param_1 + -32.0;
  lVar6 = (long)_DAT_11277e294;
  func_0x00010c2256c0(param_1,*(undefined8 *)(param_2 + lVar6));
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar6));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_2 + lVar6));
  lVar7 = (long)_DAT_11277e298;
  lVar1 = *(long *)(param_2 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
      _CGRectGetHeight();
      dVar8 = 12.0;
      dVar9 = param_1 + 12.0;
      uVar4 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0();
      dVar9 = dVar9 + dVar8;
      _objc_release(uVar4);
      func_0x00010bf20c00(param_2);
      _CGRectGetMidY();
      goto LAB_108f5edcc;
    }
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  dVar9 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetHeight();
LAB_108f5edcc:
  param_1 = param_1 + dVar9 * -0.5;
  dVar9 = param_1;
  func_0x00010c2172c0(param_1,*(undefined8 *)(param_2 + lVar6));
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  uVar5 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202c80(dVar9,dVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a840(dVar9);
  _objc_release(uVar4);
  dVar8 = 12.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetHeight();
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2172c0(param_1 + 12.0 + dVar8);
  _objc_release(uVar4);
  return;
}



/* Entry: 108f5eec4; end: 108f5eecb; -[SCUnifiedProfileEmptyStateCollectionViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_108f5eec4(void)

{
  return 0;
}



/* Entry: 108f5eecc; end: 108f5f14f; -[SCUnifiedProfileEmptyStateCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5eecc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e29c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108f5f138;
    }
    puVar2 = PTR_PTR_1126dcb38;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar1 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar1 = uVar5;
    func_0x00010c26b700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277e294));
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c26b700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010bf25bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = (long)_DAT_11277e298;
    uVar3 = *(ulong *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010c1a7f60();
    }
    else {
      _objc_release();
      if (uVar3 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x00010c050900();
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar4);
        _objc_release(puVar2);
      }
      uVar3 = uVar5;
      func_0x00010bf25bc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar5);
LAB_108f5f138:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f5f150; end: 108f5f15b; +[SCUnifiedProfileEmptyStateCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f5f150(void)

{
  return;
}


