/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044ff030; end: 1044ff043; -[SCLensCarouselActivationConfigurationBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff030(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081e20 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081e28 + 8))
  ;
  return;
}



/* Entry: 1044ff044; end: 1044ff077;  */

void FUN_1044ff044(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044ff078; end: 1044ff08b; -[SCLensCarouselActivationConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff078(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081e08 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081e10 + 8))
  ;
  return;
}



/* Entry: 1044ff08c; end: 1044ff0c7;  */

void FUN_1044ff08c(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + *param_4 + 8));
  return;
}



/* Entry: 1044ff0c8; end: 1044ff1bb;  */

/* WARNING: Possible PIC construction at 0x0001044ff0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044ff100) */

void FUN_1044ff0c8(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044ff1dc();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044ff1dc();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044ff1bc; end: 1044ff1fb;  */

void FUN_1044ff1bc(void)

{
  _objc_opt_self(&PTR_PTR_1129c6f30);
  return;
}



/* Entry: 1044ff1fc; end: 1044ff1ff;  */

void FUN_1044ff1fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044ff200; end: 1044ff20f; -[SCLensCarouselUIConfiguration animated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ff200(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113081e80);
}



/* Entry: 1044ff210; end: 1044ff21f; -[SCLensCarouselUIConfiguration visibleInterfaceElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081e88));
  return;
}



/* Entry: 1044ff220; end: 1044ff237; -[SCLensCarouselUIConfiguration hideLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ff220(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113081e90);
}



/* Entry: 1044ff238; end: 1044ff39f; -[SCLensCarouselUIConfiguration initWithAnimated:visibleInterfaceElements:hideLensCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff238(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113081e80) = param_3;
  *(undefined8 *)(param_1 + _DAT_113081e88) = param_4;
  *(undefined1 *)(param_1 + _DAT_113081e90) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1044ff3a0; end: 1044ff447; -[SCLensCarouselUIConfiguration hash] */

undefined8 FUN_1044ff3a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001044ff3d4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044ff448; end: 1044ff527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044ff448(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar6 = &lStack_68;
    _swift_dynamicCast(plVar6,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113081e80);
      cVar2 = *(char *)(lStack_68 + _DAT_113081e80);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113081e88);
      func_0x00010c071ae0(uVar7);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113081e90);
      bVar4 = *(byte *)(lStack_68 + _DAT_113081e90);
      _objc_release(lStack_68);
      if (cVar1 == cVar2) {
        return (uint)uVar7 & ((bVar3 ^ bVar4) ^ 1);
      }
    }
  }
  return 0;
}



/* Entry: 1044ff528; end: 1044ff5a7; -[SCLensCarouselUIConfiguration isEqual:] */

uint FUN_1044ff528(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044ff448(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044ff5a8; end: 1044ff5ab; -[SCLensCarouselUIConfiguration copyWithZone:] */

void FUN_1044ff5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ff5ac; end: 1044ff5c7; -[SCLensCarouselUIConfiguration description] */

void FUN_1044ff5ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ff5c8; end: 1044ff643; -[SCLensCarouselUIConfiguration init] */

void FUN_1044ff5c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselUIConfigurationWrapper.swift",0x3c,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ff610);
  (*pcVar1)();
}



/* Entry: 1044ff644; end: 1044ff653; -[SCLensCarouselUIConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081e88));
  return;
}



/* Entry: 1044ff654; end: 1044ff673;  */

void FUN_1044ff654(void)

{
  _objc_opt_self(&PTR_PTR_1129c70d0);
  return;
}



/* Entry: 1044ff674; end: 1044ff677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff674(undefined1 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113081e80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081e88) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113081e90) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ff678; end: 1044ff68b; -[SCLensCarouselControllerState lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081ec0));
  return;
}



/* Entry: 1044ff68c; end: 1044ff72f; -[SCLensCarouselControllerState initWithLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ff68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081ec0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1044ff730; end: 1044ff8ab; -[SCLensCarouselControllerState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044ff730(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(param_1 + _DAT_113081ec0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = param_1;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    func_0x00010bfde980(lVar1);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1044ff8ac; end: 1044ff92b; -[SCLensCarouselControllerState isEqual:] */

uint FUN_1044ff8ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001044ff7d0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044ff92c; end: 1044ff92f; -[SCLensCarouselControllerState copyWithZone:] */

void FUN_1044ff92c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ff930; end: 1044ff94b; -[SCLensCarouselControllerState description] */

void FUN_1044ff930(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ff94c; end: 1044ff993; -[SCLensCarouselControllerState init] */

void FUN_1044ff94c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselControllerStateWrapper.swift",0x3c,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ff994);
  (*pcVar1)();
}



/* Entry: 1044ff994; end: 1044ff9af; +[SCLensCarouselControllerStateBuilder lensCarouselControllerState] */

void FUN_1044ff994(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ff9b0; end: 1044ff9ef; +[SCLensCarouselControllerStateBuilder lensCarouselControllerStateWithExistingLensCarouselControllerState:] */

void FUN_1044ff9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044ffbb8(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044ff9f0; end: 1044ffa4f; -[SCLensCarouselControllerStateBuilder withLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044ff9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081ec8);
  *(undefined8 *)(param_1 + _DAT_113081ec8) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044ffa50; end: 1044ffab3; -[SCLensCarouselControllerStateBuilder build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffa50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113081ec8);
  FUN_1044ffc50();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113081ec0) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(uVar3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ffab4; end: 1044ffb17; -[SCLensCarouselControllerStateBuilder safeBuildAndReturnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffab4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113081ec8);
  FUN_1044ffc50();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113081ec0) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(uVar3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ffb18; end: 1044ffb5f; -[SCLensCarouselControllerStateBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffb18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081ec8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ffb60; end: 1044ffb63;  */

void FUN_1044ffb60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044ffb64; end: 1044ffb73; -[SCLensCarouselControllerStateBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081ec8));
  return;
}



/* Entry: 1044ffb74; end: 1044ffba7;  */

void FUN_1044ffb74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044ffba8; end: 1044ffbb7; -[SCLensCarouselControllerState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081ec0));
  return;
}



/* Entry: 1044ffbb8; end: 1044ffc4f;  */

/* WARNING: Possible PIC construction at 0x0001044ffbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044ffbf0) */

void FUN_1044ffbb8(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044ffc70();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044ffc70();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044ffc50; end: 1044ffc8f;  */

void FUN_1044ffc50(void)

{
  _objc_opt_self(&PTR_PTR_1129c71a8);
  return;
}



/* Entry: 1044ffc90; end: 1044ffc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffc90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081ec0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ffc98; end: 1044ffd43;  */

void FUN_1044ffc98(void)

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



/* Entry: 1044ffd44; end: 1044ffd83;  */

void FUN_1044ffd44(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1044ffd84; end: 1044ffda7; -[SCLensExternalMediaItem description] */

void FUN_1044ffd84(void)

{
  FUN_1045003ac();
  FUN_1044fd3a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ffda8; end: 1044ffdef; -[SCLensExternalMediaItem init] */

void FUN_1044ffda8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensExternalMediaItemWrapper.swift",0x36,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ffdf0);
  (*pcVar1)();
}



/* Entry: 1044ffdf0; end: 1044ffe23; -[SCLensExternalMediaItem hash] */

undefined8 FUN_1044ffdf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044ffe24();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044ffe24; end: 104500117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ffe24(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113081f20));
  lVar2 = *(long *)(unaff_x20 + _DAT_113081f28);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113081f30);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113081f38);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_113081f40);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104500118; end: 104500197; -[SCLensExternalMediaItem isEqual:] */

uint FUN_104500118(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001044fff5c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104500198; end: 10450019f; -[SCLensExternalMediaItem copyWithZone:] */

void FUN_104500198(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1045001a0; end: 1045001ff; +[SCLensExternalMediaItem imageWithImageFuture:rectOfInterestFuture:] */

void FUN_1045001a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x000104500458(param_3,param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104500200; end: 104500203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104500200(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_104500598();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113081f20) = 1;
  *(undefined8 *)(lVar3 + _DAT_113081f28) = 0;
  *(undefined8 *)(lVar3 + _DAT_113081f30) = 0;
  *(long *)(lVar3 + _DAT_113081f38) = param_1;
  *(undefined1 *)(lVar3 + _DAT_113081f40) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104500204; end: 1045002db; +[SCLensExternalMediaItem videoWithVideoURLFuture:shouldMuteVideo:] */

void FUN_104500204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001045004fc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045002dc; end: 10450032f; -[SCLensExternalMediaItem matchImage:video:] */

void FUN_1045002dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x000104500244(FUN_104500760,auStack_40,0x104500774,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104500330; end: 104500363;  */

void FUN_104500330(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104500364; end: 1045003ab; -[SCLensExternalMediaItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104500364(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081f28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081f30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081f38));
  return;
}



/* Entry: 1045003ac; end: 104500597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1045003ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_113081f20) == '\x01') {
    lVar2 = *(long *)(param_1 + _DAT_113081f38);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104500450);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113081f40) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104500458);
      (*pcVar1)();
    }
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_113081f28);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104500454);
      (*pcVar1)();
    }
    _objc_retain(*(undefined8 *)(param_1 + _DAT_113081f30));
  }
  _objc_retain(lVar2);
  return lVar2;
}



/* Entry: 104500598; end: 1045005b7;  */

void FUN_104500598(void)

{
  _objc_opt_self(&PTR_PTR_1129c7328);
  return;
}



/* Entry: 1045005b8; end: 10450071f;  */

int FUN_1045005b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104500634;
        goto LAB_104500618;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104500618:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104500634:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104500720; end: 10450075f;  */

void FUN_104500720(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10460;
  _swift_getWitnessTable(&UNK_10dd10460,&UNK_110780810);
  puRam0000000113081f70 = puVar1;
  return;
}



/* Entry: 104500760; end: 10450078b;  */

void FUN_104500760(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104500770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10450078c; end: 10450085f;  */

void FUN_10450078c(void)

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



/* Entry: 104500860; end: 10450087f;  */

void FUN_104500860(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104500880; end: 1045008b7; -[SCLensCarouselSelection description] */

void FUN_104500880(void)

{
  undefined1 auStack_38 [40];
  
  _objc_retain();
  FUN_104501598(auStack_38);
  func_0x0001044fbcf4(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045008b8; end: 1045008ff; -[SCLensCarouselSelection init] */

void FUN_1045008b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselSelectionWrapper.swift",0x36,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104500900);
  (*pcVar1)();
}



/* Entry: 104500900; end: 104500933; -[SCLensCarouselSelection hash] */

undefined8 FUN_104500900(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104500934();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104500934; end: 104500ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104500934(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113081f78));
  if (((undefined8 *)(unaff_x20 + _DAT_113081f80))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113081f80);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113081f88))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113081f88);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  bVar1 = *(byte *)(unaff_x20 + _DAT_113081f90);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113081f98) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113081f98);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_113081fa0);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113081fa8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113081fa8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_113081fb0);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104500de0; end: 104500e5f; -[SCLensCarouselSelection isEqual:] */

uint FUN_104500de0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000104500b30(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104500e60; end: 104500e67; -[SCLensCarouselSelection copyWithZone:] */

void FUN_104500e60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104500e68; end: 104500e9f; +[SCLensCarouselSelection selectWithLensIdentifier:] */

void FUN_104500e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_104501764();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104500ea0; end: 104500ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104500ea0(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_104501ac4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113081f78) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113081f80);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_113081f88);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_113081f90) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113081f98);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(lVar5 + _DAT_113081fa0) = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113081fa8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_113081fb0) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 104500ea4; end: 104500efb; +[SCLensCarouselSelection selectLensWithLensIdentifier:animated:lensCameraPosition:delayedSelectionEnabled:] */

void FUN_104500ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_104501840();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104500efc; end: 104500eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104500efc(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104501ac4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113081f78) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113081f80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113081f88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_113081f90) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113081f98);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_113081fa0) = 2;
  plVar2 = (long *)(lVar4 + _DAT_113081fa8);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_113081fb0) = param_2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104500f00; end: 104500f33; +[SCLensCarouselSelection selectLensAtIndexWithLensIndex:shouldSkipOriginal:] */

void FUN_104500f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_104501930(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104500f34; end: 104500f63; +[SCLensCarouselSelection selectFirstApplicableLens] */

void FUN_104500f34(void)

{
  FUN_104501a00(3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104500f64; end: 104500f7b; +[SCLensCarouselSelection selectNextLens] */

void FUN_104500f64(void)

{
  FUN_104501a00(4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104500f7c; end: 1045010cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104500f7c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_113081f78);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (((undefined8 *)(unaff_x20 + _DAT_113081f80))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010bc);
        (*pcVar2)();
      }
      (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_113081f80));
    }
    else {
      lVar3 = ((undefined8 *)(unaff_x20 + _DAT_113081f88))[1];
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010c0);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_113081f90) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010c8);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113081f98) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010cc);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_113081fa0) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010d0);
        (*pcVar2)();
      }
      (*param_3)(param_4,*(undefined8 *)(unaff_x20 + _DAT_113081f88),lVar3,
                 *(byte *)(unaff_x20 + _DAT_113081f90) & 1,
                 *(undefined8 *)(unaff_x20 + _DAT_113081f98),
                 *(byte *)(unaff_x20 + _DAT_113081fa0) & 1);
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113081fa8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010b8);
      (*pcVar2)();
    }
    if (*(byte *)(unaff_x20 + _DAT_113081fb0) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045010c4);
      (*pcVar2)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113081fa8),*(byte *)(unaff_x20 + _DAT_113081fb0) & 1
              );
  }
  else if (bVar1 == 3) {
    (*param_7)();
  }
  else {
    (*param_9)();
  }
  return;
}



/* Entry: 1045010d0; end: 104501157; -[SCLensCarouselSelection matchSelect:selectLens:selectLensAtIndex:selectFirstApplicableLens:selectNextLens:] */

void FUN_1045010d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
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
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104500f7c(FUN_104501c8c,auStack_40,FUN_104501cc4,auStack_60,FUN_104501d24,auStack_80,
                0x104501d3c,auStack_a0,0x104501d44,auStack_c0);
  _objc_release(param_1);
  return;
}



/* Entry: 104501158; end: 10450118b;  */

void FUN_104501158(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10450118c; end: 1045011cb; -[SCLensCarouselSelection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450118c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081f80 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081f88 + 8))
  ;
  return;
}



/* Entry: 1045011cc; end: 104501597;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045011cc(long *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plStack_90;
  long lStack_88;
  long *aplStack_80 [2];
  long *aplStack_70 [2];
  long *aplStack_60 [2];
  long *aplStack_50 [2];
  
  pplVar8 = &plStack_90;
  lVar11 = *param_1;
  bVar2 = *(byte *)(param_1 + 1);
  uVar9 = (ulong)bVar2;
  bVar3 = *(byte *)(param_1 + 2);
  lVar12 = param_1[3];
  bVar4 = *(byte *)(param_1 + 4);
  uVar10 = (ulong)*(uint *)((long)param_1 + 9) << 8 | (ulong)*(uint3 *)((long)param_1 + 0xd) << 0x28
  ;
  bVar5 = bVar4 >> 6;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      FUN_104501ac4();
      plVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)plVar6 + _DAT_113081f78) = 0;
      plVar7 = (long *)((long)plVar6 + _DAT_113081f80);
      *plVar7 = lVar11;
      plVar7[1] = uVar10 | uVar9;
      puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081f88);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((long)plVar6 + _DAT_113081f90) = 2;
      puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081f98);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar6 + _DAT_113081fa0) = 2;
      puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081fa8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar6 + _DAT_113081fb0) = 2;
      plStack_90 = plVar6;
    }
    else {
      FUN_104501ac4();
      plVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)plVar6 + _DAT_113081f78) = 1;
      puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081f80);
      *puVar1 = 0;
      puVar1[1] = 0;
      plVar7 = (long *)((long)plVar6 + _DAT_113081f88);
      *plVar7 = lVar11;
      plVar7[1] = uVar10 | uVar9;
      *(byte *)((long)plVar6 + _DAT_113081f90) = bVar3 & 1;
      plVar7 = (long *)((long)plVar6 + _DAT_113081f98);
      *plVar7 = lVar12;
      *(undefined1 *)(plVar7 + 1) = 0;
      *(byte *)((long)plVar6 + _DAT_113081fa0) = bVar4 & 1;
      puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081fa8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar6 + _DAT_113081fb0) = 2;
      pplVar8 = aplStack_80;
      aplStack_80[0] = plVar6;
    }
  }
  else if (bVar5 == 2) {
    FUN_104501ac4();
    plVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)plVar6 + _DAT_113081f78) = 2;
    puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081f80);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081f88);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((long)plVar6 + _DAT_113081f90) = 2;
    puVar1 = (undefined8 *)((long)plVar6 + _DAT_113081f98);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)((long)plVar6 + _DAT_113081fa0) = 2;
    plVar7 = (long *)((long)plVar6 + _DAT_113081fa8);
    *plVar7 = lVar11;
    *(undefined1 *)(plVar7 + 1) = 0;
    *(byte *)((long)plVar6 + _DAT_113081fb0) = bVar2 & 1;
    pplVar8 = aplStack_70;
    aplStack_70[0] = plVar6;
  }
  else if ((bVar4 == 0xc0) &&
          (((uVar10 == 0 && uVar9 == 0) && (lVar11 == 0 && lVar12 == 0)) &&
           ((*(int *)((long)param_1 + 0x11) == 0 && *(int3 *)((long)param_1 + 0x15) == 0) &&
           bVar3 == 0))) {
    FUN_104501ac4();
    plVar7 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)plVar7 + _DAT_113081f78) = 3;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081f80);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081f88);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((long)plVar7 + _DAT_113081f90) = 2;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081f98);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)((long)plVar7 + _DAT_113081fa0) = 2;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081fa8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)((long)plVar7 + _DAT_113081fb0) = 2;
    pplVar8 = aplStack_60;
    aplStack_60[0] = plVar7;
  }
  else {
    FUN_104501ac4();
    plVar7 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)plVar7 + _DAT_113081f78) = 4;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081f80);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081f88);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((long)plVar7 + _DAT_113081f90) = 2;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081f98);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)((long)plVar7 + _DAT_113081fa0) = 2;
    puVar1 = (undefined8 *)((long)plVar7 + _DAT_113081fa8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)((long)plVar7 + _DAT_113081fb0) = 2;
    pplVar8 = aplStack_50;
    aplStack_50[0] = plVar7;
  }
  pplVar8[1] = param_1;
  _objc_msgSendSuper2(pplVar8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104501598; end: 104501753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501598(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  bVar4 = *(byte *)(param_2 + _DAT_113081f78);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar5 = ((undefined8 *)(param_2 + _DAT_113081f80))[1];
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104501740);
        (*pcVar2)();
      }
      uVar6 = *(undefined8 *)(param_2 + _DAT_113081f80);
      _swift_bridgeObjectRetain(uVar5);
      _objc_release(param_2);
      uVar3 = 0;
      uVar7 = 0;
      bVar4 = 0;
    }
    else {
      uVar5 = ((undefined8 *)(param_2 + _DAT_113081f88))[1];
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104501744);
        (*pcVar2)();
      }
      bVar4 = *(byte *)(param_2 + _DAT_113081f90);
      if (bVar4 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10450174c);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(param_2 + _DAT_113081f98) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104501750);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(param_2 + _DAT_113081fa0);
      if (bVar1 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104501754);
        (*pcVar2)();
      }
      uVar6 = *(undefined8 *)(param_2 + _DAT_113081f88);
      uVar7 = *(undefined8 *)(param_2 + _DAT_113081f98);
      _swift_bridgeObjectRetain(uVar5);
      _objc_release(param_2);
      uVar3 = (ulong)bVar4 & 1;
      bVar4 = bVar1 & 1 | 0x40;
    }
  }
  else if (bVar4 == 2) {
    if (*(char *)((undefined8 *)(param_2 + _DAT_113081fa8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10450173c);
      (*pcVar2)();
    }
    bVar4 = *(byte *)(param_2 + _DAT_113081fb0);
    if (bVar4 == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104501748);
      (*pcVar2)();
    }
    uVar6 = *(undefined8 *)(param_2 + _DAT_113081fa8);
    _objc_release();
    uVar3 = 0;
    uVar7 = 0;
    uVar5 = (ulong)bVar4 & 1;
    bVar4 = 0x80;
  }
  else if (bVar4 == 3) {
    _objc_release();
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0;
    uVar7 = 0;
    bVar4 = 0xc0;
  }
  else {
    _objc_release();
    uVar5 = 0;
    uVar3 = 0;
    uVar7 = 0;
    bVar4 = 0xc0;
    uVar6 = 1;
  }
  *param_1 = uVar6;
  param_1[1] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar7;
  *(byte *)(param_1 + 4) = bVar4;
  return;
}



/* Entry: 104501754; end: 104501763;  */

ulong FUN_104501754(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 104501764; end: 10450183f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501764(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104501ac4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113081f78) = 0;
  plVar1 = (long *)(lVar5 + _DAT_113081f80);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113081f88);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113081f90) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113081f98);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_113081fa0) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113081fa8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_113081fb0) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104501840; end: 10450192f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501840(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_104501ac4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113081f78) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113081f80);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_113081f88);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_113081f90) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113081f98);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(lVar5 + _DAT_113081fa0) = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113081fa8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_113081fb0) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 104501930; end: 1045019ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501930(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104501ac4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113081f78) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113081f80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113081f88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_113081f90) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113081f98);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_113081fa0) = 2;
  plVar2 = (long *)(lVar4 + _DAT_113081fa8);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_113081fb0) = param_2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104501a00; end: 104501ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501a00(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_104501ac4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_113081f78) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113081f80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113081f88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar3 + _DAT_113081f90) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113081f98);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar3 + _DAT_113081fa0) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113081fa8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar3 + _DAT_113081fb0) = 2;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104501ac4; end: 104501ae3;  */

void FUN_104501ac4(void)

{
  _objc_opt_self(&PTR_PTR_1129c7408);
  return;
}



/* Entry: 104501ae4; end: 104501c4b;  */

int FUN_104501ae4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104501b60;
        goto LAB_104501b44;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104501b44:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_104501b60:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104501c4c; end: 104501c8b;  */

void FUN_104501c4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10540;
  _swift_getWitnessTable(&UNK_10dd10540,&UNK_1107808f8);
  puRam0000000113081fe0 = puVar1;
  return;
}



/* Entry: 104501c8c; end: 104501cc3;  */

void FUN_104501c8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104501cc4; end: 104501d23;  */

void FUN_104501cc4(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  uint param_5)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3 & 1,param_4,param_5 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104501d24; end: 104501d47;  */

void FUN_104501d24(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104501d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2 & 1)
  ;
  return;
}



/* Entry: 104501d48; end: 104501df3;  */

void FUN_104501d48(void)

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



/* Entry: 104501df4; end: 104501e33;  */

void FUN_104501df4(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104501e34; end: 104501e5b; -[SCLensCarouselContextConfig description] */

void FUN_104501e34(void)

{
  _objc_retain();
  FUN_1045021a4();
  func_0x0001038880ec();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104501e5c; end: 104501ea3; -[SCLensCarouselContextConfig init] */

void FUN_104501e5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselContextConfigWrapper.swift",0x3a,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104501ea4);
  (*pcVar1)();
}



/* Entry: 104501ea4; end: 104501ea7; -[SCLensCarouselContextConfig copyWithZone:] */

void FUN_104501ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104501ea8; end: 104501f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501ea8(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113081fe8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082008);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081ff0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_113081ff8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113082000) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104501f38; end: 104501fcb; +[SCLensCarouselContextConfig predefinedWithCarouselType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113081fe8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113082008);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113081ff0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_113081ff8) = 0;
  *(undefined8 *)(lVar2 + _DAT_113082000) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104501fcc; end: 104501fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104501fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104502340();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113081fe8) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113082008);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113081ff0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113081ff8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113082000) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104501fd0; end: 104502033; +[SCLensCarouselContextConfig customWithActivationSource:lensesObservable:contextUpdater:] */

void FUN_104501fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  FUN_104502288(param_3,param_4,param_5);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


