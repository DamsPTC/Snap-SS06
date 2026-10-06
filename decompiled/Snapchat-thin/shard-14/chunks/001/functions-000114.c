/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aff05f4; end: 10aff066f; -[SCDiscoverFeedClientDisplayInfo hash] */

ulong * FUN_10aff05f4(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_38 = (ulong)uVar1 & 0xff;
  uStack_30 = uVar7 >> 0x10 & 0xff;
  uStack_28 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_20 = (ulong)uVar5;
  puVar2 = &uStack_38;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         ((((char)puVar2[1] != (char)param_3[1] ||
           (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
          (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0xb) == *(char *)((long)param_3 + 0xb));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10aff0670; end: 10aff0727; -[SCDiscoverFeedClientDisplayInfo isEqual:] */

bool FUN_10aff0670(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aff0728; end: 10aff072f; -[SCDiscoverFeedClientDisplayInfo hideTimestamp] */

undefined1 FUN_10aff0728(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff0730; end: 10aff0737; -[SCDiscoverFeedClientDisplayInfo showCompleted] */

undefined1 FUN_10aff0730(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aff0738; end: 10aff073f; -[SCDiscoverFeedClientDisplayInfo shouldMarkStoryUnviewed] */

undefined1 FUN_10aff0738(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10aff0740; end: 10aff0747; -[SCDiscoverFeedClientDisplayInfo t3PartiallyViewed] */

undefined1 FUN_10aff0740(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10aff0748; end: 10aff07bb; +[SCDiscoverFeedReportTileStoryData promotedStoryWithStory:shouldHideAd:] */

void FUN_10aff0748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
  puVar2[0x68] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aff07bc; end: 10aff08c3; +[SCDiscoverFeedReportTileStoryData publicUserStoryWithUsername:userId:snapId:tileMedia:isOfficial:] */

void FUN_10aff07bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d5b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x58] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aff08c4; end: 10aff099b; +[SCDiscoverFeedReportTileStoryData publisherStoryWithTileId:tileImageUrl:editionId:publisherId:publisherName:] */

void FUN_10aff08c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d5b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aff099c; end: 10aff0a67; +[SCDiscoverFeedReportTileStoryData savedStoryWithBusinessId:storyId:tileSnapId:] */

void FUN_10aff099c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d5b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aff0a68; end: 10aff0b33; +[SCDiscoverFeedReportTileStoryData spotlightStoryWithSnapId:tileId:userId:] */

void FUN_10aff0a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d5b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aff0b34; end: 10aff0b57; -[SCDiscoverFeedReportTileStoryData copyWithZone:] */

undefined8 FUN_10aff0b34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff0b58; end: 10aff0c73; -[SCDiscoverFeedReportTileStoryData hash] */

void FUN_10aff0b58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
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
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_e8 = PTR_PTR_1127040c0;
  puStack_f0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff0c74; end: 10aff0cb7; -[SCDiscoverFeedReportTileStoryData internalInit] */

void FUN_10aff0c74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127040c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff0cb8; end: 10aff0ecf; -[SCDiscoverFeedReportTileStoryData isEqual:] */

long FUN_10aff0cb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff0ea8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff0eb4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(char *)(param_1 + 0x58) == *(char *)(param_3 + 0x58) &&
         (*(char *)(param_1 + 0x68) == *(char *)(param_3 + 0x68))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x70);
                      if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x78);
                        if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x80);
                          if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x88);
                            if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x90);
                              if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x98);
                                if (lVar3 != *(long *)(param_3 + 0x98)) {
                                  func_0x00010c071ae0();
                                  goto LAB_10aff0eb4;
                                }
                                goto LAB_10aff0ea8;
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
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aff0eb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff0ed0; end: 10aff1017; -[SCDiscoverFeedReportTileStoryData matchPublisherStory:publicUserStory:promotedStory:savedStory:spotlightStory:] */

void FUN_10aff0ed0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30));
      }
    }
    else if ((lVar4 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                 *(undefined1 *)(param_1 + 0x58));
    }
  }
  else if (lVar4 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68));
    }
  }
  else {
    if (lVar4 == 3) {
      if (param_6 == 0) goto LAB_10aff0fe0;
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      pcVar5 = *(code **)(param_6 + 0x10);
      lVar4 = param_6;
    }
    else {
      if ((lVar4 != 4) || (param_7 == 0)) goto LAB_10aff0fe0;
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      pcVar5 = *(code **)(param_7 + 0x10);
      lVar4 = param_7;
    }
    (*pcVar5)(lVar4,uVar1,uVar2,uVar3);
  }
LAB_10aff0fe0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff1018; end: 10aff10d7; -[SCDiscoverFeedReportTileStoryData .cxx_destruct] */

void FUN_10aff1018(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aff10d8; end: 10aff11eb; -[SCDiscoverFeedStoryDebugInfo initWithCoder:] */

undefined1 * FUN_10aff10d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127040c8;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff11ec; end: 10aff12c7; -[SCDiscoverFeedStoryDebugInfo initWithDebugHtml:numImpressions:numLongImpressions:numRawWatches:visualElementType:isRetrievedFromBoosts:liteOverlayDebugValueByKey:] */

undefined1 *
FUN_10aff11ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1127040c8;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff12c8; end: 10aff12eb; -[SCDiscoverFeedStoryDebugInfo copyWithZone:] */

undefined8 FUN_10aff12c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff12ec; end: 10aff13af; -[SCDiscoverFeedStoryDebugInfo encodeWithCoder:] */

void FUN_10aff12ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f48db8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f48dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f48df8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f48e18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f48e38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ed31f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f48e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff13b0; end: 10aff1443; -[SCDiscoverFeedStoryDebugInfo hash] */

undefined8 * FUN_10aff13b0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aff1514:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aff1520;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       ((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
        if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10aff1520;
        }
        goto LAB_10aff1514;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aff1520:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aff1444; end: 10aff153b; -[SCDiscoverFeedStoryDebugInfo isEqual:] */

long FUN_10aff1444(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff1514:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff1520;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10aff1520;
        }
        goto LAB_10aff1514;
      }
    }
    lVar3 = 0;
  }
LAB_10aff1520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff153c; end: 10aff1543; -[SCDiscoverFeedStoryDebugInfo debugHtml] */

undefined8 FUN_10aff153c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff1544; end: 10aff154b; -[SCDiscoverFeedStoryDebugInfo numImpressions] */

undefined8 FUN_10aff1544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff154c; end: 10aff1553; -[SCDiscoverFeedStoryDebugInfo numLongImpressions] */

undefined8 FUN_10aff154c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aff1554; end: 10aff155b; -[SCDiscoverFeedStoryDebugInfo numRawWatches] */

undefined8 FUN_10aff1554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff155c; end: 10aff1563; -[SCDiscoverFeedStoryDebugInfo visualElementType] */

undefined8 FUN_10aff155c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff1564; end: 10aff156b; -[SCDiscoverFeedStoryDebugInfo isRetrievedFromBoosts] */

undefined1 FUN_10aff1564(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff156c; end: 10aff1573; -[SCDiscoverFeedStoryDebugInfo liteOverlayDebugValueByKey] */

undefined8 FUN_10aff156c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aff1574; end: 10aff15a3; -[SCDiscoverFeedStoryDebugInfo .cxx_destruct] */

void FUN_10aff1574(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aff15a4; end: 10aff1653; -[SCDiscoverFeedStoryEmbedding initWithCoder:] */

undefined1 * FUN_10aff15a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127040d0;
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



/* Entry: 10aff1654; end: 10aff16ff; -[SCDiscoverFeedStoryEmbedding initWithEmbeddingId:vector:] */

undefined1 *
FUN_10aff1654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127040d0;
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



/* Entry: 10aff1700; end: 10aff1723; -[SCDiscoverFeedStoryEmbedding copyWithZone:] */

undefined8 FUN_10aff1700(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff1724; end: 10aff1783; -[SCDiscoverFeedStoryEmbedding encodeWithCoder:] */

void FUN_10aff1724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f48e78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f48e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff1784; end: 10aff17f7; -[SCDiscoverFeedStoryEmbedding hash] */

undefined8 * FUN_10aff1784(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10aff1878:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff1884;
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
          goto LAB_10aff1884;
        }
        goto LAB_10aff1878;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aff1884:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aff17f8; end: 10aff189f; -[SCDiscoverFeedStoryEmbedding isEqual:] */

long FUN_10aff17f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff1878:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff1884;
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
          goto LAB_10aff1884;
        }
        goto LAB_10aff1878;
      }
    }
    lVar3 = 0;
  }
LAB_10aff1884:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff18a0; end: 10aff18a7; -[SCDiscoverFeedStoryEmbedding embeddingId] */

undefined8 FUN_10aff18a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aff18a8; end: 10aff18af; -[SCDiscoverFeedStoryEmbedding vector] */

undefined8 FUN_10aff18a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff18b0; end: 10aff18df; -[SCDiscoverFeedStoryEmbedding .cxx_destruct] */

void FUN_10aff18b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aff18e0; end: 10aff1967; -[SCDiscoverFeedSccTagWeightPair initWithCoder:] */

undefined1 *
FUN_10aff18e0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127040d8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff1968; end: 10aff19bf; -[SCDiscoverFeedSccTagWeightPair initWithSccTag:weight:] */

void FUN_10aff1968(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127040d8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
  }
  return;
}



/* Entry: 10aff19c0; end: 10aff19e3; -[SCDiscoverFeedSccTagWeightPair copyWithZone:] */

undefined8 FUN_10aff19c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff19e4; end: 10aff1a43; -[SCDiscoverFeedSccTagWeightPair encodeWithCoder:] */

void FUN_10aff19e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92f80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f48eb8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0xc),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f48ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff1a44; end: 10aff1ac7; -[SCDiscoverFeedSccTagWeightPair hash] */

long * FUN_10aff1a44(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_28 = (long)*(int *)(param_1 + 8);
  uVar3 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  lStack_20 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  plVar1 = &lStack_28;
  func_0x000107c3191c(plVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar1;
      _objc_opt_class(plVar1);
      plVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar2 & 1) == 0) || ((int)plVar1[1] != (int)param_3[1])) {
        plVar4 = (long *)0x0;
      }
      else {
        fVar5 = ABS(*(float *)((long)plVar1 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                1.1920929e-07;
        if (fVar5 <= 1.1754944e-38) {
          fVar5 = 1.1754944e-38;
        }
        plVar4 = (long *)(ulong)(ABS(*(float *)((long)plVar1 + 0xc) -
                                     *(float *)((long)param_3 + 0xc)) < fVar5);
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 10aff1ac8; end: 10aff1b7f; -[SCDiscoverFeedSccTagWeightPair isEqual:] */

bool FUN_10aff1ac8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        if (fVar4 <= 1.1754944e-38) {
          fVar4 = 1.1754944e-38;
        }
        bVar3 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10aff1b80; end: 10aff1b87; -[SCDiscoverFeedSccTagWeightPair sccTag] */

undefined4 FUN_10aff1b80(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10aff1b88; end: 10aff1b8f; -[SCDiscoverFeedSccTagWeightPair weight] */

undefined4 FUN_10aff1b88(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10aff1b90; end: 10aff1ca3; -[SCDiscoverFeedStoryOperaContext initWithCoder:] */

undefined1 * FUN_10aff1b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127040e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff1ca4; end: 10aff1da3; -[SCDiscoverFeedStoryOperaContext initWithSourceType:recommendationTriggerStoryId:recommendationTriggerStoryOperaPlaylistIndex:recommendationRequestId:sectionKey:hideSpotlightShareableActions:] */

undefined1 *
FUN_10aff1ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1127040e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
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
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff1da4; end: 10aff1dc7; -[SCDiscoverFeedStoryOperaContext copyWithZone:] */

undefined8 FUN_10aff1da4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff1dc8; end: 10aff1e77; -[SCDiscoverFeedStoryOperaContext encodeWithCoder:] */

void FUN_10aff1dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f48ef8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f48f18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f48f38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f48f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f48f78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f48f98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff1e78; end: 10aff1f03; -[SCDiscoverFeedStoryOperaContext hash] */

undefined8 * FUN_10aff1e78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aff1fcc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff1fd8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[2] == param_3[2] && (puVar3[4] == param_3[4])) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[5];
        if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[6];
          if (puVar6 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_10aff1fd8;
          }
          goto LAB_10aff1fcc;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aff1fd8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aff1f04; end: 10aff1ff3; -[SCDiscoverFeedStoryOperaContext isEqual:] */

long FUN_10aff1f04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff1fcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff1fd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10aff1fd8;
          }
          goto LAB_10aff1fcc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aff1fd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff1ff4; end: 10aff1ffb; -[SCDiscoverFeedStoryOperaContext sourceType] */

undefined8 FUN_10aff1ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff1ffc; end: 10aff2003; -[SCDiscoverFeedStoryOperaContext recommendationTriggerStoryId] */

undefined8 FUN_10aff1ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff2004; end: 10aff200b; -[SCDiscoverFeedStoryOperaContext recommendationTriggerStoryOperaPlaylistIndex] */

undefined8 FUN_10aff2004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aff200c; end: 10aff2013; -[SCDiscoverFeedStoryOperaContext recommendationRequestId] */

undefined8 FUN_10aff200c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff2014; end: 10aff201b; -[SCDiscoverFeedStoryOperaContext sectionKey] */

undefined8 FUN_10aff2014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff201c; end: 10aff2023; -[SCDiscoverFeedStoryOperaContext hideSpotlightShareableActions] */

undefined1 FUN_10aff201c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff2024; end: 10aff205f; -[SCDiscoverFeedStoryOperaContext .cxx_destruct] */

void FUN_10aff2024(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aff2060; end: 10aff20d3; -[SCDiscoverFeedStorySequenceInfo initWithCoder:] */

undefined1 * FUN_10aff2060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127040e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff20d4; end: 10aff211b; -[SCDiscoverFeedStorySequenceInfo initWithLatestSequence:] */

void FUN_10aff20d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127040e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10aff211c; end: 10aff213f; -[SCDiscoverFeedStorySequenceInfo copyWithZone:] */

undefined8 FUN_10aff211c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff2140; end: 10aff2157; -[SCDiscoverFeedStorySequenceInfo encodeWithCoder:] */

void FUN_10aff2140(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeInt64_forKey__1125c2590,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f48fb8);
  return;
}



/* Entry: 10aff2158; end: 10aff2167; -[SCDiscoverFeedStorySequenceInfo hash] */

long FUN_10aff2158(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10aff2168; end: 10aff21ef; -[SCDiscoverFeedStorySequenceInfo isEqual:] */

bool FUN_10aff2168(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aff21f0; end: 10aff21f7; -[SCDiscoverFeedStorySequenceInfo latestSequence] */

undefined8 FUN_10aff21f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aff21f8; end: 10aff2487; -[SCDiscoverFeedRankingStoryLoggingInfo initWithCoder:] */

undefined1 * FUN_10aff21f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127040f0;
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
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff2488; end: 10aff26eb; -[SCDiscoverFeedRankingStoryLoggingInfo initWithCompositeStoryId:storyDedupeFp:storyKey:storyType:streamId:hpoData:variantId:itemPosForRecommendation:actionAttachedInfo:impressionAttachedInfo:viewingSessionAttachedInfo:isSubscribed:isPromoted:isExplorationStory:ihAllowanceType:isMagellan:isSuggestive:tileId:isContinuousExplorationStory:region:] */

undefined8 *
FUN_10aff2488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1127040f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    puVar1[9] = param_10;
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
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_14;
    *(undefined1 *)((long)puVar1 + 9) = param_14._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_14._2_1_;
    puVar1[0xd] = param_16;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 0xc) = param_17._1_1_;
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_20;
    puVar1[0xf] = param_22;
  }
  _objc_release(param_19);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10aff26ec; end: 10aff270f; -[SCDiscoverFeedRankingStoryLoggingInfo copyWithZone:] */

undefined8 FUN_10aff26ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff2710; end: 10aff28d7; -[SCDiscoverFeedRankingStoryLoggingInfo encodeWithCoder:] */

void FUN_10aff2710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e79438);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ea8938);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f48fd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ea8958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f48ff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f49018);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f49038);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f49058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f49078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f49098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f490b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f490d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ed30d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110ed30f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f490f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f49118);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f49138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f49158);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f49178);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110e6c958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff28d8; end: 10aff29ef; -[SCDiscoverFeedRankingStoryLoggingInfo hash] */

undefined8 * FUN_10aff28d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_b8 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x30);
  lStack_b0 = -lVar5;
  if (-1 < lVar5) {
    lStack_b0 = lVar5;
  }
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_88 = *(undefined8 *)(param_1 + 0x50);
  lStack_90 = -lVar5;
  if (-1 < lVar5) {
    lStack_90 = lVar5;
  }
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uStack_60 = (ulong)*(byte *)(param_1 + 10);
  lVar5 = *(long *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x70);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xd);
  lVar5 = *(long *)(param_1 + 0x78);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_c8;
  func_0x000107c3191c(puVar3,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aff2bc0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff2bcc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[5] == param_3[5])) &&
          ((puVar3[9] == param_3[9] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))))) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
       (((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
         (puVar3[0xd] == param_3[0xd])) &&
        ((*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb) &&
         (((*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc) &&
           (*(char *)((long)puVar3 + 0xd) == *(char *)((long)param_3 + 0xd))) &&
          (puVar3[0xf] == param_3[0xf])))))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[6];
        if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[7];
          if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[8];
            if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[10];
              if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[0xb];
                if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[0xc];
                  if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[0xe];
                    if (puVar6 != (undefined8 *)param_3[0xe]) {
                      func_0x00010c071ae0();
                      goto LAB_10aff2bcc;
                    }
                    goto LAB_10aff2bc0;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aff2bcc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aff29f0; end: 10aff2be7; -[SCDiscoverFeedRankingStoryLoggingInfo isEqual:] */

long FUN_10aff29f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff2bc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff2bcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
       (((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
           (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
          (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x50);
              if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x58);
                if ((lVar3 == *(long *)(param_3 + 0x58)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x60);
                  if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x70);
                    if (lVar3 != *(long *)(param_3 + 0x70)) {
                      func_0x00010c071ae0();
                      goto LAB_10aff2bcc;
                    }
                    goto LAB_10aff2bc0;
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
LAB_10aff2bcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff2be8; end: 10aff2bef; -[SCDiscoverFeedRankingStoryLoggingInfo compositeStoryId] */

undefined8 FUN_10aff2be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff2bf0; end: 10aff2bf7; -[SCDiscoverFeedRankingStoryLoggingInfo storyDedupeFp] */

undefined8 FUN_10aff2bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff2bf8; end: 10aff2bff; -[SCDiscoverFeedRankingStoryLoggingInfo storyKey] */

undefined8 FUN_10aff2bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aff2c00; end: 10aff2c07; -[SCDiscoverFeedRankingStoryLoggingInfo storyType] */

undefined8 FUN_10aff2c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff2c08; end: 10aff2c0f; -[SCDiscoverFeedRankingStoryLoggingInfo streamId] */

undefined8 FUN_10aff2c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff2c10; end: 10aff2c17; -[SCDiscoverFeedRankingStoryLoggingInfo hpoData] */

undefined8 FUN_10aff2c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aff2c18; end: 10aff2c1f; -[SCDiscoverFeedRankingStoryLoggingInfo variantId] */

undefined8 FUN_10aff2c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aff2c20; end: 10aff2c27; -[SCDiscoverFeedRankingStoryLoggingInfo itemPosForRecommendation] */

undefined8 FUN_10aff2c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aff2c28; end: 10aff2c2f; -[SCDiscoverFeedRankingStoryLoggingInfo actionAttachedInfo] */

undefined8 FUN_10aff2c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aff2c30; end: 10aff2c37; -[SCDiscoverFeedRankingStoryLoggingInfo impressionAttachedInfo] */

undefined8 FUN_10aff2c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aff2c38; end: 10aff2c3f; -[SCDiscoverFeedRankingStoryLoggingInfo viewingSessionAttachedInfo] */

undefined8 FUN_10aff2c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10aff2c40; end: 10aff2c47; -[SCDiscoverFeedRankingStoryLoggingInfo isSubscribed] */

undefined1 FUN_10aff2c40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff2c48; end: 10aff2c4f; -[SCDiscoverFeedRankingStoryLoggingInfo isPromoted] */

undefined1 FUN_10aff2c48(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aff2c50; end: 10aff2c57; -[SCDiscoverFeedRankingStoryLoggingInfo isExplorationStory] */

undefined1 FUN_10aff2c50(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10aff2c58; end: 10aff2c5f; -[SCDiscoverFeedRankingStoryLoggingInfo ihAllowanceType] */

undefined8 FUN_10aff2c58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10aff2c60; end: 10aff2c67; -[SCDiscoverFeedRankingStoryLoggingInfo isMagellan] */

undefined1 FUN_10aff2c60(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10aff2c68; end: 10aff2c6f; -[SCDiscoverFeedRankingStoryLoggingInfo isSuggestive] */

undefined1 FUN_10aff2c68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10aff2c70; end: 10aff2c77; -[SCDiscoverFeedRankingStoryLoggingInfo tileId] */

undefined8 FUN_10aff2c70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10aff2c78; end: 10aff2c7f; -[SCDiscoverFeedRankingStoryLoggingInfo isContinuousExplorationStory] */

undefined1 FUN_10aff2c78(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10aff2c80; end: 10aff2c87; -[SCDiscoverFeedRankingStoryLoggingInfo region] */

undefined8 FUN_10aff2c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10aff2c88; end: 10aff2cff; -[SCDiscoverFeedRankingStoryLoggingInfo .cxx_destruct] */

void FUN_10aff2c88(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aff2d00; end: 10aff2d1b; +[SCDiscoverFeedRankingStoryLoggingInfoBuilder discoverFeedRankingStoryLoggingInfo] */

void FUN_10aff2d00(void)

{
  _objc_alloc_init(PTR_PTR_1126c22b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff2d1c; end: 10aff3187; +[SCDiscoverFeedRankingStoryLoggingInfoBuilder discoverFeedRankingStoryLoggingInfoFromExistingDiscoverFeedRankingStoryLoggingInfo:] */

void FUN_10aff2d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  
  puVar1 = PTR_PTR_1126c22b0;
  _objc_retain(param_3);
  func_0x00010bf81cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aabc0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c259740(param_3);
  puVar5 = puVar3;
  func_0x00010c2ba3e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c25a060(param_3);
  puVar6 = puVar5;
  func_0x00010c2ba4c0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c25b720(param_3);
  puVar7 = puVar6;
  func_0x00010c2ba700(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2ba820(puVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bfe48a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2af880(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2bc4c0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c084920(param_3);
  puVar14 = puVar12;
  func_0x00010c2b1b40(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010beedcc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2a74c0(puVar14,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfea7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2afb60(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c29f3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2bca00(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c080120(param_3);
  puVar21 = puVar19;
  func_0x00010c2b17c0(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c07b500(param_3);
  puVar22 = puVar21;
  func_0x00010c2b1240(puVar21,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c0724e0(param_3);
  puVar23 = puVar22;
  func_0x00010c2b0700(puVar22,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bfe69c0(param_3);
  puVar24 = puVar23;
  func_0x00010c2afa00(puVar23,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c077320(param_3);
  puVar25 = puVar24;
  func_0x00010c2b0dc0(puVar24,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c0803a0(param_3);
  puVar26 = puVar25;
  func_0x00010c2b1800(puVar25,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c26ebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010c2bb160(puVar26,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c06f620(param_3);
  puVar29 = puVar27;
  func_0x00010c2b04a0(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c125a80(param_3);
  _objc_release(param_3);
  puVar30 = puVar29;
  func_0x00010c2b6b20(puVar29,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(uVar20);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar13);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 10aff3188; end: 10aff3213; -[SCDiscoverFeedRankingStoryLoggingInfoBuilder build] */

void FUN_10aff3188(void)

{
  _objc_alloc(PTR_PTR_1126dca10);
  func_0x00010c000c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff3214; end: 10aff324b; -[SCDiscoverFeedRankingStoryLoggingInfoBuilder withCompositeStoryId:] */

long FUN_10aff3214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff324c; end: 10aff3253; -[SCDiscoverFeedRankingStoryLoggingInfoBuilder withStoryDedupeFp:] */

void FUN_10aff324c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}


