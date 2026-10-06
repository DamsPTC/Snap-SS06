/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d1f9f8; end: 107d1fa4b; -[SCUnifiedProfileStoriesListSectionBox copyWithZone:] */

undefined * FUN_107d1f9f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7940;
  _objc_alloc(PTR_PTR_1126d7940);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c042cc0(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 107d1fa4c; end: 107d1fa63; -[SCUnifiedProfileStoriesListSectionBox section] */

void FUN_107d1fa4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d1fa64; end: 107d1fa6b; -[SCUnifiedProfileStoriesListSectionBox .cxx_destruct] */

void FUN_107d1fa64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107d1fa6c; end: 107d1fc0b;  */

void FUN_107d1fa6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1228;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0x4030000000000000,0x4024000000000000,0x4030000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1268;
  _objc_alloc(PTR_PTR_1126b1268);
  func_0x00010c030be0();
  _objc_release(param_2);
  func_0x00010c01e3c0(puVar1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d1fc0c; end: 107d1fd7f; -[SCProfileStoryUpdate initWithPlaybackSequences:snapIdToViewState:snapIdToSnapViewers:customStoryMetadata:clientIdToPostingState:clientIdToPostingProgress:storyPrivacy:] */

undefined1 *
FUN_107d1fc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126faa58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d1fd80; end: 107d1fda3; -[SCProfileStoryUpdate copyWithZone:] */

undefined8 FUN_107d1fd80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d1fda4; end: 107d1fe53; -[SCProfileStoryUpdate hash] */

undefined8 * FUN_107d1fda4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d1ff44:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d1ff50;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
                if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_107d1ff50;
                }
                goto LAB_107d1ff44;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d1ff50:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d1fe54; end: 107d1ff6b; -[SCProfileStoryUpdate isEqual:] */

long FUN_107d1fe54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d1ff44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d1ff50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
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
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_107d1ff50;
                }
                goto LAB_107d1ff44;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d1ff50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d1ff6c; end: 107d1ff73; -[SCProfileStoryUpdate playbackSequences] */

undefined8 FUN_107d1ff6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d1ff74; end: 107d1ff7b; -[SCProfileStoryUpdate snapIdToViewState] */

undefined8 FUN_107d1ff74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d1ff7c; end: 107d1ff83; -[SCProfileStoryUpdate snapIdToSnapViewers] */

undefined8 FUN_107d1ff7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d1ff84; end: 107d1ff8b; -[SCProfileStoryUpdate customStoryMetadata] */

undefined8 FUN_107d1ff84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d1ff8c; end: 107d1ff93; -[SCProfileStoryUpdate clientIdToPostingState] */

undefined8 FUN_107d1ff8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d1ff94; end: 107d1ff9b; -[SCProfileStoryUpdate clientIdToPostingProgress] */

undefined8 FUN_107d1ff94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d1ff9c; end: 107d1ffa3; -[SCProfileStoryUpdate storyPrivacy] */

undefined8 FUN_107d1ff9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d1ffa4; end: 107d20003; -[SCProfileStoryUpdate .cxx_destruct] */

void FUN_107d1ffa4(long param_1)

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



/* Entry: 107d20004; end: 107d2027b; -[SCUnifiedProfileMyStoriesHeaderDataModel initWithThumbnail:storyThumbnailMedia:storiesSnapAttributes:hasStories:hasUnviewedStories:postingStories:failedPosts:totalViewCount:totalScreenshotCount:totalStoryReplyCount:totalStorySnapCount:customStoryMembersCount:storyId:displayName:subtext:tooltip:storyType:isSnapProHostAccount:hasSnapProStandardProfile:storyPrivacy:hasLoadedSnapProData:shouldShowSharedStoriesMemberCount:mostRecentStoryTimestamp:tier:] */

undefined8 *
FUN_107d20004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined4 param_24,
             undefined4 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126faa60;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    puVar1[5] = param_9;
    puVar1[6] = param_10;
    puVar1[7] = param_11;
    puVar1[8] = param_12;
    puVar1[9] = param_13;
    puVar1[10] = param_14;
    puVar1[0xb] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_21;
    *(undefined1 *)((long)puVar1 + 0xb) = param_21._1_1_;
    puVar1[0x10] = param_20;
    puVar1[0x11] = param_23;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_24;
    *(undefined1 *)((long)puVar1 + 0xd) = param_24._1_1_;
    puVar1[0x12] = param_1;
    puVar1[0x13] = param_26;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107d2027c; end: 107d2029f; -[SCUnifiedProfileMyStoriesHeaderDataModel copyWithZone:] */

undefined8 FUN_107d2027c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d202a0; end: 107d203d3; -[SCUnifiedProfileMyStoriesHeaderDataModel hash] */

undefined8 * FUN_107d202a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
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
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = uVar3;
  func_0x00010bfde980();
  uStack_d0 = (ulong)*(byte *)(param_1 + 8);
  uStack_c8 = (ulong)*(byte *)(param_1 + 9);
  uStack_90 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x30);
  uStack_c0 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_1 + 0x50);
  uStack_a0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x88);
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  uStack_60 = (ulong)*(byte *)(param_1 + 10);
  uStack_58 = (ulong)*(byte *)(param_1 + 0xb);
  lStack_50 = -lVar1;
  if (-1 < lVar1) {
    lStack_50 = lVar1;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  lVar7 = *(long *)(param_1 + 0x98);
  uVar8 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lStack_30 = -lVar7;
  if (-1 < lVar7) {
    lStack_30 = lVar7;
  }
  puVar5 = &uStack_e8;
  uStack_70 = uVar3;
  func_0x000100505190(puVar5,0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_107d20604:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d20610;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((((ulong)puVar6 & 1) != 0) &&
         ((((*(char *)(puVar5 + 1) == *(char *)(param_3 + 1) &&
            (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
           (puVar5[5] == param_3[5])) && ((puVar5[6] == param_3[6] && (puVar5[7] == param_3[7]))))))
        && (puVar5[8] == param_3[8])) &&
       ((((puVar5[9] == param_3[9] && (puVar5[10] == param_3[10])) &&
         ((puVar5[0xb] == param_3[0xb] &&
          (((puVar5[0x10] == param_3[0x10] &&
            (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))) &&
           (*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (((puVar5[0x11] == param_3[0x11] &&
          (*(char *)((long)puVar5 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
         ((*(char *)((long)puVar5 + 0xd) == *(char *)((long)param_3 + 0xd) &&
          (puVar5[0x13] == param_3[0x13])))))))) {
      dVar10 = ABS((double)puVar5[0x12] - (double)param_3[0x12]);
      if ((((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS((double)puVar5[0x12] + (double)param_3[0x12]) * 2.220446049250313e-16)) &&
          ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         ((((lVar7 = puVar5[3], lVar7 == param_3[3] || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
           ((lVar7 = puVar5[4], lVar7 == param_3[4] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
          && ((((lVar7 = puVar5[0xc], lVar7 == param_3[0xc] ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
               ((lVar7 = puVar5[0xd], lVar7 == param_3[0xd] ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
              ((lVar7 = puVar5[0xe], lVar7 == param_3[0xe] ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) {
        puVar9 = (undefined8 *)puVar5[0xf];
        if (puVar9 != (undefined8 *)param_3[0xf]) {
          func_0x00010c071ae0();
          goto LAB_107d20610;
        }
        goto LAB_107d20604;
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_107d20610:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 107d203d4; end: 107d2062b; -[SCUnifiedProfileMyStoriesHeaderDataModel isEqual:] */

long FUN_107d203d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d20604:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d20610;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
       ((((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
         ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
          (((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x90) - *(double *)(param_3 + 0x90));
      if ((((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x90) + *(double *)(param_3 + 0x90)) *
                    2.220446049250313e-16)) &&
          ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         ((((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar3 != *(long *)(param_3 + 0x78)) {
          func_0x00010c071ae0();
          goto LAB_107d20610;
        }
        goto LAB_107d20604;
      }
    }
    lVar3 = 0;
  }
LAB_107d20610:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d2062c; end: 107d20633; -[SCUnifiedProfileMyStoriesHeaderDataModel thumbnail] */

undefined8 FUN_107d2062c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d20634; end: 107d2063b; -[SCUnifiedProfileMyStoriesHeaderDataModel storyThumbnailMedia] */

undefined8 FUN_107d20634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d2063c; end: 107d20643; -[SCUnifiedProfileMyStoriesHeaderDataModel storiesSnapAttributes] */

undefined8 FUN_107d2063c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d20644; end: 107d2064b; -[SCUnifiedProfileMyStoriesHeaderDataModel hasStories] */

undefined1 FUN_107d20644(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d2064c; end: 107d20653; -[SCUnifiedProfileMyStoriesHeaderDataModel hasUnviewedStories] */

undefined1 FUN_107d2064c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d20654; end: 107d2065b; -[SCUnifiedProfileMyStoriesHeaderDataModel postingStories] */

undefined8 FUN_107d20654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d2065c; end: 107d20663; -[SCUnifiedProfileMyStoriesHeaderDataModel failedPosts] */

undefined8 FUN_107d2065c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d20664; end: 107d2066b; -[SCUnifiedProfileMyStoriesHeaderDataModel totalViewCount] */

undefined8 FUN_107d20664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d2066c; end: 107d20673; -[SCUnifiedProfileMyStoriesHeaderDataModel totalScreenshotCount] */

undefined8 FUN_107d2066c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d20674; end: 107d2067b; -[SCUnifiedProfileMyStoriesHeaderDataModel totalStoryReplyCount] */

undefined8 FUN_107d20674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d2067c; end: 107d20683; -[SCUnifiedProfileMyStoriesHeaderDataModel totalStorySnapCount] */

undefined8 FUN_107d2067c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d20684; end: 107d2068b; -[SCUnifiedProfileMyStoriesHeaderDataModel customStoryMembersCount] */

undefined8 FUN_107d20684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d2068c; end: 107d20693; -[SCUnifiedProfileMyStoriesHeaderDataModel storyId] */

undefined8 FUN_107d2068c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d20694; end: 107d2069b; -[SCUnifiedProfileMyStoriesHeaderDataModel displayName] */

undefined8 FUN_107d20694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d2069c; end: 107d206a3; -[SCUnifiedProfileMyStoriesHeaderDataModel subtext] */

undefined8 FUN_107d2069c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d206a4; end: 107d206ab; -[SCUnifiedProfileMyStoriesHeaderDataModel tooltip] */

undefined8 FUN_107d206a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d206ac; end: 107d206b3; -[SCUnifiedProfileMyStoriesHeaderDataModel storyType] */

undefined8 FUN_107d206ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107d206b4; end: 107d206bb; -[SCUnifiedProfileMyStoriesHeaderDataModel isSnapProHostAccount] */

undefined1 FUN_107d206b4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d206bc; end: 107d206c3; -[SCUnifiedProfileMyStoriesHeaderDataModel hasSnapProStandardProfile] */

undefined1 FUN_107d206bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d206c4; end: 107d206cb; -[SCUnifiedProfileMyStoriesHeaderDataModel storyPrivacy] */

undefined8 FUN_107d206c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107d206cc; end: 107d206d3; -[SCUnifiedProfileMyStoriesHeaderDataModel hasLoadedSnapProData] */

undefined1 FUN_107d206cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d206d4; end: 107d206db; -[SCUnifiedProfileMyStoriesHeaderDataModel shouldShowSharedStoriesMemberCount] */

undefined1 FUN_107d206d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d206dc; end: 107d206e3; -[SCUnifiedProfileMyStoriesHeaderDataModel mostRecentStoryTimestamp] */

undefined8 FUN_107d206dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107d206e4; end: 107d206eb; -[SCUnifiedProfileMyStoriesHeaderDataModel tier] */

undefined8 FUN_107d206e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107d206ec; end: 107d20757; -[SCUnifiedProfileMyStoriesHeaderDataModel .cxx_destruct] */

void FUN_107d206ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d20758; end: 107d20803; -[SCUnifiedProfileMyStoriesSectionDataModel initWithHeaderDataModel:snapDataModels:] */

undefined1 *
FUN_107d20758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126faa68;
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



/* Entry: 107d20804; end: 107d20827; -[SCUnifiedProfileMyStoriesSectionDataModel copyWithZone:] */

undefined8 FUN_107d20804(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d20828; end: 107d2089b; -[SCUnifiedProfileMyStoriesSectionDataModel hash] */

undefined8 * FUN_107d20828(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d2091c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d20928;
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
          goto LAB_107d20928;
        }
        goto LAB_107d2091c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d20928:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d2089c; end: 107d20943; -[SCUnifiedProfileMyStoriesSectionDataModel isEqual:] */

long FUN_107d2089c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d2091c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d20928;
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
          goto LAB_107d20928;
        }
        goto LAB_107d2091c;
      }
    }
    lVar3 = 0;
  }
LAB_107d20928:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d20944; end: 107d2094b; -[SCUnifiedProfileMyStoriesSectionDataModel headerDataModel] */

undefined8 FUN_107d20944(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d2094c; end: 107d20953; -[SCUnifiedProfileMyStoriesSectionDataModel snapDataModels] */

undefined8 FUN_107d2094c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d20954; end: 107d20983; -[SCUnifiedProfileMyStoriesSectionDataModel .cxx_destruct] */

void FUN_107d20954(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d20984; end: 107d20bbb; -[SCUnifiedProfileMyStoriesSnapDataModel initWithStoriesThumbnailInfo:storiesSnapAttributes:snapClientId:snapServerId:totalViewCount:screenshotCount:storyReplyCount:storyId:captionText:timestamp:storyType:isUploading:uploadProgressPercent:hasFailed:shouldShowViewers:viewed:isSpotlightSnap:isMapSnap:isSpotlightRemix:] */

undefined8 *
FUN_107d20984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18)

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
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126faa70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_14;
    puVar1[0xc] = param_13;
    puVar1[0xd] = param_16;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 10) = param_17._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_17._2_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_17._3_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 0xe) = param_18._1_1_;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d20bbc; end: 107d20bdf; -[SCUnifiedProfileMyStoriesSnapDataModel copyWithZone:] */

undefined8 FUN_107d20bbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d20be0; end: 107d20cef; -[SCUnifiedProfileMyStoriesSnapDataModel hash] */

undefined8 * FUN_107d20be0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
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
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar12;
  
  puVar5 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x68);
  lStack_70 = -lVar7;
  if (-1 < lVar7) {
    lStack_70 = lVar7;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  lStack_60 = -lVar1;
  if (-1 < lVar1) {
    lStack_60 = lVar1;
  }
  uVar10 = *(undefined4 *)(param_1 + 9);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar11 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
           0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar11 >> 0x30);
  uStack_58 = (ulong)uVar2 & 0xff;
  uStack_50 = uVar11 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar9;
  uStack_38 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_78 = uVar3;
  func_0x000100505190(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_107d20ea8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d20eb4;
    puVar8 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar6 & 1) != 0) &&
         ((((*(long *)((long)puVar5 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(long *)((long)puVar5 + 0x38) == *(long *)(param_3 + 0x38))) &&
           (*(long *)((long)puVar5 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)((long)puVar5 + 0x60) == *(long *)(param_3 + 0x60) &&
           (*(char *)((long)puVar5 + 8) == param_3[8])))))) &&
        (*(long *)((long)puVar5 + 0x68) == *(long *)(param_3 + 0x68))) &&
       (((*(char *)((long)puVar5 + 9) == param_3[9] && (*(char *)((long)puVar5 + 10) == param_3[10])
         ) && ((*(char *)((long)puVar5 + 0xb) == param_3[0xb] &&
               (((*(char *)((long)puVar5 + 0xc) == param_3[0xc] &&
                 (*(char *)((long)puVar5 + 0xd) == param_3[0xd])) &&
                (*(char *)((long)puVar5 + 0xe) == param_3[0xe])))))))) {
      lVar7 = *(long *)((long)puVar5 + 0x10);
      if ((lVar7 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
        lVar7 = *(long *)((long)puVar5 + 0x18);
        if ((lVar7 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
          lVar7 = *(long *)((long)puVar5 + 0x20);
          if ((lVar7 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
            lVar7 = *(long *)((long)puVar5 + 0x28);
            if ((lVar7 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
              lVar7 = *(long *)((long)puVar5 + 0x48);
              if ((lVar7 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar7 != 0))
              {
                lVar7 = *(long *)((long)puVar5 + 0x50);
                if ((lVar7 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar7 != 0)
                   ) {
                  puVar8 = *(undefined1 **)((long)puVar5 + 0x58);
                  if (puVar8 != *(undefined1 **)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_107d20eb4;
                  }
                  goto LAB_107d20ea8;
                }
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107d20eb4:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107d20cf0; end: 107d20ecf; -[SCUnifiedProfileMyStoriesSnapDataModel isEqual:] */

long FUN_107d20cf0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d20ea8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d20eb4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) &&
        (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
       (((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
           (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
          (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if (lVar3 != *(long *)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_107d20eb4;
                  }
                  goto LAB_107d20ea8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d20eb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d20ed0; end: 107d20ed7; -[SCUnifiedProfileMyStoriesSnapDataModel storiesThumbnailInfo] */

undefined8 FUN_107d20ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d20ed8; end: 107d20edf; -[SCUnifiedProfileMyStoriesSnapDataModel storiesSnapAttributes] */

undefined8 FUN_107d20ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d20ee0; end: 107d20ee7; -[SCUnifiedProfileMyStoriesSnapDataModel snapClientId] */

undefined8 FUN_107d20ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d20ee8; end: 107d20eef; -[SCUnifiedProfileMyStoriesSnapDataModel snapServerId] */

undefined8 FUN_107d20ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d20ef0; end: 107d20ef7; -[SCUnifiedProfileMyStoriesSnapDataModel totalViewCount] */

undefined8 FUN_107d20ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d20ef8; end: 107d20eff; -[SCUnifiedProfileMyStoriesSnapDataModel screenshotCount] */

undefined8 FUN_107d20ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d20f00; end: 107d20f07; -[SCUnifiedProfileMyStoriesSnapDataModel storyReplyCount] */

undefined8 FUN_107d20f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d20f08; end: 107d20f0f; -[SCUnifiedProfileMyStoriesSnapDataModel storyId] */

undefined8 FUN_107d20f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d20f10; end: 107d20f17; -[SCUnifiedProfileMyStoriesSnapDataModel captionText] */

undefined8 FUN_107d20f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d20f18; end: 107d20f1f; -[SCUnifiedProfileMyStoriesSnapDataModel timestamp] */

undefined8 FUN_107d20f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d20f20; end: 107d20f27; -[SCUnifiedProfileMyStoriesSnapDataModel storyType] */

undefined8 FUN_107d20f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d20f28; end: 107d20f2f; -[SCUnifiedProfileMyStoriesSnapDataModel isUploading] */

undefined1 FUN_107d20f28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d20f30; end: 107d20f37; -[SCUnifiedProfileMyStoriesSnapDataModel uploadProgressPercent] */

undefined8 FUN_107d20f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d20f38; end: 107d20f3f; -[SCUnifiedProfileMyStoriesSnapDataModel hasFailed] */

undefined1 FUN_107d20f38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d20f40; end: 107d20f47; -[SCUnifiedProfileMyStoriesSnapDataModel shouldShowViewers] */

undefined1 FUN_107d20f40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d20f48; end: 107d20f4f; -[SCUnifiedProfileMyStoriesSnapDataModel viewed] */

undefined1 FUN_107d20f48(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d20f50; end: 107d20f57; -[SCUnifiedProfileMyStoriesSnapDataModel isSpotlightSnap] */

undefined1 FUN_107d20f50(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d20f58; end: 107d20f5f; -[SCUnifiedProfileMyStoriesSnapDataModel isMapSnap] */

undefined1 FUN_107d20f58(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d20f60; end: 107d20f67; -[SCUnifiedProfileMyStoriesSnapDataModel isSpotlightRemix] */

undefined1 FUN_107d20f60(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107d20f68; end: 107d20fd3; -[SCUnifiedProfileMyStoriesSnapDataModel .cxx_destruct] */

void FUN_107d20f68(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d20fd4; end: 107d210f7; -[SCUnifiedProfileStoriesActionDataModel initWithStoryType:storyId:snapClientId:snapServerId:deletable:dataModel:] */

undefined1 *
FUN_107d20fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126faa78;
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
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d210f8; end: 107d2111b; -[SCUnifiedProfileStoriesActionDataModel copyWithZone:] */

undefined8 FUN_107d210f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d2111c; end: 107d211b7; -[SCUnifiedProfileStoriesActionDataModel hash] */

long * FUN_107d2111c(long param_1,undefined8 param_2,long *param_3)

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
  ulong uStack_38;
  undefined8 uStack_30;
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
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  plVar3 = &lStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_107d21288:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_107d21294;
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
              goto LAB_107d21294;
            }
            goto LAB_107d21288;
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_107d21294:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 107d211b8; end: 107d212af; -[SCUnifiedProfileStoriesActionDataModel isEqual:] */

long FUN_107d211b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d21288:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d21294;
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
              goto LAB_107d21294;
            }
            goto LAB_107d21288;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d21294:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d212b0; end: 107d212b7; -[SCUnifiedProfileStoriesActionDataModel storyType] */

undefined8 FUN_107d212b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d212b8; end: 107d212bf; -[SCUnifiedProfileStoriesActionDataModel storyId] */

undefined8 FUN_107d212b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d212c0; end: 107d212c7; -[SCUnifiedProfileStoriesActionDataModel snapClientId] */

undefined8 FUN_107d212c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d212c8; end: 107d212cf; -[SCUnifiedProfileStoriesActionDataModel snapServerId] */

undefined8 FUN_107d212c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d212d0; end: 107d212d7; -[SCUnifiedProfileStoriesActionDataModel deletable] */

undefined1 FUN_107d212d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d212d8; end: 107d212df; -[SCUnifiedProfileStoriesActionDataModel dataModel] */

undefined8 FUN_107d212d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d212e0; end: 107d21327; -[SCUnifiedProfileStoriesActionDataModel .cxx_destruct] */

void FUN_107d212e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d21328; end: 107d21433; -[SCUnifiedProfileStoryViewCountDataModel initWithUserInfo:serverSentTime:notificationId:notificationKey:] */

undefined1 *
FUN_107d21328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126faa80;
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



/* Entry: 107d21434; end: 107d21457; -[SCUnifiedProfileStoryViewCountDataModel copyWithZone:] */

undefined8 FUN_107d21434(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d21458; end: 107d214e3; -[SCUnifiedProfileStoryViewCountDataModel hash] */

undefined8 * FUN_107d21458(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d21594:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d215a0;
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
              goto LAB_107d215a0;
            }
            goto LAB_107d21594;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d215a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d214e4; end: 107d215bb; -[SCUnifiedProfileStoryViewCountDataModel isEqual:] */

long FUN_107d214e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d21594:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d215a0;
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
              goto LAB_107d215a0;
            }
            goto LAB_107d21594;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d215a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d215bc; end: 107d215c3; -[SCUnifiedProfileStoryViewCountDataModel userInfo] */

undefined8 FUN_107d215bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d215c4; end: 107d215cb; -[SCUnifiedProfileStoryViewCountDataModel serverSentTime] */

undefined8 FUN_107d215c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d215cc; end: 107d215d3; -[SCUnifiedProfileStoryViewCountDataModel notificationId] */

undefined8 FUN_107d215cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d215d4; end: 107d215db; -[SCUnifiedProfileStoryViewCountDataModel notificationKey] */

undefined8 FUN_107d215d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d215dc; end: 107d21623; -[SCUnifiedProfileStoryViewCountDataModel .cxx_destruct] */

void FUN_107d215dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d21624; end: 107d216ab; -[SCUnifiedProfileOurStorySectionUpdateDataModel initWithBoxedSection:isLoaded:] */

undefined1 *
FUN_107d21624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126faa88;
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



/* Entry: 107d216ac; end: 107d216cf; -[SCUnifiedProfileOurStorySectionUpdateDataModel copyWithZone:] */

undefined8 FUN_107d216ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d216d0; end: 107d2173b; -[SCUnifiedProfileOurStorySectionUpdateDataModel hash] */

undefined8 * FUN_107d216d0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d217c0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107d217c0;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107d217c0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107d217c0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107d2173c; end: 107d217db; -[SCUnifiedProfileOurStorySectionUpdateDataModel isEqual:] */

long FUN_107d2173c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d217c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107d217c0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d217c0;
    }
  }
  lVar3 = 1;
LAB_107d217c0:
  _objc_release(param_3);
  return lVar3;
}


