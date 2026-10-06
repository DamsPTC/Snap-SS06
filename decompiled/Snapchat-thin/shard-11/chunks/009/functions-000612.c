/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bbf840; end: 108bbf8b3; -[SCAudioNotePlayingServices initWithAudioNotePlayer:] */

undefined1 * FUN_108bbf840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd9b0;
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



/* Entry: 108bbf8b4; end: 108bbf8bb; -[SCAudioNotePlayingServices audioNotePlayer] */

undefined8 FUN_108bbf8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bbf8bc; end: 108bbf8c7; -[SCAudioNotePlayingServices .cxx_destruct] */

void FUN_108bbf8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bbf8c8; end: 108bbf967; -[SCChatAudioNotePlaybackMetricsInfo initWithIsGroup:analyticsMessageId:isSender:noteDuration:] */

undefined1 *
FUN_108bbf8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fd9b8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108bbf968; end: 108bbf98b; -[SCChatAudioNotePlaybackMetricsInfo copyWithZone:] */

undefined8 FUN_108bbf968(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bbf98c; end: 108bbfa27; -[SCChatAudioNotePlaybackMetricsInfo hash] */

ulong * FUN_108bbf98c(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108bbfae4:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108bbfaf0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((char)puVar3[1] == (char)param_3[1] &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
      dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[2];
        if (puVar6 != (ulong *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108bbfaf0;
        }
        goto LAB_108bbfae4;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_108bbfaf0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108bbfa28; end: 108bbfb0b; -[SCChatAudioNotePlaybackMetricsInfo isEqual:] */

long FUN_108bbfa28(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bbfae4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bbfaf0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108bbfaf0;
        }
        goto LAB_108bbfae4;
      }
    }
    lVar4 = 0;
  }
LAB_108bbfaf0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108bbfb0c; end: 108bbfb13; -[SCChatAudioNotePlaybackMetricsInfo isGroup] */

undefined1 FUN_108bbfb0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bbfb14; end: 108bbfb1b; -[SCChatAudioNotePlaybackMetricsInfo analyticsMessageId] */

undefined8 FUN_108bbfb14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bbfb1c; end: 108bbfb23; -[SCChatAudioNotePlaybackMetricsInfo isSender] */

undefined1 FUN_108bbfb1c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bbfb24; end: 108bbfb2b; -[SCChatAudioNotePlaybackMetricsInfo noteDuration] */

undefined8 FUN_108bbfb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bbfb2c; end: 108bbfb37; -[SCChatAudioNotePlaybackMetricsInfo .cxx_destruct] */

void FUN_108bbfb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bbfb38; end: 108bbfb9f; +[SCAudioNotePlaybackEvent errorWithError:] */

void FUN_108bbfb38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfba0; end: 108bbfbeb; +[SCAudioNotePlaybackEvent loading] */

void FUN_108bbfba0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfbec; end: 108bbfc37; +[SCAudioNotePlaybackEvent playbackFinished] */

void FUN_108bbfbec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfc38; end: 108bbfc83; +[SCAudioNotePlaybackEvent playbackPaused] */

void FUN_108bbfc38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfc84; end: 108bbfccb; +[SCAudioNotePlaybackEvent playbackStarted] */

void FUN_108bbfc84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfccc; end: 108bbfd17; +[SCAudioNotePlaybackEvent playbackStopped] */

void FUN_108bbfccc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfd18; end: 108bbfd63; +[SCAudioNotePlaybackEvent sessionEnded] */

void FUN_108bbfd18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb9c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bbfd64; end: 108bbfd87; -[SCAudioNotePlaybackEvent copyWithZone:] */

undefined8 FUN_108bbfd64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bbfd88; end: 108bbfde7; -[SCAudioNotePlaybackEvent hash] */

void FUN_108bbfd88(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fd9c0;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbfde8; end: 108bbfe2b; -[SCAudioNotePlaybackEvent internalInit] */

void FUN_108bbfde8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fd9c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbfe2c; end: 108bbfecb; -[SCAudioNotePlaybackEvent isEqual:] */

long FUN_108bbfe2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bbfeb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108bbfeb0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108bbfeb0;
    }
  }
  lVar3 = 1;
LAB_108bbfeb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bbfecc; end: 108bc0047; -[SCAudioNotePlaybackEvent matchPlaybackStarted:playbackPaused:playbackFinished:playbackStopped:loading:error:sessionEnded:] */

void FUN_108bbfecc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_108bbfffc;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_108bbfffc;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 2) || (param_5 == 0)) goto LAB_108bbfffc;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_108bbfffc;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_108bbfffc;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
  }
  else {
    if (lVar1 == 5) {
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))(param_8,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_108bbfffc;
    }
    if ((lVar1 != 6) || (param_9 == 0)) goto LAB_108bbfffc;
    pcVar2 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
  }
  (*pcVar2)(lVar1);
LAB_108bbfffc:
  _objc_release(param_9);
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



/* Entry: 108bc0048; end: 108bc0053; -[SCAudioNotePlaybackEvent .cxx_destruct] */

void FUN_108bc0048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc0054; end: 108bc00f7; -[SCAudioNotePlayingSession initWithSessionId:playbackEvents:] */

undefined1 *
FUN_108bc0054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd9c8;
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



/* Entry: 108bc00f8; end: 108bc011b; -[SCAudioNotePlayingSession copyWithZone:] */

undefined8 FUN_108bc00f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc011c; end: 108bc018f; -[SCAudioNotePlayingSession hash] */

undefined8 * FUN_108bc011c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108bc0210:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bc021c;
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
          goto LAB_108bc021c;
        }
        goto LAB_108bc0210;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108bc021c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108bc0190; end: 108bc0237; -[SCAudioNotePlayingSession isEqual:] */

long FUN_108bc0190(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc0210:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc021c;
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
          goto LAB_108bc021c;
        }
        goto LAB_108bc0210;
      }
    }
    lVar3 = 0;
  }
LAB_108bc021c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc0238; end: 108bc023f; -[SCAudioNotePlayingSession sessionId] */

undefined8 FUN_108bc0238(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc0240; end: 108bc0247; -[SCAudioNotePlayingSession playbackEvents] */

undefined8 FUN_108bc0240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc0248; end: 108bc0277; -[SCAudioNotePlayingSession .cxx_destruct] */

void FUN_108bc0248(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc0278; end: 108bc0283; -[SCChatContentDeliveringServices .cxx_destruct] */

void FUN_108bc0278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc0284; end: 108bc0333; +[SCChatContentDeliveryLogItem downloadItemWithMediaId:status:metrics:startTimestampSeconds:endTimestampSeconds:] */

void FUN_108bc0284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ba160;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  _objc_release(uVar3);
  _objc_release(param_5);
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc0334; end: 108bc03bb; +[SCChatContentDeliveryLogItem generateThumbnailWithMediaId:result:startTimestampSeconds:endTimestampSeconds:] */

void FUN_108bc0334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba160;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0xa8) = param_6;
  *(undefined8 *)(puVar2 + 0xb0) = param_1;
  *(undefined8 *)(puVar2 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc03bc; end: 108bc0443; +[SCChatContentDeliveryLogItem registerZipContentsWithMediaId:result:startTimestampSeconds:endTimestampSeconds:] */

void FUN_108bc03bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba160;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x68) = param_6;
  *(undefined8 *)(puVar2 + 0x70) = param_1;
  *(undefined8 *)(puVar2 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc0444; end: 108bc04fb; +[SCChatContentDeliveryLogItem retrieveContentWithMediaId:status:metrics:startTimestampSeconds:endTimestampSeconds:] */

void FUN_108bc0444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ba160;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  *(undefined8 *)(puVar2 + 0x48) = param_7;
  _objc_release(uVar3);
  _objc_release(param_5);
  *(undefined8 *)(puVar2 + 0x50) = param_1;
  *(undefined8 *)(puVar2 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc04fc; end: 108bc0583; +[SCChatContentDeliveryLogItem storeMediaWithMediaId:result:startTimestampSeconds:endTimestampSeconds:] */

void FUN_108bc04fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba160;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x88) = param_6;
  *(undefined8 *)(puVar2 + 0x90) = param_1;
  *(undefined8 *)(puVar2 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc0584; end: 108bc05a7; -[SCChatContentDeliveryLogItem copyWithZone:] */

undefined8 FUN_108bc0584(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc05a8; end: 108bc07d3; -[SCChatContentDeliveryLogItem hash] */

void FUN_108bc05a8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar2 = *(long *)(param_1 + 0x18);
  uStack_c8 = *(undefined8 *)(param_1 + 0x20);
  lStack_d0 = -lVar2;
  if (-1 < lVar2) {
    lStack_d0 = lVar2;
  }
  uStack_d8 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_c0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_b8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  lVar2 = *(long *)(param_1 + 0x40);
  uStack_a0 = *(undefined8 *)(param_1 + 0x48);
  lStack_a8 = -lVar2;
  if (-1 < lVar2) {
    lStack_a8 = lVar2;
  }
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_98 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_90 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  lVar2 = *(long *)(param_1 + 0x68);
  lStack_80 = -lVar2;
  if (-1 < lVar2) {
    lStack_80 = lVar2;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_88 = uVar3;
  func_0x00010bfde980();
  lVar2 = *(long *)(param_1 + 0x88);
  lStack_60 = -lVar2;
  if (-1 < lVar2) {
    lStack_60 = lVar2;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar1 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_68 = uVar4;
  func_0x00010bfde980();
  lVar2 = *(long *)(param_1 + 0xa8);
  lStack_40 = -lVar2;
  if (-1 < lVar2) {
    lStack_40 = lVar2;
  }
  uVar6 = ~*(ulong *)(param_1 + 0xb0) + *(ulong *)(param_1 + 0xb0) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0xb8) + *(ulong *)(param_1 + 0xb8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar3;
  func_0x000107c3191c(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_100 = 0x15;
  pcStack_e8 = FUN_108bc07d4;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_108 = PTR_PTR_1126fd9d8;
  puStack_110 = (undefined1 *)puVar5;
  _objc_msgSendSuper2(&puStack_110,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc07d4; end: 108bc0817; -[SCChatContentDeliveryLogItem internalInit] */

void FUN_108bc07d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fd9d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc0818; end: 108bc0bc7; -[SCChatContentDeliveryLogItem isEqual:] */

long FUN_108bc0818(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc0ba0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc0bac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
          (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
         ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
          (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))))))) &&
       (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))) {
      dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x90) - *(double *)(param_3 + 0x90));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x90) + *(double *)(param_3 + 0x90)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x98) - *(double *)(param_3 + 0x98));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x98) + *(double *)(param_3 + 0x98)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0xb0) - *(double *)(param_3 + 0xb0));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0xb0) + *(double *)(param_3 + 0xb0)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0xb8) - *(double *)(param_3 + 0xb8));
                        if (((((dVar4 < 2.2250738585072014e-308) ||
                              (dVar4 < ABS(*(double *)(param_1 + 0xb8) + *(double *)(param_3 + 0xb8)
                                          ) * 2.220446049250313e-16)) &&
                             ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10)
                              || (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                            (((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20)
                              || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                             ((((lVar3 = *(long *)(param_1 + 0x38),
                                lVar3 == *(long *)(param_3 + 0x38) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                               ((lVar3 = *(long *)(param_1 + 0x48),
                                lVar3 == *(long *)(param_3 + 0x48) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                              ((lVar3 = *(long *)(param_1 + 0x60),
                               lVar3 == *(long *)(param_3 + 0x60) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
                           ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
                          lVar3 = *(long *)(param_1 + 0xa0);
                          if (lVar3 != *(long *)(param_3 + 0xa0)) {
                            func_0x00010c071ae0();
                            goto LAB_108bc0bac;
                          }
                          goto LAB_108bc0ba0;
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
LAB_108bc0bac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc0bc8; end: 108bc0d07; -[SCChatContentDeliveryLogItem matchDownloadItem:retrieveContent:registerZipContents:storeMedia:generateThumbnail:] */

void FUN_108bc0bc8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_108bc0cd0;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if ((lVar3 != 1) || (param_4 == 0)) goto LAB_108bc0cd0;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(uVar6,uVar7,lVar3,uVar1,uVar2,uVar5);
  }
  else {
    if (lVar3 == 2) {
      if (param_5 == 0) goto LAB_108bc0cd0;
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    else if (lVar3 == 3) {
      if (param_6 == 0) goto LAB_108bc0cd0;
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    else {
      if ((lVar3 != 4) || (param_7 == 0)) goto LAB_108bc0cd0;
      uVar1 = *(undefined8 *)(param_1 + 0xa0);
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      pcVar4 = *(code **)(param_7 + 0x10);
      lVar3 = param_7;
    }
    (*pcVar4)(uVar5,uVar6,lVar3,uVar1,uVar2);
  }
LAB_108bc0cd0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc0d08; end: 108bc0d73; -[SCChatContentDeliveryLogItem .cxx_destruct] */

void FUN_108bc0d08(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc0d74; end: 108bc0d7f; -[SCConversationIdServices .cxx_destruct] */

void FUN_108bc0d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc0d80; end: 108bc0d87; -[SCDuplexServices composerDuplexClient] */

undefined8 FUN_108bc0d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc0d88; end: 108bc0db7; -[SCDuplexServices .cxx_destruct] */

void FUN_108bc0d88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc0db8; end: 108bc0dc3; -[SCMessagingExperimentServices .cxx_destruct] */

void FUN_108bc0db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc0dc4; end: 108bc0dcf; -[SCReceiveMessageLoggerServices .cxx_destruct] */

void FUN_108bc0dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc0dd0; end: 108bc0ebb; -[SCLoadMessageTimestamp initWithCoder:] */

undefined1 *
FUN_108bc0dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fda00;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc0ebc; end: 108bc0f6b; -[SCLoadMessageTimestamp initWithMediaId:step:startTimestampSeconds:endTimestampSeconds:timestampType:result:] */

undefined1 *
FUN_108bc0ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fda00;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc0f6c; end: 108bc0f8f; -[SCLoadMessageTimestamp copyWithZone:] */

undefined8 FUN_108bc0f6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc0f90; end: 108bc103f; -[SCLoadMessageTimestamp encodeWithCoder:] */

void FUN_108bc0f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ebbe58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eec0f8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110eec118);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110eec138);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110eec158);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110eec178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc1040; end: 108bc1107; -[SCLoadMessageTimestamp hash] */

undefined8 * FUN_108bc1040(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_50 = -lVar1;
  if (-1 < lVar1) {
    lStack_50 = lVar1;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  lVar1 = *(long *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  puVar4 = &uStack_58;
  uStack_58 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_108bc1208:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bc1214;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((puVar4[2] == param_3[2] && (puVar4[5] == param_3[5])) && (puVar4[6] == param_3[6])))) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar2 = dVar10 < dVar9;
      }
      if (bVar2) {
        dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
        dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar2 = dVar10 < dVar9;
        }
        if (bVar2) {
          puVar8 = (undefined8 *)puVar4[1];
          if (puVar8 != (undefined8 *)param_3[1]) {
            func_0x00010c071ae0();
            goto LAB_108bc1214;
          }
          goto LAB_108bc1208;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_108bc1214:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 108bc1108; end: 108bc122f; -[SCLoadMessageTimestamp isEqual:] */

long FUN_108bc1108(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc1208:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc1214;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
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
            goto LAB_108bc1214;
          }
          goto LAB_108bc1208;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108bc1214:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108bc1230; end: 108bc1237; -[SCLoadMessageTimestamp mediaId] */

undefined8 FUN_108bc1230(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1238; end: 108bc123f; -[SCLoadMessageTimestamp step] */

undefined8 FUN_108bc1238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc1240; end: 108bc1247; -[SCLoadMessageTimestamp startTimestampSeconds] */

undefined8 FUN_108bc1240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc1248; end: 108bc124f; -[SCLoadMessageTimestamp endTimestampSeconds] */

undefined8 FUN_108bc1248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bc1250; end: 108bc1257; -[SCLoadMessageTimestamp timestampType] */

undefined8 FUN_108bc1250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bc1258; end: 108bc125f; -[SCLoadMessageTimestamp result] */

undefined8 FUN_108bc1258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bc1260; end: 108bc126b; -[SCLoadMessageTimestamp .cxx_destruct] */

void FUN_108bc1260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc126c; end: 108bc1277; -[SCHomeScreenWidgetServices .cxx_destruct] */

void FUN_108bc126c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc1278; end: 108bc127f; -[SCCreativeToolsMemoriesResources creativeToolsABProvider] */

undefined8 FUN_108bc1278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1280; end: 108bc1287; -[SCCreativeToolsMemoriesResources stickerInjector] */

undefined8 FUN_108bc1280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc1288; end: 108bc128f; -[SCCreativeToolsMemoriesResources ctpItemViewService] */

undefined8 FUN_108bc1288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc1290; end: 108bc12cb; -[SCCreativeToolsMemoriesResources .cxx_destruct] */

void FUN_108bc1290(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc12cc; end: 108bc12d3; -[SCSearchTagsService searchTagsProvider] */

undefined8 FUN_108bc12cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc12d4; end: 108bc12df; -[SCSearchTagsService .cxx_destruct] */

void FUN_108bc12d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc12e0; end: 108bc1367; -[SCSearchTagsFilePaths initWithSearchTagFilePath:searchTagsDataType:] */

undefined1 *
FUN_108bc12e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fda20;
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



/* Entry: 108bc1368; end: 108bc138b; -[SCSearchTagsFilePaths copyWithZone:] */

undefined8 FUN_108bc1368(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc138c; end: 108bc13ff; -[SCSearchTagsFilePaths hash] */

undefined8 * FUN_108bc138c(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bc1484;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108bc1484;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108bc1484;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108bc1484:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108bc1400; end: 108bc149f; -[SCSearchTagsFilePaths isEqual:] */

long FUN_108bc1400(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc1484;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108bc1484;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108bc1484;
    }
  }
  lVar3 = 1;
LAB_108bc1484:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc14a0; end: 108bc14a7; -[SCSearchTagsFilePaths searchTagFilePath] */

undefined8 FUN_108bc14a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc14a8; end: 108bc14af; -[SCSearchTagsFilePaths searchTagsDataType] */

undefined8 FUN_108bc14a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc14b0; end: 108bc14bb; -[SCSearchTagsFilePaths .cxx_destruct] */

void FUN_108bc14b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc14bc; end: 108bc14c3; -[SCBitmojiStickerInjectorServices bitmojiStickerInjector] */

undefined8 FUN_108bc14bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc14c4; end: 108bc14cb; -[SCBitmojiStickerInjectorServices bitmojiStickerInjectorConfig] */

undefined8 FUN_108bc14c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc14cc; end: 108bc14fb; -[SCBitmojiStickerInjectorServices .cxx_destruct] */

void FUN_108bc14cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc14fc; end: 108bc1503; -[SCCustomStickerInjectorServices customStickerInjector] */

undefined8 FUN_108bc14fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1504; end: 108bc150b; -[SCCustomStickerInjectorServices customStickerInjectorConfig] */

undefined8 FUN_108bc1504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc150c; end: 108bc153b; -[SCCustomStickerInjectorServices .cxx_destruct] */

void FUN_108bc150c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc153c; end: 108bc1543; -[SCEmojiStickerInjectorServices emojiStickerInjector] */

undefined8 FUN_108bc153c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1544; end: 108bc154b; -[SCEmojiStickerInjectorServices emojiStickerInjectorConfig] */

undefined8 FUN_108bc1544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc154c; end: 108bc157b; -[SCEmojiStickerInjectorServices .cxx_destruct] */

void FUN_108bc154c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc157c; end: 108bc1583; -[SCGiphyStickerInjectorServices giphyStickerInjector] */

undefined8 FUN_108bc157c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1584; end: 108bc158b; -[SCGiphyStickerInjectorServices giphyStickerInjectorConfig] */

undefined8 FUN_108bc1584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc158c; end: 108bc15bb; -[SCGiphyStickerInjectorServices .cxx_destruct] */

void FUN_108bc158c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc15bc; end: 108bc15eb; -[SCAltitudeStickerInjectorServices .cxx_destruct] */

void FUN_108bc15bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc15ec; end: 108bc161b; -[SCAttachmentStickerInjectorServices .cxx_destruct] */

void FUN_108bc15ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc161c; end: 108bc164b; -[SCBatteryStickerInjectorServices .cxx_destruct] */

void FUN_108bc161c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc164c; end: 108bc167b; -[SCCameraRollStickerInjectorServices .cxx_destruct] */

void FUN_108bc164c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc167c; end: 108bc16ab; -[SCDateTimeStickerInjectorServices .cxx_destruct] */

void FUN_108bc167c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc16ac; end: 108bc16db; -[SCMentionStickerInjectorServices .cxx_destruct] */

void FUN_108bc16ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc16dc; end: 108bc170b; -[SCPollStickerInjectorServices .cxx_destruct] */

void FUN_108bc16dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc170c; end: 108bc173b; -[SCQuestionStickerInjectorServices .cxx_destruct] */

void FUN_108bc170c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc173c; end: 108bc176b; -[SCSnapcodeStickerInjectorServices .cxx_destruct] */

void FUN_108bc173c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc176c; end: 108bc179b; -[SCStoryInviteStickerInjectorServices .cxx_destruct] */

void FUN_108bc176c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc179c; end: 108bc17cb; -[SCUVIndexStickerInjectorServices .cxx_destruct] */

void FUN_108bc179c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc17cc; end: 108bc17fb; -[SCVenueStickerInjectorServices .cxx_destruct] */

void FUN_108bc17cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


