/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108452bb4; end: 108452bbb; -[SCPreviewSnapEditingState bounceOffset] */

undefined8 FUN_108452bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108452bbc; end: 108452bc3; -[SCPreviewSnapEditingState lensId] */

undefined8 FUN_108452bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108452bc4; end: 108452bcb; -[SCPreviewSnapEditingState musicSelection] */

undefined8 FUN_108452bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108452bcc; end: 108452bd3; -[SCPreviewSnapEditingState voiceoverAudio] */

undefined8 FUN_108452bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108452bd4; end: 108452bdb; -[SCPreviewSnapEditingState textToSpeechAudioData] */

undefined8 FUN_108452bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108452bdc; end: 108452be3; -[SCPreviewSnapEditingState timeRanges] */

undefined8 FUN_108452bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108452be4; end: 108452beb; -[SCPreviewSnapEditingState audioMixingLevels] */

undefined8 FUN_108452be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108452bec; end: 108452c1b; -[SCPreviewSnapEditingState setAudioMixingLevels:] */

void FUN_108452bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108452c1c; end: 108452c23; -[SCPreviewSnapEditingState aiModeSessionId] */

undefined8 FUN_108452c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108452c24; end: 108452d43; -[SCPreviewSnapEditingState .cxx_destruct] */

void FUN_108452c24(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108452d44; end: 108452d8b; -[SCPreviewSnapEditingStates initWithFlow:] */

void FUN_108452d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc8f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
  }
  return;
}



/* Entry: 108452d8c; end: 108452dcf; -[SCPreviewSnapEditingStates isSnapEdited] */

uint FUN_108452d8c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = 0;
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    func_0x00010c072180();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 108452dd0; end: 108452e33; -[SCPreviewSnapEditingStates setState:stage:] */

void FUN_108452dd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 1) goto LAB_108452e20;
    lVar2 = 0x20;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_108452e20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108452e34; end: 108452e43; -[SCPreviewSnapEditingStates setObjectTrackingEdited] */

void FUN_108452e34(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return;
}



/* Entry: 108452e44; end: 108452e73; -[SCPreviewSnapEditingStates savePreuploadState] */

void FUN_108452e44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108452e74; end: 108452ea7; -[SCPreviewSnapEditingStates isPreuploadEdited] */

uint FUN_108452e74(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = 0;
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    func_0x00010c072180();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 108452ea8; end: 108452eaf; -[SCPreviewSnapEditingStates beginState] */

undefined8 FUN_108452ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108452eb0; end: 108452eb7; -[SCPreviewSnapEditingStates endState] */

undefined8 FUN_108452eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108452eb8; end: 108452ebf; -[SCPreviewSnapEditingStates preuploadState] */

undefined8 FUN_108452eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108452ec0; end: 108452ec7; -[SCPreviewSnapEditingStates editedBeforeBeginStateRecorded] */

undefined1 FUN_108452ec0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108452ec8; end: 108452ecf; -[SCPreviewSnapEditingStates setEditedBeforeBeginStateRecorded:] */

void FUN_108452ec8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108452ed0; end: 108452ed7; -[SCPreviewSnapEditingStates flow] */

undefined8 FUN_108452ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108452ed8; end: 108452f13; -[SCPreviewSnapEditingStates .cxx_destruct] */

void FUN_108452ed8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108452f14; end: 10845301f;  */

void FUN_108452f14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b3850;
    _objc_alloc(PTR_PTR_1126b3850);
    func_0x00010c008360();
  }
  puVar2 = PTR_PTR_1126d9690;
  _objc_retain(param_2);
  _objc_retain(puVar5);
  _objc_alloc(puVar2);
  puVar3 = puVar5;
  func_0x00010c094540(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c15ea40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c058080(puVar2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108453020; end: 1084530f7; -[SCUcoPreviewEditingState initWithUcoFilterNames:lensID:serializedData:] */

undefined1 *
FUN_108453020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fc8f8;
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



/* Entry: 1084530f8; end: 10845311b; -[SCUcoPreviewEditingState copyWithZone:] */

undefined8 FUN_1084530f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10845311c; end: 10845319b; -[SCUcoPreviewEditingState hash] */

undefined8 * FUN_10845311c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_108453234:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108453240;
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
            goto LAB_108453240;
          }
          goto LAB_108453234;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108453240:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10845319c; end: 10845325b; -[SCUcoPreviewEditingState isEqual:] */

long FUN_10845319c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108453234:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108453240;
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
            goto LAB_108453240;
          }
          goto LAB_108453234;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108453240:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10845325c; end: 108453263; -[SCUcoPreviewEditingState ucoFilterNames] */

undefined8 FUN_10845325c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108453264; end: 10845326b; -[SCUcoPreviewEditingState lensID] */

undefined8 FUN_108453264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10845326c; end: 108453273; -[SCUcoPreviewEditingState serializedData] */

undefined8 FUN_10845326c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108453274; end: 1084532af; -[SCUcoPreviewEditingState .cxx_destruct] */

void FUN_108453274(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084532b0; end: 108453407;  */

void FUN_1084532b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b3030;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c277e80(param_1);
  uVar2 = param_1;
  func_0x00010bf0ef80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf93480(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f9ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0b3ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf9e560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf8c1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c054ba0(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108453408; end: 10845372f; +[SCMusicSelectionHelpers musicPickerSelectionWithSourcePageType:pickerSessionId:startOffsetSeconds:selection:ctContext:] */

void FUN_108453408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b3028;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c04ab80();
  _objc_release(param_4);
  if (param_5 == 0) {
    lVar2 = param_6;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_78,lVar2);
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf885a0(param_5);
    _CMTimeMakeWithSeconds(&uStack_78,600);
  }
  puVar3 = PTR_PTR_1126b3030;
  _objc_alloc();
  lVar2 = param_6;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c277e80();
  lVar5 = param_6;
  func_0x00010c15a4a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010c15a4a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf93480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_6;
  func_0x00010c15a4a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0f9ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_6;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf9e560();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  func_0x00010c054ba0(puVar3,param_2,lVar4,lVar6,&uStack_90,lVar8,lVar10,puVar1,lVar12,0);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar13 = PTR_PTR_1126b2f20;
  _objc_alloc(PTR_PTR_1126b2f20);
  lVar2 = param_6;
  func_0x00010c277f60(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_6;
  func_0x00010beff2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_6;
  func_0x00010c260ce0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6;
  func_0x00010c0c1aa0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf0a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043d40(puVar13,param_2,puVar3,lVar2,lVar4,param_7,lVar5,lVar6,lVar7);
  _objc_release(param_7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108453730; end: 108453a1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108453730(undefined8 *param_1,undefined **param_2,undefined **param_3,
                  undefined8 *******param_4,undefined8 ******param_5,undefined8 *param_6,
                  long param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 ******ppppppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined **ppuVar12;
  undefined8 ******unaff_x26;
  undefined **ppuVar13;
  undefined **unaff_x28;
  float fVar14;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 *puStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 ******ppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  pppppppuVar8 = param_4;
  ppppppuVar9 = param_5;
  puVar10 = param_6;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  ppuVar13 = &PTR_PTR_1126c4000;
  if (param_2 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    ppppppuVar2 = (undefined8 ******)PTR_PTR_1126c4a68;
  }
  else {
    unaff_x26 = (undefined8 ******)PTR_PTR_1126c4a68;
    _objc_alloc();
    ppuVar12 = param_2;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ffa0(auStack_b8,param_2);
    uStack_c8 = param_6[1];
    uStack_d0 = *param_6;
    uStack_c0 = param_6[2];
    _CMTimeAdd(auStack_a0,auStack_b8,&uStack_d0);
    ppuVar7 = ppuVar12;
    func_0x00010b056d1c(unaff_x26,ppuVar12,auStack_a0);
    _objc_release(ppuVar12);
    pppppppuVar8 = &ppppppuStack_70;
    ppppppuVar9 = (undefined8 ******)0x1;
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppppppuStack_70 = unaff_x26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1[2] = ppuVar12;
    _objc_release(unaff_x26);
    ppppppuVar2 = (undefined8 ******)PTR_PTR_1126c4a68;
  }
  ppuVar4 = ppuVar12;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  PTR_PTR_1126c4a68 = (undefined *)ppppppuVar2;
  if (param_3 != (undefined **)0x0) {
    _objc_alloc();
    ppuVar13 = param_3;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = ppuVar13;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fb40(auStack_b8,param_3);
    uStack_c8 = param_6[1];
    uStack_d0 = *param_6;
    uStack_c0 = param_6[2];
    _CMTimeAdd(auStack_a0,auStack_b8,&uStack_d0);
    ppuVar7 = unaff_x28;
    func_0x00010b056d1c(ppppppuVar2,unaff_x28,auStack_a0);
    _objc_release(unaff_x28);
    _objc_release(ppuVar13);
    pppppppuVar8 = &ppppppuStack_78;
    ppppppuVar9 = (undefined8 ******)0x1;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppppppuStack_78 = ppppppuVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1[2] = ppuVar3;
    _objc_release(ppuVar12);
    ppuVar4 = param_3;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar4;
    func_0x00010c0cf1e0();
    _objc_retainAutoreleasedReturnValue();
    param_1[3] = ppuVar12;
    _objc_release(ppuVar4);
    _objc_release(ppppppuVar2);
    unaff_x26 = ppppppuVar2;
    ppuVar12 = ppuVar3;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  }
  PTR__OBJC_CLASS___NSArray_1126ae530 = puVar5;
  if (param_4 != (undefined8 *******)0x0) {
    pppppppuVar8 = &pppppppuStack_80;
    ppppppuVar9 = (undefined8 ******)0x1;
    pppppppuStack_80 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1[2] = puVar5;
    _objc_release(ppuVar12);
  }
  if (param_5 != (undefined8 ******)0x0) {
    pppppppuVar8 = &ppppppuStack_88;
    ppppppuVar9 = (undefined8 ******)0x1;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppppppuStack_88 = param_5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1[2];
    param_1[2] = puVar5;
    _objc_release(uVar11);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010715c0ec(param_1);
  ppuVar3 = param_2;
  __Unwind_Resume();
  pcStack_d8 = FUN_108453a1c;
  ppuStack_130 = unaff_x28;
  ppuStack_128 = ppuVar13;
  ppppppuStack_120 = unaff_x26;
  ppuStack_118 = ppuVar4;
  ppuStack_110 = ppuVar12;
  ppppppuStack_108 = param_5;
  puStack_100 = param_1;
  pppppppuStack_f8 = param_4;
  ppuStack_f0 = param_3;
  ppuStack_e8 = param_2;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(pppppppuVar8);
  _objc_retain(ppppppuVar9);
  _objc_retain(puVar10);
  _objc_retain(param_7);
  fVar14 = 0.0;
  lStack_148 = 0;
  puStack_150 = (undefined8 *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  if ((((ppuVar3 != (undefined **)0x0) || (ppuVar7 != (undefined **)0x0)) ||
      (pppppppuVar8 != (undefined8 *******)0x0)) || (ppppppuVar9 != (undefined8 ******)0x0)) {
    puVar6 = puVar10;
    func_0x00010bf529e0();
    if (puVar6 == (undefined8 *)0x0) {
      uStack_168 = param_8[1];
      uStack_170 = *param_8;
      uStack_160 = param_8[2];
      FUN_108453730(extraout_x8,ppuVar3,ppuVar7,pppppppuVar8,ppppppuVar9,&uStack_170);
      goto LAB_108453b34;
    }
    if (((param_7 != 0) && (func_0x00010bfb2c80(param_7), fVar14 == 0.0)) &&
       (puVar6 = puVar10, func_0x00010bf529e0(), puVar6 == (undefined8 *)0x1)) {
      puVar6 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar6 != (undefined8 *)0x0) && (*(float *)(puVar6 + 1) == 1.0)) {
        uStack_168 = param_8[1];
        uStack_170 = *param_8;
        uStack_160 = param_8[2];
        FUN_108453730(extraout_x8,ppuVar3,ppuVar7,pppppppuVar8,ppppppuVar9,&uStack_170);
        _objc_release(puVar6);
        goto LAB_108453b34;
      }
      _objc_release(puVar6);
    }
    _objc_retain(puVar10);
    puVar6 = puStack_150;
    puStack_150 = puVar10;
    _objc_release(puVar6);
    _objc_retain(param_7);
    lVar1 = lStack_148;
    lStack_148 = param_7;
    _objc_release(lVar1);
  }
  FUN_108453c0c(extraout_x8,&puStack_150);
LAB_108453b34:
  func_0x00010715c0ec(&puStack_150);
  _objc_release(param_7);
  _objc_release(puVar10);
  _objc_release(ppppppuVar9);
  _objc_release(pppppppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
  return;
}



/* Entry: 108453a1c; end: 108453c0b;  */

void FUN_108453a1c(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 *param_8)

{
  long lVar1;
  float fVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  fVar2 = 0.0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) || (param_5 != 0)) {
    lVar1 = param_6;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      uStack_98 = param_8[1];
      uStack_a0 = *param_8;
      uStack_90 = param_8[2];
      FUN_108453730(param_1,param_2,param_3,param_4,param_5,&uStack_a0);
      goto LAB_108453b34;
    }
    if (((param_7 != 0) && (func_0x00010bfb2c80(param_7), fVar2 == 0.0)) &&
       (lVar1 = param_6, func_0x00010bf529e0(), lVar1 == 1)) {
      lVar1 = param_6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar1 != 0) && (*(float *)(lVar1 + 8) == 1.0)) {
        uStack_98 = param_8[1];
        uStack_a0 = *param_8;
        uStack_90 = param_8[2];
        FUN_108453730(param_1,param_2,param_3,param_4,param_5,&uStack_a0);
        _objc_release(lVar1);
        goto LAB_108453b34;
      }
      _objc_release(lVar1);
    }
    _objc_retain(param_6);
    lVar1 = lStack_80;
    lStack_80 = param_6;
    _objc_release(lVar1);
    _objc_retain(param_7);
    lVar1 = lStack_78;
    lStack_78 = param_7;
    _objc_release(lVar1);
  }
  FUN_108453c0c(param_1,&lStack_80);
LAB_108453b34:
  func_0x00010715c0ec(&lStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108453c0c; end: 108453c73;  */

void FUN_108453c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _objc_retain(uVar1);
  *param_1 = uVar1;
  uVar1 = param_2[1];
  _objc_retain(uVar1);
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  _objc_retain(uVar1);
  param_1[2] = uVar1;
  uVar1 = param_2[3];
  _objc_retain(uVar1);
  param_1[3] = uVar1;
  return;
}



/* Entry: 108453c74; end: 108454043;  */

void FUN_108453c74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  
  _objc_retain();
  lVar9 = param_1;
  func_0x00010bf926c0();
  if ((int)lVar9 == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_108454018;
  }
  puVar13 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c0ff580(param_1,param_2,puVar13,&PTR___NSConcreteGlobalBlock_110a49018);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c0ff580(param_1,param_2,puVar13,&PTR___NSConcreteGlobalBlock_110a49038);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c0ff580(param_1,param_2,puVar13,&PTR___NSConcreteGlobalBlock_110a49058);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(puVar13);
  if (lVar1 == 0) {
    lVar9 = 0;
joined_r0x000108453e20:
    puVar4 = (undefined *)0x0;
    if (lVar2 != 0) goto LAB_108453e24;
LAB_108453f1c:
    lVar10 = 0;
    ppuVar11 = (undefined **)0x0;
LAB_108453f24:
    if (lVar3 != 0) goto LAB_108453f28;
LAB_108453fa8:
    lVar12 = 0;
LAB_108453fac:
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar9 = param_1;
    func_0x00010bfc98a0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar9 == 0) goto joined_r0x000108453e20;
    lVar10 = lVar9;
    func_0x00010bf101a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0dc0();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar2 == 0) goto LAB_108453f1c;
LAB_108453e24:
    lVar10 = param_1;
    func_0x00010bfc98a0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar10 != 0) {
      lVar12 = lVar10;
      func_0x00010bf101a0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0dc0();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      if (ppuVar11 != (undefined **)0x0) goto LAB_108453f24;
    }
    lVar12 = param_1;
    func_0x00010c0ff640(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar12;
    FUN_1084540fc();
    if ((int)lVar5 == 0) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      lVar5 = lVar12;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfd4540();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar6 == 0) {
        ppuVar11 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111852e0;
      }
      else {
        lVar6 = lVar12;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf10200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df740(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar12);
    if (lVar3 == 0) goto LAB_108453fa8;
LAB_108453f28:
    lVar12 = param_1;
    func_0x00010bfc98a0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar12 == 0) goto LAB_108453fac;
    lVar5 = lVar12;
    func_0x00010bf101a0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0dc0();
    func_0x00010c0df720(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  puVar13 = PTR_PTR_1126d9698;
  _objc_alloc(PTR_PTR_1126d9698);
  func_0x00010c02cea0();
  _objc_release(puVar8);
  _objc_release(ppuVar11);
  _objc_release(puVar4);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108454018:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108454044; end: 108454087;  */

bool FUN_108454044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 0xe;
}



/* Entry: 108454088; end: 1084540fb;  */

undefined8 FUN_108454088(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar2 == 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_2;
    FUN_1084540fc(param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1084540fc; end: 1084541a7;  */

bool FUN_1084540fc(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_1;
    func_0x00010bf5cc00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar5 == 7;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1084541a8; end: 1084541eb;  */

bool FUN_1084541a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 1084541ec; end: 1084546d7;  */

undefined *
FUN_1084541ec(float param_1,undefined *param_2,undefined8 param_3,undefined8 *param_4,
             undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *apuStack_270 [16];
  undefined1 auStack_1f0 [128];
  undefined *apuStack_170 [16];
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = param_2;
  func_0x00010bfda540();
  if ((int)puVar2 != 0) {
    puVar2 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0ff680();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      uVar22 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      puVar2 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      param_4 = &uStack_2b0;
      param_5 = apuStack_f0;
      puVar2 = puVar3;
      func_0x00010bf52a60();
      param_1 = (float)uVar22;
      if (puVar2 != (undefined *)0x0) {
        lVar18 = *plStack_2a0;
        do {
          puVar20 = (undefined *)0x0;
          do {
            if (*plStack_2a0 != lVar18) {
              _objc_enumerationMutation(puVar3);
            }
            uVar14 = *(ulong *)(lStack_2a8 + (long)puVar20 * 8);
            uVar4 = uVar14;
            FUN_1084540fc();
            param_1 = (float)uVar22;
            if ((uVar4 & 1) != 0) goto LAB_108454684;
            uVar4 = uVar14;
            func_0x00010bfdab80();
            if ((int)uVar4 != 0) {
              func_0x00010c118b40();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar14;
              func_0x00010bfd4540();
              _objc_release(uVar14);
              param_1 = (float)uVar22;
              if ((uVar4 & 1) != 0) goto LAB_108454684;
            }
            puVar20 = puVar20 + 1;
          } while (puVar2 != puVar20);
          param_4 = &uStack_2b0;
          param_5 = apuStack_f0;
          puVar2 = puVar3;
          func_0x00010bf52a60();
          param_1 = (float)uVar22;
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar3);
    }
    puVar2 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar2;
    func_0x00010bfd8fa0();
    _objc_release(puVar2);
    if ((int)puVar20 == 0) goto LAB_108454690;
    puVar2 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar3;
    func_0x00010bfdb0c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar20 != 0) {
      puVar2 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar3;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar20;
      func_0x00010c12fb20();
      _objc_release(puVar20);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar5 != (undefined *)0x0) {
        uVar22 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        lStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        plStack_2e0 = (long *)0x0;
        puVar2 = param_2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar2;
        func_0x00010c0c4c40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar20;
        func_0x00010c12fae0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010c12fb00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar20);
        _objc_release(puVar2);
        param_4 = &uStack_2f0;
        param_5 = apuStack_170;
        puVar2 = puVar3;
        func_0x00010bf52a60();
        param_1 = (float)uVar22;
        if (puVar2 != (undefined *)0x0) {
          lVar18 = *plStack_2e0;
          do {
            puVar20 = (undefined *)0x0;
            do {
              if (*plStack_2e0 != lVar18) {
                _objc_enumerationMutation(puVar3);
              }
              lVar15 = *(long *)(lStack_2e8 + (long)puVar20 * 8);
              lVar6 = lVar15;
              func_0x00010c12f9c0();
              if (lVar6 != 0) {
                uVar22 = 0;
                uStack_308 = 0;
                uStack_310 = 0;
                uStack_2f8 = 0;
                uStack_300 = 0;
                lStack_328 = 0;
                uStack_330 = 0;
                uStack_318 = 0;
                plStack_320 = (long *)0x0;
                func_0x00010c12f9a0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar15;
                func_0x00010bf52a60();
                if (lVar6 != 0) {
                  lVar21 = *plStack_320;
                  do {
                    lVar13 = 0;
                    do {
                      if (*plStack_320 != lVar21) {
                        _objc_enumerationMutation(lVar15);
                      }
                      lVar19 = *(long *)(lStack_328 + lVar13 * 8);
                      lVar7 = lVar19;
                      func_0x00010c12fa60();
                      if (lVar7 != 0) {
                        uVar22 = 0;
                        uStack_348 = 0;
                        uStack_350 = 0;
                        uStack_338 = 0;
                        uStack_340 = 0;
                        lStack_368 = 0;
                        uStack_370 = 0;
                        uStack_358 = 0;
                        plStack_360 = (long *)0x0;
                        func_0x00010c12fa40();
                        _objc_retainAutoreleasedReturnValue();
                        param_4 = &uStack_370;
                        param_5 = apuStack_270;
                        lVar7 = lVar19;
                        func_0x00010bf52a60();
                        if (lVar7 != 0) {
                          lVar17 = *plStack_360;
                          do {
                            lVar16 = 0;
                            do {
                              if (*plStack_360 != lVar17) {
                                _objc_enumerationMutation(lVar19);
                              }
                              uVar8 = *(undefined8 *)(lStack_368 + lVar16 * 8);
                              func_0x00010c12f940();
                              _objc_retainAutoreleasedReturnValue();
                              uVar9 = uVar8;
                              func_0x00010bf8cf20();
                              _objc_release(uVar8);
                              param_1 = (float)uVar22;
                              if ((int)uVar9 == 1) {
                                _objc_release(lVar19);
                                _objc_release(lVar15);
                                goto LAB_108454684;
                              }
                              lVar16 = lVar16 + 1;
                            } while (lVar7 != lVar16);
                            param_4 = &uStack_370;
                            param_5 = apuStack_270;
                            lVar7 = lVar19;
                            func_0x00010bf52a60();
                          } while (lVar7 != 0);
                        }
                        _objc_release(lVar19);
                      }
                      lVar13 = lVar13 + 1;
                    } while (lVar13 != lVar6);
                    lVar6 = lVar15;
                    func_0x00010bf52a60(lVar15,param_3,&uStack_330,auStack_1f0,0x10);
                  } while (lVar6 != 0);
                }
                _objc_release(lVar15);
              }
              puVar20 = puVar20 + 1;
            } while (puVar20 != puVar2);
            param_4 = &uStack_2f0;
            param_5 = apuStack_170;
            puVar2 = puVar3;
            func_0x00010bf52a60();
            param_1 = (float)uVar22;
          } while (puVar2 != (undefined *)0x0);
        }
        puVar20 = (undefined *)0x0;
        goto LAB_108454688;
      }
    }
  }
  puVar20 = (undefined *)0x0;
  goto LAB_108454690;
LAB_108454684:
  puVar20 = (undefined *)0x1;
LAB_108454688:
  _objc_release(puVar3);
LAB_108454690:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d96a0;
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_opt_new(puVar2);
    _objc_retain(param_4);
    puVar10 = param_4;
    func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110edbbf8);
    if (((ulong)puVar10 & 1) == 0) {
      puVar10 = param_4;
      func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110e09c38);
      if (((ulong)puVar10 & 1) == 0) {
        puVar10 = param_4;
        func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110e2a938);
        uVar12 = 3;
        if ((int)puVar10 == 0) {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = 2;
      }
    }
    else {
      uVar12 = 1;
    }
    _objc_release(param_4);
    _objc_release(param_4);
    func_0x00010c206c40(puVar2,param_3,uVar12);
    ppuVar11 = param_5;
    func_0x00010c08fa60();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar1 = param_5;
    }
    func_0x00010c16bcc0(puVar2,param_3,ppuVar1);
    _objc_release(param_5);
    func_0x00010c1c8700((double)param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  return puVar20;
}



/* Entry: 1084546d8; end: 1084547eb; +[SCAudioMixingHelpers createAudioMixingInfoWithSourceString:audioId:volume:] */

void FUN_1084546d8(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_PTR_1126d96a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110edbbf8);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110e09c38);
    if ((uVar3 & 1) == 0) {
      uVar3 = param_4;
      func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110e2a938);
      uVar5 = 3;
      if ((int)uVar3 == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_4);
  func_0x00010c206c40(puVar2,param_3,uVar5);
  ppuVar4 = param_5;
  func_0x00010c08fa60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  func_0x00010c16bcc0(puVar2,param_3,ppuVar1);
  _objc_release(param_5);
  func_0x00010c1c8700((double)param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084547ec; end: 1084548c3; -[SCAudioMixingLevels initWithMusicMixingProportion:voiceoverMixingProportion:baseAudioMixingProportion:] */

undefined1 *
FUN_1084547ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fc900;
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



/* Entry: 1084548c4; end: 1084548e7; -[SCAudioMixingLevels copyWithZone:] */

undefined8 FUN_1084548c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1084548e8; end: 108454967; -[SCAudioMixingLevels hash] */

undefined8 * FUN_1084548e8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_108454a00:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108454a0c;
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
            goto LAB_108454a0c;
          }
          goto LAB_108454a00;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108454a0c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108454968; end: 108454a27; -[SCAudioMixingLevels isEqual:] */

long FUN_108454968(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108454a00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108454a0c;
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
            goto LAB_108454a0c;
          }
          goto LAB_108454a00;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108454a0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108454a28; end: 108454a2f; -[SCAudioMixingLevels musicMixingProportion] */

undefined8 FUN_108454a28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108454a30; end: 108454a37; -[SCAudioMixingLevels voiceoverMixingProportion] */

undefined8 FUN_108454a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108454a38; end: 108454a3f; -[SCAudioMixingLevels baseAudioMixingProportion] */

undefined8 FUN_108454a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108454a40; end: 108454af3; -[SCAudioMixingLevels .cxx_destruct] */

void FUN_108454a40(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108454af4; end: 108454b87;  */

void FUN_108454af4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4db0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf0ed00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bff51c0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108454b88; end: 108454cc3; -[SCVoiceoverScope initWithVoiceoverScopeDelegate:voiceoverMediaPlaybackManager:uiContainer:displayableArea:toolbarView:dismissalObservable:] */

undefined1 *
FUN_108454b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fc908;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108454cc4; end: 108454cdb; -[SCVoiceoverScope voiceoverScopeDelegate] */

void FUN_108454cc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108454cdc; end: 108454cf3; -[SCVoiceoverScope voiceoverMediaPlaybackManager] */

void FUN_108454cdc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108454cf4; end: 108454cfb; -[SCVoiceoverScope uiContainer] */

undefined8 FUN_108454cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108454cfc; end: 108454d03; -[SCVoiceoverScope toolbarView] */

undefined8 FUN_108454cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108454d04; end: 108454d33; -[SCVoiceoverScope setToolbarView:] */

void FUN_108454d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108454d34; end: 108454d3f; -[SCVoiceoverScope displayableArea] */

undefined8 FUN_108454d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108454d40; end: 108454d47; -[SCVoiceoverScope dismissalObservable] */

undefined8 FUN_108454d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108454d48; end: 108454d77; -[SCVoiceoverScope setDismissalObservable:] */

void FUN_108454d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108454d78; end: 108454dc3; -[SCVoiceoverScope .cxx_destruct] */

void FUN_108454d78(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108454dc4; end: 108454e3f; +[SCVoiceoverPresentationEvent enterWithVoiceoverAudio:audioMixToggleInitialValue:mixingProportionValue:] */

void FUN_108454dc4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4018;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  _objc_release(uVar3);
  puVar2[0x18] = param_5;
  *(undefined4 *)(puVar2 + 0x1c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108454e40; end: 108454e9b; +[SCVoiceoverPresentationEvent exitWithCancelled:] */

void FUN_108454e40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4018;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x20] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108454e9c; end: 108454ebf; -[SCVoiceoverPresentationEvent copyWithZone:] */

undefined8 FUN_108454e9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108454ec0; end: 108454f63; -[SCVoiceoverPresentationEvent hash] */

void FUN_108454ec0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x18);
  uVar3 = (ulong)*(uint *)(param_1 + 0x1c) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  uStack_30 = (ulong)*(byte *)(param_1 + 0x20);
  lStack_38 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  uStack_48 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fc910;
  puStack_80 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108454f64; end: 108454fa7; -[SCVoiceoverPresentationEvent internalInit] */

void FUN_108454f64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108454fa8; end: 108455097; -[SCVoiceoverPresentationEvent isEqual:] */

long FUN_108454fa8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108455070:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10845507c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      fVar6 = ABS(*(float *)(param_1 + 0x1c) - *(float *)(param_3 + 0x1c));
      fVar5 = ABS(*(float *)(param_1 + 0x1c) + *(float *)(param_3 + 0x1c)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10845507c;
        }
        goto LAB_108455070;
      }
    }
    lVar4 = 0;
  }
LAB_10845507c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108455098; end: 108455127; -[SCVoiceoverPresentationEvent matchEnter:exit:] */

void FUN_108455098(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined1 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (*(undefined4 *)(param_1 + 0x1c),param_3,*(undefined8 *)(param_1 + 0x10),
               *(undefined1 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108455128; end: 108455133; -[SCVoiceoverPresentationEvent .cxx_destruct] */

void FUN_108455128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108455134; end: 10845523f; -[SCVoiceoverAudio initWithSegments:mixingProportion:audioAsset:audioData:] */

undefined1 *
FUN_108455134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fc918;
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



/* Entry: 108455240; end: 108455263; -[SCVoiceoverAudio copyWithZone:] */

undefined8 FUN_108455240(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108455264; end: 1084552ef; -[SCVoiceoverAudio hash] */

undefined8 * FUN_108455264(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1084553a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1084553ac;
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
              goto LAB_1084553ac;
            }
            goto LAB_1084553a0;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1084553ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1084552f0; end: 1084553c7; -[SCVoiceoverAudio isEqual:] */

long FUN_1084552f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1084553a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1084553ac;
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
              goto LAB_1084553ac;
            }
            goto LAB_1084553a0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1084553ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084553c8; end: 1084553cf; -[SCVoiceoverAudio segments] */

undefined8 FUN_1084553c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084553d0; end: 1084553d7; -[SCVoiceoverAudio mixingProportion] */

undefined8 FUN_1084553d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1084553d8; end: 1084553df; -[SCVoiceoverAudio audioAsset] */

undefined8 FUN_1084553d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1084553e0; end: 1084553e7; -[SCVoiceoverAudio audioData] */

undefined8 FUN_1084553e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1084553e8; end: 10845542f; -[SCVoiceoverAudio .cxx_destruct] */

void FUN_1084553e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108455430; end: 1084554c3; -[SCVoiceoverAudioState initWithAudio:startOffset:] */

undefined1 *
FUN_108455430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc920;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_4[1];
    uVar3 = *param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4[2];
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1084554c4; end: 1084554e7; -[SCVoiceoverAudioState copyWithZone:] */

undefined8 FUN_1084554c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1084554e8; end: 108455567; -[SCVoiceoverAudioState hash] */

undefined8 * FUN_1084554e8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x1c);
  lStack_40 = (long)*(int *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10845560c:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108455610;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((ulong)puVar3 & 1) != 0) {
      uStack_98 = *(undefined8 *)((long)puVar2 + 0x18);
      uStack_a0 = *(undefined8 *)((long)puVar2 + 0x10);
      uStack_90 = *(undefined8 *)((long)puVar2 + 0x20);
      uStack_b8 = *(undefined8 *)(param_3 + 0x18);
      uStack_c0 = *(undefined8 *)(param_3 + 0x10);
      uStack_b0 = *(undefined8 *)(param_3 + 0x20);
      puVar4 = &uStack_a0;
      _CMTimeCompare(puVar4,&uStack_c0);
      if ((int)puVar4 == 0) {
        puVar5 = *(undefined1 **)((long)puVar2 + 8);
        if (puVar5 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_108455610;
        }
        goto LAB_10845560c;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_108455610:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 108455568; end: 10845562f; -[SCVoiceoverAudioState isEqual:] */

long FUN_108455568(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10845560c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108455610;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      uStack_50 = *(undefined8 *)(param_1 + 0x10);
      uStack_40 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *(undefined8 *)(param_3 + 0x18);
      uStack_70 = *(undefined8 *)(param_3 + 0x10);
      uStack_60 = *(undefined8 *)(param_3 + 0x20);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_108455610;
        }
        goto LAB_10845560c;
      }
    }
    lVar4 = 0;
  }
LAB_108455610:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108455630; end: 108455637; -[SCVoiceoverAudioState audio] */

undefined8 FUN_108455630(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108455638; end: 10845564b; -[SCVoiceoverAudioState startOffset] */

void FUN_108455638(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 10845564c; end: 108455657; -[SCVoiceoverAudioState .cxx_destruct] */

void FUN_10845564c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108455658; end: 1084556cb; -[SCPreviewFeatureAudioEffectsServices initWithAudioEffects:] */

undefined1 * FUN_108455658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc928;
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



/* Entry: 1084556cc; end: 1084556d3; -[SCPreviewFeatureAudioEffectsServices audioEffects] */

undefined8 FUN_1084556cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084556d4; end: 1084556df; -[SCPreviewFeatureAudioEffectsServices .cxx_destruct] */

void FUN_1084556d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084556e0; end: 10845576b; +[SCLensSerializedState descriptor] */

undefined * FUN_1084556e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b8c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9e410,
                        &PTR____CFConstantStringClassReference_110edbc18,
                        &PTR_s_snapchat_lenses_11325be60,&PTR_s_lensId_11325be78,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372b8c8 = puVar1;
  }
  return puRam000000011372b8c8;
}



/* Entry: 10845576c; end: 1084557df; -[SCPreviewUCOServices initWithUCOProvider:] */

undefined1 * FUN_10845576c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc930;
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



/* Entry: 1084557e0; end: 1084557e7; -[SCPreviewUCOServices ucoProvider] */

undefined8 FUN_1084557e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084557e8; end: 1084557f3; -[SCPreviewUCOServices .cxx_destruct] */

void FUN_1084557e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084557f4; end: 10845589f; -[SCPreviewUCOProviderData initWithLensMetadata:config:] */

undefined1 *
FUN_1084557f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc938;
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



/* Entry: 1084558a0; end: 1084558c3; -[SCPreviewUCOProviderData copyWithZone:] */

undefined8 FUN_1084558a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1084558c4; end: 108455937; -[SCPreviewUCOProviderData hash] */

undefined8 * FUN_1084558c4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1084559b8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1084559c4;
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
          goto LAB_1084559c4;
        }
        goto LAB_1084559b8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1084559c4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108455938; end: 1084559df; -[SCPreviewUCOProviderData isEqual:] */

long FUN_108455938(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1084559b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1084559c4;
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
          goto LAB_1084559c4;
        }
        goto LAB_1084559b8;
      }
    }
    lVar3 = 0;
  }
LAB_1084559c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084559e0; end: 1084559e7; -[SCPreviewUCOProviderData lensMetadata] */

undefined8 FUN_1084559e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084559e8; end: 1084559ef; -[SCPreviewUCOProviderData config] */

undefined8 FUN_1084559e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


