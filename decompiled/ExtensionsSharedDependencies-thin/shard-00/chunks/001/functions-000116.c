/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00210b34; end: 00210b3b; +[SCVSRTask loadModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210b34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7940) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210b3c; end: 00210b43; +[SCVSRTask unloadModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210b3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7940) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210b44; end: 00210b4b; +[SCVSRTask processSampleBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210b44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7940) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210b4c; end: 00210b53; +[SCVSRTask setupVSRNeoPlayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210b4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7940) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210b54; end: 00210b5b; +[SCVSRTask debugView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210b54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7940) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210b5c; end: 00210bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210b5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7940) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210bac; end: 00210bf7; -[SCVSRTask matchLoadModel:unloadModel:processSampleBuffer:setupVSRNeoPlayerView:debugView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210bac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7940);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_3 = param_4;
    }
  }
  else {
    param_3 = param_5;
    if ((bVar1 != 2) && (param_3 = param_6, bVar1 != 3)) {
      param_3 = param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00210bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 00210bf8; end: 00210ca3;  */

void FUN_00210bf8(void)

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



/* Entry: 00210ca4; end: 00210cc7; -[SCAttributedMediaEngineTask description] */

void FUN_00210ca4(void)

{
  _objc_retain();
  FUN_00211250();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210cc8; end: 00210d0f; -[SCAttributedMediaEngineTask init] */

void FUN_00210cc8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMediaEngineTaskWrapper.swift",0x36,2,0xc3,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x210d10);
  (*pcVar1)();
}



/* Entry: 00210d10; end: 00210dab; +[SCAttributedMediaEngineTask videoTranscoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210dac; end: 00210e47; +[SCAttributedMediaEngineTask imageTranscoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210e48; end: 00210ee7; +[SCAttributedMediaEngineTask snapDocParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210ee8; end: 00210eef; +[SCAttributedMediaEngineTask videoFilterCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210ee8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210ef0; end: 00210f9b; +[SCAttributedMediaEngineTask videoSuperResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00af7948) = 4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_00af7968) = param_3;
  puVar2 = PTR_s_init_00abbf70;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210f9c; end: 00210fa3; +[SCAttributedMediaEngineTask warmupAudioSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210f9c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210fa4; end: 00210fab; +[SCAttributedMediaEngineTask warmupNeoPlayerAppleCodecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210fa4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00210fac; end: 00211157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210fac(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7948) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7958);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7960);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7968) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211158; end: 0021120b; -[SCAttributedMediaEngineTask matchVideoTranscoder:imageTranscoder:snapDocParser:videoFilterCoordinator:videoSuperResolution:warmupAudioSession:warmupNeoPlayerAppleCodecs:] */

void FUN_00211158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00211048(0x211720,auStack_40,0x21178c,auStack_60,0x211790,auStack_80,0x211728,auStack_a0,
                  0x211730,auStack_c0,0x211750,auStack_e0,0x211754,auStack_100);
  _objc_release(param_1);
  return;
}



/* Entry: 0021120c; end: 0021123f;  */

void FUN_0021120c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00211240; end: 0021124f; -[SCAttributedMediaEngineTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7968));
  return;
}



/* Entry: 00211250; end: 0021137f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00211250(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7948);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if ((char)((ulong *)(param_1 + _DAT_00af7950))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x211374);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + _DAT_00af7950);
      _objc_release();
      uVar3 = 0;
    }
    else if (bVar1 == 1) {
      if ((char)((ulong *)(param_1 + _DAT_00af7958))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x211378);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + _DAT_00af7958);
      _objc_release();
      uVar3 = 1;
    }
    else {
      if ((char)((ulong *)(param_1 + _DAT_00af7960))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x21137c);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + _DAT_00af7960);
      _objc_release();
      uVar3 = 2;
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      _objc_release();
      uVar4 = 0;
      uVar3 = 4;
    }
    else {
      if (*(long *)(param_1 + _DAT_00af7968) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x211380);
        (*pcVar2)();
      }
      uVar4 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_00af7968) + _DAT_00af7940);
      _objc_release();
      uVar3 = 3;
    }
  }
  else if (bVar1 == 5) {
    _objc_release();
    uVar3 = 4;
    uVar4 = 1;
  }
  else {
    _objc_release();
    uVar3 = 4;
    uVar4 = 2;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 00211380; end: 002113bf;  */

void FUN_00211380(void)

{
  _objc_opt_self(&PTR_PTR_00acd978);
  return;
}



/* Entry: 002113c0; end: 0021167b;  */

int FUN_002113c0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0021143c;
        goto LAB_00211420;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00211420:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_0021143c:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021167c; end: 002116bb;  */

void FUN_0021167c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af79c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb7f0;
  _swift_getWitnessTable(&UNK_007eb7f0,&UNK_009be688);
  puRam0000000000af79c0 = puVar1;
  return;
}



/* Entry: 002116bc; end: 002116bf;  */

void FUN_002116bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af79c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb890;
  _swift_getWitnessTable(&UNK_007eb890,&UNK_009be5f8);
  puRam0000000000af79c8 = puVar1;
  return;
}



/* Entry: 002116c0; end: 002116ff;  */

void FUN_002116c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af79c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb890;
  _swift_getWitnessTable(&UNK_007eb890,&UNK_009be5f8);
  puRam0000000000af79c8 = puVar1;
  return;
}



/* Entry: 00211700; end: 0021177f;  */

ulong FUN_00211700(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 00211780; end: 00211783; -[SCAttributedMediaEngineTask copyWithZone:] */

void FUN_00211780(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00211784; end: 00211797; -[SCVSRTask copyWithZone:] */

void FUN_00211784(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00211798; end: 002117bf;  */

void FUN_00211798(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 002117c0; end: 002117fb;  */

void FUN_002117c0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 002117fc; end: 00211817;  */

void FUN_002117fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211818; end: 0021185f; -[SCAttributedMemoriesEncryptionSubtask init] */

void FUN_00211818(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x211860);
  (*pcVar1)();
}



/* Entry: 00211860; end: 0021186b; -[SCAttributedMemoriesEncryptionSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211860(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af79d0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0021186c; end: 0021187b; -[SCAttributedMemoriesEncryptionSubtask isEqual:] */

uint FUN_0021186c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00211ac8(&uStack_50,&DAT_00af79d0);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0021187c; end: 0021188b; +[SCAttributedMemoriesEncryptionSubtask doubleEncryptionResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021187c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79d0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021188c; end: 0021189b; +[SCAttributedMemoriesEncryptionSubtask doubleEncryptionInvoker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021188c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79d0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021189c; end: 002118ab; +[SCAttributedMemoriesEncryptionSubtask encryptionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021189c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79d0) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002118ac; end: 002118b7; -[SCAttributedMemoriesEncryptionSubtask matchDoubleEncryptionResolver:doubleEncryptionInvoker:encryptionInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002118ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af79d0) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af79d0) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00211a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 002118b8; end: 002118ff; -[SCAttributedMemoriesTranscodingSubtask init] */

void FUN_002118b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0xa2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x211900);
  (*pcVar1)();
}



/* Entry: 00211900; end: 0021190b; -[SCAttributedMemoriesTranscodingSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211900(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af79d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0021190c; end: 00211917; -[SCAttributedMemoriesTranscodingSubtask isEqual:] */

uint FUN_0021190c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00211ac8(&uStack_50,&DAT_00af79d8);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00211918; end: 002119a7;  */

uint FUN_00211918(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00211ac8(&uStack_50,param_4);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 002119a8; end: 002119b7; +[SCAttributedMemoriesTranscodingSubtask opportunisticRetranscode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002119a8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79d8) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002119b8; end: 002119c7; +[SCAttributedMemoriesTranscodingSubtask snapDocTranscode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002119b8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79d8) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002119c8; end: 002119d7; +[SCAttributedMemoriesTranscodingSubtask snapDocTranscodeForExport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002119c8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79d8) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002119d8; end: 00211a2b; -[SCAttributedMemoriesTranscodingSubtask matchOpportunisticRetranscode:snapDocTranscode:snapDocTranscodeForExport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002119d8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af79d8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af79d8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00211a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 00211a2c; end: 00211a73; -[SCAttributedMemoriesUISubtask init] */

void FUN_00211a2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0x111,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x211a74);
  (*pcVar1)();
}



/* Entry: 00211a74; end: 00211a7f; -[SCAttributedMemoriesUISubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211a74(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af79e0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00211a80; end: 00211ac7;  */

void FUN_00211a80(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00211ac8; end: 00211b67;  */

bool FUN_00211ac8(undefined8 param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 00211b68; end: 00211b73; -[SCAttributedMemoriesUISubtask isEqual:] */

uint FUN_00211b68(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00211ac8(&uStack_50,&DAT_00af79e0);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00211b74; end: 00211b83; +[SCAttributedMemoriesUISubtask general] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211b74(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211b84; end: 00211b93; +[SCAttributedMemoriesUISubtask quickCut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211b84(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211b94; end: 00211beb;  */

void FUN_00211b94(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + *param_3) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211bec; end: 00211c07; -[SCAttributedMemoriesUISubtask matchGeneral:quickCut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211bec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_00af79e0) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00211c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 00211c08; end: 00211cb3;  */

void FUN_00211c08(void)

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



/* Entry: 00211cb4; end: 00211cd7; -[SCAttributedMemoriesTask description] */

void FUN_00211cb4(void)

{
  _objc_retain();
  func_0x00212398();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211cd8; end: 00211d1f; -[SCAttributedMemoriesTask init] */

void FUN_00211cd8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0x1c6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x211d20);
  (*pcVar1)();
}



/* Entry: 00211d20; end: 00211d9f; +[SCAttributedMemoriesTask encryption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af79e8) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af79f0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7a00) = 0;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211da0; end: 00211e23; +[SCAttributedMemoriesTask transcoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af79e8) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af79f8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_00af7a00) = 0;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e24; end: 00211e2b; +[SCAttributedMemoriesTask backup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 2;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e2c; end: 00211e33; +[SCAttributedMemoriesTask logoutUserDataScrubber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 3;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e34; end: 00211e3b; +[SCAttributedMemoriesTask widgetDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 4;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e3c; end: 00211e43; +[SCAttributedMemoriesTask miniCarouselMemoriesPresentationDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 5;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e44; end: 00211e4b; +[SCAttributedMemoriesTask s2rLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 6;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e4c; end: 00211e53; +[SCAttributedMemoriesTask save] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 7;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e54; end: 00211e5b; +[SCAttributedMemoriesTask sideButtonObserveData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 8;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e5c; end: 00211e63; +[SCAttributedMemoriesTask recentThumbnailProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 9;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e64; end: 00211e6b; +[SCAttributedMemoriesTask swipeTransitionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 10;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e6c; end: 00211e73; +[SCAttributedMemoriesTask highlightDataSourceSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e6c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 0xb;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e74; end: 00211e7b; +[SCAttributedMemoriesTask experimentServiceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 0xc;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e7c; end: 00211e83; +[SCAttributedMemoriesTask clientGenPipelineManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 0xd;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e84; end: 00211e8b; +[SCAttributedMemoriesTask engagementLoggingProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e84(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 0xe;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211e8c; end: 00211f0f; +[SCAttributedMemoriesTask ui:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af79e8) = 0xf;
  *(undefined8 *)(lVar2 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7a00) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211f10; end: 00211f17; +[SCAttributedMemoriesTask memTwo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211f10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = 0x10;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211f18; end: 00211f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211f18(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af79e8) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00af79f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af79f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7a00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00211f8c; end: 00212143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211f8c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                 undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                 undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                 code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                 undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                 undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                 code *param_30,undefined4 param_31,undefined4 param_32,code *param_33,
                 undefined4 param_34,undefined4 param_35,code *param_36,undefined4 param_37,
                 undefined4 param_38,code *param_39,undefined4 param_40,undefined4 param_41,
                 code *param_42,undefined4 param_43,undefined4 param_44,code *param_45)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_00af79e8)) {
  case 0:
    param_42 = param_1;
    if (*(long *)(unaff_x20 + _DAT_00af79f0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x212140);
      (*pcVar1)();
    }
    goto code_r0x002120d8;
  case 1:
    param_42 = param_3;
    if (*(long *)(unaff_x20 + _DAT_00af79f8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x212144);
      (*pcVar1)();
    }
    goto code_r0x002120d8;
  case 2:
    (*param_5)();
    break;
  case 3:
    (*param_7)();
    break;
  case 4:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
    break;
  case 7:
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    (*param_24)();
    break;
  case 10:
    (*param_27)();
    break;
  case 0xb:
    (*param_30)();
    break;
  case 0xc:
    (*param_33)();
    break;
  case 0xd:
    (*param_36)();
    break;
  case 0xe:
    (*param_39)();
    break;
  case 0xf:
    if (*(long *)(unaff_x20 + _DAT_00af7a00) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21213c);
      (*pcVar1)();
    }
code_r0x002120d8:
    (*param_42)();
    break;
  case 0x10:
    (*param_45)();
  }
  return;
}



/* Entry: 00212144; end: 00212187;  */

void FUN_00212144(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x212144);
  (*pcVar1)();
}



/* Entry: 00212188; end: 00212317; -[SCAttributedMemoriesTask matchEncryption:transcoding:backup:logoutUserDataScrubber:widgetDataProvider:miniCarouselMemoriesPresentationDataSource:s2rLogging:save:sideButtonObserveData:recentThumbnailProvider:swipeTransitionCoordinator:highlightDataSourceSetup:experimentServiceProvider:clientGenPipelineManager:engagementLoggingProvider:ui:memTwo:] */

void FUN_00212188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_1d0 = param_16;
  uStack_1f0 = param_17;
  uStack_210 = param_18;
  uStack_230 = param_19;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_00211f8c(0x212bb8,auStack_40,0x212bb4,auStack_60,0x212b10,auStack_80,0x212b48,auStack_a0,
               0x212b4c,auStack_c0,0x212b50,auStack_e0,0x212b54,auStack_100,0x212b58,auStack_120,
               0x212b5c,auStack_140,0x212b60,auStack_160,0x212b64,auStack_180,0x212b68,auStack_1a0,
               0x212b6c,auStack_1c0,0x212b70,auStack_1e0,0x212b74,auStack_200,0x212b18,auStack_220,
               0x212b78,auStack_240);
  _objc_release(param_1);
  return;
}



/* Entry: 00212318; end: 0021231b;  */

void FUN_00212318(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021231c; end: 0021234f;  */

void FUN_0021231c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00212350; end: 00212503; -[SCAttributedMemoriesTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00212350(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00af79f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00af79f8));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7a00));
  return;
}



/* Entry: 00212504; end: 00212547;  */

void FUN_00212504(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x212504);
  (*pcVar1)();
}



/* Entry: 00212548; end: 002125c7;  */

void FUN_00212548(void)

{
  _objc_opt_self(&PTR_PTR_00acdb18);
  return;
}



/* Entry: 002125c8; end: 002129f3;  */

int FUN_002125c8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xef < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x10) {
      iVar2 = 4;
    }
    if (param_2 + 0x10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00212644;
        goto LAB_00212628;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00212628:
      return ((uint)*param_1 | uVar1 << 8) - 0x10;
    }
  }
LAB_00212644:
  iVar2 = *param_1 - 0x11;
  if (*param_1 < 0x11) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 002129f4; end: 00212a33;  */

void FUN_002129f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eba7c;
  _swift_getWitnessTable(&UNK_007eba7c,&UNK_009be920);
  puRam0000000000af7aa8 = puVar1;
  return;
}



/* Entry: 00212a34; end: 00212a37;  */

void FUN_00212a34(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ebb1c;
  _swift_getWitnessTable(&UNK_007ebb1c,&UNK_009be890);
  puRam0000000000af7ab0 = puVar1;
  return;
}



/* Entry: 00212a38; end: 00212a77;  */

void FUN_00212a38(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ebb1c;
  _swift_getWitnessTable(&UNK_007ebb1c,&UNK_009be890);
  puRam0000000000af7ab0 = puVar1;
  return;
}



/* Entry: 00212a78; end: 00212a7b;  */

void FUN_00212a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ebbbc;
  _swift_getWitnessTable(&UNK_007ebbbc,&UNK_009be800);
  puRam0000000000af7ab8 = puVar1;
  return;
}



/* Entry: 00212a7c; end: 00212abb;  */

void FUN_00212a7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ebbbc;
  _swift_getWitnessTable(&UNK_007ebbbc,&UNK_009be800);
  puRam0000000000af7ab8 = puVar1;
  return;
}



/* Entry: 00212abc; end: 00212abf;  */

void FUN_00212abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ebc5c;
  _swift_getWitnessTable(&UNK_007ebc5c,&UNK_009be770);
  puRam0000000000af7ac0 = puVar1;
  return;
}



/* Entry: 00212ac0; end: 00212aff;  */

void FUN_00212ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ebc5c;
  _swift_getWitnessTable(&UNK_007ebc5c,&UNK_009be770);
  puRam0000000000af7ac0 = puVar1;
  return;
}



/* Entry: 00212b00; end: 00212bbb;  */

ulong FUN_00212b00(ulong param_1)

{
  if (0x10 < param_1) {
    param_1 = 0x11;
  }
  return param_1;
}



/* Entry: 00212bbc; end: 00212bbf; -[SCAttributedMemoriesTranscodingSubtask description] */

void FUN_00212bbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00212bc0; end: 00212bc3; -[SCAttributedMemoriesEncryptionSubtask description] */

void FUN_00212bc0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00212bc4; end: 00212be7; -[SCAttributedMemoriesUISubtask description] */

void FUN_00212bc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00212be8; end: 00212beb; -[SCAttributedMemoriesTranscodingSubtask copyWithZone:] */

void FUN_00212be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00212bec; end: 00212bf3; -[SCAttributedMemoriesEncryptionSubtask copyWithZone:] */

void FUN_00212bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}


