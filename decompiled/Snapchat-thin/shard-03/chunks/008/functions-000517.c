/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cb31a0; end: 102cb324f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cb31a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
    lVar1 = 0;
  }
  func_0x000107c615f0(lVar1);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c436e4(param_1,lVar2);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 102cb3250; end: 102cb32e7; -[SCOperaConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_102cb3250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_102cb31a0(param_1,param_4,param_3,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 102cb32e8; end: 102cb3423; -[SCOperaConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_102cb32e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000102cae200(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 102cb3424; end: 102cb34b7; -[SCOperaConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_102cb3424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000102cb337c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 102cb34b8; end: 102cb358b; -[SCOperaConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_102cb34b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar3 = param_2;
  func_0x000102cae6a4(param_3,param_2,param_4,uVar2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fadc(param_3,uVar3);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb358c; end: 102cb3677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb358c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
    lVar1 = 0;
  }
  func_0x000107c615f0(lVar1);
  func_0x000107c5fadc(param_1,param_2);
  if (param_3 != 0) {
    func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  }
  lVar1 = lVar2;
  func_0x000107c5c15c(lVar2);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  lVar2 = lVar1;
  func_0x000107c5fc54(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 102cb3678; end: 102cb3747; -[SCOperaConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_102cb3678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102cb358c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = param_3;
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cb3748; end: 102cb37cf; -[SCOperaConfigProvider manualExposureValueForConfigKeySync:featureProvidedSignals:] */

void FUN_102cb3748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102caeb90(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb37d0; end: 102cb387f; -[SCOperaConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_102cb37d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000102cadf2c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb3880; end: 102cb38b3; -[SCOperaConfigProvider prefetchPluginConfig] */

void FUN_102cb3880(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb38b4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cb38b4; end: 102cb39ff;  */

/* WARNING: Removing unreachable block (ram,0x000102cb39bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102cb38b4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puVar5;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112f0a168);
  puVar5 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(puVar5);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar1);
  uVar4 = 0x800000010f107570;
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f107570);
  puVar1 = puVar5;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(uVar2);
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar5);
      func_0x000107c610f8(PTR_PTR_1126df510);
      puVar5 = puVar3;
      FUN_102cb6a54(puVar3,uVar4);
      func_0x00010006c090(puVar3,uVar4);
      if (puVar5 != (undefined *)0x0) goto LAB_102cb39d4;
    }
  }
  puVar5 = PTR_PTR_1126df510;
  func_0x000107c610f8(PTR_PTR_1126df510);
  func_0x000107c453e4();
LAB_102cb39d4:
  func_0x000107c61170(puVar1);
  return puVar5;
}



/* Entry: 102cb3a00; end: 102cb3a33; -[SCOperaConfigProvider bsrThresholdMs] */

undefined8 FUN_102cb3a00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb3a34();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cb3a34; end: 102cb3afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb3a34(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1075a0);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cb3afc; end: 102cb3b2f; -[SCOperaConfigProvider ambientAudioBehaviorForAllNonSpotlight] */

uint FUN_102cb3afc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb3b30();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb3b30; end: 102cb3bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb3b30(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000003a;
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f1075c0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb3bf8; end: 102cb3c2b; -[SCOperaConfigProvider hideBlurEffectAnimationDurationMs] */

undefined8 FUN_102cb3bf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb3c2c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cb3c2c; end: 102cb3cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb3c2c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f107600);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cb3cf4; end: 102cb3d27; -[SCOperaConfigProvider sspUseImageContentControllerCallbacks] */

uint FUN_102cb3cf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb3d28();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb3d28; end: 102cb3def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb3d28(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f107630);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb3df0; end: 102cb3e23; -[SCOperaConfigProvider snapbackZoomingDurationMs] */

undefined8 FUN_102cb3df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb3e24();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cb3e24; end: 102cb3eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb3e24(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f107660);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cb3eec; end: 102cb3f1f; -[SCOperaConfigProvider pauseMusicOnMuteSwiftOverride] */

uint FUN_102cb3eec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb3f20();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb3f20; end: 102cb3fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb3f20(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1076a0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb3fe8; end: 102cb401b; -[SCOperaConfigProvider viewIfLoadedFixEnabled] */

uint FUN_102cb3fe8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb401c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb401c; end: 102cb40e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb401c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1076d0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb40e4; end: 102cb4117; -[SCOperaConfigProvider sspWatchTimeFixEnabled] */

uint FUN_102cb40e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4118();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4118; end: 102cb41df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4118(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f107700);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb41e0; end: 102cb4213; -[SCOperaConfigProvider disableDeckDismissalFix] */

uint FUN_102cb41e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4214();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4214; end: 102cb42db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4214(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f107730);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb42dc; end: 102cb430f; -[SCOperaConfigProvider acf2DPrefetchPrioritizeCurrentStoryEnabled] */

uint FUN_102cb42dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4310();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4310; end: 102cb43d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4310(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f107760);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb43d8; end: 102cb440b; -[SCOperaConfigProvider sspEnableMediaIsBeingPreparedForDisplay] */

uint FUN_102cb43d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb440c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb440c; end: 102cb44d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb440c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000041;
  func_0x000107c5fadc(0xd000000000000041,0x800000010f107790);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb44d4; end: 102cb4507; -[SCOperaConfigProvider treatCarPlayAsHeadphones] */

uint FUN_102cb44d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4508();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4508; end: 102cb45cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4508(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f1077e0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb45d0; end: 102cb4603; -[SCOperaConfigProvider sspEnableAudioRateEnabled] */

uint FUN_102cb45d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4604();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4604; end: 102cb46cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4604(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f107810);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb46cc; end: 102cb46ff; -[SCOperaConfigProvider sspDisablePlayerPreparationOnViewUpdate] */

uint FUN_102cb46cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4700();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4700; end: 102cb47c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4700(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f107840);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb47c8; end: 102cb47fb; -[SCOperaConfigProvider sspPlayOnWillAppearEnabled] */

uint FUN_102cb47c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb47fc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb47fc; end: 102cb48c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb47fc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f107880);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb48c4; end: 102cb48f7; -[SCOperaConfigProvider ignorePagePreloadDistance] */

uint FUN_102cb48c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb48f8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb48f8; end: 102cb49bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb48f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1078b0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb49c0; end: 102cb49f3; -[SCOperaConfigProvider audioContinuityEnabled] */

uint FUN_102cb49c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb49f4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb49f4; end: 102cb4abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb49f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f1078e0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb4abc; end: 102cb4aef; -[SCOperaConfigProvider resumeMusicButKeepMuteSwitchOverride] */

uint FUN_102cb4abc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4af0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4af0; end: 102cb4bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4af0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f107910);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb4bb8; end: 102cb4beb; -[SCOperaConfigProvider cleanupDistantPagePropertiesEnabled] */

uint FUN_102cb4bb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4bec();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4bec; end: 102cb4cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4bec(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f107940);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb4cb4; end: 102cb4ce7; -[SCOperaConfigProvider batchPreloadUpdateAcrossGroupsEnabled] */

uint FUN_102cb4cb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4ce8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4ce8; end: 102cb4daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4ce8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f107970);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb4db0; end: 102cb4de3; -[SCOperaConfigProvider preserveActivelyViewedGroupOnRefreshEnabled] */

uint FUN_102cb4db0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4de4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4de4; end: 102cb4eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4de4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f1079b0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb4eac; end: 102cb4edf; -[SCOperaConfigProvider dedupStableConnectionRebuildsEnabled] */

uint FUN_102cb4eac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4ee0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4ee0; end: 102cb4fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4ee0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f1079f0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb4fa8; end: 102cb4fdb; -[SCOperaConfigProvider operaPlayerViewPrerollEnabled] */

uint FUN_102cb4fa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb4fdc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb4fdc; end: 102cb50a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb4fdc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f107a20);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb50a4; end: 102cb50d7; -[SCOperaConfigProvider sspMuteVolumeCacheFixEnabled] */

uint FUN_102cb50a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb50d8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb50d8; end: 102cb519f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb50d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f107a50);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb51a0; end: 102cb51d3; -[SCOperaConfigProvider fullPageGesturesEnabled] */

uint FUN_102cb51a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb51d4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb51d4; end: 102cb529b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb51d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f107a80);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb529c; end: 102cb52cf; -[SCOperaConfigProvider sspAnnounceAutoAdvanceBeforeFinishLooping] */

uint FUN_102cb529c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb52d0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb52d0; end: 102cb5397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb52d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010f107ab0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5398; end: 102cb53cb; -[SCOperaConfigProvider emitWillPerformAutoAdvance] */

uint FUN_102cb5398(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb53cc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb53cc; end: 102cb5493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb53cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f107af0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5494; end: 102cb54c7; -[SCOperaConfigProvider contextTappableOverlayFrameFixEnabled] */

uint FUN_102cb5494(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb54c8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb54c8; end: 102cb558f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb54c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f107b20);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5590; end: 102cb55c3; -[SCOperaConfigProvider contextTappableOverlayFrameFixDeferredEnabled] */

uint FUN_102cb5590(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb55c4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb55c4; end: 102cb568b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb55c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000039;
  func_0x000107c5fadc(0xd000000000000039,0x800000010f107b60);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb568c; end: 102cb56bf; -[SCOperaConfigProvider sspPagePausedOnExternalPauseEnabled] */

uint FUN_102cb568c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb56c0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb56c0; end: 102cb5787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb56c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f107ba0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5788; end: 102cb57bb; -[SCOperaConfigProvider emitOSPOnCloseView] */

uint FUN_102cb5788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb57bc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb57bc; end: 102cb5883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb57bc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f107bd0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5884; end: 102cb58b7; -[SCOperaConfigProvider flushPendingPlaybackErrorEnabled] */

uint FUN_102cb5884(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb58b8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb58b8; end: 102cb597f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb58b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f107c00);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5980; end: 102cb59b3; -[SCOperaConfigProvider attributePlaybackErrorToErroringPage] */

uint FUN_102cb5980(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb59b4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb59b4; end: 102cb5a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb59b4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f107c30);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5a7c; end: 102cb5aaf; -[SCOperaConfigProvider enableKeyboardResize] */

uint FUN_102cb5a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb5ab0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb5ab0; end: 102cb5b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb5ab0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0164c0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5b78; end: 102cb5bab; -[SCOperaConfigProvider presentationFramebufferSnapshotEnabled] */

uint FUN_102cb5b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb5bac();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb5bac; end: 102cb5c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb5bac(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f107c70);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5c74; end: 102cb5ca7; -[SCOperaConfigProvider thumbnailPrelayoutAnimatedOnlyEnabled] */

uint FUN_102cb5c74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb5ca8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb5ca8; end: 102cb5d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb5ca8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f107ca0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb5d70; end: 102cb5da3; -[SCOperaConfigProvider operaPresentationAnimationConfig] */

void FUN_102cb5d70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb5da4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cb5da4; end: 102cb5f13;  */

/* WARNING: Removing unreachable block (ram,0x000102cb5ed8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102cb5da4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112f0a168);
  puVar3 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar3 = *(undefined **)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(puVar3);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(puVar6);
  uVar4 = 0x800000010f107cd0;
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f107cd0);
  puVar6 = puVar3;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(uVar1);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126af7d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c61170(uVar5);
  puVar3 = puVar6;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61170(puVar6);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    func_0x000107c610f8(PTR_PTR_1126d0070);
    puVar3 = puVar2;
    FUN_102cb6a54(puVar2,uVar4);
    func_0x00010006c090(puVar2,uVar4);
    func_0x000107c61170(puVar6);
  }
  return puVar3;
}



/* Entry: 102cb5f14; end: 102cb5f47; -[SCOperaConfigProvider playlistFetcherMaxRetryCount] */

undefined8 FUN_102cb5f14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb5f48();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cb5f48; end: 102cb600f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb5f48(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f107d00);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cb6010; end: 102cb6043; -[SCOperaConfigProvider playlistFetcherRetryDelayMs] */

undefined8 FUN_102cb6010(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6044();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cb6044; end: 102cb610b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6044(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f107d30);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cb610c; end: 102cb613f; -[SCOperaConfigProvider playlistFetcherFailureRecoveryEnabled] */

uint FUN_102cb610c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6140();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb6140; end: 102cb6207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6140(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f107d60);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb6208; end: 102cb623b; -[SCOperaConfigProvider mediaPrepStickyFailureEnabled] */

uint FUN_102cb6208(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb623c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb623c; end: 102cb6303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb623c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f107da0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb6304; end: 102cb6337; -[SCOperaConfigProvider mediaPrepRecoverableErrorRetryCount] */

undefined8 FUN_102cb6304(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6338();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cb6338; end: 102cb63ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6338(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f107dd0);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cb6400; end: 102cb6433; -[SCOperaConfigProvider coalescePreloadRebuildEnabled] */

uint FUN_102cb6400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6434();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb6434; end: 102cb64fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6434(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f107e10);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb64fc; end: 102cb652f; -[SCOperaConfigProvider coalescePreloadRebuildSameTurnEnabled] */

uint FUN_102cb64fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6530();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb6530; end: 102cb65f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6530(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f107e40);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb65f8; end: 102cb662b; -[SCOperaConfigProvider enableFlexibleOperaViewer] */

uint FUN_102cb65f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb662c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}


