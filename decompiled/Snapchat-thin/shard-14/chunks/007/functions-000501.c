/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b623740; end: 10b623747; -[SCStoriesSnapSponsor sponsorStatus] */

undefined4 FUN_10b623740(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b623748; end: 10b623777; -[SCStoriesSnapSponsor .cxx_destruct] */

void FUN_10b623748(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b623778; end: 10b6237ef; -[SCStoriesSnapContextHintInfo initWithRaw:] */

undefined1 * FUN_10b623778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706ba0;
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



/* Entry: 10b6237f0; end: 10b623813; -[SCStoriesSnapContextHintInfo copyWithZone:] */

undefined8 FUN_10b6237f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b623814; end: 10b62381b; -[SCStoriesSnapContextHintInfo hash] */

void FUN_10b623814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b62381c; end: 10b6238ab; -[SCStoriesSnapContextHintInfo isEqual:] */

long FUN_10b62381c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b623890;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b623890;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b623890;
    }
  }
  lVar3 = 1;
LAB_10b623890:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6238ac; end: 10b6238b3; -[SCStoriesSnapContextHintInfo raw] */

undefined8 FUN_10b6238ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6238b4; end: 10b6238bf; -[SCStoriesSnapContextHintInfo .cxx_destruct] */

void FUN_10b6238b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6238c0; end: 10b623937; -[SCStoriesSnapLensInfo initWithRaw:] */

undefined1 * FUN_10b6238c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706ba8;
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



/* Entry: 10b623938; end: 10b62395b; -[SCStoriesSnapLensInfo copyWithZone:] */

undefined8 FUN_10b623938(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62395c; end: 10b623963; -[SCStoriesSnapLensInfo hash] */

void FUN_10b62395c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b623964; end: 10b6239f3; -[SCStoriesSnapLensInfo isEqual:] */

long FUN_10b623964(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6239d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b6239d8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b6239d8;
    }
  }
  lVar3 = 1;
LAB_10b6239d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6239f4; end: 10b6239fb; -[SCStoriesSnapLensInfo raw] */

undefined8 FUN_10b6239f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6239fc; end: 10b623a07; -[SCStoriesSnapLensInfo .cxx_destruct] */

void FUN_10b6239fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b623a08; end: 10b623a7f; -[SCStoriesSnapUnlockablesInfo initWithRaw:] */

undefined1 * FUN_10b623a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706bb0;
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



/* Entry: 10b623a80; end: 10b623aa3; -[SCStoriesSnapUnlockablesInfo copyWithZone:] */

undefined8 FUN_10b623a80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b623aa4; end: 10b623aab; -[SCStoriesSnapUnlockablesInfo hash] */

void FUN_10b623aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b623aac; end: 10b623b3b; -[SCStoriesSnapUnlockablesInfo isEqual:] */

long FUN_10b623aac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b623b20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b623b20;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b623b20;
    }
  }
  lVar3 = 1;
LAB_10b623b20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b623b3c; end: 10b623b43; -[SCStoriesSnapUnlockablesInfo raw] */

undefined8 FUN_10b623b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b623b44; end: 10b623b4f; -[SCStoriesSnapUnlockablesInfo .cxx_destruct] */

void FUN_10b623b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b623b50; end: 10b623c0f; -[SCStoriesSnapAudioStitchInfo initWithAudioStitchId:snapsPerRow:snapsPerColumn:snaps:] */

undefined1 *
FUN_10b623b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706bb8;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b623c10; end: 10b623c33; -[SCStoriesSnapAudioStitchInfo copyWithZone:] */

undefined8 FUN_10b623c10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b623c34; end: 10b623cb3; -[SCStoriesSnapAudioStitchInfo hash] */

undefined8 * FUN_10b623c34(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
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
LAB_10b623d54:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b623d60;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b623d60;
        }
        goto LAB_10b623d54;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b623d60:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b623cb4; end: 10b623d7b; -[SCStoriesSnapAudioStitchInfo isEqual:] */

long FUN_10b623cb4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b623d54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b623d60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b623d60;
        }
        goto LAB_10b623d54;
      }
    }
    lVar3 = 0;
  }
LAB_10b623d60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b623d7c; end: 10b623d83; -[SCStoriesSnapAudioStitchInfo audioStitchId] */

undefined8 FUN_10b623d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b623d84; end: 10b623d8b; -[SCStoriesSnapAudioStitchInfo snapsPerRow] */

undefined8 FUN_10b623d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b623d8c; end: 10b623d93; -[SCStoriesSnapAudioStitchInfo snapsPerColumn] */

undefined8 FUN_10b623d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b623d94; end: 10b623d9b; -[SCStoriesSnapAudioStitchInfo snaps] */

undefined8 FUN_10b623d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b623d9c; end: 10b623dcb; -[SCStoriesSnapAudioStitchInfo .cxx_destruct] */

void FUN_10b623d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b623dcc; end: 10b623e67; -[SCStoriesAudioStitchSnap initWithSubmissionId:startTime:endTime:positionIndex:] */

undefined1 *
FUN_10b623dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112706bc0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b623e68; end: 10b623e8b; -[SCStoriesAudioStitchSnap copyWithZone:] */

undefined8 FUN_10b623e68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b623e8c; end: 10b623f43; -[SCStoriesAudioStitchSnap hash] */

undefined8 * FUN_10b623e8c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  puVar3 = &uStack_48;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b624024:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b624030;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      dVar9 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar8 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (bVar1) {
        dVar9 = ABS((double)puVar3[3] - (double)param_3[3]);
        dVar8 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar1 = dVar9 < dVar8;
        }
        if (bVar1) {
          puVar7 = (undefined8 *)puVar3[1];
          if (puVar7 != (undefined8 *)param_3[1]) {
            func_0x00010c071ae0();
            goto LAB_10b624030;
          }
          goto LAB_10b624024;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b624030:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b623f44; end: 10b62404b; -[SCStoriesAudioStitchSnap isEqual:] */

long FUN_10b623f44(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b624024:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b624030;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
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
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 8);
          if (lVar4 != *(long *)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_10b624030;
          }
          goto LAB_10b624024;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b624030:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b62404c; end: 10b624053; -[SCStoriesAudioStitchSnap submissionId] */

undefined8 FUN_10b62404c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b624054; end: 10b62405b; -[SCStoriesAudioStitchSnap startTime] */

undefined8 FUN_10b624054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62405c; end: 10b624063; -[SCStoriesAudioStitchSnap endTime] */

undefined8 FUN_10b62405c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b624064; end: 10b62406b; -[SCStoriesAudioStitchSnap positionIndex] */

undefined8 FUN_10b624064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b62406c; end: 10b624077; -[SCStoriesAudioStitchSnap .cxx_destruct] */

void FUN_10b62406c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b624078; end: 10b6240ef; -[SCStoriesSnapLoggingInfo initWithSourceAppOauthClientId:] */

undefined1 * FUN_10b624078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706bc8;
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



/* Entry: 10b6240f0; end: 10b624113; -[SCStoriesSnapLoggingInfo copyWithZone:] */

undefined8 FUN_10b6240f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b624114; end: 10b62411b; -[SCStoriesSnapLoggingInfo hash] */

void FUN_10b624114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b62411c; end: 10b6241ab; -[SCStoriesSnapLoggingInfo isEqual:] */

long FUN_10b62411c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b624190;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b624190;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b624190;
    }
  }
  lVar3 = 1;
LAB_10b624190:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6241ac; end: 10b6241b3; -[SCStoriesSnapLoggingInfo sourceAppOauthClientId] */

undefined8 FUN_10b6241ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6241b4; end: 10b6241bf; -[SCStoriesSnapLoggingInfo .cxx_destruct] */

void FUN_10b6241b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6241c0; end: 10b624247; -[SCStoriesSnapSource initWithDisplayName:source:] */

undefined1 *
FUN_10b6241c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706bd0;
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



/* Entry: 10b624248; end: 10b62426b; -[SCStoriesSnapSource copyWithZone:] */

undefined8 FUN_10b624248(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62426c; end: 10b6242d7; -[SCStoriesSnapSource hash] */

undefined8 * FUN_10b62426c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_30 = (long)*(char *)(param_1 + 8);
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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b62435c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b62435c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b62435c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b62435c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b6242d8; end: 10b624377; -[SCStoriesSnapSource isEqual:] */

long FUN_10b6242d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62435c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b62435c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b62435c;
    }
  }
  lVar3 = 1;
LAB_10b62435c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b624378; end: 10b62437f; -[SCStoriesSnapSource displayName] */

undefined8 FUN_10b624378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b624380; end: 10b624387; -[SCStoriesSnapSource source] */

long FUN_10b624380(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 10b624388; end: 10b624393; -[SCStoriesSnapSource .cxx_destruct] */

void FUN_10b624388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b624394; end: 10b62441f; -[SCStoriesMultiSnapInfo initWithBundleId:segmentIndex:segmentCount:] */

undefined1 *
FUN_10b624394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706bd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b624420; end: 10b624443; -[SCStoriesMultiSnapInfo copyWithZone:] */

undefined8 FUN_10b624420(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b624444; end: 10b6244b7; -[SCStoriesMultiSnapInfo hash] */

undefined8 * FUN_10b624444(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b62454c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b62454c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b62454c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b62454c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b6244b8; end: 10b624567; -[SCStoriesMultiSnapInfo isEqual:] */

long FUN_10b6244b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62454c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b62454c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b62454c;
    }
  }
  lVar3 = 1;
LAB_10b62454c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b624568; end: 10b62456f; -[SCStoriesMultiSnapInfo bundleId] */

undefined8 FUN_10b624568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b624570; end: 10b624577; -[SCStoriesMultiSnapInfo segmentIndex] */

undefined8 FUN_10b624570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b624578; end: 10b62457f; -[SCStoriesMultiSnapInfo segmentCount] */

undefined8 FUN_10b624578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b624580; end: 10b62458b; -[SCStoriesMultiSnapInfo .cxx_destruct] */

void FUN_10b624580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b62458c; end: 10b624627; -[SCStoriesSnapBoostInfo initWithStoryId:boostTimestampMs:boostProgressMs:recommendTimestampMs:] */

undefined1 *
FUN_10b62458c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706be0;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b624628; end: 10b62464b; -[SCStoriesSnapBoostInfo copyWithZone:] */

undefined8 FUN_10b624628(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62464c; end: 10b624717; -[SCStoriesSnapBoostInfo hash] */

undefined8 * FUN_10b62464c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
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
LAB_10b62481c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b624828;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
        dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
          dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar1 = dVar8 < dVar7;
          }
          if (bVar1) {
            puVar6 = (undefined8 *)puVar3[1];
            if (puVar6 != (undefined8 *)param_3[1]) {
              func_0x00010c071ae0();
              goto LAB_10b624828;
            }
            goto LAB_10b62481c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b624828:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b624718; end: 10b624843; -[SCStoriesSnapBoostInfo isEqual:] */

long FUN_10b624718(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62481c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b624828;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
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
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            lVar4 = *(long *)(param_1 + 8);
            if (lVar4 != *(long *)(param_3 + 8)) {
              func_0x00010c071ae0();
              goto LAB_10b624828;
            }
            goto LAB_10b62481c;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b624828:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b624844; end: 10b62484b; -[SCStoriesSnapBoostInfo storyId] */

undefined8 FUN_10b624844(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b62484c; end: 10b624853; -[SCStoriesSnapBoostInfo boostTimestampMs] */

undefined8 FUN_10b62484c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b624854; end: 10b62485b; -[SCStoriesSnapBoostInfo boostProgressMs] */

undefined8 FUN_10b624854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b62485c; end: 10b624863; -[SCStoriesSnapBoostInfo recommendTimestampMs] */

undefined8 FUN_10b62485c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b624864; end: 10b62486f; -[SCStoriesSnapBoostInfo .cxx_destruct] */

void FUN_10b624864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b624870; end: 10b624903; -[SCStoriesSnapSpotlightEngagementInfo initWithTimestampMs:boostCount:shareCount:viewCount:subsCount:spotlightNewPendingReplyCount:spotlightLiveReplyCount:spotlightPendingReplyCount:remixCount:recommendCount:] */

void FUN_10b624870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112706be8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
  }
  return;
}



/* Entry: 10b624904; end: 10b624927; -[SCStoriesSnapSpotlightEngagementInfo copyWithZone:] */

undefined8 FUN_10b624904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b624928; end: 10b6249cf; -[SCStoriesSnapSpotlightEngagementInfo hash] */

ulong * FUN_10b624928(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  double dVar6;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar3 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_68 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  lVar4 = *(long *)(param_1 + 0x50);
  lStack_20 = -lVar4;
  if (-1 < lVar4) {
    lStack_20 = lVar4;
  }
  puVar1 = &uStack_68;
  func_0x000107c3191c(puVar1,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar5 = (ulong *)0x1;
  }
  else {
    puVar5 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar5 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if (((((ulong)puVar2 & 1) == 0) ||
          ((((puVar1[2] != param_3[2] || (puVar1[3] != param_3[3])) || (puVar1[4] != param_3[4])) ||
           ((puVar1[5] != param_3[5] || (puVar1[6] != param_3[6])))))) ||
         ((puVar1[7] != param_3[7] ||
          (((puVar1[8] != param_3[8] || (puVar1[9] != param_3[9])) || (puVar1[10] != param_3[10]))))
         )) {
        puVar5 = (ulong *)0x0;
      }
      else {
        dVar6 = ABS((double)puVar1[1] + (double)param_3[1]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        puVar5 = (ulong *)(ulong)(ABS((double)puVar1[1] - (double)param_3[1]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b6249d0; end: 10b624b0b; -[SCStoriesSnapSpotlightEngagementInfo isEqual:] */

bool FUN_10b6249d0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar2 & 1) == 0) ||
          ((((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
             (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
            (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) ||
           ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
            (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))))))) ||
         ((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
          (((*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40) ||
            (*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48))) ||
           (*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50))))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b624b0c; end: 10b624b13; -[SCStoriesSnapSpotlightEngagementInfo timestampMs] */

undefined8 FUN_10b624b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b624b14; end: 10b624b1b; -[SCStoriesSnapSpotlightEngagementInfo boostCount] */

undefined8 FUN_10b624b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b624b1c; end: 10b624b23; -[SCStoriesSnapSpotlightEngagementInfo shareCount] */

undefined8 FUN_10b624b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b624b24; end: 10b624b2b; -[SCStoriesSnapSpotlightEngagementInfo viewCount] */

undefined8 FUN_10b624b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b624b2c; end: 10b624b33; -[SCStoriesSnapSpotlightEngagementInfo subsCount] */

undefined8 FUN_10b624b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b624b34; end: 10b624b3b; -[SCStoriesSnapSpotlightEngagementInfo spotlightNewPendingReplyCount] */

undefined8 FUN_10b624b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b624b3c; end: 10b624b43; -[SCStoriesSnapSpotlightEngagementInfo spotlightLiveReplyCount] */

undefined8 FUN_10b624b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b624b44; end: 10b624b4b; -[SCStoriesSnapSpotlightEngagementInfo spotlightPendingReplyCount] */

undefined8 FUN_10b624b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b624b4c; end: 10b624b53; -[SCStoriesSnapSpotlightEngagementInfo remixCount] */

undefined8 FUN_10b624b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b624b54; end: 10b624b5b; -[SCStoriesSnapSpotlightEngagementInfo recommendCount] */

undefined8 FUN_10b624b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b624b5c; end: 10b624c07; -[SCStoriesSnapCameoMetadata initWithGendersArray:fallbackImage:] */

undefined1 *
FUN_10b624b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706bf0;
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



/* Entry: 10b624c08; end: 10b624c2b; -[SCStoriesSnapCameoMetadata copyWithZone:] */

undefined8 FUN_10b624c08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b624c2c; end: 10b624c9f; -[SCStoriesSnapCameoMetadata hash] */

undefined8 * FUN_10b624c2c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b624d20:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b624d2c;
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
          goto LAB_10b624d2c;
        }
        goto LAB_10b624d20;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b624d2c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b624ca0; end: 10b624d47; -[SCStoriesSnapCameoMetadata isEqual:] */

long FUN_10b624ca0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b624d20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b624d2c;
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
          goto LAB_10b624d2c;
        }
        goto LAB_10b624d20;
      }
    }
    lVar3 = 0;
  }
LAB_10b624d2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b624d48; end: 10b624d4f; -[SCStoriesSnapCameoMetadata gendersArray] */

undefined8 FUN_10b624d48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b624d50; end: 10b624d57; -[SCStoriesSnapCameoMetadata fallbackImage] */

undefined8 FUN_10b624d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b624d58; end: 10b624d87; -[SCStoriesSnapCameoMetadata .cxx_destruct] */

void FUN_10b624d58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b624d88; end: 10b624e87; -[SCStoriesSnapManagementInfo initWithInsightsInfo:businessProfileId:launchInsightsDirectly:isSaveable:isDeletable:encodedContentModerationStatus:] */

undefined1 *
FUN_10b624d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112706bf8;
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b624e88; end: 10b624eab; -[SCStoriesSnapManagementInfo copyWithZone:] */

undefined8 FUN_10b624e88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b624eac; end: 10b624f3b; -[SCStoriesSnapManagementInfo hash] */

undefined8 * FUN_10b624eac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b625004:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b625010;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b625010;
          }
          goto LAB_10b625004;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b625010:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b624f3c; end: 10b62502b; -[SCStoriesSnapManagementInfo isEqual:] */

long FUN_10b624f3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b625004:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b625010;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b625010;
          }
          goto LAB_10b625004;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b625010:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62502c; end: 10b625033; -[SCStoriesSnapManagementInfo insightsInfo] */

undefined8 FUN_10b62502c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b625034; end: 10b62503b; -[SCStoriesSnapManagementInfo businessProfileId] */

undefined8 FUN_10b625034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b62503c; end: 10b625043; -[SCStoriesSnapManagementInfo launchInsightsDirectly] */

undefined1 FUN_10b62503c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b625044; end: 10b62504b; -[SCStoriesSnapManagementInfo isSaveable] */

undefined1 FUN_10b625044(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b62504c; end: 10b625053; -[SCStoriesSnapManagementInfo isDeletable] */

undefined1 FUN_10b62504c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b625054; end: 10b62505b; -[SCStoriesSnapManagementInfo encodedContentModerationStatus] */

undefined8 FUN_10b625054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b62505c; end: 10b625097; -[SCStoriesSnapManagementInfo .cxx_destruct] */

void FUN_10b62505c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


