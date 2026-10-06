/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10443bfac; end: 10443bfd7; +[_TtC20OperaAPIDefinesSwift20SCOperaPlaybackError domain] */

void FUN_10443bfac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fed80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10443bfd8; end: 10443c013; -[_TtC20OperaAPIDefinesSwift20SCOperaPlaybackError init] */

void FUN_10443bfd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443c014; end: 10443c047;  */

void FUN_10443c014(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10443c048; end: 10443c05f; -[_TtC20OperaAPIDefinesSwift20SCOperaPlaybackError .cxx_destruct] */

void FUN_10443c048(void)

{
  return;
}



/* Entry: 10443c060; end: 10443c137;  */

void FUN_10443c060(void)

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



/* Entry: 10443c138; end: 10443c143;  */

void FUN_10443c138(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10443c144; end: 10443c217;  */

bool FUN_10443c144(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar1);
  if (uVar2 == 0xd00000000000001b && param_2 == -0x7ffffffef0e01280) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,0xd00000000000001b,0x800000010f1fed80,0);
    _swift_bridgeObjectRelease(param_2);
    if ((uVar2 & 1) == 0) {
      _objc_release(param_1);
      return false;
    }
  }
  uVar1 = param_1;
  func_0x00010bf3ec40(param_1);
  _objc_release(param_1);
  return uVar1 == 0x67;
}



/* Entry: 10443c218; end: 10443c24b;  */

uint FUN_10443c218(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10443c24c();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10443c24c; end: 10443c31f;  */

bool FUN_10443c24c(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar2);
  if (uVar3 == 0xd00000000000001b && param_2 == -0x7ffffffef0e01280) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,param_2,0xd00000000000001b,0x800000010f1fed80,0);
    _swift_bridgeObjectRelease(param_2);
    if ((uVar3 & 1) == 0) {
      return false;
    }
  }
  uVar2 = unaff_x20;
  func_0x00010bf3ec40();
  if (uVar2 == 0x66) {
    bVar1 = true;
  }
  else {
    func_0x00010bf3ec40();
    bVar1 = unaff_x20 == 0x67;
  }
  return bVar1;
}



/* Entry: 10443c320; end: 10443c323;  */

undefined * FUN_10443c320(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000043;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f1feda0;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fed80);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 10443c324; end: 10443c337; +[_TtC20OperaAPIDefinesSwift20SCOperaPlaybackError codecDownloadBlockedError] */

void FUN_10443c324(void)

{
  FUN_10443c34c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10443c338; end: 10443c34b;  */

undefined1  [16] FUN_10443c338(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  bVar2 = param_1 - 0x69U < 0xfffffffffffffffb;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = param_1;
  }
  auVar3[8] = bVar2;
  auVar3._0_8_ = lVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10443c34c; end: 10443c493;  */

undefined * FUN_10443c34c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000043;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f1feda0;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fed80);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 10443c494; end: 10443c497;  */

void FUN_10443c494(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe6c0;
  _swift_getWitnessTable(&UNK_10dcfe6c0,&UNK_11076edc0);
  puRam0000000113079780 = puVar1;
  return;
}



/* Entry: 10443c498; end: 10443c4f7;  */

void FUN_10443c498(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe6c0;
  _swift_getWitnessTable(&UNK_10dcfe6c0,&UNK_11076edc0);
  puRam0000000113079780 = puVar1;
  return;
}



/* Entry: 10443c4f8; end: 10443c51f;  */

undefined1  [16] FUN_10443c4f8(void)

{
  return ZEXT816(0x11076edc0);
}



/* Entry: 10443c520; end: 10443c55f;  */

void FUN_10443c520(void)

{
  undefined *puVar1;
  
  if (puRam00000001130797b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe7a0;
  _swift_getWitnessTable(&UNK_10dcfe7a0,&UNK_11076ee38);
  puRam00000001130797b0 = puVar1;
  return;
}



/* Entry: 10443c560; end: 10443c60b;  */

void FUN_10443c560(void)

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



/* Entry: 10443c60c; end: 10443c657;  */

void FUN_10443c60c(ulong *param_1,ulong *param_2)

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



/* Entry: 10443c658; end: 10443c72f;  */

void FUN_10443c658(void)

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



/* Entry: 10443c730; end: 10443c73b;  */

void FUN_10443c730(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10443c73c; end: 10443c773; +[SCOperaScrollRelativePositionUtils stringFromPosition:] */

void FUN_10443c73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010443c7e4(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10443c774; end: 10443c7af; -[SCOperaScrollRelativePositionUtils init] */

void FUN_10443c774(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443c7b0; end: 10443c8f3;  */

void FUN_10443c7b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10443c8f4; end: 10443c8f7;  */

void FUN_10443c8f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130797b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe860;
  _swift_getWitnessTable(&UNK_10dcfe860,&UNK_11076eeb0);
  puRam00000001130797b8 = puVar1;
  return;
}



/* Entry: 10443c8f8; end: 10443c937;  */

void FUN_10443c8f8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130797b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe860;
  _swift_getWitnessTable(&UNK_10dcfe860,&UNK_11076eeb0);
  puRam00000001130797b8 = puVar1;
  return;
}



/* Entry: 10443c938; end: 10443c947;  */

undefined1  [16] FUN_10443c938(void)

{
  return ZEXT816(0x11076eeb0);
}



/* Entry: 10443c948; end: 10443c967;  */

void FUN_10443c948(void)

{
  _objc_opt_self(&PTR_PTR_1129b3a60);
  return;
}



/* Entry: 10443c968; end: 10443c97b;  */

bool FUN_10443c968(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10443c97c; end: 10443ca27;  */

void FUN_10443c97c(void)

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



/* Entry: 10443ca28; end: 10443ca4f;  */

void FUN_10443ca28(ulong *param_1,ulong *param_2)

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



/* Entry: 10443ca50; end: 10443ca5f; -[SCOperaShareableMedia mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443ca50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130797e8);
}



/* Entry: 10443ca60; end: 10443ca6f; -[SCOperaShareableMedia image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ca60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130797f0));
  return;
}



/* Entry: 10443ca70; end: 10443ca7f; -[SCOperaShareableMedia videoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ca70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130797f8));
  return;
}



/* Entry: 10443ca80; end: 10443ca8b; -[SCOperaShareableMedia videoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ca80(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813600,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10443ca8c; end: 10443ca97; -[SCOperaShareableMedia remoteURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ca8c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813608,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10443ca98; end: 10443cb5f;  */

void FUN_10443ca98(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + *param_3,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10443cb60; end: 10443cb6f; -[SCOperaShareableMedia videoURLFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443cb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813610));
  return;
}



/* Entry: 10443cb70; end: 10443cb7f; -[SCOperaShareableMedia transformManipulatorFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443cb70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813618);
}



/* Entry: 10443cb80; end: 10443cbd7; -[SCOperaShareableMedia init] */

void FUN_10443cb80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001f,0x800000010f009ca0,
             "OperaAPIDefinesSwift/OperaShareableMedia.swift",0x2e,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10443cbd8);
  (*pcVar1)();
}



/* Entry: 10443cbd8; end: 10443cd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443cbd8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = 0;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  (*pcVar3)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = 1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443cd98; end: 10443cdbf; -[SCOperaShareableMedia initWithShareableImage:] */

void FUN_10443cd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010443ccb8();
  return;
}



/* Entry: 10443cdc0; end: 10443cf7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443cdc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = 0;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  (*pcVar3)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = param_2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443cf80; end: 10443cfaf; -[SCOperaShareableMedia initWithShareableImage:manipulatorFormat:] */

void FUN_10443cf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010443cea0();
  return;
}



/* Entry: 10443cfb0; end: 10443cfef;  */

void FUN_10443cfb0(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_10443cff0(param_1,param_2);
  return;
}



/* Entry: 10443cff0; end: 10443d107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10443cff0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  puVar3 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = 0;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(unaff_x20 + lVar1,1,1,lVar2);
  lVar1 = _DAT_113813608;
  (**(code **)(lVar4 + 0x10))(unaff_x20 + _DAT_113813608,param_2,lVar2);
  (*pcVar5)(unaff_x20 + lVar1,0,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = 1;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_2,lVar2);
  return puVar3;
}



/* Entry: 10443d108; end: 10443d18f; -[SCOperaShareableMedia initWithShareableImage:remoteUrl:] */

void FUN_10443d108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  _objc_retain(param_3);
  FUN_10443cff0(param_3,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10443d190; end: 10443d34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443d190(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = param_1;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  (*pcVar3)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = 0;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443d350; end: 10443d377; -[SCOperaShareableMedia initWithVideoAsset:] */

void FUN_10443d350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010443d270();
  return;
}



/* Entry: 10443d378; end: 10443d53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443d378(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = param_1;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  (*pcVar3)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = 0;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443d540; end: 10443d587; -[SCOperaShareableMedia initWithVideoAsset:overlay:] */

void FUN_10443d540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010443d45c(param_3,param_4);
  return;
}



/* Entry: 10443d588; end: 10443d5b7;  */

void FUN_10443d588(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10443d5b8(param_1);
  return;
}



/* Entry: 10443d5b8; end: 10443d6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10443d5b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  puVar3 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = 0;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(unaff_x20 + lVar1,0,1,lVar2);
  (*pcVar5)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 10443d6cc; end: 10443d73f; -[SCOperaShareableMedia initWithVideoURL:] */

void FUN_10443d6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  FUN_10443d5b8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10443d740; end: 10443d8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443d740(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = 0;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  (*pcVar3)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = 0;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443d900; end: 10443d927; -[SCOperaShareableMedia initWithVideoURLFuture:] */

void FUN_10443d900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010443d820();
  return;
}



/* Entry: 10443d928; end: 10443daef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443d928(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = param_1;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  (*pcVar3)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = param_2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443daf0; end: 10443db1f; -[SCOperaShareableMedia initWithVideoAsset:manipulatorFormat:] */

void FUN_10443daf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010443da0c();
  return;
}



/* Entry: 10443db20; end: 10443db5f;  */

void FUN_10443db20(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_10443db60(param_1,param_2);
  return;
}



/* Entry: 10443db60; end: 10443dc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10443db60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  puVar3 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130797e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130797f8) = 0;
  lVar1 = _DAT_113813600;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(unaff_x20 + lVar1,0,1,lVar2);
  (*pcVar5)(unaff_x20 + _DAT_113813608,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113813610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113813618) = param_2;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 10443dc78; end: 10443dcf7; -[SCOperaShareableMedia initWithVideoURL:manipulatorFormat:] */

void FUN_10443dc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  FUN_10443db60(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  return;
}



/* Entry: 10443dcf8; end: 10443dd7f; -[SCOperaShareableMedia description] */

void FUN_10443dcf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_1;
  _swift_getObjectType();
  puVar3 = PTR_s_description_1125b9278;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_40,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined8 *)0x0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10443dd80; end: 10443ddb3;  */

void FUN_10443dd80(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10443ddb4; end: 10443de1b; -[SCOperaShareableMedia .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ddb4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130797f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130797f8));
  func_0x0001000293e4(param_1 + _DAT_113813600);
  func_0x0001000293e4(param_1 + _DAT_113813608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113813610));
  return;
}



/* Entry: 10443de1c; end: 10443de1f;  */

void FUN_10443de1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe948;
  _swift_getWitnessTable(&UNK_10dcfe948,&UNK_11076ef28);
  puRam0000000113079800 = puVar1;
  return;
}



/* Entry: 10443de20; end: 10443de5f;  */

void FUN_10443de20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfe948;
  _swift_getWitnessTable(&UNK_10dcfe948,&UNK_11076ef28);
  puRam0000000113079800 = puVar1;
  return;
}



/* Entry: 10443de60; end: 10443de77;  */

undefined1  [16] FUN_10443de60(void)

{
  return ZEXT816(0x11076ef28);
}



/* Entry: 10443de78; end: 10443deaf;  */

void FUN_10443de78(undefined8 param_1)

{
  if (lRam0000000113079830 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e806780);
  return;
}



/* Entry: 10443deb0; end: 10443df43;  */

void FUN_10443deb0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_60 = &UNK_10dcfea28;
  puStack_58 = &UNK_10dcfea28;
  lVar2 = 0x13f;
  puStack_68 = puVar1;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = &UNK_10dcfea28;
    lStack_48 = lStack_50;
    puStack_38 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,7,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 10443df44; end: 10443df5f;  */

void FUN_10443df44(ulong *param_1,ulong *param_2)

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



/* Entry: 10443df60; end: 10443e00f;  */

void FUN_10443df60(void)

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



/* Entry: 10443e010; end: 10443e093; -[SCOperaViewControllerPresentationConfig baseViewBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443e010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113079840;
  _swift_beginAccess(param_1 + _DAT_113079840,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10443e094; end: 10443e12f; -[SCOperaViewControllerPresentationConfig setBaseViewBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113079840;
  _swift_beginAccess(param_1 + _DAT_113079840,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10443e130; end: 10443e16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e130(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079840;
  _swift_beginAccess(unaff_x20 + _DAT_113079840,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10443ee20;
  return auVar2;
}



/* Entry: 10443e170; end: 10443e1f3; -[SCOperaViewControllerPresentationConfig baseViewOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443e170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113079848;
  _swift_beginAccess(param_1 + _DAT_113079848,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10443e1f4; end: 10443e28f; -[SCOperaViewControllerPresentationConfig setBaseViewOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113079848;
  _swift_beginAccess(param_1 + _DAT_113079848,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10443e290; end: 10443e2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e290(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079848;
  _swift_beginAccess(unaff_x20 + _DAT_113079848,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10443ee28;
  return auVar2;
}



/* Entry: 10443e2d0; end: 10443e353; -[SCOperaViewControllerPresentationConfig transitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443e2d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113079850;
  _swift_beginAccess(param_1 + _DAT_113079850,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10443e354; end: 10443e3ef; -[SCOperaViewControllerPresentationConfig setTransitionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113079850;
  _swift_beginAccess(param_1 + _DAT_113079850,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10443e3f0; end: 10443e42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e3f0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079850;
  _swift_beginAccess(unaff_x20 + _DAT_113079850,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10443ee24;
  return auVar2;
}



/* Entry: 10443e430; end: 10443e4c3; -[SCOperaViewControllerPresentationConfig baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e430(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113079858;
  _swift_beginAccess(param_1 + _DAT_113079858,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10443e4c4; end: 10443e57b; -[SCOperaViewControllerPresentationConfig setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113079858;
  _swift_beginAccess(param_1 + _DAT_113079858,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10443e57c; end: 10443e5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e57c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079858;
  _swift_beginAccess(unaff_x20 + _DAT_113079858,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10443e5bc;
  return auVar2;
}



/* Entry: 10443e5bc; end: 10443e5bf;  */

void FUN_10443e5bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10443e5c0; end: 10443e64f; -[SCOperaViewControllerPresentationConfig baseViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443e5c0(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113079860);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 10443e650; end: 10443e71f; -[SCOperaViewControllerPresentationConfig setBaseViewFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_113079860);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10443e720; end: 10443e75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e720(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079860;
  _swift_beginAccess(unaff_x20 + _DAT_113079860,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10443ee2c;
  return auVar2;
}



/* Entry: 10443e760; end: 10443e7e3; -[SCOperaViewControllerPresentationConfig topInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443e760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113079868;
  _swift_beginAccess(param_1 + _DAT_113079868,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10443e7e4; end: 10443e87f; -[SCOperaViewControllerPresentationConfig setTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e7e4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113079868;
  _swift_beginAccess(param_2 + _DAT_113079868,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 10443e880; end: 10443e8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e880(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079868;
  _swift_beginAccess(unaff_x20 + _DAT_113079868,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10443ee30;
  return auVar2;
}



/* Entry: 10443e8c0; end: 10443e943; -[SCOperaViewControllerPresentationConfig thumbnailTransitionDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10443e8c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113079870;
  _swift_beginAccess(param_1 + _DAT_113079870,auStack_38,0,0);
  return *(undefined4 *)(param_1 + lVar1);
}



/* Entry: 10443e944; end: 10443e9df; -[SCOperaViewControllerPresentationConfig setThumbnailTransitionDurationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443e944(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113079870;
  _swift_beginAccess(param_1 + _DAT_113079870,auStack_48,1,0);
  *(undefined4 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10443e9e0; end: 10443ea1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443e9e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113079870;
  _swift_beginAccess(unaff_x20 + _DAT_113079870,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10443ee34;
  return auVar2;
}



/* Entry: 10443ea20; end: 10443eb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ea20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_98 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113079858;
  *(undefined8 *)(unaff_x20 + _DAT_113079858) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_113079870) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113079840) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113079848) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113079850) = param_8;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_98,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079860);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113079868) = param_5;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443eb28; end: 10443ec0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_113079858;
  *(undefined8 *)(unaff_x20 + _DAT_113079858) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_113079870) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113079840) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113079848) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113079850) = param_8;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079860);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113079868) = param_5;
  FUN_10443ed48();
  _objc_msgSendSuper2(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443ec0c; end: 10443eca7; -[SCOperaViewControllerPresentationConfig initWithBaseViewBehavior:baseViewOrientation:transitionMode:baseView:baseViewFrame:topInset:] */

void FUN_10443ec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_11);
  FUN_10443eb28(param_1,param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 10443eca8; end: 10443eccb; -[SCOperaViewControllerPresentationConfig initWithBaseView:baseViewBehavior:topInset:transitionMode:] */

void FUN_10443eca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0,0,param_1,param_2,PTR_s_initWithBaseViewBehavior_baseVie_1125db670,param_5,0,
             param_6,param_4);
  return;
}



/* Entry: 10443eccc; end: 10443ed27; -[SCOperaViewControllerPresentationConfig init] */

void FUN_10443eccc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OperaAPIDefinesSwift.OperaViewControllerPresentationConfig",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10443ecf8);
  (*pcVar1)();
}



/* Entry: 10443ed28; end: 10443ed47; -[SCOperaViewControllerPresentationConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443ed28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079858));
  return;
}



/* Entry: 10443ed48; end: 10443ed67;  */

void FUN_10443ed48(void)

{
  _objc_opt_self(&PTR_PTR_1129b3c48);
  return;
}


