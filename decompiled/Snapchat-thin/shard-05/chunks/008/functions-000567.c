/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10427d50c; end: 10427d51f; -[SCAdChatFeedBannerTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a4d8 + 8))
  ;
  return;
}



/* Entry: 10427d520; end: 10427d53f;  */

void FUN_10427d520(void)

{
  _objc_opt_self(&PTR_PTR_112992450);
  return;
}



/* Entry: 10427d540; end: 10427d543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d540(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a4c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a4d0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a4d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427d544; end: 10427d553; -[SCAdChatFeedCellTrackInfo feedCellTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427d544(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a508);
}



/* Entry: 10427d554; end: 10427d563; -[SCAdChatFeedCellTrackInfo tapDestination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427d554(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a510);
}



/* Entry: 10427d564; end: 10427d573; -[SCAdChatFeedCellTrackInfo expectedFeedPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427d564(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a518);
}



/* Entry: 10427d574; end: 10427d583; -[SCAdChatFeedCellTrackInfo actualFeedPostion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427d574(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a520);
}



/* Entry: 10427d584; end: 10427d593; -[SCAdChatFeedCellTrackInfo maxVisibilityPercentage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a528));
  return;
}



/* Entry: 10427d594; end: 10427d5a3; -[SCAdChatFeedCellTrackInfo appearedAboveFold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427d594(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a530);
}



/* Entry: 10427d5a4; end: 10427d5b3; -[SCAdChatFeedCellTrackInfo isAISponsoredSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427d5a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a538);
}



/* Entry: 10427d5b4; end: 10427d5c3; -[SCAdChatFeedCellTrackInfo isFirstChatConversationOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d5b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a540));
  return;
}



/* Entry: 10427d5c4; end: 10427d61f; -[SCAdChatFeedCellTrackInfo conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d5c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a548))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a548);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10427d620; end: 10427d807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d620(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a508) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a510) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a518) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a520) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a528) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11306a530) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11306a538) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a540) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a548);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427d808; end: 10427d8c3; -[SCAdChatFeedCellTrackInfo initWithFeedCellTapped:tapDestination:expectedFeedPosition:actualFeedPostion:maxVisibilityPercentage:appearedAboveFold:isAISponsoredSnap:isFirstChatConversationOpen:conversationId:] */

void FUN_10427d808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  if (param_12 == 0) {
    param_12 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_7);
  _objc_retain(param_11);
  func_0x00010427d714(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,param_12,
                      param_2);
  return;
}



/* Entry: 10427d8c4; end: 10427d8f3;  */

void FUN_10427d8c4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10427d8f4(param_1);
  return;
}



/* Entry: 10427d8f4; end: 10427da23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d8f4(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11306a508) = *param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_11306a510) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + _DAT_11306a518) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a520) = *(undefined8 *)(param_1 + 0x18);
  if (param_1[0x28] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a528) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a530) = param_1[0x29];
  *(undefined1 *)(unaff_x20 + _DAT_11306a538) = param_1[0x2a];
  if (param_1[0x2b] == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a540) = puVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a548);
  puVar1[1] = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = uVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427da24; end: 10427da57; -[SCAdChatFeedCellTrackInfo hash] */

undefined8 FUN_10427da24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10427da58();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10427da58; end: 10427dbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427da58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a508));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a510));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a518));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a520));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a528);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a530));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a538));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a540);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306a548))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a548);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10427dbe0; end: 10427de9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10427dbe0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long unaff_x20;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar22 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar11 = &lStack_88;
    _swift_dynamicCast(plVar11,auStack_80,PTR___sypN_11034f1a8 + 8,lVar22,6);
    if (((ulong)plVar11 & 1) != 0) {
      bVar5 = *(byte *)(unaff_x20 + _DAT_11306a508);
      bVar6 = *(byte *)(lStack_88 + _DAT_11306a508);
      iVar3 = *(int *)(unaff_x20 + _DAT_11306a510);
      iVar4 = *(int *)(lStack_88 + _DAT_11306a510);
      lVar16 = *(long *)(unaff_x20 + _DAT_11306a518);
      lVar14 = *(long *)(lStack_88 + _DAT_11306a518);
      lVar17 = *(long *)(unaff_x20 + _DAT_11306a520);
      lVar15 = *(long *)(lStack_88 + _DAT_11306a520);
      lVar19 = *(long *)(unaff_x20 + _DAT_11306a528);
      lVar22 = *(long *)(lStack_88 + _DAT_11306a528);
      uVar20 = (uint)(lVar19 == 0 && lVar22 == 0);
      if (lVar19 != 0 && lVar22 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar22);
        _objc_retain();
        lVar12 = lVar19;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar20 = (uint)lVar12;
        _objc_release(lVar19);
        _objc_release(lVar22);
      }
      bVar7 = *(byte *)(unaff_x20 + _DAT_11306a530);
      bVar8 = *(byte *)(lStack_88 + _DAT_11306a530);
      bVar9 = *(byte *)(unaff_x20 + _DAT_11306a538);
      bVar10 = *(byte *)(lStack_88 + _DAT_11306a538);
      lVar19 = *(long *)(unaff_x20 + _DAT_11306a540);
      lVar22 = *(long *)(lStack_88 + _DAT_11306a540);
      uVar18 = (uint)(lVar19 == 0 && lVar22 == 0);
      if ((lVar19 != 0) && (lVar22 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar22);
        _objc_retain(lVar19);
        lVar12 = lVar19;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar18 = (uint)lVar12;
        _objc_release(lVar19);
        _objc_release(lVar22);
      }
      lVar22 = ((long *)(unaff_x20 + _DAT_11306a548))[1];
      lVar19 = ((long *)(lStack_88 + _DAT_11306a548))[1];
      if (lVar22 == 0) {
        _swift_bridgeObjectRetain(lVar19);
        _objc_release(lStack_88);
        if (lVar19 == 0) {
LAB_10427de2c:
          uVar21 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar19);
          uVar21 = 0;
        }
      }
      else {
        uVar21 = 0;
        if (lVar19 != 0) {
          lVar12 = *(long *)(unaff_x20 + _DAT_11306a548);
          if ((lVar12 == *(long *)(lStack_88 + _DAT_11306a548)) && (lVar22 == lVar19)) {
            _objc_release(lStack_88);
            goto LAB_10427de2c;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar21 = (uint)lVar12;
        }
        _objc_release(lStack_88);
      }
      uVar13 = 0;
      uVar1 = 0;
      if (lVar16 == lVar14) {
        uVar1 = (uint)(iVar3 == iVar4) & ((bVar5 ^ bVar6) ^ 0xffffffff);
      }
      uVar2 = 0;
      if (lVar17 == lVar15) {
        uVar2 = uVar1;
      }
      if ((((uVar2 & uVar20) == 1) && (((bVar7 ^ bVar8) & 1) == 0)) && (((bVar9 ^ bVar10) & 1) == 0)
         ) {
        uVar13 = uVar18 & uVar21;
      }
      goto LAB_10427dde4;
    }
  }
  uVar13 = 0;
LAB_10427dde4:
  return uVar13 & 1;
}



/* Entry: 10427dea0; end: 10427df1f; -[SCAdChatFeedCellTrackInfo isEqual:] */

uint FUN_10427dea0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10427dbe0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10427df20; end: 10427df23; -[SCAdChatFeedCellTrackInfo copyWithZone:] */

void FUN_10427df20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10427df24; end: 10427e1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427df24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0770);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x545345445f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545345445f504154,0xef4e4f4954414e49);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f0790);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f07b0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f07d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f07f0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f0810);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f0830);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a548))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a548);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x41535245564e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41535245564e4f43,0xef44495f4e4f4954);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10427e1dc; end: 10427e22b; -[SCAdChatFeedCellTrackInfo encodeWithCoder:] */

void FUN_10427e1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10427df24(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10427e22c; end: 10427e25b;  */

void FUN_10427e22c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10427e25c(param_1);
  return;
}



/* Entry: 10427e25c; end: 10427e6bb;  */

undefined8 FUN_10427e25c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0770);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x545345445f504154;
  uVar7 = 0x54414e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545345445f504154);
  lVar3 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  FUN_10427e968(lVar3);
  if ((uVar7 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f0790);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f07b0);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f07d0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uVar2 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f07f0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar5);
  uVar5 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f0810);
  func_0x00010bf66ce0();
  _objc_release(uVar5);
  uVar5 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f0830);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
    uVar5 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0x41535245564e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41535245564e4f43,0xef44495f4e4f4954);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar6 = uStack_b0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
      _swift_bridgeObjectRelease(uStack_a8);
      goto LAB_10427e654;
    }
  }
  uVar6 = 0;
LAB_10427e654:
  func_0x00010c012420();
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 10427e6bc; end: 10427e6e3; -[SCAdChatFeedCellTrackInfo initWithCoder:] */

void FUN_10427e6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10427e25c();
  return;
}



/* Entry: 10427e6e4; end: 10427e71b; -[SCAdChatFeedCellTrackInfo description] */

void FUN_10427e6e4(void)

{
  undefined1 auStack_50 [64];
  
  _objc_retain();
  FUN_10427e7e4(auStack_50);
  func_0x00010189a670(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427e71c; end: 10427e797; -[SCAdChatFeedCellTrackInfo init] */

void FUN_10427e71c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdChatFeedCellTrackInfoWrapper.swift",0x33,2,0x90,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10427e764);
  (*pcVar1)();
}



/* Entry: 10427e798; end: 10427e7e3; -[SCAdChatFeedCellTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427e798(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a528));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a540));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a548 + 8))
  ;
  return;
}



/* Entry: 10427e7e4; end: 10427e967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427e7e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [64];
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar4 = *(undefined1 *)(param_3 + _DAT_11306a508);
  uVar8 = *(undefined8 *)(param_3 + _DAT_11306a510);
  uVar9 = *(undefined8 *)(param_3 + _DAT_11306a518);
  uVar10 = *(undefined8 *)(param_3 + _DAT_11306a520);
  bVar1 = *(long *)(param_3 + _DAT_11306a528) == 0;
  if (bVar1) {
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  uVar5 = *(undefined1 *)(param_3 + _DAT_11306a530);
  uVar6 = *(undefined1 *)(param_3 + _DAT_11306a538);
  lVar7 = *(long *)(param_3 + _DAT_11306a540);
  if (lVar7 == 0) {
    uStack_cd = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_cd = (undefined1)lVar7;
  }
  uVar2 = *(undefined8 *)(param_3 + _DAT_11306a548);
  uVar3 = ((undefined8 *)(param_3 + _DAT_11306a548))[1];
  _swift_bridgeObjectRetain(uVar3);
  _objc_release(param_3);
  uStack_f8 = uVar4;
  uStack_f0 = uVar8;
  uStack_e8 = uVar9;
  uStack_e0 = uVar10;
  uStack_d8 = param_2;
  uStack_d0 = bVar1;
  uStack_cf = uVar5;
  uStack_ce = uVar6;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  auStack_b8[0] = uVar4;
  uStack_b0 = uVar8;
  uStack_a8 = uVar9;
  uStack_a0 = uVar10;
  uStack_98 = param_2;
  uStack_90 = bVar1;
  uStack_8f = uVar5;
  uStack_8e = uVar6;
  uStack_8d = uStack_cd;
  uStack_88 = uVar2;
  uStack_80 = uVar3;
  func_0x00010189a634(&uStack_f8,auStack_138);
  func_0x00010189a670(auStack_b8);
  param_1[1] = uStack_f0;
  *param_1 = CONCAT71(uStack_f7,uStack_f8);
  param_1[3] = uStack_e0;
  param_1[2] = uStack_e8;
  param_1[5] = CONCAT44(uStack_cc,
                        CONCAT13(uStack_cd,CONCAT12(uStack_ce,CONCAT11(uStack_cf,uStack_d0))));
  param_1[4] = uStack_d8;
  param_1[7] = uStack_c0;
  param_1[6] = uStack_c8;
  return;
}



/* Entry: 10427e968; end: 10427e977;  */

undefined1  [16] FUN_10427e968(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10427e978; end: 10427e997;  */

void FUN_10427e978(void)

{
  _objc_opt_self(&PTR_PTR_112992530);
  return;
}



/* Entry: 10427e998; end: 10427e9f3; -[SCAdCollectionTrackInfo interactionRecordList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427e998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a578);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042a1954(0);
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



/* Entry: 10427e9f4; end: 10427ea03; -[SCAdCollectionTrackInfo appInstallStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427e9f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a580);
}



/* Entry: 10427ea04; end: 10427ea67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427ea04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a578) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a580) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427ea68; end: 10427eb27; -[SCAdCollectionTrackInfo initWithInteractionRecordList:appInstallStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427ea68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  if (param_3 != 0) {
    FUN_1042a1954();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,lVar2);
    lVar2 = param_3;
  }
  *(long *)(param_1 + _DAT_11306a578) = lVar2;
  *(undefined8 *)(param_1 + _DAT_11306a580) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427eb28; end: 10427ee63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427eb28(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lStack_a28;
  long lStack_a20;
  undefined1 auStack_a18 [840];
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 auStack_6b8 [769];
  undefined1 uStack_3b7;
  undefined1 uStack_3b6;
  undefined1 uStack_3b5;
  undefined1 uStack_3b4;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined1 uStack_397;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [784];
  
  _swift_getObjectType();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar11 != 0) {
      puStack_388 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(param_1);
      func_0x000104209e98(0,lVar11,0);
      puVar9 = puStack_388;
      lVar6 = 0;
      FUN_1042a1954();
      lVar12 = 0x20;
      while( true ) {
        lVar11 = lVar11 + -1;
        _memcpy(&uStack_6d0,param_1 + lVar12,0x348);
        lVar7 = lVar6;
        _objc_allocWithZone();
        *(undefined8 *)(lVar7 + _DAT_11306aff8) = uStack_6d0;
        *(undefined8 *)(lVar7 + _DAT_11306b000) = uStack_6c8;
        *(undefined8 *)(lVar7 + _DAT_11306b008) = uStack_6c0;
        iVar5 = (int)auStack_6b8;
        func_0x00010178e1e4();
        if (iVar5 == 1) {
          func_0x00010178e544(&uStack_6d0,auStack_a18);
          puVar10 = (undefined1 *)0x0;
        }
        else {
          _memcpy(auStack_370,auStack_6b8,0x301);
          FUN_1042ca7c4(0);
          _objc_allocWithZone();
          func_0x00010178e544(&uStack_6d0,auStack_a18);
          FUN_10427f878(auStack_6b8,auStack_a18,0x112dcbc48,&UNK_10d98e2c0);
          puVar10 = auStack_370;
          FUN_1042c96c8();
          func_0x00010427f8c0(auStack_6b8,0x112dcbc48,&UNK_10d98e2c0);
        }
        uVar4 = uStack_3a0;
        *(undefined1 **)(lVar7 + _DAT_11306b010) = puVar10;
        *(undefined1 *)(lVar7 + _DAT_11306b018) = uStack_3b7;
        *(undefined1 *)(lVar7 + _DAT_11306b020) = uStack_3b6;
        *(undefined1 *)(lVar7 + _DAT_11306b028) = uStack_3b5;
        *(undefined1 *)(lVar7 + _DAT_11306b030) = uStack_3b4;
        puVar2 = (undefined8 *)(lVar7 + _DAT_11306b038);
        puVar2[1] = uStack_3a8;
        *puVar2 = uStack_3b0;
        *(undefined8 *)(lVar7 + _DAT_11306b040) = uStack_3a0;
        *(undefined1 *)(lVar7 + _DAT_11306b048) = uStack_398;
        *(undefined1 *)(lVar7 + _DAT_11306b050) = uStack_397;
        *(undefined8 *)(lVar7 + _DAT_11306b058) = uStack_390;
        puVar3 = PTR_s_init_1125d9248;
        lStack_a28 = lVar7;
        lStack_a20 = lVar6;
        _swift_bridgeObjectRetain(uStack_3a8);
        _objc_retain(uVar4);
        plVar8 = &lStack_a28;
        _objc_msgSendSuper2(plVar8,puVar3);
        func_0x00010178e510(&uStack_6d0);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puStack_388 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x000104209e98(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puStack_388;
        *(ulong *)(puStack_388 + 0x10) = uVar1 + 1;
        *(long **)(puStack_388 + uVar1 * 8 + 0x20) = plVar8;
        if (lVar11 == 0) break;
        lVar12 = lVar12 + 0x348;
      }
      _swift_bridgeObjectRelease(param_1);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a578) = puVar9;
  _swift_bridgeObjectRelease(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11306a580) = param_2;
  _objc_msgSendSuper2(auStack_380,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427ee64; end: 10427ee97; -[SCAdCollectionTrackInfo hash] */

undefined8 FUN_10427ee64(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10427ee98();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10427ee98; end: 10427ef33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427ee98(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a578);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1042a1954(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a580));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10427ef34; end: 10427f057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10427ef34(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  FUN_10427f878(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010427f8c0(auStack_60,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_11306a578);
      lVar5 = *(long *)(lStack_68 + _DAT_11306a578);
      uVar4 = (uint)(lVar7 == 0 && lVar5 == 0);
      if (lVar7 != 0 && lVar5 != 0) {
        _swift_bridgeObjectRetain(lVar5);
        lVar2 = lVar7;
        _swift_bridgeObjectRetain(lVar7);
        uVar4 = (uint)lVar2;
        FUN_10422a358();
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(lVar5);
      }
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306a580);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_11306a580);
      _objc_release(lStack_68);
      return uVar4 & (int)uVar3 == (int)uVar6;
    }
  }
  return 0;
}



/* Entry: 10427f058; end: 10427f0e7; -[SCAdCollectionTrackInfo isEqual:] */

uint FUN_10427f058(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10427ef34(&uStack_40);
  _objc_release(param_1);
  func_0x00010427f8c0(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10427f0e8; end: 10427f0eb; -[SCAdCollectionTrackInfo copyWithZone:] */

void FUN_10427f0e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10427f0ec; end: 10427f1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427f0ec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a578);
  if (lVar2 != 0) {
    uVar1 = 0;
    FUN_1042a1954(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
  }
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f0890);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0560);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10427f1c0; end: 10427f20f; -[SCAdCollectionTrackInfo encodeWithCoder:] */

void FUN_10427f1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10427f0ec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10427f210; end: 10427f23f;  */

void FUN_10427f210(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10427f240(param_1);
  return;
}



/* Entry: 10427f240; end: 10427f417;  */

undefined8 FUN_10427f240(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lVar4;
  long lVar5;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f0890);
  uVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,uVar2);
    _swift_unknownObjectRelease(uVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010427f8c0(&uStack_60,0x112d387f8,&UNK_10d902650);
    lVar4 = 0;
  }
  else {
    uVar1 = 0x11306a588;
    func_0x0001000285a8(0x11306a588,&UNK_10dce56c0);
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    lVar4 = lStack_88;
    if ((int)plVar3 == 0) {
      lVar4 = 0;
    }
  }
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0560);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar1 = 0;
      FUN_1042a1954(0);
      lVar5 = lVar4;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
      _swift_bridgeObjectRelease(lVar4);
    }
    func_0x00010c01e740();
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar4);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 10427f418; end: 10427f43f; -[SCAdCollectionTrackInfo initWithCoder:] */

void FUN_10427f418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10427f240();
  return;
}



/* Entry: 10427f440; end: 10427f483; -[SCAdCollectionTrackInfo description] */

void FUN_10427f440(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10427f510();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427f484; end: 10427f4ff; -[SCAdCollectionTrackInfo init] */

void FUN_10427f484(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdCollectionTrackInfoWrapper.swift",0x31,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10427f4cc);
  (*pcVar1)();
}



/* Entry: 10427f500; end: 10427f50f; -[SCAdCollectionTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427f500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a578));
  return;
}



/* Entry: 10427f510; end: 10427f877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10427f510(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_16b8 [840];
  undefined1 auStack_1370 [840];
  undefined1 auStack_1028 [840];
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined1 auStack_cc8 [769];
  undefined1 uStack_9c7;
  undefined1 uStack_9c6;
  undefined1 uStack_9c5;
  undefined1 uStack_9c4;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined1 uStack_9a8;
  undefined1 uStack_9a7;
  undefined8 uStack_9a0;
  undefined1 auStack_998 [776];
  undefined1 auStack_690 [776];
  undefined *puStack_388;
  undefined1 auStack_380 [784];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = *(ulong *)(param_1 + _DAT_11306a578);
  if (uVar6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6;
      if (-1 < (long)uVar6) {
        uVar7 = uVar6 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar7 != 0) {
      puStack_388 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209d90(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      puVar5 = puStack_388;
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10427f878);
        (*pcVar2)();
      }
      func_0x00010178e4b4(auStack_690);
      uVar8 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          uVar3 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar3 = uVar8;
          func_0x000104208c60(uVar8,uVar6);
        }
        _memcpy(auStack_cc8,auStack_690,0x301);
        uStack_ce0 = *(undefined8 *)(uVar3 + _DAT_11306aff8);
        uStack_cd8 = *(undefined8 *)(uVar3 + _DAT_11306b000);
        uStack_cd0 = *(undefined8 *)(uVar3 + _DAT_11306b008);
        if (*(long *)(uVar3 + _DAT_11306b010) == 0) {
          puVar4 = auStack_690;
        }
        else {
          _objc_retain();
          FUN_1042c9f5c(auStack_380);
          _memcpy(auStack_1028,auStack_380,0x301);
          func_0x00010178e4b0(auStack_1028);
          puVar4 = auStack_1028;
        }
        _memcpy(auStack_998,puVar4,0x301);
        func_0x00010427f8c0(auStack_cc8,0x112dcbc48,&UNK_10d98e2c0);
        _memcpy(auStack_cc8,auStack_998,0x301);
        uStack_9c7 = *(undefined1 *)(uVar3 + _DAT_11306b018);
        uStack_9c6 = *(undefined1 *)(uVar3 + _DAT_11306b020);
        uStack_9c5 = *(undefined1 *)(uVar3 + _DAT_11306b028);
        uStack_9c4 = *(undefined1 *)(uVar3 + _DAT_11306b030);
        puVar1 = (undefined8 *)(uVar3 + _DAT_11306b038);
        uVar9 = puVar1[1];
        uStack_9b8 = puVar1[1];
        uStack_9c0 = *puVar1;
        uStack_9b0 = *(undefined8 *)(uVar3 + _DAT_11306b040);
        uStack_9a8 = *(undefined1 *)(uVar3 + _DAT_11306b048);
        uStack_9a7 = *(undefined1 *)(uVar3 + _DAT_11306b050);
        uVar10 = *(undefined8 *)(uVar3 + _DAT_11306b058);
        _objc_retain();
        _swift_bridgeObjectRetain(uVar9);
        _objc_release(uVar3);
        uStack_9a0 = uVar10;
        _memcpy(auStack_1370,&uStack_ce0,0x348);
        _memcpy(auStack_1028,&uStack_ce0,0x348);
        func_0x00010178e544(auStack_1370,auStack_16b8);
        func_0x00010178e510(auStack_1028);
        uVar3 = *(ulong *)(puVar5 + 0x10);
        puStack_388 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
          func_0x000104209d90(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 1,1);
        }
        puVar5 = puStack_388;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_388 + 0x10) = uVar3 + 1;
        _memcpy(puStack_388 + uVar3 * 0x348 + 0x20,auStack_1370,0x348);
      } while (uVar7 != uVar8);
    }
  }
  auVar11._8_8_ = *(undefined8 *)(param_1 + _DAT_11306a580);
  auVar11._0_8_ = puVar5;
  return auVar11;
}



/* Entry: 10427f878; end: 10427f8ff;  */

undefined8 FUN_10427f878(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10427f900; end: 10427f91f;  */

void FUN_10427f900(void)

{
  _objc_opt_self(&PTR_PTR_112992640);
  return;
}



/* Entry: 10427f920; end: 10427f92f; -[SCAdComposerDpaMetadata aspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427f920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a5b8));
  return;
}



/* Entry: 10427f930; end: 10427f93f; -[SCAdComposerDpaMetadata isFallbackAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427f930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a5c0));
  return;
}



/* Entry: 10427f940; end: 10427f94f; -[SCAdComposerDpaMetadata numImagesShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427f940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a5c8));
  return;
}



/* Entry: 10427f950; end: 10427f95f; -[SCAdComposerDpaMetadata templateType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10427f950(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306a5d0);
}



/* Entry: 10427f960; end: 10427f96f; -[SCAdComposerDpaMetadata backgroundType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10427f960(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306a5d8);
}



/* Entry: 10427f970; end: 10427fa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427f970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a5b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a5c0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a5c8) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11306a5d0) = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_11306a5d8) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427fa0c; end: 10427fb1b; -[SCAdComposerDpaMetadata initWithAspectRatio:isFallbackAspectRatio:numImagesShown:templateType:backgroundType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427fa0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306a5b8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306a5c0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306a5c8) = param_5;
  *(undefined4 *)(param_1 + _DAT_11306a5d0) = param_6;
  *(undefined4 *)(param_1 + _DAT_11306a5d8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 10427fb1c; end: 10427fc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427fb1c(ulong param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if ((param_1 & 0xff00000000) == 0x100000000) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c0138c0(param_1 & 0xffffffff);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a5b8) = puVar1;
  if ((param_1 & 0xff0000000000) == 0x20000000000) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a5c0) = puVar1;
  if ((param_3 & 0xff) == 1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a5c8) = puVar1;
  *(int *)(unaff_x20 + _DAT_11306a5d0) = (int)(param_3 >> 0x20);
  *(undefined4 *)(unaff_x20 + _DAT_11306a5d8) = param_4;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427fc4c; end: 10427fc7f; -[SCAdComposerDpaMetadata hash] */

undefined8 FUN_10427fc4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10427fc80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10427fc80; end: 10427fdbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427fc80(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a5b8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a5c0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a5c8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11306a5d0));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11306a5d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10427fdbc; end: 10427ffd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10427fdbc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar5 = &lStack_78;
    _swift_dynamicCast(plVar5,auStack_70,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_11306a5b8);
      lVar11 = *(long *)(lStack_78 + _DAT_11306a5b8);
      uVar9 = (uint)(lVar7 == 0 && lVar11 == 0);
      if (lVar7 != 0 && lVar11 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar9 = (uint)lVar6;
        _objc_release(lVar7);
        _objc_release(lVar11);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11306a5c0);
      lVar11 = *(long *)(lStack_78 + _DAT_11306a5c0);
      uVar10 = (uint)(lVar7 == 0 && lVar11 == 0);
      if (lVar7 != 0 && lVar11 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar6;
        _objc_release(lVar7);
        _objc_release(lVar11);
      }
      uVar12 = *(ulong *)(unaff_x20 + _DAT_11306a5c8);
      lVar11 = *(long *)(lStack_78 + _DAT_11306a5c8);
      uVar8 = (ulong)(uVar12 == 0 && lVar11 == 0);
      if ((uVar12 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        uVar8 = uVar12;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar12);
        _objc_release(lVar11);
      }
      iVar1 = *(int *)(unaff_x20 + _DAT_11306a5d0);
      iVar2 = *(int *)(lStack_78 + _DAT_11306a5d0);
      iVar3 = *(int *)(unaff_x20 + _DAT_11306a5d8);
      iVar4 = *(int *)(lStack_78 + _DAT_11306a5d8);
      _objc_release(lStack_78);
      if ((uVar9 & uVar10 & 1) == 0) {
        return false;
      }
      if ((uVar8 & 1) == 0) {
        return false;
      }
      return iVar1 == iVar2 && iVar3 == iVar4;
    }
  }
  return false;
}



/* Entry: 10427ffd4; end: 104280053; -[SCAdComposerDpaMetadata isEqual:] */

uint FUN_10427ffd4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10427fdbc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104280054; end: 104280057; -[SCAdComposerDpaMetadata copyWithZone:] */

void FUN_104280054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104280058; end: 1042801e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280058(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x525f544345505341;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f544345505341,0xec0000004f495441);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f08f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0910);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4554414c504d4554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554414c504d4554,0xed0000455059545f);
  func_0x00010bf92f80(param_1);
  _objc_release(uVar1);
  uVar1 = 0x554f52474b434142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f52474b434142,0xef455059545f444e);
  func_0x00010bf92f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042801e4; end: 104280233; -[SCAdComposerDpaMetadata encodeWithCoder:] */

void FUN_1042801e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104280058(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104280234; end: 104280273;  */

undefined8 FUN_104280234(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10428046c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104280274; end: 1042802af; -[SCAdComposerDpaMetadata initWithCoder:] */

undefined8 FUN_104280274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10428046c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1042802b0; end: 1042802e7; -[SCAdComposerDpaMetadata description] */

void FUN_1042802b0(undefined8 param_1)

{
  _objc_retain();
  FUN_1042803ac();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042802e8; end: 104280363; -[SCAdComposerDpaMetadata init] */

void FUN_1042802e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdComposerDpaMetadataWrapper.swift",0x31,2,0x6b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104280330);
  (*pcVar1)();
}



/* Entry: 104280364; end: 1042803ab; -[SCAdComposerDpaMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280364(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a5b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a5c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a5c8));
  return;
}



/* Entry: 1042803ac; end: 10428046b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1042803ac(uint param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_2 + _DAT_11306a5b8) == 0) {
    uVar2 = 0x100000000;
  }
  else {
    func_0x00010bfb2c80();
    uVar2 = (ulong)param_1;
  }
  lVar1 = *(long *)(param_2 + _DAT_11306a5c0);
  if (lVar1 == 0) {
    uVar3 = 0x20000000000;
  }
  else {
    func_0x00010bf1f3c0();
    uVar3 = 0x10000000000;
    if ((int)lVar1 == 0) {
      uVar3 = 0;
    }
  }
  if (*(long *)(param_2 + _DAT_11306a5c8) != 0) {
    func_0x00010c067fc0();
  }
  return uVar2 | uVar3;
}



/* Entry: 10428046c; end: 104280783;  */

undefined8 FUN_10428046c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0x525f544345505341;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f544345505341,0xec0000004f495441);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar2,6);
    uVar2 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f08f0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0910);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0x4554414c504d4554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554414c504d4554,0xed0000455059545f);
  func_0x00010bf66ee0(param_1);
  _objc_release(uVar7);
  uVar7 = 0x554f52474b434142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f52474b434142,0xef455059545f444e);
  func_0x00010bf66ee0(param_1);
  _objc_release(uVar7);
  func_0x00010bff40e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  return unaff_x20;
}



/* Entry: 104280784; end: 1042807a3;  */

void FUN_104280784(void)

{
  _objc_opt_self(&PTR_PTR_112992718);
  return;
}



/* Entry: 1042807a4; end: 1042807b3; -[SCAdCustomPlacementServerConfigTrackInfo isCustomPlacementEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042807a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a608);
}



/* Entry: 1042807b4; end: 1042807cb; -[SCAdCustomPlacementServerConfigTrackInfo coordinateBottomLeftPct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042807b4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306a610);
}



/* Entry: 1042807cc; end: 1042808a3; -[SCAdCustomPlacementServerConfigTrackInfo initWithIsCustomPlacementEnabled:coordinateBottomLeftPct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042807cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_3;
  _swift_getObjectType();
  *(undefined1 *)(param_3 + _DAT_11306a608) = param_5;
  puVar1 = (undefined8 *)(param_3 + _DAT_11306a610);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042808a4; end: 104280933; -[SCAdCustomPlacementServerConfigTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042808a4(long param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11306a608));
  pdVar1 = (double *)(param_1 + _DAT_11306a610);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104280934; end: 104280a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104280934(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar4 = &lStack_78;
    _swift_dynamicCast(plVar4,auStack_70,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306a608);
      bVar2 = *(byte *)(lStack_78 + _DAT_11306a608);
      dVar7 = *(double *)(unaff_x20 + _DAT_11306a610);
      dVar5 = ((double *)(unaff_x20 + _DAT_11306a610))[1];
      dVar8 = *(double *)(lStack_78 + _DAT_11306a610);
      dVar6 = ((double *)(lStack_78 + _DAT_11306a610))[1];
      _objc_release();
      if (dVar7 == dVar8) {
        return dVar5 == dVar6 & (bVar1 ^ bVar2 ^ 0xff);
      }
    }
  }
  return 0;
}



/* Entry: 104280a0c; end: 104280a8b; -[SCAdCustomPlacementServerConfigTrackInfo isEqual:] */

uint FUN_104280a0c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104280934(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104280a8c; end: 104280a8f; -[SCAdCustomPlacementServerConfigTrackInfo copyWithZone:] */

void FUN_104280a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104280a90; end: 104280c47; -[SCAdCustomPlacementServerConfigTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f0970);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306a610);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11306a610))[1];
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f0990);
  func_0x00010bf92dc0(uVar2,uVar3,param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104280c48; end: 104280d1b; -[SCAdCustomPlacementServerConfigTrackInfo initWithCoder:] */

undefined8
FUN_104280c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f0970);
  func_0x00010bf66ce0(param_5);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f0990);
  func_0x00010bf66d00(param_5);
  _objc_release(uVar1);
  func_0x00010c01eec0(param_1,param_2,param_3);
  _objc_release(param_5);
  return param_3;
}



/* Entry: 104280d1c; end: 104280d37; -[SCAdCustomPlacementServerConfigTrackInfo description] */

void FUN_104280d1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104280d38; end: 104280db3; -[SCAdCustomPlacementServerConfigTrackInfo init] */

void FUN_104280d38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdCustomPlacementServerConfigTrackInfoWrapper.swift",0x42,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104280d80);
  (*pcVar1)();
}



/* Entry: 104280db4; end: 104280db7; -[SCAdCustomPlacementServerConfigTrackInfo .cxx_destruct] */

void FUN_104280db4(void)

{
  return;
}



/* Entry: 104280db8; end: 104280dd7;  */

void FUN_104280db8(void)

{
  _objc_opt_self(&PTR_PTR_112992808);
  return;
}



/* Entry: 104280dd8; end: 104280ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280dd8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a608) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a610);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104280ddc; end: 104280e27;  */

void FUN_104280ddc(undefined8 *param_1)

{
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1042824e0(&uStack_90);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = CONCAT71(uStack_37,uStack_38);
  param_1[10] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x61) = uStack_2f;
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_30,uStack_37);
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 104280e28; end: 104280e37; -[SCAdDeepLinkAdTrackInfo deepLinkToAppCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104280e28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a640);
}



/* Entry: 104280e38; end: 104280e47; -[SCAdDeepLinkAdTrackInfo deepLinkToAppInstallCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104280e38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a648);
}



/* Entry: 104280e48; end: 104280e57; -[SCAdDeepLinkAdTrackInfo deepLinkFallbackToWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104280e48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a650);
}



/* Entry: 104280e58; end: 104280e67; -[SCAdDeepLinkAdTrackInfo deepLinkFallbackToDefaultBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104280e58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a658);
}



/* Entry: 104280e68; end: 104280ec3; -[SCAdDeepLinkAdTrackInfo deepLinkURI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280e68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a660))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a660);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104280ec4; end: 104280ed3; -[SCAdDeepLinkAdTrackInfo customProductPageEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104280ec4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a668);
}



/* Entry: 104280ed4; end: 104280ee3; -[SCAdDeepLinkAdTrackInfo appInstallStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104280ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a670);
}



/* Entry: 104280ee4; end: 104280ef3; -[SCAdDeepLinkAdTrackInfo isInternalDeepLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104280ee4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a678);
}



/* Entry: 104280ef4; end: 104280f03; -[SCAdDeepLinkAdTrackInfo skanImpressionStartTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a680));
  return;
}


