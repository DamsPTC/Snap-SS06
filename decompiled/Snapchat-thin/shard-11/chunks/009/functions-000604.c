/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bad164; end: 108bad16b; -[SCUnlockableLensProductInteraction productId] */

undefined8 FUN_108bad164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bad16c; end: 108bad173; -[SCUnlockableLensProductInteraction productOptionString] */

undefined8 FUN_108bad16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bad174; end: 108bad17b; -[SCUnlockableLensProductInteraction swipedOverCount] */

undefined4 FUN_108bad174(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108bad17c; end: 108bad183; -[SCUnlockableLensProductInteraction visibleAtLensExit] */

undefined1 FUN_108bad17c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bad184; end: 108bad18b; -[SCUnlockableLensProductInteraction visibleAtLastUpdate] */

undefined1 FUN_108bad184(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bad18c; end: 108bad193; -[SCUnlockableLensProductInteraction visibleAtSessionEnd] */

undefined1 FUN_108bad18c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108bad194; end: 108bad19b; -[SCUnlockableLensProductInteraction productTapped] */

undefined1 FUN_108bad194(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108bad19c; end: 108bad1a3; -[SCUnlockableLensProductInteraction firstSelectionTimestamp] */

undefined8 FUN_108bad19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bad1a4; end: 108bad1ab; -[SCUnlockableLensProductInteraction totalSelectionTime] */

undefined8 FUN_108bad1a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bad1ac; end: 108bad1db; -[SCUnlockableLensProductInteraction .cxx_destruct] */

void FUN_108bad1ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108bad1dc; end: 108bad1f7; +[SCUnlockableLensProductInteractionBuilder unlockableLensProductInteraction] */

void FUN_108bad1dc(void)

{
  _objc_alloc_init(PTR_PTR_1126d0f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bad1f8; end: 108bad43b; +[SCUnlockableLensProductInteractionBuilder unlockableLensProductInteractionFromExistingUnlockableLensProductInteraction:] */

void FUN_108bad1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126d0f20;
  _objc_retain(param_4);
  func_0x00010c281100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c104260(param_4);
  puVar3 = puVar1;
  func_0x00010c2b5840(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c115e60(param_4);
  puVar4 = puVar3;
  func_0x00010c2b6120(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c1160a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b61c0(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c2654c0(param_4);
  puVar7 = puVar5;
  func_0x00010c2babc0(puVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c29fc00(param_4);
  puVar8 = puVar7;
  func_0x00010c2bcae0(puVar7,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c29fbe0(param_4);
  puVar9 = puVar8;
  func_0x00010c2bcac0(puVar8,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c29fc20(param_4);
  puVar10 = puVar9;
  func_0x00010c2bcb00(puVar9,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c1162c0(param_4);
  puVar11 = puVar10;
  func_0x00010c2b61e0(puVar10,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bfb1be0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2ae320(puVar11,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276b00(param_4);
  _objc_release(param_4);
  puVar13 = puVar12;
  func_0x00010c2bb940(param_1,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108bad43c; end: 108bad497; -[SCUnlockableLensProductInteractionBuilder build] */

void FUN_108bad43c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d0f30);
  func_0x00010c037c60(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bad498; end: 108bad49f; -[SCUnlockableLensProductInteractionBuilder withPosition:] */

void FUN_108bad498(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108bad4a0; end: 108bad4a7; -[SCUnlockableLensProductInteractionBuilder withProductId:] */

void FUN_108bad4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108bad4a8; end: 108bad4df; -[SCUnlockableLensProductInteractionBuilder withProductOptionString:] */

long FUN_108bad4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bad4e0; end: 108bad4e7; -[SCUnlockableLensProductInteractionBuilder withSwipedOverCount:] */

void FUN_108bad4e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108bad4e8; end: 108bad4ef; -[SCUnlockableLensProductInteractionBuilder withVisibleAtLensExit:] */

void FUN_108bad4e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 108bad4f0; end: 108bad4f7; -[SCUnlockableLensProductInteractionBuilder withVisibleAtLastUpdate:] */

void FUN_108bad4f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 108bad4f8; end: 108bad4ff; -[SCUnlockableLensProductInteractionBuilder withVisibleAtSessionEnd:] */

void FUN_108bad4f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26) = param_3;
  return;
}



/* Entry: 108bad500; end: 108bad507; -[SCUnlockableLensProductInteractionBuilder withProductTapped:] */

void FUN_108bad500(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x27) = param_3;
  return;
}



/* Entry: 108bad508; end: 108bad53f; -[SCUnlockableLensProductInteractionBuilder withFirstSelectionTimestamp:] */

long FUN_108bad508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bad540; end: 108bad547; -[SCUnlockableLensProductInteractionBuilder withTotalSelectionTime:] */

void FUN_108bad540(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108bad548; end: 108bad577; -[SCUnlockableLensProductInteractionBuilder .cxx_destruct] */

void FUN_108bad548(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108bad578; end: 108bad723; -[SCUnlockableAttachmentInteraction initWithViewTimeSec:mediaDurationSec:openTimestamp:fullyPresentedTimestamp:dismissTimestamp:isRedirectToStore:isRedirectToWebview:isPixelCookieAvailable:isMultiURL:loadingAnalytics:webViewAdTrackInfo:deepLinkAdTrackInfo:] */

undefined8 *
FUN_108bad578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_78 = PTR_PTR_1126fd6c0;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    puVar1[3] = param_2;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_10;
    *(undefined1 *)((long)puVar1 + 0xb) = param_11;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 108bad724; end: 108bad747; -[SCUnlockableAttachmentInteraction copyWithZone:] */

undefined8 FUN_108bad724(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bad748; end: 108bad857; -[SCUnlockableAttachmentInteraction hash] */

ulong * FUN_108bad748(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar11 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar7 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar4;
  func_0x00010bfde980();
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_60 = (ulong)uVar1 & 0xff;
  uStack_58 = uVar7 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar9;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar5 = &uStack_88;
  uStack_30 = uVar4;
  func_0x000107c3191c(puVar5,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_108bad9e0:
    puVar8 = (ulong *)0x1;
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108bad9ec;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar6 & 1) != 0) &&
       (((((char)puVar5[1] == (char)param_3[1] &&
          (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))) &&
        (*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb))))) {
      dVar13 = ABS((double)puVar5[2] - (double)param_3[2]);
      dVar12 = ABS((double)puVar5[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar13) && (bVar2 = false, !NAN(dVar13) && !NAN(dVar12))) {
        bVar2 = dVar13 < dVar12;
      }
      if (bVar2) {
        dVar13 = ABS((double)puVar5[3] - (double)param_3[3]);
        dVar12 = ABS((double)puVar5[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar13) && (bVar2 = false, !NAN(dVar13) && !NAN(dVar12))) {
          bVar2 = dVar13 < dVar12;
        }
        if ((((bVar2) &&
             ((uVar7 = puVar5[4], uVar7 == param_3[4] || (func_0x00010c071ae0(), (int)uVar7 != 0))))
            && ((uVar7 = puVar5[5], uVar7 == param_3[5] || (func_0x00010c071ae0(), (int)uVar7 != 0))
               )) && ((((uVar7 = puVar5[6], uVar7 == param_3[6] ||
                        (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
                       ((uVar7 = puVar5[7], uVar7 == param_3[7] ||
                        (func_0x00010c071ae0(), (int)uVar7 != 0)))) &&
                      ((uVar7 = puVar5[8], uVar7 == param_3[8] ||
                       (func_0x00010c071ae0(), (int)uVar7 != 0)))))) {
          puVar8 = (ulong *)puVar5[9];
          if (puVar8 != (ulong *)param_3[9]) {
            func_0x00010c071ae0();
            goto LAB_108bad9ec;
          }
          goto LAB_108bad9e0;
        }
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_108bad9ec:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 108bad858; end: 108bada07; -[SCUnlockableAttachmentInteraction isEqual:] */

long FUN_108bad858(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bad9e0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bad9ec;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
          lVar4 = *(long *)(param_1 + 0x48);
          if (lVar4 != *(long *)(param_3 + 0x48)) {
            func_0x00010c071ae0();
            goto LAB_108bad9ec;
          }
          goto LAB_108bad9e0;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108bad9ec:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108bada08; end: 108bada0f; -[SCUnlockableAttachmentInteraction viewTimeSec] */

undefined8 FUN_108bada08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bada10; end: 108bada17; -[SCUnlockableAttachmentInteraction mediaDurationSec] */

undefined8 FUN_108bada10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bada18; end: 108bada1f; -[SCUnlockableAttachmentInteraction openTimestamp] */

undefined8 FUN_108bada18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bada20; end: 108bada27; -[SCUnlockableAttachmentInteraction fullyPresentedTimestamp] */

undefined8 FUN_108bada20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bada28; end: 108bada2f; -[SCUnlockableAttachmentInteraction dismissTimestamp] */

undefined8 FUN_108bada28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bada30; end: 108bada37; -[SCUnlockableAttachmentInteraction isRedirectToStore] */

undefined1 FUN_108bada30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bada38; end: 108bada3f; -[SCUnlockableAttachmentInteraction isRedirectToWebview] */

undefined1 FUN_108bada38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bada40; end: 108bada47; -[SCUnlockableAttachmentInteraction isPixelCookieAvailable] */

undefined1 FUN_108bada40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108bada48; end: 108bada4f; -[SCUnlockableAttachmentInteraction isMultiURL] */

undefined1 FUN_108bada48(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108bada50; end: 108bada57; -[SCUnlockableAttachmentInteraction loadingAnalytics] */

undefined8 FUN_108bada50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108bada58; end: 108bada5f; -[SCUnlockableAttachmentInteraction webViewAdTrackInfo] */

undefined8 FUN_108bada58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108bada60; end: 108bada67; -[SCUnlockableAttachmentInteraction deepLinkAdTrackInfo] */

undefined8 FUN_108bada60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108bada68; end: 108badac7; -[SCUnlockableAttachmentInteraction .cxx_destruct] */

void FUN_108bada68(long param_1)

{
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



/* Entry: 108badac8; end: 108badae3; +[SCUnlockableAttachmentInteractionBuilder unlockableAttachmentInteraction] */

void FUN_108badac8(void)

{
  _objc_alloc_init(PTR_PTR_1126c7d90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108badae4; end: 108baddbf; +[SCUnlockableAttachmentInteractionBuilder unlockableAttachmentInteractionFromExistingUnlockableAttachmentInteraction:] */

void FUN_108badae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  
  puVar1 = PTR_PTR_1126c7d90;
  _objc_retain(param_3);
  func_0x00010c280ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e500(param_3);
  puVar2 = puVar1;
  func_0x00010c2bc980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4be0(param_3);
  puVar3 = puVar2;
  func_0x00010c2b37a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e9a40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b4e20(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfbbf00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ae9e0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf84720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ac740(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c07c060(param_3);
  puVar11 = puVar9;
  func_0x00010c2b12e0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c07c080(param_3);
  puVar12 = puVar11;
  func_0x00010c2b1300(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c07a180(param_3);
  puVar13 = puVar12;
  func_0x00010c2b1160(puVar12,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c078180(param_3);
  puVar14 = puVar13;
  func_0x00010c2b0f20(puVar13,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c09cb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2b2f80(puVar14,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c2a3d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2bccc0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf67c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar19 = puVar17;
  func_0x00010c2abe80(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar10);
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
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 108baddc0; end: 108bade23; -[SCUnlockableAttachmentInteractionBuilder build] */

void FUN_108baddc0(long param_1)

{
  _objc_alloc(PTR_PTR_1126daf90);
  func_0x00010c062140(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bade24; end: 108bade2b; -[SCUnlockableAttachmentInteractionBuilder withViewTimeSec:] */

void FUN_108bade24(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 108bade2c; end: 108bade33; -[SCUnlockableAttachmentInteractionBuilder withMediaDurationSec:] */

void FUN_108bade2c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108bade34; end: 108bade6b; -[SCUnlockableAttachmentInteractionBuilder withOpenTimestamp:] */

long FUN_108bade34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bade6c; end: 108badea3; -[SCUnlockableAttachmentInteractionBuilder withFullyPresentedTimestamp:] */

long FUN_108bade6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108badea4; end: 108badedb; -[SCUnlockableAttachmentInteractionBuilder withDismissTimestamp:] */

long FUN_108badea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108badedc; end: 108badee3; -[SCUnlockableAttachmentInteractionBuilder withIsRedirectToStore:] */

void FUN_108badedc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108badee4; end: 108badeeb; -[SCUnlockableAttachmentInteractionBuilder withIsRedirectToWebview:] */

void FUN_108badee4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 108badeec; end: 108badef3; -[SCUnlockableAttachmentInteractionBuilder withIsPixelCookieAvailable:] */

void FUN_108badeec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 108badef4; end: 108badefb; -[SCUnlockableAttachmentInteractionBuilder withIsMultiURL:] */

void FUN_108badef4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
  return;
}



/* Entry: 108badefc; end: 108badf33; -[SCUnlockableAttachmentInteractionBuilder withLoadingAnalytics:] */

long FUN_108badefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108badf34; end: 108badf6b; -[SCUnlockableAttachmentInteractionBuilder withWebViewAdTrackInfo:] */

long FUN_108badf34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108badf6c; end: 108badfa3; -[SCUnlockableAttachmentInteractionBuilder withDeepLinkAdTrackInfo:] */

long FUN_108badf6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108badfa4; end: 108bae003; -[SCUnlockableAttachmentInteractionBuilder .cxx_destruct] */

void FUN_108badfa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108bae004; end: 108bae153; -[SCUnlockablesGTQRequest initWithCoder:] */

undefined1 * FUN_108bae004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd6c8;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bae154; end: 108bae2bf; -[SCUnlockablesGTQRequest initWithReferenceId:location:checksumMap:userInfo:syncInfo:requestInfo:] */

undefined1 *
FUN_108bae154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126fd6c8;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bae2c0; end: 108bae2e3; -[SCUnlockablesGTQRequest copyWithZone:] */

undefined8 FUN_108bae2c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bae2e4; end: 108bae393; -[SCUnlockablesGTQRequest encodeWithCoder:] */

void FUN_108bae2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeac38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e135f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eeac58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dd99f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110eeac78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ead5f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bae394; end: 108bae437; -[SCUnlockablesGTQRequest hash] */

undefined8 * FUN_108bae394(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108bae518:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bae524;
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
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_108bae524;
                }
                goto LAB_108bae518;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108bae524:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108bae438; end: 108bae53f; -[SCUnlockablesGTQRequest isEqual:] */

long FUN_108bae438(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bae518:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bae524;
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
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_108bae524;
                }
                goto LAB_108bae518;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bae524:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bae540; end: 108bae547; -[SCUnlockablesGTQRequest referenceId] */

undefined8 FUN_108bae540(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bae548; end: 108bae54f; -[SCUnlockablesGTQRequest location] */

undefined8 FUN_108bae548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bae550; end: 108bae557; -[SCUnlockablesGTQRequest checksumMap] */

undefined8 FUN_108bae550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bae558; end: 108bae55f; -[SCUnlockablesGTQRequest userInfo] */

undefined8 FUN_108bae558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bae560; end: 108bae567; -[SCUnlockablesGTQRequest syncInfo] */

undefined8 FUN_108bae560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bae568; end: 108bae56f; -[SCUnlockablesGTQRequest requestInfo] */

undefined8 FUN_108bae568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bae570; end: 108bae5cf; -[SCUnlockablesGTQRequest .cxx_destruct] */

void FUN_108bae570(long param_1)

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



/* Entry: 108bae5d0; end: 108bae66b; -[SCUnlockablesGTQSyncInfo initWithCoder:] */

undefined1 * FUN_108bae5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd6d0;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bae66c; end: 108bae6f3; -[SCUnlockablesGTQSyncInfo initWithLastLowSensitivityResponseTime:includeLowSensitivityPurpose:] */

undefined1 *
FUN_108bae66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fd6d0;
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



/* Entry: 108bae6f4; end: 108bae717; -[SCUnlockablesGTQSyncInfo copyWithZone:] */

undefined8 FUN_108bae6f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bae718; end: 108bae777; -[SCUnlockablesGTQSyncInfo encodeWithCoder:] */

void FUN_108bae718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeac98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110eeacb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bae778; end: 108bae7e3; -[SCUnlockablesGTQSyncInfo hash] */

undefined8 * FUN_108bae778(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bae868;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108bae868;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108bae868;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108bae868:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108bae7e4; end: 108bae883; -[SCUnlockablesGTQSyncInfo isEqual:] */

long FUN_108bae7e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bae868;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108bae868;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108bae868;
    }
  }
  lVar3 = 1;
LAB_108bae868:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bae884; end: 108bae88b; -[SCUnlockablesGTQSyncInfo lastLowSensitivityResponseTime] */

undefined8 FUN_108bae884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bae88c; end: 108bae893; -[SCUnlockablesGTQSyncInfo includeLowSensitivityPurpose] */

undefined1 FUN_108bae88c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bae894; end: 108bae89f; -[SCUnlockablesGTQSyncInfo .cxx_destruct] */

void FUN_108bae894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bae8a0; end: 108bae963; -[SCUnlockablesGTQUserInfo initWithCoder:] */

undefined1 * FUN_108bae8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd6d8;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bae964; end: 108baea17; -[SCUnlockablesGTQUserInfo initWithExperiments:snapScore:snapadsId:] */

undefined1 *
FUN_108bae964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd6d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108baea18; end: 108baea3b; -[SCUnlockablesGTQUserInfo copyWithZone:] */

undefined8 FUN_108baea18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108baea3c; end: 108baeaaf; -[SCUnlockablesGTQUserInfo encodeWithCoder:] */

void FUN_108baea3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeacd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eeacf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eead18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108baeab0; end: 108baeb27; -[SCUnlockablesGTQUserInfo hash] */

undefined8 * FUN_108baeab0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108baebb8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108baebc4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108baebc4;
        }
        goto LAB_108baebb8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108baebc4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108baeb28; end: 108baebdf; -[SCUnlockablesGTQUserInfo isEqual:] */

long FUN_108baeb28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108baebb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108baebc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108baebc4;
        }
        goto LAB_108baebb8;
      }
    }
    lVar3 = 0;
  }
LAB_108baebc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108baebe0; end: 108baebe7; -[SCUnlockablesGTQUserInfo experiments] */

undefined8 FUN_108baebe0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108baebe8; end: 108baebef; -[SCUnlockablesGTQUserInfo snapScore] */

undefined8 FUN_108baebe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108baebf0; end: 108baebf7; -[SCUnlockablesGTQUserInfo snapadsId] */

undefined8 FUN_108baebf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108baebf8; end: 108baec27; -[SCUnlockablesGTQUserInfo .cxx_destruct] */

void FUN_108baebf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108baec28; end: 108baecd7; -[SCUnlockablesGTQExperiment initWithCoder:] */

undefined1 * FUN_108baec28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd6e0;
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



/* Entry: 108baecd8; end: 108baed83; -[SCUnlockablesGTQExperiment initWithStudyName:experimentSettings:] */

undefined1 *
FUN_108baecd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd6e0;
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



/* Entry: 108baed84; end: 108baeda7; -[SCUnlockablesGTQExperiment copyWithZone:] */

undefined8 FUN_108baed84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108baeda8; end: 108baee07; -[SCUnlockablesGTQExperiment encodeWithCoder:] */

void FUN_108baeda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eead38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eead58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108baee08; end: 108baee7b; -[SCUnlockablesGTQExperiment hash] */

undefined8 * FUN_108baee08(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108baeefc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108baef08;
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
          goto LAB_108baef08;
        }
        goto LAB_108baeefc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108baef08:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108baee7c; end: 108baef23; -[SCUnlockablesGTQExperiment isEqual:] */

long FUN_108baee7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108baeefc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108baef08;
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
          goto LAB_108baef08;
        }
        goto LAB_108baeefc;
      }
    }
    lVar3 = 0;
  }
LAB_108baef08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108baef24; end: 108baef2b; -[SCUnlockablesGTQExperiment studyName] */

undefined8 FUN_108baef24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108baef2c; end: 108baef33; -[SCUnlockablesGTQExperiment experimentSettings] */

undefined8 FUN_108baef2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108baef34; end: 108baef63; -[SCUnlockablesGTQExperiment .cxx_destruct] */

void FUN_108baef34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108baef64; end: 108baf063; -[SCUnlockablesGTQRequestInfo initWithCoder:] */

undefined1 * FUN_108baef64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd6e8;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108baf064; end: 108baf16f; -[SCUnlockablesGTQRequestInfo initWithCountryCodeTwoLetter:screenInfo:timeZoneId:acceptedLanguage:] */

undefined1 *
FUN_108baf064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fd6e8;
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


