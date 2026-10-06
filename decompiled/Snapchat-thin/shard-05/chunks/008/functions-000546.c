/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041c15e8; end: 1041c174f; -[SCAdInternalWebViewAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c15e8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113067ff0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068000 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113068008 + 8))
  ;
  return;
}



/* Entry: 1041c1750; end: 1041c176f;  */

void FUN_1041c1750(void)

{
  _objc_opt_self(&PTR_PTR_11298ec88);
  return;
}



/* Entry: 1041c1770; end: 1041c179f;  */

void FUN_1041c1770(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001041c1ef8(param_1);
  return;
}



/* Entry: 1041c17a0; end: 1041c189f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c17a0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_1138131d8);
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_1138131e0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041c27b4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_1138131e8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_1138131f0));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041c18a0; end: 1041c1b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041c18a0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lStack_68;
  long alStack_60 [4];
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x0001041c2494(param_1,alStack_60,0x112d387f8,&UNK_10d902650);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,alStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_1138131d8;
      __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar2,lStack_68 + _DAT_1138131d8);
      if (*(long *)(unaff_x20 + _DAT_1138131e0) == 0) {
        uVar7 = (uint)(*(long *)(lStack_68 + _DAT_1138131e0) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_68 + _DAT_1138131e0);
        if (lVar8 == 0) {
          lVar4 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_1041c32b4();
        }
        alStack_60[0] = lVar8;
        alStack_60[3] = lVar4;
        _objc_retain(lVar8);
        uVar7 = 0;
        func_0x0001041c2884();
        func_0x00010006e7f4(alStack_60);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_1138131e8);
      if (lVar8 == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_1138131e8) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar8;
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1138131f0);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_1138131f0);
      _objc_retain(uVar5);
      func_0x00010c071ae0(uVar6);
      _objc_release(uVar5);
      _objc_release(lStack_68);
      if (((uint)lVar2 & uVar7 & 1) != 0) {
        return uVar1 & (uint)uVar6;
      }
    }
  }
  return 0;
}



/* Entry: 1041c1b58; end: 1041c1bef; -[SCAdDeepLinkAttachment uri] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c1b58(long param_1)

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
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138131d8,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1041c1bf0; end: 1041c1bff; -[SCAdDeepLinkAttachment fallbackAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c1bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138131e0));
  return;
}



/* Entry: 1041c1c00; end: 1041c1c0f; -[SCAdDeepLinkAttachment callbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c1c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138131e8));
  return;
}



/* Entry: 1041c1c10; end: 1041c1c1f; -[SCAdDeepLinkAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c1c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138131f0));
  return;
}



/* Entry: 1041c1c20; end: 1041c1dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1041c1c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  _objc_allocWithZone();
  lVar1 = _DAT_1138131d8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_1138131e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1138131e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1138131f0) = param_4;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 1041c1dd0; end: 1041c214b; -[SCAdDeepLinkAttachment initWithUri:fallbackAttachment:callbacks:commonAdConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041c1dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_3);
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_1138131d8,lVar5,lVar3);
  *(undefined8 *)(param_1 + _DAT_1138131e0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1138131e8) = param_5;
  *(undefined8 *)(param_1 + _DAT_1138131f0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar4 = &lStack_70;
  _objc_msgSendSuper2(plVar4,puVar1);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 1041c214c; end: 1041c217f; -[SCAdDeepLinkAttachment hash] */

undefined8 FUN_1041c214c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c17a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c2180; end: 1041c21ff; -[SCAdDeepLinkAttachment isEqual:] */

uint FUN_1041c2180(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041c18a0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041c2200; end: 1041c2203; -[SCAdDeepLinkAttachment copyWithZone:] */

void FUN_1041c2200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c2204; end: 1041c224b; -[SCAdDeepLinkAttachment description] */

void FUN_1041c2204(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1041c224c();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041c224c; end: 1041c23ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1041c224c(void)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 auStack_b0 [14];
  
  lVar4 = 0;
  func_0x000100b919a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = _DAT_1138131d8;
  lVar7 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar7,unaff_x20 + lVar6,lVar5);
  iVar3 = *(int *)(lVar4 + 0x14);
  bVar2 = *(long *)(unaff_x20 + _DAT_1138131e0) == 0;
  if (!bVar2) {
    _objc_retain();
    FUN_1041c25dc(lVar7 + iVar3);
  }
  lVar6 = 0;
  func_0x000100b91acc();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar7 + iVar3,bVar2,1,lVar6);
  *(undefined8 *)(lVar7 + *(int *)(lVar4 + 0x18)) = *(undefined8 *)(unaff_x20 + _DAT_1138131e8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_1138131f0);
  _objc_retain();
  _objc_retain(uVar8);
  FUN_1041be610(auStack_b0);
  _objc_release(uVar8);
  puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar4 + 0x1c));
  puVar1[9] = auStack_b0[9];
  puVar1[8] = auStack_b0[8];
  puVar1[0xb] = auStack_b0[0xb];
  puVar1[10] = auStack_b0[10];
  puVar1[0xd] = auStack_b0[0xd];
  puVar1[0xc] = auStack_b0[0xc];
  puVar1[1] = auStack_b0[1];
  *puVar1 = auStack_b0[0];
  puVar1[3] = auStack_b0[3];
  puVar1[2] = auStack_b0[2];
  puVar1[5] = auStack_b0[5];
  puVar1[4] = auStack_b0[4];
  puVar1[7] = auStack_b0[7];
  puVar1[6] = auStack_b0[6];
  func_0x0001041c24dc(lVar7,&SUB_100b919a8);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1041c23ac; end: 1041c2427; -[SCAdDeepLinkAttachment init] */

void FUN_1041c23ac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdDeepLinkAttachmentWrapper.swift",0x3a,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c23f4);
  (*pcVar1)();
}



/* Entry: 1041c2428; end: 1041c2517; -[SCAdDeepLinkAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c2428(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1138131d8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138131e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138131e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1138131f0));
  return;
}



/* Entry: 1041c2518; end: 1041c251f;  */

void FUN_1041c2518(void)

{
  if (lRam0000000113068068 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f4f94);
  return;
}



/* Entry: 1041c2520; end: 1041c2557;  */

void FUN_1041c2520(undefined8 param_1)

{
  if (lRam0000000113068068 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f4f94);
  return;
}



/* Entry: 1041c2558; end: 1041c25db;  */

void FUN_1041c2558(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dce0750;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10dce0750;
    _swift_updateClassMetadata2(param_1,0x100,4,&lStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041c25dc; end: 1041c27b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c25dc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12_00;
  lVar1 = 0;
  func_0x000100b91acc();
  lVar7 = *(long *)(lVar1 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)(lVar5,1,1,lVar1);
  if (*(char *)(param_2 + _DAT_113068078) == '\x01') {
    if (*(long *)(param_2 + _DAT_113068080) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1041c27b0);
      (*pcVar8)();
    }
    _objc_retain();
    FUN_1041c9838(lVar6);
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_2 + _DAT_113068088) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1041c27b4);
      (*pcVar8)();
    }
    _objc_retain();
    func_0x0001041bfd04(lVar6);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(lVar6,lVar1,uVar3);
  (*pcVar8)(lVar6,0,1,lVar1);
  func_0x0001041c2e8c(lVar6,lVar5);
  FUN_1041c322c(lVar5,puVar4,0x112d3b128,&UNK_10d996bb0);
  puVar2 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 != 1) {
    _objc_release(param_2);
    FUN_1041c347c(puVar4,param_1,&SUB_100b91acc);
    func_0x0001041c3274(lVar5,0x112d3b128,&UNK_10d996bb0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1041c27ac);
  (*pcVar8)();
}



/* Entry: 1041c27b4; end: 1041c2a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c27b4(void)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_113068078);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113068088) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041bf808();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113068080) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041c9430();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041c2a34; end: 1041c2adf;  */

void FUN_1041c2a34(void)

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



/* Entry: 1041c2ae0; end: 1041c2b1f;  */

void FUN_1041c2ae0(undefined1 *param_1,long *param_2)

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



/* Entry: 1041c2b20; end: 1041c2bab; -[SCAdAttachmentDeepLinkFallbackAttachment description] */

void FUN_1041c2b20(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1041c25dc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001041c3504(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      &SUB_100b91acc);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c2bac; end: 1041c2bf3; -[SCAdAttachmentDeepLinkFallbackAttachment init] */

void FUN_1041c2bac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAttachmentDeepLinkFallbackAttachmentWrapper.swift",0x4c,2,
             0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c2bf4);
  (*pcVar1)();
}



/* Entry: 1041c2bf4; end: 1041c2c27; -[SCAdAttachmentDeepLinkFallbackAttachment hash] */

undefined8 FUN_1041c2bf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c27b4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c2c28; end: 1041c2cb7; -[SCAdAttachmentDeepLinkFallbackAttachment isEqual:] */

uint FUN_1041c2c28(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001041c2884(&uStack_40);
  _objc_release(param_1);
  func_0x0001041c3274(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1041c2cb8; end: 1041c2cbb; -[SCAdAttachmentDeepLinkFallbackAttachment copyWithZone:] */

void FUN_1041c2cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c2cbc; end: 1041c2d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c2cbc(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113068078) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113068088) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113068080) = 0;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_30,puVar1);
  return;
}



/* Entry: 1041c2d2c; end: 1041c2e13; +[SCAdAttachmentDeepLinkFallbackAttachment webViewWithWebView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c2d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113068078) = 0;
  *(undefined8 *)(lVar2 + _DAT_113068088) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113068080) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c2e14; end: 1041c2edb; +[SCAdAttachmentDeepLinkFallbackAttachment appInstallWithAppInstall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c2e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113068078) = 1;
  *(undefined8 *)(lVar2 + _DAT_113068088) = 0;
  *(undefined8 *)(lVar2 + _DAT_113068080) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c2edc; end: 1041c2f27; -[SCAdAttachmentDeepLinkFallbackAttachment matchWebView:appInstall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c2edc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113068078) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113068080) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c2f08);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113068088) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c2f28);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001041c2f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1041c2f28; end: 1041c2f5b;  */

void FUN_1041c2f28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041c2f5c; end: 1041c2f93; -[SCAdAttachmentDeepLinkFallbackAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c2f5c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068088));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068080));
  return;
}



/* Entry: 1041c2f94; end: 1041c322b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041c2f94(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar4 - extraout_x12;
  lVar1 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar9 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_00;
  lVar2 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x0001041c34c0(param_1,lVar10);
  lVar1 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar2);
  if ((int)lVar1 == 1) {
    puVar6 = &SUB_100b91790;
    func_0x0001041c347c(lVar10,lVar7,&SUB_100b91790);
    func_0x0001041c34c0(lVar7,lVar4,&SUB_100b91790);
    uVar3 = 0;
    FUN_1041ca2d4(0);
    _objc_allocWithZone();
    func_0x0001041c9d38(lVar4,uVar3);
    lVar1 = lVar4;
    FUN_1041c32b4();
    lVar8 = lVar1;
    _objc_allocWithZone();
    *(undefined1 *)(lVar8 + _DAT_113068078) = 1;
    *(undefined8 *)(lVar8 + _DAT_113068088) = 0;
    *(long *)(lVar8 + _DAT_113068080) = lVar4;
    plVar5 = &lStack_60;
    lStack_60 = lVar8;
    lStack_58 = lVar1;
    _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
    func_0x0001041c3504(param_1,&SUB_100b91acc);
    lVar8 = lVar7;
  }
  else {
    puVar6 = &SUB_100b915bc;
    func_0x0001041c347c(lVar10,lVar8,&SUB_100b915bc);
    func_0x0001041c34c0(lVar8,lVar9,&SUB_100b915bc);
    FUN_1041c0a38(0);
    _objc_allocWithZone();
    func_0x0001041c04ec();
    lVar1 = lVar9;
    FUN_1041c32b4();
    lVar2 = lVar1;
    _objc_allocWithZone();
    *(undefined1 *)(lVar2 + _DAT_113068078) = 0;
    *(long *)(lVar2 + _DAT_113068088) = lVar9;
    *(undefined8 *)(lVar2 + _DAT_113068080) = 0;
    plVar5 = &lStack_70;
    lStack_70 = lVar2;
    lStack_68 = lVar1;
    _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
    func_0x0001041c3504(param_1,&SUB_100b91acc);
  }
  func_0x0001041c3504(lVar8,puVar6);
  return plVar5;
}



/* Entry: 1041c322c; end: 1041c32b3;  */

undefined8 FUN_1041c322c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041c32b4; end: 1041c32d3;  */

void FUN_1041c32b4(void)

{
  _objc_opt_self(&PTR_PTR_11298ee78);
  return;
}



/* Entry: 1041c32d4; end: 1041c343b;  */

int FUN_1041c32d4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041c3350;
        goto LAB_1041c3334;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041c3334:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1041c3350:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041c343c; end: 1041c347b;  */

void FUN_1041c343c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130680b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce07d0;
  _swift_getWitnessTable(&UNK_10dce07d0,&UNK_11074fce8);
  puRam00000001130680b8 = puVar1;
  return;
}



/* Entry: 1041c347c; end: 1041c353f;  */

undefined8 FUN_1041c347c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041c3540; end: 1041c3547;  */

void FUN_1041c3540(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100db4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 1041c3548; end: 1041c365b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041c3548(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_150 [8];
  undefined1 auStack_140 [112];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_150;
  _objc_allocWithZone();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130680c0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_1130680c8) = uStack_58;
  uStack_98 = param_1[10];
  uStack_a0 = param_1[9];
  uStack_88 = param_1[0xc];
  uStack_90 = param_1[0xb];
  uStack_78 = param_1[0xe];
  uStack_80 = param_1[0xd];
  uStack_68 = param_1[0x10];
  uStack_70 = param_1[0xf];
  uStack_c8 = param_1[4];
  uStack_d0 = param_1[3];
  uStack_b8 = param_1[6];
  uStack_c0 = param_1[5];
  uStack_a8 = param_1[8];
  uStack_b0 = param_1[7];
  func_0x0001041bd148(0);
  _objc_allocWithZone();
  func_0x000100402194(&uStack_50,auStack_140);
  FUN_1041c39f4(&uStack_58,auStack_140,0x1130680d0,&UNK_10dce0870);
  func_0x000100e3eca0(&uStack_d0,auStack_140);
  puVar1 = &uStack_d0;
  FUN_1041bd2b8();
  *(undefined8 **)(unaff_x20 + _DAT_1130680d8) = puVar1;
  _objc_msgSendSuper2(auStack_150,PTR_s_init_1125d9248);
  func_0x000104191a34(param_1);
  return puVar2;
}



/* Entry: 1041c365c; end: 1041c371f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c365c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130680c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130680c0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130680c8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_1130680d8));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041c3720; end: 1041c3863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041c3720(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  FUN_1041c39f4(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar6 = *(ulong *)(unaff_x20 + _DAT_1130680c0);
      if (uVar6 == *(ulong *)(lStack_68 + _DAT_1130680c0) &&
          ((ulong *)(unaff_x20 + _DAT_1130680c0))[1] == ((ulong *)(lStack_68 + _DAT_1130680c0))[1])
      {
        uVar6 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_1130680c8);
      if (lVar3 == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_1130680c8) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar3;
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130680d8);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_1130680d8);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_68);
      if ((uVar6 & 1) != 0) {
        return uVar1 & (uint)uVar5;
      }
    }
  }
  return 0;
}



/* Entry: 1041c3864; end: 1041c38af; -[SCAdAdToCallAttachment phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c3864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130680c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130680c0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c38b0; end: 1041c38bf; -[SCAdAdToCallAttachment callbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c38b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130680c8));
  return;
}



/* Entry: 1041c38c0; end: 1041c38cf; -[SCAdAdToCallAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c38c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130680d8));
  return;
}



/* Entry: 1041c38d0; end: 1041c3953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c38d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130680c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130680c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130680d8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041c3954; end: 1041c39f3; -[SCAdAdToCallAttachment initWithPhoneNumber:callbacks:commonAdConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c3954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130680c0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130680c8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130680d8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1041c39f4; end: 1041c3a3b;  */

undefined8 FUN_1041c39f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041c3a3c; end: 1041c3a6f; -[SCAdAdToCallAttachment hash] */

undefined8 FUN_1041c3a3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c365c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c3a70; end: 1041c3aef; -[SCAdAdToCallAttachment isEqual:] */

uint FUN_1041c3a70(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041c3720(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041c3af0; end: 1041c3af3; -[SCAdAdToCallAttachment copyWithZone:] */

void FUN_1041c3af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c3af4; end: 1041c3b8f; -[SCAdAdToCallAttachment description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c3af4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [112];
  
  uStack_b8 = *(undefined8 *)(param_1 + _DAT_1130680c0);
  uStack_b0 = ((undefined8 *)(param_1 + _DAT_1130680c0))[1];
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130680c8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130680d8);
  uStack_a8 = uVar1;
  _swift_bridgeObjectRetain(uStack_b0);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  FUN_1041be610(auStack_a0);
  _objc_release(uVar2);
  func_0x000104191a34(&uStack_b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c3b90; end: 1041c3c0b; -[SCAdAdToCallAttachment init] */

void FUN_1041c3b90(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAdToCallAttachmentWrapper.swift",0x3a,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c3bd8);
  (*pcVar1)();
}



/* Entry: 1041c3c0c; end: 1041c3c57; -[SCAdAdToCallAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c3c0c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130680c0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130680c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130680d8));
  return;
}



/* Entry: 1041c3c58; end: 1041c3c77;  */

void FUN_1041c3c58(void)

{
  _objc_opt_self(&PTR_PTR_11298ef48);
  return;
}



/* Entry: 1041c3c78; end: 1041c3dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041c3c78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_160 [8];
  undefined1 auStack_150 [112];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_160;
  _objc_allocWithZone();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068108);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068110);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113068118) = uStack_68;
  uStack_a8 = param_1[0xc];
  uStack_b0 = param_1[0xb];
  uStack_98 = param_1[0xe];
  uStack_a0 = param_1[0xd];
  uStack_88 = param_1[0x10];
  uStack_90 = param_1[0xf];
  uStack_78 = param_1[0x12];
  uStack_80 = param_1[0x11];
  uStack_d8 = param_1[6];
  uStack_e0 = param_1[5];
  uStack_c8 = param_1[8];
  uStack_d0 = param_1[7];
  uStack_b8 = param_1[10];
  uStack_c0 = param_1[9];
  func_0x0001041bd148(0);
  _objc_allocWithZone();
  func_0x000100402194(&uStack_50,auStack_150);
  func_0x000100402194(&uStack_60,auStack_150);
  FUN_1041c4214(&uStack_68,auStack_150,0x113068120,&UNK_10dce08a0);
  func_0x000100e3eca0(&uStack_e0,auStack_150);
  puVar1 = &uStack_e0;
  FUN_1041bd2b8();
  *(undefined8 **)(unaff_x20 + _DAT_113068128) = puVar1;
  _objc_msgSendSuper2(auStack_160,PTR_s_init_1125d9248);
  func_0x000104191a00(param_1);
  return puVar2;
}



/* Entry: 1041c3dac; end: 1041c3ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c3dac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068108);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068108))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068110);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113068110))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113068118);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_113068128));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041c3ea4; end: 1041c4023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041c3ea4(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  FUN_1041c4214(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_113068108);
      if (lVar3 == *(long *)(lStack_68 + _DAT_113068108) &&
          ((long *)(unaff_x20 + _DAT_113068108))[1] == ((long *)(lStack_68 + _DAT_113068108))[1]) {
        uVar6 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar6 = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_113068110);
      if (lVar3 == *(long *)(lStack_68 + _DAT_113068110) &&
          ((long *)(unaff_x20 + _DAT_113068110))[1] == ((long *)(lStack_68 + _DAT_113068110))[1]) {
        uVar7 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar7 = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_113068118);
      if (lVar3 == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_113068118) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar3;
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113068128);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_113068128);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_68);
      if (((uVar6 | uVar7) & 1) == 0) {
        return uVar1 & (uint)uVar5;
      }
    }
  }
  return 0;
}



/* Entry: 1041c4024; end: 1041c402f; -[SCAdAdToMessageAttachment recipientPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4024(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068108);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068108))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c4030; end: 1041c403b; -[SCAdAdToMessageAttachment messageBody] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068110);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068110))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c403c; end: 1041c4083;  */

void FUN_1041c403c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041c4084; end: 1041c4093; -[SCAdAdToMessageAttachment callbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068118));
  return;
}



/* Entry: 1041c4094; end: 1041c40a3; -[SCAdAdToMessageAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068128));
  return;
}



/* Entry: 1041c40a4; end: 1041c4147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c40a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068108);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068110);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113068118) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113068128) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041c4148; end: 1041c4213; -[SCAdAdToMessageAttachment initWithRecipientPhoneNumber:messageBody:callbacks:commonAdConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113068108);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068110);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_113068118) = param_5;
  *(undefined8 *)(param_1 + _DAT_113068128) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1041c4214; end: 1041c425b;  */

undefined8 FUN_1041c4214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041c425c; end: 1041c428f; -[SCAdAdToMessageAttachment hash] */

undefined8 FUN_1041c425c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c3dac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c4290; end: 1041c430f; -[SCAdAdToMessageAttachment isEqual:] */

uint FUN_1041c4290(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041c3ea4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041c4310; end: 1041c4313; -[SCAdAdToMessageAttachment copyWithZone:] */

void FUN_1041c4310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c4314; end: 1041c43cb; -[SCAdAdToMessageAttachment description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [112];
  
  uStack_c8 = *(undefined8 *)(param_1 + _DAT_113068108);
  uStack_c0 = ((undefined8 *)(param_1 + _DAT_113068108))[1];
  uStack_b8 = *(undefined8 *)(param_1 + _DAT_113068110);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068110))[1];
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068118);
  uVar3 = *(undefined8 *)(param_1 + _DAT_113068128);
  uStack_b0 = uVar1;
  uStack_a8 = uVar2;
  _swift_bridgeObjectRetain(uStack_c0);
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  FUN_1041be610(auStack_a0);
  _objc_release(uVar3);
  func_0x000104191a00(&uStack_c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c43cc; end: 1041c4447; -[SCAdAdToMessageAttachment init] */

void FUN_1041c43cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAdToMessageAttachmentWrapper.swift",0x3d,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c4414);
  (*pcVar1)();
}



/* Entry: 1041c4448; end: 1041c44a7; -[SCAdAdToMessageAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4448(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068108 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068110 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068118));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068128));
  return;
}



/* Entry: 1041c44a8; end: 1041c44c7;  */

void FUN_1041c44a8(void)

{
  _objc_opt_self(&PTR_PTR_11298f020);
  return;
}



/* Entry: 1041c44c8; end: 1041c45df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041c44c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_140 [8];
  undefined1 auStack_130 [112];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_48;
  
  puVar2 = auStack_140;
  _objc_allocWithZone();
  uVar3 = *param_1;
  func_0x00010480d0b8(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain();
  func_0x00010480c4b8();
  *(undefined8 *)(unaff_x20 + _DAT_113068158) = uVar3;
  uStack_48 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113068160) = uStack_48;
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  func_0x0001041bd148(0);
  _objc_allocWithZone();
  FUN_1041c4908(&uStack_48,auStack_130,0x113068168,&UNK_10dce08d0);
  func_0x000100e3eca0(&uStack_c0,auStack_130);
  puVar1 = &uStack_c0;
  FUN_1041bd2b8();
  *(undefined8 **)(unaff_x20 + _DAT_113068170) = puVar1;
  _objc_msgSendSuper2(auStack_140,PTR_s_init_1125d9248);
  func_0x0001041919cc(param_1);
  return puVar2;
}



/* Entry: 1041c45e0; end: 1041c4687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c45e0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  func_0x00010480c868();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_113068160);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_113068170));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041c4688; end: 1041c47d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041c4688(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  FUN_1041c4908(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_113068158);
      uVar3 = 0;
      func_0x00010480d0b8();
      auStack_60[0] = uVar6;
      lStack_48 = uVar3;
      _objc_retain(uVar6);
      uVar4 = 0;
      func_0x00010480c8e0();
      func_0x00010006e7f4(auStack_60);
      lVar5 = *(long *)(unaff_x20 + _DAT_113068160);
      if (lVar5 == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_113068160) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar5;
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113068170);
      uVar3 = *(undefined8 *)(lStack_68 + _DAT_113068170);
      _objc_retain(uVar3);
      func_0x00010c071ae0(uVar6);
      _objc_release(uVar3);
      _objc_release(lStack_68);
      if ((uVar4 & 1) != 0) {
        return uVar1 & (uint)uVar6;
      }
    }
  }
  return 0;
}



/* Entry: 1041c47d4; end: 1041c47e3; -[SCAdSurveyAttachment survey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c47d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068158));
  return;
}



/* Entry: 1041c47e4; end: 1041c47f3; -[SCAdSurveyAttachment callbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c47e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068160));
  return;
}



/* Entry: 1041c47f4; end: 1041c4803; -[SCAdSurveyAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c47f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068170));
  return;
}



/* Entry: 1041c4804; end: 1041c4877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068158) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113068160) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113068170) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041c4878; end: 1041c4907; -[SCAdSurveyAttachment initWithSurvey:callbacks:commonAdConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113068158) = param_3;
  *(undefined8 *)(param_1 + _DAT_113068160) = param_4;
  *(undefined8 *)(param_1 + _DAT_113068170) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1041c4908; end: 1041c494f;  */

undefined8 FUN_1041c4908(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041c4950; end: 1041c4983; -[SCAdSurveyAttachment hash] */

undefined8 FUN_1041c4950(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c45e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c4984; end: 1041c4a03; -[SCAdSurveyAttachment isEqual:] */

uint FUN_1041c4984(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041c4688(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041c4a04; end: 1041c4a07; -[SCAdSurveyAttachment copyWithZone:] */

void FUN_1041c4a04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c4a08; end: 1041c4aaf; -[SCAdSurveyAttachment description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4a08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [112];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113068158);
  _objc_retain();
  _objc_retain();
  func_0x00010480cccc();
  uStack_a8 = *(undefined8 *)(param_1 + _DAT_113068160);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068170);
  uStack_b0 = uVar1;
  _objc_retain();
  _objc_retain(uVar2);
  FUN_1041be610(auStack_a0);
  _objc_release(param_1);
  _objc_release(uVar2);
  func_0x0001041919cc(&uStack_b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c4ab0; end: 1041c4b2b; -[SCAdSurveyAttachment init] */

void FUN_1041c4ab0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdSurveyAttachmentWrapper.swift",0x38,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c4af8);
  (*pcVar1)();
}



/* Entry: 1041c4b2c; end: 1041c4b73; -[SCAdSurveyAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4b2c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068158));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068160));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113068170));
  return;
}



/* Entry: 1041c4b74; end: 1041c4b93;  */

void FUN_1041c4b74(void)

{
  _objc_opt_self(&PTR_PTR_11298f100);
  return;
}



/* Entry: 1041c4b94; end: 1041c4c67;  */

void FUN_1041c4b94(void)

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



/* Entry: 1041c4c68; end: 1041c4c87;  */

void FUN_1041c4c68(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041c4c88; end: 1041c4ca7; -[SCAdAttachmentCallbacks description] */

void FUN_1041c4c88(void)

{
  FUN_1041c51a8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c4ca8; end: 1041c4cef; -[SCAdAttachmentCallbacks init] */

void FUN_1041c4ca8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAttachmentCallbacksWrapper.swift",0x3b,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c4cf0);
  (*pcVar1)();
}



/* Entry: 1041c4cf0; end: 1041c4cf7; -[SCAdAttachmentCallbacks copyWithZone:] */

void FUN_1041c4cf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c4cf8; end: 1041c4d37; +[SCAdAttachmentCallbacks webViewWithCallbacks:] */

void FUN_1041c4cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1041c51e0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1041c4d38; end: 1041c4d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c4d38(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1041c57dc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130681a0) = 1;
  *(undefined8 *)(lVar3 + _DAT_1130681a8) = 0;
  *(long *)(lVar3 + _DAT_1130681b0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_1130681b8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130681c0) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130681c8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130681d0) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130681d8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130681e0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}


