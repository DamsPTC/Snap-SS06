/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d73ea0; end: 107d741cf; -[SCImpalaStoryPlaybackInfo initWithMetricsURL:reach:screenshots:storyReplies:showPeekingViewersList:appearWithExpandedViewersList:deleteAction:saveable:allowSaveEntireStory:reportable:profileEnabled:thumbnailURL:encryptedThumbnailURL:boosts:shares:subscribes:paidViews:paidReach:combinedViews:combinedReach:] */

undefined8 *
FUN_107d73ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126faf10;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined4 *)(puVar1 + 2) = param_9;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10._3_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d741d0; end: 107d741f3; -[SCImpalaStoryPlaybackInfo copyWithZone:] */

undefined8 FUN_107d741d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d741f4; end: 107d7432b; -[SCImpalaStoryPlaybackInfo hash] */

undefined8 * FUN_107d741f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
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
  ulong uVar12;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uStack_a8 = (ulong)*(byte *)(param_1 + 8);
  uStack_a0 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_98 = (ulong)uVar1;
  uVar10 = *(undefined4 *)(param_1 + 10);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar11 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
           0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar11 >> 0x30);
  uStack_90 = (ulong)uVar1 & 0xff;
  uStack_88 = uVar11 >> 0x10 & 0xff;
  uStack_80 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_78 = (ulong)uVar9;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = uVar4;
  func_0x00010bfde980();
  puVar5 = &uStack_c8;
  uStack_30 = uVar3;
  func_0x000100505190(puVar5,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_107d74524:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d74530;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar6 & 1) != 0) &&
         ((((*(char *)(puVar5 + 1) == *(char *)(param_3 + 1) &&
            (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
           (*(int *)(puVar5 + 2) == *(int *)(param_3 + 2))) &&
          ((*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10) &&
           (*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (*(char *)((long)puVar5 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
       (*(char *)((long)puVar5 + 0xd) == *(char *)((long)param_3 + 0xd))) {
      lVar7 = puVar5[3];
      if ((lVar7 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
        lVar7 = puVar5[4];
        if ((lVar7 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
          lVar7 = puVar5[5];
          if ((lVar7 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
            lVar7 = puVar5[6];
            if ((lVar7 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
              lVar7 = puVar5[7];
              if ((lVar7 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                lVar7 = puVar5[8];
                if ((lVar7 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                  lVar7 = puVar5[9];
                  if ((lVar7 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                    lVar7 = puVar5[10];
                    if ((lVar7 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                      lVar7 = puVar5[0xb];
                      if ((lVar7 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                        lVar7 = puVar5[0xc];
                        if ((lVar7 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                          lVar7 = puVar5[0xd];
                          if ((lVar7 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                            lVar7 = puVar5[0xe];
                            if ((lVar7 == param_3[0xe]) || (func_0x00010c071ae0(), (int)lVar7 != 0))
                            {
                              puVar8 = (undefined8 *)puVar5[0xf];
                              if (puVar8 != (undefined8 *)param_3[0xf]) {
                                func_0x00010c071ae0();
                                goto LAB_107d74530;
                              }
                              goto LAB_107d74524;
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
    puVar8 = (undefined8 *)0x0;
  }
LAB_107d74530:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107d7432c; end: 107d7454b; -[SCImpalaStoryPlaybackInfo isEqual:] */

long FUN_107d7432c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d74524:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d74530;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x78);
                              if (lVar3 != *(long *)(param_3 + 0x78)) {
                                func_0x00010c071ae0();
                                goto LAB_107d74530;
                              }
                              goto LAB_107d74524;
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
LAB_107d74530:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d7454c; end: 107d74553; -[SCImpalaStoryPlaybackInfo metricsURL] */

undefined8 FUN_107d7454c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d74554; end: 107d7455b; -[SCImpalaStoryPlaybackInfo reach] */

undefined8 FUN_107d74554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d7455c; end: 107d74563; -[SCImpalaStoryPlaybackInfo screenshots] */

undefined8 FUN_107d7455c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d74564; end: 107d7456b; -[SCImpalaStoryPlaybackInfo storyReplies] */

undefined8 FUN_107d74564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d7456c; end: 107d74573; -[SCImpalaStoryPlaybackInfo showPeekingViewersList] */

undefined1 FUN_107d7456c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d74574; end: 107d7457b; -[SCImpalaStoryPlaybackInfo appearWithExpandedViewersList] */

undefined1 FUN_107d74574(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d7457c; end: 107d74583; -[SCImpalaStoryPlaybackInfo deleteAction] */

undefined4 FUN_107d7457c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 107d74584; end: 107d7458b; -[SCImpalaStoryPlaybackInfo saveable] */

undefined1 FUN_107d74584(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d7458c; end: 107d74593; -[SCImpalaStoryPlaybackInfo allowSaveEntireStory] */

undefined1 FUN_107d7458c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d74594; end: 107d7459b; -[SCImpalaStoryPlaybackInfo reportable] */

undefined1 FUN_107d74594(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d7459c; end: 107d745a3; -[SCImpalaStoryPlaybackInfo profileEnabled] */

undefined1 FUN_107d7459c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d745a4; end: 107d745ab; -[SCImpalaStoryPlaybackInfo thumbnailURL] */

undefined8 FUN_107d745a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d745ac; end: 107d745b3; -[SCImpalaStoryPlaybackInfo encryptedThumbnailURL] */

undefined8 FUN_107d745ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d745b4; end: 107d745bb; -[SCImpalaStoryPlaybackInfo boosts] */

undefined8 FUN_107d745b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d745bc; end: 107d745c3; -[SCImpalaStoryPlaybackInfo shares] */

undefined8 FUN_107d745bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d745c4; end: 107d745cb; -[SCImpalaStoryPlaybackInfo subscribes] */

undefined8 FUN_107d745c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d745cc; end: 107d745d3; -[SCImpalaStoryPlaybackInfo paidViews] */

undefined8 FUN_107d745cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d745d4; end: 107d745db; -[SCImpalaStoryPlaybackInfo paidReach] */

undefined8 FUN_107d745d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d745dc; end: 107d745e3; -[SCImpalaStoryPlaybackInfo combinedViews] */

undefined8 FUN_107d745dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d745e4; end: 107d745eb; -[SCImpalaStoryPlaybackInfo combinedReach] */

undefined8 FUN_107d745e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d745ec; end: 107d7469f; -[SCImpalaStoryPlaybackInfo .cxx_destruct] */

void FUN_107d745ec(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d746a0; end: 107d746bb; +[SCImpalaStoryPlaybackInfoBuilder impalaStoryPlaybackInfo] */

void FUN_107d746a0(void)

{
  _objc_alloc_init(PTR_PTR_1126c6d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d746bc; end: 107d74b93; +[SCImpalaStoryPlaybackInfoBuilder impalaStoryPlaybackInfoFromExistingImpalaStoryPlaybackInfo:] */

void FUN_107d746bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *puVar34;
  
  puVar1 = PTR_PTR_1126c6d98;
  _objc_retain(param_3);
  func_0x00010bfea280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ccea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b3f40(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c120680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b6840(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c151b00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b7b40(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c25ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ba5e0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c238f00(param_3);
  puVar11 = puVar9;
  func_0x00010c2b8ea0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf06820(param_3);
  puVar12 = puVar11;
  func_0x00010c2a8600(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf6b200(param_3);
  puVar13 = puVar12;
  func_0x00010c2ac200(puVar12,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c14b740(param_3);
  puVar14 = puVar13;
  func_0x00010c2b7780(puVar13,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf014a0(param_3);
  puVar15 = puVar14;
  func_0x00010c2a8180(puVar14,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c1340e0(param_3);
  puVar16 = puVar15;
  func_0x00010c2b7040(puVar15,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c116820(param_3);
  puVar17 = puVar16;
  func_0x00010c2b6240(puVar16,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c2bb060(puVar17,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf93c60();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2ad260(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010bf1fa00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2a9780(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010c22c540();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c2b8680(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c260680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010c2ba920(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c0f2a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010c2b54c0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c0f2a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010c2b54a0(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf41960(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010c2aaa60(puVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010bf41900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar34 = puVar32;
  func_0x00010c2aaa40(puVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar33);
  _objc_release(puVar32);
  _objc_release(uVar31);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar10);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
  return;
}



/* Entry: 107d74b94; end: 107d74c07; -[SCImpalaStoryPlaybackInfoBuilder build] */

void FUN_107d74b94(void)

{
  _objc_alloc(PTR_PTR_1126d5208);
  func_0x00010c02bee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d74c08; end: 107d74c3f; -[SCImpalaStoryPlaybackInfoBuilder withMetricsURL:] */

long FUN_107d74c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74c40; end: 107d74c77; -[SCImpalaStoryPlaybackInfoBuilder withReach:] */

long FUN_107d74c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74c78; end: 107d74caf; -[SCImpalaStoryPlaybackInfoBuilder withScreenshots:] */

long FUN_107d74c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74cb0; end: 107d74ce7; -[SCImpalaStoryPlaybackInfoBuilder withStoryReplies:] */

long FUN_107d74cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74ce8; end: 107d74cef; -[SCImpalaStoryPlaybackInfoBuilder withShowPeekingViewersList:] */

void FUN_107d74ce8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107d74cf0; end: 107d74cf7; -[SCImpalaStoryPlaybackInfoBuilder withAppearWithExpandedViewersList:] */

void FUN_107d74cf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 107d74cf8; end: 107d74cff; -[SCImpalaStoryPlaybackInfoBuilder withDeleteAction:] */

void FUN_107d74cf8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return;
}



/* Entry: 107d74d00; end: 107d74d07; -[SCImpalaStoryPlaybackInfoBuilder withSaveable:] */

void FUN_107d74d00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107d74d08; end: 107d74d0f; -[SCImpalaStoryPlaybackInfoBuilder withAllowSaveEntireStory:] */

void FUN_107d74d08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 107d74d10; end: 107d74d17; -[SCImpalaStoryPlaybackInfoBuilder withReportable:] */

void FUN_107d74d10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 107d74d18; end: 107d74d1f; -[SCImpalaStoryPlaybackInfoBuilder withProfileEnabled:] */

void FUN_107d74d18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
  return;
}



/* Entry: 107d74d20; end: 107d74d57; -[SCImpalaStoryPlaybackInfoBuilder withThumbnailURL:] */

long FUN_107d74d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74d58; end: 107d74d8f; -[SCImpalaStoryPlaybackInfoBuilder withEncryptedThumbnailURL:] */

long FUN_107d74d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74d90; end: 107d74dc7; -[SCImpalaStoryPlaybackInfoBuilder withBoosts:] */

long FUN_107d74d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74dc8; end: 107d74dff; -[SCImpalaStoryPlaybackInfoBuilder withShares:] */

long FUN_107d74dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74e00; end: 107d74e37; -[SCImpalaStoryPlaybackInfoBuilder withSubscribes:] */

long FUN_107d74e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74e38; end: 107d74e6f; -[SCImpalaStoryPlaybackInfoBuilder withPaidViews:] */

long FUN_107d74e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74e70; end: 107d74ea7; -[SCImpalaStoryPlaybackInfoBuilder withPaidReach:] */

long FUN_107d74e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74ea8; end: 107d74edf; -[SCImpalaStoryPlaybackInfoBuilder withCombinedViews:] */

long FUN_107d74ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74ee0; end: 107d74f17; -[SCImpalaStoryPlaybackInfoBuilder withCombinedReach:] */

long FUN_107d74ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d74f18; end: 107d74fcb; -[SCImpalaStoryPlaybackInfoBuilder .cxx_destruct] */

void FUN_107d74f18(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d74fcc; end: 107d7513f;  */

void FUN_107d74fcc(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126ca730);
  puVar2 = puVar1;
  func_0x00010bf4b900();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_opt_class(PTR_PTR_1126ca730);
    puVar2 = puVar1;
    func_0x00010bf09f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
  }
  func_0x00010c1d0640(param_1);
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d75140; end: 107d75423;  */

void FUN_107d75140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126ca730;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010bf06de0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2b53e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126ca730);
  func_0x00010bf06de0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d75424; end: 107d75557; -[SCImpalaOperaLayer initWithPage:] */

undefined1 * FUN_107d75424(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126faf18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    _objc_release(lVar2);
    if ((lVar2 != 0) && ((int)lVar3 != 0)) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),lVar2);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)lVar3;
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)lVar3;
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d75558; end: 107d755a3; +[SCImpalaOperaLayer layerWithPage:] */

void FUN_107d75558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca730;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d755a4; end: 107d755ab; -[SCImpalaOperaLayer type] */

undefined8 FUN_107d755a4(void)

{
  return 0x19;
}



/* Entry: 107d755ac; end: 107d755b7; -[SCImpalaOperaLayer layerViewControllerClass] */

void FUN_107d755ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d7b30);
  return;
}



/* Entry: 107d755b8; end: 107d75687; -[SCImpalaOperaLayer isEqual:] */

long FUN_107d755b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar5 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126ca730;
    _objc_opt_class(PTR_PTR_1126ca730);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar4 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar4);
      uVar3 = param_3;
      func_0x00010c119b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c071ae0(lVar4);
      _objc_release(uVar3);
      _objc_release(lVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107d75688; end: 107d7569f; -[SCImpalaOperaLayer provider] */

void FUN_107d75688(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d756a0; end: 107d756a7; -[SCImpalaOperaLayer enableSwipeToProfileExperiment] */

undefined1 FUN_107d756a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d756a8; end: 107d756af; -[SCImpalaOperaLayer useFullPageLayout] */

undefined1 FUN_107d756a8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d756b0; end: 107d756b7; -[SCImpalaOperaLayer .cxx_destruct] */

void FUN_107d756b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107d756b8; end: 107d756c3; +[SCImpalaOperaLayerViewController announcerIdentifier] */

undefined ** FUN_107d756b8(void)

{
  return &PTR____CFConstantStringClassReference_110ebd118;
}



/* Entry: 107d756c4; end: 107d756d3; -[SCImpalaOperaLayerViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d756c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ea20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107d756d4; end: 107d756e3; -[SCImpalaOperaLayerViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d756d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ea20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107d756e4; end: 107d75803; -[SCImpalaOperaLayerViewController loadView] */

void FUN_107d756e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(uVar4,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdb4e0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107d75804; end: 107d758bb; -[SCImpalaOperaLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d75804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126faf20;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276ea24);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107d758bc; end: 107d759cf; -[SCImpalaOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d758bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126faf20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0d6c60();
    *(bool *)((long)puVar1 + (long)_DAT_11276ea28) = lVar2 == 1;
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ea20);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ea20) = puVar3;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276ea2c) = 1;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be89fa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_6);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d759d0; end: 107d75a53; -[SCImpalaOperaLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d759d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126faf20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_teardown_112678538);
  lVar2 = (long)_DAT_11276ea24;
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 107d75a54; end: 107d75c9f; -[SCImpalaOperaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d75a54(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126faf20;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4);
  lVar6 = (long)_DAT_11276ea24;
  if (*(long *)(param_1 + lVar6) != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    if (param_3 == param_4) {
      _objc_release(param_4);
      _objc_release(param_3);
      goto LAB_107d75c74;
    }
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107d75c74;
    }
  }
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  uVar1 = param_4;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11276ea30;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c29c200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = uVar5;
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar3);
  uVar1 = param_4;
  func_0x00010c119b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ec60();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  if (*(long *)(param_1 + lVar6) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bef7700(param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
  }
  func_0x00010bf77e80(uVar2);
LAB_107d75c74:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d75ca0; end: 107d75cef; -[SCImpalaOperaLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d75ca0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126faf20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  *(undefined1 *)(param_1 + _DAT_11276ea1c) = 1;
  return;
}



/* Entry: 107d75cf0; end: 107d75d3b; -[SCImpalaOperaLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d75cf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126faf20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_11276ea1c) = 0;
  return;
}



/* Entry: 107d75d3c; end: 107d75db3; -[SCImpalaOperaLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d75d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11276ea24;
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar1,PTR_s_pageabilityForRelativePosition_g_11261a338);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c0f2480(uVar2);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107d75db4; end: 107d75dbb; -[SCImpalaOperaLayerViewController isRecyclable] */

undefined8 FUN_107d75db4(void)

{
  return 0;
}



/* Entry: 107d75dbc; end: 107d75e9f; -[SCImpalaOperaLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_107d75dbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  uVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107d75ea0; end: 107d76057; -[SCImpalaOperaLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d75ea0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c9410;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010beeec40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar4 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  if ((uint)*(byte *)(param_1 + (long)_DAT_11276ea34) != (uint)uVar2) {
    *(char *)(param_1 + (long)_DAT_11276ea34) = (char)uVar2;
    uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11276ea20);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(param_1);
    uVar4 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107d76058; end: 107d7608f; -[SCImpalaOperaLayerViewController setPaused:] */

void FUN_107d76058(undefined8 param_1)

{
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d76090; end: 107d761ab; -[SCImpalaOperaLayerViewController setLooping:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d76090(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((*(byte *)(param_1 + _DAT_11276ea34) & 1) == 0) &&
     (*(byte *)(param_1 + _DAT_11276ea38) != param_3)) {
    *(char *)(param_1 + _DAT_11276ea38) = (char)param_3;
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0f0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107d761ac; end: 107d761af; -[SCImpalaOperaLayerViewController operaPage] */

void FUN_107d761ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_page_112619d10);
  return;
}



/* Entry: 107d761b0; end: 107d761bf; -[SCImpalaOperaLayerViewController isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d761b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ea1c);
}



/* Entry: 107d761c0; end: 107d7624b; -[SCImpalaOperaLayerViewController swipeActionDisabledWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_107d761c0(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11276ea2c) != '\x01') {
    return '\x01';
  }
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf92020();
  _objc_release(lVar2);
  cVar1 = *(char *)(param_1 + _DAT_11276ea28);
  if ((int)lVar3 != 0) {
    if (cVar1 == '\0') {
      cVar1 = (param_3 & 0xfffffffffffffffd) == 1;
    }
    else {
      cVar1 = (param_3 & 0xfffffffffffffffd) == 0;
    }
  }
  return cVar1;
}



/* Entry: 107d7624c; end: 107d762e3; -[SCImpalaOperaLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7624c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_1126a5368;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276ea24);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010beeddc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107d762e4; end: 107d7642b; -[SCImpalaOperaLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d762e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0ea8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b2ce8;
  func_0x00010c288500(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar3);
  _objc_release(param_3);
  if ((int)uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0720c0(param_4,param_2,lVar2);
    _objc_release(puVar3);
    if ((int)uVar4 == 0) goto LAB_107d76400;
    puVar3 = PTR_PTR_1126b2cf0;
    func_0x00010bfdd040(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    *(byte *)(param_1 + _DAT_11276ea2c) = (byte)uVar5 ^ 1;
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
LAB_107d76400:
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107d7642c; end: 107d764bf; -[SCImpalaOperaLayerViewController _registeredEventsForOperaSession] */

undefined * FUN_107d7642c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2ce8;
  func_0x00010c288500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c290160();
  _objc_release(puVar1);
  puVar1 = (undefined *)0x3;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 107d764c0; end: 107d76503; -[SCImpalaOperaLayerViewController layerViewContainerOption] */

undefined8 FUN_107d764c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c290160();
  _objc_release(param_1);
  uVar1 = 3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107d76504; end: 107d76523; -[SCImpalaOperaLayerViewController delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d76504(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ea30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d76524; end: 107d76537; -[SCImpalaOperaLayerViewController setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d76524(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ea30,param_3);
  return;
}



/* Entry: 107d76538; end: 107d76583; -[SCImpalaOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d76538(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ea30);
  _objc_storeStrong(param_1 + _DAT_11276ea24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ea20,0);
  return;
}



/* Entry: 107d76584; end: 107d7667b; -[SCImpalaOperaViewControllerWrapper initWithViewController:pauseOperaWhilePresented:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d76584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126faf28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11276ea3c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276ea40) = param_4;
    func_0x00010bef7700(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010bf77e80(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7667c; end: 107d7668b; -[SCImpalaOperaViewControllerWrapper prefersStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7667c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ea3c),PTR_s_prefersStatusBarHidden_11261f658);
  return;
}



/* Entry: 107d7668c; end: 107d7669b; -[SCImpalaOperaViewControllerWrapper preferredStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7668c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ea3c),PTR_s_preferredStatusBarStyle_11261f5d0);
  return;
}



/* Entry: 107d7669c; end: 107d766ab; -[SCImpalaOperaViewControllerWrapper shouldBeSilentlyPresentedAndPauseOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d7669c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ea40);
}



/* Entry: 107d766ac; end: 107d768b3; -[SCImpalaOperaViewControllerWrapper shouldBeginInteractiveDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d766ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  puVar3 = PTR_DAT_1126a5a20;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11276ea3c;
  uVar7 = *(ulong *)(param_1 + lVar9);
  _objc_retain(uVar7);
  uVar2 = uVar7;
  func_0x00010010fab4(uVar7,puVar3);
  uVar5 = uVar7;
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  if (uVar5 == 0) {
    uVar8 = *(ulong *)(param_1 + lVar9);
    _objc_retain(uVar8);
    _objc_opt_class(puVar3);
    uVar7 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar2 = uVar8;
    if ((uVar7 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar8);
    uVar8 = uVar2;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (uVar7 != 0) {
      uVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(uVar8);
        }
        puVar3 = PTR_DAT_1126a5a20;
        lVar10 = *(long *)(uVar11 * 8);
        _objc_retain(lVar10);
        lVar4 = lVar10;
        func_0x00010010fab4(lVar10,puVar3);
        lVar1 = lVar10;
        if ((int)lVar4 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar10);
        if ((lVar1 != 0) && (lVar4 = lVar10, func_0x00010c22e340(), (int)lVar4 == 0)) {
          _objc_release(lVar10);
          uVar7 = 0;
          goto LAB_107d7685c;
        }
        _objc_release(lVar1);
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
      uVar7 = uVar8;
      func_0x00010bf52a60();
    }
    uVar7 = 1;
LAB_107d7685c:
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c22e340(uVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  puVar3 = PTR_DAT_1126a5038;
  uVar7 = *(ulong *)(uVar5 + (long)_DAT_11276ea3c);
  _objc_retain(uVar7);
  uVar2 = uVar7;
  func_0x00010010fab4(uVar7,puVar3);
  uVar5 = uVar7;
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar7);
  uVar2 = uVar5;
  _objc_opt_respondsToSelector(uVar5,PTR_s_defaultProjectNameV2_1125b8198);
  uVar7 = 0;
  if ((uVar2 & 1) != 0) {
    uVar7 = uVar5;
    func_0x00010bf69fc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return uVar7;
}



/* Entry: 107d768b4; end: 107d76943; -[SCImpalaOperaViewControllerWrapper defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d768b4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_11276ea3c);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV2_1125b8198);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010bf69fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d76944; end: 107d76a37; -[SCImpalaOperaViewControllerWrapper pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d76944(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  lVar6 = (long)_DAT_11276ea3c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 == 0) {
    uVar4 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar4);
  }
  else {
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a4e58);
  uVar5 = uVar4;
  if ((int)uVar3 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c0f2220(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107d76a38; end: 107d76a4b; -[SCImpalaOperaViewControllerWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d76a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ea3c,0);
  return;
}



/* Entry: 107d76a4c; end: 107d76bd3; -[SCImpalaInteractionControllerContext initWithTransitionContext:mode:callAppearanceMethods:] */

undefined1 *
FUN_107d76a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126faf30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_107d76bb4;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)((long)puVar1 + 8);
  *(undefined8 *)((long)puVar1 + 8) = param_3;
  _objc_release(uVar2);
  *(long *)((long)puVar1 + 0x10) = param_4;
  *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  puVar5 = (undefined1 *)puVar1;
  if (param_4 == 1) {
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfbb120();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    if (*(char *)((long)puVar1 + 0x18) == '\x01') {
      func_0x00010c2724c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
LAB_107d76b80:
      func_0x00010bf17b00();
      _objc_release(puVar5);
    }
  }
  else if (param_4 == 0) {
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c2724c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    if (*(char *)((long)puVar1 + 0x18) == '\x01') {
      func_0x00010bfbb120(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107d76b80;
    }
  }
  uVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
LAB_107d76bb4:
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d76bd4; end: 107d76c53; -[SCImpalaInteractionControllerContext finish] */

void FUN_107d76bd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 8),param_2,1);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_1;
    if (*(long *)(param_1 + 0x10) == 1) {
      func_0x00010c2724c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_107d76c40;
      func_0x00010bfbb120(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf941a0();
    _objc_release(lVar1);
  }
LAB_107d76c40:
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d76c54; end: 107d76d23; -[SCImpalaInteractionControllerContext cancel] */

void FUN_107d76c54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 8),param_2,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = param_1;
    if (*(long *)(param_1 + 0x10) == 1) {
      lVar1 = param_1;
      func_0x00010c2724c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b00();
      _objc_release(lVar1);
      func_0x00010c2724c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_107d76d10;
      lVar1 = param_1;
      func_0x00010bfbb120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b00();
      _objc_release(lVar1);
      func_0x00010bfbb120(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf941a0();
    _objc_release(lVar2);
  }
LAB_107d76d10:
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107d76d24; end: 107d76d2b; -[SCImpalaInteractionControllerContext containerView] */

void FUN_107d76d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_containerView_1125b0650)
  ;
  return;
}



/* Entry: 107d76d2c; end: 107d76d3f; -[SCImpalaInteractionControllerContext fromViewController] */

void FUN_107d76d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_viewControllerForKey__112684ab0,
             *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  return;
}



/* Entry: 107d76d40; end: 107d76d53; -[SCImpalaInteractionControllerContext toViewController] */

void FUN_107d76d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_viewControllerForKey__112684ab0,
             *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  return;
}


