/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104522318; end: 10452231b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522318(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar5 = alStack_50;
  lVar3 = param_1;
  FUN_104522c9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  if (param_3 == '\x01') {
    *(undefined1 *)(lVar4 + _DAT_1130836a0) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130836a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    plVar5 = (long *)(lVar4 + _DAT_1130836b0);
    *plVar5 = param_1;
    plVar5[1] = param_2;
    plVar5 = alStack_40;
  }
  else {
    *(undefined1 *)(lVar4 + _DAT_1130836a0) = 0;
    plVar2 = (long *)(lVar4 + _DAT_1130836a8);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130836b0);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452231c; end: 1045225cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452231c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130836a0));
  if (((undefined8 *)(unaff_x20 + _DAT_1130836a8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130836a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130836b0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130836b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1045225d0; end: 10452267b;  */

void FUN_1045225d0(void)

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



/* Entry: 10452267c; end: 1045226bb;  */

void FUN_10452267c(undefined1 *param_1,long *param_2)

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



/* Entry: 1045226bc; end: 10452271b; -[SCChatIdentifier description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045226bc(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_1130836a0) == '\x01') {
    if (*(long *)(param_1 + _DAT_1130836b0 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045226e8);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_1130836a8 + 8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10452271c);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452271c; end: 104522763; -[SCChatIdentifier init] */

void FUN_10452271c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCChatScope/SCChatIdentifierWrapper.swift",
             0x29,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104522764);
  (*pcVar1)();
}



/* Entry: 104522764; end: 104522797; -[SCChatIdentifier hash] */

undefined8 FUN_104522764(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10452231c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104522798; end: 104522817; -[SCChatIdentifier isEqual:] */

uint FUN_104522798(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001045223f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104522818; end: 10452281b; -[SCChatIdentifier copyWithZone:] */

void FUN_104522818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10452281c; end: 10452289f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452281c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130836a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130836a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130836b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 1045228a0; end: 1045229b3; +[SCChatIdentifier userWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045228a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130836a0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130836a8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130836b0);
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



/* Entry: 1045229b4; end: 104522a43; +[SCChatIdentifier groupWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045229b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130836a0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130836a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130836b0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104522a44; end: 104522ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522a44(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_1130836a0) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_1130836b0))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104522ac0);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_1130836b0));
  }
  else {
    if (((undefined8 *)(unaff_x20 + _DAT_1130836a8))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104522ac4);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_1130836a8));
  }
  return;
}



/* Entry: 104522ac4; end: 104522b6b; -[SCChatIdentifier matchUser:group:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522ac4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + _DAT_1130836a0) == '\x01') {
    puVar2 = (undefined8 *)(param_1 + _DAT_1130836b0);
    lVar3 = puVar2[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104522b68);
      (*pcVar1)();
    }
  }
  else {
    puVar2 = (undefined8 *)(param_1 + _DAT_1130836a8);
    lVar3 = puVar2[1];
    param_4 = param_3;
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104522b6c);
      (*pcVar1)();
    }
  }
  uVar4 = *puVar2;
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar3);
  (**(code **)(param_4 + 0x10))(param_4,uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104522b6c; end: 104522b9f;  */

void FUN_104522b6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104522ba0; end: 104522bdf; -[SCChatIdentifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522ba0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130836a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130836b0 + 8))
  ;
  return;
}



/* Entry: 104522be0; end: 104522c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522be0(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar5 = alStack_50;
  lVar3 = param_1;
  FUN_104522c9c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  if (param_3 == '\x01') {
    *(undefined1 *)(lVar4 + _DAT_1130836a0) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130836a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    plVar5 = (long *)(lVar4 + _DAT_1130836b0);
    *plVar5 = param_1;
    plVar5[1] = param_2;
    plVar5 = alStack_40;
  }
  else {
    *(undefined1 *)(lVar4 + _DAT_1130836a0) = 0;
    plVar2 = (long *)(lVar4 + _DAT_1130836a8);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130836b0);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104522c9c; end: 104522cbb;  */

void FUN_104522c9c(void)

{
  _objc_opt_self(&PTR_PTR_1129cb128);
  return;
}



/* Entry: 104522cbc; end: 104522e23;  */

int FUN_104522cbc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104522d38;
        goto LAB_104522d1c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104522d1c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104522d38:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104522e24; end: 104522e63;  */

void FUN_104522e24(void)

{
  undefined *puVar1;
  
  if (puRam00000001130836e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd142a8;
  _swift_getWitnessTable(&UNK_10dd142a8,&UNK_110783d60);
  puRam00000001130836e0 = puVar1;
  return;
}



/* Entry: 104522e64; end: 104522f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104522e64(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_1130836e8);
      iVar2 = *(int *)(lStack_68 + _DAT_1130836e8);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1130836f0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130836f0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130836f8);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_1130836f8);
      _objc_release();
      return (iVar1 == iVar2 && (int)uVar6 == (int)uVar7) && (int)uVar5 == (int)uVar8;
    }
  }
  return false;
}



/* Entry: 104522f34; end: 104522f43; -[SCChatAttribution chatPageSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104522f34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130836e8);
}



/* Entry: 104522f44; end: 104522f53; -[SCChatAttribution deeplinkType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104522f44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130836f0);
}



/* Entry: 104522f54; end: 104522f67; -[SCChatAttribution navigationAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104522f54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130836f8);
}



/* Entry: 104522f68; end: 104522fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130836e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130836f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130836f8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104522fdc; end: 104522fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130836e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130836f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130836f8) = param_3;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104522fe0; end: 1045230c7; -[SCChatAttribution initWithChatPageSource:deeplinkType:navigationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130836e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130836f0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130836f8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045230c8; end: 104523137; -[SCChatAttribution hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045230c8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_1130836e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_1130836f0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_1130836f8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104523138; end: 1045231b7; -[SCChatAttribution isEqual:] */

uint FUN_104523138(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104522e64(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045231b8; end: 1045231bb; -[SCChatAttribution copyWithZone:] */

void FUN_1045231b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1045231bc; end: 1045231d7; -[SCChatAttribution description] */

void FUN_1045231bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045231d8; end: 104523273; -[SCChatAttribution init] */

void FUN_1045231d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCChatScope/SCChatAttributionWrapper.swift",
             0x2a,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104523220);
  (*pcVar1)();
}



/* Entry: 104523274; end: 104523277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130836e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130836f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130836f8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523278; end: 104523283; -[SCChatQuotedMessageData quotedMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083728);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083728))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104523284; end: 104523293; -[SCChatQuotedMessageData initiationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104523284(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083730);
}



/* Entry: 104523294; end: 10452329f; -[SCChatQuotedMessageData quotedAnalyticsMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523294(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083738);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083738))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1045232a0; end: 1045232e7;  */

void FUN_1045232a0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1045232e8; end: 1045233ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045232e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083728);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113083730) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083738);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523400; end: 10452349f; -[SCChatQuotedMessageData initWithQuotedMessageId:initiationType:quotedAnalyticsMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113083728);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113083730) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113083738);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045234a0; end: 10452350f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045234a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083728);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113083730) = param_1[2];
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083738);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523510; end: 104523543; -[SCChatQuotedMessageData hash] */

undefined8 FUN_104523510(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104523544();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104523544; end: 1045235fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523544(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113083728);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113083728))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113083730));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113083738);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113083738))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1045235fc; end: 104523723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1045235fc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar4 = *(ulong *)(unaff_x20 + _DAT_113083728);
      if (uVar4 == *(ulong *)(lStack_68 + _DAT_113083728) &&
          ((ulong *)(unaff_x20 + _DAT_113083728))[1] == ((ulong *)(lStack_68 + _DAT_113083728))[1])
      {
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_113083730);
      lVar6 = *(long *)(lStack_68 + _DAT_113083730);
      lVar2 = *(long *)(unaff_x20 + _DAT_113083738);
      if (lVar2 == *(long *)(lStack_68 + _DAT_113083738) &&
          ((long *)(unaff_x20 + _DAT_113083738))[1] == ((long *)(lStack_68 + _DAT_113083738))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar2;
      }
      _objc_release(lStack_68);
      if ((uVar4 & 1) != 0) {
        return lVar5 == lVar6 & uVar1;
      }
    }
  }
  return 0;
}



/* Entry: 104523724; end: 1045237a3; -[SCChatQuotedMessageData isEqual:] */

uint FUN_104523724(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1045235fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045237a4; end: 1045237a7; -[SCChatQuotedMessageData copyWithZone:] */

void FUN_1045237a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1045237a8; end: 1045237c3; -[SCChatQuotedMessageData description] */

void FUN_1045237a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045237c4; end: 10452383f; -[SCChatQuotedMessageData init] */

void FUN_1045237c4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCChatScope/SCChatQuotedMessageDataWrapper.swift",0x30,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452380c);
  (*pcVar1)();
}



/* Entry: 104523840; end: 10452387f; -[SCChatQuotedMessageData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523840(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083728 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113083738 + 8))
  ;
  return;
}



/* Entry: 104523880; end: 10452389f;  */

void FUN_104523880(void)

{
  _objc_opt_self(&PTR_PTR_1129cb2d0);
  return;
}



/* Entry: 1045238a0; end: 1045238b7;  */

bool FUN_1045238a0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1045238b8; end: 1045238f7;  */

void FUN_1045238b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14390;
  _swift_getWitnessTable(&UNK_10dd14390,&UNK_110783e58);
  puRam0000000113083768 = puVar1;
  return;
}



/* Entry: 1045238f8; end: 1045239a3;  */

void FUN_1045238f8(void)

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



/* Entry: 1045239a4; end: 1045239d7;  */

void FUN_1045239a4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 1045239d8; end: 1045239e7; -[_TtC18SCBlizzardServices34SCBlizzardClientIdProviderServices blizzardClientIdProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045239d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083770));
  return;
}



/* Entry: 1045239e8; end: 104523a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045239e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083770) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523a34; end: 104523a8b; -[_TtC18SCBlizzardServices34SCBlizzardClientIdProviderServices initWithBlizzardClientIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083770) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104523a8c; end: 104523aeb; -[_TtC18SCBlizzardServices34SCBlizzardClientIdProviderServices init] */

void FUN_104523a8c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.SCBlizzardClientIdProviderServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104523ab8);
  (*pcVar1)();
}



/* Entry: 104523aec; end: 104523afb; -[_TtC18SCBlizzardServices34SCBlizzardClientIdProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083770));
  return;
}



/* Entry: 104523afc; end: 104523b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523afc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130837a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523b48; end: 104523b9f; -[_TtC18SCBlizzardServices23SCNoDepBlizzardServices initWithNoDepLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130837a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104523ba0; end: 104523bff; -[_TtC18SCBlizzardServices23SCNoDepBlizzardServices init] */

void FUN_104523ba0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.SCNoDepBlizzardServices",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104523bcc);
  (*pcVar1)();
}



/* Entry: 104523c00; end: 104523c0f; -[_TtC18SCBlizzardServices23SCNoDepBlizzardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130837a0));
  return;
}



/* Entry: 104523c10; end: 104523c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523c10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130837d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523c5c; end: 104523cb3; -[_TtC18SCBlizzardServices33SCSystemApplicationLoggerServices initWithSystemApplicationLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130837d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104523cb4; end: 104523d13; -[_TtC18SCBlizzardServices33SCSystemApplicationLoggerServices init] */

void FUN_104523cb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.SCSystemApplicationLoggerServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104523ce0);
  (*pcVar1)();
}



/* Entry: 104523d14; end: 104523d23; -[_TtC18SCBlizzardServices33SCSystemApplicationLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130837d0));
  return;
}



/* Entry: 104523d24; end: 104523d33; -[_TtC18SCBlizzardServices24SCSystemBlizzardServices valdiBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083808));
  return;
}



/* Entry: 104523d34; end: 104523d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523d34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083800) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083808) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523d98; end: 104523e0f; -[_TtC18SCBlizzardServices24SCSystemBlizzardServices initWithUserNotTrackedLogger:valdiBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523d98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083800) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083808) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104523e10; end: 104523e6f; -[_TtC18SCBlizzardServices24SCSystemBlizzardServices init] */

void FUN_104523e10(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.SCSystemBlizzardServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104523e3c);
  (*pcVar1)();
}



/* Entry: 104523e70; end: 104523ea7; -[_TtC18SCBlizzardServices24SCSystemBlizzardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523e70(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083800));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083808));
  return;
}



/* Entry: 104523ea8; end: 104523eb7; -[_TtC18SCBlizzardServices31SCUserApplicationLoggerServices userApplicationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083838));
  return;
}



/* Entry: 104523eb8; end: 104523f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523eb8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083838) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104523f04; end: 104523f5b; -[_TtC18SCBlizzardServices31SCUserApplicationLoggerServices initWithUserApplicationLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083838) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104523f5c; end: 104523fbb; -[_TtC18SCBlizzardServices31SCUserApplicationLoggerServices init] */

void FUN_104523f5c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.SCUserApplicationLoggerServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104523f88);
  (*pcVar1)();
}



/* Entry: 104523fbc; end: 104523fcb; -[_TtC18SCBlizzardServices31SCUserApplicationLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083838));
  return;
}



/* Entry: 104523fcc; end: 104523feb;  */

void FUN_104523fcc(void)

{
  _objc_opt_self(&PTR_PTR_1129cb6b0);
  return;
}



/* Entry: 104523fec; end: 104524037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104523fec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083868) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104524038; end: 10452408f; -[_TtC18SCBlizzardServices22SCUserBlizzardServices initWithUserTrackedLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083868) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104524090; end: 1045240ef; -[_TtC18SCBlizzardServices22SCUserBlizzardServices init] */

void FUN_104524090(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.SCUserBlizzardServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045240bc);
  (*pcVar1)();
}



/* Entry: 1045240f0; end: 1045240ff; -[_TtC18SCBlizzardServices22SCUserBlizzardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045240f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083868));
  return;
}



/* Entry: 104524100; end: 10452414b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524100(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083898) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452414c; end: 1045241a3; -[_TtC18SCBlizzardServices28ValdiBlizzardLoggingServices initWithBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452414c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083898) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1045241a4; end: 104524203; -[_TtC18SCBlizzardServices28ValdiBlizzardLoggingServices init] */

void FUN_1045241a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlizzardServices.ValdiBlizzardLoggingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045241d0);
  (*pcVar1)();
}



/* Entry: 104524204; end: 104524227; -[_TtC18SCBlizzardServices28ValdiBlizzardLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083898));
  return;
}



/* Entry: 104524228; end: 1045242ff;  */

void FUN_104524228(void)

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



/* Entry: 104524300; end: 10452431f;  */

void FUN_104524300(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104524320; end: 10452435f;  */

void FUN_104524320(void)

{
  undefined *puVar1;
  
  if (puRam00000001130838c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14570;
  _swift_getWitnessTable(&UNK_10dd14570,&UNK_110783f50);
  puRam00000001130838c8 = puVar1;
  return;
}



/* Entry: 104524360; end: 10452436f;  */

undefined1  [16] FUN_104524360(void)

{
  return ZEXT816(0x110783f50);
}



/* Entry: 104524370; end: 1045243f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524370(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  func_0x0001000285a8(0x112da9f18,&UNK_10d951250);
  uVar1 = param_1;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_1130838d0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130838d8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045243f8; end: 104524503; -[_TtC18SCSpectrumServices23SCNoDepSpectrumServices initWithSpectrumLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045243f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112da9f18,&UNK_10d951250);
  _objc_retain();
  uVar1 = param_3;
  func_0x0001000bda74();
  *(undefined8 *)(param_1 + _DAT_1130838d0) = uVar1;
  *(undefined8 *)(param_1 + _DAT_1130838d8) = param_3;
  func_0x000100096f48();
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104524504; end: 10452455f; -[_TtC18SCSpectrumServices23SCNoDepSpectrumServices init] */

void FUN_104524504(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpectrumServices.SCNoDepSpectrumServices",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104524530);
  (*pcVar1)();
}



/* Entry: 104524560; end: 104524597; -[_TtC18SCSpectrumServices23SCNoDepSpectrumServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524560(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130838d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130838d8));
  return;
}



/* Entry: 104524598; end: 1045245a7; -[_TtC18SCSpectrumServices18SCSpectrumServices spectrumLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083910));
  return;
}



/* Entry: 1045245a8; end: 1045246b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045245a8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  func_0x0001000285a8(0x112da9f18,&UNK_10d951250);
  uVar1 = param_1;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_113083908) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113083910) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045246b4; end: 10452470f; -[_TtC18SCSpectrumServices18SCSpectrumServices init] */

void FUN_1045246b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpectrumServices.SCSpectrumServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045246e0);
  (*pcVar1)();
}



/* Entry: 104524710; end: 104524747; -[_TtC18SCSpectrumServices18SCSpectrumServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524710(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113083908));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083910));
  return;
}



/* Entry: 104524748; end: 1045249a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104524748(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_110784000;
  _swift_allocObject(&UNK_110784000,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110784028;
  _swift_allocObject(&UNK_110784028,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1045249a4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113083940;
  func_0x0001000285a8(0x113083940,&UNK_10dd14690);
  uVar4 = uVar3;
  FUN_1045249dc();
  pcVar5 = FUN_1045249ac;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_1045249ac,puVar2,uVar3,uVar4);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar5);
  puVar1 = &UNK_110784050;
  _swift_allocObject(&UNK_110784050,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar3 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_49,FUN_104524b1c,auStack_80,uVar3);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 1045249a4; end: 1045249ab;  */

void FUN_1045249a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar2 = param_1;
    }
    uVar3 = 0;
    if (param_4 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
      uVar3 = param_3;
    }
    if (param_5 != 0) {
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                 PTR___ss11AnyHashableVSHsWP_11034e450);
    }
    func_0x00010bf7dbc0(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  return;
}



/* Entry: 1045249ac; end: 1045249db;  */

void FUN_1045249ac(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return;
}


