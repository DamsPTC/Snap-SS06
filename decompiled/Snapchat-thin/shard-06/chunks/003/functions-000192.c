/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10467ce60; end: 10467cee7; -[SCAdAppInstallEventType matchStoreViewClosed:storeViewLoaded:storeViewOpened:storeViewWillClose:storeViewWillOpen:] */

void FUN_10467ce60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10467caf0(FUN_10467da1c,auStack_40,0x10467da44,auStack_60,0x10467da3c,auStack_80,0x10467da48,
                auStack_a0,0x10467da4c,auStack_c0);
  _objc_release(param_1);
  return;
}



/* Entry: 10467cee8; end: 10467cf1b;  */

void FUN_10467cee8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10467cf1c; end: 10467cf53; -[SCAdAppInstallEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467cf1c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bc58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bc78));
  return;
}



/* Entry: 10467cf54; end: 10467d59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467cf54(undefined *param_1,long param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [2];
  undefined8 auStack_a0 [2];
  undefined8 auStack_90 [2];
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  
  uVar2 = param_4 & 0xff;
  uVar3 = param_4 >> 6 & 3;
  bVar9 = (byte)((ulong)param_2 >> 8);
  if (uVar3 == 0) {
    if (uVar2 == 1) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      func_0x00010c01e540();
    }
    uVar10 = 0;
    uVar12 = 0;
    bVar11 = (byte)param_2 & 1;
    bVar7 = bVar9 & 1;
    puVar8 = auStack_b0;
    puStack_c8 = puVar4;
    puStack_c0 = param_1;
  }
  else {
    if (uVar3 == 1) {
      if ((param_4 & 0x3f) == 1) {
        puStack_b8 = (undefined *)0x0;
      }
      else {
        puStack_b8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_allocWithZone();
        func_0x00010c01e540();
      }
      puStack_c0 = (undefined *)0x0;
      puStack_c8 = (undefined *)0x0;
      uVar13 = 0;
      bVar6 = (byte)param_2 & 1;
      bVar9 = bVar9 & 1;
      puVar8 = auStack_a0;
      bVar11 = 2;
      uVar10 = 1;
      uVar12 = 1;
      bVar7 = 2;
      puVar4 = puStack_b8;
      goto LAB_10467d0d8;
    }
    puVar4 = param_1;
    if (((param_3 == 0 && param_2 == 0) && param_1 == (undefined *)0x0) && (uVar2 == 0x80)) {
      puStack_c8 = (undefined *)0x0;
      puStack_c0 = (undefined *)0x0;
      param_1 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      puVar8 = auStack_90;
      uVar12 = 1;
      uVar10 = 2;
      bVar11 = 2;
      bVar7 = 2;
      uVar13 = 1;
      bVar6 = 2;
      bVar9 = 2;
      goto LAB_10467d0d8;
    }
    puStack_c8 = (undefined *)0x0;
    puStack_c0 = (undefined *)0x0;
    uVar10 = 3;
    puVar8 = auStack_80;
    if (uVar2 != 0x80 || (param_1 != (undefined *)0x1 || (param_3 != 0 || param_2 != 0))) {
      uVar10 = 4;
      puVar8 = auStack_70;
    }
    bVar11 = 2;
    uVar12 = 1;
    bVar7 = 2;
  }
  puStack_b8 = (undefined *)0x0;
  bVar6 = 2;
  uVar13 = 1;
  bVar9 = 2;
  param_1 = (undefined *)0x0;
LAB_10467d0d8:
  FUN_10467d854();
  puVar5 = puVar4;
  _objc_allocWithZone();
  puVar5[_DAT_11308bc38] = uVar10;
  puVar1 = (undefined8 *)(puVar5 + _DAT_11308bc40);
  *puVar1 = puStack_c0;
  *(undefined1 *)(puVar1 + 1) = uVar12;
  puVar5[_DAT_11308bc48] = bVar11;
  puVar5[_DAT_11308bc50] = bVar7;
  *(undefined **)(puVar5 + _DAT_11308bc58) = puStack_c8;
  puVar1 = (undefined8 *)(puVar5 + _DAT_11308bc60);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = uVar13;
  puVar5[_DAT_11308bc68] = bVar6;
  puVar5[_DAT_11308bc70] = bVar9;
  *(undefined **)(puVar5 + _DAT_11308bc78) = puStack_b8;
  *puVar8 = puVar5;
  puVar8[1] = puVar4;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467d59c; end: 10467d5ab;  */

ulong FUN_10467d59c(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 10467d5ac; end: 10467d78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467d5ac(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_2;
  FUN_10467d854();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308bc38) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308bc40);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)(lVar4 + _DAT_11308bc48) = (char)param_2;
  *(undefined1 *)(lVar4 + _DAT_11308bc50) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11308bc58) = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308bc60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11308bc68) = 2;
  *(undefined1 *)(lVar4 + _DAT_11308bc70) = 2;
  *(undefined8 *)(lVar4 + _DAT_11308bc78) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 10467d78c; end: 10467d853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467d78c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10467d854();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_11308bc38) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308bc40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar3 + _DAT_11308bc48) = 2;
  *(undefined1 *)(lVar3 + _DAT_11308bc50) = 2;
  *(undefined8 *)(lVar3 + _DAT_11308bc58) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308bc60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar3 + _DAT_11308bc68) = 2;
  *(undefined1 *)(lVar3 + _DAT_11308bc70) = 2;
  *(undefined8 *)(lVar3 + _DAT_11308bc78) = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467d854; end: 10467d873;  */

void FUN_10467d854(void)

{
  _objc_opt_self(&PTR_PTR_1129cf1d8);
  return;
}



/* Entry: 10467d874; end: 10467d9db;  */

int FUN_10467d874(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10467d8f0;
        goto LAB_10467d8d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10467d8d4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10467d8f0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10467d9dc; end: 10467da1b;  */

void FUN_10467d9dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308bca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd25670;
  _swift_getWitnessTable(&UNK_10dd25670,&UNK_110795e18);
  puRam000000011308bca8 = puVar1;
  return;
}



/* Entry: 10467da1c; end: 10467da4f;  */

void FUN_10467da1c(uint param_1,uint param_2,undefined8 param_3)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010467da38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2 & 1,param_3);
  return;
}



/* Entry: 10467da50; end: 10467da5f; -[SCAdAppInstallEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467da50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bcb0));
  return;
}



/* Entry: 10467da60; end: 10467da77; -[SCAdAppInstallEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467da60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bcb8));
  return;
}



/* Entry: 10467da78; end: 10467dbb7; -[SCAdAppInstallEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467da78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bcb0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bcb8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10467dbb8; end: 10467dc3b; -[SCAdAppInstallEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467dbb8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bcb0);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bcb8);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467dc3c; end: 10467dd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467dc3c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bcb0);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308bcb8);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308bcb8);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10467dd14; end: 10467dd93; -[SCAdAppInstallEventV2 isEqual:] */

uint FUN_10467dd14(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467dc3c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467dd94; end: 10467dd97; -[SCAdAppInstallEventV2 copyWithZone:] */

void FUN_10467dd94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467dd98; end: 10467ddb3; -[SCAdAppInstallEventV2 description] */

void FUN_10467dd98(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467ddb4; end: 10467de2f; -[SCAdAppInstallEventV2 init] */

void FUN_10467ddb4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdAppInstallEventV2Wrapper.swift",0x39,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ddfc);
  (*pcVar1)();
}



/* Entry: 10467de30; end: 10467de67; -[SCAdAppInstallEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467de30(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bcb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bcb8));
  return;
}



/* Entry: 10467de68; end: 10467de87;  */

void FUN_10467de68(void)

{
  _objc_opt_self(&PTR_PTR_1129cf2d8);
  return;
}



/* Entry: 10467de88; end: 10467de8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467de88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bcb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bcb8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467de8c; end: 10467df3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467de8c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11308bce8) = (byte)param_2 & 1;
  *(byte *)(unaff_x20 + _DAT_11308bcf0) = (byte)((uint)param_2 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bcf8) = param_1;
  *(byte *)(unaff_x20 + _DAT_11308bd00) = (byte)param_3 & 1;
  *(byte *)(unaff_x20 + _DAT_11308bd08) = (byte)((ulong)param_3 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd10) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467df40; end: 10467df4f; -[SCAdAppInstallParseResult loadedOnEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10467df40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bce8);
}



/* Entry: 10467df50; end: 10467df5f; -[SCAdAppInstallParseResult loadedOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10467df50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bcf0);
}



/* Entry: 10467df60; end: 10467df6f; -[SCAdAppInstallParseResult visiblePageLoadTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467df60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bcf8);
}



/* Entry: 10467df70; end: 10467df7f; -[SCAdAppInstallParseResult skOverlayEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10467df70(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bd00);
}



/* Entry: 10467df80; end: 10467df8f; -[SCAdAppInstallParseResult customProductPageEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10467df80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bd08);
}



/* Entry: 10467df90; end: 10467df9f; -[SCAdAppInstallParseResult appInstallStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467df90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bd10);
}



/* Entry: 10467dfa0; end: 10467e053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467dfa0(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308bce8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11308bcf0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308bcf8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11308bd00) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11308bd08) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd10) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467e054; end: 10467e107; -[SCAdAppInstallParseResult initWithLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:skOverlayEnabled:customProductPageEnabled:appInstallStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467e054(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined1 *)(param_2 + _DAT_11308bce8) = param_4;
  *(undefined1 *)(param_2 + _DAT_11308bcf0) = param_5;
  *(undefined8 *)(param_2 + _DAT_11308bcf8) = param_1;
  *(undefined1 *)(param_2 + _DAT_11308bd00) = param_6;
  *(undefined1 *)(param_2 + _DAT_11308bd08) = param_7;
  *(undefined8 *)(param_2 + _DAT_11308bd10) = param_8;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467e108; end: 10467e1e3; -[SCAdAppInstallParseResult hash] */

void FUN_10467e108(void)

{
  func_0x00010467e128();
  return;
}



/* Entry: 10467e1e4; end: 10467e31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10467e1e4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar10 = &lStack_98;
    _swift_dynamicCast(plVar10,auStack_90,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar10 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_11308bce8);
      bVar2 = *(byte *)(lStack_98 + _DAT_11308bce8);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11308bcf0);
      bVar4 = *(byte *)(lStack_98 + _DAT_11308bcf0);
      dVar13 = *(double *)(unaff_x20 + _DAT_11308bcf8);
      dVar14 = *(double *)(lStack_98 + _DAT_11308bcf8);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11308bd00);
      bVar6 = *(byte *)(lStack_98 + _DAT_11308bd00);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11308bd08);
      bVar8 = *(byte *)(lStack_98 + _DAT_11308bd08);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11308bd10);
      uVar12 = *(undefined8 *)(lStack_98 + _DAT_11308bd10);
      _objc_release();
      if ((int)uVar11 != (int)uVar12) {
        return 0;
      }
      return dVar13 == dVar14 & ((bVar1 ^ bVar2 | bVar3 ^ bVar4) ^ 0xff) & (bVar5 ^ bVar6 ^ 0xff) &
             (bVar7 ^ bVar8 ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 10467e31c; end: 10467e39b; -[SCAdAppInstallParseResult isEqual:] */

uint FUN_10467e31c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467e1e4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467e39c; end: 10467e39f; -[SCAdAppInstallParseResult copyWithZone:] */

void FUN_10467e39c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467e3a0; end: 10467e3bb; -[SCAdAppInstallParseResult description] */

void FUN_10467e3a0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467e3bc; end: 10467e457; -[SCAdAppInstallParseResult init] */

void FUN_10467e3bc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdAppInstallParseResultWrapper.swift",0x3d,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467e404);
  (*pcVar1)();
}



/* Entry: 10467e458; end: 10467e467; -[SCAdCaptionCtaImpressionEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467e458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bd40));
  return;
}



/* Entry: 10467e468; end: 10467e47b; -[SCAdCaptionCtaImpressionEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467e468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bd48));
  return;
}



/* Entry: 10467e47c; end: 10467e557; -[SCAdCaptionCtaImpressionEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467e47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bd40) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bd48) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10467e558; end: 10467e5db; -[SCAdCaptionCtaImpressionEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467e558(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bd40);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bd48);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467e5dc; end: 10467e6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467e5dc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bd40);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308bd48);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308bd48);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10467e6b4; end: 10467e733; -[SCAdCaptionCtaImpressionEvent isEqual:] */

uint FUN_10467e6b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467e5dc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467e734; end: 10467e737; -[SCAdCaptionCtaImpressionEvent copyWithZone:] */

void FUN_10467e734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467e738; end: 10467e7f7; -[SCAdCaptionCtaImpressionEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467e738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10467e7f8; end: 10467e827;  */

void FUN_10467e7f8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10467e828(param_1);
  return;
}



/* Entry: 10467e828; end: 10467ea3b;  */

undefined8 FUN_10467e828(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_10467e9e4:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_10467ea3c(0,0x11308bd50,&PTR_PTR_1126b9150);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x544e455645;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_10467e9e4;
      }
      uVar2 = 0;
      FUN_10467ea3c(0,0x11308bd58,&PTR_PTR_1126b9108);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c000060();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10467ea3c; end: 10467ea7b;  */

void FUN_10467ea3c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10467ea7c; end: 10467eaa3; -[SCAdCaptionCtaImpressionEvent initWithCoder:] */

void FUN_10467ea7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10467e828();
  return;
}



/* Entry: 10467eaa4; end: 10467eabf; -[SCAdCaptionCtaImpressionEvent description] */

void FUN_10467eaa4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467eac0; end: 10467eb3b; -[SCAdCaptionCtaImpressionEvent init] */

void FUN_10467eac0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdCaptionCtaImpressionEventWrapper.swift",0x41,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467eb08);
  (*pcVar1)();
}



/* Entry: 10467eb3c; end: 10467eb73; -[SCAdCaptionCtaImpressionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467eb3c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bd40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bd48));
  return;
}



/* Entry: 10467eb74; end: 10467eb93;  */

void FUN_10467eb74(void)

{
  _objc_opt_self(&PTR_PTR_1129cf498);
  return;
}



/* Entry: 10467eb94; end: 10467eb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467eb94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bd40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd48) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467eb98; end: 10467eba7; -[SCAdCollectionItemInteraction attachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467eb98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bd88);
}



/* Entry: 10467eba8; end: 10467ebb7; -[SCAdCollectionItemInteraction collectionItemIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467eba8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bd90);
}



/* Entry: 10467ebb8; end: 10467ebc7; -[SCAdCollectionItemInteraction botTimeViewedInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467ebb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bd98);
}



/* Entry: 10467ebc8; end: 10467ebd7; -[SCAdCollectionItemInteraction deeplinkParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467ebc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bda0));
  return;
}



/* Entry: 10467ebd8; end: 10467ebe7; -[SCAdCollectionItemInteraction webViewParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467ebd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bda8));
  return;
}



/* Entry: 10467ebe8; end: 10467ebf7; -[SCAdCollectionItemInteraction appInstallParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467ebe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bdb0));
  return;
}



/* Entry: 10467ebf8; end: 10467ecab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467ebf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bd88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bda0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308bda8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308bdb0) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467ecac; end: 10467ed7b; -[SCAdCollectionItemInteraction initWithAttachmentType:collectionItemIndex:botTimeViewedInMillis:deeplinkParseResult:webViewParseResult:appInstallParseResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467ecac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11308bd88) = param_4;
  *(undefined8 *)(param_2 + _DAT_11308bd90) = param_5;
  *(undefined8 *)(param_2 + _DAT_11308bd98) = param_1;
  *(undefined8 *)(param_2 + _DAT_11308bda0) = param_6;
  *(undefined8 *)(param_2 + _DAT_11308bda8) = param_7;
  *(undefined8 *)(param_2 + _DAT_11308bdb0) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 10467ed7c; end: 10467edab;  */

void FUN_10467ed7c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10467edac(param_1);
  return;
}



/* Entry: 10467edac; end: 10467f087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467edac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_628;
  long lStack_620;
  undefined1 auStack_618 [352];
  undefined1 auStack_4b8 [352];
  long lStack_358;
  long lStack_350;
  undefined1 auStack_338 [352];
  undefined1 auStack_1d8 [360];
  
  _swift_getObjectType();
  uVar11 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308bd88) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd90) = uVar11;
  *(undefined8 *)(unaff_x20 + _DAT_11308bd98) = param_1[2];
  lVar10 = param_1[7];
  if (lVar10 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar13 = param_1[9];
    bVar3 = *(byte *)(param_1 + 8);
    uVar14 = param_1[6];
    uVar2 = *(undefined4 *)(param_1 + 5);
    uVar11 = param_1[3];
    uVar15 = param_1[4];
    lVar7 = 0;
    FUN_1046824ec();
    lVar9 = lVar7;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_11308bed8) = uVar11;
    *(undefined8 *)(lVar9 + _DAT_11308bee0) = uVar15;
    *(byte *)(lVar9 + _DAT_11308bee8) = (byte)uVar2 & 1;
    *(byte *)(lVar9 + _DAT_11308bef0) = (byte)((uint)uVar2 >> 8) & 1;
    puVar1 = (undefined8 *)(lVar9 + _DAT_11308bef8);
    *puVar1 = uVar14;
    puVar1[1] = lVar10;
    *(byte *)(lVar9 + _DAT_11308bf00) = bVar3 & 1;
    *(undefined8 *)(lVar9 + _DAT_11308bf08) = uVar13;
    puVar4 = PTR_s_init_1125d9248;
    lStack_628 = lVar9;
    lStack_620 = lVar7;
    _swift_bridgeObjectRetain(lVar10);
    plVar6 = &lStack_628;
    _objc_msgSendSuper2(plVar6,puVar4);
  }
  *(long **)(unaff_x20 + _DAT_11308bda0) = plVar6;
  _memcpy(auStack_338,param_1 + 10,0x160);
  iVar5 = (int)auStack_338;
  func_0x0001046632e8();
  if (iVar5 == 1) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_1d8,auStack_338,0x160);
    FUN_1046a363c(0);
    _objc_allocWithZone();
    _memcpy(auStack_4b8,auStack_338,0x160);
    func_0x00010467f5e8(auStack_4b8,auStack_618);
    puVar8 = auStack_1d8;
    FUN_1046a3240();
  }
  *(undefined1 **)(unaff_x20 + _DAT_11308bda8) = puVar8;
  uVar12 = param_1[0x36];
  if ((uVar12 & 0xff) == 2) {
    func_0x000104663478(param_1);
    plVar6 = (long *)0x0;
  }
  else {
    uVar11 = param_1[0x39];
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar15 = param_1[0x37];
    lVar9 = 0;
    func_0x00010467e438();
    lVar10 = lVar9;
    _objc_allocWithZone();
    *(byte *)(lVar10 + _DAT_11308bce8) = (byte)uVar12 & 1;
    *(byte *)(lVar10 + _DAT_11308bcf0) = (byte)(uVar12 >> 8) & 1;
    *(undefined8 *)(lVar10 + _DAT_11308bcf8) = uVar15;
    *(byte *)(lVar10 + _DAT_11308bd00) = (byte)uVar2 & 1;
    *(byte *)(lVar10 + _DAT_11308bd08) = (byte)((uint)uVar2 >> 8) & 1;
    *(undefined8 *)(lVar10 + _DAT_11308bd10) = uVar11;
    plVar6 = &lStack_358;
    lStack_358 = lVar10;
    lStack_350 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    func_0x000104663478(param_1);
  }
  *(long **)(unaff_x20 + _DAT_11308bdb0) = plVar6;
  _objc_msgSendSuper2(&stack0xfffffffffffffcb8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467f088; end: 10467f0bb; -[SCAdCollectionItemInteraction hash] */

undefined8 FUN_10467f088(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10467f0bc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467f0bc; end: 10467f203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467f0bc(void)

{
  double dVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bd88));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bd90));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308bd98) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308bd98);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if (*(long *)(unaff_x20 + _DAT_11308bda0) == 0) {
    dVar1 = 0.0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104681d40();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308bda8) == 0) {
    dVar1 = 0.0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046a2ec8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308bdb0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010467e128();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10467f204; end: 10467f453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467f204(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long unaff_x20;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  long lStack_98;
  long alStack_90 [4];
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_90);
  if (alStack_90[3] == 0) {
    func_0x00010006e7f4(alStack_90);
  }
  else {
    plVar4 = &lStack_98;
    _swift_dynamicCast(plVar4,alStack_90,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308bd88);
      iVar2 = *(int *)(lStack_98 + _DAT_11308bd88);
      lVar11 = *(long *)(unaff_x20 + _DAT_11308bd90);
      lVar12 = *(long *)(lStack_98 + _DAT_11308bd90);
      dVar13 = *(double *)(unaff_x20 + _DAT_11308bd98);
      dVar14 = *(double *)(lStack_98 + _DAT_11308bd98);
      if (*(long *)(unaff_x20 + _DAT_11308bda0) == 0) {
        uVar9 = (uint)(*(long *)(lStack_98 + _DAT_11308bda0) == 0);
      }
      else {
        lVar10 = *(long *)(lStack_98 + _DAT_11308bda0);
        if (lVar10 == 0) {
          lVar5 = 0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          lVar5 = 0;
          FUN_1046824ec();
        }
        alStack_90[0] = lVar10;
        alStack_90[3] = lVar5;
        _objc_retain(lVar10);
        uVar9 = 0;
        FUN_104681e38();
        func_0x00010006e7f4(alStack_90);
      }
      if (*(long *)(unaff_x20 + _DAT_11308bda8) == 0) {
        uVar8 = (uint)(*(long *)(lStack_98 + _DAT_11308bda8) == 0);
      }
      else {
        lVar10 = *(long *)(lStack_98 + _DAT_11308bda8);
        if (lVar10 == 0) {
          lVar5 = 0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          lVar5 = 0;
          FUN_1046a363c();
        }
        alStack_90[0] = lVar10;
        alStack_90[3] = lVar5;
        _objc_retain(lVar10);
        plVar4 = alStack_90;
        FUN_1046a2f98(plVar4);
        uVar8 = (uint)plVar4;
        func_0x00010006e7f4(alStack_90);
      }
      if (*(long *)(unaff_x20 + _DAT_11308bdb0) == 0) {
        lVar5 = *(long *)(lStack_98 + _DAT_11308bdb0);
        lVar10 = lVar5;
        _objc_retain(lVar5);
        _objc_release(lStack_98);
        if (lVar5 == 0) {
          uVar3 = 1;
        }
        else {
          _objc_release(lVar10);
          uVar3 = 0;
        }
      }
      else {
        lVar10 = *(long *)(lStack_98 + _DAT_11308bdb0);
        if (lVar10 == 0) {
          uVar6 = 0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          uVar6 = 0;
          func_0x00010467e438();
        }
        alStack_90[0] = lVar10;
        alStack_90[3] = uVar6;
        _objc_retain(lVar10);
        plVar4 = alStack_90;
        FUN_10467e1e4(plVar4);
        uVar3 = (uint)plVar4;
        _objc_release(lStack_98);
        func_0x00010006e7f4(alStack_90);
      }
      uVar7 = 0;
      if (dVar13 == dVar14) {
        uVar7 = (uint)(iVar1 == iVar2 && lVar11 == lVar12);
      }
      if ((uVar7 & uVar9) == 1) {
        uVar8 = uVar8 & uVar3;
        goto LAB_10467f424;
      }
    }
  }
  uVar8 = 0;
LAB_10467f424:
  return uVar8 & 1;
}



/* Entry: 10467f454; end: 10467f4d3; -[SCAdCollectionItemInteraction isEqual:] */

uint FUN_10467f454(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467f204(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467f4d4; end: 10467f4d7; -[SCAdCollectionItemInteraction copyWithZone:] */

void FUN_10467f4d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467f4d8; end: 10467f523; -[SCAdCollectionItemInteraction description] */

void FUN_10467f4d8(undefined8 param_1)

{
  undefined1 auStack_1f0 [464];
  
  _objc_retain();
  FUN_10467f624(auStack_1f0);
  _objc_release(param_1);
  func_0x000104663478(auStack_1f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467f524; end: 10467f59f; -[SCAdCollectionItemInteraction init] */

void FUN_10467f524(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdCollectionItemInteractionWrapper.swift",0x41,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467f56c);
  (*pcVar1)();
}



/* Entry: 10467f5a0; end: 10467f623; -[SCAdCollectionItemInteraction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467f5a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bda0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bda8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bdb0));
  return;
}



/* Entry: 10467f624; end: 10467f7b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467f624(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [352];
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uStack_210 = *(undefined8 *)(param_2 + _DAT_11308bd88);
  uStack_208 = *(undefined8 *)(param_2 + _DAT_11308bd90);
  uStack_200 = *(undefined8 *)(param_2 + _DAT_11308bd98);
  if (*(long *)(param_2 + _DAT_11308bda0) == 0) {
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 1;
  }
  else {
    _objc_retain();
    FUN_1046823dc(&uStack_1f8);
  }
  lVar1 = *(long *)(param_2 + _DAT_11308bda8);
  if (lVar1 == 0) {
    FUN_10465ec9c(auStack_1c0);
  }
  else {
    _objc_retain();
    FUN_1046a355c(auStack_1c0);
    _objc_release(lVar1);
    FUN_10467108c(auStack_1c0);
  }
  lVar1 = *(long *)(param_2 + _DAT_11308bdb0);
  if (lVar1 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 2;
    uStack_48 = 0;
  }
  else {
    uStack_58 = *(undefined8 *)(lVar1 + _DAT_11308bcf8);
    uStack_48 = *(undefined8 *)(lVar1 + _DAT_11308bd10);
    uStack_60 = 0x100;
    if (*(char *)(lVar1 + _DAT_11308bcf0) == '\0') {
      uStack_60 = 0;
    }
    uStack_60 = uStack_60 | *(byte *)(lVar1 + _DAT_11308bce8);
    uStack_50 = 0x100;
    if (*(char *)(lVar1 + _DAT_11308bd08) == '\0') {
      uStack_50 = 0;
    }
    uStack_50 = uStack_50 | *(byte *)(lVar1 + _DAT_11308bd00);
  }
  _memcpy(param_1,&uStack_210,0x1d0);
  return;
}



/* Entry: 10467f7b8; end: 10467f7d7;  */

void FUN_10467f7b8(void)

{
  _objc_opt_self(&PTR_PTR_1129cf570);
  return;
}



/* Entry: 10467f7d8; end: 10467f873; -[SCAdCollectionParseResult collectionItemInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467f7d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308bde0);
  FUN_10467f7b8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10467f874; end: 10467f8df; -[SCAdCollectionParseResult initWithCollectionItemInteractions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467f874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_10467f7b8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  *(undefined8 *)(param_1 + _DAT_11308bde0) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467f8e0; end: 10467f90f;  */

void FUN_10467f8e0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10467f910(param_1);
  return;
}



/* Entry: 10467f910; end: 10467fa67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467f910(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_410 [464];
  undefined *puStack_240;
  undefined1 auStack_238 [472];
  
  _swift_getObjectType();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_240 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_104670708(0,lVar4,0);
    puVar5 = puStack_240;
    uVar2 = 0;
    FUN_10467f7b8(0);
    lVar6 = 0x20;
    do {
      _memcpy(auStack_238,param_1 + lVar6,0x1d0);
      _objc_allocWithZone(uVar2);
      FUN_10466343c(auStack_238,auStack_410);
      puVar3 = auStack_238;
      FUN_10467edac();
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_240 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_104670708(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_240;
      *(ulong *)(puStack_240 + 0x10) = uVar1 + 1;
      *(undefined1 **)(puStack_240 + uVar1 * 8 + 0x20) = puVar3;
      lVar6 = lVar6 + 0x1d0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308bde0) = puVar5;
  _objc_msgSendSuper2(&stack0xfffffffffffffbe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467fa68; end: 10467fbc3; -[SCAdCollectionParseResult hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467fa68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308bde0);
  uVar1 = 0;
  FUN_10467f7b8(0);
  _objc_retain(param_1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467fbc4; end: 10467fc43; -[SCAdCollectionParseResult isEqual:] */

uint FUN_10467fbc4(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010467fb04(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467fc44; end: 10467fc47; -[SCAdCollectionParseResult copyWithZone:] */

void FUN_10467fc44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467fc48; end: 10467fc83; -[SCAdCollectionParseResult description] */

void FUN_10467fc48(undefined8 param_1)

{
  _objc_retain();
  FUN_10467fd10();
  _swift_bridgeObjectRelease();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467fc84; end: 10467fcff; -[SCAdCollectionParseResult init] */

void FUN_10467fc84(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdCollectionParseResultWrapper.swift",0x3d,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467fccc);
  (*pcVar1)();
}



/* Entry: 10467fd00; end: 10467fd0f; -[SCAdCollectionParseResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467fd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308bde0));
  return;
}



/* Entry: 10467fd10; end: 10468027f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10467fd10(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_5a8 [56];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_560;
  undefined1 uStack_55f;
  undefined6 uStack_55e;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 uStack_548;
  undefined7 uStack_547;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  undefined1 uStack_527;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [296];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [304];
  
  uVar19 = *(ulong *)(param_1 + _DAT_11308bde0);
  if (uVar19 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar12 = uVar19;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    puStack_198 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010467073c(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x104680280);
      (*pcVar8)();
    }
    uVar15 = 0;
    puVar14 = puStack_198;
    do {
      if ((uVar19 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(uVar19 + uVar15 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar9 = uVar15;
        func_0x000104670500(uVar15,uVar19);
      }
      uStack_368 = *(undefined8 *)(uVar9 + _DAT_11308bd88);
      uStack_360 = *(undefined8 *)(uVar9 + _DAT_11308bd90);
      uStack_358 = *(undefined8 *)(uVar9 + _DAT_11308bd98);
      lVar11 = *(long *)(uVar9 + _DAT_11308bda0);
      if (lVar11 == 0) {
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_330 = 1;
        uStack_328 = 0;
        uStack_320 = 0;
      }
      else {
        uStack_570 = *(undefined8 *)(lVar11 + _DAT_11308bed8);
        uStack_568 = *(undefined8 *)(lVar11 + _DAT_11308bee0);
        uStack_560 = *(undefined1 *)(lVar11 + _DAT_11308bee8);
        uStack_55f = *(undefined1 *)(lVar11 + _DAT_11308bef0);
        uStack_558 = *(undefined8 *)(lVar11 + _DAT_11308bef8);
        uStack_550 = ((undefined8 *)(lVar11 + _DAT_11308bef8))[1];
        uStack_548 = *(undefined1 *)(lVar11 + _DAT_11308bf00);
        uStack_540 = *(undefined8 *)(lVar11 + _DAT_11308bf08);
        uStack_538 = uStack_570;
        uStack_530 = uStack_568;
        uStack_528 = uStack_560;
        uStack_527 = uStack_55f;
        uStack_520 = uStack_558;
        uStack_518 = uStack_550;
        uStack_510 = uStack_548;
        uStack_508 = uStack_540;
        _swift_bridgeObjectRetain();
        FUN_104663fa0(&uStack_570,auStack_5a8);
        FUN_104662df8(&uStack_538);
        uStack_340 = CONCAT62(uStack_55e,CONCAT11(uStack_55f,uStack_560));
        uStack_348 = uStack_568;
        uStack_350 = uStack_570;
        uStack_338 = uStack_558;
        uStack_328 = CONCAT71(uStack_547,uStack_548);
        uStack_330 = uStack_550;
        uStack_320 = uStack_540;
      }
      lVar11 = *(long *)(uVar9 + _DAT_11308bda8);
      if (lVar11 == 0) {
        FUN_10465ec9c(&uStack_538);
        _memcpy(auStack_318,&uStack_538,0x160);
      }
      else {
        lVar16 = *(long *)(lVar11 + _DAT_11308cce0);
        if (lVar16 == 0) {
          func_0x000104671090(&uStack_538);
          _memcpy(auStack_318,&uStack_538,0x121);
          _objc_retain(lVar11);
        }
        else {
          _objc_retain(lVar11);
          _objc_retain(lVar16);
          FUN_1046a2878(auStack_190);
          _memcpy(auStack_318,auStack_190,0x121);
          func_0x0001046710c8(auStack_318);
        }
        lVar16 = *(long *)(lVar11 + _DAT_11308cce8);
        if (lVar16 == 0) {
          uStack_1c8 = 0;
          uStack_1f0 = 1;
          lStack_1e0 = 0;
          uStack_1d8 = 0;
          uStack_1e8 = 0;
LAB_1046800d8:
          lStack_1d0 = 0;
          uVar17 = *(undefined8 *)(lVar11 + _DAT_11308ccf0);
          _objc_release(lVar11);
          uStack_1c0 = uVar17;
        }
        else {
          uVar17 = *(undefined8 *)(lVar16 + _DAT_11308cf70);
          uVar2 = *(undefined1 *)(lVar16 + _DAT_11308cf78);
          uVar3 = *(undefined1 *)(lVar16 + _DAT_11308cf80);
          lVar18 = *(long *)(lVar16 + _DAT_11308cf88);
          bVar1 = lVar18 == 0;
          if (bVar1) {
            _swift_bridgeObjectRetain(uVar17);
            _objc_retain(lVar16);
          }
          else {
            _swift_bridgeObjectRetain(uVar17);
            _objc_retain(lVar16);
            func_0x00010c0b4ca0();
          }
          lVar10 = *(long *)(lVar16 + _DAT_11308cf90);
          if (lVar10 == 0) {
            _objc_release(lVar16);
            uStack_1e8._0_2_ = CONCAT11(uVar3,uVar2);
            uStack_1c8 = 1;
            uStack_1d8 = CONCAT71(uStack_1d8._1_7_,bVar1);
            uStack_1f0 = uVar17;
            lStack_1e0 = lVar18;
            goto LAB_1046800d8;
          }
          func_0x00010c0b4ca0();
          _objc_release(lVar16);
          uStack_1e8._0_2_ = CONCAT11(uVar3,uVar2);
          uStack_1d8 = CONCAT71(uStack_1d8._1_7_,bVar1);
          uStack_1c8 = 0;
          uVar13 = *(undefined8 *)(lVar11 + _DAT_11308ccf0);
          uStack_1f0 = uVar17;
          lStack_1e0 = lVar18;
          lStack_1d0 = lVar10;
          _objc_release(lVar11);
          uStack_1c0 = uVar13;
        }
        func_0x00010467108c(auStack_318);
      }
      lVar11 = *(long *)(uVar9 + _DAT_11308bdb0);
      if (lVar11 == 0) {
        _objc_release(uVar9);
        uVar17 = 0;
        uStack_1a8 = 0;
        uVar13 = 0;
        uStack_1b8 = 2;
      }
      else {
        bVar4 = *(byte *)(lVar11 + _DAT_11308bce8);
        cVar5 = *(char *)(lVar11 + _DAT_11308bcf0);
        uVar17 = *(undefined8 *)(lVar11 + _DAT_11308bcf8);
        bVar6 = *(byte *)(lVar11 + _DAT_11308bd00);
        cVar7 = *(char *)(lVar11 + _DAT_11308bd08);
        uVar13 = *(undefined8 *)(lVar11 + _DAT_11308bd10);
        _objc_release(uVar9);
        uStack_1b8 = 0x100;
        if (cVar5 == '\0') {
          uStack_1b8 = 0;
        }
        uStack_1b8 = uStack_1b8 | bVar4;
        uStack_1a8 = 0x100;
        if (cVar7 == '\0') {
          uStack_1a8 = 0;
        }
        uStack_1a8 = uStack_1a8 | bVar6;
      }
      uStack_1b0 = uVar17;
      uStack_1a0 = uVar13;
      _memcpy(&uStack_538,&uStack_368,0x1d0);
      uVar9 = *(ulong *)(puVar14 + 0x10);
      puStack_198 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar9) {
        func_0x00010467073c(1 < *(ulong *)(puVar14 + 0x18),uVar9 + 1,1);
      }
      puVar14 = puStack_198;
      uVar15 = uVar15 + 1;
      *(ulong *)(puStack_198 + 0x10) = uVar9 + 1;
      _memcpy(puStack_198 + uVar9 * 0x1d0 + 0x20,&uStack_538,0x1d0);
    } while (uVar12 != uVar15);
  }
  return puVar14;
}



/* Entry: 104680280; end: 10468029f;  */

void FUN_104680280(void)

{
  _objc_opt_self(&PTR_PTR_1129cf660);
  return;
}



/* Entry: 1046802a0; end: 1046802af; -[SCAdDeeplinkEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046802a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308be10));
  return;
}



/* Entry: 1046802b0; end: 1046802bf; -[SCAdDeeplinkEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046802b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308be18));
  return;
}



/* Entry: 1046802c0; end: 104680323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046802c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308be10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308be18) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104680324; end: 10468039b; -[SCAdDeeplinkEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308be10) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308be18) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10468039c; end: 104680493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468039c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_190 [160];
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_allocWithZone();
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x000102c62cd4(&uStack_f0,auStack_190);
  puVar3 = &uStack_f0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308be10) = puVar3;
  uVar4 = param_1[0x14];
  uVar1 = param_1[0x15];
  uVar2 = *(undefined1 *)(param_1 + 0x16);
  FUN_1046634ac(uVar4,uVar1,uVar2);
  FUN_104681268(uVar4,uVar1,uVar2);
  func_0x00010466e58c(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308be18) = uVar4;
  _objc_msgSendSuper2(auStack_1a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104680494; end: 104680513; -[SCAdDeeplinkEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104680494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  FUN_10468080c();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104680514; end: 104680623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104680514(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308be10);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308be18);
      uVar2 = 0;
      FUN_10468165c();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      func_0x00010468094c(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_10468060c;
    }
  }
  uVar5 = 0;
LAB_10468060c:
  return uVar5 & 1;
}



/* Entry: 104680624; end: 1046806a3; -[SCAdDeeplinkEvent isEqual:] */

uint FUN_104680624(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104680514(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046806a4; end: 1046806a7; -[SCAdDeeplinkEvent copyWithZone:] */

void FUN_1046806a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046806a8; end: 104680737; -[SCAdDeeplinkEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046806a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [160];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308be10);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_10469d68c(auStack_e8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308be18);
  _objc_retain();
  func_0x000104681510();
  _objc_release(param_1);
  uStack_48 = uVar1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x00010466e58c(auStack_e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680738; end: 1046807b3; -[SCAdDeeplinkEvent init] */

void FUN_104680738(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdDeeplinkEventWrapper.swift",0x35,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104680780);
  (*pcVar1)();
}



/* Entry: 1046807b4; end: 1046807eb; -[SCAdDeeplinkEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046807b4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308be10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308be18));
  return;
}



/* Entry: 1046807ec; end: 10468080b;  */

void FUN_1046807ec(void)

{
  _objc_opt_self(&PTR_PTR_1129cf728);
  return;
}


