/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f6ebf4; end: 103f6ec03; -[SCBundleGroupParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ebf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130362b8));
  return;
}



/* Entry: 103f6ec04; end: 103f6ec23;  */

void FUN_103f6ec04(void)

{
  _objc_opt_self(&PTR_PTR_11296cfb8);
  return;
}



/* Entry: 103f6ec24; end: 103f6ec27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ec24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130362b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130362b8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6ec28; end: 103f6ec37; -[SCCallLensPickerServices lensPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ec28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130362e8));
  return;
}



/* Entry: 103f6ec38; end: 103f6ec47; -[SCCallLensPickerServices lensMetadataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ec38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130362f0));
  return;
}



/* Entry: 103f6ec48; end: 103f6ecab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ec48(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130362e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130362f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6ecac; end: 103f6ed23; -[SCCallLensPickerServices initWithLensPicker:lensMetadataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ecac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130362e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130362f0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f6ed24; end: 103f6ed57;  */

void FUN_103f6ed24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f6ed58; end: 103f6ed8f; -[SCCallLensPickerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ed58(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130362e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130362f0));
  return;
}



/* Entry: 103f6ed90; end: 103f6edaf;  */

void FUN_103f6ed90(void)

{
  _objc_opt_self(&PTR_PTR_11296d088);
  return;
}



/* Entry: 103f6edb0; end: 103f6ee4f;  */

void FUN_103f6edb0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f6ee50; end: 103f6ee5b;  */

undefined8 FUN_103f6ee50(void)

{
  return 1;
}



/* Entry: 103f6ee5c; end: 103f6ee9b;  */

void FUN_103f6ee5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0d20;
  _swift_getWitnessTable(&UNK_10dcb0d20,&UNK_1107272a8);
  puRam0000000113036320 = puVar1;
  return;
}



/* Entry: 103f6ee9c; end: 103f6ef87;  */

uint FUN_103f6ee9c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103f6ef88; end: 103f6efd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ef88(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036328) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6efd4; end: 103f6f033; -[_TtC18SCLensPlusServices37SCMainCameraScopedImagineLensServices init] */

void FUN_103f6efd4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.SCMainCameraScopedImagineLensServices",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6f000);
  (*pcVar1)();
}



/* Entry: 103f6f034; end: 103f6f043; -[_TtC18SCLensPlusServices37SCMainCameraScopedImagineLensServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113036328));
  return;
}



/* Entry: 103f6f044; end: 103f6f11f;  */

void FUN_103f6f044(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000100774084();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103f6f120; end: 103f6f123;  */

void FUN_103f6f120(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0e40;
  _swift_getWitnessTable(&UNK_10dcb0e40,&UNK_110727300);
  puRam0000000113036358 = puVar1;
  return;
}



/* Entry: 103f6f124; end: 103f6f163;  */

void FUN_103f6f124(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0e40;
  _swift_getWitnessTable(&UNK_10dcb0e40,&UNK_110727300);
  puRam0000000113036358 = puVar1;
  return;
}



/* Entry: 103f6f164; end: 103f6f167;  */

void FUN_103f6f164(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0ee0;
  _swift_getWitnessTable(&UNK_10dcb0ee0,&UNK_110727320);
  puRam0000000113036360 = puVar1;
  return;
}



/* Entry: 103f6f168; end: 103f6f1a7;  */

void FUN_103f6f168(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0ee0;
  _swift_getWitnessTable(&UNK_10dcb0ee0,&UNK_110727320);
  puRam0000000113036360 = puVar1;
  return;
}



/* Entry: 103f6f1a8; end: 103f6f207;  */

undefined1  [16] FUN_103f6f1a8(void)

{
  return ZEXT816(0x110727300);
}



/* Entry: 103f6f208; end: 103f6f247;  */

void FUN_103f6f208(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0fc0;
  _swift_getWitnessTable(&UNK_10dcb0fc0,&UNK_110727398);
  puRam0000000113036368 = puVar1;
  return;
}



/* Entry: 103f6f248; end: 103f6f2f3;  */

void FUN_103f6f248(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f6f2f4; end: 103f6f327;  */

void FUN_103f6f2f4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 103f6f328; end: 103f6f373; -[SCLensPlusFreemiumState lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113036370);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113036370))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f6f374; end: 103f6f3cf; -[SCLensPlusFreemiumState groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f374(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113036378))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113036378);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f6f3d0; end: 103f6f42f; -[SCLensPlusFreemiumState isFreemiumAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103f6f3d0(long param_1)

{
  code *pcVar1;
  
  if (!SBORROW4(*(int *)(param_1 + _DAT_113036380),*(int *)(param_1 + _DAT_113036388))) {
    return 0 < *(int *)(param_1 + _DAT_113036380) - *(int *)(param_1 + _DAT_113036388);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6f400);
  (*pcVar1)();
}



/* Entry: 103f6f430; end: 103f6f43f; -[SCLensPlusFreemiumState freemiumLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f6f430(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113036380);
}



/* Entry: 103f6f440; end: 103f6f44f; -[SCLensPlusFreemiumState freemiumCounter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f6f440(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113036388);
}



/* Entry: 103f6f450; end: 103f6f4a7; -[SCLensPlusFreemiumState generationsAvailableCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f6f450(long param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(int *)(param_1 + _DAT_113036380) - *(int *)(param_1 + _DAT_113036388);
  if (!SBORROW4(*(int *)(param_1 + _DAT_113036380),*(int *)(param_1 + _DAT_113036388))) {
    return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6f47c);
  (*pcVar2)();
}



/* Entry: 103f6f4a8; end: 103f6f50f; -[SCLensPlusFreemiumState hasExceededFreemiumLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103f6f4a8(long param_1)

{
  if (0 < *(int *)(param_1 + _DAT_113036380)) {
    return *(int *)(param_1 + _DAT_113036380) <= *(int *)(param_1 + _DAT_113036388);
  }
  return false;
}



/* Entry: 103f6f510; end: 103f6f5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f510(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036370);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_113036380) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_113036388) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036378);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6f5b4; end: 103f6f63b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f5b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036370);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_113036380) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_113036388) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036378);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000103f6f61c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6f63c; end: 103f6f6f3; -[SCLensPlusFreemiumState initWithLensId:freemiumLimit:freemiumCounter:groupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f63c(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    param_6 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113036370);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined4 *)(param_1 + _DAT_113036380) = param_4;
  *(undefined4 *)(param_1 + _DAT_113036388) = param_5;
  plVar2 = (long *)(param_1 + _DAT_113036378);
  *plVar2 = param_6;
  plVar2[1] = lVar3;
  func_0x000103f6f61c();
  lStack_50 = param_1;
  lStack_48 = param_6;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6f6f4; end: 103f6f767;  */

undefined8 FUN_103f6f6f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x000107c472e0(unaff_x20);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 103f6f768; end: 103f6f777; -[SCLensPlusFreemiumState initWithNoFreemiumForLensId:] */

void FUN_103f6f768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c024490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensId_freemiumLimit_fre_1125e6b08,param_3,0,0,0);
  return;
}



/* Entry: 103f6f778; end: 103f6f7d3; -[SCLensPlusFreemiumState init] */

void FUN_103f6f778(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.LensPlusFreemiumState",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6f7a4);
  (*pcVar1)();
}



/* Entry: 103f6f7d4; end: 103f6f85f; -[SCLensPlusFreemiumState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f7d4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113036370 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113036378 + 8))
  ;
  return;
}



/* Entry: 103f6f860; end: 103f6f8bf; -[SCLensPlusGameLensUpsellServices init] */

void FUN_103f6f860(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.LensPlusGameLensUpsellServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6f88c);
  (*pcVar1)();
}



/* Entry: 103f6f8c0; end: 103f6f90b; -[SCLensPlusPriceDiscount discountedPriceText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f8c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130363e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130363e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f6f90c; end: 103f6f9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f90c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130363e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6f9c4; end: 103f6fa27; -[SCLensPlusPriceDiscount initWithDiscountedPriceText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6f9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130363e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6fa28; end: 103f6fa53; -[SCLensPlusPriceDiscount init] */

void FUN_103f6fa28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.LensPlusPriceDiscount",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6fa54);
  (*pcVar1)();
}



/* Entry: 103f6fa54; end: 103f6fa57;  */

void FUN_103f6fa54(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f6fa58; end: 103f6fa6b; -[SCLensPlusPriceDiscount .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fa58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130363e8 + 8))
  ;
  return;
}



/* Entry: 103f6fa6c; end: 103f6fac7; -[SCLensPlusPriceInfo priceText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fa6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130363f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130363f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f6fac8; end: 103f6fad7; -[SCLensPlusPriceInfo discount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130363f8));
  return;
}



/* Entry: 103f6fad8; end: 103f6fae7; -[SCLensPlusPriceInfo hasIntroductoryOffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f6fad8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036400);
}



/* Entry: 103f6fae8; end: 103f6fbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130363f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130363f8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113036400) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6fbf0; end: 103f6fc97; -[SCLensPlusPriceInfo initWithPriceText:discount:hasIntroductoryOffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fbf0(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130363f0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130363f8) = param_4;
  *(undefined1 *)(param_1 + _DAT_113036400) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 103f6fc98; end: 103f6fcf7; -[SCLensPlusPriceInfo init] */

void FUN_103f6fc98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.LensPlusPriceInfo",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6fcc4);
  (*pcVar1)();
}



/* Entry: 103f6fcf8; end: 103f6fd33; -[SCLensPlusPriceInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fcf8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130363f0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130363f8));
  return;
}



/* Entry: 103f6fd34; end: 103f6fd73;  */

void FUN_103f6fd34(void)

{
  _objc_opt_self(&PTR_PTR_11296d3c0);
  return;
}



/* Entry: 103f6fd74; end: 103f6fd77;  */

void FUN_103f6fd74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f6fd78; end: 103f6fd87; -[SCLensPlusServices lensPlusFreemiumServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fd78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036470));
  return;
}



/* Entry: 103f6fd88; end: 103f6fd97; -[SCLensPlusServices legacyLensPlusFreemiumServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fd88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036480));
  return;
}



/* Entry: 103f6fd98; end: 103f6fda7; -[SCLensPlusServices lensPlusOverlayCTAServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036490));
  return;
}



/* Entry: 103f6fda8; end: 103f6fdb7; -[SCLensPlusServices lensPlusPostCaptureCellOverlayProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130364b0));
  return;
}



/* Entry: 103f6fdb8; end: 103f6fdff; -[SCLensPlusServices lensExplorerARBarNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fdb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130364e0;
  _swift_beginAccess(param_1 + _DAT_1130364e0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f6fe00; end: 103f6fe57; -[SCLensPlusServices setLensExplorerARBarNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fe00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130364e0;
  _swift_beginAccess(param_1 + _DAT_1130364e0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f6fe58; end: 103f6fedf; -[SCLensPlusServices imagineLensServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6fe58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130364e8;
  _swift_beginAccess(param_1 + _DAT_1130364e8,auStack_48,0,0);
  lVar1 = param_1 + lVar1;
  _swift_weakLoadStrong();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x0001003a5b88();
    _swift_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103f6fee0; end: 103f7010f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f6fee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130364e0,0);
  _swift_weakInit(unaff_x20 + _DAT_1130364e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113036458) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036460) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036468) = param_2;
  uVar1 = param_2;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036470) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036478) = param_3;
  uVar1 = param_3;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036480) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036488) = param_4;
  uVar1 = param_4;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036490) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036498) = param_5;
  uVar1 = param_5;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_1130364a0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130364a8) = param_6;
  uVar1 = param_6;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_1130364b0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130364b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130364c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130364c8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130364d0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130364d8) = param_11;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  _swift_release(param_1);
  _swift_release(param_2);
  _swift_release(param_3);
  _swift_release(param_4);
  _swift_release(param_5);
  _swift_release(param_6);
  return puVar2;
}



/* Entry: 103f70110; end: 103f7016f; -[SCLensPlusServices init] */

void FUN_103f70110(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.SCLensPlusServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7013c);
  (*pcVar1)();
}



/* Entry: 103f70170; end: 103f702b7; -[SCLensPlusServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f70170(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036458));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036460));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036468));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036470));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036478));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036480));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036488));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036490));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036498));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130364a0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130364a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130364b0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130364b8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130364c0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130364c8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130364d0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130364d8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130364e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_weakDestroy_11034f5e0)(param_1 + _DAT_1130364e8);
  return;
}



/* Entry: 103f702b8; end: 103f7033b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f702b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036518) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036520) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103f7033c; end: 103f7039b; -[SCLensPlusTierCheckServices init] */

void FUN_103f7033c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusServices.SCLensPlusTierCheckServices",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f70368);
  (*pcVar1)();
}



/* Entry: 103f7039c; end: 103f703d3; -[SCLensPlusTierCheckServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7039c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036518));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113036520));
  return;
}



/* Entry: 103f703d4; end: 103f703eb;  */

bool FUN_103f703d4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f703ec; end: 103f7042b;  */

void FUN_103f703ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1190;
  _swift_getWitnessTable(&UNK_10dcb1190,&UNK_110727410);
  puRam0000000113036550 = puVar1;
  return;
}



/* Entry: 103f7042c; end: 103f704d7;  */

void FUN_103f7042c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f704d8; end: 103f7050f;  */

void FUN_103f704d8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f70510; end: 103f705bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f70510(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x000107c4b1dc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar1);
  func_0x000107c4a4c0(param_1);
  _objc_release(param_1);
  lVar3 = *(long *)(param_2 + _DAT_113036378 + 8);
  _swift_bridgeObjectRetain(lVar3);
  _objc_release(param_2);
  if (lVar3 != 0) {
    _swift_bridgeObjectRelease(lVar3);
  }
  return uVar2;
}



/* Entry: 103f705c0; end: 103f70647;  */

byte FUN_103f705c0(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar3 = param_1[2];
  bVar1 = *(byte *)((long)param_1 + 0x11);
  uVar4 = param_2[2];
  bVar2 = *(byte *)((long)param_2 + 0x11);
  if (uVar5 == *param_2 && param_1[1] == param_2[1]) {
    if ((byte)uVar3 != (byte)uVar4) {
      return 0;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((((byte)uVar3 ^ (byte)uVar4) & 1) != 0) {
      return 0;
    }
  }
  return bVar1 ^ bVar2 ^ 1;
}



/* Entry: 103f70648; end: 103f7064f;  */

void FUN_103f70648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103f70650; end: 103f70683;  */

undefined8 * FUN_103f70650(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 103f70684; end: 103f706df;  */

undefined8 * FUN_103f70684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 103f706e0; end: 103f70723;  */

undefined8 * FUN_103f706e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 103f70724; end: 103f707cb;  */

int FUN_103f70724(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103f707cc; end: 103f70803;  */

void FUN_103f707cc(undefined8 param_1)

{
  if (lRam00000001130365b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d867c);
  return;
}



/* Entry: 103f70804; end: 103f7093b;  */

long * FUN_103f70804(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    lVar3 = param_2[4];
    lVar5 = param_2[5];
    lVar6 = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar2);
    func_0x000103f707c4(lVar3,lVar5,(char)lVar6);
    param_1[4] = lVar3;
    param_1[5] = lVar5;
    *(char *)(param_1 + 6) = (char)lVar6;
    lVar5 = (long)*(int *)(param_3 + 0x1c);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar2 + -8);
    lVar3 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103f7093c; end: 103f709c7;  */

void FUN_103f7093c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  FUN_103f709c8(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined1 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103f709c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103f709c8; end: 103f709cf;  */

void FUN_103f709c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f709d0; end: 103f70c5b;  */

undefined8 * FUN_103f709d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  func_0x000103f707c4(uVar1,uVar3,uVar4);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = uVar4;
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar5 + -8);
  lVar6 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 103f70c5c; end: 103f70d3b;  */

undefined8 * FUN_103f70c5c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 103f70d3c; end: 103f70e8b;  */

undefined8 * FUN_103f70d3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar1 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar4);
  uVar1 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 6);
  uVar1 = param_1[4];
  uVar4 = param_1[5];
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  uVar3 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar2;
  FUN_103f709c8(uVar1,uVar4,uVar3);
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_103f70e4c;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_103f70e4c;
  }
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40))
  ;
LAB_103f70e4c:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 103f70e8c; end: 103f70ea3;  */

void FUN_103f70e8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103f70ea4; end: 103f70f2f;  */

void FUN_103f70ea4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dcb12d8;
  puStack_40 = &UNK_10dcb12d8;
  puStack_38 = &UNK_10dcb12f0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 103f70f30; end: 103f7136b;  */

void FUN_103f70f30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 103f7136c; end: 103f71383;  */

bool FUN_103f7136c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f71384; end: 103f713c3;  */

void FUN_103f71384(void)

{
  undefined *puVar1;
  
  if (puRam00000001130365f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1350;
  _swift_getWitnessTable(&UNK_10dcb1350,&UNK_1107276c0);
  puRam00000001130365f8 = puVar1;
  return;
}



/* Entry: 103f713c4; end: 103f7146f;  */

void FUN_103f713c4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f71470; end: 103f714a7;  */

void FUN_103f71470(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f714a8; end: 103f71baf;  */

long FUN_103f714a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f71bb0; end: 103f71bc7;  */

bool FUN_103f71bb0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f71bc8; end: 103f71c07;  */

void FUN_103f71bc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1440;
  _swift_getWitnessTable(&UNK_10dcb1440,&UNK_1107277f0);
  puRam0000000113036600 = puVar1;
  return;
}



/* Entry: 103f71c08; end: 103f71cb3;  */

void FUN_103f71c08(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f71cb4; end: 103f71ceb;  */

void FUN_103f71cb4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f71cec; end: 103f71f67;  */

long FUN_103f71cec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}


