/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104654d9c; end: 104655057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104654d9c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long alStack_c0 [4];
  long alStack_a0 [2];
  long alStack_90 [2];
  long alStack_80 [2];
  long alStack_70 [2];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)alStack_c0 - extraout_x8;
  lVar2 = 0;
  FUN_10464151c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x0001046417fc(param_1,puVar7);
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      func_0x0001001021cc(puVar7,lVar6);
      uVar9 = 0;
      plVar5 = alStack_a0;
      uVar10 = 1;
      uVar8 = 2;
    }
    else if (iVar1 == 1) {
      uVar9 = *puVar7;
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,1,1,lVar2);
      uVar10 = 0;
      plVar5 = alStack_80;
      uVar8 = 4;
    }
    else {
      lVar2 = 0;
      __s10Foundation3URLVMa();
      uVar10 = 1;
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,1,1,lVar2);
      uVar8 = 0;
      uVar9 = 0;
      plVar5 = alStack_c0;
    }
  }
  else if (iVar1 == 3) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    uVar8 = 1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,1,1,lVar2);
    uVar9 = 0;
    plVar5 = alStack_c0 + 2;
    uVar10 = 1;
  }
  else if (iVar1 == 4) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    uVar10 = 1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,1,1,lVar2);
    uVar9 = 0;
    plVar5 = alStack_90;
    uVar8 = 3;
  }
  else {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    uVar10 = 1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,1,1,lVar2);
    uVar9 = 0;
    plVar5 = alStack_70;
    uVar8 = 5;
  }
  lVar4 = 0;
  FUN_10465512c();
  lVar2 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = uVar8;
  func_0x000104655098(lVar6,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar3 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar3 = uVar9;
  *(undefined1 *)(puVar3 + 1) = uVar10;
  *plVar5 = lVar2;
  plVar5[1] = lVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  FUN_10463ff60(param_1);
  func_0x000104655058(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 104655058; end: 104655123;  */

undefined8 FUN_104655058(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104655124; end: 10465512b;  */

void FUN_104655124(void)

{
  if (lRam000000011308b4a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e816970);
  return;
}



/* Entry: 10465512c; end: 104655163;  */

void FUN_10465512c(undefined8 param_1)

{
  if (lRam000000011308b4a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e816970);
  return;
}



/* Entry: 104655164; end: 1046551e3;  */

void FUN_104655164(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dd231f8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd23210;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 1046551e4; end: 10465534b;  */

int FUN_1046551e4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104655260;
        goto LAB_104655244;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104655244:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_104655260:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10465534c; end: 10465538b;  */

void FUN_10465534c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2324c;
  _swift_getWitnessTable(&UNK_10dd2324c,&UNK_110792f40);
  puRam000000011308b4b8 = puVar1;
  return;
}



/* Entry: 10465538c; end: 1046553cb;  */

ulong FUN_10465538c(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 1046553cc; end: 1046553db; -[SCWebBrowserUIConfig disableFullscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046553cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b4c0);
}



/* Entry: 1046553dc; end: 1046553eb; -[SCWebBrowserUIConfig hideDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046553dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b4c8);
}



/* Entry: 1046553ec; end: 1046553fb; -[SCWebBrowserUIConfig hideActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046553ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b4d0);
}



/* Entry: 1046553fc; end: 10465546f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046553fc(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308b4c0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11308b4c8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11308b4d0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104655470; end: 1046554e3; -[SCWebBrowserUIConfig initWithDisableFullscreen:hideDismissButton:hideActionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655470(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11308b4c0) = param_3;
  *(undefined1 *)(param_1 + _DAT_11308b4c8) = param_4;
  *(undefined1 *)(param_1 + _DAT_11308b4d0) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046554e4; end: 1046555c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046554e4(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11308b4c0) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_11308b4c8) = (byte)((uint)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_11308b4d0) = (byte)((uint)param_1 >> 0x10) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046555c4; end: 104655653; -[SCWebBrowserUIConfig hash] */

void FUN_1046555c4(void)

{
  func_0x0001046555e4();
  return;
}



/* Entry: 104655654; end: 10465572f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104655654(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar7 = &lStack_68;
    _swift_dynamicCast(plVar7,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar7 & 1) != 0) {
      bVar8 = *(byte *)(unaff_x20 + _DAT_11308b4c0);
      bVar1 = *(byte *)(lStack_68 + _DAT_11308b4c0);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11308b4c8);
      bVar3 = *(byte *)(lStack_68 + _DAT_11308b4c8);
      bVar4 = *(byte *)(unaff_x20 + _DAT_11308b4d0);
      bVar5 = *(byte *)(lStack_68 + _DAT_11308b4d0);
      _objc_release();
      bVar8 = (bVar8 ^ bVar1 | bVar2 ^ bVar3 | bVar4 ^ bVar5) ^ 1;
      goto LAB_104655714;
    }
  }
  bVar8 = 0;
LAB_104655714:
  return bVar8 & 1;
}



/* Entry: 104655730; end: 1046557af; -[SCWebBrowserUIConfig isEqual:] */

uint FUN_104655730(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104655654(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046557b0; end: 1046557b3; -[SCWebBrowserUIConfig copyWithZone:] */

void FUN_1046557b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046557b4; end: 1046558a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046557b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f209d40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209d60);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209d80);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1046558a8; end: 1046558f7; -[SCWebBrowserUIConfig encodeWithCoder:] */

void FUN_1046558a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046557b4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046558f8; end: 104655937;  */

undefined8 FUN_1046558f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104655a10(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104655938; end: 104655973; -[SCWebBrowserUIConfig initWithCoder:] */

undefined8 FUN_104655938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104655a10();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104655974; end: 10465598f; -[SCWebBrowserUIConfig description] */

void FUN_104655974(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104655990; end: 104655a0b; -[SCWebBrowserUIConfig init] */

void FUN_104655990(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebBrowserUIConfigWrapper.swift",0x35,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046559d8);
  (*pcVar1)();
}



/* Entry: 104655a0c; end: 104655a0f; -[SCWebBrowserUIConfig .cxx_destruct] */

void FUN_104655a0c(void)

{
  return;
}



/* Entry: 104655a10; end: 104655af3;  */

void FUN_104655a10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f209d40);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209d60);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209d80);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c00cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104655af4; end: 104655b13;  */

void FUN_104655af4(void)

{
  _objc_opt_self(&PTR_PTR_1129ce730);
  return;
}



/* Entry: 104655b14; end: 104655b1f; -[SCWebViewAdConfig adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655b14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308b500);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308b500))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104655b20; end: 104655b2b; -[SCWebViewAdConfig srid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655b20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308b508);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308b508))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104655b2c; end: 104655b37; -[SCWebViewAdConfig pixelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655b2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b510))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b510);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104655b38; end: 104655b47; -[SCWebViewAdConfig adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104655b38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b518);
}



/* Entry: 104655b48; end: 104655b57; -[SCWebViewAdConfig adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104655b48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b520);
}



/* Entry: 104655b58; end: 104655b63; -[SCWebViewAdConfig adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655b58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308b528);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308b528))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104655b64; end: 104655bab;  */

void FUN_104655b64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104655bac; end: 104655bbb; -[SCWebViewAdConfig snapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104655bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b530);
}



/* Entry: 104655bbc; end: 104655bcb; -[SCWebViewAdConfig disallowPrivacyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655bbc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b538);
}



/* Entry: 104655bcc; end: 104655bdb; -[SCWebViewAdConfig alwaysDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655bcc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b540);
}



/* Entry: 104655bdc; end: 104655beb; -[SCWebViewAdConfig enableAppendingClickIdForExb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655bdc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b548);
}



/* Entry: 104655bec; end: 104655bfb; -[SCWebViewAdConfig showPromotionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655bec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b550);
}



/* Entry: 104655bfc; end: 104655c07; -[SCWebViewAdConfig asmConfigJsonString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655bfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b558))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b558);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104655c08; end: 104655c5f;  */

void FUN_104655c08(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104655c60; end: 104655c6f; -[SCWebViewAdConfig exbAfterHtmlUrlResolve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655c60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b560);
}



/* Entry: 104655c70; end: 104655ccf; -[SCWebViewAdConfig cidRedirectUrlParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655c70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308b568);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104655cd0; end: 104655cdf; -[SCWebViewAdConfig urlParamUpdateConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b570));
  return;
}



/* Entry: 104655ce0; end: 104655cef; -[SCWebViewAdConfig disableCustomUserAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655ce0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b578);
}



/* Entry: 104655cf0; end: 104655cff; -[SCWebViewAdConfig enableSkoverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104655cf0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b580);
}



/* Entry: 104655d00; end: 104655d0f; -[SCWebViewAdConfig retargetPromptInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b588));
  return;
}



/* Entry: 104655d10; end: 10465610b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104655d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
                  undefined4 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b500);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b508);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b510);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308b518) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308b520) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b528);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308b530) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_11308b538) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11308b540) = param_12._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11308b548) = param_12._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11308b550) = param_12._3_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b558);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_11308b560) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11308b568) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308b570) = param_19;
  *(undefined1 *)(unaff_x20 + _DAT_11308b578) = (undefined1)param_20;
  *(undefined1 *)(unaff_x20 + _DAT_11308b580) = param_20._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11308b588) = param_22;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465610c; end: 104656273; -[SCWebViewAdConfig initWithAdId:srid:pixelId:adType:adProductType:adRequestClientId:snapIndex:disallowPrivacyPrompt:alwaysDeeplink:enableAppendingClickIdForExb:showPromotionInfo:asmConfigJsonString:exbAfterHtmlUrlResolve:cidRedirectUrlParameters:urlParamUpdateConfig:disableCustomUserAgent:enableSkoverlay:retargetPromptInfo:] */

void FUN_10465610c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,long param_12,
                  undefined4 param_13,undefined4 param_14,long param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    uStack_b0 = 0;
    lStack_a8 = 0;
    uVar2 = uVar1;
  }
  else {
    uStack_b0 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = uStack_b0;
    lStack_a8 = param_5;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_12 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_15 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain();
  _objc_retain();
  func_0x000104655f14(param_3,param_2,param_4,uVar1,lStack_a8,uStack_b0,param_6,param_7,param_8,
                      uVar2,param_9,param_10);
  return;
}



/* Entry: 104656274; end: 1046562e3;  */

undefined8 FUN_104656274(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104657dac(param_1);
  func_0x0001014264a4(param_1);
  return uVar1;
}



/* Entry: 1046562e4; end: 104656317; -[SCWebViewAdConfig hash] */

undefined8 FUN_1046562e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104656318();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104656318; end: 10465660f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104656318(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308b500);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,((undefined8 *)(unaff_x20 + _DAT_11308b500))[1]);
  uVar1 = uVar4;
  func_0x00010bfde980();
  _objc_release(uVar4);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308b508);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,((undefined8 *)(unaff_x20 + _DAT_11308b508))[1]);
  uVar1 = uVar4;
  func_0x00010bfde980();
  _objc_release(uVar4);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b510))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b510);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308b518));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308b520));
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308b528);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,((undefined8 *)(unaff_x20 + _DAT_11308b528))[1]);
  uVar1 = uVar4;
  func_0x00010bfde980();
  _objc_release(uVar4);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308b530));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b538));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b540));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b548));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b550));
  if (((undefined8 *)(unaff_x20 + _DAT_11308b558))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b558);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b560));
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b568);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  if (*(long *)(unaff_x20 + _DAT_11308b570) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010483f9a8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b578));
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_11308b580);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11308b588) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010483c034();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104656610; end: 104656adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104656610(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long unaff_x20;
  uint uVar30;
  uint uVar31;
  uint uStack_a8;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar27 = unaff_x20;
  _swift_getObjectType();
  FUN_1046583dc(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar23 = &lStack_88;
    _swift_dynamicCast(plVar23,alStack_80,PTR___sypN_11034f1a8 + 8,lVar27,6);
    if (((ulong)plVar23 & 1) != 0) {
      lVar27 = *(long *)(unaff_x20 + _DAT_11308b500);
      if (lVar27 == *(long *)(lStack_88 + _DAT_11308b500) &&
          ((long *)(unaff_x20 + _DAT_11308b500))[1] == ((long *)(lStack_88 + _DAT_11308b500))[1]) {
        uStack_8c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar27;
      }
      lVar27 = *(long *)(unaff_x20 + _DAT_11308b508);
      if (lVar27 == *(long *)(lStack_88 + _DAT_11308b508) &&
          ((long *)(unaff_x20 + _DAT_11308b508))[1] == ((long *)(lStack_88 + _DAT_11308b508))[1]) {
        uStack_90 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_90 = (uint)lVar27;
      }
      lVar27 = ((long *)(unaff_x20 + _DAT_11308b510))[1];
      lVar28 = ((long *)(lStack_88 + _DAT_11308b510))[1];
      uVar20 = (uint)(lVar27 == 0 && lVar28 == 0);
      if ((lVar27 != 0) && (lVar28 != 0)) {
        lVar24 = *(long *)(unaff_x20 + _DAT_11308b510);
        if ((lVar24 == *(long *)(lStack_88 + _DAT_11308b510)) && (lVar27 == lVar28)) {
          uVar20 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar20 = (uint)lVar24;
        }
      }
      iVar2 = *(int *)(unaff_x20 + _DAT_11308b518);
      iVar3 = *(int *)(lStack_88 + _DAT_11308b518);
      iVar4 = *(int *)(unaff_x20 + _DAT_11308b520);
      iVar5 = *(int *)(lStack_88 + _DAT_11308b520);
      lVar27 = *(long *)(unaff_x20 + _DAT_11308b528);
      if ((lVar27 == *(long *)(lStack_88 + _DAT_11308b528)) &&
         (((long *)(unaff_x20 + _DAT_11308b528))[1] == ((long *)(lStack_88 + _DAT_11308b528))[1])) {
        uStack_a8 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_a8 = (uint)lVar27;
      }
      lVar29 = *(long *)(unaff_x20 + _DAT_11308b530);
      lVar24 = *(long *)(lStack_88 + _DAT_11308b530);
      bVar6 = *(byte *)(unaff_x20 + _DAT_11308b538);
      bVar7 = *(byte *)(lStack_88 + _DAT_11308b538);
      bVar8 = *(byte *)(unaff_x20 + _DAT_11308b540);
      bVar9 = *(byte *)(lStack_88 + _DAT_11308b540);
      bVar10 = *(byte *)(unaff_x20 + _DAT_11308b548);
      bVar11 = *(byte *)(lStack_88 + _DAT_11308b548);
      bVar12 = *(byte *)(unaff_x20 + _DAT_11308b550);
      bVar13 = *(byte *)(lStack_88 + _DAT_11308b550);
      lVar27 = ((long *)(unaff_x20 + _DAT_11308b558))[1];
      lVar28 = ((long *)(lStack_88 + _DAT_11308b558))[1];
      uVar30 = (uint)(lVar27 == 0 && lVar28 == 0);
      if ((lVar27 != 0) && (lVar28 != 0)) {
        lVar25 = *(long *)(unaff_x20 + _DAT_11308b558);
        if ((lVar25 == *(long *)(lStack_88 + _DAT_11308b558)) && (lVar27 == lVar28)) {
          uVar30 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar30 = (uint)lVar25;
        }
      }
      bVar14 = *(byte *)(unaff_x20 + _DAT_11308b560);
      bVar15 = *(byte *)(lStack_88 + _DAT_11308b560);
      lVar28 = *(long *)(unaff_x20 + _DAT_11308b568);
      lVar27 = *(long *)(lStack_88 + _DAT_11308b568);
      uVar31 = (uint)(lVar28 == 0 && lVar27 == 0);
      if ((lVar28 != 0) && (lVar27 != 0)) {
        _swift_bridgeObjectRetain(lVar27);
        lVar25 = lVar28;
        _swift_bridgeObjectRetain(lVar28);
        uVar31 = (uint)lVar25;
        func_0x000101058cd4();
        _swift_bridgeObjectRelease(lVar28);
        _swift_bridgeObjectRelease(lVar27);
      }
      if (*(long *)(unaff_x20 + _DAT_11308b570) == 0) {
        uVar21 = (uint)(*(long *)(lStack_88 + _DAT_11308b570) == 0);
      }
      else {
        lVar27 = *(long *)(lStack_88 + _DAT_11308b570);
        if (lVar27 == 0) {
          lVar28 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar28 = 0;
          FUN_104840a2c();
        }
        alStack_80[0] = lVar27;
        alStack_80[3] = lVar28;
        _objc_retain(lVar27);
        plVar23 = alStack_80;
        func_0x00010483fa58(plVar23);
        uVar21 = (uint)plVar23;
        func_0x00010006e7f4(alStack_80);
      }
      bVar16 = *(byte *)(unaff_x20 + _DAT_11308b578);
      bVar17 = *(byte *)(lStack_88 + _DAT_11308b578);
      bVar18 = *(byte *)(unaff_x20 + _DAT_11308b580);
      bVar19 = *(byte *)(lStack_88 + _DAT_11308b580);
      if (*(long *)(unaff_x20 + _DAT_11308b588) == 0) {
        lVar28 = *(long *)(lStack_88 + _DAT_11308b588);
        lVar27 = lVar28;
        _objc_retain(lVar28);
        _objc_release(lStack_88);
        if (lVar28 == 0) {
          uVar22 = 1;
        }
        else {
          _objc_release(lVar27);
          uVar22 = 0;
        }
      }
      else {
        lVar27 = *(long *)(lStack_88 + _DAT_11308b588);
        if (lVar27 == 0) {
          uVar26 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar26 = 0;
          FUN_10483cd2c();
        }
        alStack_80[0] = lVar27;
        alStack_80[3] = uVar26;
        _objc_retain(lVar27);
        plVar23 = alStack_80;
        FUN_10483c130(plVar23);
        uVar22 = (uint)plVar23;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      uVar1 = 0;
      if (iVar4 == iVar5) {
        uVar1 = uStack_8c & uStack_90 & (uint)(iVar2 == iVar3) & uVar20;
      }
      uVar20 = uVar1 & uStack_a8 ^ 1;
      if (lVar29 != lVar24) {
        uVar20 = 1;
      }
      uVar20 = ((uVar20 | (uint)(byte)(bVar6 ^ bVar7 | bVar8 ^ bVar9 | bVar10 ^ bVar11 |
                                      bVar12 ^ bVar13) | uVar30 ^ 1 | (uint)(bVar14 ^ bVar15)) ^ 1)
               & uVar31 & uVar21 & ((bVar16 ^ bVar17) ^ 1) & ((bVar18 ^ bVar19) ^ 1) & uVar22;
      goto LAB_104656ab0;
    }
  }
  uVar20 = 0;
LAB_104656ab0:
  return uVar20 & 1;
}



/* Entry: 104656adc; end: 104656b5b; -[SCWebViewAdConfig isEqual:] */

uint FUN_104656adc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104656610(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104656b5c; end: 104656b5f; -[SCWebViewAdConfig copyWithZone:] */

void FUN_104656b5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104656b60; end: 1046570db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104656b60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308b500);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308b500))[1]);
  uVar1 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308b508);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308b508))[1]);
  uVar1 = 0x44495253;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495253,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b510))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308b510);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x44495f4c45584950;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4c45584950,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308b528);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308b528))[1]);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x444e495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209af0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0x445f535941574c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f535941574c41,0xef4b4e494c504545);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f209b10);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209de0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b558))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308b558);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f209e00);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2099c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308b568);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f209e20);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209e40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f209b60);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209b80);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1046570dc; end: 10465712b; -[SCWebViewAdConfig encodeWithCoder:] */

void FUN_1046570dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104656b60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10465712c; end: 10465715b;  */

void FUN_10465712c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10465715c(param_1);
  return;
}



/* Entry: 10465715c; end: 104657b9f;  */

undefined8 FUN_10465715c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar4 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
LAB_104657328:
    func_0x00010006e7f4(&uStack_90);
    goto LAB_104657330;
  }
  plVar6 = &lStack_c0;
  _swift_dynamicCast(plVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar13 = lStack_b8;
  lVar5 = lStack_c0;
  if (((ulong)plVar6 & 1) == 0) {
    _objc_release(param_1);
    goto LAB_104657330;
  }
  uVar4 = 0x44495253;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495253,0xe400000000000000);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar7 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
LAB_104657324:
    _swift_bridgeObjectRelease(lVar13);
    goto LAB_104657328;
  }
  plVar6 = &lStack_c0;
  _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
  lVar2 = lStack_b8;
  lVar7 = lStack_c0;
  if (((ulong)plVar6 & 1) == 0) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar13);
    goto LAB_104657330;
  }
  uVar4 = 0x44495f4c45584950;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4c45584950,0xe800000000000000);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar11 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar11);
    _swift_unknownObjectRelease(lVar11);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    plVar6 = &lStack_c0;
    _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_c0;
    lVar12 = lStack_b8;
    if ((int)plVar6 == 0) {
      lVar11 = 0;
      lVar12 = 0;
    }
  }
  uVar4 = 0x455059545f4441;
  uVar10 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
  func_0x00010bf66f40();
  _objc_release(uVar4);
  func_0x0001042a6cc4();
  if ((uVar10 & 0xff) == 1) {
LAB_10465747c:
    _swift_bridgeObjectRelease(lVar13);
    _swift_bridgeObjectRelease(lVar2);
    _objc_release(param_1);
  }
  else {
    uVar4 = 0x55444f52505f4441;
    uVar10 = 0x545f5443;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
    func_0x00010bf66f40();
    _objc_release(uVar4);
    func_0x000102d02a38();
    if ((uVar10 & 0xff) == 1) goto LAB_10465747c;
    uVar4 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50);
    lVar8 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar8 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
      _swift_unknownObjectRelease(lVar8);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(lVar13);
      lVar13 = lVar12;
      goto LAB_104657324;
    }
    plVar6 = &lStack_c0;
    _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_b8;
    lVar8 = lStack_c0;
    if (((ulong)plVar6 & 1) != 0) {
      uVar4 = 0x444e495f50414e53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
      func_0x00010bf66f40();
      _objc_release(uVar4);
      uVar4 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209af0);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0x445f535941574c41;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f535941574c41,0xef4b4e494c504545);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0xd000000000000021;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f209b10);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209de0);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f209e00);
      lVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar9 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
        _swift_unknownObjectRelease(lVar9);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_130 = 0;
        lStack_110 = 0;
      }
      else {
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lStack_130 = lStack_c0;
        lStack_110 = lStack_b8;
        if ((int)plVar6 == 0) {
          lStack_130 = 0;
          lStack_110 = 0;
        }
      }
      uVar4 = 0xd00000000000001a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2099c0);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f209e20);
      lVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar9 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
        _swift_unknownObjectRelease(lVar9);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_118 = 0;
      }
      else {
        uVar4 = 0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,uVar4,6);
        lStack_118 = lStack_c0;
        if ((int)plVar6 == 0) {
          lStack_118 = 0;
        }
      }
      uVar4 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209e40);
      lVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar9 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
        _swift_unknownObjectRelease(lVar9);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_120 = 0;
      }
      else {
        uVar4 = 0;
        FUN_104840a2c(0);
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,uVar4,6);
        lStack_120 = lStack_c0;
        if ((int)plVar6 == 0) {
          lStack_120 = 0;
        }
      }
      uVar4 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f209b60);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
      func_0x00010bf66ce0();
      _objc_release(uVar4);
      uVar4 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209b80);
      lVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar9 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
        _swift_unknownObjectRelease(lVar9);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lVar9 = 0;
      }
      else {
        uVar4 = 0;
        FUN_10483cd2c(0);
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar1 + 8,uVar4,6);
        lVar9 = lStack_c0;
        if ((int)plVar6 == 0) {
          lVar9 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar13);
      _swift_bridgeObjectRelease(lVar13);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,lVar2);
      _swift_bridgeObjectRelease(lVar2);
      if (lVar12 == 0) {
        lVar11 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar11,lVar12);
        _swift_bridgeObjectRelease(lVar12);
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar8,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      if (lStack_110 == 0) {
        lStack_130 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_130,lStack_110);
        _swift_bridgeObjectRelease(lStack_110);
      }
      if (lStack_118 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lStack_118;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (lStack_118,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        _swift_bridgeObjectRelease(lStack_118);
      }
      func_0x00010bff17a0();
      _objc_release(lVar5);
      _objc_release(lVar7);
      _objc_release(lVar11);
      _objc_release(lVar8);
      _objc_release(lStack_130);
      _objc_release(lVar13);
      _objc_release(param_1);
      _objc_release(lStack_120);
      _objc_release(lVar9);
      return unaff_x20;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(lVar13);
  }
  _swift_bridgeObjectRelease(lVar12);
LAB_104657330:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104657ba0; end: 104657bc7; -[SCWebViewAdConfig initWithCoder:] */

void FUN_104657ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10465715c();
  return;
}



/* Entry: 104657bc8; end: 104657bfb; -[SCWebViewAdConfig description] */

void FUN_104657bc8(void)

{
  undefined1 auStack_d8 [200];
  
  func_0x0001046580d8(auStack_d8);
  func_0x0001014264a4(auStack_d8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104657bfc; end: 104657c83;  */

void FUN_104657bfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001046580d8(&uStack_e8);
  _objc_release(param_2);
  param_1[0x15] = uStack_40;
  param_1[0x14] = uStack_48;
  param_1[0x17] = uStack_30;
  param_1[0x16] = uStack_38;
  param_1[0x18] = uStack_28;
  param_1[0xd] = uStack_80;
  param_1[0xc] = uStack_88;
  param_1[0xf] = uStack_70;
  param_1[0xe] = uStack_78;
  param_1[0x11] = uStack_60;
  param_1[0x10] = uStack_68;
  param_1[0x13] = uStack_50;
  param_1[0x12] = uStack_58;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_c8;
  param_1[7] = uStack_b0;
  param_1[6] = uStack_b8;
  param_1[9] = uStack_a0;
  param_1[8] = uStack_a8;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[1] = uStack_e0;
  *param_1 = uStack_e8;
  param_1[3] = uStack_d0;
  param_1[2] = uStack_d8;
  return;
}



/* Entry: 104657c84; end: 104657cff; -[SCWebViewAdConfig init] */

void FUN_104657c84(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebViewAdConfigWrapper.swift",0x32,2,0x101,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104657ccc);
  (*pcVar1)();
}



/* Entry: 104657d00; end: 104657dab; -[SCWebViewAdConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104657d00(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b500 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b508 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b510 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b528 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b558 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b568));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b570));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308b588));
  return;
}



/* Entry: 104657dac; end: 1046583bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104657dac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_120 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _swift_getObjectType();
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11308b500);
  puVar4[1] = uStack_a8;
  *puVar4 = uStack_b0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11308b508);
  puVar4[1] = uStack_b8;
  *puVar4 = uStack_c0;
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11308b510);
  puVar4[1] = uStack_c8;
  *puVar4 = uStack_d0;
  uVar8 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11308b518) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11308b520) = uVar8;
  uVar8 = param_1[8];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11308b528);
  puVar4[1] = param_1[9];
  *puVar4 = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_11308b530) = param_1[10];
  *(undefined1 *)(unaff_x20 + _DAT_11308b538) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(unaff_x20 + _DAT_11308b540) = *(undefined1 *)((long)param_1 + 0x59);
  *(undefined1 *)(unaff_x20 + _DAT_11308b548) = *(undefined1 *)((long)param_1 + 0x5a);
  *(undefined1 *)(unaff_x20 + _DAT_11308b550) = *(undefined1 *)((long)param_1 + 0x5b);
  uVar8 = param_1[0xc];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11308b558);
  puVar4[1] = param_1[0xd];
  *puVar4 = uVar8;
  *(undefined1 *)(unaff_x20 + _DAT_11308b560) = *(undefined1 *)(param_1 + 0xe);
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_11308b568) = uStack_f8;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_11308b570) = uStack_100;
  *(undefined1 *)(unaff_x20 + _DAT_11308b578) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(unaff_x20 + _DAT_11308b580) = *(undefined1 *)((long)param_1 + 0x89);
  lVar6 = param_1[0x13];
  if (lVar6 == 0) {
    func_0x000100402194(&uStack_b0,&uStack_a0);
    func_0x000100402194(&uStack_c0,&uStack_a0);
    FUN_1046583dc(&uStack_d0,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000100402194(&uStack_e0,&uStack_a0);
    FUN_1046583dc(&uStack_f0,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046583dc(&uStack_f8,&uStack_a0,0x112efe110,&UNK_10db30950);
    FUN_1046583dc(&uStack_100,&uStack_a0,0x11308b5b8,&UNK_10dd23328);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar8 = param_1[0x17];
    uVar2 = param_1[0x18];
    uVar1 = param_1[0x15];
    uVar3 = param_1[0x16];
    uVar7 = param_1[0x14];
    uVar5 = param_1[0x12];
    uStack_a0 = uVar5;
    lStack_98 = lVar6;
    uStack_90 = uVar7;
    uStack_88 = uVar1;
    uStack_80 = uVar3;
    uStack_78 = uVar8;
    uStack_70 = uVar2;
    FUN_10483cd2c();
    _objc_allocWithZone();
    func_0x000100402194(&uStack_b0,auStack_120);
    func_0x000100402194(&uStack_c0,auStack_120);
    FUN_1046583dc(&uStack_d0,auStack_120,0x112d35ff8,&UNK_10d900cd0);
    func_0x000100402194(&uStack_e0,auStack_120);
    FUN_1046583dc(&uStack_f0,auStack_120,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046583dc(&uStack_f8,auStack_120,0x112efe110,&UNK_10db30950);
    FUN_1046583dc(&uStack_100,auStack_120,0x11308b5b8,&UNK_10dd23328);
    func_0x000103bfd2e8(uVar5,lVar6,uVar7,uVar1,uVar3,uVar8,uVar2);
    puVar4 = &uStack_a0;
    FUN_10483c554();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11308b588) = puVar4;
  _objc_msgSendSuper2(&stack0xfffffffffffffef0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046583bc; end: 1046583db;  */

void FUN_1046583bc(void)

{
  _objc_opt_self(&PTR_PTR_1129ce810);
  return;
}



/* Entry: 1046583dc; end: 104658453;  */

undefined8 FUN_1046583dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104658454; end: 104658687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308b5c0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5c8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5d8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5e8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5f0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5f8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308b600) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b608);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11308b610) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11308b618) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11308b620) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308b628) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308b630) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11308b638) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_11308b640) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11308b648) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11308b650) = param_23;
  *(undefined1 *)(unaff_x20 + _DAT_11308b658) = (undefined1)param_24;
  *(undefined1 *)(unaff_x20 + _DAT_11308b660) = param_24._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11308b668) = param_24._2_1_;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104658688; end: 104658697; -[SCWebViewContext hasSubNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b5c0));
  return;
}



/* Entry: 104658698; end: 1046586a3; -[SCWebViewContext initialUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658698(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b5c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b5c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046586a4; end: 1046586af; -[SCWebViewContext resolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046586a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b5d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b5d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046586b0; end: 1046586bf; -[SCWebViewContext landingPageServerRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046586b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b5d8));
  return;
}



/* Entry: 1046586c0; end: 1046586cb; -[SCWebViewContext landingPageServerResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046586c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b5e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b5e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046586cc; end: 1046586db; -[SCWebViewContext landingPageServerRedirectResolvedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046586cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b5e8));
  return;
}



/* Entry: 1046586dc; end: 1046586eb; -[SCWebViewContext exbAfterHtmlUrlResolve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046586dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b5f0));
  return;
}



/* Entry: 1046586ec; end: 1046586fb; -[SCWebViewContext scCidDropDetected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046586ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b5f8));
  return;
}



/* Entry: 1046586fc; end: 10465870b; -[SCWebViewContext browserType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046586fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b600);
}



/* Entry: 10465870c; end: 104658717; -[SCWebViewContext userAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465870c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b608))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b608);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104658718; end: 10465876f;  */

void FUN_104658718(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104658770; end: 10465877f; -[SCWebViewContext firstContentfulPaintTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b610));
  return;
}



/* Entry: 104658780; end: 10465878f; -[SCWebViewContext navigationStartTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b618));
  return;
}



/* Entry: 104658790; end: 10465879f; -[SCWebViewContext domContentLoadedTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b620));
  return;
}



/* Entry: 1046587a0; end: 1046587af; -[SCWebViewContext domInteractiveTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046587a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b628));
  return;
}



/* Entry: 1046587b0; end: 1046587bf; -[SCWebViewContext fullLoadTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046587b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b630));
  return;
}



/* Entry: 1046587c0; end: 1046587cf; -[SCWebViewContext responseEndTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046587c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b638));
  return;
}



/* Entry: 1046587d0; end: 104658823; -[SCWebViewContext gaHitTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046587d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308b640);
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



/* Entry: 104658824; end: 104658833; -[SCWebViewContext gaFirstHitLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b648));
  return;
}



/* Entry: 104658834; end: 104658843; -[SCWebViewContext gaFirstHitTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b650));
  return;
}



/* Entry: 104658844; end: 104658853; -[SCWebViewContext hasGAPageViewHit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104658844(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b658);
}



/* Entry: 104658854; end: 104658863; -[SCWebViewContext hasGAPageViewHitInLandingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104658854(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b660);
}



/* Entry: 104658864; end: 104658873; -[SCWebViewContext webViewGAIncluded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104658864(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308b668);
}



/* Entry: 104658874; end: 104658a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11308b5c0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5c8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5d8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5e8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5f0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308b5f8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308b600) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b608);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11308b610) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11308b618) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11308b620) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308b628) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308b630) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11308b638) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_11308b640) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11308b648) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11308b650) = param_23;
  *(undefined1 *)(unaff_x20 + _DAT_11308b658) = (undefined1)param_24;
  *(undefined1 *)(unaff_x20 + _DAT_11308b660) = param_24._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11308b668) = param_24._2_1_;
  _objc_msgSendSuper2(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104658aa0; end: 104658cf3; -[SCWebViewContext initWithHasSubNavigation:initialUrl:resolvedUrl:landingPageServerRedirectCount:landingPageServerResolvedUrl:landingPageServerRedirectResolvedTsMs:exbAfterHtmlUrlResolve:scCidDropDetected:browserType:userAgent:firstContentfulPaintTimestampInMillis:navigationStartTimestampInMillis:domContentLoadedTimestampInMillis:domInteractiveTimestampInMillis:fullLoadTimestampInMillis:responseEndTimestampInMillis:gaHitTypes:gaFirstHitLatency:gaFirstHitTsMs:hasGAPageViewHit:hasGAPageViewHitInLandingPage:webViewGAIncluded:] */

void FUN_104658aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,long param_19,undefined8 param_20,undefined8 param_21,
                  undefined1 param_22)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_4 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_2;
    uStack_80 = param_4;
  }
  if (param_5 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_2;
    uStack_90 = param_5;
  }
  if (param_7 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    uStack_a0 = param_7;
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = param_12;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar2 = param_19;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_12 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  if (lVar2 == 0) {
    param_19 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_19,PTR___sSSN_11034da80);
    _objc_release(lVar2);
  }
  FUN_104658874(param_3,uStack_80,uStack_88,uStack_90,uStack_98,param_6,uStack_a0,uStack_a8,param_8,
                param_9,param_10,param_11,param_12,param_2,param_13,param_14,param_15,param_16,
                param_17,param_18,param_19,param_20,param_21,param_22);
  return;
}



/* Entry: 104658cf4; end: 1046591d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104658cf4(char *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  if (*param_1 == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11308b5c0) = puVar2;
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5c8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5d0);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  if (param_1[0x30] == '\x01') {
    FUN_10465c0b4(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_10465c0b4(&uStack_80,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_10465c0b4(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_10465c0b4(&uStack_80,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308b5d8) = puVar2;
  uStack_88 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b5e0);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  if (param_1[0x50] == '\x01') {
    FUN_10465c0b4(&uStack_90,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_10465c0b4(&uStack_90,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b5e8) = puVar2;
  if (param_1[0x51] == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11308b5f0) = puVar2;
  if (param_1[0x52] == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11308b5f8) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308b600) = *(undefined8 *)(param_1 + 0x58);
  uStack_98 = *(undefined8 *)(param_1 + 0x68);
  uStack_a0 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b608);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  if (param_1[0x78] == '\x01') {
    FUN_10465c0b4(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_10465c0b4(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b610) = puVar2;
  if (param_1[0x88] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b618) = puVar2;
  if (param_1[0x98] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b620) = puVar2;
  if (param_1[0xa8] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b628) = puVar2;
  if (param_1[0xb8] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b630) = puVar2;
  if (param_1[200] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b638) = puVar2;
  auStack_b0[0] = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(unaff_x20 + _DAT_11308b640) = auStack_b0[0];
  if (param_1[0xe0] == '\x01') {
    FUN_10465c0b4(auStack_b0,auStack_b8,0x112d445a8,&UNK_10d990150);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_10465c0b4(auStack_b0,auStack_b8,0x112d445a8,&UNK_10d990150);
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b648) = puVar2;
  if (param_1[0xf0] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308b650) = puVar2;
  *(char *)(unaff_x20 + _DAT_11308b658) = param_1[0xf1];
  *(char *)(unaff_x20 + _DAT_11308b660) = param_1[0xf2];
  func_0x0001037b0e30(param_1);
  *(char *)(unaff_x20 + _DAT_11308b668) = param_1[0xf3];
  _objc_msgSendSuper2(&stack0xffffffffffffff38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046591d8; end: 10465920b; -[SCWebViewContext hash] */

undefined8 FUN_1046591d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10465920c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10465920c; end: 104659793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465920c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b5c0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308b5c8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b5c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b5d0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b5d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b5d8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308b5e0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b5e0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b5e8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b5f0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b5f8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308b600));
  if (((undefined8 *)(unaff_x20 + _DAT_11308b608))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b608);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b610);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b618);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b620);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b628);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b630);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b638);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b640);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b648);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308b650);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b658));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b660));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308b668));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104659794; end: 10465a04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104659794(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x20;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar18 = unaff_x20;
  _swift_getObjectType();
  FUN_10465c0b4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar12 = &lStack_88;
    _swift_dynamicCast(plVar12,auStack_80,PTR___sypN_11034f1a8 + 8,lVar18,6);
    if (((ulong)plVar12 & 1) != 0) {
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b5c0);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b5c0);
      if (lVar16 == 0 || lVar18 == 0) {
        uStack_98 = (uint)(lVar16 == 0 && lVar18 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_98 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar18 = ((long *)(unaff_x20 + _DAT_11308b5c8))[1];
      lVar16 = ((long *)(lStack_88 + _DAT_11308b5c8))[1];
      if (lVar18 == 0 || lVar16 == 0) {
        uStack_9c = (uint)(lVar18 == 0 && lVar16 == 0);
      }
      else {
        lVar13 = *(long *)(unaff_x20 + _DAT_11308b5c8);
        if (lVar13 == *(long *)(lStack_88 + _DAT_11308b5c8) && lVar18 == lVar16) {
          uStack_9c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_9c = (uint)lVar13;
        }
      }
      lVar18 = ((long *)(unaff_x20 + _DAT_11308b5d0))[1];
      lVar16 = ((long *)(lStack_88 + _DAT_11308b5d0))[1];
      uVar9 = (uint)(lVar18 == 0 && lVar16 == 0);
      if ((lVar18 != 0) && (lVar16 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_11308b5d0);
        if ((lVar13 == *(long *)(lStack_88 + _DAT_11308b5d0)) && (lVar18 == lVar16)) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar13;
        }
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b5d8);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b5d8);
      uVar22 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar22 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar18 = ((long *)(unaff_x20 + _DAT_11308b5e0))[1];
      lVar16 = ((long *)(lStack_88 + _DAT_11308b5e0))[1];
      uVar10 = (uint)(lVar18 == 0 && lVar16 == 0);
      if ((lVar18 != 0) && (lVar16 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_11308b5e0);
        if ((lVar13 == *(long *)(lStack_88 + _DAT_11308b5e0)) && (lVar18 == lVar16)) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar13;
        }
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b5e8);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b5e8);
      uVar23 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar23 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b5f0);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b5f0);
      uVar24 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain(lVar16);
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar24 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b5f8);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b5f8);
      uVar25 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain(lVar16);
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar25 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      iVar1 = *(int *)(unaff_x20 + _DAT_11308b600);
      iVar2 = *(int *)(lStack_88 + _DAT_11308b600);
      lVar18 = ((long *)(unaff_x20 + _DAT_11308b608))[1];
      lVar16 = ((long *)(lStack_88 + _DAT_11308b608))[1];
      uVar11 = (uint)(lVar18 == 0 && lVar16 == 0);
      if ((lVar18 != 0) && (lVar16 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_11308b608);
        if ((lVar13 == *(long *)(lStack_88 + _DAT_11308b608)) && (lVar18 == lVar16)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar13;
        }
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b610);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b610);
      uStack_8c = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b618);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b618);
      uStack_90 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_90 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b620);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b620);
      uVar19 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar19 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b628);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b628);
      uStack_94 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_94 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b630);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b630);
      uVar20 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar20 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b638);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b638);
      uVar17 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar17 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar18 = *(long *)(unaff_x20 + _DAT_11308b640);
      uVar14 = (uint)(lVar18 == 0 && *(long *)(lStack_88 + _DAT_11308b640) == 0);
      if ((lVar18 != 0) && (*(long *)(lStack_88 + _DAT_11308b640) != 0)) {
        func_0x00010142cfc4();
        uVar14 = (uint)lVar18;
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b648);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b648);
      uVar21 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain();
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar21 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11308b650);
      lVar18 = *(long *)(lStack_88 + _DAT_11308b650);
      uVar15 = (uint)(lVar16 == 0 && lVar18 == 0);
      if ((lVar16 != 0) && (lVar18 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar18);
        _objc_retain(lVar16);
        lVar13 = lVar16;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar15 = (uint)lVar13;
        _objc_release(lVar16);
        _objc_release(lVar18);
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_11308b658);
      bVar4 = *(byte *)(lStack_88 + _DAT_11308b658);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11308b660);
      bVar6 = *(byte *)(lStack_88 + _DAT_11308b660);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11308b668);
      bVar8 = *(byte *)(lStack_88 + _DAT_11308b668);
      _objc_release(lStack_88);
      return uStack_98 & uStack_9c & uVar9 & uVar22 & uVar10 & uVar23 & uVar24 &
             uVar25 & iVar1 == iVar2 & uVar11 & uStack_8c &
             uStack_90 & uVar19 & uStack_94 & uVar20 & uVar17 &
             uVar14 & uVar21 & uVar15 & ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1) &
             ((bVar7 ^ bVar8) ^ 1);
    }
  }
  return 0;
}



/* Entry: 10465a050; end: 10465a0cf; -[SCWebViewContext isEqual:] */

uint FUN_10465a050(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104659794(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10465a0d0; end: 10465a0d3; -[SCWebViewContext copyWithZone:] */

void FUN_10465a0d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10465a0d4; end: 10465a763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465a0d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f209ea0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b5c8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b5c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f4c414954494e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4c414954494e49,0xeb000000004c5255);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b5d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b5d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4445564c4f534552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445564c4f534552,0xec0000004c52555f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f209ec0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b5e0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b5e0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f209ef0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f209f20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2099c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209f50);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f524553574f5242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524553574f5242,0xec00000045505954);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b608))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b608);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4547415f52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4547415f52455355,0xea0000000000544e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f209f70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f1330);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f1390);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f209fa0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f209fd0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f209ff0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308b640);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
  }
  uVar1 = 0x545f5449485f4147;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f5449485f4147,0xec00000053455059);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20a020);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20a040);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3570);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f3590);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20a060);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


