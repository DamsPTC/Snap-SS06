/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a1d1c8; end: 106a1d2d3; -[SCMemoriesStoryEditorIndexPathChangeResult initWithInsertedIndexPaths:deletedIndexPaths:movedFromIndexPaths:movedToIndexPaths:] */

undefined1 *
FUN_106a1d1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f43f8;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a1d2d4; end: 106a1d2f7; -[SCMemoriesStoryEditorIndexPathChangeResult copyWithZone:] */

undefined8 FUN_106a1d2d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a1d2f8; end: 106a1d383; -[SCMemoriesStoryEditorIndexPathChangeResult hash] */

undefined8 * FUN_106a1d2f8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a1d434:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a1d440;
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
              goto LAB_106a1d440;
            }
            goto LAB_106a1d434;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a1d440:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a1d384; end: 106a1d45b; -[SCMemoriesStoryEditorIndexPathChangeResult isEqual:] */

long FUN_106a1d384(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a1d434:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a1d440;
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
              goto LAB_106a1d440;
            }
            goto LAB_106a1d434;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a1d440:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a1d45c; end: 106a1d463; -[SCMemoriesStoryEditorIndexPathChangeResult insertedIndexPaths] */

undefined8 FUN_106a1d45c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a1d464; end: 106a1d46b; -[SCMemoriesStoryEditorIndexPathChangeResult deletedIndexPaths] */

undefined8 FUN_106a1d464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a1d46c; end: 106a1d473; -[SCMemoriesStoryEditorIndexPathChangeResult movedFromIndexPaths] */

undefined8 FUN_106a1d46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a1d474; end: 106a1d47b; -[SCMemoriesStoryEditorIndexPathChangeResult movedToIndexPaths] */

undefined8 FUN_106a1d474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a1d47c; end: 106a1d4c3; -[SCMemoriesStoryEditorIndexPathChangeResult .cxx_destruct] */

void FUN_106a1d47c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a1d4c4; end: 106a1d5cf; -[SCMemoriesStoryEditorEntryChangeResult initWithTitle:snapsOrder:deletedSnaps:insertedSnaps:] */

undefined1 *
FUN_106a1d4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4400;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a1d5d0; end: 106a1d5f3; -[SCMemoriesStoryEditorEntryChangeResult copyWithZone:] */

undefined8 FUN_106a1d5d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a1d5f4; end: 106a1d67f; -[SCMemoriesStoryEditorEntryChangeResult hash] */

undefined8 * FUN_106a1d5f4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a1d730:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a1d73c;
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
              goto LAB_106a1d73c;
            }
            goto LAB_106a1d730;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a1d73c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a1d680; end: 106a1d757; -[SCMemoriesStoryEditorEntryChangeResult isEqual:] */

long FUN_106a1d680(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a1d730:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a1d73c;
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
              goto LAB_106a1d73c;
            }
            goto LAB_106a1d730;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a1d73c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a1d758; end: 106a1d75f; -[SCMemoriesStoryEditorEntryChangeResult title] */

undefined8 FUN_106a1d758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a1d760; end: 106a1d767; -[SCMemoriesStoryEditorEntryChangeResult snapsOrder] */

undefined8 FUN_106a1d760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a1d768; end: 106a1d76f; -[SCMemoriesStoryEditorEntryChangeResult deletedSnaps] */

undefined8 FUN_106a1d768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a1d770; end: 106a1d777; -[SCMemoriesStoryEditorEntryChangeResult insertedSnaps] */

undefined8 FUN_106a1d770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a1d778; end: 106a1d7bf; -[SCMemoriesStoryEditorEntryChangeResult .cxx_destruct] */

void FUN_106a1d778(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a1d7c0; end: 106a1d893; -[SCMemoriesStoryEditorScope initWithEntry:storyEditorType:storyEditorDelegate:uiContainer:] */

undefined1 *
FUN_106a1d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4408;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a1d894; end: 106a1d89b; -[SCMemoriesStoryEditorScope entry] */

undefined8 FUN_106a1d894(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a1d89c; end: 106a1d8b3; -[SCMemoriesStoryEditorScope storyEditorDelegate] */

void FUN_106a1d89c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a1d8b4; end: 106a1d8bb; -[SCMemoriesStoryEditorScope uiContainer] */

undefined8 FUN_106a1d8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a1d8bc; end: 106a1d8c3; -[SCMemoriesStoryEditorScope storyEditorType] */

undefined8 FUN_106a1d8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a1d8c4; end: 106a1d8fb; -[SCMemoriesStoryEditorScope .cxx_destruct] */

void FUN_106a1d8c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a1d8fc; end: 106a1d967; -[SCMemoriesStoryEditorUIContainer initWithNavigationController:] */

undefined1 * FUN_106a1d8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4410;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a1d968; end: 106a1d9b7; -[SCMemoriesStoryEditorUIContainer attachUI:] */

void FUN_106a1d968(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a1d9b8; end: 106a1d9cb; -[SCMemoriesStoryEditorUIContainer detachUI:] */

void FUN_106a1d9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a1d9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 106a1d9cc; end: 106a1d9ff; -[SCMemoriesStoryEditorUIContainer .cxx_destruct] */

void FUN_106a1d9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a1da00; end: 106a1da6b; -[SCChatAudioNoteRecordingSessionMetrics init] */

undefined1 * FUN_106a1da00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4418;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    puVar2 = PTR_PTR_1126ba4f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a1da6c; end: 106a1db4f; -[SCChatAudioNoteRecordingSessionMetrics beginWithType:] */

void FUN_106a1da6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_2 + 0x30;
  _os_unfair_lock_lock();
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x00010be54e80(param_2);
    lVar3 = param_2;
    func_0x00010be08460();
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3;
  _objc_release(uVar4);
  *(long *)(param_2 + 0x18) = param_4;
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e67958;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e22dd8;
  if (param_4 != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  func_0x0001084612c4(uVar4,ppuVar2,1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x30);
  return;
}



/* Entry: 106a1db50; end: 106a1dc0f; -[SCChatAudioNoteRecordingSessionMetrics markCaptureStarted] */

void FUN_106a1db50(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  double dVar4;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  if ((*(long *)(param_1 + 0x10) != 0) && (dVar4 = *(double *)(param_1 + 0x20), 0.0 < dVar4)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e67958;
    if (*(long *)(param_1 + 0x18) != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22dd8;
    if (*(long *)(param_1 + 0x18) != 2) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    _CACurrentMediaTime();
    func_0x000108461a0c(uVar3,ppuVar2,(long)((dVar4 - *(double *)(param_1 + 0x20)) * 1000.0));
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 106a1dc10; end: 106a1dc67; -[SCChatAudioNoteRecordingSessionMetrics markGestureEnded] */

void FUN_106a1dc10(long param_1)

{
  double dVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  if ((*(long *)(param_1 + 0x10) != 0) && (dVar1 = *(double *)(param_1 + 0x28), dVar1 == 0.0)) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x28) = dVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 106a1dc68; end: 106a1dd43; -[SCChatAudioNoteRecordingSessionMetrics markRecordedDuration:atMaxDuration:] */

void FUN_106a1dc68(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_2 + 0x30);
  if ((((param_4 & 1) == 0) && (0.0 < *(double *)(param_2 + 0x20))) &&
     (0.0 < *(double *)(param_2 + 0x28))) {
    param_1 = (*(double *)(param_2 + 0x28) - *(double *)(param_2 + 0x20)) - param_1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    uVar3 = *(undefined8 *)(param_2 + 8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e67958;
    if (*(long *)(param_2 + 0x18) != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22dd8;
    if (*(long *)(param_2 + 0x18) != 2) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    func_0x000108461ba0(uVar3,ppuVar2,(long)(param_1 * 1000.0));
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x30);
  return;
}



/* Entry: 106a1dd44; end: 106a1ddab; -[SCChatAudioNoteRecordingSessionMetrics endWithOutcome:] */

void FUN_106a1dd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  _os_unfair_lock_lock(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00010be54e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e67998);
  }
  else {
    func_0x00010be08460(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 106a1ddac; end: 106a1ddff; -[SCChatAudioNoteRecordingSessionMetrics endIfActiveWithOutcome:] */

void FUN_106a1ddac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _os_unfair_lock_lock(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010be08460(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 106a1de00; end: 106a1deab; -[SCChatAudioNoteRecordingSessionMetrics _emitStopWithOutcome:] */

void FUN_106a1de00(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _os_unfair_lock_assert_owner(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_retain(uVar3);
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 - 1U < 7) {
    ppuVar5 = (undefined **)(&PTR_PTR_110953788)[param_3 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e61358;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e67958;
  if (lVar4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e22dd8;
  if (lVar4 != 2) {
    ppuVar2 = ppuVar1;
  }
  func_0x000108461438(*(undefined8 *)(param_1 + 8),ppuVar5,ppuVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106a1deac; end: 106a1deef; -[SCChatAudioNoteRecordingSessionMetrics _logInvalidWithReason:] */

void FUN_106a1deac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x30);
  func_0x000108461898(*(undefined8 *)(param_1 + 8),param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a1def0; end: 106a1df1f; -[SCChatAudioNoteRecordingSessionMetrics .cxx_destruct] */

void FUN_106a1def0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a1df20; end: 106a1e1c3; -[SCChatInputAudioNoteController initWithAudioNotePlayer:chatLogger:valdiRuntimeProvider:conversationEventObservable:messagingExperimentService:applicationStateProvider:inputScopeContext:] */

undefined8 *
FUN_106a1df20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f4420;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_8;
    _objc_release(uVar2);
    puVar1[0x18] = param_9;
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cfc88;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    func_0x00010c209fc0(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a1e1c4; end: 106a1e1f7;  */

void FUN_106a1e1c4(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a1e1f8; end: 106a1e237;  */

void FUN_106a1e1f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0f5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a1e238; end: 106a1e25f; -[SCChatInputAudioNoteController audioNoteRecordEvents] */

void FUN_106a1e238(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a1e260; end: 106a1e287; -[SCChatInputAudioNoteController audioNoteRecordSessionBeganEvents] */

void FUN_106a1e260(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a1e288; end: 106a1e357; -[SCChatInputAudioNoteController audioNoteRecorder] */

void FUN_106a1e288(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0800();
    _objc_release(lVar1);
    lVar1 = param_1;
    if (lVar2 == 3) {
      func_0x00010bdf4660();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar2 != 4) {
        puVar3 = PTR_PTR_1126cfc90;
        _objc_opt_new();
        uVar4 = *(undefined8 *)(param_1 + 8);
        *(undefined **)(param_1 + 8) = puVar3;
        _objc_release(uVar4);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,param_1);
        goto LAB_106a1e338;
      }
      func_0x00010bdf4680();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar4);
  }
LAB_106a1e338:
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a1e358; end: 106a1e40f; -[SCChatInputAudioNoteController _createSwiftRecorderV3] */

void FUN_106a1e358(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110953818);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cfc98;
  _objc_alloc(PTR_PTR_1126cfc98);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034e00(puVar2,param_2,uVar3,uVar1);
  _objc_release(uVar3);
  func_0x00010c18b5e0(puVar2,param_2,param_1);
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e1580(puVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a1e410; end: 106a1e453;  */

void FUN_106a1e410(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 != 0) {
    func_0x00010c2a0840(param_2);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a1e454; end: 106a1e563; -[SCChatInputAudioNoteController _createSwiftRecorderV4] */

void FUN_106a1e454(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110953838);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110953858);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110953878);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cfca0;
  _objc_alloc(PTR_PTR_1126cfca0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034e20(puVar4,param_2,uVar5,uVar1,uVar2,uVar3);
  _objc_release(uVar5);
  func_0x00010c18b5e0(puVar4,param_2,param_1);
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e1580(puVar4,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a1e564; end: 106a1e633;  */

void FUN_106a1e564(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 != 0) {
    func_0x00010c2a0840(param_2);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a1e634; end: 106a1e697; -[SCChatInputAudioNoteController trackAnimator] */

void FUN_106a1e634(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    func_0x00010c00ea00(0x3fc999999999999a);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106a1e698; end: 106a1e6db; -[SCChatInputAudioNoteController setInputItem:] */

void FUN_106a1e698(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xd0,param_3);
  func_0x00010bdc7540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a1e6dc; end: 106a1e6e7; -[SCChatInputAudioNoteController setChatScrollHandler:] */

void FUN_106a1e6dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106a1e6e8; end: 106a1e94f; -[SCChatInputAudioNoteController _addAudioTrack] */

void FUN_106a1e6e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    puVar2 = PTR_PTR_1126cfca8;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x28),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x28),param_2,1);
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0xd8));
    lVar1 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2793a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c0660c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c08df60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0x4010000000000000,uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf348e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0xe0;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0660c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106a1e950; end: 106a1e9d7; -[SCChatInputAudioNoteController _addLongPressToItem:] */

void FUN_106a1e950(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8340(0x3fb999999999999a,*(undefined8 *)(param_1 + 0x50));
    func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106a1e9d8; end: 106a1eb53; -[SCChatInputAudioNoteController _didLongPressItem:] */

void FUN_106a1e9d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010c09ef00(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar1 < 3) {
    if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be1c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,param_3,PTR_s__gestureDidBegin__112564bc8);
      return;
    }
    if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be1c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,param_3,PTR_s__gestureDidChange__112564bd0);
      return;
    }
  }
  else {
    if (lVar1 == 3) {
      lVar1 = param_3;
      func_0x00010c252440();
      if (lVar1 == 2) {
        uVar2 = *(undefined8 *)(param_3 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c083900();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          func_0x00010c209fc0(param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010be171f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__finishRecordingWithHaptic_112563618);
      return;
    }
    if (lVar1 == 4) {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c083900();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be01f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__discardHoldOnInputDisappear_11255e160)
        ;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be171d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__finishRecording_112563610);
      return;
    }
  }
  return;
}



/* Entry: 106a1eb54; end: 106a1ebfb; -[SCChatInputAudioNoteController _gestureDidBegin:] */

void FUN_106a1eb54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(long *)(param_3 + 0xe8) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  func_0x00010c209fc0(param_3);
  func_0x00010bf19240(*(undefined8 *)(param_3 + 0x40));
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x60));
  func_0x00010bdc5f00(param_3);
  func_0x00010be04fe0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be04cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__displayRecorderAndBegin_view__11255ecd0,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106a1ebfc; end: 106a1ee9b; -[SCChatInputAudioNoteController _gestureDidChange:] */

void FUN_106a1ebfc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  func_0x00010bf0f7c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = param_1;
  func_0x00010c28d180();
  _objc_release(uVar2);
  uVar5 = *(ulong *)(param_5 + 0x28);
  _objc_retain(uVar5);
  func_0x00010bf20c00(uVar5);
  _CGRectGetWidth();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar6 = uVar5;
  dVar7 = dVar9;
  func_0x00010c15b1c0(uVar5);
  func_0x00010c292b00(puVar3,param_6,uVar6);
  uVar6 = uVar5;
  func_0x00010bf2e460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar6);
  if (puVar3 == (undefined *)0x1) {
    dVar8 = dVar7;
    _CGRectGetMinX();
    _CGRectGetWidth(dVar7,param_2,param_3,param_4);
    dVar8 = dVar8 - dVar7;
  }
  else {
    dVar8 = dVar7;
    _CGRectGetMaxX(dVar7,param_2,param_3,param_4);
    _CGRectGetWidth(dVar7,param_2,param_3,param_4);
    dVar8 = dVar8 + dVar7;
  }
  bVar1 = dVar8 <= param_1;
  if (puVar3 != (undefined *)0x1) {
    bVar1 = param_1 <= dVar8;
  }
  uVar6 = uVar5;
  func_0x00010bf2e460();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  _objc_release(uVar6);
  uVar6 = 8;
  if (((uVar4 & 1) == 0) && (!bVar1)) {
    dVar9 = dVar9 * 0.5;
    bVar1 = param_1 != dVar9 && param_1 >= dVar9;
    if (puVar3 != (undefined *)0x1) {
      bVar1 = param_1 < dVar9;
    }
    uVar6 = 7;
    if (!bVar1) {
      uVar6 = 2;
    }
  }
  _objc_release(uVar5);
  uVar5 = param_5;
  func_0x00010c252440();
  if (uVar5 != uVar6) {
    func_0x00010c209fc0(param_5,param_6,uVar6);
    uVar6 = param_5;
    func_0x00010c252440();
    if ((long)uVar6 < 3) {
      if (1 < uVar6) {
        if (uVar6 == 2) {
          func_0x00010becf380(param_5);
        }
        goto LAB_106a1ee5c;
      }
    }
    else if (3 < uVar6 - 3) {
      if (uVar6 == 7) {
        func_0x00010becf340(param_5);
      }
      else if (uVar6 == 8) {
        puVar3 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar3);
        func_0x00010becf360(param_5);
      }
LAB_106a1ee5c:
      func_0x00010c2779a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_5);
      return;
    }
  }
  return;
}



/* Entry: 106a1ee9c; end: 106a1ef13; -[SCChatInputAudioNoteController _finishRecordingWithHaptic] */

void FUN_106a1ee9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if ((lVar1 - 2U < 7) && ((0x5bU >> (ulong)((uint)(lVar1 - 2U) & 0x1f) & 1) != 0)) {
    puVar2 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be171d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishRecording_112563610);
  return;
}



/* Entry: 106a1ef14; end: 106a1f027; -[SCChatInputAudioNoteController _finishRecording] */

void FUN_106a1ef14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0bb6a0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c255a40(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1820();
  _objc_release(uVar1);
  func_0x00010be35f00(param_1);
  func_0x00010becf380(param_1);
  lVar2 = param_1;
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc40();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c252440();
  if (lVar2 < 7) {
    if ((lVar2 != 1) && (lVar2 != 4)) {
      return;
    }
  }
  else if (lVar2 != 7) {
    if (lVar2 != 8) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3400(0);
    _objc_release(uVar1);
  }
  func_0x00010bf95c40(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,0);
  return;
}



/* Entry: 106a1f028; end: 106a1f1bb; -[SCChatInputAudioNoteController _transitionViewToStarted] */

void FUN_106a1f028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a1f0c8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bef6cc0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 106a1f1bc; end: 106a1f34b; -[SCChatInputAudioNoteController _transitionViewToHalfSlide] */

void FUN_106a1f1bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b280();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a1f27c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bef6cc0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 106a1f34c; end: 106a1f40b; -[SCChatInputAudioNoteController _transitionViewToHoveringCancelled] */

void FUN_106a1f34c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b220();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a1f40c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bef6cc0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 106a1f40c; end: 106a1f49b;  */

void FUN_106a1f40c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e67ab8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2e460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0f440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fe0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a1f49c; end: 106a1f59f; -[SCChatInputAudioNoteController _displayTrack] */

void FUN_106a1f49c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c1677c0(0,uVar3);
  func_0x00010c1a7f60(uVar3,param_2,0);
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a1f5a0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar3;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(uVar3);
  func_0x00010bef6cc0(lVar2,param_2,&puStack_60);
  _objc_release(lVar2);
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc40();
  _objc_release(param_1);
  _objc_release(lStack_38);
  _objc_release(uStack_40);
  _objc_release(lVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 106a1f5a0; end: 106a1f60b;  */

void FUN_106a1f5a0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0660c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08df60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a1f60c; end: 106a1f73f; -[SCChatInputAudioNoteController _hideTrack] */

void FUN_106a1f60c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  lVar2 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106a1f740;
  puStack_68 = &UNK_110841f80;
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  lStack_58 = lVar2;
  _objc_retain(lVar2);
  func_0x00010bef6cc0(lVar3,param_2,&puStack_80);
  _objc_release(lVar3);
  func_0x00010c2779a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106a1f7ac;
  puStack_90 = &UNK_110855e40;
  uStack_88 = uVar4;
  _objc_retain(uVar4);
  func_0x00010bef78c0(param_1,param_2,&puStack_a8);
  _objc_release(param_1);
  _objc_release(uStack_88);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 106a1f740; end: 106a1f7ab;  */

void FUN_106a1f740(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0660c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08df60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a1f7ac; end: 106a1f7bf;  */

void FUN_106a1f7ac(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106a1f7c0; end: 106a1f8cb; -[SCChatInputAudioNoteController _displayRecorderAndBegin:view:] */

void FUN_106a1f7c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  _objc_retain(param_5);
  func_0x00010c139e40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 106a1f8cc; end: 106a1f977;  */

void FUN_106a1f8cc(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a1f978;
  puStack_48 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a1f978; end: 106a1f9af;  */

void FUN_106a1f978(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be67de0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a1f9b0; end: 106a1facb; -[SCChatInputAudioNoteController _onAudioNotePlayerResetWithTouchPoint:view:] */

void FUN_106a1f9b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cfcb0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  lVar2 = param_2 + 0xe0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf610e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdd2200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007bc0(puVar1);
  lVar5 = param_2;
  func_0x00010bf0f520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c0a0();
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0f7c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c640(param_1);
  _objc_release(param_4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010c24de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_startAudioNoteRecordingAsynchron_1126711c8);
  return;
}



/* Entry: 106a1facc; end: 106a1fccb; -[SCChatInputAudioNoteController audioNoteTooltip] */

void FUN_106a1facc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c15b1c0();
  func_0x00010c292b00(puVar9);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b09c0;
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e67a78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67a78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051660();
  _objc_release(ppuVar3);
  func_0x00010c219b60(puVar2);
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010bf323c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010beef8c0(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c1cbe20(puVar2);
  puVar9 = puVar2;
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  *(undefined **)(puVar9 + 0xd8) = puVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar9 + 0x28),PTR_s_setStyle__1126614d0);
  return;
}



/* Entry: 106a1fccc; end: 106a1fcd7; -[SCChatInputAudioNoteController setStyle:] */

void FUN_106a1fccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_setStyle__1126614d0);
  return;
}



/* Entry: 106a1fcd8; end: 106a1fd13; -[SCChatInputAudioNoteController _backgroundColorForAudioPreview] */

void FUN_106a1fcd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff80000029;
  if (*(long *)(param_1 + 0xd8) != 2) {
    uVar1 = 0x21;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a1fd14; end: 106a1fd17; -[SCChatInputAudioNoteController didDeselectInputItem:] */

void FUN_106a1fd14(void)

{
  return;
}



/* Entry: 106a1fd18; end: 106a1fe83; -[SCChatInputAudioNoteController didSelectInputItem:] */

void FUN_106a1fd18(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  func_0x00010c209fc0(param_3,param_4,4);
  func_0x00010bf19240(*(undefined8 *)(param_3 + 0x40),param_4,2);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x60),param_4,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7bb8);
  func_0x00010be7e020(param_3);
  func_0x00010bec69e0(param_3);
  lVar2 = param_3 + 0xd0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0ed1a0();
  dVar5 = param_1;
  _objc_release(lVar2);
  lVar2 = param_3 + 0xd0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 + dVar5 * 0.5;
  _objc_release(lVar2);
  lVar2 = param_3 + 0xe0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3 + 0xd0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf51200(param_1,param_2,lVar3,param_4,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0xe0;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be04cc0(param_1,param_2,param_3,param_4,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a1fe84; end: 106a1feb3; -[SCChatInputAudioNoteController _startRecording] */

void FUN_106a1fe84(undefined8 param_1)

{
  func_0x00010bf0f520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24de80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a1feb4; end: 106a1feb7; -[SCChatInputAudioNoteController didCollapseInputItem:] */

void FUN_106a1feb4(void)

{
  return;
}



/* Entry: 106a1feb8; end: 106a1febb; -[SCChatInputAudioNoteController didUncollapseInputItem:] */

void FUN_106a1feb8(void)

{
  return;
}



/* Entry: 106a1febc; end: 106a1ff57; -[SCChatInputAudioNoteController inputViewDidDisappear] */

void FUN_106a1febc(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010bf07b60();
  uVar3 = 1;
  if (lVar1 != 0) {
    uVar3 = 2;
  }
  *(undefined8 *)(param_1 + 200) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c083900();
  _objc_release(uVar2);
  if ((((int)uVar3 != 0) && (uVar4 = param_1, func_0x00010c252440(), uVar4 < 9)) &&
     ((1L << (uVar4 & 0x3f) & 0x186U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be01f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__discardHoldOnInputDisappear_11255e160);
    return;
  }
  return;
}



/* Entry: 106a1ff58; end: 106a1ff5f; -[SCChatInputAudioNoteController inputViewDidAppear] */

void FUN_106a1ff58(long param_1)

{
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 106a1ff60; end: 106a20007; -[SCChatInputAudioNoteController _discardHoldOnInputDisappear] */

void FUN_106a1ff60(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c252440();
  if (uVar1 < 9) {
    if ((1L << (uVar1 & 0x3f) & 0x79U) != 0) {
      return;
    }
    if ((1L << (uVar1 & 0x3f) & 0x104U) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3400(0);
      _objc_release(uVar2);
    }
  }
  func_0x00010bf94a20(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c209fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be171d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishRecording_112563610);
  return;
}



/* Entry: 106a20008; end: 106a20057; -[SCChatInputAudioNoteController _sentSessionOutcome] */

undefined8 FUN_106a20008(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010bf07b60();
  if (lVar2 == 2) {
    uVar3 = 5;
  }
  else {
    uVar1 = 7;
    if (*(long *)(param_1 + 200) != 2) {
      uVar1 = 0;
    }
    uVar3 = 6;
    if (*(long *)(param_1 + 200) != 1) {
      uVar3 = uVar1;
    }
  }
  return uVar3;
}



/* Entry: 106a20058; end: 106a2012f; -[SCChatInputAudioNoteController audioNoteRecorderWillStartSuccessfully:] */

void FUN_106a20058(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 8) != param_3) {
    return;
  }
  func_0x00010c0bb260(*(undefined8 *)(param_1 + 0x40));
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c066120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb8d0;
  func_0x00010c123d40(PTR_PTR_1126cb8d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80));
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 1) {
    uVar4 = 2;
  }
  else {
    if (lVar1 != 4) {
      return;
    }
    uVar4 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,uVar4);
  return;
}



/* Entry: 106a20130; end: 106a2064f; -[SCChatInputAudioNoteController audioNoteRecorder:didFinishWithData:duration:] */

void FUN_106a20130(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  int iVar9;
  double dVar10;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  long lStack_150;
  double dStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  long lStack_f0;
  double dStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  double dStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  double dStack_78;
  
  dVar10 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + 8) != param_4) goto LAB_106a2061c;
  if (param_5 == 0) {
    func_0x00010c252440(param_2);
    bVar1 = false;
    iVar9 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf0f520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c2aa0();
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c252440();
    iVar9 = 0;
    if ((uVar2 == 2) && (dVar10 + -1.0 <= param_1)) {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c083900();
      iVar9 = (int)uVar7;
      _objc_release(uVar3);
    }
    if (param_1 == 0.0) {
      bVar1 = false;
    }
    else {
      func_0x00010c0bb9a0(param_1,*(undefined8 *)(param_2 + 0x40));
      bVar1 = true;
    }
  }
  uVar2 = param_2;
  func_0x00010c252440();
  if (uVar2 < 9) {
    if ((1L << (uVar2 & 0x3f) & 0x1d2U) == 0) {
      lVar5 = param_2 + 0xe0;
      if ((1L << (uVar2 & 0x3f) & 0x29U) == 0) {
        _objc_loadWeakRetained(lVar5);
        lVar6 = lVar5;
        func_0x00010c066120();
        _objc_retainAutoreleasedReturnValue();
        if (iVar9 == 0) goto LAB_106a2026c;
      }
      else {
        _objc_loadWeakRetained(lVar5);
        lVar6 = lVar5;
        func_0x00010c066120();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR_PTR_1126cb8d0;
      func_0x00010bfeb8a0(PTR_PTR_1126cb8d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar5 = param_2 + 0xe0;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010c066120();
      _objc_retainAutoreleasedReturnValue();
LAB_106a2026c:
      puVar4 = PTR_PTR_1126cb8d0;
      func_0x00010bfaffa0(PTR_PTR_1126cb8d0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(lVar6);
    _objc_release(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  uVar2 = param_2;
  func_0x00010c252440();
  if ((long)uVar2 < 4) {
    if (1 < uVar2 - 2) {
      if (uVar2 == 1) {
        func_0x00010bf95c40(*(undefined8 *)(param_2 + 0x40));
      }
      goto LAB_106a2061c;
    }
    if (bVar1) {
      if (iVar9 == 0) {
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_106a20660;
        puStack_c8 = &UNK_110844b80;
        uStack_c0 = param_2;
        _objc_retain(param_5);
        lStack_b8 = param_5;
        dStack_b0 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_e0);
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3400(param_1);
        _objc_release(uVar7);
        func_0x00010c209fc0(param_2);
        lVar5 = lStack_b8;
      }
      else {
        func_0x00010c209fc0(param_2);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106a20650;
        puStack_90 = &UNK_110844b80;
        uStack_88 = param_2;
        _objc_retain(param_5);
        lStack_80 = param_5;
        dStack_78 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_a8);
        lVar5 = lStack_80;
      }
      _objc_release(lVar5);
      goto LAB_106a2061c;
    }
    func_0x00010bf95c40(*(undefined8 *)(param_2 + 0x40));
  }
  else if (uVar2 == 4) {
    func_0x00010bf95c40(*(undefined8 *)(param_2 + 0x40));
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_106a206fc;
    puStack_1b0 = &UNK_110842e18;
    ppuVar8 = &puStack_1c8;
    uStack_1a8 = param_2;
LAB_106a2060c:
    func_0x000100162d98("APPSTORE",ppuVar8);
  }
  else {
    if (uVar2 == 5) {
      if (!bVar1) {
        func_0x00010bf95c40(*(undefined8 *)(param_2 + 0x40));
        puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_138 = 0xc2000000;
        uStack_130 = 0x106a206b0;
        puStack_128 = &UNK_110842e18;
        ppuVar8 = &puStack_140;
        uStack_120 = param_2;
        goto LAB_106a2060c;
      }
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_106a2069c;
      puStack_100 = &UNK_110844b80;
      uStack_f8 = param_2;
      _objc_retain(param_5);
      lStack_f0 = param_5;
      dStack_e8 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_118);
      lVar5 = lStack_f0;
    }
    else {
      if (uVar2 != 6) goto LAB_106a2061c;
      if (!bVar1) {
        func_0x00010bf95c40(*(undefined8 *)(param_2 + 0x40));
        puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_106a206f4;
        puStack_188 = &UNK_110842e18;
        ppuVar8 = &puStack_1a0;
        uStack_180 = param_2;
        goto LAB_106a2060c;
      }
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_106a206b8;
      puStack_160 = &UNK_110844b80;
      uStack_158 = param_2;
      _objc_retain(param_5);
      lStack_150 = param_5;
      dStack_148 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_178);
      lVar5 = lStack_150;
    }
    _objc_release(lVar5);
  }
  func_0x00010c209fc0(param_2);
LAB_106a2061c:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106a20650; end: 106a2065f;  */

void FUN_106a20650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__dismissHoldUIAndPresentPreviewW_11255e470,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a20660; end: 106a2069b;  */

void FUN_106a20660(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bea1340();
  func_0x00010bf95c40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__sendAudioNoteWithData_duration__1125853f8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a2069c; end: 106a206b7;  */

void FUN_106a2069c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__presentPreviewViewWithData_dura_11257cfe0,*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 106a206b8; end: 106a206f3;  */

void FUN_106a206b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bea1340();
  func_0x00010bf95c40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9f2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__sendFromTapToRecord_duration__112585658,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a206f4; end: 106a206fb;  */

void FUN_106a206f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanUpTapToRecord_112555640);
  return;
}



/* Entry: 106a206fc; end: 106a20723;  */

void FUN_106a206fc(long param_1)

{
  func_0x00010be171c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bddf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanUpTapToRecord_112555640);
  return;
}



/* Entry: 106a20724; end: 106a20767; -[SCChatInputAudioNoteController audioNoteRecorder:recorderIsReady:] */

void FUN_106a20724(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 8) != param_3) {
    return;
  }
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a20768; end: 106a20837; -[SCChatInputAudioNoteController _sendAudioNoteWithData:duration:] */

void FUN_106a20768(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c6c00;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c008300(param_1);
  _objc_release(param_4);
  func_0x00010c0d9840(uVar3,param_3,puVar1);
  _objc_release(puVar1);
  param_2 = param_2 + 0xe0;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010c066120();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cb8d0;
  func_0x00010bfeb8a0(PTR_PTR_1126cb8d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar2,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a20838; end: 106a20897; -[SCChatInputAudioNoteController _sendFromTapToRecord:duration:] */

void FUN_106a20838(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010be9e940();
  func_0x00010bddf280(param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a20898; end: 106a20903; -[SCChatInputAudioNoteController _subscribeForTapToRecord] */

void FUN_106a20898(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bec7aa0();
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c083900();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec7530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToConversationEvents_11258f6f0);
  return;
}



/* Entry: 106a20904; end: 106a20a07; -[SCChatInputAudioNoteController _subscribeToInputTypingEvents] */

void FUN_106a20904(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c066120();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar2 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106a20a08; end: 106a20b03;  */

void FUN_106a20a08(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a20b04;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0be600(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106a20b04; end: 106a20b93;  */

void FUN_106a20b04(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a20b94;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a20b94; end: 106a20c37;  */

void FUN_106a20b94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a20c38; end: 106a20c3f;  */

void FUN_106a20c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be31d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleTapToRecordKeyboardSendFr_11256a0f8);
  return;
}


