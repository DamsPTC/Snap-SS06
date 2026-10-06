/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043137f8; end: 10431383f; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043137f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d960;
  _swift_beginAccess(param_1 + _DAT_11306d960,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104313840; end: 104313897; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d960;
  _swift_beginAccess(param_1 + _DAT_11306d960,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104313898; end: 10431393b; -[_TtC33SCBitmojiGroupProfileSharingScope33SCBitmojiGroupProfileSharingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104313898(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d930));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d938));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d940 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d948 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d958));
  param_1 = param_1 + _DAT_11306d960;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10431393c; end: 1043139a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431393c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037af10();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d970) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043139a4; end: 1043139ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043139a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d970) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043139f0; end: 104313b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043139f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100379db0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11306d960;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306d960,0);
  *(long *)(lVar5 + _DAT_11306d930) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11306d938) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d940);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d948);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar5 + _DAT_11306d950) = param_7;
  *(undefined8 *)(lVar5 + _DAT_11306d958) = param_8;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_9);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 104313b78; end: 104313c9f; -[_TtC33SCBitmojiGroupProfileSharingScope41SCBitmojiGroupProfileSharingScopeServices buildWithUiContainer:image:profileSessionId:sourcePageType:groupMembersWithBitmojis:avatarIds:delegate:] */

void FUN_104313b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  if (param_8 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_8,PTR___sSSN_11034da80);
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_9);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043139f0(param_3,param_4,param_5,param_2,param_6,uVar2,param_7,param_8,param_9);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104313ca0; end: 104313ca3;  */

void FUN_104313ca0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104313ca4; end: 104313cd7;  */

void FUN_104313ca4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104313cd8; end: 104313d0f; -[_TtC33SCBitmojiGroupProfileSharingScope41SCBitmojiGroupProfileSharingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d970));
  return;
}



/* Entry: 104313d10; end: 104313dbb;  */

void FUN_104313d10(void)

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



/* Entry: 104313dbc; end: 104313de3;  */

void FUN_104313dbc(ulong *param_1,ulong *param_2)

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



/* Entry: 104313de4; end: 104313e03; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313de4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d9c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104313e04; end: 104313e0f; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope sourcePageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313e04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d9d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d9d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313e10; end: 104313e1f; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104313e10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d9d8);
}



/* Entry: 104313e20; end: 104313e2b; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313e20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d9e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d9e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313e2c; end: 104313e37; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope recipientUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313e2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d9e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d9e8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313e38; end: 104313e43; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope petImageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313e38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d9f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d9f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313e44; end: 104313e4f; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope avatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313e44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306d9f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306d9f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104313e50; end: 104313ea7;  */

void FUN_104313e50(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104313ea8; end: 104313eb7; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope indexOnBitmojiFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306da00));
  return;
}



/* Entry: 104313eb8; end: 104313ec7; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope outfitSharingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104313eb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306da08);
}



/* Entry: 104313ec8; end: 104313f0f; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313ec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306da10;
  _swift_beginAccess(param_1 + _DAT_11306da10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104313f10; end: 104313f67; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104313f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306da10;
  _swift_beginAccess(param_1 + _DAT_11306da10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104313f68; end: 104313f77; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope lastOutfitChangeTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104313f68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306da18);
}



/* Entry: 104313f78; end: 104313fa3; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope init] */

void FUN_104313f78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiOutfitSharingScope.SCBitmojiOutfitSharingScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104313fa4);
  (*pcVar1)();
}



/* Entry: 104313fa4; end: 104314073; -[_TtC27SCBitmojiOutfitSharingScope27SCBitmojiOutfitSharingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104313fa4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d9c8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d9d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d9e0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d9e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d9f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d9f8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306da00));
  param_1 = param_1 + _DAT_11306da10;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104314074; end: 1043140df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314074(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037af7c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306da28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043140e0; end: 1043140e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043140e0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037af7c();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306da28) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043140e8; end: 104314133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043140e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306da28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104314134; end: 10431434b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104314134(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = param_2;
  func_0x000100379f2c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11306da10;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306da10,0);
  *(long *)(lVar5 + _DAT_11306d9c8) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d9d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_11306d9d8) = param_5;
  *(undefined8 *)(lVar5 + _DAT_11306da08) = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d9e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d9f0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d9f8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(lVar5 + _DAT_11306da00) = param_13;
  *(undefined8 *)(lVar5 + _DAT_11306da18) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d9e8);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_16);
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _swift_bridgeObjectRetain(param_12);
  _objc_retain(param_13);
  _swift_bridgeObjectRetain(param_15);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10431434c; end: 104314533; -[_TtC27SCBitmojiOutfitSharingScope35SCBitmojiOutfitSharingScopeServices buildWithUiContainer:sourcePageViewName:source:outfitSharingMode:profileSessionId:petImageUrl:avatarId:indexOnBitmojiFeed:lastOutfitChangeTimestamp:recipientUsername:delegate:] */

void FUN_10431434c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
                  long param_10,undefined8 param_11,long param_12,undefined8 param_13)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  
  if (param_5 == 0) {
    uStack_a0 = 0;
    uStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_5;
    uStack_80 = param_3;
  }
  if (param_8 == 0) {
    uStack_a8 = 0;
    uStack_98 = 0;
    param_8 = uStack_a8;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_3;
  }
  if (param_9 == 0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_3;
    uStack_b0 = param_9;
  }
  _swift_unknownObjectRetain(param_4);
  lVar2 = param_10;
  _objc_retain();
  _objc_retain();
  lVar3 = param_12;
  _objc_retain();
  _swift_unknownObjectRetain(param_13);
  _objc_retain();
  if (lVar2 == 0) {
    param_10 = 0;
    uVar1 = 0;
    uVar5 = param_3;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = param_3;
    _objc_release(lVar2);
    uVar1 = param_3;
  }
  if (lVar3 == 0) {
    param_12 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  uVar4 = param_4;
  FUN_104314134(param_1,param_4,uStack_a0,uStack_80,param_6,param_7,param_8,uStack_98,uStack_b0,
                uStack_b8,param_10,uVar1,param_11,param_12,uVar5,param_13);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_11);
  _swift_unknownObjectRelease(param_13);
  _objc_release(param_2);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uStack_b8);
  _swift_bridgeObjectRelease(uStack_98);
  _swift_bridgeObjectRelease(uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104314534; end: 10431455f; -[_TtC27SCBitmojiOutfitSharingScope35SCBitmojiOutfitSharingScopeServices init] */

void FUN_104314534(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiOutfitSharingScope.SCBitmojiOutfitSharingScopeServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104314560);
  (*pcVar1)();
}



/* Entry: 104314560; end: 104314563;  */

void FUN_104314560(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104314564; end: 104314597;  */

void FUN_104314564(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104314598; end: 1043145ab; -[_TtC27SCBitmojiOutfitSharingScope35SCBitmojiOutfitSharingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306da28));
  return;
}



/* Entry: 1043145ac; end: 1043145eb;  */

void FUN_1043145ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011306da30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce98d8;
  _swift_getWitnessTable(&UNK_10dce98d8,&UNK_1107587e8);
  puRam000000011306da30 = puVar1;
  return;
}



/* Entry: 1043145ec; end: 10431460f;  */

undefined1  [16] FUN_1043145ec(void)

{
  return ZEXT816(0x1107587e8);
}



/* Entry: 104314610; end: 10431462f; -[_TtC26SCBitmojiSelfiePickerScope26SCBitmojiSelfiePickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314610(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306da88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314630; end: 10431463f; -[_TtC26SCBitmojiSelfiePickerScope26SCBitmojiSelfiePickerScope originatingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104314630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306da90);
}



/* Entry: 104314640; end: 104314687; -[_TtC26SCBitmojiSelfiePickerScope26SCBitmojiSelfiePickerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314640(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306da98;
  _swift_beginAccess(param_1 + _DAT_11306da98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314688; end: 1043146df; -[_TtC26SCBitmojiSelfiePickerScope26SCBitmojiSelfiePickerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314688(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306da98;
  _swift_beginAccess(param_1 + _DAT_11306da98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043146e0; end: 10431470b; -[_TtC26SCBitmojiSelfiePickerScope26SCBitmojiSelfiePickerScope init] */

void FUN_1043146e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiSelfiePickerScope.SCBitmojiSelfiePickerScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431470c);
  (*pcVar1)();
}



/* Entry: 10431470c; end: 104314767; -[_TtC26SCBitmojiSelfiePickerScope26SCBitmojiSelfiePickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10431470c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306da88));
  param_1 = param_1 + _DAT_11306da98;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104314768; end: 1043147d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314768(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002afb3c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306daa8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043147d4; end: 1043147db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043147d4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002afb3c();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306daa8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043147dc; end: 104314827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043147dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306daa8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104314828; end: 104314927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104314828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x0001002a7854();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306da98;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306da98,0);
  *(long *)(lVar4 + _DAT_11306da88) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306da90) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104314928; end: 1043149a7; -[_TtC26SCBitmojiSelfiePickerScope34SCBitmojiSelfiePickerScopeServices buildWithUIContainer:originatingPage:delegate:] */

void FUN_104314928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104314828(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043149a8; end: 1043149d3; -[_TtC26SCBitmojiSelfiePickerScope34SCBitmojiSelfiePickerScopeServices init] */

void FUN_1043149a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiSelfiePickerScope.SCBitmojiSelfiePickerScopeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043149d4);
  (*pcVar1)();
}



/* Entry: 1043149d4; end: 1043149d7;  */

void FUN_1043149d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043149d8; end: 104314a0b;  */

void FUN_1043149d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104314a0c; end: 104314a2f; -[_TtC26SCBitmojiSelfiePickerScope34SCBitmojiSelfiePickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306daa8));
  return;
}



/* Entry: 104314a30; end: 104314a3f; -[_TtC17SCChatCameraScope17SCChatCameraScope replyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306db00));
  return;
}



/* Entry: 104314a40; end: 104314a5f; -[_TtC17SCChatCameraScope17SCChatCameraScope captionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a40(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306db08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314a60; end: 104314a6f; -[_TtC17SCChatCameraScope17SCChatCameraScope quickStickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306db10));
  return;
}



/* Entry: 104314a70; end: 104314a7f; -[_TtC17SCChatCameraScope17SCChatCameraScope quickStickerMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306db18));
  return;
}



/* Entry: 104314a80; end: 104314a8b; -[_TtC17SCChatCameraScope17SCChatCameraScope cameraScopeDismissalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306db20;
  _swift_beginAccess(param_1 + _DAT_11306db20,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314a8c; end: 104314a97; -[_TtC17SCChatCameraScope17SCChatCameraScope setCameraScopeDismissalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306db20;
  _swift_beginAccess(param_1 + _DAT_11306db20,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104314a98; end: 104314aa7; -[_TtC17SCChatCameraScope17SCChatCameraScope cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104314a98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306db28);
}



/* Entry: 104314aa8; end: 104314ab3; -[_TtC17SCChatCameraScope17SCChatCameraScope captureWorkflowResultDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314aa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306db30;
  _swift_beginAccess(param_1 + _DAT_11306db30,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314ab4; end: 104314abf; -[_TtC17SCChatCameraScope17SCChatCameraScope setCaptureWorkflowResultDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306db30;
  _swift_beginAccess(param_1 + _DAT_11306db30,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104314ac0; end: 104314acf; -[_TtC17SCChatCameraScope17SCChatCameraScope lensInjectionConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306db38));
  return;
}



/* Entry: 104314ad0; end: 104314adf; -[_TtC17SCChatCameraScope17SCChatCameraScope musicApplicationData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306db40));
  return;
}



/* Entry: 104314ae0; end: 104314b23; -[_TtC17SCChatCameraScope17SCChatCameraScope overrideCameraLaunchPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104314ae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306db48;
  _swift_beginAccess(param_1 + _DAT_11306db48,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104314b24; end: 104314b73; -[_TtC17SCChatCameraScope17SCChatCameraScope setOverrideCameraLaunchPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306db48;
  _swift_beginAccess(param_1 + _DAT_11306db48,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104314b74; end: 104314b7f; -[_TtC17SCChatCameraScope17SCChatCameraScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314b74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306db50;
  _swift_beginAccess(param_1 + _DAT_11306db50,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314b80; end: 104314bc3;  */

void FUN_104314b80(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104314bc4; end: 104314bcf; -[_TtC17SCChatCameraScope17SCChatCameraScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306db50;
  _swift_beginAccess(param_1 + _DAT_11306db50,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104314bd0; end: 104314c23;  */

void FUN_104314bd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104314c24; end: 104314c4f; -[_TtC17SCChatCameraScope17SCChatCameraScope init] */

void FUN_104314c24(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCChatCameraScope.SCChatCameraScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104314c50);
  (*pcVar1)();
}



/* Entry: 104314c50; end: 104314d43; -[_TtC17SCChatCameraScope17SCChatCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104314c50(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306db00));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306db08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306db10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306db18));
  func_0x000100db5960(param_1 + _DAT_11306db20);
  func_0x000100db5960(param_1 + _DAT_11306db30);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306db38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306db40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_11306db50);
  return;
}



/* Entry: 104314d44; end: 10431515b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104314d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_d8 [2];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = param_1;
  func_0x000100370ac0();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar2 = _DAT_11306db20;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306db20,0);
  lVar3 = _DAT_11306db30;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306db30,0);
  *(undefined8 *)(lVar6 + _DAT_11306db48) = 0xffffffffffffffff;
  lVar4 = _DAT_11306db50;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306db50,0);
  *(undefined8 *)(lVar6 + _DAT_11306db00) = param_2;
  *(undefined8 *)(lVar6 + _DAT_11306db08) = param_5;
  *(undefined8 *)(lVar6 + _DAT_11306db10) = param_6;
  *(undefined8 *)(lVar6 + _DAT_11306db18) = param_7;
  _swift_beginAccess(lVar6 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar2,param_3);
  *(undefined8 *)(lVar6 + _DAT_11306db28) = param_4;
  _swift_beginAccess(lVar6 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_8);
  *(undefined8 *)(lVar6 + _DAT_11306db38) = param_9;
  *(undefined8 *)(lVar6 + _DAT_11306db40) = 0;
  _swift_beginAccess(lVar6 + lVar4,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_1);
  puVar1 = PTR_s_init_1125d9248;
  lStack_c0 = lVar6;
  lStack_b8 = lVar5;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  plVar7 = &lStack_c0;
  _objc_msgSendSuper2(plVar7,puVar1);
  aplStack_d8[0] = plVar7;
  func_0x00010008a7c8(&uStack_c8,aplStack_d8);
  func_0x000100083b20(aplStack_d8);
  _swift_release(uStack_c8);
  _swift_unknownObjectRelease(aplStack_d8[0]);
  return plVar7;
}



/* Entry: 10431515c; end: 104315297; -[_TtC17SCChatCameraScope25SCChatCameraScopeServices buildWithPresentingViewController:replyConfiguration:cameraScopeDismissalDelegate:cameraViewType:captionState:quickStickerImage:quickStickerMetadata:captureWorkflowResultDelegate:lensInjectionConfiguration:] */

void FUN_10431515c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_7);
  uVar1 = param_8;
  _objc_retain();
  uVar2 = param_9;
  _objc_retain();
  _swift_unknownObjectRetain(param_10);
  uVar3 = param_11;
  _objc_retain(param_11);
  _objc_retain(param_1);
  uVar4 = param_3;
  FUN_104314d44(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_10);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104315298; end: 1043153e7; -[_TtC17SCChatCameraScope25SCChatCameraScopeServices buildWithPresentingViewController:replyConfiguration:cameraScopeDismissalDelegate:cameraViewType:captionState:quickStickerImage:quickStickerMetadata:captureWorkflowResultDelegate:lensInjectionConfiguration:musicApplicationData:] */

void FUN_104315298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_7);
  uVar1 = param_8;
  _objc_retain();
  uVar2 = param_9;
  _objc_retain();
  _swift_unknownObjectRetain(param_10);
  uVar3 = param_11;
  _objc_retain();
  uVar4 = param_12;
  _objc_retain();
  _objc_retain(param_1);
  uVar5 = param_3;
  func_0x000104314f48(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_10);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1043153e8; end: 104315413; -[_TtC17SCChatCameraScope25SCChatCameraScopeServices init] */

void FUN_1043153e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCChatCameraScope.SCChatCameraScopeServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104315414);
  (*pcVar1)();
}



/* Entry: 104315414; end: 104315417;  */

void FUN_104315414(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104315418; end: 10431544b;  */

void FUN_104315418(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431544c; end: 10431546f; -[_TtC17SCChatCameraScope25SCChatCameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431544c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306db60));
  return;
}



/* Entry: 104315470; end: 10431547f;  */

undefined1  [16] FUN_104315470(void)

{
  return ZEXT816(0x110758a10);
}



/* Entry: 104315480; end: 10431548b; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope cameraScopeDismissalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dbd0;
  _swift_beginAccess(param_1 + _DAT_11306dbd0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431548c; end: 104315497; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope setCameraScopeDismissalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431548c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dbd0;
  _swift_beginAccess(param_1 + _DAT_11306dbd0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104315498; end: 1043154a7; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104315498(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306dbd8);
}



/* Entry: 1043154a8; end: 1043154b3; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope captureWorkflowResultDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043154a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dbe0;
  _swift_beginAccess(param_1 + _DAT_11306dbe0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043154b4; end: 1043154bf; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope setCaptureWorkflowResultDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043154b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dbe0;
  _swift_beginAccess(param_1 + _DAT_11306dbe0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043154c0; end: 1043154df; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope lensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043154c0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306dbe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043154e0; end: 1043154ef; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043154e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306dbf0);
}



/* Entry: 1043154f0; end: 1043154ff; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope replyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043154f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306dbf8));
  return;
}



/* Entry: 104315500; end: 10431550b; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315500(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dc00;
  _swift_beginAccess(param_1 + _DAT_11306dc00,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431550c; end: 10431554f;  */

void FUN_10431550c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104315550; end: 10431555b; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dc00;
  _swift_beginAccess(param_1 + _DAT_11306dc00,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431555c; end: 1043155af;  */

void FUN_10431555c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043155b0; end: 1043155f7; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope viewControllerLifecycleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043155b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dc08;
  _swift_beginAccess(param_1 + _DAT_11306dc08,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1043155f8; end: 104315603; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope setViewControllerLifecycleObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043155f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dc08;
  _swift_beginAccess(param_1 + _DAT_11306dc08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104315604; end: 10431564b; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope lensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dc10;
  _swift_beginAccess(param_1 + _DAT_11306dc10,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10431564c; end: 104315657; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope setLensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431564c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dc10;
  _swift_beginAccess(param_1 + _DAT_11306dc10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104315658; end: 1043156b7;  */

void FUN_104315658(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1043156b8; end: 10431573f; -[_TtC28SCLegacyLiveLensPreviewScope28SCLegacyLiveLensPreviewScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043156b8(long param_1)

{
  func_0x000100db5984(param_1 + _DAT_11306dbd0);
  func_0x000100db5984(param_1 + _DAT_11306dbe0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306dbe8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306dbf8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11306dc00);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306dc08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306dc10));
  return;
}



/* Entry: 104315740; end: 1043157a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315740(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003718b4();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306dc20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043157a8; end: 1043157f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043157a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306dc20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}


