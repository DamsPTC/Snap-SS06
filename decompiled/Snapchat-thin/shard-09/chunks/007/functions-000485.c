/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10707cb24; end: 10707cb2b; -[SCChatAddressMediaCardViewModel address] */

undefined8 FUN_10707cb24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10707cb2c; end: 10707cb37; -[SCChatAddressMediaCardViewModel .cxx_destruct] */

void FUN_10707cb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707cb38; end: 10707cba3; +[SCChatMediaCardContentViewModel addressWithAddressMediaCardViewModel:] */

void FUN_10707cb38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4470;
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



/* Entry: 10707cba4; end: 10707cc07; +[SCChatMediaCardContentViewModel phoneNumberWithPhoneMediaCardViewModel:] */

void FUN_10707cba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4470;
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



/* Entry: 10707cc08; end: 10707cc73; +[SCChatMediaCardContentViewModel uRLWithUrlMediaCardViewModel:] */

void FUN_10707cc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10707cc74; end: 10707cc97; -[SCChatMediaCardContentViewModel copyWithZone:] */

undefined8 FUN_10707cc74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707cc98; end: 10707cd1b; -[SCChatMediaCardContentViewModel hash] */

void FUN_10707cc98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f87c8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10707cd1c; end: 10707cd5f; -[SCChatMediaCardContentViewModel internalInit] */

void FUN_10707cd1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f87c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10707cd60; end: 10707ce2f; -[SCChatMediaCardContentViewModel isEqual:] */

long FUN_10707cd60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707ce08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707ce14;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10707ce14;
          }
          goto LAB_10707ce08;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10707ce14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707ce30; end: 10707cedb; -[SCChatMediaCardContentViewModel matchPhoneNumber:address:uRL:] */

void FUN_10707ce30(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10707ceb8;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10707ceb8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10707ceb8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10707ceb8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10707cedc; end: 10707cf17; -[SCChatMediaCardContentViewModel .cxx_destruct] */

void FUN_10707cedc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10707cf18; end: 10707d12b; -[SCChatMediaCardViewModel initWithMediaCardContent:senderUserId:attributedTitle:attributedSubtitle:previewUrl:badgeUrl:richPreviewContent:callsToAction:shouldShowDefaultThumbnail:shouldActOnGesture:isGrayScale:height:range:] */

undefined8 *
FUN_10707cf18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126f87d0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
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
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_12._2_1_;
    puVar1[10] = param_1;
    puVar1[0xb] = param_14;
    puVar1[0xc] = param_15;
  }
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



/* Entry: 10707d12c; end: 10707d14f; -[SCChatMediaCardViewModel copyWithZone:] */

undefined8 FUN_10707d12c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707d150; end: 10707d24b; -[SCChatMediaCardViewModel hash] */

undefined8 * FUN_10707d150(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x58);
  puVar4 = &uStack_98;
  uStack_60 = uVar3;
  func_0x000100505190(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10707d3e4:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10707d3f0;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))) {
      dVar10 = ABS((double)puVar4[10] - (double)param_3[10]);
      dVar9 = ABS((double)puVar4[10] + (double)param_3[10]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        puVar8 = (undefined8 *)0x0;
        if ((puVar4[0xb] != param_3[0xb]) || (puVar4[0xc] != param_3[0xc])) goto LAB_10707d3f0;
        lVar6 = puVar4[2];
        if ((((((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))
              ) && ((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))
              && ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            )) && ((lVar6 = puVar4[8], lVar6 == param_3[8] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = (undefined8 *)puVar4[9];
          if (puVar8 != (undefined8 *)param_3[9]) {
            func_0x00010c071ae0();
            goto LAB_10707d3f0;
          }
          goto LAB_10707d3e4;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10707d3f0:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10707d24c; end: 10707d40b; -[SCChatMediaCardViewModel isEqual:] */

long FUN_10707d24c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707d3e4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707d3f0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
      dVar5 = ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(long *)(param_1 + 0x58) != *(long *)(param_3 + 0x58)) ||
           (*(long *)(param_1 + 0x60) != *(long *)(param_3 + 0x60))) goto LAB_10707d3f0;
        lVar4 = *(long *)(param_1 + 0x10);
        if ((((((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
           ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x48);
          if (lVar4 != *(long *)(param_3 + 0x48)) {
            func_0x00010c071ae0();
            goto LAB_10707d3f0;
          }
          goto LAB_10707d3e4;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10707d3f0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10707d40c; end: 10707d413; -[SCChatMediaCardViewModel mediaCardContent] */

undefined8 FUN_10707d40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707d414; end: 10707d41b; -[SCChatMediaCardViewModel senderUserId] */

undefined8 FUN_10707d414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10707d41c; end: 10707d423; -[SCChatMediaCardViewModel attributedTitle] */

undefined8 FUN_10707d41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10707d424; end: 10707d42b; -[SCChatMediaCardViewModel attributedSubtitle] */

undefined8 FUN_10707d424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10707d42c; end: 10707d433; -[SCChatMediaCardViewModel previewUrl] */

undefined8 FUN_10707d42c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10707d434; end: 10707d43b; -[SCChatMediaCardViewModel badgeUrl] */

undefined8 FUN_10707d434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10707d43c; end: 10707d443; -[SCChatMediaCardViewModel richPreviewContent] */

undefined8 FUN_10707d43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10707d444; end: 10707d44b; -[SCChatMediaCardViewModel callsToAction] */

undefined8 FUN_10707d444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10707d44c; end: 10707d453; -[SCChatMediaCardViewModel shouldShowDefaultThumbnail] */

undefined1 FUN_10707d44c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10707d454; end: 10707d45b; -[SCChatMediaCardViewModel shouldActOnGesture] */

undefined1 FUN_10707d454(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10707d45c; end: 10707d463; -[SCChatMediaCardViewModel isGrayScale] */

undefined1 FUN_10707d45c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10707d464; end: 10707d46b; -[SCChatMediaCardViewModel height] */

undefined8 FUN_10707d464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10707d46c; end: 10707d477; -[SCChatMediaCardViewModel range] */

undefined1  [16] FUN_10707d46c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



/* Entry: 10707d478; end: 10707d4ef; -[SCChatMediaCardViewModel .cxx_destruct] */

void FUN_10707d478(long param_1)

{
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



/* Entry: 10707d4f0; end: 10707d57b; -[SCChatMentionViewModel initWithRange:tapAction:] */

undefined1 *
FUN_10707d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f87d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10707d57c; end: 10707d59f; -[SCChatMentionViewModel copyWithZone:] */

undefined8 FUN_10707d57c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707d5a0; end: 10707d603; -[SCChatMentionViewModel hash] */

undefined8 * FUN_10707d5a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10707d694;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    puVar4 = (undefined1 *)0x0;
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) goto LAB_10707d694;
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10707d694;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10707d694:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10707d604; end: 10707d6af; -[SCChatMentionViewModel isEqual:] */

long FUN_10707d604(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707d694;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    lVar3 = 0;
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) goto LAB_10707d694;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10707d694;
    }
  }
  lVar3 = 1;
LAB_10707d694:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707d6b0; end: 10707d6bb; -[SCChatMentionViewModel range] */

undefined1  [16] FUN_10707d6b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10707d6bc; end: 10707d6c3; -[SCChatMentionViewModel tapAction] */

undefined8 FUN_10707d6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10707d6c4; end: 10707d6cf; -[SCChatMentionViewModel .cxx_destruct] */

void FUN_10707d6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707d6d0; end: 10707d747; -[SCChatPhoneMediaCardViewModel initWithPhoneNumber:] */

undefined1 * FUN_10707d6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f87e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10707d748; end: 10707d76b; -[SCChatPhoneMediaCardViewModel copyWithZone:] */

undefined8 FUN_10707d748(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707d76c; end: 10707d773; -[SCChatPhoneMediaCardViewModel hash] */

void FUN_10707d76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10707d774; end: 10707d803; -[SCChatPhoneMediaCardViewModel isEqual:] */

long FUN_10707d774(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707d7e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10707d7e8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10707d7e8;
    }
  }
  lVar3 = 1;
LAB_10707d7e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707d804; end: 10707d80b; -[SCChatPhoneMediaCardViewModel phoneNumber] */

undefined8 FUN_10707d804(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10707d80c; end: 10707d817; -[SCChatPhoneMediaCardViewModel .cxx_destruct] */

void FUN_10707d80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707d818; end: 10707d9b3; -[SCChatTextContentViewModel initWithRawText:attributedText:chatLabelHeight:mediaCardsHeight:mediaCards:mentions:shouldShowChatLabel:fontForChatLabel:reuseIdentifier:contentSize:] */

undefined1 *
FUN_10707d818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126f87e8;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
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
    *(undefined1 *)((long)puVar1 + 8) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10707d9b4; end: 10707d9d7; -[SCChatTextContentViewModel copyWithZone:] */

undefined8 FUN_10707d9b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707d9d8; end: 10707db03; -[SCChatTextContentViewModel hash] */

undefined8 * FUN_10707d9d8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar3;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10707dc80:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10707dc8c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)((long)puVar4 + 8) == param_3[8])) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (bVar1) {
          puVar8 = (undefined1 *)0x0;
          if ((*(double *)((long)puVar4 + 0x50) != *(double *)(param_3 + 0x50)) ||
             (*(double *)((long)puVar4 + 0x58) != *(double *)(param_3 + 0x58))) goto LAB_10707dc8c;
          lVar6 = *(long *)((long)puVar4 + 0x10);
          if (((((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
               && ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             (((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x48);
            if (puVar8 != *(undefined1 **)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_10707dc8c;
            }
            goto LAB_10707dc80;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10707dc8c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10707db04; end: 10707dca7; -[SCChatTextContentViewModel isEqual:] */

long FUN_10707db04(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707dc80:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707dc8c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = 0;
          if ((*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50)) ||
             (*(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))) goto LAB_10707dc8c;
          lVar4 = *(long *)(param_1 + 0x10);
          if (((((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0))
               && ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 != *(long *)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_10707dc8c;
            }
            goto LAB_10707dc80;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10707dc8c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10707dca8; end: 10707dcaf; -[SCChatTextContentViewModel rawText] */

undefined8 FUN_10707dca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707dcb0; end: 10707dcb7; -[SCChatTextContentViewModel attributedText] */

undefined8 FUN_10707dcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10707dcb8; end: 10707dcbf; -[SCChatTextContentViewModel chatLabelHeight] */

undefined8 FUN_10707dcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10707dcc0; end: 10707dcc7; -[SCChatTextContentViewModel mediaCardsHeight] */

undefined8 FUN_10707dcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10707dcc8; end: 10707dccf; -[SCChatTextContentViewModel mediaCards] */

undefined8 FUN_10707dcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10707dcd0; end: 10707dcd7; -[SCChatTextContentViewModel mentions] */

undefined8 FUN_10707dcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10707dcd8; end: 10707dcdf; -[SCChatTextContentViewModel shouldShowChatLabel] */

undefined1 FUN_10707dcd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10707dce0; end: 10707dce7; -[SCChatTextContentViewModel fontForChatLabel] */

undefined8 FUN_10707dce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10707dce8; end: 10707dcef; -[SCChatTextContentViewModel reuseIdentifier] */

undefined8 FUN_10707dce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10707dcf0; end: 10707dcf7; -[SCChatTextContentViewModel contentSize] */

undefined1  [16] FUN_10707dcf0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}



/* Entry: 10707dcf8; end: 10707dd57; -[SCChatTextContentViewModel .cxx_destruct] */

void FUN_10707dcf8(long param_1)

{
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



/* Entry: 10707dd58; end: 10707dddf; -[SCChatURLMediaCardViewModel initWithUrl:inlineOnly:] */

undefined1 *
FUN_10707dd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f87f0;
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



/* Entry: 10707dde0; end: 10707de03; -[SCChatURLMediaCardViewModel copyWithZone:] */

undefined8 FUN_10707dde0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707de04; end: 10707de6f; -[SCChatURLMediaCardViewModel hash] */

undefined8 * FUN_10707de04(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10707def4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10707def4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10707def4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10707def4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10707de70; end: 10707df0f; -[SCChatURLMediaCardViewModel isEqual:] */

long FUN_10707de70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707def4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10707def4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10707def4;
    }
  }
  lVar3 = 1;
LAB_10707def4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707df10; end: 10707df17; -[SCChatURLMediaCardViewModel url] */

undefined8 FUN_10707df10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707df18; end: 10707df1f; -[SCChatURLMediaCardViewModel inlineOnly] */

undefined1 FUN_10707df18(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10707df20; end: 10707df2b; -[SCChatURLMediaCardViewModel .cxx_destruct] */

void FUN_10707df20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10707df2c; end: 10707e003; -[SCChatURLAccessoryLinkViewModel initWithText:url:iconUrl:] */

undefined1 *
FUN_10707df2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f87f8;
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



/* Entry: 10707e004; end: 10707e027; -[SCChatURLAccessoryLinkViewModel copyWithZone:] */

undefined8 FUN_10707e004(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707e028; end: 10707e0a7; -[SCChatURLAccessoryLinkViewModel hash] */

undefined8 * FUN_10707e028(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10707e140:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10707e14c;
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
            goto LAB_10707e14c;
          }
          goto LAB_10707e140;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10707e14c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10707e0a8; end: 10707e167; -[SCChatURLAccessoryLinkViewModel isEqual:] */

long FUN_10707e0a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707e140:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707e14c;
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
            goto LAB_10707e14c;
          }
          goto LAB_10707e140;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10707e14c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707e168; end: 10707e16f; -[SCChatURLAccessoryLinkViewModel text] */

undefined8 FUN_10707e168(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10707e170; end: 10707e177; -[SCChatURLAccessoryLinkViewModel url] */

undefined8 FUN_10707e170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707e178; end: 10707e17f; -[SCChatURLAccessoryLinkViewModel iconUrl] */

undefined8 FUN_10707e178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10707e180; end: 10707e1bb; -[SCChatURLAccessoryLinkViewModel .cxx_destruct] */

void FUN_10707e180(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707e1bc; end: 10707e2cf; -[SCChatURLHtmlContentViewModel initWithHtml:htmlHeight:htmlWidth:htmlThumbnail:showPlayIcon:] */

undefined1 *
FUN_10707e1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126f8800;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10707e2d0; end: 10707e2f3; -[SCChatURLHtmlContentViewModel copyWithZone:] */

undefined8 FUN_10707e2d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707e2f4; end: 10707e383; -[SCChatURLHtmlContentViewModel hash] */

undefined8 * FUN_10707e2f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10707e444:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10707e450;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10707e450;
            }
            goto LAB_10707e444;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10707e450:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10707e384; end: 10707e46b; -[SCChatURLHtmlContentViewModel isEqual:] */

long FUN_10707e384(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707e444:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707e450;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10707e450;
            }
            goto LAB_10707e444;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10707e450:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707e46c; end: 10707e473; -[SCChatURLHtmlContentViewModel html] */

undefined8 FUN_10707e46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707e474; end: 10707e47b; -[SCChatURLHtmlContentViewModel htmlHeight] */

undefined8 FUN_10707e474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10707e47c; end: 10707e483; -[SCChatURLHtmlContentViewModel htmlWidth] */

undefined8 FUN_10707e47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10707e484; end: 10707e48b; -[SCChatURLHtmlContentViewModel htmlThumbnail] */

undefined8 FUN_10707e484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10707e48c; end: 10707e493; -[SCChatURLHtmlContentViewModel showPlayIcon] */

undefined1 FUN_10707e48c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10707e494; end: 10707e4db; -[SCChatURLHtmlContentViewModel .cxx_destruct] */

void FUN_10707e494(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10707e4dc; end: 10707e53f; +[SCChatRichPreviewCardViewModel htmlContentWithHtml:] */

void FUN_10707e4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4498;
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



/* Entry: 10707e540; end: 10707e60b; +[SCChatRichPreviewCardViewModel pdfWithUrl:pdfNumPages:pdfSize:] */

void FUN_10707e540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4498;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10707e60c; end: 10707e62f; -[SCChatRichPreviewCardViewModel copyWithZone:] */

undefined8 FUN_10707e60c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707e630; end: 10707e6bf; -[SCChatRichPreviewCardViewModel hash] */

void FUN_10707e630(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f8808;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10707e6c0; end: 10707e703; -[SCChatRichPreviewCardViewModel internalInit] */

void FUN_10707e6c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f8808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10707e704; end: 10707e7eb; -[SCChatRichPreviewCardViewModel isEqual:] */

long FUN_10707e704(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707e7c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707e7d0;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10707e7d0;
            }
            goto LAB_10707e7c4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10707e7d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707e7ec; end: 10707e877; -[SCChatRichPreviewCardViewModel matchHtmlContent:pdf:] */

void FUN_10707e7ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10707e878; end: 10707e8bf; -[SCChatRichPreviewCardViewModel .cxx_destruct] */

void FUN_10707e878(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10707e8c0; end: 10707e9db; -[SCAddressAttachmentHandler initWithMapScopeMultiLauncher:uiContainer:logger:fullMapScopeServices:delegate:] */

undefined1 *
FUN_10707e8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8810;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10707e9dc; end: 10707ea6f; -[SCAddressAttachmentHandler openAddress:messageSenderId:otherParticipantId:uiContainer:] */

void FUN_10707e9dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0e8e80(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10707ea70; end: 10707ead3; -[SCAddressAttachmentHandler openAddress:messageSenderId:otherParticipantId:] */

void FUN_10707ea70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010be6ce60(param_1,param_2,param_3,param_4);
  func_0x00010be4fd00(param_1,param_2,&PTR____CFConstantStringClassReference_110e99b58,param_5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10707ead4; end: 10707eae3; -[SCAddressAttachmentHandler dismissIfNecessary] */

void FUN_10707ead4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mapScopeDidEnd__11260c0d0);
    return;
  }
  return;
}



/* Entry: 10707eae4; end: 10707eb5f; -[SCAddressAttachmentHandler _logActionWithMediaActionType:otherParticipantId:actionResponse:] */

void FUN_10707eae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae9c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10707eb60; end: 10707eca7; -[SCAddressAttachmentHandler _openAddressInSnapMap:messageSenderId:] */

void FUN_10707eb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b5c50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c031b80();
  puVar2 = PTR_PTR_1126b5c58;
  func_0x00010befd7a0(PTR_PTR_1126b5c58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  _objc_release(uVar8);
  uVar5 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c0b9b00();
    _objc_release(lVar7);
  }
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10707eca8; end: 10707ed27; -[SCAddressAttachmentHandler mapScopeDidEnd:] */

void FUN_10707eca8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x10));
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0b9ac0();
    _objc_release(lVar3);
  }
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x18));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10707ed28; end: 10707ed83; -[SCAddressAttachmentHandler .cxx_destruct] */

void FUN_10707ed28(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707ed84; end: 10707eecf;  */

void FUN_10707ed84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain();
  func_0x00010bf0cbe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = uVar5;
  func_0x00010bf366a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10707eed0; end: 10707ef9f;  */

void FUN_10707eed0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain();
  func_0x00010bf0cc00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befbfe0(param_1);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


