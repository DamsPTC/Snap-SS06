/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b61fd08; end: 10b61fd0f; -[SCStoriesSnapPlaybackInfo boostInfo] */

undefined8 FUN_10b61fd08(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b61fd10; end: 10b61fd17; -[SCStoriesSnapPlaybackInfo spotlightEngagementInfo] */

undefined8 FUN_10b61fd10(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b61fd18; end: 10b61fd1f; -[SCStoriesSnapPlaybackInfo spotlightDescription] */

undefined8 FUN_10b61fd18(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b61fd20; end: 10b61fd27; -[SCStoriesSnapPlaybackInfo cameosMetadata] */

undefined8 FUN_10b61fd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b61fd28; end: 10b61fd2f; -[SCStoriesSnapPlaybackInfo spotlightRepliesEnabledOnSnap] */

undefined1 FUN_10b61fd28(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b61fd30; end: 10b61fd37; -[SCStoriesSnapPlaybackInfo spectaclesMetadata] */

undefined8 FUN_10b61fd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b61fd38; end: 10b61fd3f; -[SCStoriesSnapPlaybackInfo scanOnPublicContentEnabled] */

undefined1 FUN_10b61fd38(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b61fd40; end: 10b61fd47; -[SCStoriesSnapPlaybackInfo creatorBitmojiAvatarId] */

undefined8 FUN_10b61fd40(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b61fd48; end: 10b61fd4f; -[SCStoriesSnapPlaybackInfo creatorBitmojiAvatarSelfieId] */

undefined8 FUN_10b61fd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10b61fd50; end: 10b61fd57; -[SCStoriesSnapPlaybackInfo managementInfo] */

undefined8 FUN_10b61fd50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10b61fd58; end: 10b61fd5f; -[SCStoriesSnapPlaybackInfo mediaOrigin] */

undefined8 FUN_10b61fd58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10b61fd60; end: 10b61fd67; -[SCStoriesSnapPlaybackInfo storyTypeVariant] */

undefined8 FUN_10b61fd60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10b61fd68; end: 10b61fd6f; -[SCStoriesSnapPlaybackInfo creatorEligibility] */

undefined8 FUN_10b61fd68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10b61fd70; end: 10b61fd77; -[SCStoriesSnapPlaybackInfo commentsSnapReplyMetadata] */

undefined8 FUN_10b61fd70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10b61fd78; end: 10b61fd7f; -[SCStoriesSnapPlaybackInfo fanPassSnapPlaceholderCount] */

undefined8 FUN_10b61fd78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10b61fd80; end: 10b61fd87; -[SCStoriesSnapPlaybackInfo fromCamera] */

undefined1 FUN_10b61fd80(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b61fd88; end: 10b61fd8f; -[SCStoriesSnapPlaybackInfo suggestedSearchInfo] */

undefined8 FUN_10b61fd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10b61fd90; end: 10b61fdfb; +[SCStoriesSnapAttributes aggregatedStoryInfoWithAggregatedStoryInfo:] */

void FUN_10b61fd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61fdfc; end: 10b61fe67; +[SCStoriesSnapAttributes customStoryInfoWithCustomStoryInfo:] */

void FUN_10b61fdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61fe68; end: 10b61fed3; +[SCStoriesSnapAttributes ourStoryInfoWithOurStoryInfo:] */

void FUN_10b61fe68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61fed4; end: 10b61ff3f; +[SCStoriesSnapAttributes savedStoryInfoWithSavedStoryInfo:] */

void FUN_10b61fed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61ff40; end: 10b61ffab; +[SCStoriesSnapAttributes topicStoryInfoWithTopicStoryInfo:] */

void FUN_10b61ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61ffac; end: 10b620053; -[SCStoriesSnapAttributes hash] */

undefined8 * FUN_10b61ffac(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
LAB_10b620144:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b620150;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
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
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b620150;
                }
                goto LAB_10b620144;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b620150:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b620054; end: 10b62016b; -[SCStoriesSnapAttributes isEqual:] */

long FUN_10b620054(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b620144:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b620150;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b620150;
                }
                goto LAB_10b620144;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b620150:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62016c; end: 10b6202b7; -[SCStoriesSnapAttributes matchUserStoryInfo:customStoryInfo:topicStoryInfo:ourStoryInfo:aggregatedStoryInfo:savedStoryInfo:] */

void FUN_10b62016c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      if (param_3 == 0) goto LAB_10b620274;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else if (lVar1 == 2) {
      if (param_4 == 0) goto LAB_10b620274;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 3) || (param_5 == 0)) goto LAB_10b620274;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
  }
  else if (lVar1 == 4) {
    if (param_6 == 0) goto LAB_10b620274;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else if (lVar1 == 5) {
    if (param_7 == 0) goto LAB_10b620274;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  else {
    if ((lVar1 != 6) || (param_8 == 0)) goto LAB_10b620274;
    lVar2 = 0x38;
    lVar1 = param_8;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b620274:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6202b8; end: 10b6202d7; -[SCStoriesSnapAttributes isSameSubtype:] */

bool FUN_10b6202b8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10b6202d8; end: 10b6202df; -[SCStoriesSnapAttributes subtype] */

undefined8 FUN_10b6202d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6202e0; end: 10b6203cb; -[SCStoriesSnapAttributes asUserStoryInfo] */

void FUN_10b6202e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b6203e4;
  puStack_60 = &UNK_1108d5340;
  puStack_48 = puStack_58;
  func_0x00010c0c1340(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110d26778,
                      &PTR___NSConcreteGlobalBlock_110d26798,&PTR___NSConcreteGlobalBlock_110d267b8,
                      &PTR___NSConcreteGlobalBlock_110d267f8,&PTR___NSConcreteGlobalBlock_110d26838)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6203cc; end: 10b6203e3;  */

void FUN_10b6203cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6203e4; end: 10b62041b;  */

void FUN_10b6203e4(long param_1,undefined8 param_2)

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



/* Entry: 10b62041c; end: 10b62042f;  */

void FUN_10b62041c(void)

{
  return;
}



/* Entry: 10b620430; end: 10b62051b; -[SCStoriesSnapAttributes asCustomStoryInfo] */

void FUN_10b620430(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b620520;
  puStack_60 = &UNK_1108d5370;
  puStack_48 = puStack_58;
  func_0x00010c0c1340(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26858,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110d26878,&PTR___NSConcreteGlobalBlock_110d26898,
                      &PTR___NSConcreteGlobalBlock_110d268b8,&PTR___NSConcreteGlobalBlock_110d268d8)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b62051c; end: 10b62051f;  */

void FUN_10b62051c(void)

{
  return;
}



/* Entry: 10b620520; end: 10b620557;  */

void FUN_10b620520(long param_1,undefined8 param_2)

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



/* Entry: 10b620558; end: 10b620567;  */

void FUN_10b620558(void)

{
  return;
}



/* Entry: 10b620568; end: 10b620653; -[SCStoriesSnapAttributes asTopicStoryInfo] */

void FUN_10b620568(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b62065c;
  puStack_60 = &UNK_1108d53d0;
  puStack_48 = puStack_58;
  func_0x00010c0c1340(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d268f8,
                      &PTR___NSConcreteGlobalBlock_110d26918,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110d26938,&PTR___NSConcreteGlobalBlock_110d26958,
                      &PTR___NSConcreteGlobalBlock_110d26978);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b620654; end: 10b62065b;  */

void FUN_10b620654(void)

{
  return;
}



/* Entry: 10b62065c; end: 10b620693;  */

void FUN_10b62065c(long param_1,undefined8 param_2)

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



/* Entry: 10b620694; end: 10b62069f;  */

void FUN_10b620694(void)

{
  return;
}



/* Entry: 10b6206a0; end: 10b62078b; -[SCStoriesSnapAttributes asOurStoryInfo] */

void FUN_10b6206a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b620798;
  puStack_60 = &UNK_1108d53a0;
  puStack_48 = puStack_58;
  func_0x00010c0c1340(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26998,
                      &PTR___NSConcreteGlobalBlock_110d269b8,&PTR___NSConcreteGlobalBlock_110d269d8,
                      &puStack_78,&PTR___NSConcreteGlobalBlock_110d269f8,
                      &PTR___NSConcreteGlobalBlock_110d26a18);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b62078c; end: 10b620797;  */

void FUN_10b62078c(void)

{
  return;
}



/* Entry: 10b620798; end: 10b6207cf;  */

void FUN_10b620798(long param_1,undefined8 param_2)

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



/* Entry: 10b6207d0; end: 10b6207d7;  */

void FUN_10b6207d0(void)

{
  return;
}



/* Entry: 10b6207d8; end: 10b6208c3; -[SCStoriesSnapAttributes asAggregatedStoryInfo] */

void FUN_10b6207d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b6208d4;
  puStack_60 = &UNK_110931410;
  puStack_48 = puStack_58;
  func_0x00010c0c1340(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26a38,
                      &PTR___NSConcreteGlobalBlock_110d26a58,&PTR___NSConcreteGlobalBlock_110d26a78,
                      &PTR___NSConcreteGlobalBlock_110d26a98,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110d26ab8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6208c4; end: 10b6208d3;  */

void FUN_10b6208c4(void)

{
  return;
}



/* Entry: 10b6208d4; end: 10b62090b;  */

void FUN_10b6208d4(long param_1,undefined8 param_2)

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



/* Entry: 10b62090c; end: 10b62090f;  */

void FUN_10b62090c(void)

{
  return;
}



/* Entry: 10b620910; end: 10b6209fb; -[SCStoriesSnapAttributes asSavedStoryInfo] */

void FUN_10b620910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b620a10;
  puStack_60 = &UNK_110931440;
  puStack_48 = puStack_58;
  func_0x00010c0c1340(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26ad8,
                      &PTR___NSConcreteGlobalBlock_110d26af8,&PTR___NSConcreteGlobalBlock_110d26b18,
                      &PTR___NSConcreteGlobalBlock_110d26b38,&PTR___NSConcreteGlobalBlock_110d26b58,
                      &puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6209fc; end: 10b620a0f;  */

void FUN_10b6209fc(void)

{
  return;
}



/* Entry: 10b620a10; end: 10b620a47;  */

void FUN_10b620a10(long param_1,undefined8 param_2)

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



/* Entry: 10b620a48; end: 10b620a6b; -[SCStoriesUserStoryInfo copyWithZone:] */

undefined8 FUN_10b620a48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b620a6c; end: 10b620ac7; -[SCStoriesUserStoryInfo hash] */

undefined8 * FUN_10b620a6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10b620ac8; end: 10b620b5f; -[SCStoriesUserStoryInfo isEqual:] */

bool FUN_10b620ac8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b620b60; end: 10b620b67; -[SCStoriesUserStoryInfo type] */

undefined8 FUN_10b620b60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b620b68; end: 10b620b6f; -[SCStoriesUserStoryInfo customTTL] */

undefined8 FUN_10b620b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b620b70; end: 10b620c0b; -[SCStoriesCustomStoryInfo initWithStoryId:type:customTTL:privateStorySubtype:] */

undefined1 *
FUN_10b620b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112706b18;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b620c0c; end: 10b620c2f; -[SCStoriesCustomStoryInfo copyWithZone:] */

undefined8 FUN_10b620c0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b620c30; end: 10b620cb3; -[SCStoriesCustomStoryInfo hash] */

undefined8 * FUN_10b620c30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b620d58;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[2] != param_3[2] || (puVar2[3] != param_3[3])) || (puVar2[4] != param_3[4])))) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b620d58;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b620d58;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b620d58:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b620cb4; end: 10b620d73; -[SCStoriesCustomStoryInfo isEqual:] */

long FUN_10b620cb4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b620d58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_10b620d58;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b620d58;
    }
  }
  lVar3 = 1;
LAB_10b620d58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b620d74; end: 10b620d7b; -[SCStoriesCustomStoryInfo storyId] */

undefined8 FUN_10b620d74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b620d7c; end: 10b620d83; -[SCStoriesCustomStoryInfo type] */

undefined8 FUN_10b620d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b620d84; end: 10b620d8b; -[SCStoriesCustomStoryInfo customTTL] */

undefined8 FUN_10b620d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b620d8c; end: 10b620d93; -[SCStoriesCustomStoryInfo privateStorySubtype] */

undefined8 FUN_10b620d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b620d94; end: 10b620d9f; -[SCStoriesCustomStoryInfo .cxx_destruct] */

void FUN_10b620d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b620da0; end: 10b620eab; -[SCStoriesTopicStoryInfo initWithTopic:storyId:originalStoryId:sharedStorySubmissionId:] */

undefined1 *
FUN_10b620da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112706b20;
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



/* Entry: 10b620eac; end: 10b620ecf; -[SCStoriesTopicStoryInfo copyWithZone:] */

undefined8 FUN_10b620eac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b620ed0; end: 10b620f5b; -[SCStoriesTopicStoryInfo hash] */

undefined8 * FUN_10b620ed0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b62100c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b621018;
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
              goto LAB_10b621018;
            }
            goto LAB_10b62100c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b621018:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b620f5c; end: 10b621033; -[SCStoriesTopicStoryInfo isEqual:] */

long FUN_10b620f5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62100c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b621018;
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
              goto LAB_10b621018;
            }
            goto LAB_10b62100c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b621018:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b621034; end: 10b62103b; -[SCStoriesTopicStoryInfo topic] */

undefined8 FUN_10b621034(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b62103c; end: 10b621043; -[SCStoriesTopicStoryInfo storyId] */

undefined8 FUN_10b62103c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b621044; end: 10b62104b; -[SCStoriesTopicStoryInfo originalStoryId] */

undefined8 FUN_10b621044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b62104c; end: 10b621053; -[SCStoriesTopicStoryInfo sharedStorySubmissionId] */

undefined8 FUN_10b62104c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b621054; end: 10b62109b; -[SCStoriesTopicStoryInfo .cxx_destruct] */

void FUN_10b621054(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b62109c; end: 10b6211f7; -[SCStoriesOurStoryInfo initWithStoryId:externalId:originalSnapId:isSpotlightStory:isMapStory:spotlightSnapStatus:sharedStorySubmissionId:encodedContentModerationStatus:] */

undefined1 *
FUN_10b62109c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
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
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112706b28;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6211f8; end: 10b62121b; -[SCStoriesOurStoryInfo copyWithZone:] */

undefined8 FUN_10b6211f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62121c; end: 10b6212c7; -[SCStoriesOurStoryInfo hash] */

undefined8 * FUN_10b62121c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6213c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6213cc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) && (puVar3[5] == param_3[5])
        ))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[7];
              if (puVar6 != (undefined8 *)param_3[7]) {
                func_0x00010c071ae0();
                goto LAB_10b6213cc;
              }
              goto LAB_10b6213c0;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6213cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6212c8; end: 10b6213e7; -[SCStoriesOurStoryInfo isEqual:] */

long FUN_10b6212c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6213c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6213cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10b6213cc;
              }
              goto LAB_10b6213c0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6213cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6213e8; end: 10b6213ef; -[SCStoriesOurStoryInfo storyId] */

undefined8 FUN_10b6213e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6213f0; end: 10b6213f7; -[SCStoriesOurStoryInfo externalId] */

undefined8 FUN_10b6213f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6213f8; end: 10b6213ff; -[SCStoriesOurStoryInfo originalSnapId] */

undefined8 FUN_10b6213f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b621400; end: 10b621407; -[SCStoriesOurStoryInfo isSpotlightStory] */

undefined1 FUN_10b621400(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b621408; end: 10b62140f; -[SCStoriesOurStoryInfo isMapStory] */

undefined1 FUN_10b621408(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b621410; end: 10b621417; -[SCStoriesOurStoryInfo spotlightSnapStatus] */

undefined8 FUN_10b621410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b621418; end: 10b62141f; -[SCStoriesOurStoryInfo sharedStorySubmissionId] */

undefined8 FUN_10b621418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b621420; end: 10b621427; -[SCStoriesOurStoryInfo encodedContentModerationStatus] */

undefined8 FUN_10b621420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b621428; end: 10b62147b; -[SCStoriesOurStoryInfo .cxx_destruct] */

void FUN_10b621428(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b62147c; end: 10b621503; -[SCStoriesAggregatedStoryInfo initWithStoryId:storyType:] */

undefined1 *
FUN_10b62147c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706b30;
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



/* Entry: 10b621504; end: 10b621527; -[SCStoriesAggregatedStoryInfo copyWithZone:] */

undefined8 FUN_10b621504(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b621528; end: 10b62159b; -[SCStoriesAggregatedStoryInfo hash] */

undefined8 * FUN_10b621528(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b621620;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b621620;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b621620;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b621620:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b62159c; end: 10b62163b; -[SCStoriesAggregatedStoryInfo isEqual:] */

long FUN_10b62159c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b621620;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b621620;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b621620;
    }
  }
  lVar3 = 1;
LAB_10b621620:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62163c; end: 10b621643; -[SCStoriesAggregatedStoryInfo storyId] */

undefined8 FUN_10b62163c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b621644; end: 10b62164b; -[SCStoriesAggregatedStoryInfo storyType] */

undefined8 FUN_10b621644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62164c; end: 10b621657; -[SCStoriesAggregatedStoryInfo .cxx_destruct] */

void FUN_10b62164c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b621658; end: 10b621747; -[SCStoriesSavedStoryInfo initWithStoryId:isOfficial:badgeType:storyTitle:encodedContentModerationStatus:] */

undefined1 *
FUN_10b621658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112706b38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b621748; end: 10b62176b; -[SCStoriesSavedStoryInfo copyWithZone:] */

undefined8 FUN_10b621748(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62176c; end: 10b6217f7; -[SCStoriesSavedStoryInfo hash] */

undefined8 * FUN_10b62176c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  lStack_40 = (long)*(int *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6218b0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6218bc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b6218bc;
          }
          goto LAB_10b6218b0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6218bc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6217f8; end: 10b6218d7; -[SCStoriesSavedStoryInfo isEqual:] */

long FUN_10b6217f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6218b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6218bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b6218bc;
          }
          goto LAB_10b6218b0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6218bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6218d8; end: 10b6218df; -[SCStoriesSavedStoryInfo storyId] */

undefined8 FUN_10b6218d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6218e0; end: 10b6218e7; -[SCStoriesSavedStoryInfo isOfficial] */

undefined1 FUN_10b6218e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6218e8; end: 10b6218ef; -[SCStoriesSavedStoryInfo badgeType] */

undefined4 FUN_10b6218e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


