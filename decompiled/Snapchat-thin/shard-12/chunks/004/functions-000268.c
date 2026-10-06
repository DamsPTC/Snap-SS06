/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10909197c; end: 1090919ef; -[SCAVFoundationNeoPlayerOutput _discardVideoRenderer] */

void FUN_10909197c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  func_0x00010be599e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093360();
  func_0x00010bdc3520();
  func_0x000109093180();
  func_0x000109093424(param_1);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1090919f0; end: 109091a13; -[SCAVFoundationNeoPlayerOutput videoView] */

void FUN_1090919f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000109093274();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109091a14; end: 109091a1b; -[SCAVFoundationNeoPlayerOutput videoGravity] */

void FUN_109091a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_videoGravity_112684320);
  return;
}



/* Entry: 109091a1c; end: 109091a23; -[SCAVFoundationNeoPlayerOutput setVideoGravity:] */

void FUN_109091a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2218b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setVideoGravity__112666050);
  return;
}



/* Entry: 109091a24; end: 109091a2b; -[SCAVFoundationNeoPlayerOutput timebase] */

void FUN_109091a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_timebase_112679998);
  return;
}



/* Entry: 109091a2c; end: 109091a33; -[SCAVFoundationNeoPlayerOutput rate] */

void FUN_109091a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_rate_112625990);
  return;
}



/* Entry: 109091a34; end: 109091b8b; -[SCAVFoundationNeoPlayerOutput setRate:] */

void FUN_109091a34(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (ABS(*(float *)(param_2 + 100) - (float)param_1) < 1.1920929e-07) {
    return;
  }
  *(float *)(param_2 + 100) = (float)param_1;
  func_0x000109093294();
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e800(param_1);
  func_0x000109093178();
  func_0x000109093170();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110f1f938);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  func_0x0001090931bc();
  func_0x000109093178();
  func_0x00010c1e7640(param_1,*(undefined8 *)(param_2 + 0x20));
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093370();
  func_0x0001090931bc();
  func_0x000109093178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109091b8c; end: 109091b93; -[SCAVFoundationNeoPlayerOutput videoEnabled] */

undefined1 FUN_109091b8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 109091b94; end: 109091c3f; -[SCAVFoundationNeoPlayerOutput setVideoEnabled:] */

void FUN_109091b94(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x59) != param_3) {
    func_0x00010be599e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109093408();
    if (param_3 == 0) {
      func_0x00010bdc3520();
      func_0x000109093178();
      if (*(long *)(param_1 + 0x30) != 0) {
        func_0x00010c12f100(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      func_0x00010bdc3520();
      func_0x000109093178();
      lVar1 = param_1;
      func_0x00010be212e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x00010befc980(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
      }
      func_0x000109093178();
    }
    *(char *)(param_1 + 0x59) = (char)param_3;
  }
  return;
}



/* Entry: 109091c40; end: 109091c47; -[SCAVFoundationNeoPlayerOutput audioEnabled] */

undefined1 FUN_109091c40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5a);
}



/* Entry: 109091c48; end: 109091cc3; -[SCAVFoundationNeoPlayerOutput setAudioEnabled:] */

void FUN_109091c48(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x5a) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x5a) = (char)param_3;
  lVar1 = param_1;
  func_0x00010be20fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x5a) == '\x01') {
      func_0x00010bef6f80(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    }
    else {
      func_0x00010c12b3e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109091cc4; end: 109091cfb; -[SCAVFoundationNeoPlayerOutput getOutputStatus] */

uint FUN_109091cc4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  func_0x00010bfdcf60();
  func_0x00010c0807a0();
  uVar2 = 0x100;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  return uVar2 | uVar1;
}



/* Entry: 109091cfc; end: 109091d03; -[SCAVFoundationNeoPlayerOutput canEnqueueAudioSampleBuffer] */

void FUN_109091cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_isReadyForMoreMediaData_1125fc938);
  return;
}



/* Entry: 109091d04; end: 109091d37; -[SCAVFoundationNeoPlayerOutput canEnqueueVideoSampleBuffer] */

byte FUN_109091d04(long param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c07bca0();
  if (iVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x5b);
  }
  return bVar2 & 1;
}



/* Entry: 109091d38; end: 109091db7; -[SCAVFoundationNeoPlayerOutput cancelReadyToEnqueueAudioSampleBuffer] */

void FUN_109091d38(long param_1)

{
  func_0x00010be599e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093358();
  func_0x00010bdc3520();
  func_0x000109093170();
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c080();
  func_0x000109093178();
  func_0x000109093170();
                    /* WARNING: Could not recover jumptable at 0x00010c256810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_stopRequestingMediaData_112673428);
  return;
}



/* Entry: 109091db8; end: 109091e4f; -[SCAVFoundationNeoPlayerOutput cancelReadyToEnqueueVideoSampleBuffer] */

void FUN_109091db8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be599e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093358();
  func_0x00010bdc3520();
  func_0x000109093170();
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c080();
  func_0x000109093178();
  func_0x000109093170();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c256810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_stopRequestingMediaData_112673428);
  return;
}



/* Entry: 109091e50; end: 109092003; -[SCAVFoundationNeoPlayerOutput enqueueAudioSampleBuffer:] */

void FUN_109091e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_58 [24];
  
  func_0x000109093294();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _CMSampleBufferGetPresentationTimeStamp(auStack_58,param_3);
  FUN_1090c1c24();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f1f998);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090931a8();
  func_0x0001090931e8();
  func_0x0001090931bc();
  func_0x000109093170();
  func_0x0001090931f8();
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78120();
  func_0x0001090931bc();
  func_0x000109093170();
  func_0x00010be20fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf963c0();
  func_0x000109093170();
  func_0x00010be599e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093358();
  func_0x00010bdc3520();
  func_0x000109093170();
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093370();
  func_0x000109093178();
  func_0x000109093170();
  func_0x0001090931f8();
  func_0x00010c1003c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec6c0();
  func_0x000109093178();
  func_0x000109093170();
  _objc_loadWeakRetained(param_1 + 8);
  func_0x00010c100da0();
  func_0x000109093170();
  return;
}



/* Entry: 109092004; end: 109092117; -[SCAVFoundationNeoPlayerOutput _scheduleVideoRevealIfNeeded] */

void FUN_109092004(void)

{
  int iVar1;
  undefined1 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000109093410();
  if ((((*(char *)(unaff_x19 + 0x42) == '\x01') && ((*(byte *)(unaff_x19 + 0x40) & 1) == 0)) &&
      (*(char *)(unaff_x19 + 0x41) == '\x01')) && (*(long *)(unaff_x19 + 0x30) != 0)) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x00010bfdb100();
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x00010be599e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000109093360();
      func_0x00010bdc3520();
      func_0x000109093180();
      uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
      func_0x0001090931f0();
      puVar2 = auStack_38;
      _objc_initWeak(puVar2);
      func_0x000109093338();
      func_0x000109093160();
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_109092118;
      puStack_50 = &UNK_110896d48;
      uStack_48 = uVar3;
      func_0x0001090931f0();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x000107c27d84(puVar2,PTR___dispatch_main_q_11034be20,auStack_68);
      _objc_destroyWeak(auStack_40);
      func_0x00010909327c();
      func_0x000109093180();
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 109092118; end: 1090921cf;  */

void FUN_109092118(long param_1)

{
  ulong uVar1;
  
  func_0x00010c1d4bc0(0x3f800000,*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be599e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109093360();
    func_0x00010bdc3520();
    func_0x000109093180();
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_opt_respondsToSelector();
    func_0x000109093180();
    if ((uVar1 & 1) != 0) {
      _objc_loadWeakRetained(param_1 + 8);
      func_0x00010c100dc0();
      func_0x000109093180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090921d0; end: 10909245f; -[SCAVFoundationNeoPlayerOutput enqueueVideoSampleBuffer:] */

void FUN_1090921d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [16];
  
  func_0x000109093294();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _CMSampleBufferGetPresentationTimeStamp(auStack_80,param_3);
  FUN_1090c1c24();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090931a8();
  func_0x0001090931e8();
  func_0x0001090931bc();
  func_0x000109093170();
  FUN_1090c1c88(param_3,auStack_50,auStack_80);
  func_0x0001090931f8();
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf781a0();
  func_0x0001090931bc();
  func_0x000109093170();
  lVar2 = param_1;
  func_0x00010be212e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  func_0x00010be9ba00(param_1);
  func_0x00010bf963c0(lVar2);
  func_0x00010be599e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x0001090931bc();
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093370();
  func_0x0001090931e8();
  func_0x0001090931bc();
  func_0x0001090931f8();
  func_0x00010c1003c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec6c0();
  func_0x0001090931bc();
  func_0x0001090931c4();
  _objc_loadWeakRetained(param_1 + 8);
  func_0x00010c100da0();
  func_0x0001090931c4();
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) == '\x01')) {
    _CMSampleBufferGetSampleAttachmentsArray(param_3,0);
    if ((param_3 != 0) && (lVar2 = param_3, _CFArrayGetCount(), 0 < lVar2)) {
      _CFArrayGetValueAtIndex(param_3,0);
      _CFDictionaryGetValue();
      if (param_3 == *(long *)PTR__kCFBooleanTrue_11034ab90) goto LAB_1090923e0;
    }
    *(undefined1 *)(param_1 + 0x72) = 0;
    func_0x000109093338();
    func_0x000109093160();
    func_0x0001090931d4(FUN_109092460,0xc2000000);
    func_0x000107c27d84();
  }
LAB_1090923e0:
  func_0x000109093170();
  return;
}



/* Entry: 109092460; end: 10909248b;  */

void FUN_109092460(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000109093348();
  func_0x0001090932e0();
  func_0x0001090932ec();
  uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909248c; end: 1090925ab; -[SCAVFoundationNeoPlayerOutput onReadyToEnqueueAudioSampleBuffer:queue:] */

void FUN_10909248c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000109093284();
  func_0x0001090931f0();
  func_0x00010be599e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x0001090931c4();
  func_0x000109093448();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090932d0();
  func_0x0001090931e8();
  func_0x0001090931bc();
  func_0x00010be20fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093474();
  func_0x0001090931bc();
  func_0x000109093448();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093370();
  func_0x0001090931e8();
  func_0x0001090931bc();
  func_0x000109093180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090925ac; end: 1090926ff; -[SCAVFoundationNeoPlayerOutput onReadyToEnqueueVideoSampleBuffer:queue:] */

void FUN_1090925ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000109093284();
  func_0x0001090931f0();
  lVar1 = param_1;
  func_0x00010be212e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    func_0x00010be599e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x0001090931bc();
    _objc_loadWeakRetained(param_1 + 0x10);
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090932d0();
    func_0x00010909328c();
    func_0x0001090931bc();
    func_0x000109093474(lVar1);
    _objc_loadWeakRetained(param_1 + 0x10);
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    func_0x00010909328c();
  }
  else {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    func_0x00010909331c(uVar3);
    func_0x0001090931f0();
    *(undefined8 *)(param_1 + 0x50) = param_4;
  }
  func_0x0001090931bc();
  func_0x000109093178();
  func_0x000109093180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109092700; end: 10909284f; -[SCAVFoundationNeoPlayerOutput seekToTime:] */

void FUN_109092700(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auStack_60 [32];
  
  func_0x000109093294();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000109093480();
  _CMTimeGetSeconds(auStack_60);
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090931a8();
  func_0x0001090931e8();
  func_0x0001090931bc();
  func_0x000109093170();
  func_0x000109093480(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c214bc0();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb2f20();
  func_0x000109093378();
  func_0x00010c077480();
  if (iVar2 == 0) {
    func_0x000109093160();
    func_0x0001090931d4(FUN_109092850,0xc2000000);
    func_0x000109093310();
    func_0x000107c27da4();
  }
  else {
    func_0x00010bfb2f20(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010c16c400(param_1);
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909322c();
  func_0x0001090931c4();
  func_0x000109093170();
  return;
}



/* Entry: 109092850; end: 10909285b;  */

void FUN_109092850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_flush_1125ca570);
  return;
}



/* Entry: 10909285c; end: 10909293f; -[SCAVFoundationNeoPlayerOutput reset] */

void FUN_10909285c(long param_1)

{
  func_0x00010bfb2f20(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfb2fa0(*(undefined8 *)(param_1 + 0x30));
  func_0x0001090932d8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090932d0();
  func_0x0001090931c4();
  func_0x000109093180();
  func_0x00010c1e7660(0,*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 100) = 0;
  func_0x0001090932d8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909322c();
  func_0x0001090931c4();
  func_0x000109093180();
  _objc_storeWeak(param_1 + 0x10,0);
  return;
}



/* Entry: 109092940; end: 109092947; -[SCAVFoundationNeoPlayerOutput muted] */

undefined1 FUN_109092940(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



/* Entry: 109092948; end: 10909295b; -[SCAVFoundationNeoPlayerOutput setMuted:] */

void FUN_109092948(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5c) = param_3;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x28),PTR_s_setMuted__1126503d0);
    return;
  }
  return;
}



/* Entry: 10909295c; end: 109092963; -[SCAVFoundationNeoPlayerOutput volume] */

undefined4 FUN_10909295c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



/* Entry: 109092964; end: 109092977; -[SCAVFoundationNeoPlayerOutput setVolume:] */

void FUN_109092964(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x60) = param_1;
  if (*(long *)(param_2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x28),PTR_s_setVolume__112666a90);
    return;
  }
  return;
}



/* Entry: 109092978; end: 109092a77; -[SCAVFoundationNeoPlayerOutput supportsCodec:] */

ulong FUN_109092978(ulong param_1)

{
  ulong uVar1;
  
  func_0x000109093294();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_109094a04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b680();
  uVar1 = param_1;
  func_0x0001090931bc();
  func_0x0001090931c4();
  func_0x000109093170();
  if ((param_1 & 1) == 0) {
    func_0x000109093448();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    FUN_109094c84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b680();
    func_0x0001090931c4();
    func_0x000109093178();
    func_0x000109093170();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109092a78; end: 109092a7f; -[SCAVFoundationNeoPlayerOutput hasSufficientVideoDataForReliablePlayback] */

void FUN_109092a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdcf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_hasSufficientMediaDataForReliabl_1125d4d90);
  return;
}



/* Entry: 109092a80; end: 109092a9f; -[SCAVFoundationNeoPlayerOutput isSynchronizerAdvancing] */

bool FUN_109092a80(float param_1,long param_2)

{
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x20));
  return 0.0 < param_1;
}



/* Entry: 109092aa0; end: 109092bbb; -[SCAVFoundationNeoPlayerOutput setInstruments:] */

void FUN_109092aa0(void)

{
  int iVar1;
  ulong unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x000109093200();
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090931f8();
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x0001090931bc();
  func_0x0001090931c4();
  func_0x000109093178();
  if ((unaff_x19 & 1) == 0) {
    func_0x00010c09faa0(*(undefined8 *)(unaff_x20 + 0x38));
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x000109093368();
    iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x38);
    func_0x00010c280b40();
    if (lVar2 == 0) {
      func_0x000109093424();
    }
    else {
      func_0x000109093188();
      if (iVar1 != 0) {
        func_0x00010c149740(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x000109093160();
        func_0x000109093394(FUN_109092bbc,0xc2000000);
        func_0x00010c09c6e0();
        func_0x0001090931c4();
      }
    }
    func_0x000109093178();
  }
  _objc_storeWeak(unaff_x20 + 0x10);
  func_0x000109093170();
  return;
}



/* Entry: 109092bbc; end: 109092c47;  */

void FUN_109092bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000109093238();
  puVar1 = PTR_PTR_1126dd348;
  _objc_alloc(PTR_PTR_1126dd348);
  func_0x0001090933fc();
  func_0x000109093440();
  func_0x00010909342c();
  func_0x000109093438();
  func_0x0001090933ac();
  func_0x0001090932f8();
  func_0x00010c169ce0(*(undefined8 *)(unaff_x20 + 0x20),param_2,puVar1);
  func_0x000109093178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 109092c48; end: 109092cef; -[SCAVFoundationNeoPlayerOutput setVideoTransform:videoSize:] */

void FUN_109092c48(void)

{
  func_0x000109093160();
  func_0x000109093310();
  func_0x000107c27d8c();
  return;
}



/* Entry: 109092cf0; end: 109092e2b; -[SCAVFoundationNeoPlayerOutput loadVideoRendererPerformanceMetrics:] */

void FUN_109092cf0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000109093284();
  iVar1 = (int)lVar3;
  if (param_3 == 0) goto LAB_109092ddc;
  func_0x000109093188();
  if (iVar1 == 0) {
LAB_109092db8:
    puVar2 = PTR_PTR_1126dd348;
    _objc_alloc(PTR_PTR_1126dd348);
    func_0x0001090932a4();
    func_0x00010c0e7860(param_3,param_2,puVar2);
  }
  else {
    func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x38));
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x0001090931f0();
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x38));
    if (lVar3 == 0) goto LAB_109092db8;
    func_0x00010bf08c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149740(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010909325c();
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_109092e2c;
    puStack_58 = &UNK_110ad74e8;
    func_0x000109093368();
    lStack_50 = param_1;
    func_0x000109093274();
    lStack_48 = param_3;
    func_0x00010c09c6e0(lVar3,param_2,auStack_70);
    func_0x0001090931bc();
    func_0x00010909327c();
    func_0x000109093450();
    func_0x000109093178();
  }
  func_0x000109093180();
LAB_109092ddc:
  func_0x000109093170();
  return;
}



/* Entry: 109092e2c; end: 109092f6b;  */

void FUN_109092e2c(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  int iVar10;
  int iVar11;
  
  func_0x000109093238();
  puVar3 = PTR_PTR_1126dd348;
  _objc_alloc(PTR_PTR_1126dd348);
  func_0x0001090932a4();
  if (unaff_x19 != 0) {
    puVar3 = PTR_PTR_1126dd348;
    _objc_alloc();
    lVar4 = unaff_x19;
    func_0x00010c0dec20();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010bf52780(uVar5);
    iVar1 = iVar10;
    func_0x000109093440();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010bf8ab60(uVar6);
    func_0x00010c276900();
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010c2765a0(uVar7);
    iVar2 = iVar11;
    func_0x000109093438();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010bf86980(uVar8);
    func_0x00010c275ec0();
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010c275ee0(uVar9);
    iVar10 = (int)uVar5;
    iVar11 = (int)uVar7;
    func_0x00010c006060(puVar3,param_3,(int)lVar4 - iVar10,iVar1 - (int)uVar6,
                        (int)unaff_x19 - iVar11,iVar2 - (int)uVar8,
                        (int)(param_1 * 1000.0 - (double)(int)uVar9));
    func_0x000109093178();
  }
  func_0x00010c0e7860(*(undefined8 *)(unaff_x20 + 0x28),param_3,puVar3);
  func_0x000109093178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 109092f6c; end: 10909300b; -[SCAVFoundationNeoPlayerOutput clear] */

void FUN_109092f6c(long param_1)

{
  int iVar1;
  long lVar2;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x000109093274();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c280b40();
  if (lVar2 == 0) {
    func_0x000109093424(param_1);
  }
  else {
    func_0x000109093188();
    if (iVar1 != 0) {
      func_0x00010c149740(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109093160();
      func_0x000109093394(FUN_10909300c,0xc2000000);
      func_0x00010c09c6e0();
      func_0x000109093178();
    }
  }
  func_0x000109093170();
  return;
}



/* Entry: 10909300c; end: 109093097;  */

void FUN_10909300c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000109093238();
  puVar1 = PTR_PTR_1126dd348;
  _objc_alloc(PTR_PTR_1126dd348);
  func_0x0001090933fc();
  func_0x000109093440();
  func_0x00010909342c();
  func_0x000109093438();
  func_0x0001090933ac();
  func_0x0001090932f8();
  func_0x00010c169ce0(*(undefined8 *)(unaff_x20 + 0x20),param_2,puVar1);
  func_0x000109093178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 109093098; end: 1090930a3; -[SCAVFoundationNeoPlayerOutput audioSessionWasReset] */

byte FUN_109093098(long param_1)

{
  return *(byte *)(param_1 + 0x98) & 1;
}



/* Entry: 1090930a4; end: 1090930ab; -[SCAVFoundationNeoPlayerOutput setAudioSessionWasReset:] */

void FUN_1090930a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 1090930ac; end: 1090930b7; -[SCAVFoundationNeoPlayerOutput approximateBaselinePerfMetrics] */

void FUN_1090930ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}



/* Entry: 1090930b8; end: 1090930bf; -[SCAVFoundationNeoPlayerOutput setApproximateBaselinePerfMetrics:] */

void FUN_1090930b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1090930c0; end: 10909313f; -[SCAVFoundationNeoPlayerOutput .cxx_destruct] */

void FUN_1090930c0(long param_1)

{
  func_0x000109093254(param_1 + 0xa0);
  func_0x000109093254(param_1 + 0x90);
  func_0x000109093254(param_1 + 0x88);
  func_0x000109093254(param_1 + 0x78);
  func_0x000109093254(param_1 + 0x50);
  func_0x000109093254(param_1 + 0x48);
  func_0x000109093254(param_1 + 0x38);
  func_0x000109093254(param_1 + 0x30);
  func_0x000109093254(param_1 + 0x28);
  func_0x000109093254(param_1 + 0x20);
  func_0x000109093254(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109093140; end: 1090934cf;  */

void FUN_109093140(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090934d0; end: 10909367f; -[SCAVFoundationNeoPlayerSampleBufferProvider initWithFilePath:mediaQueue:] */

undefined8 *
FUN_1090934d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  func_0x000109094430();
  puStack_48 = PTR_PTR_1127003e8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000109094430();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000109094438(uVar2);
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bdc2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000109094438(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000109094438(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000109094438(uVar2);
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[0xd] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    puVar1[0xc] = uVar2;
    puVar1[0xe] = *(undefined8 *)(puVar3 + 0x10);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = puVar1[0x11];
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf850c0(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  func_0x000109094420();
  func_0x000109094440();
  return puVar1;
}



/* Entry: 109093680; end: 1090936ab;  */

void FUN_109093680(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ec00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090936ac; end: 1090936ef; -[SCAVFoundationNeoPlayerSampleBufferProvider dealloc] */

void FUN_1090936ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3d7a0();
  puStack_28 = PTR_PTR_1127003e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090936f0; end: 109093777; -[SCAVFoundationNeoPlayerSampleBufferProvider _onError:] */

void FUN_1090936f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x000109094430();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x00010909447c();
  _objc_release(uVar1);
  func_0x0001090944c8();
  func_0x000109094420();
  *(undefined1 *)(param_1 + 0x52) = 1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149640();
  func_0x000109094440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109093778; end: 109093a9f; -[SCAVFoundationNeoPlayerSampleBufferProvider _loadTrackInfos] */

void FUN_109093778(undefined8 param_1,double param_2,long param_3)

{
  undefined1 in_ZR;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined *puVar8;
  ulong unaff_x23;
  undefined *puVar9;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  double dVar10;
  double dVar11;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  
  func_0x00010909448c();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_80 = extraout_x8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar2 = *(ulong *)(param_3 + 0x10);
  lStack_1c0 = param_3;
  func_0x00010c2791a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar2;
  func_0x00010909445c();
  uStack_198 = uVar2;
  if (uVar2 != 0) {
    lStack_1a0 = *plStack_130;
    uStack_1a8 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
    uStack_1b8 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
    do {
      unaff_x23 = 0;
      do {
        dVar11 = param_2;
        if (*plStack_130 != lStack_1a0) {
          _objc_enumerationMutation(uStack_1b0);
          dVar11 = param_2;
        }
        unaff_x26 = *(ulong *)(lStack_138 + unaff_x23 * 8);
        unaff_x25 = unaff_x26;
        func_0x00010bfb5b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb1920();
        func_0x000109094420();
        uVar2 = unaff_x26;
        func_0x00010c0c6c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        func_0x000109094420();
        if ((uVar2 & 1) == 0) {
          func_0x00010c0c6c20(unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          func_0x000109094420();
        }
        puVar8 = PTR_PTR_1126dd350;
        _objc_alloc(PTR_PTR_1126dd350);
        func_0x00010bf529e0(puVar1);
        unaff_x21 = unaff_x26;
        func_0x00010c277e40();
        if (unaff_x26 == 0) {
          dVar10 = 0.0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x00010c26f620(&uStack_190,unaff_x26);
        }
        _CMTimeRangeGetEnd(auStack_158,&uStack_190);
        if (unaff_x25 == 0) {
          unaff_x24 = 0;
        }
        else {
          unaff_x24 = unaff_x25;
          _CMFormatDescriptionGetMediaSubType();
        }
        unaff_x22 = (ulong)(unaff_x26 == 0);
        func_0x00010c0d5d20(unaff_x26);
        func_0x00010c0d5d20(unaff_x26);
        param_2 = dVar11;
        if (unaff_x26 == 0) {
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x00010c106f40(&uStack_190,unaff_x26);
        }
        lStack_1f0 = (long)dVar10;
        lStack_1e8 = (long)dVar11;
        uStack_1d0 = 0;
        dVar10 = 0.0;
        puStack_1e0 = &uStack_190;
        uStack_1d8 = unaff_x25;
        func_0x00010c055be0(puVar8);
        func_0x00010befa120(puVar1);
        func_0x000109094420();
        unaff_x23 = unaff_x23 + 1;
        in_ZR = unaff_x23 == uStack_198;
      } while (unaff_x23 < uStack_198);
      uVar2 = uStack_1b0;
      func_0x00010909445c();
      uStack_198 = uVar2;
    } while (uVar2 != 0);
  }
  _objc_release(uStack_1b0);
  lVar3 = lStack_1c0;
  func_0x000109094430();
  _objc_sync_enter(lVar3);
  *(undefined1 *)(lVar3 + 0x50) = 1;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined **)(lVar3 + 0x40) = puVar1;
  func_0x000109094438(uVar7);
  func_0x0001090944c8();
  func_0x000109094420();
  lVar3 = lStack_1c0;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1496a0();
  func_0x000109094420();
  func_0x000109094440();
  func_0x000109094448(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090944c8();
    lVar5 = lVar4;
    __Unwind_Resume();
    pcStack_1f8 = FUN_109093aa0;
    puVar1 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    uStack_240 = unaff_x26;
    uStack_238 = unaff_x25;
    uStack_230 = unaff_x24;
    uStack_228 = unaff_x23;
    uStack_220 = unaff_x22;
    uStack_218 = unaff_x21;
    lStack_210 = lVar3;
    lStack_208 = lVar4;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_alloc();
    lStack_248 = 0;
    func_0x00010bff4200();
    lVar3 = lStack_248;
    func_0x00010909447c();
    if (lVar3 == 0) {
      uStack_2b8 = *(undefined8 *)(lVar5 + 0x68);
      uStack_2c0 = *(undefined8 *)(lVar5 + 0x60);
      uStack_2b0 = *(undefined8 *)(lVar5 + 0x70);
      uStack_288 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
      uStack_290 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
      uStack_280 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
      _CMTimeRangeMake(&uStack_278,&uStack_2c0,&uStack_290);
      uStack_2b8 = uStack_270;
      uStack_2c0 = uStack_278;
      uStack_2a8 = uStack_260;
      uStack_2b0 = uStack_268;
      uStack_298 = uStack_250;
      uStack_2a0 = uStack_258;
      func_0x00010c214ec0(puVar1);
      if (*(long *)(lVar5 + 0x18) == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
        func_0x00010c277e80();
        func_0x00010c278b40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
        _objc_alloc();
        func_0x00010c054b20();
        func_0x00010befa4c0(puVar1);
        _objc_release(uVar7);
      }
      if (*(long *)(lVar5 + 0x20) == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
        func_0x00010c277e80();
        func_0x00010c278b40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
        _objc_alloc();
        func_0x00010c054b20();
        func_0x00010befa4c0(puVar1);
        _objc_release(uVar7);
      }
      puVar6 = puVar1;
      func_0x00010c250140();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010bf987e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be690a0(lVar5);
        _objc_release(puVar1);
      }
      else {
        func_0x000109094430();
        uVar7 = *(undefined8 *)(lVar5 + 0x28);
        *(undefined **)(lVar5 + 0x28) = puVar1;
        _objc_release(uVar7);
        _objc_retain(puVar8);
        uVar7 = *(undefined8 *)(lVar5 + 0x30);
        *(undefined **)(lVar5 + 0x30) = puVar8;
        _objc_release(uVar7);
        _objc_retain(puVar9);
        uVar7 = *(undefined8 *)(lVar5 + 0x38);
        *(undefined **)(lVar5 + 0x38) = puVar9;
        _objc_release(uVar7);
        *(undefined1 *)(lVar5 + 0x51) = 0;
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    else {
      func_0x00010be690a0(lVar5);
    }
    func_0x000109094420();
    func_0x000109094440();
    return;
  }
  return;
}



/* Entry: 109093aa0; end: 109093cb7; -[SCAVFoundationNeoPlayerSampleBufferProvider _startAssetReader] */

void FUN_109093aa0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  lStack_58 = 0;
  func_0x00010bff4200();
  lVar1 = lStack_58;
  func_0x00010909447c();
  if (lVar1 == 0) {
    uStack_c8 = *(undefined8 *)(param_1 + 0x68);
    uStack_d0 = *(undefined8 *)(param_1 + 0x60);
    uStack_c0 = *(undefined8 *)(param_1 + 0x70);
    uStack_98 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_90 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    _CMTimeRangeMake(&uStack_88,&uStack_d0,&uStack_a0);
    uStack_c8 = uStack_80;
    uStack_d0 = uStack_88;
    uStack_b8 = uStack_70;
    uStack_c0 = uStack_78;
    uStack_a8 = uStack_60;
    uStack_b0 = uStack_68;
    func_0x00010c214ec0(puVar2);
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c277e80();
      func_0x00010c278b40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
      _objc_alloc();
      func_0x00010c054b20();
      func_0x00010befa4c0(puVar2);
      _objc_release(uVar4);
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c277e80();
      func_0x00010c278b40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
      _objc_alloc();
      func_0x00010c054b20();
      func_0x00010befa4c0(puVar2);
      _objc_release(uVar4);
    }
    puVar3 = puVar2;
    func_0x00010c250140();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010bf987e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be690a0(param_1);
      _objc_release(puVar2);
    }
    else {
      func_0x000109094430();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar2;
      _objc_release(uVar4);
      _objc_retain(puVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar5;
      _objc_release(uVar4);
      _objc_retain(puVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar6;
      _objc_release(uVar4);
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be690a0(param_1);
  }
  func_0x000109094420();
  func_0x000109094440();
  return;
}



/* Entry: 109093cb8; end: 109093ceb; -[SCAVFoundationNeoPlayerSampleBufferProvider _invalidateAssetReader] */

void FUN_109093cb8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x51) = 1;
  func_0x0001090944b0(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109093cec; end: 109093d43; -[SCAVFoundationNeoPlayerSampleBufferProvider _ensureAssetReaderReady] */

undefined8 FUN_109093cec(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x52) & 1) != 0) {
    return 0;
  }
  if (((*(long *)(param_1 + 0x28) == 0) || (*(char *)(param_1 + 0x51) == '\x01')) &&
     (func_0x00010bebf720(param_1), (*(byte *)(param_1 + 0x52) & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109093d44; end: 109093d63; -[SCAVFoundationNeoPlayerSampleBufferProvider trackInfos] */

void FUN_109093d44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010909447c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109093d64; end: 109093d8f; -[SCAVFoundationNeoPlayerSampleBufferProvider loadedTrackInfos] */

undefined1 FUN_109093d64(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x00010909449c();
  func_0x0001090944b8();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x50);
  func_0x0001090944c0();
  func_0x000109094440();
  return uVar1;
}



/* Entry: 109093d90; end: 109093dbf; -[SCAVFoundationNeoPlayerSampleBufferProvider loadedTimeRanges] */

void FUN_109093d90(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010909449c();
  func_0x0001090944b8();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
  func_0x000109094430();
  func_0x0001090944c0();
  func_0x000109094440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109093dc0; end: 109093def; -[SCAVFoundationNeoPlayerSampleBufferProvider error] */

void FUN_109093dc0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010909449c();
  func_0x0001090944b8();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  func_0x000109094430();
  func_0x0001090944c0();
  func_0x000109094440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109093df0; end: 109093ef3; -[SCAVFoundationNeoPlayerSampleBufferProvider _getTrackForTrackId:] */

/* WARNING: Possible PIC construction at 0x000109093f44: Changing call to branch */

void FUN_109093df0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  ulong unaff_x19;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  puVar5 = &uStack_120;
  func_0x00010909448c();
  uStack_58 = extraout_x8;
  if (param_3 == 0) {
    uVar7 = 0;
    iVar4 = 0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x19 = *(ulong *)(param_1 + 0x40);
    func_0x00010909447c();
    puVar6 = auStack_d8;
    uVar2 = unaff_x19;
    func_0x00010909445c();
    iVar4 = (int)puVar5;
    param_4 = (int)puVar6;
    if (uVar2 != 0) {
      lVar8 = *plStack_110;
      do {
        uVar9 = 0;
        do {
          if (*plStack_110 != lVar8) {
            _objc_enumerationMutation(unaff_x19);
          }
          uVar7 = *(undefined8 *)(lStack_118 + uVar9 * 8);
          uVar3 = uVar7;
          func_0x00010c277e80();
          iVar4 = (int)puVar5;
          param_4 = (int)puVar6;
          in_ZR = (int)uVar3 == param_3;
          if ((bool)in_ZR) {
            _objc_retain(uVar7);
            goto LAB_109093eb8;
          }
          uVar9 = uVar9 + 1;
          in_ZR = uVar9 == uVar2;
        } while (uVar9 < uVar2);
        puVar6 = auStack_d8;
        uVar2 = unaff_x19;
        puVar5 = &uStack_120;
        func_0x00010909445c();
        iVar4 = (int)puVar5;
        param_4 = (int)puVar6;
      } while (uVar2 != 0);
    }
    uVar7 = 0;
LAB_109093eb8:
    func_0x000109094440();
  }
  func_0x000109094448(uStack_58);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  func_0x000109094414();
  iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x20);
  func_0x00010c277e80();
  if (iVar1 == iVar4) {
    iVar4 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x00010c277e80();
    if (iVar4 == param_4) {
      return;
    }
    uVar2 = unaff_x19;
    func_0x00010be237a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    *(ulong *)(unaff_x19 + 0x18) = uVar2;
    func_0x000109094438(uVar7);
  }
  else {
    uVar2 = unaff_x19;
    func_0x00010be237a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
    *(ulong *)(unaff_x19 + 0x20) = uVar2;
    func_0x000109094438(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(unaff_x19,PTR_s__invalidateAssetReader_11256cf88);
  return;
}



/* Entry: 109093ef4; end: 109093f93; -[SCAVFoundationNeoPlayerSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:] */

/* WARNING: Possible PIC construction at 0x000109093f44: Changing call to branch */

void FUN_109093ef4(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  FUN_109094414();
  iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x20);
  func_0x00010c277e80();
  if (iVar1 == param_3) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x00010c277e80();
    if (iVar1 == param_4) {
      return;
    }
    lVar2 = unaff_x19;
    func_0x00010be237a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    *(long *)(unaff_x19 + 0x18) = lVar2;
    func_0x000109094438(uVar3);
  }
  else {
    lVar2 = unaff_x19;
    func_0x00010be237a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    *(long *)(unaff_x19 + 0x20) = lVar2;
    func_0x000109094438(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109093f94; end: 109093fe7; -[SCAVFoundationNeoPlayerSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_109093f94(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ae00(*(undefined8 *)(param_2 + 0x88));
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined8 *)(param_2 + 0x70) = param_4[2];
  *(undefined8 *)(param_2 + 0x68) = uVar2;
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  func_0x00010be3d7a0(param_2);
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 109093fe8; end: 1090940a7; -[SCAVFoundationNeoPlayerSampleBufferProvider _prepareNextAudioSampleBufferIfNeeded] */

ulong FUN_109093fe8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    return 1;
  }
  uVar3 = param_1;
  func_0x00010be0a380();
  if (((int)uVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x30), uVar3 = 0, lVar1 != 0)) {
    func_0x00010bf52120();
    if (lVar1 == 0) {
      func_0x0001090944b0(*(undefined8 *)(param_1 + 0x78));
    }
    else {
      puVar2 = PTR_PTR_1126dd358;
      func_0x00010c0c6520(PTR_PTR_1126dd358,param_2,lVar1,*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = puVar2;
      func_0x000109094438(uVar4);
      _CFRelease(lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bf987e0(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010909446c();
      func_0x000109094420();
    }
    uVar3 = (ulong)(*(long *)(param_1 + 0x78) != 0);
  }
  return uVar3;
}



/* Entry: 1090940a8; end: 109094163; -[SCAVFoundationNeoPlayerSampleBufferProvider _prepareNextVideoSampleBufferIfNeeded] */

ulong FUN_1090940a8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    return 1;
  }
  uVar3 = param_1;
  func_0x00010be0a380();
  if (((int)uVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x38), uVar3 = 0, lVar1 != 0)) {
    func_0x00010bf52120();
    if (lVar1 == 0) {
      func_0x0001090944a4();
    }
    else {
      puVar2 = PTR_PTR_1126dd358;
      func_0x00010c0c6520(PTR_PTR_1126dd358,param_2,lVar1,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      *(undefined **)(param_1 + 0x80) = puVar2;
      func_0x000109094438(uVar4);
      _CFRelease(lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bf987e0(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010909446c();
      func_0x000109094420();
    }
    uVar3 = (ulong)(*(long *)(param_1 + 0x80) != 0);
  }
  return uVar3;
}



/* Entry: 109094164; end: 109094183; -[SCAVFoundationNeoPlayerSampleBufferProvider hasNextAudioSampleBuffer] */

void FUN_109094164(void)

{
  FUN_109094414();
                    /* WARNING: Could not recover jumptable at 0x00010be78c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109094184; end: 109094187; -[SCAVFoundationNeoPlayerSampleBufferProvider didReachEndOfAudioTrack] */

void FUN_109094184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasNextAudioSampleBuffer_1125d3f80);
  return;
}



/* Entry: 109094188; end: 1090941c7; -[SCAVFoundationNeoPlayerSampleBufferProvider dequeueNextAudioSampleBufferWithError:] */

void FUN_109094188(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  FUN_109094414();
  lVar1 = unaff_x19;
  func_0x00010be78c40();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
    func_0x000109094430();
    func_0x0001090944b0(*(undefined8 *)(unaff_x19 + 0x78));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090941c8; end: 1090941e7; -[SCAVFoundationNeoPlayerSampleBufferProvider hasNextVideoSampleBuffer] */

void FUN_1090941c8(void)

{
  FUN_109094414();
                    /* WARNING: Could not recover jumptable at 0x00010be78cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1090941e8; end: 1090941eb; -[SCAVFoundationNeoPlayerSampleBufferProvider didReachEndOfVideoTrack] */

void FUN_1090941e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasNextVideoSampleBuffer_1125d3f98);
  return;
}



/* Entry: 1090941ec; end: 109094227; -[SCAVFoundationNeoPlayerSampleBufferProvider dequeueNextVideoSampleBufferWithError:] */

void FUN_1090941ec(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  FUN_109094414();
  lVar1 = unaff_x19;
  func_0x00010be78ca0();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000109094430();
    func_0x0001090944a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109094228; end: 10909423b; -[SCAVFoundationNeoPlayerSampleBufferProvider computeMediaDataManagerMetrics] */

void FUN_109094228(undefined8 *param_1)

{
  param_1[1] = 0x7fefffffffffffff;
  *param_1 = 0x7fffffff;
  param_1[3] = 1;
  param_1[2] = 0x7fffffff;
  return;
}



/* Entry: 10909423c; end: 109094243; -[SCAVFoundationNeoPlayerSampleBufferProvider timebase] */

undefined8 FUN_10909423c(void)

{
  return 0;
}



/* Entry: 109094244; end: 109094363; -[SCAVFoundationNeoPlayerSampleBufferProvider duration] */

void FUN_109094244(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_48;
  
  func_0x00010909448c();
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar5;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_48 = extraout_x8;
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010909445c();
  if (uVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      uVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        if (*(long *)(lStack_108 + uVar4 * 8) == 0) {
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
        }
        else {
          func_0x00010c0c4ba0(&uStack_128);
        }
        uStack_138 = param_1[1];
        uStack_140 = *param_1;
        uStack_130 = param_1[2];
        _CMTimeMaximum(param_1,&uStack_140,&uStack_128);
        uVar4 = uVar4 + 1;
        in_ZR = uVar4 == uVar2;
      } while (uVar4 < uVar2);
      uVar2 = param_2;
      func_0x00010909445c();
    } while (uVar2 != 0);
  }
  lVar3 = 0;
  func_0x000109094420();
  func_0x000109094448(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar3 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109094364; end: 10909437b; -[SCAVFoundationNeoPlayerSampleBufferProvider delegate] */

void FUN_109094364(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10909437c; end: 109094387; -[SCAVFoundationNeoPlayerSampleBufferProvider setDelegate:] */

void FUN_10909437c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 109094388; end: 109094413; -[SCAVFoundationNeoPlayerSampleBufferProvider .cxx_destruct] */

void FUN_109094388(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  func_0x000109094428(param_1 + 0x88);
  func_0x000109094428(param_1 + 0x80);
  func_0x000109094428(param_1 + 0x78);
  func_0x000109094428(param_1 + 0x58);
  func_0x000109094428(param_1 + 0x48);
  func_0x000109094428(param_1 + 0x40);
  func_0x000109094428(param_1 + 0x38);
  func_0x000109094428(param_1 + 0x30);
  func_0x000109094428(param_1 + 0x28);
  func_0x000109094428(param_1 + 0x20);
  func_0x000109094428(param_1 + 0x18);
  func_0x000109094428(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109094414; end: 1090944db;  */

void FUN_109094414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_assertMediaQueue_1125a0528);
  return;
}



/* Entry: 1090944dc; end: 10909455b; -[SCAVSampleBufferRenderSynchronizerSystem init] */

undefined1 * FUN_1090944dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___AVSampleBufferRenderSynchronizer_1126dd360;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10909455c; end: 109094563; -[SCAVSampleBufferRenderSynchronizerSystem timebase] */

void FUN_10909455c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_timebase_112679998);
  return;
}



/* Entry: 109094564; end: 1090945ab; -[SCAVSampleBufferRenderSynchronizerSystem setTime:] */

void FUN_109094564(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11fdc0();
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x00010c1e7660(uVar1,param_2,&uStack_40);
  return;
}



/* Entry: 1090945ac; end: 1090945c3; -[SCAVSampleBufferRenderSynchronizerSystem time] */

void FUN_1090945ac(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 8),PTR_s_currentTime_1125b5ac8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1090945c4; end: 10909460b; -[SCAVSampleBufferRenderSynchronizerSystem setRate:] */

void FUN_1090945c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c26f000(auStack_48);
  func_0x00010c1e7660(param_1,uVar1,param_3,auStack_48);
  return;
}



/* Entry: 10909460c; end: 109094613; -[SCAVSampleBufferRenderSynchronizerSystem rate] */

void FUN_10909460c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_rate_112625990);
  return;
}



/* Entry: 109094614; end: 109094647; -[SCAVSampleBufferRenderSynchronizerSystem setRate:time:] */

void FUN_109094614(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c1e7660(*(undefined8 *)(param_1 + 8),param_2,&uStack_30);
  return;
}



/* Entry: 109094648; end: 10909464f; -[SCAVSampleBufferRenderSynchronizerSystem addAudioRenderer:] */

void FUN_109094648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addRenderer__11259c560);
  return;
}



/* Entry: 109094650; end: 109094657; -[SCAVSampleBufferRenderSynchronizerSystem addVideoRenderer:] */

void FUN_109094650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addRenderer__11259c560);
  return;
}



/* Entry: 109094658; end: 109094697; -[SCAVSampleBufferRenderSynchronizerSystem removeAudioRenderer:] */

void FUN_109094658(void)

{
  func_0x000109094700();
  func_0x000109094720();
  func_0x0001090946e4();
  func_0x0001090946f8();
  return;
}



/* Entry: 109094698; end: 1090946d7; -[SCAVSampleBufferRenderSynchronizerSystem removeVideoRenderer:] */

void FUN_109094698(void)

{
  func_0x000109094700();
  func_0x000109094720();
  func_0x0001090946e4();
  func_0x0001090946f8();
  return;
}



/* Entry: 1090946d8; end: 1090947af; -[SCAVSampleBufferRenderSynchronizerSystem .cxx_destruct] */

void FUN_1090946d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090947b0; end: 109094817;  */

long FUN_1090947b0(long param_1)

{
  _malloc();
  if (param_1 == 0) {
    FUN_109094818();
  }
  return param_1;
}



/* Entry: 109094818; end: 109094847;  */

void FUN_109094818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             *(undefined8 *)PTR__NSMallocException_11034aa98,
             &PTR____CFConstantStringClassReference_110f1fa38);
  return;
}



/* Entry: 109094848; end: 109094893; -[SCNeoAppleCodecRegistry initWithCodecIdentifiers:length:] */

void FUN_109094848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 109094894; end: 1090948db; -[SCNeoAppleCodecRegistry dealloc] */

void FUN_109094894(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1127003f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090948dc; end: 109094913; -[SCNeoAppleCodecRegistry containsCodec:] */

bool FUN_1090948dc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar4 = 0;
  do {
    uVar3 = uVar2;
    if (uVar2 == uVar4) break;
    lVar1 = uVar4 * 4;
    uVar3 = uVar4;
    uVar4 = uVar4 + 1;
  } while (*(int *)(*(long *)(param_1 + 8) + lVar1) != param_3);
  return uVar3 < uVar2;
}



/* Entry: 109094914; end: 1090949cf; -[SCNeoAppleCodecRegistry allSupportedCodecNames] */

void FUN_109094914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x10); uVar3 = uVar3 + 1) {
    uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 8) + uVar3 * 4);
    FUN_109096370(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bf51e00(puVar1);
  FUN_109095048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090949d0; end: 109094a03;  */

bool FUN_1090949d0(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = param_2;
    if (param_2 == uVar2) break;
    lVar1 = uVar2 * 4;
    uVar3 = uVar2;
    uVar2 = uVar2 + 1;
  } while (*(int *)(param_1 + lVar1) != param_3);
  return uVar3 < param_2;
}



/* Entry: 109094a04; end: 109094a8f;  */

void FUN_109094a04(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *apuStack_58 [5];
  
  _objc_retain();
  apuStack_58[0] = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000109095070(FUN_109094a90,0xc2000000);
  lVar1 = lRam0000000113730940;
  func_0x000109095050();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x113730940,apuStack_58);
  }
  uVar2 = uRam0000000113730948;
  func_0x0001090950a8();
  func_0x000109095068();
  func_0x000109095048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109094a90; end: 109094c83;  */

void FUN_109094a90(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126dd370;
  func_0x00010c09aea0(PTR_PTR_1126dd370,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x000109095050();
    uVar3 = puRam0000000113730948;
    puRam0000000113730948 = puVar2;
    _objc_release(uVar3);
    goto LAB_109094bc8;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar3 = uVar7;
  func_0x0001090950a0();
  func_0x000109095088();
  _AudioFormatGetPropertyInfo();
  func_0x00010bf941e0(uVar7);
  if ((int)uVar3 == 0) {
    puVar4 = (undefined4 *)0x4;
    FUN_1090947b0();
    uVar3 = uVar7;
    func_0x0001090950a0();
    func_0x000109095088();
    _AudioFormatGetProperty();
    func_0x00010bf941e0(uVar7);
    if ((int)uVar3 != 0) {
      _free(puVar4);
      FUN_109096740(&PTR____CFConstantStringClassReference_110f1fa78,uVar3);
      goto LAB_109094b9c;
    }
    lVar6 = 0;
    do {
      if (lVar6 == 0) goto LAB_109094c44;
      piVar1 = (int *)((long)puVar4 + lVar6);
      lVar6 = lVar6 + 4;
    } while (*piVar1 != 0x61616320);
    puVar5 = puVar4;
    FUN_1090949d0(puVar4,0,0x6d703461);
    if (((ulong)puVar5 & 1) == 0) {
      *puVar4 = 0x6d703461;
    }
LAB_109094c44:
    puVar8 = PTR_PTR_1126dd368;
    _objc_alloc();
    func_0x00010bfff520();
  }
  else {
    FUN_109096740(&PTR____CFConstantStringClassReference_110f1fa78,uVar3);
LAB_109094b9c:
    puVar8 = (undefined *)0x0;
  }
  func_0x000109095068();
  uVar3 = puRam0000000113730948;
  puRam0000000113730948 = puVar8;
  _objc_release(uVar3);
  if (puRam0000000113730948 != (undefined *)0x0) {
    func_0x00010c149fc0(PTR_PTR_1126dd370);
  }
LAB_109094bc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109094c84; end: 109094d0f;  */

void FUN_109094c84(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *apuStack_58 [5];
  
  _objc_retain();
  apuStack_58[0] = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000109095070(FUN_109094d10,0xc2000000);
  lVar1 = lRam0000000113730950;
  func_0x000109095050();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x113730950,apuStack_58);
  }
  uVar2 = uRam0000000113730958;
  func_0x0001090950a8();
  func_0x000109095068();
  func_0x000109095048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109094d10; end: 109094fc3;  */

void FUN_109094d10(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  
  puVar2 = PTR_PTR_1126dd370;
  func_0x00010c09c6c0(PTR_PTR_1126dd370,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000109095050();
    uStack_68 = 0;
    func_0x0001090950a0(uVar7);
    uVar3 = 0;
    _VTCopyVideoEncoderList(0,&uStack_68);
    func_0x00010bf941e0(uVar7);
    if ((int)uVar3 == 0) {
      uVar4 = uStack_68;
      _CFArrayGetCount();
      uVar5 = uVar4 * 4 + 0xc;
      FUN_1090947b0();
      for (uVar10 = 0; (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) != uVar10;
          uVar10 = uVar10 + 1) {
        uVar11 = uStack_68;
        _CFArrayGetValueAtIndex(uStack_68,uVar10);
        _CFDictionaryGetValue();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar11;
        func_0x00010c282760();
        *(int *)(uVar5 + uVar10 * 4) = (int)uVar6;
        _objc_release(uVar11);
      }
      _CFRelease();
      for (lVar8 = 0; puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0, lVar8 != 0xc; lVar8 = lVar8 + 4
          ) {
        uVar1 = *(uint *)(&UNK_10dfb2c70 + lVar8);
        uVar11 = (ulong)uVar1;
        uVar10 = uVar11;
        FUN_109096370();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        func_0x00010bf17b80(uVar7);
        uVar10 = uVar11;
        _VTIsHardwareDecodeSupported();
        func_0x00010bf941e0(uVar7);
        if (((int)uVar10 != 0) &&
           (uVar10 = uVar5, FUN_1090949d0(uVar5,uVar4,uVar11), (uVar10 & 1) == 0)) {
          *(uint *)(uVar5 + uVar4 * 4) = uVar1;
          uVar4 = uVar4 + 1;
        }
        _objc_release(puVar9);
      }
      puVar9 = PTR_PTR_1126dd368;
      _objc_alloc();
      func_0x00010bfff520();
    }
    else {
      FUN_109096740(&PTR____CFConstantStringClassReference_110f1fad8,uVar3);
      puVar9 = (undefined *)0x0;
    }
    func_0x000109095048();
    uVar3 = puRam0000000113730958;
    puRam0000000113730958 = puVar9;
    _objc_release(uVar3);
    if (puRam0000000113730958 != (undefined *)0x0) {
      func_0x00010c14b6a0(PTR_PTR_1126dd370);
    }
  }
  else {
    func_0x0001090950a8();
    uVar3 = puRam0000000113730958;
    puRam0000000113730958 = puVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109094fc4; end: 109094fef;  */

undefined8 * FUN_109094fc4(undefined8 *param_1)

{
  FUN_109094ff0(*param_1);
  return param_1;
}


