/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aee1f3c; end: 10aee207f; -[SCMixerFeedRenderStrategy isEqual:] */

bool FUN_10aee1f3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
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
      if ((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
             (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
        dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar3 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38)) < dVar4;
          goto LAB_10aee202c;
        }
      }
      bVar3 = false;
    }
  }
LAB_10aee202c:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10aee2080; end: 10aee2087; -[SCMixerFeedRenderStrategy spans] */

undefined8 FUN_10aee2080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee2088; end: 10aee208f; -[SCMixerFeedRenderStrategy orientation] */

undefined8 FUN_10aee2088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee2090; end: 10aee2097; -[SCMixerFeedRenderStrategy contentType] */

undefined8 FUN_10aee2090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee2098; end: 10aee209f; -[SCMixerFeedRenderStrategy itemsSpacingMultiplier] */

undefined8 FUN_10aee2098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aee20a0; end: 10aee20a7; -[SCMixerFeedRenderStrategy useItemsCardBackground] */

undefined1 FUN_10aee20a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee20a8; end: 10aee20af; -[SCMixerFeedRenderStrategy useItemsDivider] */

undefined1 FUN_10aee20a8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aee20b0; end: 10aee20b7; -[SCMixerFeedRenderStrategy lensTileLayout] */

undefined8 FUN_10aee20b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aee20b8; end: 10aee20bf; -[SCMixerFeedRenderStrategy lensTileAspectRatio] */

undefined8 FUN_10aee20b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aee20c0; end: 10aee21bf; -[SCMixerNamespaceGroup initWithGroupId:namespaceIds:lastUpdateTimestamp:locale:feedsCacheTtlMillis:exclusiveLensSubscriptionPresent:] */

undefined1 *
FUN_10aee20c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112701a40;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee21c0; end: 10aee21e3; -[SCMixerNamespaceGroup copyWithZone:] */

undefined8 FUN_10aee21c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee21e4; end: 10aee2293; -[SCMixerNamespaceGroup hash] */

undefined8 * FUN_10aee21e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_58;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10aee2380:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aee238c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((puVar4[2] == param_3[2] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))))) {
      dVar10 = ABS((double)puVar4[6] - (double)param_3[6]);
      dVar9 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[5];
        if (puVar8 != (undefined8 *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_10aee238c;
        }
        goto LAB_10aee2380;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10aee238c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10aee2294; end: 10aee23a7; -[SCMixerNamespaceGroup isEqual:] */

long FUN_10aee2294(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee2380:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee238c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10aee238c;
        }
        goto LAB_10aee2380;
      }
    }
    lVar4 = 0;
  }
LAB_10aee238c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aee23a8; end: 10aee23af; -[SCMixerNamespaceGroup groupId] */

undefined8 FUN_10aee23a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee23b0; end: 10aee23b7; -[SCMixerNamespaceGroup namespaceIds] */

undefined8 FUN_10aee23b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee23b8; end: 10aee23bf; -[SCMixerNamespaceGroup lastUpdateTimestamp] */

undefined8 FUN_10aee23b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee23c0; end: 10aee23c7; -[SCMixerNamespaceGroup locale] */

undefined8 FUN_10aee23c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aee23c8; end: 10aee23cf; -[SCMixerNamespaceGroup feedsCacheTtlMillis] */

undefined8 FUN_10aee23c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aee23d0; end: 10aee23d7; -[SCMixerNamespaceGroup exclusiveLensSubscriptionPresent] */

undefined1 FUN_10aee23d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee23d8; end: 10aee2413; -[SCMixerNamespaceGroup .cxx_destruct] */

void FUN_10aee23d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aee2414; end: 10aee241f; -[SCLensInteractionHistoryServices .cxx_destruct] */

void FUN_10aee2414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee2420; end: 10aee242b; -[SCLensCarouselStudySettingsServices .cxx_destruct] */

void FUN_10aee2420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee242c; end: 10aee24d7; -[SCLensCameraGesturesConfig initWithIsEnabled:detectionDelay:allowedXOffset:isMainCameraPassiveFixEnabled:isMainCameraActiveFixEnabled:isReplyCameraPassiveFixEnabled:isReplyCameraActiveFixEnabled:isMainCameraOriginalLensScrollEnabled:isMainCameraNotOriginalLensScrollEnabled:isReplyCameraOriginalLensScrollEnabled:isReplyCameraNotOriginalLensScrollEnabled:] */

void FUN_10aee242c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112701a58;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0xf) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 0x10) = param_11._2_1_;
  }
  return;
}



/* Entry: 10aee24d8; end: 10aee24fb; -[SCLensCameraGesturesConfig copyWithZone:] */

undefined8 FUN_10aee24d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee24fc; end: 10aee25eb; -[SCLensCameraGesturesConfig hash] */

ulong * FUN_10aee24fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  double dVar9;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_70;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_68 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_60 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = *(undefined4 *)(param_1 + 9);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar4 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar4 = CONCAT26((short)(uVar4 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar4)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar4 >> 0x30);
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar4 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar4 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0xd);
  uVar4 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar4);
  uVar8 = CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar4 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar4 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar4 >> 0x30);
  uStack_38 = (ulong)uVar1 & 0xff;
  uStack_30 = uVar4 >> 0x10 & 0xff;
  uStack_28 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar4 >> 0x20)) & 0xffffffff;
  uStack_20 = (ulong)uVar6;
  func_0x000107c3191c(&uStack_70,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if (((((ulong)puVar3 & 1) != 0) &&
          ((((*(char *)((long)puVar2 + 8) == param_3[8] &&
             (*(char *)((long)puVar2 + 9) == param_3[9])) &&
            (*(char *)((long)puVar2 + 10) == param_3[10])) &&
           ((*(char *)((long)puVar2 + 0xb) == param_3[0xb] &&
            (*(char *)((long)puVar2 + 0xc) == param_3[0xc])))))) &&
         ((*(char *)((long)puVar2 + 0xd) == param_3[0xd] &&
          (((*(char *)((long)puVar2 + 0xe) == param_3[0xe] &&
            (*(char *)((long)puVar2 + 0xf) == param_3[0xf])) &&
           (*(char *)((long)puVar2 + 0x10) == param_3[0x10])))))) {
        dVar9 = ABS(*(double *)((long)puVar2 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS(*(double *)((long)puVar2 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          dVar9 = ABS(*(double *)((long)puVar2 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          if (dVar9 <= 2.2250738585072014e-308) {
            dVar9 = 2.2250738585072014e-308;
          }
          puVar5 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar2 + 0x20) - *(double *)(param_3 + 0x20)) <
                          dVar9);
          goto LAB_10aee270c;
        }
      }
      puVar5 = (undefined1 *)0x0;
    }
  }
LAB_10aee270c:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10aee25ec; end: 10aee275f; -[SCLensCameraGesturesConfig isEqual:] */

bool FUN_10aee25ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
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
      if ((((uVar2 & 1) != 0) &&
          ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
             (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
           ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
            (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
            (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
           (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))) {
        dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar3 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
          goto LAB_10aee270c;
        }
      }
      bVar3 = false;
    }
  }
LAB_10aee270c:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10aee2760; end: 10aee2767; -[SCLensCameraGesturesConfig isEnabled] */

undefined1 FUN_10aee2760(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee2768; end: 10aee276f; -[SCLensCameraGesturesConfig detectionDelay] */

undefined8 FUN_10aee2768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee2770; end: 10aee2777; -[SCLensCameraGesturesConfig allowedXOffset] */

undefined8 FUN_10aee2770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee2778; end: 10aee277f; -[SCLensCameraGesturesConfig isMainCameraPassiveFixEnabled] */

undefined1 FUN_10aee2778(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aee2780; end: 10aee2787; -[SCLensCameraGesturesConfig isMainCameraActiveFixEnabled] */

undefined1 FUN_10aee2780(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10aee2788; end: 10aee278f; -[SCLensCameraGesturesConfig isReplyCameraPassiveFixEnabled] */

undefined1 FUN_10aee2788(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10aee2790; end: 10aee2797; -[SCLensCameraGesturesConfig isReplyCameraActiveFixEnabled] */

undefined1 FUN_10aee2790(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10aee2798; end: 10aee279f; -[SCLensCameraGesturesConfig isMainCameraOriginalLensScrollEnabled] */

undefined1 FUN_10aee2798(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10aee27a0; end: 10aee27a7; -[SCLensCameraGesturesConfig isMainCameraNotOriginalLensScrollEnabled] */

undefined1 FUN_10aee27a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10aee27a8; end: 10aee27af; -[SCLensCameraGesturesConfig isReplyCameraOriginalLensScrollEnabled] */

undefined1 FUN_10aee27a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10aee27b0; end: 10aee27b7; -[SCLensCameraGesturesConfig isReplyCameraNotOriginalLensScrollEnabled] */

undefined1 FUN_10aee27b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10aee27b8; end: 10aee2853; -[SCLensActionBarFeatureConfig initWithEnabled:favoriteButtonEnabled:shareButtonEnabled:viewsButtonEnabled:collectionsModeEnabled:showActionBarWithNoDelayEnabled:deeplinkAutoCopyEnabled:hideInfoButtonAttributionDelay:hideActionBarDelay:] */

void FUN_10aee27b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112701a60;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10;
    *(undefined1 *)((long)puVar1 + 0xe) = param_11;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10aee2854; end: 10aee2877; -[SCLensActionBarFeatureConfig copyWithZone:] */

undefined8 FUN_10aee2854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee2878; end: 10aee2947; -[SCLensActionBarFeatureConfig hash] */

ulong * FUN_10aee2878(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  double dVar9;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar4 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar4);
  uVar8 = CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar4 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar4 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar4 >> 0x30);
  uStack_60 = (ulong)uVar1 & 0xff;
  uStack_58 = uVar4 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar4 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar6;
  uStack_40 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xe);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_60,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((((ulong)puVar3 & 1) != 0) &&
           ((((*(char *)((long)puVar2 + 8) == param_3[8] &&
              (*(char *)((long)puVar2 + 9) == param_3[9])) &&
             (*(char *)((long)puVar2 + 10) == param_3[10])) &&
            ((*(char *)((long)puVar2 + 0xb) == param_3[0xb] &&
             (*(char *)((long)puVar2 + 0xc) == param_3[0xc])))))) &&
          (*(char *)((long)puVar2 + 0xd) == param_3[0xd])) &&
         (*(char *)((long)puVar2 + 0xe) == param_3[0xe])) {
        dVar9 = ABS(*(double *)((long)puVar2 + 0x10) - *(double *)(param_3 + 0x10));
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS(*(double *)((long)puVar2 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16)) {
          dVar9 = ABS(*(double *)((long)puVar2 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar9 <= 2.2250738585072014e-308) {
            dVar9 = 2.2250738585072014e-308;
          }
          puVar5 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar2 + 0x18) - *(double *)(param_3 + 0x18)) <
                          dVar9);
          goto LAB_10aee2a48;
        }
      }
      puVar5 = (undefined1 *)0x0;
    }
  }
LAB_10aee2a48:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10aee2948; end: 10aee2a9b; -[SCLensActionBarFeatureConfig isEqual:] */

bool FUN_10aee2948(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
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
      if (((((uVar2 & 1) != 0) &&
           ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
              (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
             (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
            ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
             (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
          (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
         (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) {
        dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar3 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
          goto LAB_10aee2a48;
        }
      }
      bVar3 = false;
    }
  }
LAB_10aee2a48:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10aee2a9c; end: 10aee2aa3; -[SCLensActionBarFeatureConfig enabled] */

undefined1 FUN_10aee2a9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee2aa4; end: 10aee2aab; -[SCLensActionBarFeatureConfig favoriteButtonEnabled] */

undefined1 FUN_10aee2aa4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aee2aac; end: 10aee2ab3; -[SCLensActionBarFeatureConfig shareButtonEnabled] */

undefined1 FUN_10aee2aac(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10aee2ab4; end: 10aee2abb; -[SCLensActionBarFeatureConfig viewsButtonEnabled] */

undefined1 FUN_10aee2ab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10aee2abc; end: 10aee2ac3; -[SCLensActionBarFeatureConfig collectionsModeEnabled] */

undefined1 FUN_10aee2abc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10aee2ac4; end: 10aee2acb; -[SCLensActionBarFeatureConfig showActionBarWithNoDelayEnabled] */

undefined1 FUN_10aee2ac4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10aee2acc; end: 10aee2ad3; -[SCLensActionBarFeatureConfig deeplinkAutoCopyEnabled] */

undefined1 FUN_10aee2acc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10aee2ad4; end: 10aee2adb; -[SCLensActionBarFeatureConfig hideInfoButtonAttributionDelay] */

undefined8 FUN_10aee2ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee2adc; end: 10aee2ae3; -[SCLensActionBarFeatureConfig hideActionBarDelay] */

undefined8 FUN_10aee2adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee2ae4; end: 10aee2aff; +[SCLensActionBarFeatureConfigBuilder lensActionBarFeatureConfig] */

void FUN_10aee2ae4(void)

{
  _objc_alloc_init(PTR_PTR_1126de8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee2b00; end: 10aee2cdb; +[SCLensActionBarFeatureConfigBuilder lensActionBarFeatureConfigFromExistingLensActionBarFeatureConfig:] */

void FUN_10aee2b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126de8f0;
  _objc_retain(param_4);
  func_0x00010c08fc20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf926c0(param_4);
  puVar3 = puVar1;
  func_0x00010c2ad140(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfa0f40(param_4);
  puVar4 = puVar3;
  func_0x00010c2adaa0(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c22a7e0(param_4);
  puVar5 = puVar4;
  func_0x00010c2b85c0(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c29f7e0(param_4);
  puVar6 = puVar5;
  func_0x00010c2bca40(puVar5,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf40ba0(param_4);
  puVar7 = puVar6;
  func_0x00010c2aa9e0(puVar6,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2358c0(param_4);
  puVar8 = puVar7;
  func_0x00010c2b8da0(puVar7,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf68560(param_4);
  puVar9 = puVar8;
  func_0x00010c2ac0a0(puVar8,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe20c0(param_4);
  puVar10 = puVar9;
  func_0x00010c2af780(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe15e0(param_4);
  _objc_release(param_4);
  puVar11 = puVar10;
  func_0x00010c2af740(param_1,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10aee2cdc; end: 10aee2d33; -[SCLensActionBarFeatureConfigBuilder build] */

void FUN_10aee2cdc(long param_1)

{
  _objc_alloc(PTR_PTR_1126de8f8);
  func_0x00010c00f9e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee2d34; end: 10aee2d3b; -[SCLensActionBarFeatureConfigBuilder withEnabled:] */

void FUN_10aee2d34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10aee2d3c; end: 10aee2d43; -[SCLensActionBarFeatureConfigBuilder withFavoriteButtonEnabled:] */

void FUN_10aee2d3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10aee2d44; end: 10aee2d4b; -[SCLensActionBarFeatureConfigBuilder withShareButtonEnabled:] */

void FUN_10aee2d44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10aee2d4c; end: 10aee2d53; -[SCLensActionBarFeatureConfigBuilder withViewsButtonEnabled:] */

void FUN_10aee2d4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10aee2d54; end: 10aee2d5b; -[SCLensActionBarFeatureConfigBuilder withCollectionsModeEnabled:] */

void FUN_10aee2d54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10aee2d5c; end: 10aee2d63; -[SCLensActionBarFeatureConfigBuilder withShowActionBarWithNoDelayEnabled:] */

void FUN_10aee2d5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10aee2d64; end: 10aee2d6b; -[SCLensActionBarFeatureConfigBuilder withDeeplinkAutoCopyEnabled:] */

void FUN_10aee2d64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 10aee2d6c; end: 10aee2d73; -[SCLensActionBarFeatureConfigBuilder withHideInfoButtonAttributionDelay:] */

void FUN_10aee2d6c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10aee2d74; end: 10aee2d7b; -[SCLensActionBarFeatureConfigBuilder withHideActionBarDelay:] */

void FUN_10aee2d74(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10aee2d7c; end: 10aee2dcb; -[SCLensCrashLoggerConfig initWithIsSwipeIdSamplingEnabled:isReasonSampingEnabled:] */

void FUN_10aee2d7c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10aee2dcc; end: 10aee2def; -[SCLensCrashLoggerConfig copyWithZone:] */

undefined8 FUN_10aee2dcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee2df0; end: 10aee2e4b; -[SCLensCrashLoggerConfig hash] */

ulong * FUN_10aee2df0(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10aee2e4c; end: 10aee2ee3; -[SCLensCrashLoggerConfig isEqual:] */

bool FUN_10aee2e4c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aee2ee4; end: 10aee2eeb; -[SCLensCrashLoggerConfig isSwipeIdSamplingEnabled] */

undefined1 FUN_10aee2ee4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee2eec; end: 10aee2ef3; -[SCLensCrashLoggerConfig isReasonSampingEnabled] */

undefined1 FUN_10aee2eec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aee2ef4; end: 10aee2f23; -[SCLensPickerServices setLensPicker:] */

void FUN_10aee2ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aee2f24; end: 10aee2f2f; -[SCLensPickerServices .cxx_destruct] */

void FUN_10aee2f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee2f30; end: 10aee2fa3; -[UNISCGLensGatorService initWithUnifiedGrpcService:] */

undefined1 * FUN_10aee2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701a78;
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



/* Entry: 10aee2fa4; end: 10aee3087; -[UNISCGLensGatorService fetchMixerResultsWithRequest:callOptionsBuilder:handler:] */

void FUN_10aee2fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126de588;
  _objc_opt_class(PTR_PTR_1126de588);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f2fa78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aee3088; end: 10aee3093; -[UNISCGLensGatorService .cxx_destruct] */

void FUN_10aee3088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee3094; end: 10aee3303;  */

void FUN_10aee3094(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2);
  func_0x00010c1b67e0(puVar1);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar1);
  func_0x00010c198180(puVar1);
  func_0x00010c1b6840(puVar1);
  _objc_release(param_1);
  func_0x00010c1b6780(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aee3304; end: 10aee3427; -[SCBackgroundPrefetchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aee3304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126de900;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11278553c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112785540;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf14340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff65c0(puVar1,param_2,lVar3,lVar5);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112785544);
  *(undefined **)(param_1 + _DAT_112785544) = puVar1;
  _objc_release(uVar8);
  param_1 = param_1 + _DAT_112785548;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10aee3428; end: 10aee34db; -[SCBackgroundPrefetchEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aee3428(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_112785548;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_112701a80;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee34dc; end: 10aee352f; -[SCBackgroundPrefetchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aee34dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112785548);
  _objc_destroyWeak(param_1 + _DAT_11278553c);
  _objc_destroyWeak(param_1 + _DAT_112785540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112785544,0);
  return;
}



/* Entry: 10aee3530; end: 10aee35d3; -[SCBackgroundPrefetchNotificationProcessor initWithBackgroundTaskWrapper:backgroundPrefetchObservable:] */

undefined1 *
FUN_10aee3530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701a88;
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



/* Entry: 10aee35d4; end: 10aee35db; -[SCBackgroundPrefetchNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_10aee35d4(void)

{
  return 0;
}



/* Entry: 10aee35dc; end: 10aee372b; -[SCBackgroundPrefetchNotificationProcessor processNotification:] */

void FUN_10aee35dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c26a060(param_3);
  _objc_release(param_3);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  uVar1 = uVar5;
  func_0x00010bf17d00(uVar5,param_2,&PTR____CFConstantStringClassReference_110f2fa98);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10aee375c;
  puStack_58 = &UNK_1108c9578;
  uStack_50 = uVar5;
  uStack_48 = uVar1;
  _objc_retain(uVar5);
  _objc_retainBlock(&puStack_70);
  puVar3 = PTR_PTR_1126c0890;
  _objc_alloc(PTR_PTR_1126c0890);
  func_0x00010c050c20();
  puVar4 = PTR_PTR_1126b6b48;
  func_0x00010c26a940(PTR_PTR_1126b6b48,param_2,puVar3,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_release(uVar5);
  _objc_release(uVar5);
  return;
}



/* Entry: 10aee372c; end: 10aee375b; -[SCBackgroundPrefetchNotificationProcessor .cxx_destruct] */

void FUN_10aee372c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee375c; end: 10aee3767;  */

void FUN_10aee375c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endBackgroundTask__1125c2a40,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10aee3768; end: 10aee37ef; -[SCNGrpcServerStreamingEventHandlerImpl initWithHandler:responseClass:] */

undefined1 *
FUN_10aee3768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701a98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee37f0; end: 10aee3967; -[SCNGrpcServerStreamingEventHandlerImpl onEvent:response:status:] */

void FUN_10aee37f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0f40e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    _objc_retain(0);
  }
  else {
    func_0x00010c252ee0(param_5);
    lVar1 = param_5;
    func_0x00010bf98fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,uVar5,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10aee3968; end: 10aee396b; -[SCNGrpcServerStreamingEventHandlerImpl onRetry:] */

void FUN_10aee3968(void)

{
  return;
}



/* Entry: 10aee396c; end: 10aee3977; -[SCNGrpcServerStreamingEventHandlerImpl .cxx_destruct] */

void FUN_10aee396c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee3978; end: 10aee39eb; -[SCNGrpcProtoMsgStreamSendHandler initWithHandler:] */

undefined1 * FUN_10aee3978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701aa0;
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



/* Entry: 10aee39ec; end: 10aee3a4f; -[SCNGrpcProtoMsgStreamSendHandler send:callback:] */

void FUN_10aee39ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b400(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aee3a50; end: 10aee3a57; -[SCNGrpcProtoMsgStreamSendHandler closeStream] */

void FUN_10aee3a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_closeStream_1125ad128);
  return;
}



/* Entry: 10aee3a58; end: 10aee3a63; -[SCNGrpcProtoMsgStreamSendHandler .cxx_destruct] */

void FUN_10aee3a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee3a64; end: 10aee3a9b; -[SCNGrpcCallOptionsBuilder setClientSwitchboardConfig:] */

long FUN_10aee3a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aee3a9c; end: 10aee3ad3; -[SCNGrpcCallOptionsBuilder setAttestation:] */

long FUN_10aee3a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aee3ad4; end: 10aee3b0b; -[SCNGrpcCallOptionsBuilder setConsistentTrackingId:] */

long FUN_10aee3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aee3b0c; end: 10aee3d2b; +[SCNGrpcCallOptionsBuilder toBuilder:] */

void FUN_10aee3b0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bf24820(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c142440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c142440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067ec0();
    func_0x00010c1eeba0(param_1,param_2,(long)(int)lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010befd000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010befd000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf3d540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf3d540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d160(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c137440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c137440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    func_0x00010c16c6a0(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf0dc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf0dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b5a0(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf49160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf49160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181100(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aee3d2c; end: 10aee3d63; -[SCNGrpcParamsBuilder setUserAgentPrefix:] */

long FUN_10aee3d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aee3d64; end: 10aee3d6b; -[SCNGrpcParamsBuilder setShouldUseRetryFallback:] */

void FUN_10aee3d64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10aee3d6c; end: 10aee3e1f; -[SCNGrpcParamsBuilder setMaxInboundMessageSize:] */

long FUN_10aee3d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aee3e20; end: 10aee3e2b;  */

bool FUN_10aee3e20(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aee3e2c; end: 10aee3ea7;  */

undefined * FUN_10aee3e2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edc58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2faf8,
                        &UNK_10e534640,&UNK_10e534664,2,FUN_10aee3ea8,0);
    do {
      if (puRam00000001137edc58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edc58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edc58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edc58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edc58;
}



/* Entry: 10aee3ea8; end: 10aee3eb3;  */

bool FUN_10aee3ea8(uint param_1)

{
  return param_1 < 2;
}


