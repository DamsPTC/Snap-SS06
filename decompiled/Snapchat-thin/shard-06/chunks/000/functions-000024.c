/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043da2c8; end: 1043da35f; -[SCCapturerStateMediaCaptureUpdate onDidBeginVideoRecording:] */

void FUN_1043da2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da274(0x1043dc1e8,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da360; end: 1043da42f; -[SCCapturerStateMediaCaptureUpdate onDidBeginAudioRecording:] */

void FUN_1043da360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da30c(0x1043dc1e4,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da430; end: 1043da4d3; -[SCCapturerStateMediaCaptureUpdate onWillFinishRecording:] */

void FUN_1043da430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da3a4(0x1043dc1dc,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da4d4; end: 1043da577; -[SCCapturerStateMediaCaptureUpdate onDidFinishRecording:] */

void FUN_1043da4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da474(0x1043dc1d4,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da578; end: 1043da60f; -[SCCapturerStateMediaCaptureUpdate onDidFailRecording:] */

void FUN_1043da578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da518(0x1043dc1cc,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da610; end: 1043da6c7; -[SCCapturerStateMediaCaptureUpdate onDidCancelRecording:] */

void FUN_1043da610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da5bc(0x1043dc1c4,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da6c8; end: 1043da777; -[SCCapturerStateMediaCaptureUpdate onDidGetError:] */

void FUN_1043da6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da654(0x1043dc1bc,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da778; end: 1043da80f; -[SCCapturerStateMediaCaptureUpdate onDidAppendVideoSampleBuffer:] */

void FUN_1043da778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da70c(0x1043dc1b4,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da810; end: 1043da897; -[SCCapturerStateMediaCaptureUpdate onWillCapturePhoto:] */

void FUN_1043da810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043da7bc(FUN_1043dc1ac,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043da898; end: 1043da8eb; -[SCCapturerStateMediaCaptureUpdate onDidCapturePhoto:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043da898(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113076000);
  _objc_retain();
  if (cVar1 == '\n') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_1130760d0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043da8ec; end: 1043da91f;  */

void FUN_1043da8ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043da920; end: 1043dabf7; -[SCCapturerStateMediaCaptureUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043da920(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076008));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076010));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076020));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076028));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076030));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076038));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076040));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076050));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076058));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076060));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076068));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076070));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076078));
  _swift_errorRelease(*(undefined8 *)(param_1 + _DAT_113076080));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076088));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076090));
  _swift_errorRelease(*(undefined8 *)(param_1 + _DAT_113076098));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130760a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130760b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130760c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130760c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130760d0));
  return;
}



/* Entry: 1043dabf8; end: 1043dac07;  */

ulong FUN_1043dabf8(ulong param_1)

{
  if (10 < param_1) {
    param_1 = 0xb;
  }
  return param_1;
}



/* Entry: 1043dac08; end: 1043dadbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dac08(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 0;
  *(long *)(lVar4 + _DAT_113076008) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043dadbc; end: 1043db14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dadbc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(long *)(lVar4 + _DAT_113076010) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076018) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043db150; end: 1043db34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043db150(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_3;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 3;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(long *)(lVar4 + _DAT_113076030) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113076038) = param_4;
  *(undefined8 *)(lVar4 + _DAT_113076040) = param_5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076050) = param_6;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1043db34c; end: 1043db523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043db34c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 4;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(long *)(lVar4 + _DAT_113076058) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076060) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113076068) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043db524; end: 1043db703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043db524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x00010068ae9c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113076000) = 5;
  *(undefined8 *)(lVar3 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar3 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076068) = 0;
  *(long *)(lVar3 + _DAT_113076070) = param_1;
  *(undefined8 *)(lVar3 + _DAT_113076078) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113076080) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar3 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar3 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130760d0) = 0;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _swift_errorRetain(param_3);
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043db704; end: 1043db8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043db704(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 6;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(long *)(lVar4 + _DAT_113076088) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076090) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043db8d0; end: 1043dbc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043db8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 7;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(long *)(lVar4 + _DAT_113076098) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  _swift_errorRetain(param_1);
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1043dbc80; end: 1043dbe4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dbc80(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 9;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(long *)(lVar4 + _DAT_1130760c0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = param_2;
  *(undefined8 *)(lVar4 + _DAT_1130760d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043dbe4c; end: 1043dc003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dbe4c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x00010068ae9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076000) = 10;
  *(undefined8 *)(lVar4 + _DAT_113076008) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076010) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076018) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076020) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076028) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076030) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076038) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076040) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076050) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076060) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076068) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076070) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076078) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076080) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076088) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076090) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076098) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130760b0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130760b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130760c8) = 0;
  *(long *)(lVar4 + _DAT_1130760d0) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043dc004; end: 1043dc16b;  */

int FUN_1043dc004(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1043dc080;
        goto LAB_1043dc064;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043dc064:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_1043dc080:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043dc16c; end: 1043dc1ab;  */

void FUN_1043dc16c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf6db8;
  _swift_getWitnessTable(&UNK_10dcf6db8,&UNK_110766700);
  puRam0000000113076108 = puVar1;
  return;
}



/* Entry: 1043dc1ac; end: 1043dc1eb;  */

void FUN_1043dc1ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100db7e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 1043dc1ec; end: 1043dc2bf;  */

void FUN_1043dc1ec(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043dc2c0; end: 1043dc2df;  */

void FUN_1043dc2c0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1043dc2e0; end: 1043dc313;  */

undefined8 FUN_1043dc2e0(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043c1918)();
  return param_1;
}



/* Entry: 1043dc314; end: 1043dc347; -[SCCapturerStateSessionUpdate description] */

void FUN_1043dc314(void)

{
  undefined1 auStack_c0 [176];
  
  FUN_1043dc6bc(auStack_c0);
  FUN_1043dc2e0(auStack_c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043dc348; end: 1043dc38f; -[SCCapturerStateSessionUpdate init] */

void FUN_1043dc348(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCCapturerStateSessionUpdateWrapper.swift",0x34,2,0x6a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043dc390);
  (*pcVar1)();
}



/* Entry: 1043dc390; end: 1043dc397; -[SCCapturerStateSessionUpdate copyWithZone:] */

void FUN_1043dc390(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043dc398; end: 1043dc3d7; +[SCCapturerStateSessionUpdate sessionDidStartRunningWithState:] */

void FUN_1043dc398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043dcd04(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc3d8; end: 1043dc3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc3d8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c3b9b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(long *)(lVar4 + _DAT_113076120) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043dc3dc; end: 1043dc41b; +[SCCapturerStateSessionUpdate sessionDidStopRunningWithState:] */

void FUN_1043dc3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043dce14(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc41c; end: 1043dc45b; +[SCCapturerStateSessionUpdate capturerDidStartRunningWithState:] */

void FUN_1043dc41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100c715a4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc45c; end: 1043dc45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc45c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c3b9b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 3;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076128) = 0;
  *(long *)(lVar4 + _DAT_113076130) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043dc460; end: 1043dc49f; +[SCCapturerStateSessionUpdate capturerDidStopRunningWithState:] */

void FUN_1043dc460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043dcf24(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc4a0; end: 1043dc4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc4a0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c3b9b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 4;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(long *)(lVar4 + _DAT_113076138) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043dc4a4; end: 1043dc4e3; +[SCCapturerStateSessionUpdate didResetFromRuntimeErrorWithState:] */

void FUN_1043dc4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043dd038(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc4e4; end: 1043dc53b; +[SCCapturerStateSessionUpdate didChangeCaptureDevicePositionWithState:oldPrimaryDevicePosition:oldSecondaryDevicePositions:] */

void FUN_1043dc4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100c3dc6c(param_3,param_4,param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc53c; end: 1043dc58b; +[SCCapturerStateSessionUpdate didAddCaptureInputWithDevicePosition:state:] */

void FUN_1043dc53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100c3b9d4(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc58c; end: 1043dc58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc58c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  func_0x000100c3b9b0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113076110) = 7;
  *(undefined8 *)(lVar5 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113076160) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113076168);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076170) = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1043dc590; end: 1043dc5df; +[SCCapturerStateSessionUpdate didRemoveCaptureInputWithDevicePosition:state:] */

void FUN_1043dc590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_1043dd14c(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043dc5e0; end: 1043dc623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc5e0(code *param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113076110) == '\x02') {
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113076128));
  }
  return;
}



/* Entry: 1043dc624; end: 1043dc677; -[SCCapturerStateSessionUpdate onDidResetFromRuntimeError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc624(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113076110);
  _objc_retain();
  if (cVar1 == '\x04') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113076138));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043dc678; end: 1043dc6ab;  */

void FUN_1043dc678(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043dc6ac; end: 1043dc6bb;  */

ulong FUN_1043dc6ac(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 1043dc6bc; end: 1043dcd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dc6bc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar1 = *(byte *)(param_2 + _DAT_113076110);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(long *)(param_2 + _DAT_113076118) == 0) {
          func_0x0001043cd0a8(&uStack_190);
        }
        else {
          FUN_1043d41b8(&uStack_f0);
          func_0x0001043cd0dc(&uStack_f0);
          uStack_128 = uStack_88;
          uStack_130 = uStack_90;
          uStack_118 = uStack_78;
          uStack_120 = uStack_80;
          uStack_108 = uStack_68;
          uStack_110 = uStack_70;
          uStack_100 = uStack_60;
          uStack_168 = uStack_c8;
          uStack_170 = uStack_d0;
          uStack_158 = uStack_b8;
          uStack_160 = uStack_c0;
          uStack_148 = uStack_a8;
          uStack_150 = uStack_b0;
          uStack_138 = uStack_98;
          uStack_140 = uStack_a0;
          uStack_188 = uStack_e8;
          uStack_190 = uStack_f0;
          uStack_178 = uStack_d8;
          uStack_180 = uStack_e0;
        }
        uStack_1d8 = uStack_128;
        uStack_1e0 = uStack_130;
        uStack_1c8 = uStack_118;
        uStack_1d0 = uStack_120;
        uStack_1b8 = uStack_108;
        uStack_1c0 = uStack_110;
        uStack_1b0 = uStack_100;
        uStack_218 = uStack_168;
        uStack_220 = uStack_170;
        uStack_208 = uStack_158;
        uStack_210 = uStack_160;
        uStack_1f8 = uStack_148;
        uStack_200 = uStack_150;
        uStack_1e8 = uStack_138;
        uStack_1f0 = uStack_140;
        uStack_238 = uStack_188;
        uStack_240 = uStack_190;
        uStack_228 = uStack_178;
        uStack_230 = uStack_180;
        func_0x0001043dd468(&uStack_240);
      }
      else {
        if (*(long *)(param_2 + _DAT_113076120) == 0) {
          func_0x0001043cd0a8(&uStack_190);
        }
        else {
          FUN_1043d41b8(&uStack_f0);
          func_0x0001043cd0dc(&uStack_f0);
          uStack_128 = uStack_88;
          uStack_130 = uStack_90;
          uStack_118 = uStack_78;
          uStack_120 = uStack_80;
          uStack_108 = uStack_68;
          uStack_110 = uStack_70;
          uStack_100 = uStack_60;
          uStack_168 = uStack_c8;
          uStack_170 = uStack_d0;
          uStack_158 = uStack_b8;
          uStack_160 = uStack_c0;
          uStack_148 = uStack_a8;
          uStack_150 = uStack_b0;
          uStack_138 = uStack_98;
          uStack_140 = uStack_a0;
          uStack_188 = uStack_e8;
          uStack_190 = uStack_f0;
          uStack_178 = uStack_d8;
          uStack_180 = uStack_e0;
        }
        uStack_1d8 = uStack_128;
        uStack_1e0 = uStack_130;
        uStack_1c8 = uStack_118;
        uStack_1d0 = uStack_120;
        uStack_1b8 = uStack_108;
        uStack_1c0 = uStack_110;
        uStack_1b0 = uStack_100;
        uStack_218 = uStack_168;
        uStack_220 = uStack_170;
        uStack_208 = uStack_158;
        uStack_210 = uStack_160;
        uStack_1f8 = uStack_148;
        uStack_200 = uStack_150;
        uStack_1e8 = uStack_138;
        uStack_1f0 = uStack_140;
        uStack_238 = uStack_188;
        uStack_240 = uStack_190;
        uStack_228 = uStack_178;
        uStack_230 = uStack_180;
        func_0x0001043dd45c(&uStack_240);
      }
    }
    else if (bVar1 == 2) {
      if (*(long *)(param_2 + _DAT_113076128) == 0) {
        func_0x0001043cd0a8(&uStack_190);
      }
      else {
        FUN_1043d41b8(&uStack_f0);
        func_0x0001043cd0dc(&uStack_f0);
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_108 = uStack_68;
        uStack_110 = uStack_70;
        uStack_100 = uStack_60;
        uStack_168 = uStack_c8;
        uStack_170 = uStack_d0;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_178 = uStack_d8;
        uStack_180 = uStack_e0;
      }
      uStack_1d8 = uStack_128;
      uStack_1e0 = uStack_130;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1b0 = uStack_100;
      uStack_218 = uStack_168;
      uStack_220 = uStack_170;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      uStack_1f8 = uStack_148;
      uStack_200 = uStack_150;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_238 = uStack_188;
      uStack_240 = uStack_190;
      uStack_228 = uStack_178;
      uStack_230 = uStack_180;
      func_0x0001043dd450(&uStack_240);
    }
    else {
      if (*(long *)(param_2 + _DAT_113076130) == 0) {
        func_0x0001043cd0a8(&uStack_190);
      }
      else {
        FUN_1043d41b8(&uStack_f0);
        func_0x0001043cd0dc(&uStack_f0);
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_108 = uStack_68;
        uStack_110 = uStack_70;
        uStack_100 = uStack_60;
        uStack_168 = uStack_c8;
        uStack_170 = uStack_d0;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_178 = uStack_d8;
        uStack_180 = uStack_e0;
      }
      uStack_1d8 = uStack_128;
      uStack_1e0 = uStack_130;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1b0 = uStack_100;
      uStack_218 = uStack_168;
      uStack_220 = uStack_170;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      uStack_1f8 = uStack_148;
      uStack_200 = uStack_150;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_238 = uStack_188;
      uStack_240 = uStack_190;
      uStack_228 = uStack_178;
      uStack_230 = uStack_180;
      func_0x0001043dd444(&uStack_240);
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      if (*(long *)(param_2 + _DAT_113076138) == 0) {
        func_0x0001043cd0a8(&uStack_190);
      }
      else {
        FUN_1043d41b8(&uStack_f0);
        func_0x0001043cd0dc(&uStack_f0);
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_108 = uStack_68;
        uStack_110 = uStack_70;
        uStack_100 = uStack_60;
        uStack_168 = uStack_c8;
        uStack_170 = uStack_d0;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_178 = uStack_d8;
        uStack_180 = uStack_e0;
      }
      uStack_1d8 = uStack_128;
      uStack_1e0 = uStack_130;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1b0 = uStack_100;
      uStack_218 = uStack_168;
      uStack_220 = uStack_170;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      uStack_1f8 = uStack_148;
      uStack_200 = uStack_150;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_238 = uStack_188;
      uStack_240 = uStack_190;
      uStack_228 = uStack_178;
      uStack_230 = uStack_180;
      func_0x0001043dd438(&uStack_240);
    }
    else {
      if (*(long *)(param_2 + _DAT_113076140) == 0) {
        func_0x0001043cd0a8(&uStack_190);
      }
      else {
        FUN_1043d41b8(&uStack_f0);
        func_0x0001043cd0dc(&uStack_f0);
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_108 = uStack_68;
        uStack_110 = uStack_70;
        uStack_100 = uStack_60;
        uStack_168 = uStack_c8;
        uStack_170 = uStack_d0;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_178 = uStack_d8;
        uStack_180 = uStack_e0;
      }
      if (*(char *)((undefined8 *)(param_2 + _DAT_113076148) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043dcd00);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(param_2 + _DAT_113076150) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043dcd04);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(param_2 + _DAT_113076148);
      uVar4 = *(undefined8 *)(param_2 + _DAT_113076150);
      uStack_1d8 = uStack_128;
      uStack_1e0 = uStack_130;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_218 = uStack_168;
      uStack_220 = uStack_170;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      uStack_1f8 = uStack_148;
      uStack_200 = uStack_150;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_238 = uStack_188;
      uStack_240 = uStack_190;
      uStack_228 = uStack_178;
      uStack_230 = uStack_180;
      uStack_1b0 = uStack_100;
      uStack_1a8 = (undefined1)uVar3;
      uStack_1a7 = (undefined7)((ulong)uVar3 >> 8);
      uStack_1a0 = (undefined1)uVar4;
      uStack_19f = (undefined7)((ulong)uVar4 >> 8);
      func_0x0001043dd42c(&uStack_240);
    }
  }
  else if (bVar1 == 6) {
    if (*(char *)((undefined8 *)(param_2 + _DAT_113076158) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043dccf8);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_113076158);
    if (*(long *)(param_2 + _DAT_113076160) == 0) {
      func_0x0001043cd0a8(&uStack_190);
    }
    else {
      FUN_1043d41b8(&uStack_f0);
      func_0x0001043cd0dc(&uStack_f0);
      uStack_128 = uStack_88;
      uStack_130 = uStack_90;
      uStack_118 = uStack_78;
      uStack_120 = uStack_80;
      uStack_108 = uStack_68;
      uStack_110 = uStack_70;
      uStack_100 = uStack_60;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_158 = uStack_b8;
      uStack_160 = uStack_c0;
      uStack_148 = uStack_a8;
      uStack_150 = uStack_b0;
      uStack_138 = uStack_98;
      uStack_140 = uStack_a0;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
    }
    uStack_1d0 = uStack_128;
    uStack_1d8 = uStack_130;
    uStack_1c0 = uStack_118;
    uStack_1c8 = uStack_120;
    uStack_1b0 = uStack_108;
    uStack_1b8 = uStack_110;
    uStack_210 = uStack_168;
    uStack_218 = uStack_170;
    uStack_200 = uStack_158;
    uStack_208 = uStack_160;
    uStack_1f0 = uStack_148;
    uStack_1f8 = uStack_150;
    uStack_1e0 = uStack_138;
    uStack_1e8 = uStack_140;
    uStack_230 = uStack_188;
    uStack_238 = uStack_190;
    uStack_1a8 = (undefined1)uStack_100;
    uStack_1a7 = (undefined7)((ulong)uStack_100 >> 8);
    uStack_220 = uStack_178;
    uStack_228 = uStack_180;
    uStack_240 = uVar3;
    func_0x0001043dd420(&uStack_240);
  }
  else {
    if (*(char *)((undefined8 *)(param_2 + _DAT_113076168) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043dccfc);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_113076168);
    if (*(long *)(param_2 + _DAT_113076170) == 0) {
      func_0x0001043cd0a8(&uStack_190);
    }
    else {
      FUN_1043d41b8(&uStack_f0);
      func_0x0001043cd0dc(&uStack_f0);
      uStack_128 = uStack_88;
      uStack_130 = uStack_90;
      uStack_118 = uStack_78;
      uStack_120 = uStack_80;
      uStack_108 = uStack_68;
      uStack_110 = uStack_70;
      uStack_100 = uStack_60;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_158 = uStack_b8;
      uStack_160 = uStack_c0;
      uStack_148 = uStack_a8;
      uStack_150 = uStack_b0;
      uStack_138 = uStack_98;
      uStack_140 = uStack_a0;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
    }
    uStack_1d0 = uStack_128;
    uStack_1d8 = uStack_130;
    uStack_1c0 = uStack_118;
    uStack_1c8 = uStack_120;
    uStack_1b0 = uStack_108;
    uStack_1b8 = uStack_110;
    uStack_210 = uStack_168;
    uStack_218 = uStack_170;
    uStack_200 = uStack_158;
    uStack_208 = uStack_160;
    uStack_1f0 = uStack_148;
    uStack_1f8 = uStack_150;
    uStack_1e0 = uStack_138;
    uStack_1e8 = uStack_140;
    uStack_230 = uStack_188;
    uStack_238 = uStack_190;
    uStack_1a8 = (undefined1)uStack_100;
    uStack_1a7 = (undefined7)((ulong)uStack_100 >> 8);
    uStack_220 = uStack_178;
    uStack_228 = uStack_180;
    uStack_240 = uVar3;
    func_0x0001043dd414(&uStack_240);
  }
  param_1[0x11] = uStack_1b8;
  param_1[0x10] = uStack_1c0;
  param_1[0x13] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[0x12] = uStack_1b0;
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_198,uStack_19f);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_1a0,uStack_1a7);
  param_1[9] = uStack_1f8;
  param_1[8] = uStack_200;
  param_1[0xb] = uStack_1e8;
  param_1[10] = uStack_1f0;
  param_1[0xd] = uStack_1d8;
  param_1[0xc] = uStack_1e0;
  param_1[0xf] = uStack_1c8;
  param_1[0xe] = uStack_1d0;
  param_1[1] = uStack_238;
  *param_1 = uStack_240;
  param_1[3] = uStack_228;
  param_1[2] = uStack_230;
  param_1[5] = uStack_218;
  param_1[4] = uStack_220;
  param_1[7] = uStack_208;
  param_1[6] = uStack_210;
  return;
}



/* Entry: 1043dcd04; end: 1043dd14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dcd04(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c3b9b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 0;
  *(long *)(lVar4 + _DAT_113076118) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043dd14c; end: 1043dd26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dd14c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  func_0x000100c3b9b0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113076110) = 7;
  *(undefined8 *)(lVar5 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113076160) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113076168);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076170) = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1043dd26c; end: 1043dd3d3;  */

int FUN_1043dd26c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1043dd2e8;
        goto LAB_1043dd2cc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043dd2cc:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1043dd2e8:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043dd3d4; end: 1043dd413;  */

void FUN_1043dd3d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130761a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf6ea4;
  _swift_getWitnessTable(&UNK_10dcf6ea4,&UNK_1107667e8);
  puRam00000001130761a0 = puVar1;
  return;
}



/* Entry: 1043dd414; end: 1043dd4fb;  */

void FUN_1043dd414(long param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 7;
  return;
}



/* Entry: 1043dd4fc; end: 1043dd5b7;  */

void FUN_1043dd4fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1043dd5b8; end: 1043dd5f3;  */

void FUN_1043dd5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_20 = (undefined4)param_2;
  uStack_1c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_28 = param_1;
  uStack_18 = param_3;
  (**(code **)(param_5 + 0x10))(param_5,&uStack_28,param_4);
  return;
}



/* Entry: 1043dd5f4; end: 1043dd6c7;  */

void FUN_1043dd5f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043dd6c8; end: 1043dd6e7;  */

void FUN_1043dd6c8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1043dd6e8; end: 1043dd773; -[SCCapturerStateUpdate description] */

void FUN_1043dd6e8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001043c9a84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1043dd774(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001043e29d0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x1043c9a84);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043dd774; end: 1043e094f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043dd774(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  code *pcVar5;
  byte *pbVar6;
  long extraout_x8;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  byte *pbVar21;
  undefined8 uVar22;
  ulong uVar23;
  byte *pbVar24;
  undefined8 uVar25;
  ulong uVar26;
  byte *pbVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  undefined8 uStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar7 = 0x113076388;
  uStack_1e8 = param_1;
  lStack_1c0 = param_2;
  func_0x0001000285a8(0x113076388,&UNK_10dcf6f70);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = (long)&pbStack_2c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = (byte *)(lVar7 - extraout_x12);
  uStack_200 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_00;
  pbStack_210 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_01;
  pbStack_2c0 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_02;
  pbStack_240 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_03;
  pbStack_248 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_04;
  pbStack_250 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_05;
  pbStack_230 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_06;
  uStack_238 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_07;
  pbStack_258 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_08;
  pbStack_228 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_09;
  pbStack_208 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_10;
  pbStack_218 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_11;
  pbStack_1f0 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_12;
  pbStack_1f8 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_13;
  pbStack_220 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_14;
  pbStack_268 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_15;
  pbStack_270 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_16;
  pbStack_260 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_17;
  pbStack_278 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_18;
  pbStack_280 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_19;
  pbStack_290 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_20;
  pbStack_288 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_21;
  pbStack_298 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_22;
  pbStack_2a0 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_23;
  pbStack_2a8 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar8 + -extraout_x12_24;
  pbStack_2b0 = pbVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbStack_2b8 = pbVar8 + -extraout_x12_25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar21 = pbVar8 + -extraout_x12_25 + -extraout_x12_26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar24 = pbVar21 + -extraout_x12_27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar27 = pbVar24 + -extraout_x12_28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = pbVar27 + -extraout_x12_29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar29 = pbVar17 + -extraout_x12_30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar30 = pbVar29 + -extraout_x12_31;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar13 = pbVar30 + -extraout_x12_32;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar8 = pbVar13 + -extraout_x12_33;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar6 = (byte *)0x0;
  func_0x0001043c9a84();
  lStack_1d8 = *(long *)(pbVar6 + -8);
  pcStack_1e0 = *(code **)(lStack_1d8 + 0x38);
  pbStack_1c8 = pbVar8 + -extraout_x12_34;
  (*pcStack_1e0)(pbVar8 + -extraout_x12_34,1,1,pbVar6);
  lVar7 = lStack_1c0;
  pbVar31 = pbStack_1c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(lStack_1c0 + _DAT_1130761a8)) {
  case 0:
    if (*(long *)(lStack_1c0 + _DAT_1130761b0) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar8 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar8 + 0x60) = uVar18;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    *(undefined8 *)(pbVar8 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x80) = uVar18;
    *(undefined8 *)(pbVar8 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x20) = uVar18;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x40) = uVar18;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    *(undefined8 *)(pbVar8 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar8 + 8) = uStack_118;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0);
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
    goto code_r0x0001043e07e4;
  case 1:
    if (*(long *)(lStack_1c0 + _DAT_1130761b8) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar13 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar13 + 0x60) = uVar18;
    *(undefined8 *)(pbVar13 + 0x78) = uVar25;
    *(undefined8 *)(pbVar13 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar13 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar13 + 0x80) = uVar18;
    *(undefined8 *)(pbVar13 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar13 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar13 + 0x20) = uVar18;
    *(undefined8 *)(pbVar13 + 0x38) = uVar25;
    *(undefined8 *)(pbVar13 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar13 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar13 + 0x40) = uVar18;
    *(undefined8 *)(pbVar13 + 0x58) = uVar25;
    *(undefined8 *)(pbVar13 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar13 + 8) = uStack_118;
    *(undefined8 *)pbVar13 = uVar18;
    *(undefined8 *)(pbVar13 + 0x18) = uVar25;
    *(undefined8 *)(pbVar13 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar13,pbVar6,1);
    (*pcStack_1e0)(pbVar13,0,1,pbVar6);
    pbVar8 = pbVar13;
    goto code_r0x0001043e07e4;
  case 2:
    if (*(long *)(lStack_1c0 + _DAT_1130761c0) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar30 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar30 + 0x60) = uVar18;
    *(undefined8 *)(pbVar30 + 0x78) = uVar25;
    *(undefined8 *)(pbVar30 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar30 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar30 + 0x80) = uVar18;
    *(undefined8 *)(pbVar30 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar30 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar30 + 0x20) = uVar18;
    *(undefined8 *)(pbVar30 + 0x38) = uVar25;
    *(undefined8 *)(pbVar30 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar30 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar30 + 0x40) = uVar18;
    *(undefined8 *)(pbVar30 + 0x58) = uVar25;
    *(undefined8 *)(pbVar30 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar30 + 8) = uStack_118;
    *(undefined8 *)pbVar30 = uVar18;
    *(undefined8 *)(pbVar30 + 0x18) = uVar25;
    *(undefined8 *)(pbVar30 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar30,pbVar6,2);
    (*pcStack_1e0)(pbVar30,0,1,pbVar6);
    pbVar27 = pbVar30;
    goto code_r0x0001043e0638;
  case 3:
    if (*(long *)(lStack_1c0 + _DAT_1130761c8) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar29 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar29 + 0x60) = uVar18;
    *(undefined8 *)(pbVar29 + 0x78) = uVar25;
    *(undefined8 *)(pbVar29 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar29 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar29 + 0x80) = uVar18;
    *(undefined8 *)(pbVar29 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar29 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar29 + 0x20) = uVar18;
    *(undefined8 *)(pbVar29 + 0x38) = uVar25;
    *(undefined8 *)(pbVar29 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar29 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar29 + 0x40) = uVar18;
    *(undefined8 *)(pbVar29 + 0x58) = uVar25;
    *(undefined8 *)(pbVar29 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar29 + 8) = uStack_118;
    *(undefined8 *)pbVar29 = uVar18;
    *(undefined8 *)(pbVar29 + 0x18) = uVar25;
    *(undefined8 *)(pbVar29 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar29,pbVar6,3);
    (*pcStack_1e0)(pbVar29,0,1,pbVar6);
    func_0x0001043e2a4c(pbVar29,pbVar31,0x113076388,&UNK_10dcf6f70);
    lVar9 = lStack_1d8;
    lVar7 = lStack_1c0;
    goto code_r0x0001043e07f0;
  case 4:
    if (*(long *)(lStack_1c0 + _DAT_1130761d0) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar17 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar17 + 0x60) = uVar18;
    *(undefined8 *)(pbVar17 + 0x78) = uVar25;
    *(undefined8 *)(pbVar17 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar17 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar17 + 0x80) = uVar18;
    *(undefined8 *)(pbVar17 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar17 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar17 + 0x20) = uVar18;
    *(undefined8 *)(pbVar17 + 0x38) = uVar25;
    *(undefined8 *)(pbVar17 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar17 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar17 + 0x40) = uVar18;
    *(undefined8 *)(pbVar17 + 0x58) = uVar25;
    *(undefined8 *)(pbVar17 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar17 + 8) = uStack_118;
    *(undefined8 *)pbVar17 = uVar18;
    *(undefined8 *)(pbVar17 + 0x18) = uVar25;
    *(undefined8 *)(pbVar17 + 0x10) = uVar22;
    uVar18 = 4;
    pbVar8 = pbVar17;
    goto code_r0x0001043df394;
  case 5:
    if (*(long *)(lStack_1c0 + _DAT_1130761d8) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar27 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar27 + 0x60) = uVar18;
    *(undefined8 *)(pbVar27 + 0x78) = uVar25;
    *(undefined8 *)(pbVar27 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar27 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar27 + 0x80) = uVar18;
    *(undefined8 *)(pbVar27 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar27 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar27 + 0x20) = uVar18;
    *(undefined8 *)(pbVar27 + 0x38) = uVar25;
    *(undefined8 *)(pbVar27 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar27 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar27 + 0x40) = uVar18;
    *(undefined8 *)(pbVar27 + 0x58) = uVar25;
    *(undefined8 *)(pbVar27 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar27 + 8) = uStack_118;
    *(undefined8 *)pbVar27 = uVar18;
    *(undefined8 *)(pbVar27 + 0x18) = uVar25;
    *(undefined8 *)(pbVar27 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar27,pbVar6,5);
    (*pcStack_1e0)(pbVar27,0,1,pbVar6);
    goto code_r0x0001043e0638;
  case 6:
    if (*(long *)(lStack_1c0 + _DAT_1130761e0) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 6;
    break;
  case 7:
    if (*(long *)(lStack_1c0 + _DAT_1130761e8) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar21 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar21 + 0x60) = uVar18;
    *(undefined8 *)(pbVar21 + 0x78) = uVar25;
    *(undefined8 *)(pbVar21 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar21 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar21 + 0x80) = uVar18;
    *(undefined8 *)(pbVar21 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar21 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar21 + 0x20) = uVar18;
    *(undefined8 *)(pbVar21 + 0x38) = uVar25;
    *(undefined8 *)(pbVar21 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar21 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar21 + 0x40) = uVar18;
    *(undefined8 *)(pbVar21 + 0x58) = uVar25;
    *(undefined8 *)(pbVar21 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar21 + 8) = uStack_118;
    *(undefined8 *)pbVar21 = uVar18;
    *(undefined8 *)(pbVar21 + 0x18) = uVar25;
    *(undefined8 *)(pbVar21 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar21,pbVar6,7);
    (*pcStack_1e0)(pbVar21,0,1,pbVar6);
    pbVar27 = pbVar21;
    goto code_r0x0001043e0638;
  case 8:
    if (*(long *)(lStack_1c0 + _DAT_1130761f0) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    pbVar24 = pbStack_2b8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 8;
    break;
  case 9:
    if (*(long *)(lStack_1c0 + _DAT_1130761f8) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = pbStack_2b0;
    *(undefined8 *)(pbStack_2b0 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_2b0 + 0x60) = uVar18;
    *(undefined8 *)(pbStack_2b0 + 0x78) = uVar25;
    *(undefined8 *)(pbStack_2b0 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbStack_2b0 + 0x88) = uStack_98;
    *(undefined8 *)(pbStack_2b0 + 0x80) = uVar18;
    *(undefined8 *)(pbStack_2b0 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbStack_2b0 + 0x28) = uStack_f8;
    *(undefined8 *)(pbStack_2b0 + 0x20) = uVar18;
    *(undefined8 *)(pbStack_2b0 + 0x38) = uVar25;
    *(undefined8 *)(pbStack_2b0 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbStack_2b0 + 0x48) = uStack_d8;
    *(undefined8 *)(pbStack_2b0 + 0x40) = uVar18;
    *(undefined8 *)(pbStack_2b0 + 0x58) = uVar25;
    *(undefined8 *)(pbStack_2b0 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbStack_2b0 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 9;
    break;
  case 10:
    if (*(long *)(lStack_1c0 + _DAT_113076200) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    pbVar24 = pbStack_2a8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 10;
    break;
  case 0xb:
    if (*(long *)(lStack_1c0 + _DAT_113076208) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = pbStack_2a0;
    *(undefined8 *)(pbStack_2a0 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_2a0 + 0x60) = uVar18;
    *(undefined8 *)(pbStack_2a0 + 0x78) = uVar25;
    *(undefined8 *)(pbStack_2a0 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbStack_2a0 + 0x88) = uStack_98;
    *(undefined8 *)(pbStack_2a0 + 0x80) = uVar18;
    *(undefined8 *)(pbStack_2a0 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbStack_2a0 + 0x28) = uStack_f8;
    *(undefined8 *)(pbStack_2a0 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0xb;
    break;
  case 0xc:
    if (*(long *)(lStack_1c0 + _DAT_113076210) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = pbStack_298;
    *(undefined8 *)(pbStack_298 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_298 + 0x60) = uVar18;
    *(undefined8 *)(pbStack_298 + 0x78) = uVar25;
    *(undefined8 *)(pbStack_298 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbStack_298 + 0x88) = uStack_98;
    *(undefined8 *)(pbStack_298 + 0x80) = uVar18;
    *(undefined8 *)(pbStack_298 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    pbVar8 = pbStack_298 + 0x20;
    *(undefined8 *)(pbStack_298 + 0x28) = uStack_f8;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0xc;
    break;
  case 0xd:
    if (*(long *)(lStack_1c0 + _DAT_113076218) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    if (*(char *)((undefined8 *)(lVar7 + _DAT_113076220) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0940);
      (*pcVar5)();
    }
    uVar19 = *(undefined8 *)(lVar7 + _DAT_113076220);
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar8 = pbStack_288;
    *(undefined8 *)(pbStack_288 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_288 + 0x60) = uVar18;
    *(undefined8 *)(pbStack_288 + 0x78) = uVar25;
    *(undefined8 *)(pbStack_288 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbStack_288 + 0x88) = uStack_98;
    *(undefined8 *)(pbStack_288 + 0x80) = uVar18;
    uVar11 = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    pbVar24 = pbStack_288 + 0x20;
    *(undefined8 *)(pbStack_288 + 0x28) = uStack_f8;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x40) = uVar18;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    *(undefined8 *)(pbVar8 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar8 + 8) = uStack_118;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    *(undefined8 *)(pbVar8 + 0x90) = uVar11;
    *(undefined8 *)(pbVar8 + 0x98) = uVar19;
    uVar18 = 0xd;
    goto code_r0x0001043e07b8;
  case 0xe:
    if (*(long *)(lStack_1c0 + _DAT_113076228) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    pbVar24 = pbStack_290;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0xe;
    break;
  case 0xf:
    if (*(long *)(lStack_1c0 + _DAT_113076230) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = pbStack_280;
    *(undefined8 *)(pbStack_280 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_280 + 0x60) = uVar18;
    *(undefined8 *)(pbStack_280 + 0x78) = uVar25;
    *(undefined8 *)(pbStack_280 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbStack_280 + 0x88) = uStack_98;
    *(undefined8 *)(pbStack_280 + 0x80) = uVar18;
    *(undefined8 *)(pbStack_280 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    pbVar8 = pbStack_280 + 0x20;
    *(undefined8 *)(pbStack_280 + 0x28) = uStack_f8;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0xf;
    break;
  case 0x10:
    if (*(long *)(lStack_1c0 + _DAT_113076238) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    pbVar24 = pbStack_278;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0x10;
    break;
  case 0x11:
    if (*(long *)(lStack_1c0 + _DAT_113076240) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    if (*(char *)((undefined8 *)(lVar7 + _DAT_113076248) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0938);
      (*pcVar5)();
    }
    if (*(char *)((undefined8 *)(lVar7 + _DAT_113076250) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e094c);
      (*pcVar5)();
    }
    uVar19 = *(undefined8 *)(lVar7 + _DAT_113076248);
    uVar12 = *(undefined8 *)(lVar7 + _DAT_113076250);
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar8 = pbStack_260;
    *(undefined8 *)(pbStack_260 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_260 + 0x60) = uVar18;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    *(undefined8 *)(pbVar8 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x80) = uVar18;
    uVar11 = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x20) = uVar18;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x40) = uVar18;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    *(undefined8 *)(pbVar8 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar8 + 8) = uStack_118;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    *(undefined8 *)(pbVar8 + 0x90) = uVar11;
    *(undefined8 *)(pbVar8 + 0x98) = uVar19;
    *(undefined8 *)(pbVar8 + 0xa0) = uVar12;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0x11);
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
    goto code_r0x0001043e07e4;
  case 0x12:
    if (*(long *)(lStack_1c0 + _DAT_113076258) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    pbVar24 = pbStack_270;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0x12;
    break;
  case 0x13:
    if (*(long *)(lStack_1c0 + _DAT_113076260) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = pbStack_268;
    *(undefined8 *)(pbStack_268 + 0x68) = uStack_b8;
    *(undefined8 *)(pbStack_268 + 0x60) = uVar18;
    *(undefined8 *)(pbStack_268 + 0x78) = uVar25;
    *(undefined8 *)(pbStack_268 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbStack_268 + 0x88) = uStack_98;
    *(undefined8 *)(pbStack_268 + 0x80) = uVar18;
    *(undefined8 *)(pbStack_268 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    pbVar8 = pbStack_268 + 0x20;
    *(undefined8 *)(pbStack_268 + 0x28) = uStack_f8;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0x13;
    break;
  case 0x14:
    if (*(long *)(lStack_1c0 + _DAT_113076268) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar9 = lStack_1d8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    lVar20 = lStack_1d0;
    pcVar5 = pcStack_1e0;
    pbVar8 = pbStack_220;
    lVar10 = *(long *)(lVar7 + _DAT_113076270);
    if (lVar10 == 0) {
      uVar11 = 0;
      uVar19 = 0;
      uVar12 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar10 + _DAT_113075a68);
      puVar2 = (undefined8 *)(lVar10 + _DAT_113075a70);
      puVar3 = (undefined8 *)(lVar10 + _DAT_113075a78);
      uVar36 = *(undefined4 *)(lVar10 + _DAT_113075a80);
      uVar38 = puVar1[1];
      uVar37 = *puVar1;
      uVar12 = puVar1[2];
      uVar33 = puVar2[1];
      uVar32 = *puVar2;
      uVar19 = puVar2[2];
      uVar35 = puVar3[1];
      uVar34 = *puVar3;
      uVar11 = puVar3[2];
    }
    pbVar24 = pbStack_220 + 0x60;
    *(undefined8 *)(pbStack_220 + 0x68) = uStack_b8;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    *(undefined8 *)(pbVar8 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x80) = uVar18;
    *(undefined8 *)(pbVar8 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x20) = uVar18;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x40) = uVar18;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    *(undefined8 *)(pbVar8 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar8 + 8) = uStack_118;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    *(undefined8 *)(pbVar8 + 0xa0) = uVar38;
    *(undefined8 *)(pbVar8 + 0x98) = uVar37;
    *(undefined8 *)(pbVar8 + 0xa8) = uVar12;
    *(undefined8 *)(pbVar8 + 0xb8) = uVar33;
    *(undefined8 *)(pbVar8 + 0xb0) = uVar32;
    *(undefined8 *)(pbVar8 + 0xc0) = uVar19;
    *(undefined8 *)(pbVar8 + 0xd0) = uVar35;
    *(undefined8 *)(pbVar8 + 200) = uVar34;
    *(undefined8 *)(pbVar8 + 0xd8) = uVar11;
    *(undefined4 *)(pbVar8 + 0xe0) = uVar36;
    pbVar8[0xe4] = lVar10 == 0;
    uVar18 = 0x14;
    goto code_r0x0001043dfb30;
  case 0x15:
    if (*(long *)(lStack_1c0 + _DAT_113076278) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    lVar9 = lStack_1c0;
    lVar7 = *(long *)(lVar7 + _DAT_113076280);
    if (lVar7 == 0) {
      pbStack_210 = (byte *)0x0;
      pbStack_208 = (byte *)0x0;
      pbStack_220 = (byte *)0x0;
      pbStack_218 = (byte *)0x0;
      pbStack_230 = (byte *)0x0;
      pbStack_228 = (byte *)0x0;
      uStack_238 = (byte *)((ulong)uStack_238._4_4_ << 0x20);
      uVar23 = 0;
      uVar14 = 0;
      uVar16 = 0;
      uVar28 = 0;
      pbStack_240 = (byte *)0x0;
      uVar26 = 0;
      uStack_200 = (byte *)CONCAT44(uStack_200._4_4_,1);
    }
    else {
      uStack_200 = (byte *)((ulong)uStack_200._4_4_ << 0x20);
      puVar1 = (undefined8 *)(lVar7 + _DAT_113075a68);
      pbStack_208 = (byte *)*puVar1;
      pbStack_210 = (byte *)puVar1[2];
      puVar2 = (undefined8 *)(lVar7 + _DAT_113075a70);
      pbStack_218 = (byte *)*puVar2;
      pbStack_220 = (byte *)puVar2[2];
      puVar3 = (undefined8 *)(lVar7 + _DAT_113075a78);
      pbStack_228 = (byte *)*puVar3;
      pbStack_230 = (byte *)puVar3[2];
      uStack_238 = (byte *)CONCAT44(uStack_238._4_4_,*(undefined4 *)(lVar7 + _DAT_113075a80));
      pbStack_240 = (byte *)(ulong)*(uint *)(puVar1 + 1);
      uVar26 = (ulong)*(uint *)((long)puVar1 + 0xc) << 0x20;
      uVar16 = (ulong)*(uint *)(puVar2 + 1);
      uVar28 = (ulong)*(uint *)((long)puVar2 + 0xc) << 0x20;
      uVar23 = (ulong)*(uint *)(puVar3 + 1);
      uVar14 = (ulong)*(uint *)((long)puVar3 + 0xc) << 0x20;
    }
    puVar1 = (undefined8 *)(lStack_1c0 + _DAT_113076290);
    pbStack_1f0 = pbVar6;
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e093c);
      (*pcVar5)();
    }
    uVar38 = *puVar1;
    uVar37 = puVar1[1];
    uVar12 = *(undefined8 *)(lStack_1c0 + _DAT_113076288);
    _objc_retain(uVar12);
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = pbStack_1f8;
    uVar19 = *(undefined8 *)(lVar9 + _DAT_113076298);
    uVar26 = uVar26 | (ulong)pbStack_240;
    pbVar8 = pbStack_1f8 + 0x60;
    *(undefined8 *)(pbStack_1f8 + 0x68) = uStack_b8;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    uVar11 = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    *(undefined8 *)(pbVar24 + 0x90) = uVar11;
    *(byte **)(pbVar24 + 0x98) = pbStack_208;
    *(ulong *)(pbVar24 + 0xa0) = uVar26;
    pbVar8 = pbStack_218;
    *(byte **)(pbVar24 + 0xa8) = pbStack_210;
    *(byte **)(pbVar24 + 0xb0) = pbVar8;
    *(ulong *)(pbVar24 + 0xb8) = uVar28 | uVar16;
    *(byte **)(pbVar24 + 0xc0) = pbStack_220;
    *(byte **)(pbVar24 + 200) = pbStack_228;
    *(ulong *)(pbVar24 + 0xd0) = uVar14 | uVar23;
    pbVar6 = pbStack_1f0;
    *(byte **)(pbVar24 + 0xd8) = pbStack_230;
    *(undefined4 *)(pbVar24 + 0xe0) = (undefined4)uStack_238;
    pbVar24[0xe4] = (byte)uStack_200;
    *(undefined8 *)(pbVar24 + 0xe8) = uVar12;
    *(undefined8 *)(pbVar24 + 0xf0) = uVar38;
    *(undefined8 *)(pbVar24 + 0xf8) = uVar37;
    *(undefined8 *)(pbVar24 + 0x100) = uVar19;
    _swift_storeEnumTagMultiPayload(pbVar24,pbStack_1f0,0x15);
    (*pcStack_1e0)(pbVar24,0,1,pbVar6);
    lVar7 = lVar9;
    goto code_r0x0001043e0594;
  case 0x16:
    if (*(long *)(lStack_1c0 + _DAT_1130762a0) == 0) {
      func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
      func_0x0001043cd0a8(&uStack_120);
      uVar25 = uStack_a8;
      uVar22 = uStack_b0;
      uVar18 = uStack_c0;
      pbVar8 = pbStack_1f0;
      pbVar24 = pbStack_1f0 + 0x60;
      *(undefined8 *)(pbStack_1f0 + 0x68) = uStack_b8;
      *(undefined8 *)pbVar24 = uVar18;
      *(undefined8 *)(pbVar8 + 0x78) = uVar25;
      *(undefined8 *)(pbVar8 + 0x70) = uVar22;
      uVar18 = uStack_a0;
      *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
      *(undefined8 *)(pbVar8 + 0x80) = uVar18;
      *(undefined8 *)(pbVar8 + 0x90) = uStack_90;
      uVar25 = uStack_e8;
      uVar22 = uStack_f0;
      uVar18 = uStack_100;
      *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
      *(undefined8 *)(pbVar8 + 0x20) = uVar18;
      *(undefined8 *)(pbVar8 + 0x38) = uVar25;
      *(undefined8 *)(pbVar8 + 0x30) = uVar22;
      uVar25 = uStack_c8;
      uVar22 = uStack_d0;
      uVar18 = uStack_e0;
      *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
      *(undefined8 *)(pbVar8 + 0x40) = uVar18;
      *(undefined8 *)(pbVar8 + 0x58) = uVar25;
      *(undefined8 *)(pbVar8 + 0x50) = uVar22;
      uVar25 = uStack_108;
      uVar22 = uStack_110;
      uVar18 = uStack_120;
      *(undefined8 *)(pbVar8 + 8) = uStack_118;
      *(undefined8 *)pbVar8 = uVar18;
      *(undefined8 *)(pbVar8 + 0x18) = uVar25;
      *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    }
    else {
      FUN_1043d41b8(&uStack_120);
      pbVar31 = pbStack_1c8;
      func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
      uVar25 = uStack_a8;
      uVar22 = uStack_b0;
      uVar18 = uStack_c0;
      pbVar8 = pbStack_1f0;
      pbVar24 = pbStack_1f0 + 0x60;
      *(undefined8 *)(pbStack_1f0 + 0x68) = uStack_b8;
      *(undefined8 *)pbVar24 = uVar18;
      *(undefined8 *)(pbVar8 + 0x78) = uVar25;
      *(undefined8 *)(pbVar8 + 0x70) = uVar22;
      uVar18 = uStack_a0;
      *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
      *(undefined8 *)(pbVar8 + 0x80) = uVar18;
      *(undefined8 *)(pbVar8 + 0x90) = uStack_90;
      uVar25 = uStack_e8;
      uVar22 = uStack_f0;
      uVar18 = uStack_100;
      *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
      *(undefined8 *)(pbVar8 + 0x20) = uVar18;
      *(undefined8 *)(pbVar8 + 0x38) = uVar25;
      *(undefined8 *)(pbVar8 + 0x30) = uVar22;
      uVar25 = uStack_c8;
      uVar22 = uStack_d0;
      uVar18 = uStack_e0;
      *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
      *(undefined8 *)(pbVar8 + 0x40) = uVar18;
      *(undefined8 *)(pbVar8 + 0x58) = uVar25;
      *(undefined8 *)(pbVar8 + 0x50) = uVar22;
      uVar25 = uStack_108;
      uVar22 = uStack_110;
      uVar18 = uStack_120;
      *(undefined8 *)(pbVar8 + 8) = uStack_118;
      *(undefined8 *)pbVar8 = uVar18;
      *(undefined8 *)(pbVar8 + 0x18) = uVar25;
      *(undefined8 *)(pbVar8 + 0x10) = uVar22;
      func_0x0001043cd0dc(pbVar8);
    }
    lVar9 = *(long *)(lVar7 + _DAT_1130762a8);
    if (lVar9 == 0) {
      pbVar8[0xd8] = 0;
      pbVar8[0xd9] = 0;
      pbVar8[0xda] = 0;
      pbVar8[0xdb] = 0;
      pbVar8[0xdc] = 0;
      pbVar8[0xdd] = 0;
      pbVar8[0xde] = 0;
      pbVar8[0xdf] = 0;
      pbVar8[0xd0] = 0;
      pbVar8[0xd1] = 0;
      pbVar8[0xd2] = 0;
      pbVar8[0xd3] = 0;
      pbVar8[0xd4] = 0;
      pbVar8[0xd5] = 0;
      pbVar8[0xd6] = 0;
      pbVar8[0xd7] = 0;
      pbVar8[200] = 0;
      pbVar8[0xc9] = 0;
      pbVar8[0xca] = 0;
      pbVar8[0xcb] = 0;
      pbVar8[0xcc] = 0;
      pbVar8[0xcd] = 0;
      pbVar8[0xce] = 0;
      pbVar8[0xcf] = 0;
      pbVar8[0xc0] = 0;
      pbVar8[0xc1] = 0;
      pbVar8[0xc2] = 0;
      pbVar8[0xc3] = 0;
      pbVar8[0xc4] = 0;
      pbVar8[0xc5] = 0;
      pbVar8[0xc6] = 0;
      pbVar8[199] = 0;
      pbVar8[0xb8] = 0;
      pbVar8[0xb9] = 0;
      pbVar8[0xba] = 0;
      pbVar8[0xbb] = 0;
      pbVar8[0xbc] = 0;
      pbVar8[0xbd] = 0;
      pbVar8[0xbe] = 0;
      pbVar8[0xbf] = 0;
      pbVar8[0xb0] = 0;
      pbVar8[0xb1] = 0;
      pbVar8[0xb2] = 0;
      pbVar8[0xb3] = 0;
      pbVar8[0xb4] = 0;
      pbVar8[0xb5] = 0;
      pbVar8[0xb6] = 0;
      pbVar8[0xb7] = 0;
      pbVar8[0xa8] = 0;
      pbVar8[0xa9] = 0;
      pbVar8[0xaa] = 0;
      pbVar8[0xab] = 0;
      pbVar8[0xac] = 0;
      pbVar8[0xad] = 0;
      pbVar8[0xae] = 0;
      pbVar8[0xaf] = 0;
      pbVar8[0xa0] = 0;
      pbVar8[0xa1] = 0;
      pbVar8[0xa2] = 0;
      pbVar8[0xa3] = 0;
      pbVar8[0xa4] = 0;
      pbVar8[0xa5] = 0;
      pbVar8[0xa6] = 0;
      pbVar8[0xa7] = 0;
      pbVar8[0x98] = 0;
      pbVar8[0x99] = 0;
      pbVar8[0x9a] = 0;
      pbVar8[0x9b] = 0;
      pbVar8[0x9c] = 0;
      pbVar8[0x9d] = 0;
      pbVar8[0x9e] = 0;
      pbVar8[0x9f] = 0;
      uVar36 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar9 + _DAT_113075a68);
      uVar22 = puVar1[1];
      uVar18 = puVar1[2];
      *(undefined8 *)(pbVar8 + 0x98) = *puVar1;
      *(undefined8 *)(pbVar8 + 0xa0) = uVar22;
      *(undefined8 *)(pbVar8 + 0xa8) = uVar18;
      puVar1 = (undefined8 *)(lVar9 + _DAT_113075a70);
      uVar22 = puVar1[1];
      uVar18 = puVar1[2];
      *(undefined8 *)(pbVar8 + 0xb0) = *puVar1;
      *(undefined8 *)(pbVar8 + 0xb8) = uVar22;
      *(undefined8 *)(pbVar8 + 0xc0) = uVar18;
      puVar1 = (undefined8 *)(lVar9 + _DAT_113075a78);
      uVar22 = puVar1[1];
      uVar18 = puVar1[2];
      *(undefined8 *)(pbVar8 + 200) = *puVar1;
      *(undefined8 *)(pbVar8 + 0xd0) = uVar22;
      *(undefined8 *)(pbVar8 + 0xd8) = uVar18;
      uVar36 = *(undefined4 *)(lVar9 + _DAT_113075a80);
    }
    *(undefined4 *)(pbVar8 + 0xe0) = uVar36;
    pbVar8[0xe4] = lVar9 == 0;
    lVar9 = 0x113075228;
    func_0x0001000285a8(0x113075228,&UNK_10dcf6f60);
    pbVar24 = pbVar8 + *(int *)(lVar9 + 0x40);
    lVar9 = *(long *)(lVar7 + _DAT_1130762b0);
    if (lVar9 == 0) {
      lVar9 = 0;
      FUN_1043ba274();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(pbVar24,1,1,lVar9);
    }
    else {
      func_0x0001043e2a94(lVar9 + _DAT_113813588,pbVar24,0x112d36580,&UNK_10d9016d0);
      lVar20 = _DAT_113813590;
      lVar10 = 0;
      FUN_1043ba274();
      func_0x0001043e2a94(lVar9 + lVar20,pbVar24 + *(int *)(lVar10 + 0x14),0x112d36580,
                          &UNK_10d9016d0);
      *(undefined8 *)(pbVar24 + *(int *)(lVar10 + 0x18)) = *(undefined8 *)(lVar9 + _DAT_113813598);
      uVar18 = *(undefined8 *)(lVar9 + _DAT_1138135a0);
      *(undefined8 *)(pbVar24 + *(int *)(lVar10 + 0x1c)) = uVar18;
      pbVar24[*(int *)(lVar10 + 0x20)] = *(byte *)(lVar9 + _DAT_1138135a8);
      *(undefined8 *)(pbVar24 + *(int *)(lVar10 + 0x24)) = *(undefined8 *)(lVar9 + _DAT_1138135b0);
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(pbVar24,0,1,lVar10);
      pbVar8 = pbStack_1f0;
      _objc_retain(uVar18);
    }
    lVar20 = lStack_1d0;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0x16);
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
    goto code_r0x0001043e0904;
  case 0x17:
    if (*(long *)(lStack_1c0 + _DAT_1130762b8) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    lVar20 = lStack_1d0;
    pcVar5 = pcStack_1e0;
    pbVar8 = pbStack_218;
    lVar9 = *(long *)(lVar7 + _DAT_1130762c0);
    if (lVar9 == 0) {
      uVar11 = 0;
      uVar19 = 0;
      uVar12 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar9 + _DAT_113075a68);
      puVar2 = (undefined8 *)(lVar9 + _DAT_113075a70);
      puVar3 = (undefined8 *)(lVar9 + _DAT_113075a78);
      uVar36 = *(undefined4 *)(lVar9 + _DAT_113075a80);
      uVar38 = puVar1[1];
      uVar37 = *puVar1;
      uVar11 = puVar1[2];
      uVar33 = puVar2[1];
      uVar32 = *puVar2;
      uVar19 = puVar2[2];
      uVar35 = puVar3[1];
      uVar34 = *puVar3;
      uVar12 = puVar3[2];
    }
    uVar15 = *(undefined8 *)(lVar7 + _DAT_1130762c8);
    pbVar24 = pbStack_218 + 0x60;
    *(undefined8 *)(pbStack_218 + 0x68) = uStack_b8;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    *(undefined8 *)(pbVar8 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x80) = uVar18;
    *(undefined8 *)(pbVar8 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x20) = uVar18;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x40) = uVar18;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    *(undefined8 *)(pbVar8 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar8 + 8) = uStack_118;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    *(undefined8 *)(pbVar8 + 0xa0) = uVar38;
    *(undefined8 *)(pbVar8 + 0x98) = uVar37;
    *(undefined8 *)(pbVar8 + 0xa8) = uVar11;
    *(undefined8 *)(pbVar8 + 0xb8) = uVar33;
    *(undefined8 *)(pbVar8 + 0xb0) = uVar32;
    *(undefined8 *)(pbVar8 + 0xc0) = uVar19;
    *(undefined8 *)(pbVar8 + 0xd0) = uVar35;
    *(undefined8 *)(pbVar8 + 200) = uVar34;
    *(undefined8 *)(pbVar8 + 0xd8) = uVar12;
    *(undefined4 *)(pbVar8 + 0xe0) = uVar36;
    pbVar8[0xe4] = lVar9 == 0;
    *(undefined8 *)(pbVar8 + 0xe8) = uVar15;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0x17);
    (*pcVar5)(pbVar8,0,1,pbVar6);
    func_0x0001043e2a4c(pbVar8,pbVar31,0x113076388,&UNK_10dcf6f70);
    _swift_errorRetain(uVar15);
    lVar9 = lStack_1d8;
    goto code_r0x0001043e07f0;
  case 0x18:
    if (*(long *)(lStack_1c0 + _DAT_1130762d0) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar9 = lStack_1d8;
    pbVar8 = pbStack_208;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    lVar20 = lStack_1d0;
    pcVar5 = pcStack_1e0;
    lVar10 = *(long *)(lVar7 + _DAT_1130762d8);
    if (lVar10 == 0) {
      uVar11 = 0;
      uVar19 = 0;
      uVar12 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar10 + _DAT_113075a68);
      puVar2 = (undefined8 *)(lVar10 + _DAT_113075a70);
      puVar3 = (undefined8 *)(lVar10 + _DAT_113075a78);
      uVar36 = *(undefined4 *)(lVar10 + _DAT_113075a80);
      uVar38 = puVar1[1];
      uVar37 = *puVar1;
      uVar11 = puVar1[2];
      uVar33 = puVar2[1];
      uVar32 = *puVar2;
      uVar19 = puVar2[2];
      uVar35 = puVar3[1];
      uVar34 = *puVar3;
      uVar12 = puVar3[2];
    }
    *(undefined8 *)(pbVar8 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar8 + 0x60) = uVar18;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    *(undefined8 *)(pbVar8 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x80) = uVar18;
    *(undefined8 *)(pbVar8 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x20) = uVar18;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x40) = uVar18;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    *(undefined8 *)(pbVar8 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar8 + 8) = uStack_118;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    *(undefined8 *)(pbVar8 + 0xa0) = uVar38;
    *(undefined8 *)(pbVar8 + 0x98) = uVar37;
    *(undefined8 *)(pbVar8 + 0xa8) = uVar11;
    *(undefined8 *)(pbVar8 + 0xb8) = uVar33;
    *(undefined8 *)(pbVar8 + 0xb0) = uVar32;
    *(undefined8 *)(pbVar8 + 0xc0) = uVar19;
    *(undefined8 *)(pbVar8 + 0xd0) = uVar35;
    *(undefined8 *)(pbVar8 + 200) = uVar34;
    *(undefined8 *)(pbVar8 + 0xd8) = uVar12;
    *(undefined4 *)(pbVar8 + 0xe0) = uVar36;
    pbVar8[0xe4] = lVar10 == 0;
    uVar18 = 0x18;
code_r0x0001043dfb30:
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,uVar18);
    (*pcVar5)(pbVar8,0,1,pbVar6);
    func_0x0001043e2a4c(pbVar8,pbVar31,0x113076388,&UNK_10dcf6f70);
    goto code_r0x0001043e07f0;
  case 0x19:
    if (*(char *)((undefined8 *)(lStack_1c0 + _DAT_1130762e8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e092c);
      (*pcVar5)();
    }
    uVar18 = *(undefined8 *)(lStack_1c0 + _DAT_1130762e0);
    uVar22 = *(undefined8 *)(lStack_1c0 + _DAT_1130762e8);
    _swift_errorRetain(uVar18);
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    lVar20 = lStack_1d0;
    pbVar8 = pbStack_228;
    lVar9 = *(long *)(lVar7 + _DAT_1130762f0);
    if (lVar9 == 0) {
      uVar25 = 0;
      uVar11 = 0;
      uVar19 = 0;
      uVar12 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar36 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar9 + _DAT_113075a68);
      puVar2 = (undefined8 *)(lVar9 + _DAT_113075a70);
      puVar3 = (undefined8 *)(lVar9 + _DAT_113075a78);
      uVar36 = *(undefined4 *)(lVar9 + _DAT_113075a80);
      uVar37 = puVar1[1];
      uVar12 = *puVar1;
      uVar25 = puVar1[2];
      uVar32 = puVar2[1];
      uVar38 = *puVar2;
      uVar11 = puVar2[2];
      uVar34 = puVar3[1];
      uVar33 = *puVar3;
      uVar19 = puVar3[2];
    }
    *(undefined8 *)pbStack_228 = uVar18;
    *(undefined8 *)(pbVar8 + 8) = uVar22;
    *(undefined8 *)(pbVar8 + 0x18) = uVar37;
    *(undefined8 *)(pbVar8 + 0x10) = uVar12;
    *(undefined8 *)(pbVar8 + 0x20) = uVar25;
    *(undefined8 *)(pbVar8 + 0x30) = uVar32;
    *(undefined8 *)(pbVar8 + 0x28) = uVar38;
    *(undefined8 *)(pbVar8 + 0x38) = uVar11;
    *(undefined8 *)(pbVar8 + 0x48) = uVar34;
    *(undefined8 *)(pbVar8 + 0x40) = uVar33;
    *(undefined8 *)(pbVar8 + 0x50) = uVar19;
    *(undefined4 *)(pbVar8 + 0x58) = uVar36;
    pbVar8[0x5c] = lVar9 == 0;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0x19);
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
code_r0x0001043e0904:
    func_0x0001043e2a4c(pbVar8,pbVar31,0x113076388,&UNK_10dcf6f70);
    lVar9 = lStack_1d8;
    goto code_r0x0001043e07f0;
  case 0x1a:
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    lVar7 = lStack_1c0;
    lVar20 = lStack_1d0;
    lVar9 = lStack_1d8;
    pcVar5 = pcStack_1e0;
    lVar10 = *(long *)(lStack_1c0 + _DAT_1130762f8);
    if (lVar10 == 0) {
      uVar18 = 0;
      uVar22 = 0;
      uVar25 = 0;
      uVar11 = 0;
      uVar19 = 0;
      uVar12 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar32 = 0;
      uVar36 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar10 + _DAT_113075a68);
      puVar2 = (undefined8 *)(lVar10 + _DAT_113075a70);
      puVar3 = (undefined8 *)(lVar10 + _DAT_113075a78);
      uVar36 = *(undefined4 *)(lVar10 + _DAT_113075a80);
      uVar19 = puVar1[1];
      uVar11 = *puVar1;
      uVar18 = puVar1[2];
      uVar37 = puVar2[1];
      uVar12 = *puVar2;
      uVar22 = puVar2[2];
      uVar32 = puVar3[1];
      uVar38 = *puVar3;
      uVar25 = puVar3[2];
    }
    *(undefined8 *)(pbVar31 + 8) = uVar19;
    *(undefined8 *)pbVar31 = uVar11;
    *(undefined8 *)(pbVar31 + 0x10) = uVar18;
    *(undefined8 *)(pbVar31 + 0x20) = uVar37;
    *(undefined8 *)(pbVar31 + 0x18) = uVar12;
    *(undefined8 *)(pbVar31 + 0x28) = uVar22;
    *(undefined8 *)(pbVar31 + 0x38) = uVar32;
    *(undefined8 *)(pbVar31 + 0x30) = uVar38;
    *(undefined8 *)(pbVar31 + 0x40) = uVar25;
    *(undefined4 *)(pbVar31 + 0x48) = uVar36;
    pbVar31[0x4c] = lVar10 == 0;
    _swift_storeEnumTagMultiPayload(pbVar31,pbVar6,0x1a);
    (*pcVar5)(pbVar31,0,1,pbVar6);
    goto code_r0x0001043e07f0;
  case 0x1b:
    puVar1 = (undefined8 *)(lStack_1c0 + _DAT_113076300);
    if (*(char *)(puVar1 + 3) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0920);
      (*pcVar5)();
    }
    uVar18 = puVar1[1];
    uVar22 = puVar1[2];
    uVar25 = *puVar1;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    pbVar24 = pbStack_258;
    uVar19 = *(undefined8 *)(lVar7 + _DAT_113076308);
    *(undefined8 *)pbStack_258 = uVar25;
    *(int *)(pbVar24 + 8) = (int)uVar18;
    *(int *)(pbVar24 + 0xc) = (int)((ulong)uVar18 >> 0x20);
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    *(undefined8 *)(pbVar24 + 0x18) = uVar19;
    _swift_storeEnumTagMultiPayload(pbVar24,pbVar6,0x1b);
    (*pcStack_1e0)(pbVar24,0,1,pbVar6);
    goto code_r0x0001043e0594;
  case 0x1c:
    if (*(long *)(lStack_1c0 + _DAT_113076310) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    pbVar24 = uStack_238;
    uVar19 = *(undefined8 *)(lVar7 + _DAT_113076318);
    pbVar8 = uStack_238 + 0x60;
    *(undefined8 *)(uStack_238 + 0x68) = uStack_b8;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    uVar11 = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    *(undefined8 *)(pbVar24 + 0x90) = uVar11;
    *(undefined8 *)(pbVar24 + 0x98) = uVar19;
    _swift_storeEnumTagMultiPayload(pbVar24,pbVar6,0x1c);
    (*pcStack_1e0)(pbVar24,0,1,pbVar6);
code_r0x0001043e0594:
    func_0x0001043e2a4c(pbVar24,pbVar31,0x113076388,&UNK_10dcf6f70);
    _objc_retain(uVar19);
    lVar9 = lStack_1d8;
    lVar20 = lStack_1d0;
    goto code_r0x0001043e07f0;
  case 0x1d:
    if (*(long *)(lStack_1c0 + _DAT_113076320) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    lVar20 = lStack_1d0;
    pbVar24 = pbStack_230;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar25 = uStack_a8;
    uVar22 = uStack_b0;
    uVar18 = uStack_c0;
    *(undefined8 *)(pbVar24 + 0x68) = uStack_b8;
    *(undefined8 *)(pbVar24 + 0x60) = uVar18;
    *(undefined8 *)(pbVar24 + 0x78) = uVar25;
    *(undefined8 *)(pbVar24 + 0x70) = uVar22;
    uVar18 = uStack_a0;
    *(undefined8 *)(pbVar24 + 0x88) = uStack_98;
    *(undefined8 *)(pbVar24 + 0x80) = uVar18;
    *(undefined8 *)(pbVar24 + 0x90) = uStack_90;
    uVar25 = uStack_e8;
    uVar22 = uStack_f0;
    uVar18 = uStack_100;
    *(undefined8 *)(pbVar24 + 0x28) = uStack_f8;
    *(undefined8 *)(pbVar24 + 0x20) = uVar18;
    *(undefined8 *)(pbVar24 + 0x38) = uVar25;
    *(undefined8 *)(pbVar24 + 0x30) = uVar22;
    uVar25 = uStack_c8;
    uVar22 = uStack_d0;
    uVar18 = uStack_e0;
    *(undefined8 *)(pbVar24 + 0x48) = uStack_d8;
    *(undefined8 *)(pbVar24 + 0x40) = uVar18;
    *(undefined8 *)(pbVar24 + 0x58) = uVar25;
    *(undefined8 *)(pbVar24 + 0x50) = uVar22;
    uVar25 = uStack_108;
    uVar22 = uStack_110;
    uVar18 = uStack_120;
    *(undefined8 *)(pbVar24 + 8) = uStack_118;
    *(undefined8 *)pbVar24 = uVar18;
    *(undefined8 *)(pbVar24 + 0x18) = uVar25;
    *(undefined8 *)(pbVar24 + 0x10) = uVar22;
    uVar18 = 0x1d;
    break;
  case 0x1e:
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    lVar7 = lStack_1c0;
    uVar18 = *(undefined8 *)(lStack_1c0 + _DAT_113076328);
    *(undefined8 *)pbVar31 = uVar18;
    _swift_storeEnumTagMultiPayload(pbVar31,pbVar6,0x1e);
    (*pcStack_1e0)(pbVar31,0,1,pbVar6);
    _swift_bridgeObjectRetain(uVar18);
    lVar9 = lStack_1d8;
    lVar20 = lStack_1d0;
    goto code_r0x0001043e07f0;
  case 0x1f:
    puVar1 = (undefined8 *)(lStack_1c0 + _DAT_113076330);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0930);
      (*pcVar5)();
    }
    uVar22 = *puVar1;
    uVar18 = puVar1[1];
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    pbVar8 = pbStack_250;
    *(undefined8 *)pbStack_250 = uVar22;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    uVar18 = 0x1f;
    goto code_r0x0001043df394;
  case 0x20:
    puVar1 = (undefined8 *)(lStack_1c0 + _DAT_113076338);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0934);
      (*pcVar5)();
    }
    uVar22 = *puVar1;
    uVar18 = puVar1[1];
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    pbVar8 = pbStack_248;
    *(undefined8 *)pbStack_248 = uVar22;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    uVar18 = 0x20;
code_r0x0001043df394:
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,uVar18);
code_r0x0001043df3a8:
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
    goto code_r0x0001043e07e4;
  case 0x21:
    if (*(char *)((undefined4 *)(lStack_1c0 + _DAT_113076340) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0928);
      (*pcVar5)();
    }
    if (*(char *)((undefined8 *)(lStack_1c0 + _DAT_113076348) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0948);
      (*pcVar5)();
    }
    uVar18 = *(undefined8 *)(lStack_1c0 + _DAT_113076348);
    uVar36 = *(undefined4 *)(lStack_1c0 + _DAT_113076340);
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    pbVar8 = pbStack_240;
    *(undefined4 *)pbStack_240 = uVar36;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0x21);
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
    goto code_r0x0001043e07e4;
  case 0x22:
    bVar4 = *(byte *)(lStack_1c0 + _DAT_113076350);
    if (bVar4 == 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0924);
      (*pcVar5)();
    }
    if (*(char *)((undefined8 *)(lStack_1c0 + _DAT_113076358) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0944);
      (*pcVar5)();
    }
    if (*(char *)((undefined8 *)(lStack_1c0 + _DAT_113076360) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0950);
      (*pcVar5)();
    }
    uVar18 = *(undefined8 *)(lStack_1c0 + _DAT_113076358);
    uVar22 = *(undefined8 *)(lStack_1c0 + _DAT_113076360);
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    pbVar8 = pbStack_2c0;
    *pbStack_2c0 = bVar4 & 1;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    *(undefined8 *)(pbVar8 + 0x10) = uVar22;
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,0x22);
    goto code_r0x0001043df3a8;
  case 0x23:
    if (*(char *)((undefined8 *)(lStack_1c0 + _DAT_113076368) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0918);
      (*pcVar5)();
    }
    uVar18 = *(undefined8 *)(lStack_1c0 + _DAT_113076368);
    if (*(long *)(lStack_1c0 + _DAT_113076370) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar11 = uStack_a8;
    uVar25 = uStack_b0;
    uVar22 = uStack_c0;
    pbVar8 = pbStack_210;
    pbVar24 = pbStack_210 + 0x68;
    *(undefined8 *)(pbStack_210 + 0x70) = uStack_b8;
    *(undefined8 *)pbVar24 = uVar22;
    *(undefined8 *)(pbVar8 + 0x80) = uVar11;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    uVar22 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x90) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x88) = uVar22;
    uVar11 = uStack_e8;
    uVar25 = uStack_f0;
    uVar22 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x30) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x28) = uVar22;
    *(undefined8 *)(pbVar8 + 0x40) = uVar11;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    uVar11 = uStack_c8;
    uVar25 = uStack_d0;
    uVar22 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x50) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x48) = uVar22;
    *(undefined8 *)(pbVar8 + 0x60) = uVar11;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    uVar11 = uStack_108;
    uVar25 = uStack_110;
    uVar22 = uStack_120;
    *(undefined8 *)(pbVar8 + 0x10) = uStack_118;
    *(undefined8 *)(pbVar8 + 8) = uVar22;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x98) = uStack_90;
    *(undefined8 *)(pbVar8 + 0x20) = uVar11;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    uVar18 = 0x23;
    goto code_r0x0001043e07b8;
  case 0x24:
    if (*(char *)((undefined8 *)(lStack_1c0 + _DAT_113076378) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e091c);
      (*pcVar5)();
    }
    uVar18 = *(undefined8 *)(lStack_1c0 + _DAT_113076378);
    if (*(long *)(lStack_1c0 + _DAT_113076380) == 0) {
      func_0x0001043cd0a8(&uStack_120);
    }
    else {
      FUN_1043d41b8(&uStack_1b8);
      func_0x0001043cd0dc(&uStack_1b8);
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      uStack_90 = uStack_128;
      uStack_f8 = uStack_190;
      uStack_100 = uStack_198;
      uStack_e8 = uStack_180;
      uStack_f0 = uStack_188;
      uStack_d8 = uStack_170;
      uStack_e0 = uStack_178;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      uStack_118 = uStack_1b0;
      uStack_120 = uStack_1b8;
      uStack_108 = uStack_1a0;
      uStack_110 = uStack_1a8;
    }
    pbVar31 = pbStack_1c8;
    func_0x0001043e2a0c(pbStack_1c8,0x113076388,&UNK_10dcf6f70);
    uVar11 = uStack_a8;
    uVar25 = uStack_b0;
    uVar22 = uStack_c0;
    pbVar8 = uStack_200;
    pbVar24 = uStack_200 + 0x68;
    *(undefined8 *)(uStack_200 + 0x70) = uStack_b8;
    *(undefined8 *)pbVar24 = uVar22;
    *(undefined8 *)(pbVar8 + 0x80) = uVar11;
    *(undefined8 *)(pbVar8 + 0x78) = uVar25;
    uVar22 = uStack_a0;
    *(undefined8 *)(pbVar8 + 0x90) = uStack_98;
    *(undefined8 *)(pbVar8 + 0x88) = uVar22;
    uVar11 = uStack_e8;
    uVar25 = uStack_f0;
    uVar22 = uStack_100;
    *(undefined8 *)(pbVar8 + 0x30) = uStack_f8;
    *(undefined8 *)(pbVar8 + 0x28) = uVar22;
    *(undefined8 *)(pbVar8 + 0x40) = uVar11;
    *(undefined8 *)(pbVar8 + 0x38) = uVar25;
    uVar11 = uStack_c8;
    uVar25 = uStack_d0;
    uVar22 = uStack_e0;
    *(undefined8 *)(pbVar8 + 0x50) = uStack_d8;
    *(undefined8 *)(pbVar8 + 0x48) = uVar22;
    *(undefined8 *)(pbVar8 + 0x60) = uVar11;
    *(undefined8 *)(pbVar8 + 0x58) = uVar25;
    uVar11 = uStack_108;
    uVar25 = uStack_110;
    uVar22 = uStack_120;
    *(undefined8 *)(pbVar8 + 0x10) = uStack_118;
    *(undefined8 *)(pbVar8 + 8) = uVar22;
    *(undefined8 *)pbVar8 = uVar18;
    *(undefined8 *)(pbVar8 + 0x98) = uStack_90;
    *(undefined8 *)(pbVar8 + 0x20) = uVar11;
    *(undefined8 *)(pbVar8 + 0x18) = uVar25;
    uVar18 = 0x24;
code_r0x0001043e07b8:
    _swift_storeEnumTagMultiPayload(pbVar8,pbVar6,uVar18);
    (*pcStack_1e0)(pbVar8,0,1,pbVar6);
code_r0x0001043e07e4:
    func_0x0001043e2a4c(pbVar8,pbVar31,0x113076388,&UNK_10dcf6f70);
    lVar9 = lStack_1d8;
    lVar20 = lStack_1d0;
    goto code_r0x0001043e07f0;
  }
  _swift_storeEnumTagMultiPayload(pbVar24,pbVar6,uVar18);
  (*pcStack_1e0)(pbVar24,0,1,pbVar6);
  pbVar27 = pbVar24;
code_r0x0001043e0638:
  func_0x0001043e2a4c(pbVar27,pbVar31,0x113076388,&UNK_10dcf6f70);
  lVar9 = lStack_1d8;
code_r0x0001043e07f0:
  func_0x0001043e2a94(pbVar31,lVar20,0x113076388,&UNK_10dcf6f70);
  lVar10 = lVar20;
  (**(code **)(lVar9 + 0x30))(lVar20,1,pbVar6);
  if ((int)lVar10 == 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1043e0914);
    (*pcVar5)();
  }
  func_0x0001043e2a0c(pbVar31,0x113076388,&UNK_10dcf6f70);
  _objc_release(lVar7);
  func_0x0001043e2adc(lVar20,uStack_1e8,0x1043c9a84);
  return;
}



/* Entry: 1043e0950; end: 1043e0997; -[SCCapturerStateUpdate init] */

void FUN_1043e0950(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCCapturerStateUpdateWrapper.swift",0x2d,2,0x17f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043e0998);
  (*pcVar1)();
}



/* Entry: 1043e0998; end: 1043e099b; -[SCCapturerStateUpdate copyWithZone:] */

void FUN_1043e0998(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043e099c; end: 1043e09db; +[SCCapturerStateUpdate sessionDidStartRunningWithState:] */

void FUN_1043e099c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e2b30(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e09dc; end: 1043e0a1b; +[SCCapturerStateUpdate sessionDidStopRunningWithState:] */

void FUN_1043e09dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e2ecc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0a1c; end: 1043e0a5b; +[SCCapturerStateUpdate capturerDidStartRunningWithState:] */

void FUN_1043e0a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e3268(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0a5c; end: 1043e0a9b; +[SCCapturerStateUpdate capturerDidStopRunningWithState:] */

void FUN_1043e0a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e3604(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0a9c; end: 1043e0adb; +[SCCapturerStateUpdate didResetFromRuntimeErrorWithState:] */

void FUN_1043e0a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e39a4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0adc; end: 1043e0b1b; +[SCCapturerStateUpdate didChangeStateWithState:] */

void FUN_1043e0adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e3d44(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0b1c; end: 1043e0b5b; +[SCCapturerStateUpdate didChangeFrameRateWithState:] */

void FUN_1043e0b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e40e4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0b5c; end: 1043e0b9b; +[SCCapturerStateUpdate didChangeStabilizationModeActiveWithState:] */

void FUN_1043e0b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e4484(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0b9c; end: 1043e0bdb; +[SCCapturerStateUpdate didChangeFlashActiveWithState:] */

void FUN_1043e0b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e4824(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0bdc; end: 1043e0c1b; +[SCCapturerStateUpdate didChangeRingFlashStateWithState:] */

void FUN_1043e0bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e4bc4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0c1c; end: 1043e0c5b; +[SCCapturerStateUpdate didChangeLensesActiveWithState:] */

void FUN_1043e0c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e4f64(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0c5c; end: 1043e0c9b; +[SCCapturerStateUpdate didChangeARSessionActiveWithState:] */

void FUN_1043e0c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e5304(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0c9c; end: 1043e0cdb; +[SCCapturerStateUpdate didChangeFlashSupportedAndTorchSupportedWithState:] */

void FUN_1043e0c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e56a4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0cdc; end: 1043e0d2b; +[SCCapturerStateUpdate didChangeZoomFactorWithState:devicePosition:] */

void FUN_1043e0cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e5a44(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0d2c; end: 1043e0d6b; +[SCCapturerStateUpdate didChangeLowLightConditionWithState:] */

void FUN_1043e0d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e5df0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0d6c; end: 1043e0dab; +[SCCapturerStateUpdate didChangeAdjustingExposureWithState:] */

void FUN_1043e0d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e6190(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0dac; end: 1043e0deb; +[SCCapturerStateUpdate didChangeAdjustingFocusWithState:] */

void FUN_1043e0dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e6530(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0dec; end: 1043e0e43; +[SCCapturerStateUpdate didChangeCaptureDevicePositionWithState:oldPrimaryDevicePosition:oldSecondaryDevicePositions:] */

void FUN_1043e0dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e68d0(param_3,param_4,param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0e44; end: 1043e0e83; +[SCCapturerStateUpdate didChangeToneModeActiveWithState:] */

void FUN_1043e0e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e6c80(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0e84; end: 1043e0ec3; +[SCCapturerStateUpdate willBeginVideoRecordingWithState:] */

void FUN_1043e0e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043e7020(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0ec4; end: 1043e0f27; +[SCCapturerStateUpdate didBeginVideoRecordingWithState:session:] */

void FUN_1043e0ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  FUN_1043e73c0(param_3,param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0f28; end: 1043e0feb; +[SCCapturerStateUpdate willFinishRecordingWithState:session:recordedVideoFuture:videoSize:placeholderImage:] */

void FUN_1043e0f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  uVar2 = param_6;
  _objc_retain(param_6);
  uVar3 = param_7;
  _objc_retain(param_7);
  uVar4 = param_8;
  _objc_retain(param_8);
  FUN_1043e7774(param_1,param_2,param_5,param_6,param_7,param_8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1043e0fec; end: 1043e0ff7; +[SCCapturerStateUpdate didFinishRecordingWithState:session:recordedVideo:] */

void FUN_1043e0fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  FUN_1043e7b58(param_3,param_4,param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e0ff8; end: 1043e1003; +[SCCapturerStateUpdate didFailRecordingWithState:session:error:] */

void FUN_1043e0ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  FUN_1043e7f18(param_3,param_4,param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e1004; end: 1043e1097;  */

void FUN_1043e1004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  (*param_6)(param_3,param_4,param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e1098; end: 1043e10fb; +[SCCapturerStateUpdate didCancelRecordingWithState:session:] */

void FUN_1043e1098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  FUN_1043e82e0(param_3,param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e10fc; end: 1043e116f; +[SCCapturerStateUpdate didGetErrorWithError:type:session:] */

void FUN_1043e10fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  uVar2 = param_3;
  _objc_retain(param_3);
  FUN_1043e8694(param_3,param_4,param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e1170; end: 1043e11af; +[SCCapturerStateUpdate didCallLenseResumeWithSession:] */

void FUN_1043e1170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e8a58(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e11b0; end: 1043e1213; +[SCCapturerStateUpdate didAppendVideoSampleBufferWithPresentationTime:sampleMetadata:] */

void FUN_1043e11b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_3;
  uVar1 = param_3[1];
  uVar4 = param_3[2];
  uVar2 = param_4;
  _objc_retain(param_4);
  FUN_1043e8df8(uVar3,uVar1,uVar4,param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043e1214; end: 1043e1277; +[SCCapturerStateUpdate willCapturePhotoWithState:sampleMetadata:] */

void FUN_1043e1214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  FUN_1043e91b4(param_3,param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e1278; end: 1043e12b7; +[SCCapturerStateUpdate didCapturePhotoWithState:] */

void FUN_1043e1278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043e9568(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e12b8; end: 1043e134b; +[SCCapturerStateUpdate didDetectFaceBoundsWithFaceBoundsByFaceID:] */

void FUN_1043e12b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1043eb494(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = 0;
    FUN_1043eb494(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar3 = uVar2;
    func_0x000100120cb0();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,uVar1,uVar2,uVar3);
  }
  lVar4 = param_3;
  func_0x0001043e9908(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1043e134c; end: 1043e135f; +[SCCapturerStateUpdate didChangeExposurePointWithExposurePoint:] */

void FUN_1043e134c(void)

{
  FUN_1043e9ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043e1360; end: 1043e1373; +[SCCapturerStateUpdate didChangeFocusPointWithFocusPoint:] */

void FUN_1043e1360(void)

{
  func_0x0001043ea048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043e1374; end: 1043e138b; +[SCCapturerStateUpdate didChangeLensPositionWithLensPosition:devicePosition:] */

void FUN_1043e1374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001043ea3e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043e138c; end: 1043e13ab; +[SCCapturerStateUpdate didToggleMultiCamSessionWithEnabled:primaryCameraPosition:secondaryCameraPositions:] */

void FUN_1043e138c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1043ea788(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043e13ac; end: 1043e13fb; +[SCCapturerStateUpdate didAddCaptureInputWithDevicePosition:state:] */

void FUN_1043e13ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x0001043eab28(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e13fc; end: 1043e144b; +[SCCapturerStateUpdate didRemoveCaptureInputWithDevicePosition:state:] */

void FUN_1043e13fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x0001043eaed4(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043e144c; end: 1043e149b; -[SCCapturerStateUpdate onSessionDidStartRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043e144c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_1130761a8);
  _objc_retain();
  if (cVar1 == '\0') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_1130761b0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


