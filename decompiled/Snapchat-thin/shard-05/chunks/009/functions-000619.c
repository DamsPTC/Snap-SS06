/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104372514; end: 10437257f; -[SCLensExplorerStoryInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372514(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071c20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113071c28));
  return;
}



/* Entry: 104372580; end: 104372673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372580(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_2 + _DAT_113071c18) == '\x01') {
    lVar2 = *(long *)(param_2 + _DAT_113071c28);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104372670);
      (*pcVar1)();
    }
    _swift_unknownObjectRetain(lVar2);
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar7 = 0;
    uVar6 = 0x8000000000000000;
  }
  else {
    lVar7 = *(long *)(param_2 + _DAT_113071c20);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104372674);
      (*pcVar1)();
    }
    lVar2 = *(long *)(lVar7 + _DAT_113071c60);
    lVar3 = ((long *)(lVar7 + _DAT_113071c60))[1];
    uVar6 = (ulong)*(byte *)(lVar7 + _DAT_113071c70);
    lVar5 = *(long *)(lVar7 + _DAT_113071c68);
    lVar4 = ((long *)(lVar7 + _DAT_113071c68))[1];
    lVar7 = *(long *)(lVar7 + _DAT_113071c78);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar3);
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  param_1[3] = lVar4;
  param_1[4] = uVar6;
  param_1[5] = lVar7;
  return;
}



/* Entry: 104372674; end: 104372693;  */

void FUN_104372674(void)

{
  _objc_opt_self(&PTR_PTR_1129a3430);
  return;
}



/* Entry: 104372694; end: 1043727fb;  */

int FUN_104372694(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104372710;
        goto LAB_1043726f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043726f4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104372710:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043727fc; end: 10437283b;  */

void FUN_1043727fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf09d0;
  _swift_getWitnessTable(&UNK_10dcf09d0,&UNK_110760220);
  puRam0000000113071c58 = puVar1;
  return;
}



/* Entry: 10437283c; end: 1043728b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437283c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071c60);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071c68);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113071c70) = *(undefined1 *)(param_1 + 4);
  *(undefined8 *)(unaff_x20 + _DAT_113071c78) = param_1[5];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043728b8; end: 104372993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043728b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113071c60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113071c60))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113071c68))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113071c68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113071c70));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113071c78));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104372994; end: 104372af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104372994(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  uint uVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar4 = &lStack_78;
    _swift_dynamicCast(plVar4,auStack_70,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_113071c60);
      if (lVar6 == *(long *)(lStack_78 + _DAT_113071c60) &&
          ((long *)(unaff_x20 + _DAT_113071c60))[1] == ((long *)(lStack_78 + _DAT_113071c60))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar6;
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_113071c68))[1];
      lVar7 = ((long *)(lStack_78 + _DAT_113071c68))[1];
      uVar8 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_113071c68);
        if (lVar5 == *(long *)(lStack_78 + _DAT_113071c68) && lVar6 == lVar7) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar5;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113071c70);
      bVar2 = *(byte *)(lStack_78 + _DAT_113071c70);
      lVar6 = *(long *)(unaff_x20 + _DAT_113071c78);
      lVar7 = *(long *)(lStack_78 + _DAT_113071c78);
      _objc_release(lStack_78);
      return uVar3 & uVar8 & ((bVar1 ^ bVar2) ^ 0xffffffff) & (uint)(lVar6 == lVar7);
    }
  }
  return 0;
}



/* Entry: 104372af8; end: 104372b43; -[SCLensExplorerStoryCreatorInfo creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372af8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113071c60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113071c60))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104372b44; end: 104372b9f; -[SCLensExplorerStoryCreatorInfo displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372b44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113071c68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113071c68);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104372ba0; end: 104372baf; -[SCLensExplorerStoryCreatorInfo isOfficial] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104372ba0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071c70);
}



/* Entry: 104372bb0; end: 104372bbf; -[SCLensExplorerStoryCreatorInfo officialBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104372bb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071c78);
}



/* Entry: 104372bc0; end: 104372c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071c60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071c68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113071c70) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113071c78) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104372c64; end: 104372d2b; -[SCLensExplorerStoryCreatorInfo initWithCreatorId:displayName:isOfficial:officialBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372c64(long param_1,long param_2,undefined8 param_3,long param_4,undefined1 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113071c60);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_113071c68);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  *(undefined1 *)(param_1 + _DAT_113071c70) = param_5;
  *(undefined8 *)(param_1 + _DAT_113071c78) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104372d2c; end: 104372d5f; -[SCLensExplorerStoryCreatorInfo hash] */

undefined8 FUN_104372d2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043728b8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104372d60; end: 104372ddf; -[SCLensExplorerStoryCreatorInfo isEqual:] */

uint FUN_104372d60(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104372994(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104372de0; end: 104372de3; -[SCLensExplorerStoryCreatorInfo copyWithZone:] */

void FUN_104372de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104372de4; end: 104372dff; -[SCLensExplorerStoryCreatorInfo description] */

void FUN_104372de4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104372e00; end: 104372e7b; -[SCLensExplorerStoryCreatorInfo init] */

void FUN_104372e00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensExplorerStoryScope/LensExplorerStoryCreatorInfoWrapper.swift",0x42,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104372e48);
  (*pcVar1)();
}



/* Entry: 104372e7c; end: 104372ebb; -[SCLensExplorerStoryCreatorInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372e7c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071c60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113071c68 + 8))
  ;
  return;
}



/* Entry: 104372ebc; end: 104372edb;  */

void FUN_104372ebc(void)

{
  _objc_opt_self(&PTR_PTR_1129a3500);
  return;
}



/* Entry: 104372edc; end: 104372f23; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372edc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071ca8;
  _swift_beginAccess(param_1 + _DAT_113071ca8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104372f24; end: 104372f87; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope setFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071ca8;
  _swift_beginAccess(param_1 + _DAT_113071ca8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104372f88; end: 104372fcf; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372f88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071cb0;
  _swift_beginAccess(param_1 + _DAT_113071cb0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104372fd0; end: 104373027; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071cb0;
  _swift_beginAccess(param_1 + _DAT_113071cb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104373028; end: 10437306b; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104373028(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071cb8;
  _swift_beginAccess(param_1 + _DAT_113071cb8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10437306c; end: 1043730bb; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope setSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437306c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071cb8;
  _swift_beginAccess(param_1 + _DAT_113071cb8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1043730bc; end: 104373103; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope lensMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043730bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071cc0;
  _swift_beginAccess(param_1 + _DAT_113071cc0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104373104; end: 104373167; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope setLensMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104373104(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071cc0;
  _swift_beginAccess(param_1 + _DAT_113071cc0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104373168; end: 104373213; -[_TtC20SCLensInfoCardsScope20SCLensInfoCardsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104373168(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071ca8));
  func_0x0001043731f0(param_1 + _DAT_113071cb0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071cc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071cc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071cd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071cd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113071ce0));
  return;
}



/* Entry: 104373214; end: 10437327b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104373214(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100372c20();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113071cf0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10437327c; end: 1043732c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437327c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071cf0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043732c8; end: 10437346f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043732c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100372318();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113071ca8;
  *(undefined8 *)(lVar5 + _DAT_113071ca8) = 0;
  lVar3 = _DAT_113071cb0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113071cb0,0);
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  uVar7 = *(undefined8 *)(lVar5 + lVar2);
  *(long *)(lVar5 + lVar2) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar7);
  *(undefined8 *)(lVar5 + _DAT_113071cc0) = param_2;
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_113071cb8) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113071cc8) = param_5;
  *(undefined8 *)(lVar5 + _DAT_113071cd0) = param_6;
  *(undefined8 *)(lVar5 + _DAT_113071cd8) = param_7;
  *(undefined8 *)(lVar5 + _DAT_113071ce0) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 104373470; end: 10437358b; -[_TtC20SCLensInfoCardsScope28SCLensInfoCardsScopeServices buildWithViewController:lensMetadata:delegate:source:infoCardReportServices:lensCreatorSubscriptionProviderServices:lensTopicsServices:spectaclesLensServices:] */

void FUN_104373470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043732c8(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10437358c; end: 10437358f;  */

void FUN_10437358c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104373590; end: 1043735c3;  */

void FUN_104373590(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043735c4; end: 1043735ef; -[_TtC20SCLensInfoCardsScope28SCLensInfoCardsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043735c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113071cf0));
  return;
}



/* Entry: 1043735f0; end: 10437368f;  */

void FUN_1043735f0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104373690; end: 104373693;  */

void FUN_104373690(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0b30;
  _swift_getWitnessTable(&UNK_10dcf0b30,&UNK_110760488);
  puRam0000000113071d48 = puVar1;
  return;
}



/* Entry: 104373694; end: 1043736d3;  */

void FUN_104373694(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0b30;
  _swift_getWitnessTable(&UNK_10dcf0b30,&UNK_110760488);
  puRam0000000113071d48 = puVar1;
  return;
}



/* Entry: 1043736d4; end: 1043737bf;  */

uint FUN_1043736d4(uint *param_1,int param_2)

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



/* Entry: 1043737c0; end: 104373bab;  */

int FUN_1043737c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10437383c;
        goto LAB_104373820;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104373820:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10437383c:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104373bac; end: 104373c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104373bac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071d50) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104373c44; end: 104373ca3; -[_TtC21LensInfoCardReportAPI22InfoCardReportServices init] */

void FUN_104373c44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoCardReportAPI.InfoCardReportServices",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104373c70);
  (*pcVar1)();
}



/* Entry: 104373ca4; end: 104373cbb; -[_TtC21LensInfoCardReportAPI22InfoCardReportServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104373ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113071d50));
  return;
}



/* Entry: 104373cbc; end: 104374813;  */

uint FUN_104373cbc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  ulong uVar11;
  long lVar12;
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
  uint uVar13;
  ulong *puVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  ulong auStack_d0 [7];
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar10 = (long)auStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lStack_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  auStack_d0[6] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_01;
  auStack_d0[5] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_02;
  lVar3 = 0x112d7e680;
  auStack_d0[1] = lVar10;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  auStack_d0[3] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar3 = 0x112d36580;
  auStack_d0[4] = lVar10;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  auStack_d0[2] = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = uVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar23 - extraout_x12_04;
  lVar4 = 0;
  FUN_10437500c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar11 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_80 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = uVar11 - extraout_x12_05;
  uStack_88 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar18 = (ulong *)(uVar11 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (ulong *)((long)puVar18 - extraout_x12_07);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (ulong *)((long)puVar21 - extraout_x12_08);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = (long)puVar14 - extraout_x12_09;
  lVar3 = 0x113071e28;
  func_0x0001000285a8(0x113071e28,&UNK_10dcf0db0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar22 - extraout_x8_03;
  puVar5 = (ulong *)(lVar12 + *(int *)(lVar3 + 0x30));
  FUN_10437546c(param_1,lVar12);
  FUN_10437546c(param_2,puVar5);
  lStack_68 = lVar12;
  _swift_getEnumCaseMultiPayload(lVar12,lVar4);
  uVar15 = uStack_80;
  uVar11 = uStack_88;
  iVar2 = (int)lVar12;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      FUN_10437546c(lStack_68,lVar22);
      lVar3 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      iVar2 = *(int *)(lVar3 + 0x30);
      uVar11 = *(ulong *)(lVar22 + iVar2);
      iVar1 = *(int *)(lVar3 + 0x40);
      uVar15 = *(ulong *)(lVar22 + iVar1);
      puVar14 = puVar5;
      _swift_getEnumCaseMultiPayload(puVar5,lVar4);
      if ((int)puVar14 != 0) {
        _objc_release(uVar15);
        _objc_release(uVar11);
        func_0x0001043754b0(lVar22,0x112d36580,&UNK_10d9016d0);
        goto LAB_1043742e0;
      }
      uStack_88 = uVar11;
      uVar20 = *(ulong *)((long)puVar5 + (long)iVar2);
      uStack_80 = *(ulong *)((long)puVar5 + (long)iVar1);
      func_0x0001001021cc(lVar22,lVar10);
      func_0x0001001021cc(puVar5,lVar23);
      uVar19 = auStack_d0[4];
      lVar3 = (long)*(int *)(auStack_d0[3] + 0x30);
      func_0x000100029394(lVar10,auStack_d0[4]);
      func_0x000100029394(lVar23,uVar19 + lVar3);
      lVar12 = lStack_70;
      lVar4 = lStack_78;
      pcVar16 = *(code **)(lStack_78 + 0x30);
      uVar6 = uVar19;
      (*pcVar16)(uVar19,1,lStack_70);
      uVar11 = auStack_d0[2];
      if ((int)uVar6 == 1) {
        lVar3 = uVar19 + lVar3;
        (*pcVar16)(lVar3,1,lVar12);
        if ((int)lVar3 == 1) {
          func_0x0001043754b0(uVar19,0x112d36580,&UNK_10d9016d0);
LAB_10437459c:
          uVar19 = uStack_80;
          uVar6 = uStack_88;
          if (uStack_88 == 0) {
            uVar7 = uStack_80;
            uVar8 = uVar15;
            uVar11 = uVar20;
            if (uVar20 == 0) {
LAB_104374648:
              if (uVar15 != 0) {
                if (uVar19 != 0) {
                  func_0x000100c70ba8(0);
                  _objc_retain();
                  uVar11 = uVar15;
                  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                  _objc_release(uVar15);
                  _objc_release(uVar20);
                  _objc_release(uVar6);
                  func_0x0001043754b0(lVar23,0x112d36580,&UNK_10d9016d0);
                  func_0x0001043754b0(lVar10,0x112d36580,&UNK_10d9016d0);
                  _objc_release(uVar15);
                  goto LAB_104374024;
                }
                _objc_release(uVar20);
                _objc_release(uVar6);
                func_0x0001043754b0(lVar23,0x112d36580,&UNK_10d9016d0);
                func_0x0001043754b0(lVar10,0x112d36580,&UNK_10d9016d0);
                uVar19 = uVar15;
                goto LAB_104374454;
              }
              _objc_release(uVar20);
              _objc_release(uVar6);
              func_0x0001043754b0(lVar23,0x112d36580,&UNK_10d9016d0);
              func_0x0001043754b0(lVar10,0x112d36580,&UNK_10d9016d0);
              uVar15 = uVar19;
              goto joined_r0x0001043747c0;
            }
          }
          else {
            uVar7 = uStack_88;
            uVar8 = uVar19;
            uVar11 = uVar15;
            if (uVar20 != 0) {
              func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
              uVar17 = uVar6;
              _objc_retain();
              uVar7 = uVar20;
              _objc_retain(uVar20);
              uVar9 = uVar17;
              __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar17,uVar7);
              _objc_release(uVar17);
              _objc_release(uVar7);
              if ((uVar9 & 1) != 0) goto LAB_104374648;
              _objc_release(uVar17);
            }
          }
          _objc_release(uVar7);
          _objc_release(uVar8);
          goto LAB_1043746e8;
        }
        _objc_release(uStack_80);
        _objc_release(uVar15);
        _objc_release(uVar20);
        _objc_release(uStack_88);
LAB_104374504:
        func_0x0001043754b0(uVar19,0x112d7e680,&UNK_10d95e350);
      }
      else {
        lStack_90 = lVar10;
        func_0x000100029394(uVar19,auStack_d0[2]);
        lVar10 = uVar19 + lVar3;
        (*pcVar16)(lVar10,1,lVar12);
        uVar6 = auStack_d0[1];
        if ((int)lVar10 == 1) {
          _objc_release(uStack_80);
          _objc_release(uVar15);
          _objc_release(uVar20);
          _objc_release(uStack_88);
          (**(code **)(lVar4 + 8))(uVar11,lVar12);
          lVar10 = lStack_90;
          goto LAB_104374504;
        }
        uVar7 = auStack_d0[1];
        (**(code **)(lVar4 + 0x20))(auStack_d0[1],uVar19 + lVar3,lVar12);
        func_0x000101553b98();
        uVar8 = uVar11;
        __sSQ2eeoiySbx_xtFZTj(uVar11,uVar6,lVar12,uVar7);
        pcVar16 = *(code **)(lVar4 + 8);
        (*pcVar16)(uVar6,lVar12);
        (*pcVar16)(uVar11,lVar12);
        func_0x0001043754b0(uVar19,0x112d36580,&UNK_10d9016d0);
        uVar11 = uStack_88;
        lVar10 = lStack_90;
        if ((uVar8 & 1) != 0) goto LAB_10437459c;
        _objc_release(uStack_80);
        _objc_release(uVar15);
        _objc_release(uVar20);
LAB_1043746e8:
        _objc_release(uVar11);
      }
      func_0x0001043754b0(lVar23,0x112d36580,&UNK_10d9016d0);
      func_0x0001043754b0(lVar10,0x112d36580,&UNK_10d9016d0);
    }
    else {
      if (iVar2 == 1) {
        FUN_10437546c(lStack_68,puVar14);
        uVar19 = *puVar14;
        uVar6 = puVar14[1];
        uVar11 = puVar14[2];
        uVar20 = puVar14[3];
        puVar14 = puVar5;
        _swift_getEnumCaseMultiPayload(puVar5,lVar4);
        if ((int)puVar14 != 1) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(uVar6);
          goto LAB_1043742e0;
        }
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        uVar17 = puVar5[3];
        if (uVar6 == 0) {
          uVar15 = uVar7;
          uVar9 = uVar20;
          uVar6 = uVar17;
          if (uVar7 == 0) goto LAB_104374488;
LAB_104374418:
          _swift_bridgeObjectRelease(uVar6);
        }
        else {
          uVar15 = uVar20;
          uVar9 = uVar17;
          if (uVar7 == 0) goto LAB_104374418;
          if ((uVar19 == *puVar5) && (uVar6 == uVar7)) {
            _swift_bridgeObjectRelease(uVar6);
            _swift_bridgeObjectRelease(uVar7);
LAB_104374488:
            if (uVar20 == 0) {
              uVar20 = uVar17;
              if (uVar17 != 0) goto LAB_10437463c;
            }
            else {
              if (uVar17 == 0) {
LAB_10437463c:
                _swift_bridgeObjectRelease(uVar20);
                goto LAB_10437471c;
              }
              if ((uVar11 != uVar8) || (uVar20 != uVar17)) {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar11,uVar20,uVar8,uVar17,0);
                _swift_bridgeObjectRelease(uVar20);
                _swift_bridgeObjectRelease(uVar17);
                goto joined_r0x000104374778;
              }
              _swift_bridgeObjectRelease(uVar20);
              _swift_bridgeObjectRelease(uVar17);
            }
            goto LAB_104374294;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar19,uVar6,*puVar5,uVar7,0);
          _swift_bridgeObjectRelease(uVar6);
          _swift_bridgeObjectRelease(uVar7);
          if ((uVar19 & 1) != 0) goto LAB_104374488;
        }
        _swift_bridgeObjectRelease(uVar9);
      }
      else {
        FUN_10437546c(lStack_68,puVar21);
        uVar11 = *puVar21;
        uVar15 = puVar21[1];
        puVar14 = puVar5;
        _swift_getEnumCaseMultiPayload(puVar5,lVar4);
        if ((int)puVar14 != 2) {
          _swift_bridgeObjectRelease(uVar15);
          goto LAB_1043742e0;
        }
        uVar19 = puVar5[1];
        if (uVar15 == 0) {
          uVar15 = uVar19;
          if (uVar19 == 0) goto LAB_104374294;
        }
        else if (uVar19 != 0) {
          if ((uVar11 == *puVar5) && (uVar15 == uVar19)) {
            _swift_bridgeObjectRelease(uVar15);
            _swift_bridgeObjectRelease(uVar19);
            goto LAB_104374294;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar11,uVar15,*puVar5,uVar19,0);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar19);
          goto joined_r0x000104374778;
        }
      }
      _swift_bridgeObjectRelease(uVar15);
    }
LAB_10437471c:
    func_0x000103333ff0(lStack_68);
  }
  else {
    if (iVar2 < 5) {
      if (iVar2 == 3) {
        FUN_10437546c(lStack_68,puVar18);
        uVar19 = *puVar18;
        puVar14 = puVar5;
        _swift_getEnumCaseMultiPayload(puVar5,lVar4);
        if ((int)puVar14 != 3) {
          _objc_release(uVar19);
          goto LAB_1043742e0;
        }
        uVar15 = *puVar5;
        if (uVar19 == 0) {
joined_r0x0001043747c0:
          uVar19 = uVar15;
          if (uVar19 != 0) goto LAB_104374454;
LAB_104374294:
          func_0x000103333ff0(lStack_68);
          uVar13 = 1;
          goto LAB_104374728;
        }
        if (uVar15 == 0) {
LAB_104374454:
          _objc_release(uVar19);
        }
        else {
          func_0x000100c70ba8(0);
          _objc_retain();
          uVar11 = uVar19;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar15);
          _objc_release(uVar19);
LAB_104374024:
          _objc_release(uVar19);
joined_r0x000104374778:
          if ((uVar11 & 1) != 0) goto LAB_104374294;
        }
        goto LAB_10437471c;
      }
      FUN_10437546c(lStack_68,uStack_88);
      puVar14 = puVar5;
      _swift_getEnumCaseMultiPayload(puVar5,lVar4);
      lVar10 = lStack_70;
      lVar3 = lStack_78;
      uVar19 = auStack_d0[5];
      uVar15 = uVar11;
      if ((int)puVar14 == 4) {
        pcVar16 = *(code **)(lStack_78 + 0x20);
        (*pcVar16)(auStack_d0[5],uVar11,lStack_70);
        uVar11 = auStack_d0[6];
        (*pcVar16)(auStack_d0[6],puVar5,lVar10);
        uVar15 = uVar19;
        __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar19,uVar11);
        uVar13 = (uint)uVar15;
        pcVar16 = *(code **)(lVar3 + 8);
        (*pcVar16)(uVar11,lVar10);
LAB_10437426c:
        (*pcVar16)(uVar19,lVar10);
        func_0x000103333ff0(lStack_68);
        goto LAB_104374728;
      }
    }
    else {
      if (iVar2 != 5) {
        _swift_getEnumCaseMultiPayload(puVar5,lVar4);
        if ((int)puVar5 == 6) goto LAB_104374294;
        goto LAB_1043742e0;
      }
      FUN_10437546c(lStack_68,uStack_80);
      puVar14 = puVar5;
      _swift_getEnumCaseMultiPayload(puVar5,lVar4);
      lVar10 = lStack_70;
      lVar3 = lStack_78;
      uVar19 = lStack_98;
      if ((int)puVar14 == 5) {
        pcVar16 = *(code **)(lStack_78 + 0x20);
        (*pcVar16)(lStack_98,uVar15,lStack_70);
        lVar4 = lStack_90;
        (*pcVar16)(lStack_90,puVar5,lVar10);
        lVar12 = uVar19;
        __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar19,lVar4);
        uVar13 = (uint)lVar12;
        pcVar16 = *(code **)(lVar3 + 8);
        (*pcVar16)(lVar4,lVar10);
        goto LAB_10437426c;
      }
    }
    (**(code **)(lStack_78 + 8))(uVar15,lStack_70);
LAB_1043742e0:
    func_0x0001043754b0(lStack_68,0x113071e28,&UNK_10dcf0db0);
  }
  uVar13 = 0;
LAB_104374728:
  return uVar13 & 1;
}



/* Entry: 104374814; end: 104374a67;  */

long * FUN_104374814(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 3) {
      if (iVar2 == 0) {
        lVar7 = 0;
        __s10Foundation3URLVMa();
        lVar8 = *(long *)(lVar7 + -8);
        plVar3 = param_2;
        (**(code **)(lVar8 + 0x30))(param_2,1,lVar7);
        if ((int)plVar3 == 0) {
          (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar7);
          (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar7);
        }
        else {
          lVar7 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        lVar7 = 0x112f5a6e0;
        func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
        uVar4 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30)) = uVar4;
        uVar6 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40)) = uVar6;
        _objc_retain(uVar4);
        _objc_retain(uVar6);
        uVar4 = 0;
      }
      else if (iVar2 == 1) {
        lVar7 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar7;
        lVar7 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = lVar7;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar7);
        uVar4 = 1;
      }
      else {
        if (iVar2 != 2) {
LAB_10437495c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar7 + 0x40));
          return param_1;
        }
        lVar7 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar7;
        _swift_bridgeObjectRetain();
        uVar4 = 2;
      }
    }
    else if (iVar2 == 3) {
      *param_1 = *param_2;
      _objc_retain();
      uVar4 = 3;
    }
    else if (iVar2 == 4) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar4 = 4;
    }
    else {
      if (iVar2 != 5) goto LAB_10437495c;
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar4 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104374a68; end: 104374b8b;  */

void FUN_104374a68(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        _swift_bridgeObjectRelease(param_1[1]);
        uVar3 = param_1[3];
      }
      else {
        if (iVar1 != 2) {
          return;
        }
        uVar3 = param_1[1];
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar4 + -8);
    puVar2 = param_1;
    (**(code **)(lVar5 + 0x30))(param_1,1,lVar4);
    if ((int)puVar2 == 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar4);
    }
    lVar4 = 0x112f5a6e0;
    func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
    _objc_release(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)));
    uVar3 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x40));
  }
  else {
    if (iVar1 != 3) {
      if ((iVar1 != 4) && (iVar1 != 5)) {
        return;
      }
      lVar4 = 0;
      __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000104374ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
      return;
    }
    uVar3 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104374b8c; end: 10437500b;  */

undefined8 * FUN_104374b8c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      lVar6 = *(long *)(lVar3 + -8);
      puVar2 = param_2;
      (**(code **)(lVar6 + 0x30))(param_2,1,lVar3);
      if ((int)puVar2 == 0) {
        (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar3);
        (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar3);
      }
      else {
        lVar3 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
      }
      lVar3 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      uVar4 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) = uVar4;
      uVar5 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x40));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x40)) = uVar5;
      _objc_retain(uVar4);
      _objc_retain(uVar5);
      uVar4 = 0;
    }
    else if (iVar1 == 1) {
      uVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar4;
      uVar4 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      uVar4 = 1;
    }
    else {
      if (iVar1 != 2) {
LAB_104374ca8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
        return param_1;
      }
      uVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar4;
      _swift_bridgeObjectRetain();
      uVar4 = 2;
    }
  }
  else if (iVar1 == 3) {
    *param_1 = *param_2;
    _objc_retain();
    uVar4 = 3;
  }
  else if (iVar1 == 4) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    uVar4 = 4;
  }
  else {
    if (iVar1 != 5) goto LAB_104374ca8;
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    uVar4 = 5;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Entry: 10437500c; end: 104375043;  */

void FUN_10437500c(undefined8 param_1)

{
  if (lRam0000000113071df0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff1e8);
  return;
}



/* Entry: 104375044; end: 104375383;  */

long FUN_104375044(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)lVar3;
  if (iVar1 == 5) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    uVar4 = 5;
  }
  else if (iVar1 == 4) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    uVar4 = 4;
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar2 + -8);
    lVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar2);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    lVar3 = 0x112f5a6e0;
    func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
    *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x30)) =
         *(undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x40)) =
         *(undefined8 *)(param_2 + *(int *)(lVar3 + 0x40));
    uVar4 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Entry: 104375384; end: 1043753b3;  */

void FUN_104375384(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010437538c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 1043753b4; end: 10437546b;  */

void FUN_1043753b4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_80 [32];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    uVar2 = *(long *)(lVar1 + -8) + 0x40;
    _swift_getTupleTypeLayout3(auStack_80,uVar2,&UNK_10dcf0d68,&UNK_10dcf0d68);
    puStack_58 = &UNK_10dcf0d80;
    puStack_50 = &UNK_10dcf0d98;
    puStack_48 = &UNK_10dcf0d68;
    lVar1 = 0x13f;
    puStack_60 = auStack_80;
    __s10Foundation3URLVMa();
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      lStack_38 = lStack_40;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,6,&puStack_60);
    }
  }
  return;
}



/* Entry: 10437546c; end: 10437559b;  */

undefined8 FUN_10437546c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437500c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10437559c; end: 10437559f;  */

void FUN_10437559c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0e00;
  _swift_getWitnessTable(&UNK_10dcf0e00,&UNK_110760728);
  puRam0000000113071e30 = puVar1;
  return;
}



/* Entry: 1043755a0; end: 1043755df;  */

void FUN_1043755a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0e00;
  _swift_getWitnessTable(&UNK_10dcf0e00,&UNK_110760728);
  puRam0000000113071e30 = puVar1;
  return;
}



/* Entry: 1043755e0; end: 104375757;  */

bool FUN_1043755e0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104375758; end: 1043757a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375758(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071e38) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043757a4; end: 104375803; -[_TtC16LensInfoCardsAPI31SCLensInfoCardLifecycleServices init] */

void FUN_1043757a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoCardsAPI.SCLensInfoCardLifecycleServices",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043757d0);
  (*pcVar1)();
}



/* Entry: 104375804; end: 104375813; -[_TtC16LensInfoCardsAPI31SCLensInfoCardLifecycleServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113071e38));
  return;
}



/* Entry: 104375814; end: 104375823; -[_TtC16LensInfoCardsAPI34SCLensInfoCardPresentationServices lensInfoCardPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071e68));
  return;
}



/* Entry: 104375824; end: 10437586f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375824(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071e68) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104375870; end: 1043758cf; -[_TtC16LensInfoCardsAPI34SCLensInfoCardPresentationServices init] */

void FUN_104375870(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoCardsAPI.SCLensInfoCardPresentationServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437589c);
  (*pcVar1)();
}



/* Entry: 1043758d0; end: 1043758df; -[_TtC16LensInfoCardsAPI34SCLensInfoCardPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043758d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113071e68));
  return;
}



/* Entry: 1043758e0; end: 1043758ff;  */

void FUN_1043758e0(void)

{
  _objc_opt_self(&PTR_PTR_1129a3918);
  return;
}



/* Entry: 104375900; end: 104375947; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375900(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071e98;
  _swift_beginAccess(param_1 + _DAT_113071e98,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104375948; end: 1043759ab; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope setFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375948(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071e98;
  _swift_beginAccess(param_1 + _DAT_113071e98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1043759ac; end: 1043759b7; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043759ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071ea0;
  _swift_beginAccess(param_1 + _DAT_113071ea0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043759b8; end: 1043759c3; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043759b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071ea0;
  _swift_beginAccess(param_1 + _DAT_113071ea0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043759c4; end: 104375a07; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043759c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071ea8;
  _swift_beginAccess(param_1 + _DAT_113071ea8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104375a08; end: 104375a57; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope setSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071ea8;
  _swift_beginAccess(param_1 + _DAT_113071ea8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104375a58; end: 104375a9f; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope lensMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375a58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071eb0;
  _swift_beginAccess(param_1 + _DAT_113071eb0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104375aa0; end: 104375b03; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope setLensMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071eb0;
  _swift_beginAccess(param_1 + _DAT_113071eb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104375b04; end: 104375b0f; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope lensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375b04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071eb8;
  _swift_beginAccess(param_1 + _DAT_113071eb8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104375b10; end: 104375b53;  */

void FUN_104375b10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104375b54; end: 104375b5f; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope setLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071eb8;
  _swift_beginAccess(param_1 + _DAT_113071eb8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104375b60; end: 104375bb3;  */

void FUN_104375b60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104375bb4; end: 104375d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104375bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113071e98;
  *(undefined8 *)(unaff_x20 + _DAT_113071e98) = 0;
  lVar3 = _DAT_113071ea0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071ea0,0);
  lVar4 = _DAT_113071eb8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071eb8,0);
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_113071eb0) = param_2;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_113071ea8) = param_4;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_5);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_2);
  puVar5 = auStack_b8;
  _objc_msgSendSuper2(puVar5,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_5);
  return puVar5;
}



/* Entry: 104375d24; end: 104375d87;  */

undefined8
FUN_104375d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104375eec();
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_5);
  return uVar1;
}



/* Entry: 104375d88; end: 104375e33; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope initWithViewController:lensMetadata:delegate:source:lensCarouselManagementServices:] */

undefined8
FUN_104375d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_104375eec(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_7);
  return uVar1;
}



/* Entry: 104375e34; end: 104375e93; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope init] */

void FUN_104375e34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoCardsAPI.SCLensInfoCardsOnCameraScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104375e60);
  (*pcVar1)();
}



/* Entry: 104375e94; end: 104375eeb; -[_TtC16LensInfoCardsAPI28SCLensInfoCardsOnCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375e94(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071e98));
  func_0x0001043731f0(param_1 + _DAT_113071ea0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071eb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_113071eb8);
  return;
}



/* Entry: 104375eec; end: 104376023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104375eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_113071e98;
  *(undefined8 *)(unaff_x20 + _DAT_113071e98) = 0;
  lVar3 = _DAT_113071ea0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071ea0,0);
  lVar4 = _DAT_113071eb8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071eb8,0);
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar5);
  *(undefined8 *)(unaff_x20 + _DAT_113071eb0) = param_2;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_113071ea8) = param_4;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_5);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&stack0xffffffffffffff48,puVar1);
  return;
}



/* Entry: 104376024; end: 1043760f7;  */

void FUN_104376024(void)

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



/* Entry: 1043760f8; end: 104376117;  */

void FUN_1043760f8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104376118; end: 104376bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104376118(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_f0 [5];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a0 [8];
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12_00;
  lVar3 = 0;
  FUN_10437500c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_10437546c(param_1,puVar12);
  puVar4 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar3);
  iVar1 = (int)puVar4;
  if (iVar1 < 3) {
    auStack_f0[3] = param_1;
    if (iVar1 == 0) {
      lVar3 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      uVar13 = *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar3 + 0x30));
      uVar14 = *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar3 + 0x40));
      func_0x0001001021cc(puVar12,lVar6);
      pcVar9 = *(code **)(lVar8 + 0x38);
      (*pcVar9)(lVar7,1,1,lVar2);
      (*pcVar9)(lVar10,1,1,lVar2);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 1;
      FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = uVar13;
      *(undefined8 *)(unaff_x20 + _DAT_113071f00) = uVar14;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f20) = 0;
      FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
      FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
      puVar5 = auStack_c0;
    }
    else if (iVar1 == 1) {
      uVar13 = *puVar12;
      uVar14 = puVar12[1];
      auStack_f0[2] = puVar12[2];
      auStack_f0[1] = puVar12[3];
      pcVar9 = *(code **)(lVar8 + 0x38);
      (*pcVar9)(lVar6,1,1,lVar2);
      (*pcVar9)(lVar7,1,1,lVar2);
      (*pcVar9)(lVar10,1,1,lVar2);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 2;
      FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f00) = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
      *puVar4 = auStack_f0[2];
      puVar4[1] = auStack_f0[1];
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f20) = 0;
      FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
      FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
      puVar5 = auStack_b0;
    }
    else {
      uVar13 = *puVar12;
      uVar14 = puVar12[1];
      pcVar9 = *(code **)(lVar8 + 0x38);
      (*pcVar9)(lVar6,1,1,lVar2);
      (*pcVar9)(lVar7,1,1,lVar2);
      (*pcVar9)(lVar10,1,1,lVar2);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 3;
      FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f00) = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      *(undefined8 *)(unaff_x20 + _DAT_113071f20) = 0;
      FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
      FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
      puVar5 = auStack_a0;
    }
    _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
    param_1 = auStack_f0[3];
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 != 3) {
        (**(code **)(lVar8 + 0x20))(lVar11,puVar12,lVar2);
        pcVar9 = *(code **)(lVar8 + 0x38);
        (*pcVar9)(lVar6,1,1,lVar2);
        (**(code **)(lVar8 + 0x10))(lVar7,lVar11,lVar2);
        (*pcVar9)(lVar7,0,1,lVar2);
        (*pcVar9)(lVar10,1,1,lVar2);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 5;
        auStack_f0[3] = param_1;
        FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
        *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = 0;
        *(undefined8 *)(unaff_x20 + _DAT_113071f00) = 0;
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 *)(unaff_x20 + _DAT_113071f20) = 0;
        FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
        FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
        lVar3 = -0x70;
LAB_1043769f4:
        puVar5 = &stack0xfffffffffffffff0 + lVar3;
        _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
        func_0x000103333ff0(auStack_f0[3]);
        func_0x000104378654(lVar10,0x112d36580,&UNK_10d9016d0);
        func_0x000104378654(lVar7,0x112d36580,&UNK_10d9016d0);
        func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar8 + 8))(lVar11,lVar2);
        return puVar5;
      }
      uVar13 = *puVar12;
      pcVar9 = *(code **)(lVar8 + 0x38);
      (*pcVar9)(lVar6,1,1,lVar2);
      (*pcVar9)(lVar7,1,1,lVar2);
      (*pcVar9)(lVar10,1,1,lVar2);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 4;
      FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f00) = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f20) = uVar13;
      FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
      FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
      lVar3 = -0x80;
    }
    else {
      if (iVar1 == 5) {
        (**(code **)(lVar8 + 0x20))(lVar11,puVar12,lVar2);
        pcVar9 = *(code **)(lVar8 + 0x38);
        (*pcVar9)(lVar6,1,1,lVar2);
        (*pcVar9)(lVar7,1,1,lVar2);
        (**(code **)(lVar8 + 0x10))(lVar10,lVar11,lVar2);
        (*pcVar9)(lVar10,0,1,lVar2);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 6;
        auStack_f0[3] = param_1;
        FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
        *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = 0;
        *(undefined8 *)(unaff_x20 + _DAT_113071f00) = 0;
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 *)(unaff_x20 + _DAT_113071f20) = 0;
        FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
        FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
        lVar3 = -0x60;
        goto LAB_1043769f4;
      }
      pcVar9 = *(code **)(lVar8 + 0x38);
      (*pcVar9)(lVar6,1,1,lVar2);
      (*pcVar9)(lVar7,1,1,lVar2);
      (*pcVar9)(lVar10,1,1,lVar2);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113071ee8) = 0;
      FUN_10437860c(lVar6,unaff_x20 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(unaff_x20 + _DAT_113071ef8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f00) = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f08);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f10);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_113071f18);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(unaff_x20 + _DAT_113071f20) = 0;
      FUN_10437860c(lVar7,unaff_x20 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
      FUN_10437860c(lVar10,unaff_x20 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
      lVar3 = -0xc0;
    }
    puVar5 = &stack0xfffffffffffffff0 + lVar3;
    _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  }
  func_0x000103333ff0(param_1);
  func_0x000104378654(lVar10,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar7,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
  return puVar5;
}



/* Entry: 104376bcc; end: 104376c43; -[SCLensInfoCardActionType description] */

void FUN_104376bcc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10437500c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104376c44(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103333ff0(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104376c44; end: 104377193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104376c44(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long alStack_90 [6];
  
  lVar6 = 0x112d36580;
  alStack_90[5] = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  lVar6 = 0x112f59918;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar9 = (long *)(lVar8 - extraout_x12_00);
  lVar6 = 0;
  FUN_10437500c();
  lVar14 = *(long *)(lVar6 + -8);
  pcVar15 = *(code **)(lVar14 + 0x38);
  (*pcVar15)(plVar9,1,1,lVar6);
  bVar3 = *(byte *)(param_2 + _DAT_113071ee8);
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
      _swift_storeEnumTagMultiPayload(plVar9,lVar6,6);
      (*pcVar15)(plVar9,0,1,lVar6);
      goto LAB_104377104;
    }
    if (bVar3 == 1) {
      alStack_90[2] = _DAT_113071ef0;
      lVar11 = *(long *)(param_2 + _DAT_113071ef8);
      uVar12 = *(undefined8 *)(param_2 + _DAT_113071f00);
      func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
      lVar10 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      iVar4 = *(int *)(lVar10 + 0x30);
      iVar5 = *(int *)(lVar10 + 0x40);
      func_0x00010437860c(param_2 + alStack_90[2],plVar9,0x112d36580,&UNK_10d9016d0);
      *(long *)((long)plVar9 + (long)iVar4) = lVar11;
      *(undefined8 *)((long)plVar9 + (long)iVar5) = uVar12;
      _swift_storeEnumTagMultiPayload(plVar9,lVar6,0);
      (*pcVar15)(plVar9,0,1,lVar6);
      _objc_retain(uVar12);
      goto LAB_104377048;
    }
    plVar1 = (long *)(param_2 + _DAT_113071f08);
    plVar2 = (long *)(param_2 + _DAT_113071f10);
    alStack_90[3] = plVar1[1];
    alStack_90[2] = *plVar1;
    lVar10 = plVar1[1];
    alStack_90[1] = plVar2[1];
    alStack_90[0] = *plVar2;
    lVar13 = plVar2[1];
    func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
    lVar16 = alStack_90[2];
    lVar7 = alStack_90[1];
    lVar11 = alStack_90[0];
    plVar9[1] = alStack_90[3];
    *plVar9 = lVar16;
    plVar9[3] = lVar7;
    plVar9[2] = lVar11;
    _swift_storeEnumTagMultiPayload(plVar9,lVar6,1);
    (*pcVar15)(plVar9,0,1,lVar6);
    _swift_bridgeObjectRetain(lVar13);
  }
  else {
    if (4 < bVar3) {
      if (bVar3 == 5) {
        func_0x00010437860c(param_2 + _DAT_113071f28,lVar11,0x112d36580,&UNK_10d9016d0);
        lVar7 = 0;
        __s10Foundation3URLVMa();
        lVar16 = *(long *)(lVar7 + -8);
        lVar10 = lVar11;
        (**(code **)(lVar16 + 0x30))(lVar11,1,lVar7);
        if ((int)lVar10 == 1) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x104377190);
          (*pcVar15)();
        }
        func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
        (**(code **)(lVar16 + 0x10))(plVar9,lVar11,lVar7);
        _swift_storeEnumTagMultiPayload(plVar9,lVar6,4);
        (*pcVar15)(plVar9,0,1,lVar6);
        pcVar15 = *(code **)(lVar16 + 8);
        lVar10 = lVar11;
      }
      else {
        func_0x00010437860c(param_2 + _DAT_113071f30,lVar10,0x112d36580,&UNK_10d9016d0);
        lVar7 = 0;
        __s10Foundation3URLVMa();
        lVar16 = *(long *)(lVar7 + -8);
        lVar11 = lVar10;
        (**(code **)(lVar16 + 0x30))(lVar10,1,lVar7);
        if ((int)lVar11 == 1) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x104377194);
          (*pcVar15)();
        }
        func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
        (**(code **)(lVar16 + 0x10))(plVar9,lVar10,lVar7);
        _swift_storeEnumTagMultiPayload(plVar9,lVar6,5);
        (*pcVar15)(plVar9,0,1,lVar6);
        pcVar15 = *(code **)(lVar16 + 8);
      }
      (*pcVar15)(lVar10,lVar7);
      goto LAB_104377104;
    }
    if (bVar3 != 3) {
      lVar11 = *(long *)(param_2 + _DAT_113071f20);
      func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
      *plVar9 = lVar11;
      _swift_storeEnumTagMultiPayload(plVar9,lVar6,3);
      (*pcVar15)(plVar9,0,1,lVar6);
LAB_104377048:
      _objc_retain(lVar11);
      goto LAB_104377104;
    }
    lVar11 = *(long *)(param_2 + _DAT_113071f18);
    lVar10 = ((long *)(param_2 + _DAT_113071f18))[1];
    func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
    *plVar9 = lVar11;
    plVar9[1] = lVar10;
    _swift_storeEnumTagMultiPayload(plVar9,lVar6,2);
    (*pcVar15)(plVar9,0,1,lVar6);
  }
  _swift_bridgeObjectRetain(lVar10);
LAB_104377104:
  func_0x00010437860c(plVar9,lVar8,0x112f59918,&UNK_10dbb28c0);
  lVar10 = lVar8;
  (**(code **)(lVar14 + 0x30))(lVar8,1,lVar6);
  if ((int)lVar10 != 1) {
    _objc_release(param_2);
    func_0x00010331d77c(lVar8,alStack_90[5]);
    func_0x000104378654(plVar9,0x112f59918,&UNK_10dbb28c0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10437718c);
  (*pcVar15)();
}



/* Entry: 104377194; end: 1043771db; -[SCLensInfoCardActionType init] */

void FUN_104377194(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensInfoCardsAPI/LensInfoCardActionTypeWrapper.swift",0x34,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043771dc);
  (*pcVar1)();
}



/* Entry: 1043771dc; end: 10437720f; -[SCLensInfoCardActionType hash] */

undefined8 FUN_1043771dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104377210();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104377210; end: 10437761b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104377210(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12_00;
  __ss6HasherVABycfC(auStack_98);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113071ee8));
  FUN_10437860c(unaff_x20 + _DAT_113071ef0,lVar7,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar2 = lVar7;
  (*pcVar10)(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000104378654(lVar7,0x112d36580,&UNK_10d9016d0);
    lVar7 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(lVar7,lVar1);
    lVar7 = lVar2;
    func_0x00010bfde980(lVar2);
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar7);
  lVar2 = *(long *)(unaff_x20 + _DAT_113071ef8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113071f00);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113071f08))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113071f08);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  if (((undefined8 *)(unaff_x20 + _DAT_113071f10))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113071f10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  if (((undefined8 *)(unaff_x20 + _DAT_113071f18))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113071f18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  lVar2 = *(long *)(unaff_x20 + _DAT_113071f20);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  FUN_10437860c(unaff_x20 + _DAT_113071f28,lVar6,0x112d36580,&UNK_10d9016d0);
  lVar2 = lVar6;
  (*pcVar10)(lVar6,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
    lVar6 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(lVar6,lVar1);
    lVar6 = lVar2;
    func_0x00010bfde980(lVar2);
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar6);
  FUN_10437860c(unaff_x20 + _DAT_113071f30,puVar5,0x112d36580,&UNK_10d9016d0);
  puVar4 = puVar5;
  (*pcVar10)(puVar5,1,lVar1);
  if ((int)puVar4 == 1) {
    func_0x000104378654(puVar5,0x112d36580,&UNK_10d9016d0);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(puVar5,lVar1);
    puVar5 = puVar4;
    func_0x00010bfde980(puVar4);
    _objc_release(puVar4);
  }
  __ss6HasherV8_combineyySuF(puVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10437761c; end: 104378013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10437761c(undefined8 param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  long unaff_x20;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lStack_98 = *(long *)(lVar7 + -8);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar16 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d7e680;
  puStack_b8 = puVar16;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar16 = puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = puVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_b0 = puVar16 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = puVar16 + -extraout_x12 + -extraout_x12_00;
  lVar18 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar21 = (long)puVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar22 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar23 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = lVar24 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = uVar20 - extraout_x12_05;
  FUN_10437860c(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar11 = 0x112d387f8;
    puVar12 = &UNK_10d902650;
    puVar16 = auStack_80;
LAB_1043778c0:
    func_0x000104378654(puVar16,uVar11,puVar12);
  }
  else {
    plVar8 = &lStack_88;
    _swift_dynamicCast(plVar8,auStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
    lVar5 = _DAT_113071f30;
    lVar4 = _DAT_113071f28;
    lVar14 = _DAT_113071ef0;
    if (((ulong)plVar8 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_113071ee8);
      lVar10 = lStack_88;
      if (bVar2 != *(byte *)(lStack_88 + _DAT_113071ee8)) goto LAB_104377fe8;
      if (2 < bVar2) {
        if (4 < bVar2) {
          if (bVar2 == 5) {
            FUN_10437860c(lStack_88 + _DAT_113071f28,lVar24,0x112d36580,&UNK_10d9016d0);
            puVar16 = puStack_b0;
            iVar3 = *(int *)(lVar7 + 0x30);
            FUN_10437860c(unaff_x20 + lVar4,puStack_b0,0x112d36580,&UNK_10d9016d0);
            FUN_10437860c(lVar24,puVar16 + iVar3,0x112d36580,&UNK_10d9016d0);
            lVar18 = lStack_98;
            lVar7 = lStack_a0;
            pcVar19 = *(code **)(lStack_98 + 0x30);
            puVar9 = puVar16;
            (*pcVar19)(puVar16,1,lStack_a0);
            if ((int)puVar9 == 1) {
              _objc_release(lStack_88);
              func_0x000104378654(lVar24,0x112d36580,&UNK_10d9016d0);
              puVar9 = puVar16 + iVar3;
              (*pcVar19)(puVar9,1,lVar7);
              if ((int)puVar9 == 1) {
LAB_104377be8:
                func_0x000104378654(puVar16,0x112d36580,&UNK_10d9016d0);
                uVar17 = 1;
                goto LAB_104377ff0;
              }
            }
            else {
              FUN_10437860c(puVar16,lVar23,0x112d36580,&UNK_10d9016d0);
              puVar9 = puVar16 + iVar3;
              (*pcVar19)(puVar9,1,lVar7);
              puVar6 = puStack_b8;
              if ((int)puVar9 != 1) {
                puVar9 = puStack_b8;
                (**(code **)(lVar18 + 0x20))(puStack_b8,puVar16 + iVar3,lVar7);
                func_0x000101553b98();
                lVar14 = lVar23;
                __sSQ2eeoiySbx_xtFZTj(lVar23,puVar6,lVar7,puVar9);
                uVar17 = (uint)lVar14;
                _objc_release(lStack_88);
                pcVar19 = *(code **)(lVar18 + 8);
                (*pcVar19)(puVar6,lVar7);
                func_0x000104378654(lVar24,0x112d36580,&UNK_10d9016d0);
                (*pcVar19)(lVar23,lVar7);
LAB_104377fc0:
                func_0x000104378654(puVar16,0x112d36580,&UNK_10d9016d0);
                goto LAB_104377ff0;
              }
              _objc_release(lStack_88);
              func_0x000104378654(lVar24,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar18 + 8))(lVar23,lVar7);
            }
            uVar11 = 0x112d7e680;
            puVar12 = &UNK_10d95e350;
          }
          else {
            FUN_10437860c(lStack_88 + _DAT_113071f30,lVar22,0x112d36580,&UNK_10d9016d0);
            puVar16 = puStack_a8;
            iVar3 = *(int *)(lVar7 + 0x30);
            FUN_10437860c(unaff_x20 + lVar5,puStack_a8,0x112d36580,&UNK_10d9016d0);
            FUN_10437860c(lVar22,puVar16 + iVar3,0x112d36580,&UNK_10d9016d0);
            lVar7 = lStack_a0;
            pcVar19 = *(code **)(lStack_98 + 0x30);
            puVar9 = puVar16;
            (*pcVar19)(puVar16,1,lStack_a0);
            if ((int)puVar9 == 1) {
              _objc_release(lStack_88);
              func_0x000104378654(lVar22,0x112d36580,&UNK_10d9016d0);
              puVar9 = puVar16 + iVar3;
              (*pcVar19)(puVar9,1,lVar7);
              if ((int)puVar9 == 1) goto LAB_104377be8;
            }
            else {
              FUN_10437860c(puVar16,lVar21,0x112d36580,&UNK_10d9016d0);
              puVar9 = puVar16 + iVar3;
              (*pcVar19)(puVar9,1,lVar7);
              lVar18 = lStack_98;
              puVar6 = puStack_b8;
              if ((int)puVar9 != 1) {
                puVar9 = puStack_b8;
                (**(code **)(lStack_98 + 0x20))(puStack_b8,puVar16 + iVar3,lVar7);
                func_0x000101553b98();
                lVar14 = lVar21;
                __sSQ2eeoiySbx_xtFZTj(lVar21,puVar6,lVar7,puVar9);
                uVar17 = (uint)lVar14;
                _objc_release(lStack_88);
                pcVar19 = *(code **)(lVar18 + 8);
                (*pcVar19)(puVar6,lVar7);
                func_0x000104378654(lVar22,0x112d36580,&UNK_10d9016d0);
                (*pcVar19)(lVar21,lVar7);
                goto LAB_104377fc0;
              }
              _objc_release(lStack_88);
              func_0x000104378654(lVar22,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lStack_98 + 8))(lVar21,lVar7);
            }
            uVar11 = 0x112d7e680;
            puVar12 = &UNK_10d95e350;
          }
          goto LAB_1043778c0;
        }
        lVar7 = _DAT_113071f20;
        if (bVar2 != 3) goto LAB_104377aec;
        plVar8 = (long *)(unaff_x20 + _DAT_113071f18);
        lVar7 = plVar8[1];
        plVar1 = (long *)(lStack_88 + _DAT_113071f18);
        lVar18 = plVar1[1];
joined_r0x000104377874:
        if (lVar7 == 0) {
          _swift_bridgeObjectRetain(lVar18);
          _objc_release(lStack_88);
          if (lVar18 != 0) {
            _swift_bridgeObjectRelease(lVar18);
            goto LAB_104377fec;
          }
LAB_104377dd4:
          uVar17 = 1;
          goto LAB_104377ff0;
        }
        if (lVar18 == 0) {
          uVar17 = 0;
          _objc_release();
          goto LAB_104377ff0;
        }
        lVar14 = *plVar8;
        if ((lVar14 == *plVar1) && (lVar7 == lVar18)) goto LAB_104377a7c;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar14,lVar7,*plVar1,lVar18,0);
        uVar17 = (uint)lVar14;
LAB_104377b08:
        _objc_release(lStack_88);
        goto LAB_104377ff0;
      }
      if (bVar2 == 0) {
LAB_104377a7c:
        _objc_release();
        uVar17 = 1;
        goto LAB_104377ff0;
      }
      if (bVar2 == 1) {
        FUN_10437860c(lStack_88 + _DAT_113071ef0,lVar18,0x112d36580,&UNK_10d9016d0);
        iVar3 = *(int *)(lVar7 + 0x30);
        FUN_10437860c(unaff_x20 + lVar14,puVar16,0x112d36580,&UNK_10d9016d0);
        FUN_10437860c(lVar18,puVar16 + iVar3,0x112d36580,&UNK_10d9016d0);
        lVar14 = lStack_98;
        lVar7 = lStack_a0;
        pcVar19 = *(code **)(lStack_98 + 0x30);
        puVar9 = puVar16;
        (*pcVar19)(puVar16,1,lStack_a0);
        if ((int)puVar9 == 1) {
          func_0x000104378654(lVar18,0x112d36580,&UNK_10d9016d0);
          puVar9 = puVar16 + iVar3;
          (*pcVar19)(puVar9,1,lVar7);
          if ((int)puVar9 != 1) {
            _objc_release(lStack_88);
LAB_104377de4:
            uVar11 = 0x112d7e680;
            puVar12 = &UNK_10d95e350;
            goto LAB_1043778c0;
          }
          func_0x000104378654(puVar16,0x112d36580,&UNK_10d9016d0);
        }
        else {
          FUN_10437860c(puVar16,uVar20,0x112d36580,&UNK_10d9016d0);
          puVar9 = puVar16 + iVar3;
          (*pcVar19)(puVar9,1,lVar7);
          puVar6 = puStack_b8;
          if ((int)puVar9 == 1) {
            _objc_release(lStack_88);
            func_0x000104378654(lVar18,0x112d36580,&UNK_10d9016d0);
            (**(code **)(lVar14 + 8))(uVar20,lVar7);
            goto LAB_104377de4;
          }
          puVar9 = puStack_b8;
          (**(code **)(lVar14 + 0x20))(puStack_b8,puVar16 + iVar3,lVar7);
          func_0x000101553b98();
          uVar13 = uVar20;
          __sSQ2eeoiySbx_xtFZTj(uVar20,puVar6,lVar7,puVar9);
          pcVar19 = *(code **)(lVar14 + 8);
          (*pcVar19)(puVar6,lVar7);
          func_0x000104378654(lVar18,0x112d36580,&UNK_10d9016d0);
          (*pcVar19)(uVar20,lVar7);
          func_0x000104378654(puVar16,0x112d36580,&UNK_10d9016d0);
          if ((uVar13 & 1) == 0) goto LAB_104377fe8;
        }
        uVar20 = *(ulong *)(unaff_x20 + _DAT_113071ef8);
        if (uVar20 == 0) {
          lVar7 = _DAT_113071f00;
          if (*(long *)(lStack_88 + _DAT_113071ef8) == 0) goto LAB_104377aec;
        }
        else {
          func_0x00010c071ae0();
          lVar7 = _DAT_113071f00;
          if ((uVar20 & 1) != 0) {
LAB_104377aec:
            lVar18 = *(long *)(unaff_x20 + lVar7);
            if (lVar18 != 0) {
              func_0x00010c071ae0(lVar18);
              uVar17 = (uint)lVar18;
              goto LAB_104377b08;
            }
            lVar7 = *(long *)(lStack_88 + lVar7);
            lVar10 = lVar7;
            _objc_retain(lVar7);
            _objc_release(lStack_88);
            if (lVar7 == 0) goto LAB_104377dd4;
          }
        }
      }
      else {
        uVar20 = ((ulong *)(unaff_x20 + _DAT_113071f08))[1];
        uVar13 = ((ulong *)(lStack_88 + _DAT_113071f08))[1];
        if (uVar20 == 0) {
          if (uVar13 == 0) goto LAB_104377d84;
        }
        else if ((uVar13 != 0) &&
                (((uVar15 = *(ulong *)(unaff_x20 + _DAT_113071f08),
                  uVar15 == *(ulong *)(lStack_88 + _DAT_113071f08) && (uVar20 == uVar13)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar15 & 1) != 0)))) {
LAB_104377d84:
          plVar8 = (long *)(unaff_x20 + _DAT_113071f10);
          lVar7 = plVar8[1];
          plVar1 = (long *)(lStack_88 + _DAT_113071f10);
          lVar18 = plVar1[1];
          goto joined_r0x000104377874;
        }
      }
LAB_104377fe8:
      _objc_release(lVar10);
    }
  }
LAB_104377fec:
  uVar17 = 0;
LAB_104377ff0:
  return uVar17 & 1;
}



/* Entry: 104378014; end: 1043780a3; -[SCLensInfoCardActionType isEqual:] */

uint FUN_104378014(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10437761c(&uStack_40);
  _objc_release(param_1);
  func_0x000104378654(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1043780a4; end: 1043780a7; -[SCLensInfoCardActionType copyWithZone:] */

void FUN_1043780a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043780a8; end: 1043780bb; +[SCLensInfoCardActionType null] */

void FUN_1043780a8(void)

{
  FUN_1043789f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043780bc; end: 1043781cf; +[SCLensInfoCardActionType sendToActionWithDeeplinkURL:lensIconFuture:lens:] */

void FUN_1043780bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar5,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar5,param_3 == 0,1);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  puVar4 = puVar5;
  FUN_104378c0c(puVar5,param_4,param_5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x000104378654(puVar5,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1043781d0; end: 104378257; +[SCLensInfoCardActionType communityProfileActionWithProfileId:displayName:] */

void FUN_1043781d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  func_0x000104378e14(param_3,uVar1,param_4,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104378258; end: 1043782a3; +[SCLensInfoCardActionType publicProfileActionWithProfileId:] */

void FUN_104378258(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  func_0x000104379064();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043782a4; end: 1043782e3; +[SCLensInfoCardActionType openLensAttachmentWithLens:] */

void FUN_1043782a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043792a0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043782e4; end: 1043782ef; +[SCLensInfoCardActionType openWebPageWithWebUrl:] */

void FUN_1043782e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = puVar3;
  FUN_1043794d0(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


