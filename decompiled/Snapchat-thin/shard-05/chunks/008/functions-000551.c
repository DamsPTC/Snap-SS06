/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041ec0d8; end: 1041ec153; -[SCAppImpressionViewThroughInfo init] */

void FUN_1041ec0d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AppImpressionServices/AppImpressionViewThroughInfoWrapper.swift",0x3f,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041ec120);
  (*pcVar1)();
}



/* Entry: 1041ec154; end: 1041ec163; -[SCAppImpressionViewThroughInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068c60));
  return;
}



/* Entry: 1041ec164; end: 1041ec183;  */

void FUN_1041ec164(void)

{
  _objc_opt_self(&PTR_PTR_11298fd58);
  return;
}



/* Entry: 1041ec184; end: 1041ec193; -[SCAppInstallParameters appId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041ec184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068c98);
}



/* Entry: 1041ec194; end: 1041ec19f; -[SCAppInstallParameters appName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec194(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113068ca0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113068ca0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041ec1a0; end: 1041ec1ab; -[SCAppInstallParameters customProductPageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec1a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113068ca8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113068ca8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041ec1ac; end: 1041ec203;  */

void FUN_1041ec1ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041ec204; end: 1041ec213; -[SCAppInstallParameters adNetworkAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068cb0));
  return;
}



/* Entry: 1041ec214; end: 1041ec2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068c98) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ca0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ca8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113068cb0) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041ec2b8; end: 1041ec397; -[SCAppInstallParameters initWithAppId:appName:customProductPageId:adNetworkAttribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec2b8(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113068c98) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113068ca0);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113068ca8);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113068cb0) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 1041ec398; end: 1041ec3c7;  */

void FUN_1041ec398(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041ec3c8(param_1);
  return;
}



/* Entry: 1041ec3c8; end: 1041ec5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041ec3c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_80 [2];
  
  _swift_getObjectType();
  lVar2 = 0;
  func_0x000100b92194();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar3 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar6 - extraout_x8_00;
  *(undefined8 *)(unaff_x20 + _DAT_113068c98) = *param_1;
  auStack_80[0] = param_1[2];
  uVar8 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ca0);
  puVar1[1] = param_1[2];
  *puVar1 = uVar8;
  uVar8 = param_1[4];
  uVar10 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ca8);
  puVar1[1] = param_1[4];
  *puVar1 = uVar10;
  lVar3 = 0;
  func_0x000100b92084();
  func_0x0001041ed2e0((long)param_1 + (long)*(int *)(lVar3 + 0x1c),lVar9,0x112dd1460,&UNK_10d9925f0)
  ;
  lVar3 = lVar9;
  (**(code **)(lVar7 + 0x30))(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(auStack_80[0]);
    lVar5 = 0;
  }
  else {
    FUN_1041e3f2c(lVar9,lVar6);
    FUN_1041ec5d8(lVar6,lVar5);
    FUN_1041f00d0(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(auStack_80[0]);
    FUN_1041ef550();
    func_0x0001041ed2a4(lVar6,&SUB_100b92194);
  }
  *(long *)(unaff_x20 + _DAT_113068cb0) = lVar5;
  puVar4 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x0001041ed2a4(param_1,&SUB_100b92084);
  return puVar4;
}



/* Entry: 1041ec5d8; end: 1041ec61b;  */

undefined8 FUN_1041ec5d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b92194();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041ec61c; end: 1041ec64f; -[SCAppInstallParameters hash] */

undefined8 FUN_1041ec61c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041ec650();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ec650; end: 1041ec767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec650(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113068c98));
  if (((undefined8 *)(unaff_x20 + _DAT_113068ca0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068ca0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113068ca8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068ca8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_113068cb0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041eeff0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041ec768; end: 1041ec97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041ec768(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  long alStack_70 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x0001041ed2e0(param_1,alStack_70,0x112d387f8,&UNK_10d902650);
  if (alStack_70[3] == 0) {
    func_0x00010006e7f4(alStack_70);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,alStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_113068c98);
      lVar10 = *(long *)(lStack_78 + _DAT_113068c98);
      lVar5 = ((long *)(unaff_x20 + _DAT_113068ca0))[1];
      lVar6 = ((long *)(lStack_78 + _DAT_113068ca0))[1];
      uVar8 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_113068ca0);
        if (lVar3 == *(long *)(lStack_78 + _DAT_113068ca0) && lVar5 == lVar6) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar3;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_113068ca8))[1];
      lVar6 = ((long *)(lStack_78 + _DAT_113068ca8))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_113068ca8);
        if ((lVar3 == *(long *)(lStack_78 + _DAT_113068ca8)) && (lVar5 == lVar6)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar3;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_113068cb0) == 0) {
        lVar6 = *(long *)(lStack_78 + _DAT_113068cb0);
        lVar5 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_78);
        if (lVar6 == 0) {
          uVar1 = 1;
        }
        else {
          _objc_release(lVar5);
          uVar1 = 0;
        }
      }
      else {
        lVar5 = *(long *)(lStack_78 + _DAT_113068cb0);
        if (lVar5 == 0) {
          uVar4 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          uVar4 = 0;
          FUN_1041f00d0();
        }
        alStack_70[0] = lVar5;
        alStack_70[3] = uVar4;
        _objc_retain(lVar5);
        plVar2 = alStack_70;
        FUN_1041ef0c4(plVar2);
        uVar1 = (uint)plVar2;
        _objc_release(lStack_78);
        func_0x00010006e7f4(alStack_70);
      }
      if ((lVar9 == lVar10 & uVar8) == 1) {
        uVar7 = uVar7 & uVar1;
        goto LAB_1041ec954;
      }
    }
  }
  uVar7 = 0;
LAB_1041ec954:
  return uVar7 & 1;
}



/* Entry: 1041ec97c; end: 1041ec9fb; -[SCAppInstallParameters isEqual:] */

uint FUN_1041ec97c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041ec768(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041ec9fc; end: 1041ec9ff; -[SCAppInstallParameters copyWithZone:] */

void FUN_1041ec9fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041eca00; end: 1041ecb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041eca00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x44495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f505041,0xe600000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113068ca0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068ca0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454d414e5f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e5f505041,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113068ca8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068ca8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ef260);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ef280);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1041ecb6c; end: 1041ecbbb; -[SCAppInstallParameters encodeWithCoder:] */

void FUN_1041ecb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1041eca00(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041ecbbc; end: 1041ecbeb;  */

void FUN_1041ecbbc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041ecbec(param_1);
  return;
}



/* Entry: 1041ecbec; end: 1041ecf03;  */

undefined8 FUN_1041ecbec(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0x44495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f505041,0xe600000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar5);
  uVar5 = 0x454d414e5f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e5f505041,0xe800000000000000);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uVar5 = uStack_b0;
    if (iVar2 == 0) {
      uVar5 = 0;
      lVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ef260);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar8 = 0;
    uVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_a8;
    uVar7 = uStack_b0;
    if (iVar3 == 0) {
      uVar7 = 0;
      lVar8 = 0;
    }
  }
  uVar9 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ef280);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar10 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    FUN_1041f00d0(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar9,6);
    uVar9 = uStack_b0;
    if (iVar4 == 0) {
      uVar9 = 0;
    }
  }
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  func_0x00010bff33a0();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar9);
  return unaff_x20;
}



/* Entry: 1041ecf04; end: 1041ecf2b; -[SCAppInstallParameters initWithCoder:] */

void FUN_1041ecf04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1041ecbec();
  return;
}



/* Entry: 1041ecf2c; end: 1041ecf73; -[SCAppInstallParameters description] */

void FUN_1041ecf2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1041ecf74();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041ecf74; end: 1041ed1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1041ecf74(void)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  *puVar3 = *(undefined8 *)(unaff_x20 + _DAT_113068c98);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ca0);
  uVar6 = puVar1[1];
  uVar4 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ca8);
  uVar4 = puVar1[1];
  uVar7 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = uVar7;
  lVar2 = (long)*(int *)(lVar2 + 0x1c);
  lVar5 = *(long *)(unaff_x20 + _DAT_113068cb0);
  if (lVar5 == 0) {
    lVar5 = 0;
    func_0x000100b92194();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))((undefined1 *)((long)puVar3 + lVar2),1,1,lVar5);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(lVar5);
    _swift_bridgeObjectRetain(uVar6);
    func_0x0001041ef2a0((undefined1 *)((long)puVar3 + lVar2),lVar5);
    lVar5 = 0;
    func_0x000100b92194();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))((undefined1 *)((long)puVar3 + lVar2),0,1,lVar5);
  }
  func_0x0001041ed2a4(puVar3,&SUB_100b92084);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1041ed1d8; end: 1041ed253; -[SCAppInstallParameters init] */

void FUN_1041ed1d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AppImpressionServices/AppInstallParametersWrapper.swift",0x37,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041ed220);
  (*pcVar1)();
}



/* Entry: 1041ed254; end: 1041ed327; -[SCAppInstallParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ed254(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068ca0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068ca8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068cb0));
  return;
}



/* Entry: 1041ed328; end: 1041ed347;  */

void FUN_1041ed328(void)

{
  _objc_opt_self(&PTR_PTR_11298fe30);
  return;
}



/* Entry: 1041ed348; end: 1041ed393; -[SCAppInstallAAKAttribution compactJWS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ed348(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068ce0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068ce0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041ed394; end: 1041ed46b; -[SCAppInstallAAKAttribution reengagementURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ed394(long param_1)

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
  FUN_1041edca4(param_1 + _DAT_113813280,puVar4,0x112d36580,&UNK_10d9016d0);
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



/* Entry: 1041ed46c; end: 1041ed51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041ed46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ce0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1041edca4(param_3,unaff_x20 + _DAT_113813280,0x112d36580,&UNK_10d9016d0);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001041edcec(param_3,0x112d36580,&UNK_10d9016d0);
  return puVar2;
}



/* Entry: 1041ed51c; end: 1041ed65b; -[SCAppInstallAAKAttribution initWithCompactJWS:reengagementURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041ed51c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_50 - extraout_x8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_4);
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,param_4 == 0,1);
  puVar1 = (undefined8 *)(param_1 + _DAT_113068ce0);
  *puVar1 = param_3;
  puVar1[1] = puVar6;
  FUN_1041edca4(lVar3,param_1 + _DAT_113813280,0x112d36580,&UNK_10d9016d0);
  plVar5 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001041edcec(lVar3,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1041ed65c; end: 1041ed707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041ed65c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar5 = auStack_40;
  _objc_allocWithZone();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068ce0);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  lVar4 = 0;
  func_0x000100b92390();
  FUN_1041edca4((long)param_1 + (long)*(int *)(lVar4 + 0x14),unaff_x20 + _DAT_113813280,0x112d36580,
                &UNK_10d9016d0);
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar2);
  _objc_msgSendSuper2(auStack_40,puVar3);
  FUN_1041ed708(param_1);
  return puVar5;
}



/* Entry: 1041ed708; end: 1041ed743;  */

undefined8 FUN_1041ed708(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b92390();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041ed744; end: 1041ed777; -[SCAppInstallAAKAttribution hash] */

undefined8 FUN_1041ed744(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041ed778();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ed778; end: 1041ed8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ed778(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068ce0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068ce0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1041edca4(unaff_x20 + _DAT_113813280,puVar5,0x112d36580,&UNK_10d9016d0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x0001041edcec(puVar5,0x112d36580,&UNK_10d9016d0);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    puVar5 = puVar4;
    func_0x00010bfde980(puVar4);
    _objc_release(puVar4);
  }
  __ss6HasherV8_combineyySuF(puVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041ed8d4; end: 1041edca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041ed8d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lStack_a0;
  uint uStack_94;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar11 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar11 - extraout_x8_00;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar6 - extraout_x12;
  FUN_1041edca4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001041edcec(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_113068ce0);
      lStack_a0 = lVar11;
      lStack_90 = lVar5;
      if ((lVar1 == *(long *)(lStack_88 + _DAT_113068ce0)) &&
         (((long *)(unaff_x20 + _DAT_113068ce0))[1] == ((long *)(lStack_88 + _DAT_113068ce0))[1])) {
        uStack_94 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_94 = (uint)lVar1;
      }
      lVar1 = _DAT_113813280;
      FUN_1041edca4(lStack_88 + _DAT_113813280,lVar8,0x112d36580,&UNK_10d9016d0);
      lVar10 = (long)*(int *)(lVar10 + 0x30);
      FUN_1041edca4(unaff_x20 + lVar1,lVar4,0x112d36580,&UNK_10d9016d0);
      FUN_1041edca4(lVar8,lVar4 + lVar10,0x112d36580,&UNK_10d9016d0);
      pcVar7 = *(code **)(lStack_90 + 0x30);
      lVar1 = lVar4;
      (*pcVar7)(lVar4,1,lVar2);
      if ((int)lVar1 == 1) {
        _objc_release(lStack_88);
        func_0x0001041edcec(lVar8,0x112d36580,&UNK_10d9016d0);
        lVar10 = lVar4 + lVar10;
        (*pcVar7)(lVar10,1,lVar2);
        if ((int)lVar10 == 1) {
          func_0x0001041edcec(lVar4,0x112d36580,&UNK_10d9016d0);
          uVar9 = 1;
        }
        else {
LAB_1041edbcc:
          func_0x0001041edcec(lVar4,0x112d7e680,&UNK_10d95e350);
          uVar9 = 0;
        }
      }
      else {
        FUN_1041edca4(lVar4,lVar6,0x112d36580,&UNK_10d9016d0);
        lVar1 = lVar4 + lVar10;
        (*pcVar7)(lVar1,1,lVar2);
        lVar11 = lStack_90;
        lVar5 = lStack_a0;
        if ((int)lVar1 == 1) {
          _objc_release(lStack_88);
          func_0x0001041edcec(lVar8,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lStack_90 + 8))(lVar6,lVar2);
          goto LAB_1041edbcc;
        }
        lVar1 = lStack_a0;
        (**(code **)(lStack_90 + 0x20))(lStack_a0,lVar4 + lVar10,lVar2);
        func_0x000101553b98();
        lVar10 = lVar6;
        __sSQ2eeoiySbx_xtFZTj(lVar6,lVar5,lVar2,lVar1);
        uVar9 = (uint)lVar10;
        _objc_release(lStack_88);
        pcVar7 = *(code **)(lVar11 + 8);
        (*pcVar7)(lVar5,lVar2);
        func_0x0001041edcec(lVar8,0x112d36580,&UNK_10d9016d0);
        (*pcVar7)(lVar6,lVar2);
        func_0x0001041edcec(lVar4,0x112d36580,&UNK_10d9016d0);
      }
      uStack_94 = uStack_94 & uVar9;
      goto LAB_1041edc80;
    }
  }
  uStack_94 = 0;
LAB_1041edc80:
  return uStack_94 & 1;
}



/* Entry: 1041edca4; end: 1041edd2b;  */

undefined8 FUN_1041edca4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041edd2c; end: 1041eddbb; -[SCAppInstallAAKAttribution isEqual:] */

uint FUN_1041edd2c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041ed8d4(&uStack_40);
  _objc_release(param_1);
  func_0x0001041edcec(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1041eddbc; end: 1041eddbf; -[SCAppInstallAAKAttribution copyWithZone:] */

void FUN_1041eddbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041eddc0; end: 1041ede73; -[SCAppInstallAAKAttribution description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041eddc0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  
  lVar3 = 0;
  func_0x000100b92390();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar2);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068ce0))[1];
  *puVar4 = *(undefined8 *)(param_1 + _DAT_113068ce0);
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar2) = uVar1;
  FUN_1041edca4(param_1 + _DAT_113813280,(long)puVar4 + (long)*(int *)(lVar3 + 0x14),0x112d36580,
                &UNK_10d9016d0);
  _swift_bridgeObjectRetain(uVar1);
  FUN_1041ed708(puVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041ede74; end: 1041edeef; -[SCAppInstallAAKAttribution init] */

void FUN_1041ede74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AppImpressionServices/AppInstallAAKAttributionWrapper.swift",0x3b,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041edebc);
  (*pcVar1)();
}



/* Entry: 1041edef0; end: 1041edf3f; -[SCAppInstallAAKAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041edef0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068ce0 + 8));
  func_0x0001041edcec(param_1 + _DAT_113813280,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1041edf40; end: 1041edf47;  */

void FUN_1041edf40(void)

{
  if (lRam0000000113068d10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f57ac);
  return;
}



/* Entry: 1041edf48; end: 1041edf7f;  */

void FUN_1041edf48(undefined8 param_1)

{
  if (lRam0000000113068d10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f57ac);
  return;
}



/* Entry: 1041edf80; end: 1041edff7;  */

void FUN_1041edf80(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dce1700;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041edff8; end: 1041ee003; -[SCAppInstallAdContext adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041edff8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068d20);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068d20))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041ee004; end: 1041ee00f; -[SCAppInstallAdContext serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee004(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068d28);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068d28))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041ee010; end: 1041ee01b; -[SCAppInstallAdContext adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068d30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068d30))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041ee01c; end: 1041ee063;  */

void FUN_1041ee01c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041ee064; end: 1041ee073; -[SCAppInstallAdContext adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041ee064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068d38);
}



/* Entry: 1041ee074; end: 1041ee083; -[SCAppInstallAdContext impressionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068d40));
  return;
}



/* Entry: 1041ee084; end: 1041ee147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068d20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068d28);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068d30);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113068d38) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113068d40) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041ee148; end: 1041ee237; -[SCAppInstallAdContext initWithAdId:serveItemId:adRequestClientId:adProductType:impressionSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113068d20);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068d28);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068d30);
  *puVar1 = param_5;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + _DAT_113068d38) = param_6;
  *(undefined8 *)(param_1 + _DAT_113068d40) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 1041ee238; end: 1041ee317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee238(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  ulong uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068d20);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068d28);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068d30);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined8 *)(unaff_x20 + _DAT_113068d38) = param_1[6];
  uVar2 = (ulong)*(byte *)(param_1 + 7);
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000100402194(&uStack_60,auStack_70);
  FUN_1041f04bc();
  func_0x0001041eee90(param_1);
  *(ulong *)(unaff_x20 + _DAT_113068d40) = uVar2;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041ee318; end: 1041ee34b; -[SCAppInstallAdContext hash] */

undefined8 FUN_1041ee318(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041ee34c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ee34c; end: 1041ee46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee34c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068d20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068d20))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068d28);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068d28))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068d30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068d30))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113068d38));
  lVar3 = *(long *)(unaff_x20 + _DAT_113068d40);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(lVar3 + _DAT_113068db0));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041ee470; end: 1041ee617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041ee470(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar5 = &lStack_78;
    _swift_dynamicCast(plVar5,auStack_70,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_113068d20);
      if (lVar4 == *(long *)(lStack_78 + _DAT_113068d20) &&
          ((long *)(unaff_x20 + _DAT_113068d20))[1] == ((long *)(lStack_78 + _DAT_113068d20))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar4;
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_113068d28);
      if (lVar4 == *(long *)(lStack_78 + _DAT_113068d28) &&
          ((long *)(unaff_x20 + _DAT_113068d28))[1] == ((long *)(lStack_78 + _DAT_113068d28))[1]) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar2 = (uint)lVar4;
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_113068d30);
      if (lVar4 == *(long *)(lStack_78 + _DAT_113068d30) &&
          ((long *)(unaff_x20 + _DAT_113068d30))[1] == ((long *)(lStack_78 + _DAT_113068d30))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar4;
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113068d38);
      uVar10 = *(undefined8 *)(lStack_78 + _DAT_113068d38);
      uVar8 = *(undefined8 *)(lStack_78 + _DAT_113068d40);
      uVar6 = 0;
      FUN_1041f0550();
      auStack_70[0] = uVar8;
      lStack_58 = uVar6;
      _objc_retain(uVar8);
      puVar7 = auStack_70;
      FUN_1041f00f0(puVar7);
      _objc_release(lStack_78);
      func_0x00010006e7f4(auStack_70);
      return uVar1 & uVar2 & uVar3 & (uint)puVar7 & (uint)((int)uVar9 == (int)uVar10);
    }
  }
  return 0;
}



/* Entry: 1041ee618; end: 1041ee697; -[SCAppInstallAdContext isEqual:] */

uint FUN_1041ee618(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041ee470(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041ee698; end: 1041ee69b; -[SCAppInstallAdContext copyWithZone:] */

void FUN_1041ee698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041ee69c; end: 1041ee857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ee69c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113068d20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113068d20))[1]);
  uVar1 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113068d28);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113068d28))[1]);
  uVar1 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068d30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068d30))[1]);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1ef320);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1041ee858; end: 1041ee8a7; -[SCAppInstallAdContext encodeWithCoder:] */

void FUN_1041ee858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1041ee69c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041ee8a8; end: 1041ee8d7;  */

void FUN_1041ee8a8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041ee8d8(param_1);
  return;
}



/* Entry: 1041ee8d8; end: 1041eed4f;  */

undefined8 FUN_1041ee8d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
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
  
  uVar4 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar6 = &uStack_b0;
    _swift_dynamicCast(puVar6,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a8;
    uVar4 = uStack_b0;
    if (((ulong)puVar6 & 1) == 0) {
LAB_1041eeb68:
      _objc_release(param_1);
      goto LAB_1041eeb94;
    }
    uVar7 = 0x54495f4556524553;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar3 = uStack_a8;
      uVar7 = uStack_b0;
      if (((ulong)puVar6 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar8 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50)
        ;
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (lVar5 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
          _swift_unknownObjectRelease(lVar5);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
LAB_1041eeb7c:
          _swift_bridgeObjectRelease(uVar3);
          goto LAB_1041eeb84;
        }
        puVar6 = &uStack_b0;
        _swift_dynamicCast(puVar6,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        uVar8 = uStack_b0;
        if (((ulong)puVar6 & 1) == 0) {
          _objc_release(param_1);
        }
        else {
          uVar9 = 0x55444f52505f4441;
          uVar10 = 0x545f5443;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
          func_0x00010bf66f40();
          _objc_release(uVar9);
          func_0x000102d02a38();
          if ((uVar10 & 0xff) == 1) {
            _swift_bridgeObjectRelease(uVar2);
            _swift_bridgeObjectRelease(uVar3);
            _swift_bridgeObjectRelease(uStack_a8);
            goto LAB_1041eeb68;
          }
          uVar9 = 0xd000000000000011;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000011,0x800000010f1ef320);
          lVar5 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          if (lVar5 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
            _swift_unknownObjectRelease(lVar5);
          }
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            _objc_release(param_1);
            _swift_bridgeObjectRelease(uStack_a8);
            goto LAB_1041eeb7c;
          }
          uVar9 = 0;
          FUN_1041f0550(0);
          puVar6 = &uStack_b0;
          _swift_dynamicCast(puVar6,&uStack_80,puVar1 + 8,uVar9,6);
          if (((ulong)puVar6 & 1) != 0) {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar2);
            _swift_bridgeObjectRelease(uVar2);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar3);
            _swift_bridgeObjectRelease(uVar3);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uStack_a8);
            _swift_bridgeObjectRelease(uStack_a8);
            func_0x00010bff1720();
            _objc_release(uVar4);
            _objc_release(uVar7);
            _objc_release(uVar8);
            _objc_release(param_1);
            _objc_release(uStack_b0);
            return unaff_x20;
          }
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uStack_a8);
        }
        _swift_bridgeObjectRelease(uVar3);
      }
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1041eeb94;
    }
    _objc_release(param_1);
LAB_1041eeb84:
    _swift_bridgeObjectRelease(uVar2);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_1041eeb94:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1041eed50; end: 1041eed77; -[SCAppInstallAdContext initWithCoder:] */

void FUN_1041eed50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1041ee8d8();
  return;
}



/* Entry: 1041eed78; end: 1041eedaf; -[SCAppInstallAdContext description] */

void FUN_1041eed78(void)

{
  undefined1 auStack_50 [64];
  
  _objc_retain();
  FUN_1041eeec4(auStack_50);
  func_0x0001041eee90(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041eedb0; end: 1041eee2b; -[SCAppInstallAdContext init] */

void FUN_1041eedb0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AppImpressionServices/AppInstallAdContextWrapper.swift",0x36,2,0x74,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041eedf8);
  (*pcVar1)();
}



/* Entry: 1041eee2c; end: 1041eeec3; -[SCAppInstallAdContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041eee2c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068d20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068d28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068d30 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068d40));
  return;
}



/* Entry: 1041eeec4; end: 1041eef9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041eeec4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113068d20);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113068d20))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113068d28);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113068d28))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_113068d30);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113068d30))[1];
  uVar9 = *(undefined8 *)(param_2 + _DAT_113068d38);
  lVar8 = *(long *)(param_2 + _DAT_113068d40);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _objc_retain();
  _objc_release(param_2);
  uVar7 = *(undefined1 *)(lVar8 + _DAT_113068db0);
  _objc_release(lVar8);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar9;
  *(undefined1 *)(param_1 + 7) = uVar7;
  return;
}



/* Entry: 1041eefa0; end: 1041eefbf;  */

void FUN_1041eefa0(void)

{
  _objc_opt_self(&PTR_PTR_11298fff0);
  return;
}



/* Entry: 1041eefc0; end: 1041eefef;  */

void FUN_1041eefc0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041ef550(param_1);
  return;
}



/* Entry: 1041eeff0; end: 1041ef0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041eeff0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  FUN_1041ee34c();
  __ss6HasherV8_combineyySuF();
  if (*(long *)(unaff_x20 + _DAT_113068d78) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041f0758();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_113068d80) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041ed778();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041ef0c4; end: 1041ef41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041ef0c4(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  long lStack_68;
  long alStack_60 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x0001041effc4(param_1,alStack_60,0x112d387f8,&UNK_10d902650);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,alStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = *(long *)(lStack_68 + _DAT_113068d70);
      uVar2 = 0;
      FUN_1041eefa0();
      alStack_60[0] = lVar5;
      alStack_60[3] = uVar2;
      _objc_retain(lVar5);
      uVar3 = 0;
      FUN_1041ee470();
      func_0x00010006e7f4(alStack_60);
      if (*(long *)(unaff_x20 + _DAT_113068d78) == 0) {
        uVar4 = (uint)(*(long *)(lStack_68 + _DAT_113068d78) == 0);
      }
      else {
        lVar5 = *(long *)(lStack_68 + _DAT_113068d78);
        if (lVar5 == 0) {
          uVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar2 = 0;
          FUN_1041f3174();
        }
        alStack_60[0] = lVar5;
        alStack_60[3] = uVar2;
        _objc_retain(lVar5);
        plVar1 = alStack_60;
        FUN_1041f0ad4(plVar1);
        uVar4 = (uint)plVar1;
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_113068d80) == 0) {
        lVar7 = *(long *)(lStack_68 + _DAT_113068d80);
        lVar5 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 == 0) {
          uVar6 = 1;
        }
        else {
          _objc_release(lVar5);
          uVar6 = 0;
        }
      }
      else {
        lVar5 = *(long *)(lStack_68 + _DAT_113068d80);
        if (lVar5 == 0) {
          uVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar2 = 0;
          FUN_1041edf48();
        }
        alStack_60[0] = lVar5;
        alStack_60[3] = uVar2;
        _objc_retain(lVar5);
        plVar1 = alStack_60;
        FUN_1041ed8d4(plVar1);
        uVar6 = (uint)plVar1;
        _objc_release(lStack_68);
        func_0x00010006e7f4(alStack_60);
      }
      if ((uVar3 & 1) != 0) {
        uVar4 = uVar4 & uVar6;
        goto LAB_1041ef284;
      }
    }
  }
  uVar4 = 0;
LAB_1041ef284:
  return uVar4 & 1;
}



/* Entry: 1041ef41c; end: 1041ef42b; -[SCAppInstallAdNetworkAttribution adContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ef41c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068d70));
  return;
}



/* Entry: 1041ef42c; end: 1041ef43b; -[SCAppInstallAdNetworkAttribution skanAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ef42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068d78));
  return;
}



/* Entry: 1041ef43c; end: 1041ef44b; -[SCAppInstallAdNetworkAttribution aakAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ef43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068d80));
  return;
}



/* Entry: 1041ef44c; end: 1041ef4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ef44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068d70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113068d78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113068d80) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041ef4c0; end: 1041ef54f; -[SCAppInstallAdNetworkAttribution initWithAdContext:skanAttribution:aakAttribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ef4c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113068d70) = param_3;
  *(undefined8 *)(param_1 + _DAT_113068d78) = param_4;
  *(undefined8 *)(param_1 + _DAT_113068d80) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1041ef550; end: 1041ef95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041ef550(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8;
  undefined8 *puVar17;
  long extraout_x8_00;
  long lVar18;
  long lVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar20;
  long extraout_x12;
  long unaff_x20;
  long *plVar21;
  long alStack_f0 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  uint uStack_cc;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  lVar9 = 0;
  func_0x000100b92390();
  lVar16 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = (undefined8 *)((long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0x112dd1458;
  puStack_e0 = puVar17;
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar17 - extraout_x8_00;
  lVar11 = 0;
  func_0x000100b922c8();
  lVar19 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_f0[1] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12;
  lVar10 = 0x112dd1600;
  alStack_f0[0] = lVar20;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_02;
  uVar2 = *param_1;
  uVar5 = param_1[1];
  uVar3 = param_1[2];
  uVar6 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = param_1[5];
  uStack_d8 = param_1[6];
  uStack_cc = (uint)*(byte *)(param_1 + 7);
  lVar12 = 0;
  FUN_1041eefa0();
  lVar10 = lVar12;
  _objc_allocWithZone();
  puVar17 = (undefined8 *)(lVar10 + _DAT_113068d20);
  *puVar17 = uVar2;
  puVar17[1] = uVar5;
  puVar17 = (undefined8 *)(lVar10 + _DAT_113068d28);
  *puVar17 = uVar3;
  puVar17[1] = uVar6;
  puVar17 = (undefined8 *)(lVar10 + _DAT_113068d30);
  *puVar17 = uVar4;
  puVar17[1] = uVar7;
  *(undefined8 *)(lVar10 + _DAT_113068d38) = uStack_d8;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  uVar13 = (ulong)uStack_cc;
  FUN_1041f04bc();
  *(ulong *)(lVar10 + _DAT_113068d40) = uVar13;
  plVar21 = &lStack_70;
  lStack_70 = lVar10;
  lStack_68 = lVar12;
  _objc_msgSendSuper2(plVar21,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113068d70) = plVar21;
  lVar14 = 0;
  func_0x000100b92194();
  func_0x0001041effc4((long)param_1 + (long)*(int *)(lVar14 + 0x14),lVar20,0x112dd1600,
                      &UNK_10d992a30);
  lVar12 = lVar20;
  (**(code **)(lVar19 + 0x30))(lVar20,1,lVar11);
  lVar10 = alStack_f0[0];
  lVar11 = 0;
  if ((int)lVar12 != 1) {
    func_0x0001041f000c(lVar20,alStack_f0[0],&SUB_100b922c8);
    lVar11 = alStack_f0[1];
    func_0x0001041f0050(lVar10,alStack_f0[1]);
    FUN_1041f3174(0);
    _objc_allocWithZone();
    func_0x0001041f1cb4();
    func_0x0001041f0094(lVar10,&SUB_100b922c8);
  }
  *(long *)(unaff_x20 + _DAT_113068d78) = lVar11;
  func_0x0001041effc4((long)param_1 + (long)*(int *)(lVar14 + 0x18),lVar18,0x112dd1458,
                      &UNK_10d992550);
  lVar10 = lVar18;
  (**(code **)(lVar16 + 0x30))(lVar18,1,lVar9);
  puVar17 = puStack_e0;
  if ((int)lVar10 == 1) {
    plVar21 = (long *)0x0;
  }
  else {
    func_0x0001041f000c(lVar18,puStack_e0,&SUB_100b92390);
    lVar11 = 0;
    FUN_1041edf48();
    lVar10 = lVar11;
    _objc_allocWithZone();
    uVar2 = puVar17[1];
    puVar1 = (undefined8 *)(lVar10 + _DAT_113068ce0);
    *puVar1 = *puVar17;
    puVar1[1] = uVar2;
    func_0x0001041effc4((long)puVar17 + (long)*(int *)(lVar9 + 0x14),lVar10 + _DAT_113813280,
                        0x112d36580,&UNK_10d9016d0);
    puVar8 = PTR_s_init_1125d9248;
    lStack_90 = lVar10;
    lStack_88 = lVar11;
    _swift_bridgeObjectRetain(uVar2);
    plVar21 = &lStack_90;
    _objc_msgSendSuper2(plVar21,puVar8);
    func_0x0001041f0094(puVar17,&SUB_100b92390);
  }
  *(long **)(unaff_x20 + _DAT_113068d80) = plVar21;
  puVar15 = auStack_80;
  _objc_msgSendSuper2(puVar15,PTR_s_init_1125d9248);
  func_0x0001041f0094(param_1,&SUB_100b92194);
  return puVar15;
}



/* Entry: 1041ef95c; end: 1041ef98f; -[SCAppInstallAdNetworkAttribution hash] */

undefined8 FUN_1041ef95c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041eeff0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ef990; end: 1041efa0f; -[SCAppInstallAdNetworkAttribution isEqual:] */

uint FUN_1041ef990(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041ef0c4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041efa10; end: 1041efa13; -[SCAppInstallAdNetworkAttribution copyWithZone:] */

void FUN_1041efa10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041efa14; end: 1041efb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041efa14(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x45544e4f435f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45544e4f435f4441,0xea00000000005458);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1ef380);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x525454415f4b4141;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525454415f4b4141,0xef4e4f4954554249);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1041efb08; end: 1041efb57; -[SCAppInstallAdNetworkAttribution encodeWithCoder:] */

void FUN_1041efb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1041efa14(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041efb58; end: 1041efb87;  */

void FUN_1041efb58(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041efb88(param_1);
  return;
}



/* Entry: 1041efb88; end: 1041efe4b;  */

undefined8 FUN_1041efb88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  uVar2 = 0x45544e4f435f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45544e4f435f4441,0xea00000000005458);
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
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar2 = 0;
    FUN_1041eefa0(0);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_98;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1ef380);
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
        FUN_1041f3174(0);
        puVar4 = &uStack_98;
        _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
        uVar5 = uStack_98;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = 0x525454415f4b4141;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525454415f4b4141,0xef4e4f4954554249);
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
        FUN_1041edf48(0);
        puVar4 = &uStack_98;
        _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
        uVar6 = uStack_98;
        if ((int)puVar4 == 0) {
          uVar6 = 0;
        }
      }
      func_0x00010bff13a0();
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar6);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1041efe4c; end: 1041efe73; -[SCAppInstallAdNetworkAttribution initWithCoder:] */

void FUN_1041efe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1041efb88();
  return;
}



/* Entry: 1041efe74; end: 1041efeff; -[SCAppInstallAdNetworkAttribution description] */

void FUN_1041efe74(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b92194();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x0001041ef2a0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001041f0094(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      &SUB_100b92194);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041eff00; end: 1041eff7b; -[SCAppInstallAdNetworkAttribution init] */

void FUN_1041eff00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AppImpressionServices/AppInstallAdNetworkAttributionWrapper.swift",0x41,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041eff48);
  (*pcVar1)();
}



/* Entry: 1041eff7c; end: 1041f00cf; -[SCAppInstallAdNetworkAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041eff7c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068d70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068d78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068d80));
  return;
}



/* Entry: 1041f00d0; end: 1041f00ef;  */

void FUN_1041f00d0(void)

{
  _objc_opt_self(&PTR_PTR_1129900e0);
  return;
}



/* Entry: 1041f00f0; end: 1041f018f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1041f00f0(undefined8 param_1)

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
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113068db0);
      cVar2 = *(char *)(lStack_58 + _DAT_113068db0);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1041f0190; end: 1041f0263;  */

void FUN_1041f0190(void)

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



/* Entry: 1041f0264; end: 1041f0283;  */

void FUN_1041f0264(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041f0284; end: 1041f029f; -[SCAppInstallImpressionSource description] */

void FUN_1041f0284(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f02a0; end: 1041f02e7; -[SCAppInstallImpressionSource init] */

void FUN_1041f02a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AppImpressionServices/AppInstallImpressionSourceWrapper.swift",0x3d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f02e8);
  (*pcVar1)();
}



/* Entry: 1041f02e8; end: 1041f032f; -[SCAppInstallImpressionSource hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f02e8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_113068db0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041f0330; end: 1041f03af; -[SCAppInstallImpressionSource isEqual:] */

uint FUN_1041f0330(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041f00f0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041f03b0; end: 1041f03b3; -[SCAppInstallImpressionSource copyWithZone:] */

void FUN_1041f03b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041f03b4; end: 1041f03bb; +[SCAppInstallImpressionSource defaultSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f03b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113068db0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


