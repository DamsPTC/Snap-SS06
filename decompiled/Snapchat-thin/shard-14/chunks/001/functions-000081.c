/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afa9594; end: 10afa95b7; -[SCMusicEditorSelection copyWithZone:] */

undefined8 FUN_10afa9594(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa95b8; end: 10afa964b; -[SCMusicEditorSelection hash] */

undefined8 * FUN_10afa95b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_48;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afa9708:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afa9714;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)(puVar3 + 1) == *(int *)(param_3 + 1) && (puVar3[3] == param_3[3])))) {
      dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
      dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10afa9714;
        }
        goto LAB_10afa9708;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afa9714:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afa964c; end: 10afa972f; -[SCMusicEditorSelection isEqual:] */

long FUN_10afa964c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa9708:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa9714;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10afa9714;
        }
        goto LAB_10afa9708;
      }
    }
    lVar4 = 0;
  }
LAB_10afa9714:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afa9730; end: 10afa9737; -[SCMusicEditorSelection pickerSelection] */

undefined8 FUN_10afa9730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa9738; end: 10afa973f; -[SCMusicEditorSelection stickerType] */

undefined4 FUN_10afa9738(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10afa9740; end: 10afa9747; -[SCMusicEditorSelection context] */

undefined8 FUN_10afa9740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa9748; end: 10afa974f; -[SCMusicEditorSelection segmentDuration] */

undefined8 FUN_10afa9748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa9750; end: 10afa975b; -[SCMusicEditorSelection .cxx_destruct] */

void FUN_10afa9750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afa975c; end: 10afa980f; -[SCMusicPickerLoggingInfo initWithSourcePageType:captureSessionId:contextSessionId:] */

undefined1 *
FUN_10afa975c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112703778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10afa9810; end: 10afa9833; -[SCMusicPickerLoggingInfo copyWithZone:] */

undefined8 FUN_10afa9810(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa9834; end: 10afa98b3; -[SCMusicPickerLoggingInfo hash] */

long * FUN_10afa9834(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10afa9944:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afa9950;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afa9950;
        }
        goto LAB_10afa9944;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afa9950:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10afa98b4; end: 10afa996b; -[SCMusicPickerLoggingInfo isEqual:] */

long FUN_10afa98b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa9944:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa9950;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afa9950;
        }
        goto LAB_10afa9944;
      }
    }
    lVar3 = 0;
  }
LAB_10afa9950:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa996c; end: 10afa9973; -[SCMusicPickerLoggingInfo sourcePageType] */

undefined8 FUN_10afa996c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa9974; end: 10afa997b; -[SCMusicPickerLoggingInfo captureSessionId] */

undefined8 FUN_10afa9974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa997c; end: 10afa9983; -[SCMusicPickerLoggingInfo contextSessionId] */

undefined8 FUN_10afa997c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa9984; end: 10afa99b3; -[SCMusicPickerLoggingInfo .cxx_destruct] */

void FUN_10afa9984(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afa99b4; end: 10afa9a8f; -[SCMusicTrackInfo initWithTrackTitle:artistName:isPrivate:isExplicit:isTrending:trackType:] */

undefined1 *
FUN_10afa99b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_112703780;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa9a90; end: 10afa9ab3; -[SCMusicTrackInfo copyWithZone:] */

undefined8 FUN_10afa9a90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa9ab4; end: 10afa9b47; -[SCMusicTrackInfo hash] */

undefined8 * FUN_10afa9ab4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_30 = (ulong)uVar1;
  puVar5 = &uStack_58;
  uStack_50 = uVar4;
  func_0x000107c3191c(puVar5,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10afa9c08:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afa9c14;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar6 & 1) != 0) &&
        (((*(char *)(puVar5 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))))) &&
       (*(int *)((long)puVar5 + 0xc) == *(int *)((long)param_3 + 0xc))) {
      lVar7 = puVar5[2];
      if ((lVar7 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
        puVar8 = (undefined8 *)puVar5[3];
        if (puVar8 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10afa9c14;
        }
        goto LAB_10afa9c08;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afa9c14:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afa9b48; end: 10afa9c2f; -[SCMusicTrackInfo isEqual:] */

long FUN_10afa9b48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa9c08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa9c14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) &&
       (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afa9c14;
        }
        goto LAB_10afa9c08;
      }
    }
    lVar3 = 0;
  }
LAB_10afa9c14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa9c30; end: 10afa9c37; -[SCMusicTrackInfo trackTitle] */

undefined8 FUN_10afa9c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa9c38; end: 10afa9c3f; -[SCMusicTrackInfo artistName] */

undefined8 FUN_10afa9c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa9c40; end: 10afa9c47; -[SCMusicTrackInfo isPrivate] */

undefined1 FUN_10afa9c40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afa9c48; end: 10afa9c4f; -[SCMusicTrackInfo isExplicit] */

undefined1 FUN_10afa9c48(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afa9c50; end: 10afa9c57; -[SCMusicTrackInfo isTrending] */

undefined1 FUN_10afa9c50(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afa9c58; end: 10afa9c5f; -[SCMusicTrackInfo trackType] */

undefined4 FUN_10afa9c58(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10afa9c60; end: 10afa9c8f; -[SCMusicTrackInfo .cxx_destruct] */

void FUN_10afa9c60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afa9c90; end: 10afa9d67; -[SCMusicRemoteMedia initWithUrl:encryptionKey:encryptionIv:] */

undefined1 *
FUN_10afa9c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703788;
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



/* Entry: 10afa9d68; end: 10afa9d8b; -[SCMusicRemoteMedia copyWithZone:] */

undefined8 FUN_10afa9d68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa9d8c; end: 10afa9e0b; -[SCMusicRemoteMedia hash] */

undefined8 * FUN_10afa9d8c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afa9ea4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afa9eb0;
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
            goto LAB_10afa9eb0;
          }
          goto LAB_10afa9ea4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afa9eb0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afa9e0c; end: 10afa9ecb; -[SCMusicRemoteMedia isEqual:] */

long FUN_10afa9e0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa9ea4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa9eb0;
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
            goto LAB_10afa9eb0;
          }
          goto LAB_10afa9ea4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afa9eb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa9ecc; end: 10afa9ed3; -[SCMusicRemoteMedia url] */

undefined8 FUN_10afa9ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa9ed4; end: 10afa9edb; -[SCMusicRemoteMedia encryptionKey] */

undefined8 FUN_10afa9ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa9edc; end: 10afa9ee3; -[SCMusicRemoteMedia encryptionIv] */

undefined8 FUN_10afa9edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa9ee4; end: 10afa9f1f; -[SCMusicRemoteMedia .cxx_destruct] */

void FUN_10afa9ee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa9f20; end: 10afa9f93; -[SCDiscoverFeedExtensionServices initWithSectionExtensionServices:] */

undefined1 * FUN_10afa9f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703790;
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



/* Entry: 10afa9f94; end: 10afa9f9b; -[SCDiscoverFeedExtensionServices sectionExtensionServices] */

undefined8 FUN_10afa9f94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa9f9c; end: 10afa9fa7; -[SCDiscoverFeedExtensionServices .cxx_destruct] */

void FUN_10afa9f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa9fa8; end: 10afaa25b; -[SCDiscoverFeedSectionExtensionServices initWithSectionExtensions:] */

undefined8 * FUN_10afa9fa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_112703798;
  puVar2 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lVar10 * 8);
        uVar9 = uVar11;
        func_0x00010bf409e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar3);
        _objc_release(uVar9);
        uVar9 = uVar11;
        func_0x00010c09de60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar4);
        _objc_release(uVar9);
        uVar9 = uVar11;
        func_0x00010c12a3c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar5);
        _objc_release(uVar9);
        func_0x00010c0b3ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar6);
        _objc_release(uVar11);
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar8 = puVar3;
    func_0x00010bf51e00();
    uVar9 = puVar2[1];
    puVar2[1] = puVar8;
    _objc_release(uVar9);
    puVar8 = puVar4;
    func_0x00010bf51e00();
    uVar9 = puVar2[2];
    puVar2[2] = puVar8;
    _objc_release(uVar9);
    puVar8 = puVar5;
    func_0x00010bf51e00();
    uVar9 = puVar2[3];
    puVar2[3] = puVar8;
    _objc_release(uVar9);
    puVar8 = puVar6;
    func_0x00010bf51e00();
    uVar9 = puVar2[4];
    puVar2[4] = puVar8;
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(param_3 + 8);
}



/* Entry: 10afaa25c; end: 10afaa263; -[SCDiscoverFeedSectionExtensionServices collectionViewSectionCreators] */

undefined8 FUN_10afaa25c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afaa264; end: 10afaa26b; -[SCDiscoverFeedSectionExtensionServices localSectionDescriptorProviders] */

undefined8 FUN_10afaa264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afaa26c; end: 10afaa273; -[SCDiscoverFeedSectionExtensionServices remoteSectionProviders] */

undefined8 FUN_10afaa26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afaa274; end: 10afaa27b; -[SCDiscoverFeedSectionExtensionServices loggingParsers] */

undefined8 FUN_10afaa274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afaa27c; end: 10afaa2c3; -[SCDiscoverFeedSectionExtensionServices .cxx_destruct] */

void FUN_10afaa27c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afaa2c4; end: 10afaa657; -[SCSpotlightReply initWithCoder:] */

undefined1 *
FUN_10afaa2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127037a0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x68) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afaa658; end: 10afaaa4b; -[SCSpotlightReply initWithReplyId:snapPosterId:snapId:replyText:replyAttachments:replyReactionCounts:mentions:suggestedSearches:replyPosterId:replyPosterDisplayName:replyApprovalState:replyTimestampMs:replyPostingState:replyPosterBitmojiAvatarId:replyPosterBitmojiSelfieId:replyPosterProfileId:replyPosterProfileType:badgeArray:parentCommentId:threadedReplyCount:isPostedInCurrentTraySession:replyPosterProfileLogoURL:isFavoritedByCreator:getRepliesRequestId:] */

undefined8 *
FUN_10afaa658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_20);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_80 = PTR_PTR_1127037a0;
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
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_14;
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    puVar1[0x12] = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    puVar1[0x15] = param_22;
    *(undefined1 *)(puVar1 + 1) = param_23;
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_26;
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
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



/* Entry: 10afaaa4c; end: 10afaaa6f; -[SCSpotlightReply copyWithZone:] */

undefined8 FUN_10afaaa4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afaaa70; end: 10afaac87; -[SCSpotlightReply encodeWithCoder:] */

void FUN_10afaaa70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f40cd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f40cf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f40d18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f40d38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f40d58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f40d78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f40d98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f40db8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f40dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f40df8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x68),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f40e18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f40e38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f40e58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f40e78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f40e98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f40eb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f40ed8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f40ef8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f40f18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f40f38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f40f58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f40f78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f40f98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afaac88; end: 10afaae03; -[SCSpotlightReply hash] */

undefined8 * FUN_10afaac88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x60);
  lStack_98 = -lVar5;
  if (-1 < lVar5) {
    lStack_98 = lVar5;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_90 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  lVar5 = *(long *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x90);
  uStack_60 = *(undefined8 *)(param_1 + 0x98);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_e8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afab084:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afab090;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[0xc] == param_3[0xc] && (puVar3[0xe] == param_3[0xe])) &&
          (puVar3[0x12] == param_3[0x12])) &&
         ((puVar3[0x15] == param_3[0x15] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1)))))))
       && (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) {
      dVar8 = ABS((double)puVar3[0xd] - (double)param_3[0xd]);
      if (((((((dVar8 < 2.2250738585072014e-308) ||
              (dVar8 < ABS((double)puVar3[0xd] + (double)param_3[0xd]) * 2.220446049250313e-16)) &&
             ((lVar5 = puVar3[2], lVar5 == param_3[2] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
            && (((lVar5 = puVar3[3], lVar5 == param_3[3] || (func_0x00010c071ae0(), (int)lVar5 != 0)
                 ) && ((lVar5 = puVar3[4], lVar5 == param_3[4] ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
           (((((lVar5 = puVar3[5], lVar5 == param_3[5] || (func_0x00010c071ae0(), (int)lVar5 != 0))
              && ((lVar5 = puVar3[6], lVar5 == param_3[6] ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             (((lVar5 = puVar3[7], lVar5 == param_3[7] || (func_0x00010c071ae0(), (int)lVar5 != 0))
              && ((lVar5 = puVar3[8], lVar5 == param_3[8] ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
            (((((lVar5 = puVar3[9], lVar5 == param_3[9] || (func_0x00010c071ae0(), (int)lVar5 != 0))
               && ((lVar5 = puVar3[10], lVar5 == param_3[10] ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
              ((lVar5 = puVar3[0xb], lVar5 == param_3[0xb] ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             (((lVar5 = puVar3[0xf], lVar5 == param_3[0xf] ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
              ((((lVar5 = puVar3[0x10], lVar5 == param_3[0x10] ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                ((lVar5 = puVar3[0x11], lVar5 == param_3[0x11] ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
               ((lVar5 = puVar3[0x13], lVar5 == param_3[0x13] ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))))))))))) &&
          ((lVar5 = puVar3[0x14], lVar5 == param_3[0x14] || (func_0x00010c071ae0(), (int)lVar5 != 0)
           ))) && ((lVar5 = puVar3[0x16], lVar5 == param_3[0x16] ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = (undefined8 *)puVar3[0x17];
        if (puVar7 != (undefined8 *)param_3[0x17]) {
          func_0x00010c071ae0();
          goto LAB_10afab090;
        }
        goto LAB_10afab084;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10afab090:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10afaae04; end: 10afab0ab; -[SCSpotlightReply isEqual:] */

long FUN_10afaae04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afab084:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afab090;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
           (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
          (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))) &&
         ((*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) &&
       (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
      dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
      if (((((((dVar4 < 2.2250738585072014e-308) ||
              (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                       2.220446049250313e-16)) &&
             ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
           (((((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
            (((((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))) &&
          ((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0xb8);
        if (lVar3 != *(long *)(param_3 + 0xb8)) {
          func_0x00010c071ae0();
          goto LAB_10afab090;
        }
        goto LAB_10afab084;
      }
    }
    lVar3 = 0;
  }
LAB_10afab090:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afab0ac; end: 10afab0b3; -[SCSpotlightReply replyId] */

undefined8 FUN_10afab0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afab0b4; end: 10afab0bb; -[SCSpotlightReply snapPosterId] */

undefined8 FUN_10afab0b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afab0bc; end: 10afab0c3; -[SCSpotlightReply snapId] */

undefined8 FUN_10afab0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afab0c4; end: 10afab0cb; -[SCSpotlightReply replyText] */

undefined8 FUN_10afab0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afab0cc; end: 10afab0d3; -[SCSpotlightReply replyAttachments] */

undefined8 FUN_10afab0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afab0d4; end: 10afab0db; -[SCSpotlightReply replyReactionCounts] */

undefined8 FUN_10afab0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afab0dc; end: 10afab0e3; -[SCSpotlightReply mentions] */

undefined8 FUN_10afab0dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afab0e4; end: 10afab0eb; -[SCSpotlightReply suggestedSearches] */

undefined8 FUN_10afab0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afab0ec; end: 10afab0f3; -[SCSpotlightReply replyPosterId] */

undefined8 FUN_10afab0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afab0f4; end: 10afab0fb; -[SCSpotlightReply replyPosterDisplayName] */

undefined8 FUN_10afab0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afab0fc; end: 10afab103; -[SCSpotlightReply replyApprovalState] */

undefined8 FUN_10afab0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afab104; end: 10afab10b; -[SCSpotlightReply replyTimestampMs] */

undefined8 FUN_10afab104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afab10c; end: 10afab113; -[SCSpotlightReply replyPostingState] */

undefined8 FUN_10afab10c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10afab114; end: 10afab11b; -[SCSpotlightReply replyPosterBitmojiAvatarId] */

undefined8 FUN_10afab114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10afab11c; end: 10afab123; -[SCSpotlightReply replyPosterBitmojiSelfieId] */

undefined8 FUN_10afab11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10afab124; end: 10afab12b; -[SCSpotlightReply replyPosterProfileId] */

undefined8 FUN_10afab124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10afab12c; end: 10afab133; -[SCSpotlightReply replyPosterProfileType] */

undefined8 FUN_10afab12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10afab134; end: 10afab13b; -[SCSpotlightReply badgeArray] */

undefined8 FUN_10afab134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10afab13c; end: 10afab143; -[SCSpotlightReply parentCommentId] */

undefined8 FUN_10afab13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10afab144; end: 10afab14b; -[SCSpotlightReply threadedReplyCount] */

undefined8 FUN_10afab144(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10afab14c; end: 10afab153; -[SCSpotlightReply isPostedInCurrentTraySession] */

undefined1 FUN_10afab14c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afab154; end: 10afab15b; -[SCSpotlightReply replyPosterProfileLogoURL] */

undefined8 FUN_10afab154(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10afab15c; end: 10afab163; -[SCSpotlightReply isFavoritedByCreator] */

undefined1 FUN_10afab15c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afab164; end: 10afab16b; -[SCSpotlightReply getRepliesRequestId] */

undefined8 FUN_10afab164(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10afab16c; end: 10afab24f; -[SCSpotlightReply .cxx_destruct] */

void FUN_10afab16c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10afab250; end: 10afab26b; +[SCSpotlightReplyBuilder spotlightReply] */

void FUN_10afab250(void)

{
  _objc_alloc_init(PTR_PTR_1126c0e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afab26c; end: 10afab837; +[SCSpotlightReplyBuilder spotlightReplyFromExistingSpotlightReply:] */

void FUN_10afab26c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  
  puVar1 = PTR_PTR_1126c0e88;
  _objc_retain(param_3);
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b6ea0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c242640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b9560(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b93a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c132180();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b6fe0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b6e60(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c132080();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b6fc0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b3dc0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c262200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2baac0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b6f20(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c131f40();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2b6f00(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c131a00(param_3);
  puVar23 = puVar21;
  func_0x00010c2b6e40(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1321a0(param_3);
  puVar24 = puVar23;
  func_0x00010c2b7000();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c132000(param_3);
  puVar25 = puVar24;
  func_0x00010c2b6fa0(puVar24,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c131f00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2b6ec0(puVar25,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c131f20();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010c2b6ee0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c131f80();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010c2b6f40(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c131fe0(param_3);
  puVar32 = puVar30;
  func_0x00010c2b6f80(puVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf15100();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar32;
  func_0x00010c2a9140(puVar32,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010c0f3b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar33;
  func_0x00010c2b5520(puVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010c26d4e0(param_3);
  puVar37 = puVar35;
  func_0x00010c2baf20(puVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010c07a860(param_3);
  puVar38 = puVar37;
  func_0x00010c2b11c0(puVar37,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010c131fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar38;
  func_0x00010c2b6f60(puVar38,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c072ae0(param_3);
  puVar41 = puVar39;
  func_0x00010c2b0780(puVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010bfc9900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar42 = puVar41;
  func_0x00010c2aee00(puVar41,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar40);
  _objc_release(puVar41);
  _objc_release(puVar39);
  _objc_release(uVar36);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  _objc_release(uVar31);
  _objc_release(puVar32);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar22);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar42);
  return;
}



/* Entry: 10afab838; end: 10afab8cf; -[SCSpotlightReplyBuilder build] */

void FUN_10afab838(long param_1)

{
  _objc_alloc(PTR_PTR_1126c0e98);
  func_0x00010c03e5c0(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afab8d0; end: 10afab907; -[SCSpotlightReplyBuilder withReplyId:] */

long FUN_10afab8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afab908; end: 10afab93f; -[SCSpotlightReplyBuilder withSnapPosterId:] */

long FUN_10afab908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afab940; end: 10afab977; -[SCSpotlightReplyBuilder withSnapId:] */

long FUN_10afab940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afab978; end: 10afab9af; -[SCSpotlightReplyBuilder withReplyText:] */

long FUN_10afab978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afab9b0; end: 10afab9e7; -[SCSpotlightReplyBuilder withReplyAttachments:] */

long FUN_10afab9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afab9e8; end: 10afaba1f; -[SCSpotlightReplyBuilder withReplyReactionCounts:] */

long FUN_10afab9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afaba20; end: 10afaba57; -[SCSpotlightReplyBuilder withMentions:] */

long FUN_10afaba20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afaba58; end: 10afaba8f; -[SCSpotlightReplyBuilder withSuggestedSearches:] */

long FUN_10afaba58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afaba90; end: 10afabac7; -[SCSpotlightReplyBuilder withReplyPosterId:] */

long FUN_10afaba90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabac8; end: 10afabaff; -[SCSpotlightReplyBuilder withReplyPosterDisplayName:] */

long FUN_10afabac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabb00; end: 10afabb07; -[SCSpotlightReplyBuilder withReplyApprovalState:] */

void FUN_10afabb00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10afabb08; end: 10afabb0f; -[SCSpotlightReplyBuilder withReplyTimestampMs:] */

void FUN_10afabb08(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 10afabb10; end: 10afabb17; -[SCSpotlightReplyBuilder withReplyPostingState:] */

void FUN_10afabb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10afabb18; end: 10afabb4f; -[SCSpotlightReplyBuilder withReplyPosterBitmojiAvatarId:] */

long FUN_10afabb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabb50; end: 10afabb87; -[SCSpotlightReplyBuilder withReplyPosterBitmojiSelfieId:] */

long FUN_10afabb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabb88; end: 10afabbbf; -[SCSpotlightReplyBuilder withReplyPosterProfileId:] */

long FUN_10afabb88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabbc0; end: 10afabbc7; -[SCSpotlightReplyBuilder withReplyPosterProfileType:] */

void FUN_10afabbc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10afabbc8; end: 10afabbff; -[SCSpotlightReplyBuilder withBadgeArray:] */

long FUN_10afabbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabc00; end: 10afabc37; -[SCSpotlightReplyBuilder withParentCommentId:] */

long FUN_10afabc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabc38; end: 10afabc3f; -[SCSpotlightReplyBuilder withThreadedReplyCount:] */

void FUN_10afabc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10afabc40; end: 10afabc47; -[SCSpotlightReplyBuilder withIsPostedInCurrentTraySession:] */

void FUN_10afabc40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 10afabc48; end: 10afabc7f; -[SCSpotlightReplyBuilder withReplyPosterProfileLogoURL:] */

long FUN_10afabc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}


