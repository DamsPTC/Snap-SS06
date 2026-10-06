/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104326c68; end: 104326c77; -[CollectionViewAutoPlayLoggingServices collectionViewAutoPlayEventsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e958));
  return;
}



/* Entry: 104326c78; end: 104326d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326c78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e958) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104326d10; end: 104326d67; -[CollectionViewAutoPlayLoggingServices initWithCollectionViewAutoPlayEventsLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306e958) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104326d68; end: 104326dc7; -[CollectionViewAutoPlayLoggingServices init] */

void FUN_104326d68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CollectionViewAutoPlayLoggingServices.CollectionViewAutoPlayLoggingServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104326d94);
  (*pcVar1)();
}



/* Entry: 104326dc8; end: 104326dd7; -[CollectionViewAutoPlayLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e958));
  return;
}



/* Entry: 104326dd8; end: 104326de7; -[CollectionViewAutoPlayLoggingInfo itemPos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e988));
  return;
}



/* Entry: 104326de8; end: 104326df7; -[CollectionViewAutoPlayLoggingInfo itemType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104326de8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e990);
}



/* Entry: 104326df8; end: 104326e03; -[CollectionViewAutoPlayLoggingInfo itemTypeSpecific] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326df8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e998))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e998);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104326e04; end: 104326e4f; -[CollectionViewAutoPlayLoggingInfo itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326e04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306e9a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306e9a0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104326e50; end: 104326e5b; -[CollectionViewAutoPlayLoggingInfo subItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326e50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e9a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e9a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104326e5c; end: 104326e67; -[CollectionViewAutoPlayLoggingInfo tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e9b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e9b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104326e68; end: 104326e77; -[CollectionViewAutoPlayLoggingInfo pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104326e68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e9b8);
}



/* Entry: 104326e78; end: 104326e83; -[CollectionViewAutoPlayLoggingInfo pageTypeSpecific] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326e78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e9c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e9c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104326e84; end: 104326e8f; -[CollectionViewAutoPlayLoggingInfo sectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326e84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e9c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e9c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104326e90; end: 104326ee7;  */

void FUN_104326e90(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104326ee8; end: 10432724b;  */

undefined8
FUN_104326ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,long param_10,undefined8 param_11,long param_12,undefined8 param_13,
             long param_14)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
  _swift_bridgeObjectRelease(param_6);
  if (param_8 == 0) {
    param_7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
    _swift_bridgeObjectRelease(param_8);
  }
  if (param_10 == 0) {
    param_9 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_9,param_10);
    _swift_bridgeObjectRelease(param_10);
  }
  if (param_12 == 0) {
    param_11 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_11,param_12);
    _swift_bridgeObjectRelease(param_12);
  }
  if (param_14 == 0) {
    param_13 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_13,param_14);
    _swift_bridgeObjectRelease(param_14);
  }
  func_0x00010c020320(unaff_x20);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_11);
  _objc_release(param_13);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10432724c; end: 104327603; -[CollectionViewAutoPlayLoggingInfo initWithItemPos:itemType:itemTypeSpecific:itemId:subItemId:tileId:pageTypeSpecific:sectionIdentifier:] */

void FUN_10432724c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  long param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_5 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_2;
    uStack_78 = param_5;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_7 == 0) {
    param_7 = 0;
    uVar7 = 0;
    uVar4 = param_2;
  }
  else {
    uVar7 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    uVar4 = uVar7;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uVar4;
  }
  _objc_retain(param_3);
  lVar2 = param_9;
  _objc_retain();
  lVar3 = param_10;
  _objc_retain();
  if (lVar2 == 0) {
    param_9 = 0;
    uVar1 = 0;
    uVar6 = uVar4;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = uVar4;
    _objc_release(lVar2);
    uVar1 = uVar4;
  }
  if (lVar3 == 0) {
    param_10 = 0;
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  func_0x0001043270a4(param_3,param_4,uStack_78,uStack_80,param_6,param_2,param_7,uVar7,param_8,
                      uVar5,param_9,uVar1,param_10,uVar6);
  return;
}



/* Entry: 104327604; end: 104327767; -[CollectionViewAutoPlayLoggingInfo initWithItemPos:itemType:itemTypeSpecific:itemId:subItemId:tileId:pageType:pageTypeSpecific:sectionIdentifier:] */

void FUN_104327604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9,
                  long param_10,long param_11)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_5 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_2;
    uStack_78 = param_5;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_7 == 0) {
    uStack_98 = 0;
    uVar7 = 0;
    uVar4 = param_2;
  }
  else {
    uVar7 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uVar7;
    uStack_98 = param_7;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uVar4;
  }
  _objc_retain(param_3);
  lVar2 = param_10;
  _objc_retain();
  lVar3 = param_11;
  _objc_retain();
  if (lVar2 == 0) {
    param_10 = 0;
    uVar1 = 0;
    uVar6 = uVar4;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = uVar4;
    _objc_release(lVar2);
    uVar1 = uVar4;
  }
  if (lVar3 == 0) {
    param_11 = 0;
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  func_0x0001043274d4(param_3,param_4,uStack_78,uStack_80,param_6,param_2,uStack_98,uVar7,param_8,
                      uVar5,param_9,param_10,uVar1,param_11,uVar6);
  return;
}



/* Entry: 104327768; end: 1043277c7; -[CollectionViewAutoPlayLoggingInfo init] */

void FUN_104327768(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CollectionViewAutoPlayLoggingServices.CollectionViewAutoPlayLoggingInfo",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104327794);
  (*pcVar1)();
}



/* Entry: 1043277c8; end: 104327867; -[CollectionViewAutoPlayLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043277c8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e988));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e998 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e9a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e9a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e9b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e9c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306e9c8 + 8))
  ;
  return;
}



/* Entry: 104327868; end: 104327887;  */

void FUN_104327868(void)

{
  _objc_opt_self(&PTR_PTR_11299c488);
  return;
}



/* Entry: 104327888; end: 10432791b; -[SCSpotlightRecommendTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327888(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e9f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ea00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ea08));
  return;
}



/* Entry: 10432791c; end: 104327983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432791c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104327bc4();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306ea18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104327984; end: 1043279cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327984(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ea18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043279d0; end: 104327aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043279d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  FUN_104327b4c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11306e9f8) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11306ea00) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11306ea08) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_3);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_68[0] = plVar4;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  _swift_release(uStack_58);
  _swift_unknownObjectRelease(aplStack_68[0]);
  return plVar4;
}



/* Entry: 104327aac; end: 104327b4b; -[_TtC29SCSpotlightRecommendTrayScope37SCSpotlightRecommendTrayScopeServices buildWithContainer:contextActionparams:userIds:] */

void FUN_104327aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_5,PTR___sSSN_11034da80);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043279d0(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104327b4c; end: 104327b6b;  */

void FUN_104327b4c(void)

{
  _objc_opt_self(&PTR_PTR_11299c588);
  return;
}



/* Entry: 104327b6c; end: 104327b6f;  */

void FUN_104327b6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104327b70; end: 104327ba3;  */

void FUN_104327b70(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104327ba4; end: 104327bc3; -[_TtC29SCSpotlightRecommendTrayScope37SCSpotlightRecommendTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306ea18));
  return;
}



/* Entry: 104327bc4; end: 104327be3;  */

void FUN_104327bc4(void)

{
  _objc_opt_self(&PTR_PTR_11299c658);
  return;
}



/* Entry: 104327be4; end: 104327be7;  */

void FUN_104327be4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104327be8; end: 104327c07; -[SCSpotlightQuickCommentScope operaEventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327be8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306ea80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104327c08; end: 104327c13; -[SCSpotlightQuickCommentScope snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ea88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ea88);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c14; end: 104327c1f; -[SCSpotlightQuickCommentScope snapPosterId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ea90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ea90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c20; end: 104327c2b; -[SCSpotlightQuickCommentScope compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ea98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ea98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c2c; end: 104327c37; -[SCSpotlightQuickCommentScope currentUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306eaa0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306eaa0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c38; end: 104327c43; -[SCSpotlightQuickCommentScope currentUserDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306eaa8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306eaa8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c44; end: 104327c4f; -[SCSpotlightQuickCommentScope currentUserBitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306eab0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306eab0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c50; end: 104327c5b; -[SCSpotlightQuickCommentScope currentUserBitmojiSelfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327c50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306eab8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306eab8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104327c5c; end: 104327cb3;  */

void FUN_104327c5c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104327cb4; end: 104327cc3; -[SCSpotlightQuickCommentScope repliesLoggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306eac0));
  return;
}



/* Entry: 104327cc4; end: 104327df3; -[SCSpotlightQuickCommentScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327cc4(long param_1)

{
  func_0x000100db5c28(param_1 + _DAT_11306ea70);
  func_0x000100db5c28(param_1 + _DAT_11306ea78);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ea80));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ea88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ea90 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ea98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eaa0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eaa8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eab0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eab8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306eac0));
  return;
}



/* Entry: 104327df4; end: 104327e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327df4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104328430();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306ead0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104327e5c; end: 104327ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104327e5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ead0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104327ea8; end: 10432810f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104327ea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_c0 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = param_1;
  FUN_1043283b8();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar3 = _DAT_11306ea70;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306ea70,0);
  lVar4 = _DAT_11306ea78;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306ea78,0);
  _swift_beginAccess(lVar6 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_1);
  _swift_beginAccess(lVar6 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_2);
  *(undefined8 *)(lVar6 + _DAT_11306ea80) = param_3;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306ea88);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306ea90);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306ea98);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306eaa0);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306eaa8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306eab0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306eab8);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(lVar6 + _DAT_11306eac0) = param_18;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a8 = lVar6;
  lStack_a0 = lVar5;
  _swift_unknownObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_11);
  _swift_bridgeObjectRetain(param_13);
  _swift_bridgeObjectRetain(param_15);
  _swift_bridgeObjectRetain(param_17);
  _objc_retain(param_18);
  plVar7 = &lStack_a8;
  _objc_msgSendSuper2(plVar7,puVar2);
  aplStack_c0[0] = plVar7;
  func_0x00010008a7c8(&uStack_b0,aplStack_c0);
  func_0x000100083b20(aplStack_c0);
  _swift_release(uStack_b0);
  _swift_unknownObjectRelease(aplStack_c0[0]);
  return plVar7;
}



/* Entry: 104328110; end: 1043283b7; -[_TtC28SCSpotlightQuickCommentScope36SCSpotlightQuickCommentScopeServices buildWithViewDelegate:scopeLifecycleDelegate:operaEventAnnouncer:snapId:snapPosterId:compositeStoryId:currentUserId:currentUserDisplayName:currentUserBitmojiAvatarId:currentUserBitmojiSelfieId:repliesLoggingInfo:] */

void FUN_104328110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11,long param_12,undefined8 param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  if (param_6 == 0) {
    uStack_90 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_6;
    uStack_78 = param_2;
  }
  if (param_7 == 0) {
    uStack_a0 = 0;
    uStack_88 = 0;
    param_7 = uStack_a0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_2;
  }
  if (param_8 == 0) {
    uStack_a8 = 0;
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_8;
    uStack_98 = param_2;
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  lVar1 = param_9;
  _objc_retain();
  lVar2 = param_10;
  _objc_retain();
  lVar3 = param_11;
  _objc_retain();
  lVar4 = param_12;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    uStack_d0 = 0;
    uStack_c0 = 0;
    uVar5 = param_2;
    param_2 = uStack_c0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = param_2;
    _objc_release(lVar1);
    uStack_d0 = param_9;
  }
  if (lVar2 == 0) {
    param_10 = 0;
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = uVar5;
    _objc_release(lVar2);
    uVar7 = uVar5;
    uVar5 = uVar6;
  }
  if (lVar3 == 0) {
    param_11 = 0;
    uVar6 = 0;
    uVar8 = uVar5;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = uVar5;
    _objc_release(lVar3);
    uVar6 = uVar5;
  }
  if (lVar4 == 0) {
    param_12 = 0;
    uVar8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  uVar5 = param_3;
  FUN_104327ea8(param_3,param_4,param_5,uStack_90,uStack_78,param_7,uStack_88,uStack_a8,uStack_98,
                uStack_d0,param_2,param_10,uVar7,param_11,uVar6,param_12,uVar8,param_13);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_13);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uStack_98);
  _swift_bridgeObjectRelease(uStack_88);
  _swift_bridgeObjectRelease(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1043283b8; end: 1043283d7;  */

void FUN_1043283b8(void)

{
  _objc_opt_self(&PTR_PTR_11299c718);
  return;
}



/* Entry: 1043283d8; end: 1043283db;  */

void FUN_1043283d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043283dc; end: 10432840f;  */

void FUN_1043283dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104328410; end: 10432842f; -[_TtC28SCSpotlightQuickCommentScope36SCSpotlightQuickCommentScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104328410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306ead0));
  return;
}



/* Entry: 104328430; end: 10432844f;  */

void FUN_104328430(void)

{
  _objc_opt_self(&PTR_PTR_11299c828);
  return;
}



/* Entry: 104328450; end: 104328453;  */

void FUN_104328450(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104328454; end: 104328ecf;  */

int FUN_104328454(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_1043284d0;
        goto LAB_1043284b0;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043284b0:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_1043284d0:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104328ed0; end: 104328efb; +[SCSpotlightRepliesNotifications openedReplies] */

void FUN_104328ed0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f5f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104328efc; end: 104328f27; +[SCSpotlightRepliesNotifications repliesStoryId] */

void FUN_104328efc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f5f70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104328f28; end: 104328f63; -[SCSpotlightRepliesNotifications init] */

void FUN_104328f28(undefined8 param_1)

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



/* Entry: 104328f64; end: 104328f97;  */

void FUN_104328f64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104328f98; end: 104328f9b; -[SCSpotlightRepliesNotifications .cxx_destruct] */

void FUN_104328f98(void)

{
  return;
}



/* Entry: 104328f9c; end: 104328fbb;  */

void FUN_104328f9c(void)

{
  _objc_opt_self(&PTR_PTR_11299c8e8);
  return;
}



/* Entry: 104328fbc; end: 104328fdb; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104328fbc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306eb60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104328fdc; end: 104329023; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104328fdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306eb68;
  _swift_beginAccess(param_1 + _DAT_11306eb68,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104329024; end: 10432907b; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329024(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306eb68;
  _swift_beginAccess(param_1 + _DAT_11306eb68,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432907c; end: 10432908b; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope isCreatorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432907c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306eb70);
}



/* Entry: 10432908c; end: 104329097; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope creatorID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432908c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306eb78);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306eb78))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104329098; end: 1043290a3; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope snapID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329098(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306eb80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306eb80))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043290a4; end: 1043290ff; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043290a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306eb88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306eb88);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104329100; end: 10432910b; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope snapCreatorProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306eb90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306eb90))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432910c; end: 104329153;  */

void FUN_10432910c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104329154; end: 104329163; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope repliesActionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306eb98));
  return;
}



/* Entry: 104329164; end: 104329173; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope repliesLoggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306eba0));
  return;
}



/* Entry: 104329174; end: 104329183; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope communityMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306eba8));
  return;
}



/* Entry: 104329184; end: 1043291fb; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope mediaPlaybackSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329184(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306ebb0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043291fc; end: 104329273; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope setMediaPlaybackSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043291fc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306ebb0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104329274; end: 10432941b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104329274(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_11306eb68;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eb68,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ebb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306eb60) = param_1;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined1 *)(unaff_x20 + _DAT_11306eb70) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb78);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb80);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb88);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb90);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306eb98) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306eba0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306eba8) = param_14;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar4;
}



/* Entry: 10432941c; end: 104329477;  */

undefined8 FUN_10432941c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104329750();
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return uVar1;
}



/* Entry: 104329478; end: 104329597; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope initWithUIContainer:delegate:isCreatorMode:creatorID:snapID:compositeStoryId:snapCreatorProfileId:repliesActionConfig:repliesLoggingInfo:communityMetadata:] */

undefined8
FUN_104329478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    uVar4 = 0;
    uVar3 = uVar2;
  }
  else {
    uVar4 = uVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
    uVar3 = uVar4;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_12);
  uVar1 = param_3;
  FUN_104329750(param_3,param_4,param_5,param_6,param_2,param_7,uVar2,param_8,uVar4,param_9,uVar3,
                param_10,param_11,param_12);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  return uVar1;
}



/* Entry: 104329598; end: 1043295f7; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope init] */

void FUN_104329598(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpotlightRepliesScope.SCSpotlightRepliesScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043295c4);
  (*pcVar1)();
}



/* Entry: 1043295f8; end: 1043296c3; -[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043295f8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eb60));
  FUN_1043298d8(param_1 + _DAT_11306eb68);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eb78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eb80 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eb88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eb90 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306eb98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306eba0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306eba8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ebb0 + 8))
  ;
  return;
}



/* Entry: 1043296c4; end: 104329703; +[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope defaultTrayHeightPercentage] */

undefined8 FUN_1043296c4(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11306eb58,auStack_38,0,0);
  return uRam000000011306eb58;
}



/* Entry: 104329704; end: 10432974f; +[_TtC23SCSpotlightRepliesScope23SCSpotlightRepliesScope setDefaultTrayHeightPercentage:] */

void FUN_104329704(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x11306eb58,auStack_48,1,0);
  uRam000000011306eb58 = param_1;
  return;
}



/* Entry: 104329750; end: 1043298d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104329750(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_11306eb68;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eb68,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ebb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306eb60) = param_1;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined1 *)(unaff_x20 + _DAT_11306eb70) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb78);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb80);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb88);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eb90);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306eb98) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306eba0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306eba8) = param_14;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 1043298d8; end: 1043298fb;  */

undefined8 FUN_1043298d8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043298fc; end: 10432991b;  */

void FUN_1043298fc(void)

{
  _objc_opt_self(&PTR_PTR_11299c998);
  return;
}



/* Entry: 10432991c; end: 10432a013;  */

long FUN_10432991c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10432a014; end: 10432a023; -[SCCommentsSnapReplyActionsConfig enablePostingExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a014(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ebe0);
}



/* Entry: 10432a024; end: 10432a033; -[SCCommentsSnapReplyActionsConfig enableViewingExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a024(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ebe8);
}



/* Entry: 10432a034; end: 10432a097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a034(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306ebe0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306ebe8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432a098; end: 10432a0fb; -[SCCommentsSnapReplyActionsConfig initWithEnablePostingExperience:enableViewingExperience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a098(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306ebe0) = param_3;
  *(undefined1 *)(param_1 + _DAT_11306ebe8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432a0fc; end: 10432a15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a0fc(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11306ebe0) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_11306ebe8) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432a15c; end: 10432a15f; -[SCCommentsSnapReplyActionsConfig copyWithZone:] */

void FUN_10432a15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10432a160; end: 10432a22f; -[SCCommentsSnapReplyActionsConfig encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f5fd0);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f5ff0);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432a230; end: 10432a2f7;  */

undefined8 FUN_10432a230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f5fd0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f5ff0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  func_0x00010c00f880(unaff_x20);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10432a2f8; end: 10432a3bf; -[SCCommentsSnapReplyActionsConfig initWithCoder:] */

undefined8 FUN_10432a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f5fd0);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f5ff0);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  func_0x00010c00f880(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10432a3c0; end: 10432a3db; -[SCCommentsSnapReplyActionsConfig description] */

void FUN_10432a3c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432a3dc; end: 10432a457; -[SCCommentsSnapReplyActionsConfig init] */

void FUN_10432a3dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightRepliesScope/SCCommentsSnapReplyActionsConfigWrapper.swift",0x45,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10432a424);
  (*pcVar1)();
}



/* Entry: 10432a458; end: 10432a45b; -[SCCommentsSnapReplyActionsConfig .cxx_destruct] */

void FUN_10432a458(void)

{
  return;
}



/* Entry: 10432a45c; end: 10432a47b;  */

void FUN_10432a45c(void)

{
  _objc_opt_self(&PTR_PTR_11299caa8);
  return;
}



/* Entry: 10432a47c; end: 10432a48b; -[SCSpotlightRepliesActionsConfig defaultToPendingTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a47c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec18);
}



/* Entry: 10432a48c; end: 10432a49b; -[SCSpotlightRepliesActionsConfig shouldAutoPopUpKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a48c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec20);
}


