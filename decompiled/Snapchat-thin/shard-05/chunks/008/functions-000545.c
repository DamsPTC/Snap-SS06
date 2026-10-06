/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041bd9dc; end: 1041bda23;  */

undefined8 FUN_1041bd9dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041bda24; end: 1041bdacf; -[SCAdAttachmentCommonAdConfig isEqual:] */

uint FUN_1041bda24(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041bd6ac(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041bdad0; end: 1041bdad3; -[SCAdAttachmentCommonAdConfig copyWithZone:] */

void FUN_1041bdad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041bdad4; end: 1041bddeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bdad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113067eb0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113067eb0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113067eb8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113067eb8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113067ec0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113067ec0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113067ed8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113067ed8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454352554f53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x444e495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1eeb70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1eeb90);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1041bddec; end: 1041bde3b; -[SCAdAttachmentCommonAdConfig encodeWithCoder:] */

void FUN_1041bddec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1041bdad4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041bde3c; end: 1041bde6b;  */

void FUN_1041bde3c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041bde6c(param_1);
  return;
}



/* Entry: 1041bde6c; end: 1041be4ab;  */

undefined8 FUN_1041bde6c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_c8 = 0;
    lVar8 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_b8;
    uStack_c8 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_c8 = 0;
      lVar8 = 0;
    }
  }
  uVar2 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_d0 = 0;
    lVar9 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_b8;
    uStack_d0 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_d0 = 0;
      lVar9 = 0;
    }
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar10 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar10 = lStack_b8;
    uVar2 = uStack_c0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
      lVar10 = 0;
    }
  }
  uVar5 = 0x455059545f4441;
  uVar7 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  func_0x000100db40d8();
  if ((uVar7 & 0xff) != 1) {
    uVar5 = 0x55444f52505f4441;
    uVar7 = 0x545f5443;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
    func_0x00010bf66f40();
    _objc_release(uVar5);
    func_0x000100db40d8();
    if ((uVar7 & 0xff) != 1) {
      uVar5 = 0x454352554f53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (uVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uStack_f8 = 0;
        lVar11 = 0;
      }
      else {
        puVar4 = &uStack_c0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar11 = lStack_b8;
        uStack_f8 = uStack_c0;
        if ((int)puVar4 == 0) {
          uStack_f8 = 0;
          lVar11 = 0;
        }
      }
      uVar5 = 0x444e495f50414e53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
      func_0x00010bf66f40();
      _objc_release(uVar5);
      uVar5 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1eeb70);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (uVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_c0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar5,6);
        uVar5 = uStack_c0;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1eeb90);
      uVar3 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar6);
      if (uVar3 < 5) {
        if (lVar8 == 0) {
          uStack_c8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c8,lVar8);
          _swift_bridgeObjectRelease(lVar8);
        }
        if (lVar9 == 0) {
          uStack_d0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d0,lVar9);
          _swift_bridgeObjectRelease(lVar9);
        }
        if (lVar10 == 0) {
          uVar2 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar10);
          _swift_bridgeObjectRelease(lVar10);
        }
        if (lVar11 == 0) {
          uStack_f8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f8,lVar11);
          _swift_bridgeObjectRelease(lVar11);
        }
        func_0x00010bff1740();
        _objc_release(uStack_c8);
        _objc_release(uStack_d0);
        _objc_release(uVar2);
        _objc_release(uStack_f8);
        _objc_release(param_1);
        _objc_release(uVar5);
        return unaff_x20;
      }
      _objc_release(uVar5);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_1041be168;
    }
  }
  _objc_release(param_1);
LAB_1041be168:
  _swift_bridgeObjectRelease(lVar10);
  _swift_bridgeObjectRelease(lVar9);
  _swift_bridgeObjectRelease(lVar8);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1041be4ac; end: 1041be4d3; -[SCAdAttachmentCommonAdConfig initWithCoder:] */

void FUN_1041be4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1041bde6c();
  return;
}



/* Entry: 1041be4d4; end: 1041be51f; -[SCAdAttachmentCommonAdConfig description] */

void FUN_1041be4d4(undefined8 param_1)

{
  undefined1 auStack_90 [112];
  
  _objc_retain();
  FUN_1041be610(auStack_90);
  _objc_release(param_1);
  func_0x00010192246c(auStack_90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041be520; end: 1041be597; -[SCAdAttachmentCommonAdConfig init] */

void FUN_1041be520(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAttachmentCommonAdConfigWrapper.swift",0x40,2,0x9c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041be568);
  (*pcVar1)();
}



/* Entry: 1041be598; end: 1041be60f; -[SCAdAttachmentCommonAdConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041be598(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113067eb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113067eb8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113067ec0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113067ed8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113067ee8));
  return;
}



/* Entry: 1041be610; end: 1041be763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041be610(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113067eb0);
  puVar2 = (undefined8 *)(param_2 + _DAT_113067eb8);
  uVar17 = puVar1[1];
  uVar16 = *puVar1;
  uVar10 = puVar1[1];
  uVar15 = puVar2[1];
  uVar14 = *puVar2;
  uVar9 = puVar2[1];
  uVar8 = *(undefined8 *)(param_2 + _DAT_113067ec8);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113067ec0);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113067ec0))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_113067ed0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113067ed8);
  uVar7 = ((undefined8 *)(param_2 + _DAT_113067ed8))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_113067ee0);
  lVar11 = *(long *)(param_2 + _DAT_113067ee8);
  bVar3 = lVar11 == 0;
  if (bVar3) {
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar6);
    lVar11 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar6);
    func_0x00010c067fc0();
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_113067ef0);
  param_1[1] = uVar17;
  *param_1 = uVar16;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  param_1[4] = uVar4;
  param_1[5] = uVar6;
  param_1[6] = uVar8;
  param_1[7] = uVar13;
  param_1[8] = uVar5;
  param_1[9] = uVar7;
  param_1[10] = uVar12;
  param_1[0xb] = lVar11;
  *(bool *)(param_1 + 0xc) = bVar3;
  param_1[0xd] = uVar9;
  return;
}



/* Entry: 1041be764; end: 1041be86f;  */

void FUN_1041be764(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_1041beb00(param_1,param_2);
  return;
}



/* Entry: 1041be870; end: 1041bea03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041be870(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_113067f20);
      lVar7 = *(long *)(lStack_68 + _DAT_113067f20);
      uVar4 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar7);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113067f28);
      lVar7 = *(long *)(lStack_68 + _DAT_113067f28);
      if (lVar6 == 0) {
        lVar2 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 != 0) {
          uVar5 = 0;
          goto LAB_1041be9d4;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_68;
        if (lVar7 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar7);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
LAB_1041be9d4:
        _objc_release(lVar2);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_1041be9e0;
    }
  }
  uVar4 = 0;
LAB_1041be9e0:
  return uVar4 & 1;
}



/* Entry: 1041bea04; end: 1041bea13; -[SCAdAttachmentPlayableMetrics contentTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bea04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067f20));
  return;
}



/* Entry: 1041bea14; end: 1041bea23; -[SCAdAttachmentPlayableMetrics didTapRetry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bea14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067f28));
  return;
}



/* Entry: 1041bea24; end: 1041bea87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bea24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113067f20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113067f28) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041bea88; end: 1041beaff; -[SCAdAttachmentPlayableMetrics initWithContentTaps:didTapRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bea88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113067f20) = param_3;
  *(undefined8 *)(param_1 + _DAT_113067f28) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1041beb00; end: 1041bebbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041beb00(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if ((param_2 & 0xff) == 1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059500();
  }
  *(undefined **)(unaff_x20 + _DAT_113067f20) = puVar1;
  if ((param_2 >> 8 & 0xff) == 2) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_113067f28) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041bebbc; end: 1041bebef; -[SCAdAttachmentPlayableMetrics hash] */

undefined8 FUN_1041bebbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001041be7a4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041bebf0; end: 1041bec6f; -[SCAdAttachmentPlayableMetrics isEqual:] */

uint FUN_1041bebf0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041be870(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041bec70; end: 1041bec73; -[SCAdAttachmentPlayableMetrics copyWithZone:] */

void FUN_1041bec70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041bec74; end: 1041becab; -[SCAdAttachmentPlayableMetrics description] */

void FUN_1041bec74(undefined8 param_1)

{
  _objc_retain();
  FUN_1041bed60();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041becac; end: 1041bed27; -[SCAdAttachmentPlayableMetrics init] */

void FUN_1041becac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAttachmentPlayableMetricsWrapper.swift",0x41,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041becf4);
  (*pcVar1)();
}



/* Entry: 1041bed28; end: 1041bed5f; -[SCAdAttachmentPlayableMetrics .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bed28(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113067f20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113067f28));
  return;
}



/* Entry: 1041bed60; end: 1041bedcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1041bed60(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *(long *)(param_1 + _DAT_113067f20);
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5d388();
  }
  lVar4 = *(long *)(param_1 + _DAT_113067f28);
  if (lVar4 == 0) {
    iVar2 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    iVar2 = (int)lVar4;
  }
  auVar5._8_4_ = (uint)bVar1 | iVar2 << 8;
  auVar5._0_8_ = lVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1041bedd0; end: 1041bedef;  */

void FUN_1041bedd0(void)

{
  _objc_opt_self(&PTR_PTR_11298e9d8);
  return;
}



/* Entry: 1041bedf0; end: 1041beec3;  */

void FUN_1041bedf0(void)

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



/* Entry: 1041beec4; end: 1041beee3;  */

void FUN_1041beec4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041beee4; end: 1041bef2b; -[SCAdAttachmentPresentedMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041beee4(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_113067f58) == '\x03') &&
     (*(char *)(param_1 + _DAT_113067f60) == '\x02')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041bef2c);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bef2c; end: 1041bef73; -[SCAdAttachmentPresentedMetadata init] */

void FUN_1041bef2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAttachmentPresentedMetadataWrapper.swift",0x43,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041bef74);
  (*pcVar1)();
}



/* Entry: 1041bef74; end: 1041bf00f; -[SCAdAttachmentPresentedMetadata hash] */

void FUN_1041bef74(void)

{
  func_0x0001041bef94();
  return;
}



/* Entry: 1041bf010; end: 1041bf117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1041bf010(code *param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *in_x6;
  undefined **ppuVar14;
  undefined1 uVar15;
  code *extraout_x15;
  undefined *puVar16;
  undefined *unaff_x20;
  uint uVar17;
  undefined **unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  undefined **in_stack_00000048;
  undefined1 auStack_90 [16];
  undefined8 uStack_60;
  undefined8 *in_stack_ffffffffffffffa8;
  long lStack_38;
  
  puVar6 = &uStack_60;
  puVar4 = &uStack_60;
  uVar17 = 0;
  puVar11 = &uStack_60;
  puVar16 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,&stack0xffffffffffffffb0);
  if (lStack_38 == 0) {
LAB_1041bf0ac:
    in_stack_ffffffffffffffa8 = (undefined8 *)&stack0xffffffffffffffb0;
    goto code_r0x0001041bf0b0;
  }
  puVar10 = &stack0xffffffffffffffa8;
  puVar12 = PTR___sypN_11034f1a8 + 8;
  _swift_dynamicCast(puVar10,&stack0xffffffffffffffb0,puVar12,puVar16,6);
  if (((ulong)puVar10 & 1) == 0) goto LAB_1041bf0bc;
  bVar1 = unaff_x20[(long)_DAT_113067f58];
  ppuVar14 = (undefined **)(ulong)bVar1;
  bVar9 = (uint)bVar1 == (uint)*(byte *)((long)in_stack_ffffffffffffffa8 + (long)_DAT_113067f58);
  if (!bVar9) {
    _objc_release();
    goto LAB_1041bf0bc;
  }
  uVar15 = 0xa0;
  puVar7 = &uStack_60;
  puVar8 = &uStack_60;
  puVar5 = &uStack_60;
  puVar13 = (undefined *)in_stack_ffffffffffffffa8;
  switch(bVar1) {
  default:
    _objc_release();
  case 0x78:
  case 0x86:
  case 0xbe:
  case 0xfe:
    ppuVar14 = (undefined **)0x1;
    goto code_r0x0001041bf0a8;
  case 3:
    bVar1 = unaff_x20[(long)_DAT_113067f60];
    puVar16 = (undefined *)(ulong)bVar1;
    bVar2 = *(byte *)((long)in_stack_ffffffffffffffa8 + (long)_DAT_113067f60);
    unaff_x20 = (undefined *)(ulong)bVar2;
    _objc_release();
    uVar17 = 0;
    if (bVar2 == 2) {
      uVar17 = (uint)(bVar1 == 2);
    }
    ppuVar14 = (undefined **)(ulong)uVar17;
  case 0x8d:
    bVar9 = (int)puVar16 == 2;
    goto code_r0x0001041bf104;
  case 0x10:
  case 0x12:
  case 0x40:
  case 0x42:
    in_stack_ffffffffffffffa8 = (undefined8 *)0x1;
    goto FUN_1041bf2d8;
  case 0x11:
  case 0x24:
  case 0x29:
  case 0x41:
  case 0x54:
  case 0x59:
    goto code_r0x0001041bf230;
  case 0x13:
  case 0x14:
  case 0x1b:
  case 0x22:
  case 0x27:
  case 0x2b:
  case 0x43:
  case 0x44:
  case 0x4b:
  case 0x52:
  case 0x57:
  case 0x5b:
  case 0x60:
    goto code_r0x0001041bf270;
  case 0x15:
  case 0x28:
  case 0x2a:
  case 0x2c:
  case 0x45:
  case 0x58:
  case 0x5a:
  case 0x5c:
  case 0x2e:
  case 0x5f:
  case 0x16:
  case 0x30:
  case 0x46:
    goto code_r0x0001041bf22c;
  case 0x17:
  case 0x47:
  case 0xe8:
    goto code_r0x0001041bf240;
  case 0x18:
  case 0x48:
    goto code_r0x0001041bf254;
  case 0x19:
  case 0x1e:
  case 0x20:
  case 0x23:
  case 0x26:
  case 0x49:
  case 0x4e:
  case 0x50:
  case 0x53:
  case 0x56:
  case 99:
    goto code_r0x0001041bf234;
  case 0x1a:
  case 0x21:
  case 0x4a:
  case 0x51:
    goto code_r0x0001041bf258;
  case 0x1c:
  case 0x4c:
    goto code_r0x0001041bf1e0;
  case 0x1d:
  case 0x4d:
    goto code_r0x0001041bf268;
  case 0x1f:
  case 0x4f:
    goto code_r0x0001041bf26c;
  case 0x2d:
  case 0xa8:
    goto code_r0x0001041bf1dc;
  case 0x2f:
    goto code_r0x0001041bf248;
  case 0x5d:
    goto code_r0x0001041bf1ec;
  case 0x5e:
    goto code_r0x0001041bf274;
  case 0x62:
    goto code_r0x0001041bf260;
  case 0x68:
    goto code_r0x0001041bf0c4;
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0xa6:
  case 0xae:
  case 0xb6:
  case 0xca:
  case 0xde:
  case 0xe6:
  case 0xee:
  case 0xf6:
    break;
  case 0x6b:
  case 0x7f:
  case 0x93:
  case 0xa7:
  case 0xaf:
  case 0xb7:
  case 0xcb:
  case 0xdf:
  case 0xe7:
  case 0xef:
  case 0xf7:
    goto code_r0x0001041bf0a8;
  case 0x6c:
    (*param_1)();
    return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
  case 0x6d:
  case 0x95:
  case 0xcd:
    break;
  case 0x6e:
  case 0x96:
  case 0xce:
    goto code_r0x0001041bf364;
  case 0x76:
  case 0x9e:
  case 0xa0:
  case 0xd6:
    goto LAB_1041bf0ac;
  case 0x7c:
code_r0x0001041bf494:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1041bf498);
    (*pcVar3)();
  case 0x7d:
  case 0x91:
  case 0xa5:
  case 0xad:
  case 0xb5:
  case 0xc9:
  case 0xdd:
  case 0xe5:
  case 0xed:
  case 0xf5:
  case 0x69:
  case 0x83:
  case 0xb3:
  case 0xbb:
  case 0xeb:
  case 0xf3:
  case 0xfb:
    (*extraout_x15)();
    return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
  case 0x80:
  case 0x94:
    goto code_r0x0001041bf360;
  case 0x81:
  case 0xb1:
  case 0xb9:
    return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
  case 0x8c:
    if (bVar9) goto code_r0x0001041bf494;
  case 0xa4:
  case 0xac:
  case 0xb4:
    in_stack_ffffffffffffffa8 = (undefined8 *)(ulong)(bVar1 & 1);
    goto code_r0x0001041bf43c;
  case 0x8e:
  case 0xc6:
    goto code_r0x0001041bf2ec;
  case 0x8f:
  case 199:
    goto code_r0x0001041bf0b4;
  case 0x90:
    return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
  case 0xa9:
    goto code_r0x0001041bf2dc;
  case 0xaa:
    goto code_r0x0001041bf370;
  case 0xb0:
  case 0x25:
  case 0x55:
  case 0x82:
  case 0xb2:
  case 0xba:
  case 0xea:
  case 0xf2:
  case 0xfa:
    puVar13 = unaff_x20;
    puVar16 = (undefined *)in_stack_ffffffffffffffa8;
    goto code_r0x0001041bf1dc;
  case 0xb8:
    goto code_r0x0001041bf250;
  case 0xc5:
    goto code_r0x0001041bf104;
  case 200:
    return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
  case 0xcc:
    in_stack_ffffffffffffffa8 = (undefined8 *)0x4;
  case 0x61:
FUN_1041bf2d8:
    puVar4 = (undefined8 *)auStack_90;
    goto code_r0x0001041bf2dc;
  case 0xd8:
    goto code_r0x0001041bf0b0;
  case 0xe0:
    goto code_r0x0001041bf24c;
  case 0xe1:
    if (puVar12 == (undefined *)0x0) {
      uStack_60 = 0;
      _objc_retain(in_stack_ffffffffffffffa8);
      goto LAB_1041bf168;
    }
    _objc_retain(in_stack_ffffffffffffffa8);
    _swift_unknownObjectRetain(puVar12);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60);
    puVar13 = puVar12;
    unaff_x20 = (undefined *)in_stack_ffffffffffffffa8;
  case 0xc4:
    in_stack_ffffffffffffffa8 = (undefined8 *)unaff_x20;
    _swift_unknownObjectRelease(puVar13);
LAB_1041bf168:
    FUN_1041bf010(&uStack_60);
    _objc_release(in_stack_ffffffffffffffa8);
    func_0x00010006e7f4(&uStack_60);
    return (undefined8 *)(ulong)(uVar17 & 1);
  case 0xe2:
    goto code_r0x0001041bf3e4;
  case 0xe9:
  case 0xf1:
  case 0xf9:
    goto code_r0x0001041bf43c;
  case 0xf0:
    return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
  case 0xf8:
    ppuVar14 = in_stack_00000048;
    unaff_x22 = _DAT_113067f58;
  case 0xdc:
  case 0xe4:
  case 0xec:
  case 0xf4:
    unaff_x22 = (undefined **)(ulong)(byte)unaff_x20[(long)unaff_x22];
    unaff_x23 = &UNK_100db40e8;
    unaff_x24 = 0x1041bf3e0;
    goto code_r0x0001041bf3e4;
  }
  puVar6 = (undefined8 *)auStack_90;
  _swift_getObjCClassMetadata();
  puVar13 = (undefined *)in_stack_ffffffffffffffa8;
  _objc_allocWithZone();
  ppuVar14 = &PTR_DAT_113067000;
  puVar16 = puVar12;
  unaff_x20 = (undefined *)in_stack_ffffffffffffffa8;
code_r0x0001041bf360:
  ppuVar14 = (undefined **)ppuVar14[0x1eb];
  puVar7 = puVar6;
  goto code_r0x0001041bf364;
code_r0x0001041bf0b0:
  func_0x00010006e7f4(in_stack_ffffffffffffffa8);
code_r0x0001041bf0b4:
LAB_1041bf0bc:
  uVar17 = 0;
  goto code_r0x0001041bf0c0;
code_r0x0001041bf364:
  puVar13[(long)ppuVar14] = (char)puVar16;
  puVar8 = puVar7;
  ppuVar14 = _DAT_113067f60;
code_r0x0001041bf370:
  puVar13[(long)ppuVar14] = 2;
  *puVar8 = puVar13;
  puVar8[1] = unaff_x20;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  in_stack_ffffffffffffffa8 = puVar8;
  goto _objc_autoreleaseReturnValue;
code_r0x0001041bf1dc:
  in_stack_ffffffffffffffa8 = (undefined8 *)puVar13;
  _objc_allocWithZone();
code_r0x0001041bf1e0:
  uVar15 = 3;
  ppuVar14 = _DAT_113067f58;
  goto code_r0x0001041bf1ec;
code_r0x0001041bf22c:
code_r0x0001041bf230:
  puVar16 = puVar12;
code_r0x0001041bf234:
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
code_r0x0001041bf240:
  ppuVar14 = _DAT_113067f58;
code_r0x0001041bf248:
  uVar15 = 3;
code_r0x0001041bf24c:
  *(undefined1 *)((long)in_stack_ffffffffffffffa8 + (long)ppuVar14) = uVar15;
code_r0x0001041bf250:
  ppuVar14 = &PTR_DAT_113067000;
code_r0x0001041bf254:
  ppuVar14 = (undefined **)ppuVar14[0x1ec];
code_r0x0001041bf258:
  *(char *)((long)in_stack_ffffffffffffffa8 + (long)ppuVar14) = (char)puVar16;
code_r0x0001041bf260:
code_r0x0001041bf268:
  in_stack_ffffffffffffffa8 = &uStack_60;
code_r0x0001041bf26c:
  _objc_msgSendSuper2(in_stack_ffffffffffffffa8);
code_r0x0001041bf270:
  goto code_r0x0001041bf274;
code_r0x0001041bf2dc:
  *(undefined **)((long)puVar4 + 0x10) = unaff_x20;
  *(undefined **)((long)puVar4 + 0x18) = puVar16;
  *(undefined1 **)((long)puVar4 + 0x20) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)puVar4 + 0x28) = 0x1041bf068;
  puVar5 = puVar4;
  puVar16 = (undefined *)in_stack_ffffffffffffffa8;
  goto code_r0x0001041bf2ec;
code_r0x0001041bf104:
  uVar17 = (uint)ppuVar14;
  if (!bVar9 && (uint)unaff_x20 != 2) {
    uVar17 = (uint)puVar16 ^ (uint)unaff_x20 ^ 1;
  }
  goto code_r0x0001041bf0c0;
code_r0x0001041bf0a8:
  uVar17 = (uint)ppuVar14;
code_r0x0001041bf0c0:
  in_stack_ffffffffffffffa8 = (undefined8 *)(ulong)(uVar17 & 1);
code_r0x0001041bf0c4:
  return in_stack_ffffffffffffffa8;
code_r0x0001041bf274:
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return in_stack_ffffffffffffffa8;
code_r0x0001041bf3e4:
                    /* WARNING: Could not recover jumptable at 0x0001041bf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_x24 + *(int *)(unaff_x23 + (long)unaff_x22 * 4)))(ppuVar14);
  return in_stack_ffffffffffffffa8;
code_r0x0001041bf2ec:
  puVar12 = unaff_x20;
  _objc_allocWithZone();
  puVar12[(long)_DAT_113067f58] = (char)puVar16;
  puVar12[(long)_DAT_113067f60] = 2;
  *puVar5 = puVar12;
  puVar5[1] = unaff_x20;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  return (undefined8 *)(undefined *)puVar5;
code_r0x0001041bf1ec:
  *(undefined1 *)((long)in_stack_ffffffffffffffa8 + (long)ppuVar14) = uVar15;
  *(char *)((long)in_stack_ffffffffffffffa8 + (long)_DAT_113067f60) = (char)puVar16;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  return puVar11;
code_r0x0001041bf43c:
  (*in_x6)(in_stack_ffffffffffffffa8);
  return (undefined8 *)(undefined *)in_stack_ffffffffffffffa8;
}



/* Entry: 1041bf118; end: 1041bf197; -[SCAdAttachmentPresentedMetadata isEqual:] */

uint FUN_1041bf118(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041bf010(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041bf198; end: 1041bf19b; -[SCAdAttachmentPresentedMetadata copyWithZone:] */

void FUN_1041bf198(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041bf19c; end: 1041bf1ab; +[SCAdAttachmentPresentedMetadata none] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf19c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 0;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf1ac; end: 1041bf1bb; +[SCAdAttachmentPresentedMetadata webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf1ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 1;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf1bc; end: 1041bf1c3; +[SCAdAttachmentPresentedMetadata appInstall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf1bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 2;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf1c4; end: 1041bf21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf1c4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113067f58) = 3;
  *(undefined1 *)(unaff_x20 + _DAT_113067f60) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041bf220; end: 1041bf27f; +[SCAdAttachmentPresentedMetadata deepLinkWithIsExternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf220(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 3;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf280; end: 1041bf287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf280(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113067f58) = 4;
  *(undefined1 *)(unaff_x20 + _DAT_113067f60) = 2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041bf288; end: 1041bf297; +[SCAdAttachmentPresentedMetadata adToCall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf288(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 4;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf298; end: 1041bf2a7; +[SCAdAttachmentPresentedMetadata adToMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf298(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 5;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf2a8; end: 1041bf2b7; +[SCAdAttachmentPresentedMetadata survey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf2a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 6;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf2b8; end: 1041bf2c7; +[SCAdAttachmentPresentedMetadata leadGen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf2b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 7;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf2c8; end: 1041bf2d7; +[SCAdAttachmentPresentedMetadata instantPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf2c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 8;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf2d8; end: 1041bf333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf2d8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113067f58) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113067f60) = 2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041bf334; end: 1041bf33b; +[SCAdAttachmentPresentedMetadata playable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf334(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = 9;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf33c; end: 1041bf39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf33c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113067f58) = param_3;
  *(undefined1 *)(lVar1 + _DAT_113067f60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041bf39c; end: 1041bf497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf39c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined8 param_25)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_113067f58)) {
  case 0:
    (*param_1)();
    break;
  case 1:
    (*param_3)();
    break;
  case 2:
    (*param_5)();
    break;
  case 3:
    if (*(byte *)(unaff_x20 + _DAT_113067f60) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041bf498);
      (*pcVar1)();
    }
    (*param_7)(*(byte *)(unaff_x20 + _DAT_113067f60) & 1);
    break;
  case 4:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
    break;
  case 7:
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    (*param_24)(param_25);
  }
  return;
}



/* Entry: 1041bf498; end: 1041bf58b; -[SCAdAttachmentPresentedMetadata matchNone:webView:appInstall:deepLink:adToCall:adToMessage:survey:leadGen:instantPage:playable:] */

void FUN_1041bf498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
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
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1041bf39c(0x1041bf798,auStack_40,0x1041bf7b8,auStack_60,0x1041bf7bc,auStack_80,0x1041bf7a4,
                auStack_a0,0x1041bf7c0,auStack_c0,0x1041bf7c4,auStack_e0,0x1041bf7c8,auStack_100,
                0x1041bf7cc,auStack_120,0x1041bf7d0,auStack_140,0x1041bf7d4,auStack_160);
  _objc_release(param_1);
  return;
}



/* Entry: 1041bf58c; end: 1041bf5df;  */

void FUN_1041bf58c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041bf5e0; end: 1041bf747;  */

int FUN_1041bf5e0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041bf65c;
        goto LAB_1041bf640;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041bf640:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_1041bf65c:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041bf748; end: 1041bf787;  */

void FUN_1041bf748(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce0608;
  _swift_getWitnessTable(&UNK_10dce0608,&UNK_11074fc00);
  puRam0000000113067f90 = puVar1;
  return;
}



/* Entry: 1041bf788; end: 1041bf7d7;  */

ulong FUN_1041bf788(ulong param_1)

{
  if (9 < param_1) {
    param_1 = 10;
  }
  return param_1;
}



/* Entry: 1041bf7d8; end: 1041bf807;  */

void FUN_1041bf7d8(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001041c04ec(param_1);
  return;
}



/* Entry: 1041bf808; end: 1041bfa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bf808(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113813188);
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813190);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113813198) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041c0b4c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_1138131a0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138131a8);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  if (*(long *)(unaff_x20 + _DAT_1138131b0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001048368b0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_1138131b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1138131b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138131c0));
  if (((undefined8 *)(unaff_x20 + _DAT_1138131c8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1138131c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138131d0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041bfa0c; end: 1041bff4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041bfa0c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long unaff_x20;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uStack_98;
  long lStack_88;
  long alStack_80 [4];
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar10 = &lStack_88;
    _swift_dynamicCast(plVar10,alStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar10 & 1) != 0) {
      lVar9 = unaff_x20 + _DAT_113813188;
      __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar9,lStack_88 + _DAT_113813188);
      iVar1 = *(int *)(unaff_x20 + _DAT_113813190);
      iVar2 = *(int *)(lStack_88 + _DAT_113813190);
      if (*(long *)(unaff_x20 + _DAT_113813198) == 0) {
        uStack_98 = (uint)(*(long *)(lStack_88 + _DAT_113813198) == 0);
      }
      else {
        lVar15 = *(long *)(lStack_88 + _DAT_113813198);
        if (lVar15 == 0) {
          lVar11 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar11 = 0;
          FUN_1041c1750();
        }
        alStack_80[0] = lVar15;
        alStack_80[3] = lVar11;
        _objc_retain(lVar15);
        uStack_98 = 0;
        FUN_1041c0ccc();
        func_0x00010006e7f4(alStack_80);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_1138131a0);
      if (lVar15 == 0) {
        uVar7 = (uint)(*(long *)(lStack_88 + _DAT_1138131a0) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar7 = (uint)lVar15;
      }
      uVar8 = (uint)*(undefined8 *)(unaff_x20 + _DAT_1138131a8);
      func_0x00010c071ae0();
      if (*(long *)(unaff_x20 + _DAT_1138131b0) == 0) {
        uVar14 = (uint)(*(long *)(lStack_88 + _DAT_1138131b0) == 0);
      }
      else {
        lVar15 = *(long *)(lStack_88 + _DAT_1138131b0);
        if (lVar15 == 0) {
          lVar11 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar11 = 0;
          func_0x000104836f30();
        }
        alStack_80[0] = lVar15;
        alStack_80[3] = lVar11;
        _objc_retain(lVar15);
        uVar14 = 0;
        func_0x00010483697c();
        func_0x00010006e7f4(alStack_80);
      }
      lVar15 = ((long *)(unaff_x20 + _DAT_1138131b8))[1];
      lVar11 = ((long *)(lStack_88 + _DAT_1138131b8))[1];
      uVar16 = (uint)(lVar15 == 0 && lVar11 == 0);
      if ((lVar15 != 0) && (lVar11 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_1138131b8);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_1138131b8)) && (lVar15 == lVar11)) {
          uVar16 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar16 = (uint)lVar12;
        }
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_1138131c0);
      bVar4 = *(byte *)(lStack_88 + _DAT_1138131c0);
      lVar15 = ((long *)(unaff_x20 + _DAT_1138131c8))[1];
      lVar11 = ((long *)(lStack_88 + _DAT_1138131c8))[1];
      uVar17 = (uint)(lVar15 == 0 && lVar11 == 0);
      if ((lVar15 != 0) && (lVar11 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_1138131c8);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_1138131c8)) && (lVar15 == lVar11)) {
          uVar17 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar17 = (uint)lVar12;
        }
      }
      bVar5 = *(byte *)(unaff_x20 + _DAT_1138131d0);
      bVar6 = *(byte *)(lStack_88 + _DAT_1138131d0);
      _objc_release(lStack_88);
      uVar13 = 0;
      if ((((uint)lVar9 & (uint)(iVar1 == iVar2) & uStack_98 & uVar7 & uVar8 & uVar14 & uVar16) != 0
          ) && (((bVar3 ^ bVar4) & 1) == 0)) {
        uVar13 = uVar17 & ((bVar5 ^ bVar6) ^ 1);
      }
      goto LAB_1041bfad8;
    }
  }
  uVar13 = 0;
LAB_1041bfad8:
  return uVar13 & 1;
}



/* Entry: 1041bff50; end: 1041bffe7; -[SCAdWebViewAttachment url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bff50(long param_1)

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
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813188,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1041bffe8; end: 1041bfff7; -[SCAdWebViewAttachment attachmentPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041bffe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813190);
}



/* Entry: 1041bfff8; end: 1041c0007; -[SCAdWebViewAttachment internalWebviewAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041bfff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813198));
  return;
}



/* Entry: 1041c0008; end: 1041c0017; -[SCAdWebViewAttachment callbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138131a0));
  return;
}



/* Entry: 1041c0018; end: 1041c0027; -[SCAdWebViewAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138131a8));
  return;
}



/* Entry: 1041c0028; end: 1041c0037; -[SCAdWebViewAttachment engagementStreamMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138131b0));
  return;
}



/* Entry: 1041c0038; end: 1041c0043; -[SCAdWebViewAttachment pixelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0038(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138131b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138131b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c0044; end: 1041c0053; -[SCAdWebViewAttachment isShopPayUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c0044(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138131c0);
}



/* Entry: 1041c0054; end: 1041c005f; -[SCAdWebViewAttachment dynamicScriptConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0054(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138131c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138131c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c0060; end: 1041c00b7;  */

void FUN_1041c0060(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041c00b8; end: 1041c00c7; -[SCAdWebViewAttachment enableSkoverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c00b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138131d0);
}



/* Entry: 1041c00c8; end: 1041c03ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1041c00c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113813188;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_113813190) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113813198) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1138131a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1138131a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1138131b0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138131b8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_1138131c0) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138131c8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_1138131d0) = param_13;
  puVar4 = auStack_70;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 1041c03ac; end: 1041c07a3; -[SCAdWebViewAttachment initWithUrl:attachmentPresentation:internalWebviewAttachment:callbacks:commonAdConfig:engagementStreamMetadata:pixelId:isShopPayUser:dynamicScriptConfig:enableSkoverlay:] */

void FUN_1041c03ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10,undefined4 param_11,long param_12,
                  undefined1 param_13)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  long alStack_98 [2];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_70 = param_4;
  uStack_68 = param_1;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (auStack_80 + lVar1,param_3);
  if (param_9 == 0) {
    lStack_78 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = param_2;
    lStack_78 = param_9;
  }
  if (param_12 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  auStack_88[lVar1] = param_13;
  *(long *)((long)alStack_98 + lVar1) = param_12;
  *(undefined8 *)((long)alStack_98 + lVar1 + 8) = param_2;
  auStack_a0[lVar1] = param_10;
  func_0x0001041c023c(auStack_80 + lVar1,uStack_70,param_5,param_6,param_7,param_8,lStack_78,uVar2);
  return;
}



/* Entry: 1041c07a4; end: 1041c07d7; -[SCAdWebViewAttachment hash] */

undefined8 FUN_1041c07a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041bf808();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c07d8; end: 1041c0857; -[SCAdWebViewAttachment isEqual:] */

uint FUN_1041c07d8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041bfa0c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041c0858; end: 1041c085b; -[SCAdWebViewAttachment copyWithZone:] */

void FUN_1041c0858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c085c; end: 1041c08d3; -[SCAdWebViewAttachment description] */

void FUN_1041c085c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x0001041bfd04(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000102458eec(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c08d4; end: 1041c094f; -[SCAdWebViewAttachment init] */

void FUN_1041c08d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdWebViewAttachmentWrapper.swift",0x39,2,0x74,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c091c);
  (*pcVar1)();
}



/* Entry: 1041c0950; end: 1041c0a2f; -[SCAdWebViewAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0950(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113813188;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113813198));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138131a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138131a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138131b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138131b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138131c8 + 8))
  ;
  return;
}



/* Entry: 1041c0a30; end: 1041c0a37;  */

void FUN_1041c0a30(void)

{
  if (lRam0000000113067fc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f4f00);
  return;
}



/* Entry: 1041c0a38; end: 1041c0a6f;  */

void FUN_1041c0a38(undefined8 param_1)

{
  if (lRam0000000113067fc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f4f00);
  return;
}



/* Entry: 1041c0a70; end: 1041c0b4b;  */

void FUN_1041c0a70(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_60 = &UNK_10dce06c8;
    puStack_58 = &UNK_10dce06c8;
    puStack_50 = PTR___sBOWV_11034d658 + 0x40;
    puStack_48 = &UNK_10dce06c8;
    puStack_40 = &UNK_10dce06e0;
    puStack_38 = &UNK_10dce06f8;
    puStack_30 = &UNK_10dce06e0;
    puStack_28 = &UNK_10dce06f8;
    _swift_updateClassMetadata2(param_1,0x100,10,&lStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041c0b4c; end: 1041c0ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0b4c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113067fd0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113067fd8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113067fe0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113067fe8));
  if (((undefined8 *)(unaff_x20 + _DAT_113067ff0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113067ff0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113067ff8));
  if (((undefined8 *)(unaff_x20 + _DAT_113068000))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068000);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113068008))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068008);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113068010));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041c0ccc; end: 1041c0f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041c0ccc(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long unaff_x20;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  func_0x0001041c1708(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar11 = &lStack_88;
    _swift_dynamicCast(plVar11,auStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
    if (((ulong)plVar11 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113067fd0);
      bVar2 = *(byte *)(lStack_88 + _DAT_113067fd0);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113067fd8);
      bVar4 = *(byte *)(lStack_88 + _DAT_113067fd8);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113067fe0);
      bVar6 = *(byte *)(lStack_88 + _DAT_113067fe0);
      bVar7 = *(byte *)(unaff_x20 + _DAT_113067fe8);
      bVar8 = *(byte *)(lStack_88 + _DAT_113067fe8);
      lVar14 = ((long *)(unaff_x20 + _DAT_113067ff0))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_113067ff0))[1];
      uVar17 = (uint)(lVar14 == 0 && lVar15 == 0);
      if (lVar14 != 0 && lVar15 != 0) {
        lVar12 = *(long *)(unaff_x20 + _DAT_113067ff0);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_113067ff0)) && (lVar14 == lVar15)) {
          uVar17 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar17 = (uint)lVar12;
        }
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_113067ff8);
      lVar20 = *(long *)(lStack_88 + _DAT_113067ff8);
      lVar14 = ((long *)(unaff_x20 + _DAT_113068000))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_113068000))[1];
      uVar18 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_113068000);
        if ((lVar13 == *(long *)(lStack_88 + _DAT_113068000)) && (lVar14 == lVar15)) {
          uVar18 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar18 = (uint)lVar13;
        }
      }
      lVar14 = ((long *)(unaff_x20 + _DAT_113068008))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_113068008))[1];
      uVar19 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_113068008);
        if ((lVar13 == *(long *)(lStack_88 + _DAT_113068008)) && (lVar14 == lVar15)) {
          uVar19 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar19 = (uint)lVar13;
        }
      }
      bVar9 = *(byte *)(unaff_x20 + _DAT_113068010);
      bVar10 = *(byte *)(lStack_88 + _DAT_113068010);
      _objc_release(lStack_88);
      uVar16 = 0;
      if ((((((bVar1 ^ bVar2 | bVar3 ^ bVar4) & 1) == 0) && (((bVar5 ^ bVar6) & 1) == 0)) &&
          (((bVar7 ^ bVar8) & 1) == 0)) &&
         (((((uVar17 ^ 1) & 1) == 0 && (lVar12 == lVar20)) && (((uVar18 ^ 1) & 1) == 0)))) {
        uVar16 = uVar19 & ((bVar9 ^ bVar10) ^ 1);
      }
      goto LAB_1041c0df0;
    }
  }
  uVar16 = 0;
LAB_1041c0df0:
  return uVar16 & 1;
}



/* Entry: 1041c0f50; end: 1041c0f5f; -[SCAdInternalWebViewAttachment dismissButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c0f50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067fd0);
}



/* Entry: 1041c0f60; end: 1041c0f6f; -[SCAdInternalWebViewAttachment actionMenuButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c0f60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067fd8);
}



/* Entry: 1041c0f70; end: 1041c0f7f; -[SCAdInternalWebViewAttachment disableFullScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c0f70(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067fe0);
}



/* Entry: 1041c0f80; end: 1041c0f8f; -[SCAdInternalWebViewAttachment alwaysDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c0f80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067fe8);
}



/* Entry: 1041c0f90; end: 1041c0f9b; -[SCAdInternalWebViewAttachment conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0f90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113067ff0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113067ff0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c0f9c; end: 1041c0fab; -[SCAdInternalWebViewAttachment browserSourceRawValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041c0f9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113067ff8);
}



/* Entry: 1041c0fac; end: 1041c0fb7; -[SCAdInternalWebViewAttachment lineItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0fac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113068000))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113068000);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c0fb8; end: 1041c0fc3; -[SCAdInternalWebViewAttachment webViewId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c0fb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113068008))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113068008);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c0fc4; end: 1041c101b;  */

void FUN_1041c0fc4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041c101c; end: 1041c102b; -[SCAdInternalWebViewAttachment forcesNewScbBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041c101c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113068010);
}



/* Entry: 1041c102c; end: 1041c124b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c102c(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113067fd0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113067fd8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113067fe0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113067fe8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067ff0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113067ff8) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068000);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068008);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113068010) = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041c124c; end: 1041c1337; -[SCAdInternalWebViewAttachment initWithDismissButtonHidden:actionMenuButtonHidden:disableFullScreen:alwaysDeeplink:conversationId:browserSourceRawValue:lineItemId:webViewId:forcesNewScbBrowser:] */

void FUN_1041c124c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,long param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_7 == 0) {
    param_7 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    uVar2 = param_2;
  }
  if (param_9 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
    uVar1 = param_2;
  }
  if (param_10 == 0) {
    param_10 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  func_0x0001041c113c(param_3,param_4,param_5,param_6,param_7,uVar2,param_8,param_9,uVar1,param_10,
                      param_2,param_11);
  return;
}



/* Entry: 1041c1338; end: 1041c147f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c1338(undefined1 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113067fd0) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113067fd8) = param_1[1];
  *(undefined1 *)(unaff_x20 + _DAT_113067fe0) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_113067fe8) = param_1[3];
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067ff0);
  puVar1[1] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113067ff8) = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068000);
  puVar1[1] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068008);
  puVar1[1] = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = uVar2;
  func_0x0001041c1708(&uStack_50,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001041c1708(&uStack_60,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001041c1708(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001037c80e8(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_113068010) = param_1[0x40];
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041c1480; end: 1041c14b3; -[SCAdInternalWebViewAttachment hash] */

undefined8 FUN_1041c1480(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c0b4c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041c14b4; end: 1041c1533; -[SCAdInternalWebViewAttachment isEqual:] */

uint FUN_1041c14b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041c0ccc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041c1534; end: 1041c1537; -[SCAdInternalWebViewAttachment copyWithZone:] */

void FUN_1041c1534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041c1538; end: 1041c156b; -[SCAdInternalWebViewAttachment description] */

void FUN_1041c1538(void)

{
  undefined1 auStack_58 [72];
  
  func_0x0001041c163c(auStack_58);
  func_0x0001037c80e8(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041c156c; end: 1041c15e7; -[SCAdInternalWebViewAttachment init] */

void FUN_1041c156c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdInternalWebViewAttachmentWrapper.swift",0x41,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041c15b4);
  (*pcVar1)();
}


