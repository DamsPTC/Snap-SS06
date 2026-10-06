/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104310e4c; end: 104310e7f;  */

void FUN_104310e4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104310e80; end: 104310eab; -[_TtC31SCBitmojiEditAvatarBuilderScope39SCBitmojiEditAvatarBuilderScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104310e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d6a0));
  return;
}



/* Entry: 104310eac; end: 1043110b7;  */

long FUN_104310eac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043110b8; end: 1043110c7; -[SCBitmojiEditAvatarBuilderContext flowMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043110b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d708);
}



/* Entry: 1043110c8; end: 1043110d7; -[SCBitmojiEditAvatarBuilderContext initialAvatarBuilderCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043110c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d710);
}



/* Entry: 1043110d8; end: 1043110e7; -[SCBitmojiEditAvatarBuilderContext outfitTryOnInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043110d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d718));
  return;
}



/* Entry: 1043110e8; end: 1043110f7; -[SCBitmojiEditAvatarBuilderContext exitDialogType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043110e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d720);
}



/* Entry: 1043110f8; end: 104311107; -[SCBitmojiEditAvatarBuilderContext fashionDropId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043110f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d728));
  return;
}



/* Entry: 104311108; end: 104311117; -[SCBitmojiEditAvatarBuilderContext avatarType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104311108(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d730);
}



/* Entry: 104311118; end: 104311127; -[SCBitmojiEditAvatarBuilderContext page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104311118(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d738);
}



/* Entry: 104311128; end: 104311133; -[SCBitmojiEditAvatarBuilderContext initialSectionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311128(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d740))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d740);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104311134; end: 104311143; -[SCBitmojiEditAvatarBuilderContext modalPresentationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104311134(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d748);
}



/* Entry: 104311144; end: 10431114f; -[SCBitmojiEditAvatarBuilderContext bitmojiAvatarBuilderReferrer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311144(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d750))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d750);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104311150; end: 10431115b; -[SCBitmojiEditAvatarBuilderContext granularSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311150(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d758))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d758);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431115c; end: 104311167; -[SCBitmojiEditAvatarBuilderContext avatarStateHistoryJson] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431115c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d760))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d760);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104311168; end: 1043111bf;  */

void FUN_104311168(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043111c0; end: 10431147f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043111c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d708) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306d710) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306d718) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306d720) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306d728) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306d730) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306d738) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d740);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306d748) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d750);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d758);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d760);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104311480; end: 1043115bf; -[SCBitmojiEditAvatarBuilderContext initWithFlowMode:initialAvatarBuilderCategory:outfitTryOnInfo:exitDialogType:fashionDropId:avatarType:page:initialSectionId:modalPresentationStyle:bitmojiAvatarBuilderReferrer:granularSource:avatarStateHistoryJson:] */

void FUN_104311480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12,long param_13,
                  long param_14)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_10 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_2;
    uStack_98 = param_10;
  }
  if (param_12 == 0) {
    uStack_a8 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_12;
    uVar1 = param_2;
  }
  if (param_13 == 0) {
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar3 = param_2;
  }
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = param_14;
  _objc_retain();
  if (lVar2 == 0) {
    param_14 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
  }
  func_0x000104311320(param_3,param_4,param_5,param_6,param_7,param_8,param_9,uStack_98,uStack_a0,
                      param_11,uStack_a8,uVar1,param_13,uVar3,param_14,param_2);
  return;
}



/* Entry: 1043115c0; end: 10431162f;  */

undefined8 FUN_1043115c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104311eb0(param_1);
  func_0x000102575ff0(param_1);
  return uVar1;
}



/* Entry: 104311630; end: 104311633; -[SCBitmojiEditAvatarBuilderContext copyWithZone:] */

void FUN_104311630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104311634; end: 104311667; -[SCBitmojiEditAvatarBuilderContext description] */

void FUN_104311634(void)

{
  undefined1 auStack_b0 [160];
  
  FUN_104312070(auStack_b0);
  func_0x000102575ff0(auStack_b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104311668; end: 1043116af; -[SCBitmojiEditAvatarBuilderContext init] */

void FUN_104311668(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCBitmojiEditAvatarBuilderScope/SCBitmojiEditAvatarBuilderContextWrapper.swift",0x4e,2
             ,0x61,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043116b0);
  (*pcVar1)();
}



/* Entry: 1043116b0; end: 1043116cb; +[SCBitmojiEditAvatarBuilderContextBuilder bitmojiEditAvatarBuilderContext] */

void FUN_1043116b0(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043116cc; end: 10431170b; +[SCBitmojiEditAvatarBuilderContextBuilder bitmojiEditAvatarBuilderContextWithExistingBitmojiEditAvatarBuilderContext:] */

void FUN_1043116cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104312244(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10431170c; end: 104311723; -[SCBitmojiEditAvatarBuilderContextBuilder withFlowMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431170c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306d768);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104311724; end: 10431173b; -[SCBitmojiEditAvatarBuilderContextBuilder withInitialAvatarBuilderCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306d770);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10431173c; end: 10431179b; -[SCBitmojiEditAvatarBuilderContextBuilder withOutfitTryOnInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10431173c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306d778);
  *(undefined8 *)(param_1 + _DAT_11306d778) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10431179c; end: 1043117b3; -[SCBitmojiEditAvatarBuilderContextBuilder withExitDialogType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431179c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306d780);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043117b4; end: 104311813; -[SCBitmojiEditAvatarBuilderContextBuilder withFashionDropId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043117b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306d788);
  *(undefined8 *)(param_1 + _DAT_11306d788) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104311814; end: 10431182b; -[SCBitmojiEditAvatarBuilderContextBuilder withAvatarType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306d790);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10431182c; end: 104311843; -[SCBitmojiEditAvatarBuilderContextBuilder withPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431182c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306d798);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104311844; end: 10431184f; -[SCBitmojiEditAvatarBuilderContextBuilder withInitialSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311844(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306d7a0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104311850; end: 104311867; -[SCBitmojiEditAvatarBuilderContextBuilder withModalPresentationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306d7a8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104311868; end: 104311873; -[SCBitmojiEditAvatarBuilderContextBuilder withBitmojiAvatarBuilderReferrer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311868(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306d7b0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104311874; end: 10431187f; -[SCBitmojiEditAvatarBuilderContextBuilder withGranularSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311874(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306d7b8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104311880; end: 10431188b; -[SCBitmojiEditAvatarBuilderContextBuilder withAvatarStateHistoryJson:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311880(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306d7c0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10431188c; end: 1043118ef;  */

void FUN_10431188c(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043118f0; end: 104311bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043118f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d768);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_78 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_78 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d770);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_80 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_80 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d780);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_88 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_88 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d790);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_90 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_90 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d798);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_98 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_98 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d7a8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_a0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_a0 = *puVar1;
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11306d778);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11306d788);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306d7a0);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_11306d7a0))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306d7b0);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_11306d7b0))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306d7b8);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_11306d7b8))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306d7c0);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_11306d7c0))[1];
  FUN_104312490();
  lVar11 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar11 + _DAT_11306d708) = uStack_78;
  *(undefined8 *)(lVar11 + _DAT_11306d710) = uStack_80;
  *(undefined8 *)(lVar11 + _DAT_11306d718) = uVar13;
  *(undefined8 *)(lVar11 + _DAT_11306d720) = uStack_88;
  *(undefined8 *)(lVar11 + _DAT_11306d728) = uVar12;
  *(undefined8 *)(lVar11 + _DAT_11306d730) = uStack_90;
  *(undefined8 *)(lVar11 + _DAT_11306d738) = uStack_98;
  puVar1 = (undefined8 *)(lVar11 + _DAT_11306d740);
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar11 + _DAT_11306d748) = uStack_a0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_11306d750);
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar11 + _DAT_11306d758);
  *puVar1 = uVar4;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar11 + _DAT_11306d760);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  puVar10 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = param_1;
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _objc_msgSendSuper2(&lStack_70,puVar10);
  return;
}



/* Entry: 104311bb8; end: 104311bfb; -[SCBitmojiEditAvatarBuilderContextBuilder build] */

void FUN_104311bb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043118f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104311bfc; end: 104311c3f; -[SCBitmojiEditAvatarBuilderContextBuilder safeBuildAndReturnError:] */

void FUN_104311bfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043118f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104311c40; end: 104311d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311c40(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d768);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d770);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11306d778) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11306d788) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d790);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d7a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d7b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d7c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104311d48; end: 104311d67; -[SCBitmojiEditAvatarBuilderContextBuilder init] */

void FUN_104311d48(void)

{
  FUN_104311c40();
  return;
}



/* Entry: 104311d68; end: 104311d6b;  */

void FUN_104311d68(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104311d6c; end: 104311df3; -[SCBitmojiEditAvatarBuilderContextBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311d6c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d778));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d788));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d7a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d7b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d7b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306d7c0 + 8))
  ;
  return;
}



/* Entry: 104311df4; end: 104311e27;  */

void FUN_104311df4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104311e28; end: 104311eaf; -[SCBitmojiEditAvatarBuilderContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311e28(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d718));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d728));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d740 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d750 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d758 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306d760 + 8))
  ;
  return;
}



/* Entry: 104311eb0; end: 10431206f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104311eb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306d708) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306d710) = uVar2;
  if (*(char *)(param_1 + 6) == -1) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_48 = param_1[4];
    uStack_40 = param_1[5];
    uStack_58 = param_1[2];
    uStack_50 = param_1[3];
    cStack_38 = *(char *)(param_1 + 6);
    func_0x000104310120();
    puVar1 = &uStack_58;
    FUN_104312988();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306d718) = puVar1;
  uStack_60 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306d720) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306d728) = uStack_60;
  uVar2 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11306d730) = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11306d738) = uVar2;
  uVar2 = param_1[0xb];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d740);
  puVar1[1] = param_1[0xc];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11306d748) = param_1[0xd];
  uStack_68 = param_1[0xc];
  uStack_70 = param_1[0xb];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uVar2 = param_1[0xe];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d750);
  puVar1[1] = param_1[0xf];
  *puVar1 = uVar2;
  uVar2 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d758);
  puVar1[1] = param_1[0x11];
  *puVar1 = uVar2;
  uVar2 = param_1[0x12];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306d760);
  puVar1[1] = param_1[0x13];
  *puVar1 = uVar2;
  FUN_1043124d0(&uStack_60,auStack_b0,0x112dc3de0,&UNK_10d9813c0);
  FUN_1043124d0(&uStack_70,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043124d0(&uStack_80,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043124d0(&uStack_90,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043124d0(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104312070; end: 104312243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312070(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  
  uVar14 = *(undefined8 *)(param_2 + _DAT_11306d708);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11306d710);
  lVar7 = *(long *)(param_2 + _DAT_11306d718);
  if (lVar7 == 0) {
    uVar13 = 0;
    lVar12 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar18 = 0xff;
  }
  else {
    if (*(char *)(lVar7 + _DAT_11306d818) == '\x01') {
      lVar12 = ((undefined8 *)(lVar7 + _DAT_11306d820))[1];
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104312240);
        (*pcVar5)();
      }
      uVar17 = *(undefined8 *)(lVar7 + _DAT_11306d820);
      uVar13 = *(undefined8 *)(lVar7 + _DAT_11306d830);
      uVar15 = ((undefined8 *)(lVar7 + _DAT_11306d830))[1];
      _swift_bridgeObjectRetain(uVar15);
      uVar18 = 1;
    }
    else {
      lVar12 = ((undefined8 *)(lVar7 + _DAT_11306d828))[1];
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104312244);
        (*pcVar5)();
      }
      uVar13 = 0;
      uVar15 = 0;
      uVar18 = 0;
      uVar17 = *(undefined8 *)(lVar7 + _DAT_11306d828);
    }
    _swift_bridgeObjectRetain(lVar12);
  }
  uVar8 = *(undefined8 *)(param_2 + _DAT_11306d720);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306d728);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11306d730);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306d738);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306d740);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306d748);
  puVar2 = (undefined8 *)(param_2 + _DAT_11306d750);
  puVar3 = (undefined8 *)(param_2 + _DAT_11306d758);
  puVar4 = (undefined8 *)(param_2 + _DAT_11306d760);
  *param_1 = uVar14;
  param_1[1] = uVar16;
  param_1[2] = uVar17;
  param_1[3] = lVar12;
  param_1[4] = uVar13;
  param_1[5] = uVar15;
  *(undefined1 *)(param_1 + 6) = uVar18;
  param_1[7] = uVar8;
  param_1[8] = uVar6;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  uVar14 = puVar1[1];
  uVar16 = *puVar1;
  param_1[0xc] = puVar1[1];
  param_1[0xb] = uVar16;
  param_1[0xd] = uVar11;
  uVar16 = puVar2[1];
  uVar15 = *puVar2;
  uVar13 = puVar3[1];
  uVar6 = puVar3[1];
  uVar17 = *puVar3;
  param_1[0xf] = puVar2[1];
  param_1[0xe] = uVar15;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar17;
  uVar15 = puVar4[1];
  uVar17 = *puVar4;
  param_1[0x13] = puVar4[1];
  param_1[0x12] = uVar17;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar15);
  return;
}



/* Entry: 104312244; end: 10431248f;  */

/* WARNING: Possible PIC construction at 0x000104312278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010431227c) */

void FUN_104312244(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043124b0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043124b0();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104312490; end: 1043124cf;  */

void FUN_104312490(void)

{
  _objc_opt_self(&PTR_PTR_1129997e0);
  return;
}



/* Entry: 1043124d0; end: 104312517;  */

undefined8 FUN_1043124d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104312518; end: 10431251b;  */

void FUN_104312518(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431251c; end: 1043125c7;  */

void FUN_10431251c(void)

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



/* Entry: 1043125c8; end: 104312607;  */

void FUN_1043125c8(undefined1 *param_1,long *param_2)

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



/* Entry: 104312608; end: 10431263b; -[SCBitmojiOutfitTryOnInfo description] */

void FUN_104312608(void)

{
  undefined1 auStack_38 [40];
  
  func_0x000104312ab4(auStack_38);
  FUN_10431049c(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431263c; end: 104312683; -[SCBitmojiOutfitTryOnInfo init] */

void FUN_10431263c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCBitmojiEditAvatarBuilderScope/SCBitmojiOutfitTryOnInfoWrapper.swift",0x45,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104312684);
  (*pcVar1)();
}



/* Entry: 104312684; end: 104312687; -[SCBitmojiOutfitTryOnInfo copyWithZone:] */

void FUN_104312684(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104312688; end: 104312723; +[SCBitmojiOutfitTryOnInfo friendAvatarWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11306d818) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306d828);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306d820);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306d830);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104312724; end: 1043127eb; +[SCBitmojiOutfitTryOnInfo encodedOutfitWithOutfit:trackingId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312724(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11306d818) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306d828);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306d820);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(lVar3 + _DAT_11306d830);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  lStack_50 = lVar3;
  lStack_48 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043127ec; end: 1043128ff; -[SCBitmojiOutfitTryOnInfo matchFriendAvatar:encodedOutfit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043127ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + _DAT_11306d818) == '\x01') {
    lVar3 = ((long *)(param_1 + _DAT_11306d820))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043128fc);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + _DAT_11306d820);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11306d830);
    lVar1 = ((undefined8 *)(param_1 + _DAT_11306d830))[1];
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar3);
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar1);
    }
    (**(code **)(param_4 + 0x10))(param_4,lVar5,uVar4);
    _objc_release(param_1);
    param_1 = lVar5;
  }
  else {
    lVar3 = ((undefined8 *)(param_1 + _DAT_11306d828))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104312900);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_11306d828);
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar3);
    (**(code **)(param_3 + 0x10))(param_3,uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104312900; end: 104312933;  */

void FUN_104312900(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104312934; end: 104312987; -[SCBitmojiOutfitTryOnInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312934(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d828 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d820 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306d830 + 8))
  ;
  return;
}



/* Entry: 104312988; end: 104312b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312988(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  if (*(char *)(param_1 + 4) == '\x01') {
    uVar3 = param_1[2];
    uVar5 = param_1[3];
    puVar8 = param_1;
    FUN_104312b6c();
    puVar7 = puVar8;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar7 + _DAT_11306d818) = 1;
    puVar1 = (undefined8 *)((long)puVar7 + _DAT_11306d828);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar7 + _DAT_11306d820);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)puVar7 + _DAT_11306d830);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
    puVar6 = PTR_s_init_1125d9248;
    puStack_50 = puVar7;
    puStack_48 = puVar8;
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _objc_msgSendSuper2(&puStack_50,puVar6);
    FUN_10431049c(param_1);
  }
  else {
    FUN_104312b6c();
    puVar8 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar8 + _DAT_11306d818) = 0;
    puVar1 = (undefined8 *)((long)puVar8 + _DAT_11306d828);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)puVar8 + _DAT_11306d820);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar8 + _DAT_11306d830);
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_60 = puVar8;
    puStack_58 = param_1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 104312b6c; end: 104312b8b;  */

void FUN_104312b6c(void)

{
  _objc_opt_self(&PTR_PTR_112999a10);
  return;
}



/* Entry: 104312b8c; end: 104312cf3;  */

int FUN_104312b8c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104312c08;
        goto LAB_104312bec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104312bec:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104312c08:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104312cf4; end: 104312d33;  */

void FUN_104312cf4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306d860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce96b0;
  _swift_getWitnessTable(&UNK_10dce96b0,&UNK_110758588);
  puRam000000011306d860 = puVar1;
  return;
}



/* Entry: 104312d34; end: 104312d53; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d34(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d868));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104312d54; end: 104312d63; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope snapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d870));
  return;
}



/* Entry: 104312d64; end: 104312d6f; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope avatarIdUserA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d878);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d878))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312d70; end: 104312d7b; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope avatarIdUserB] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d880))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d880);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312d7c; end: 104312d87; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope petImageUrlUserA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d888))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d888);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312d88; end: 104312d93; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope petImageUrlUserB] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d890))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d890);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312d94; end: 104312d9f; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope sceneId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312d94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d898);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d898))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312da0; end: 104312dab; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope encodedOutfit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312da0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d8a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d8a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312dac; end: 104312db7; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope friendmojiCategoryName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312dac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d8a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d8a8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312db8; end: 104312dc3; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312db8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d8b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d8b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312dc4; end: 104312e1b;  */

void FUN_104312dc4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312e1c; end: 104312e27; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope sourcePageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312e1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d8b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d8b8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312e28; end: 104312e6f;  */

void FUN_104312e28(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104312e70; end: 104312eb7; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312e70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d8c0;
  _swift_beginAccess(param_1 + _DAT_11306d8c0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104312eb8; end: 104312f0f; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104312eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d8c0;
  _swift_beginAccess(param_1 + _DAT_11306d8c0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104312f10; end: 104312f1f; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope fashionContextAttachEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104312f10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306d8c8);
}



/* Entry: 104312f20; end: 104312f4b; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope init] */

void FUN_104312f20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiFriendProfileSharingScope.SCBitmojiFriendProfileSharingScope",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104312f4c);
  (*pcVar1)();
}



/* Entry: 104312f4c; end: 10431306b; -[_TtC34SCBitmojiFriendProfileSharingScope34SCBitmojiFriendProfileSharingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104312f4c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d868));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d870));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d878 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d880 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d888 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d890 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d898 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d8a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d8a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d8b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d8b8 + 8));
  param_1 = param_1 + _DAT_11306d8c0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10431306c; end: 1043130d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431306c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037aea4();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d8d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043130d8; end: 1043130df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043130d8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037aea4();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d8d8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043130e0; end: 10431312b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043130e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d8d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431312c; end: 1043133c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10431312c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                    undefined8 param_21,undefined1 param_22)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a8 [2];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = param_1;
  func_0x000100379ca0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11306d8c0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306d8c0,0);
  *(long *)(lVar5 + _DAT_11306d868) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11306d870) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d878);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d880);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d888);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d890);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d898);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d8a0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d8a8);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d8b0);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d8b8);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  _swift_beginAccess(lVar5 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_21);
  *(undefined1 *)(lVar5 + _DAT_11306d8c8) = param_22;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar5;
  lStack_88 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _swift_bridgeObjectRetain(param_12);
  _swift_bridgeObjectRetain(param_14);
  _swift_bridgeObjectRetain(param_16);
  _swift_bridgeObjectRetain(param_18);
  _swift_bridgeObjectRetain(param_20);
  plVar6 = &lStack_90;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a8[0] = plVar6;
  func_0x00010008a7c8(&uStack_98,aplStack_a8);
  func_0x000100083b20(aplStack_a8);
  _swift_release(uStack_98);
  _swift_unknownObjectRelease(aplStack_a8[0]);
  return plVar6;
}



/* Entry: 1043133c8; end: 10431367b; -[_TtC34SCBitmojiFriendProfileSharingScope42SCBitmojiFriendProfileSharingScopeServices buildWithUiContainer:snapchatter:avatarIdUserA:avatarIdUserB:petImageUrlUserA:petImageUrlUserB:sceneId:encodedOutfit:friendmojiCategoryName:profileSessionId:sourcePageViewName:delegate:fashionContextAttachEnabled:] */

void FUN_1043133c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  long param_10,undefined8 param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_78;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar6 = param_2;
  if (param_6 == 0) {
    uStack_a8 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_6;
    uStack_78 = uVar6;
  }
  if (param_7 == 0) {
    uStack_b8 = 0;
    uStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_7;
    uStack_90 = uVar6;
  }
  if (param_8 == 0) {
    uStack_c0 = 0;
    uStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c0 = param_8;
    uStack_b0 = uVar6;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain();
  lVar1 = param_10;
  _objc_retain();
  _objc_retain();
  lVar2 = param_12;
  _objc_retain();
  _objc_retain();
  _swift_unknownObjectRetain(param_14);
  _objc_retain();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar1 == 0) {
    uStack_d8 = 0;
    uVar9 = 0;
    uVar7 = uVar6;
  }
  else {
    uVar9 = uVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar9;
    _objc_release(lVar1);
    uStack_d8 = param_10;
  }
  uVar3 = param_11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = uVar7;
  _objc_release(param_11);
  if (lVar2 == 0) {
    param_12 = 0;
    uVar10 = 0;
    uVar8 = uVar4;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = uVar4;
    _objc_release(lVar2);
    uVar10 = uVar4;
  }
  uVar4 = param_13;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_13);
  uVar5 = param_3;
  FUN_10431312c(param_3,param_4,param_5,param_2,uStack_a8,uStack_78,uStack_b8,uStack_90,uStack_c0,
                uStack_b0,param_9,uVar6,uStack_d8,uVar9,uVar3,uVar7,param_12,uVar10,uVar4,uVar8,
                param_14,param_15);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_14);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uStack_b0);
  _swift_bridgeObjectRelease(uStack_90);
  _swift_bridgeObjectRelease(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10431367c; end: 1043136a7; -[_TtC34SCBitmojiFriendProfileSharingScope42SCBitmojiFriendProfileSharingScopeServices init] */

void FUN_10431367c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiFriendProfileSharingScope.SCBitmojiFriendProfileSharingScopeServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043136a8);
  (*pcVar1)();
}



/* Entry: 1043136a8; end: 1043136ab;  */

void FUN_1043136a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043136ac; end: 1043136df;  */

void FUN_1043136ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043136e0; end: 104313703; -[_TtC34SCBitmojiFriendProfileSharingScope42SCBitmojiFriendProfileSharingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043136e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d8d8));
  return;
}



/* Entry: 104313704; end: 104313723; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313704(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d930));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104313724; end: 104313733; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d938));
  return;
}



/* Entry: 104313734; end: 10431373f; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313734(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d940);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d940))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313740; end: 10431374b; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313740(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d948);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d948))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431374c; end: 104313793;  */

void FUN_10431374c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313794; end: 1043137a3; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope groupMembersWithBitmojis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104313794(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d950);
}



/* Entry: 1043137a4; end: 1043137f7; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope avatarIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043137a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306d958);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


