/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10483d1fc; end: 10483d1ff; -[SCAdWebViewServerRedirectHints copyWithZone:] */

void FUN_10483d1fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483d200; end: 10483d2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130916c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130916c0))[1]);
  uVar2 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f211450);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f209820);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10483d2c0; end: 10483d30f; -[SCAdWebViewServerRedirectHints encodeWithCoder:] */

void FUN_10483d2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483d200(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483d310; end: 10483d33f;  */

void FUN_10483d310(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483d340(param_1);
  return;
}



/* Entry: 10483d340; end: 10483d557;  */

undefined8 FUN_10483d340(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar5 = 0;
  iVar2 = (int)&uStack_a0;
  uVar3 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f211450);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar3 = uStack_a0;
    if ((uVar5 & 1) != 0) {
      uVar6 = 0xd00000000000001e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f209820);
      lVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (lVar4 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
        _swift_unknownObjectRelease(lVar4);
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
        _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar6,6);
        uVar6 = uStack_a0;
        if (iVar2 == 0) {
          uVar6 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uStack_98);
      _swift_bridgeObjectRelease(uStack_98);
      func_0x00010c03d800();
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(uVar6);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10483d558; end: 10483d57f; -[SCAdWebViewServerRedirectHints initWithCoder:] */

void FUN_10483d558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483d340();
  return;
}



/* Entry: 10483d580; end: 10483d5ab; -[SCAdWebViewServerRedirectHints description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d580(long param_1)

{
  func_0x00010c067fc0(*(undefined8 *)(param_1 + _DAT_1130916c8));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483d5ac; end: 10483d627; -[SCAdWebViewServerRedirectHints init] */

void FUN_10483d5ac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewServerRedirectHintsWrapper.swift",0x35,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483d5f4);
  (*pcVar1)();
}



/* Entry: 10483d628; end: 10483d663; -[SCAdWebViewServerRedirectHints .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d628(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130916c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130916c8));
  return;
}



/* Entry: 10483d664; end: 10483d683;  */

void FUN_10483d664(void)

{
  _objc_opt_self(&PTR_PTR_1129dafa8);
  return;
}



/* Entry: 10483d684; end: 10483d6cb; -[SCAdWebViewUrlParameterCheckPattern keys] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d684(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130916f8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10483d6cc; end: 10483d6d7; -[SCAdWebViewUrlParameterCheckPattern exactMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d6cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091700))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091700);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483d6d8; end: 10483d6e3; -[SCAdWebViewUrlParameterCheckPattern containsMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d6d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091708))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091708);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483d6e4; end: 10483d73b;  */

void FUN_10483d6e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10483d73c; end: 10483d7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130916f8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091700);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091708);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483d7c8; end: 10483d897; -[SCAdWebViewUrlParameterCheckPattern initWithKeys:exactMatch:containsMatch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d7c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  puVar4 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar2 = puVar4;
  }
  if (param_5 == 0) {
    param_5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_1130916f8) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113091700);
  *plVar1 = param_4;
  plVar1[1] = (long)puVar2;
  plVar1 = (long *)(param_1 + _DAT_113091708);
  *plVar1 = param_5;
  plVar1[1] = (long)puVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483d898; end: 10483d907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d898(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130916f8) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091700);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091708);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483d908; end: 10483d93b; -[SCAdWebViewUrlParameterCheckPattern hash] */

undefined8 FUN_10483d908(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10483d93c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483d93c; end: 10483dbcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d93c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130916f8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091700))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091700);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091708))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091708);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10483dbd0; end: 10483dc4f; -[SCAdWebViewUrlParameterCheckPattern isEqual:] */

uint FUN_10483dbd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010483da38(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483dc50; end: 10483dc53; -[SCAdWebViewUrlParameterCheckPattern copyWithZone:] */

void FUN_10483dc50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483dc54; end: 10483dd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483dc54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130916f8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0x5359454b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5359454b,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091700))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091700);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x414d5f5443415845;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414d5f5443415845,0xeb00000000484354);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091708))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091708);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x534e4941544e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534e4941544e4f43,0xee00484354414d5f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10483dda0; end: 10483ddef; -[SCAdWebViewUrlParameterCheckPattern encodeWithCoder:] */

void FUN_10483dda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483dc54(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483ddf0; end: 10483de1f;  */

void FUN_10483ddf0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483de20(param_1);
  return;
}



/* Entry: 10483de20; end: 10483e153;  */

undefined8 FUN_10483de20(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  uVar6 = 0;
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x5359454b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5359454b,0xe400000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
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
    uVar4 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar4 = uStack_a0;
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x414d5f5443415845;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414d5f5443415845,0xeb00000000484354);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        lVar5 = 0;
        uVar7 = 0;
      }
      else {
        _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar5 = lStack_98;
        uVar7 = uStack_a0;
        if (iVar2 == 0) {
          uVar7 = 0;
          lVar5 = 0;
        }
      }
      uVar8 = 0x534e4941544e4f43;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534e4941544e4f43,0xee00484354414d5f);
      lVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (lVar9 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar9);
        _swift_unknownObjectRelease(lVar9);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        lVar9 = 0;
        uVar8 = 0;
      }
      else {
        _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar9 = lStack_98;
        uVar8 = uStack_a0;
        if (iVar3 == 0) {
          uVar8 = 0;
          lVar9 = 0;
        }
      }
      uVar10 = uVar4;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(uVar4);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar5);
        _swift_bridgeObjectRelease(lVar5);
      }
      if (lVar9 == 0) {
        uVar8 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar9);
        _swift_bridgeObjectRelease(lVar9);
      }
      func_0x00010c021080();
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10483e154; end: 10483e17b; -[SCAdWebViewUrlParameterCheckPattern initWithCoder:] */

void FUN_10483e154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483de20();
  return;
}



/* Entry: 10483e17c; end: 10483e197; -[SCAdWebViewUrlParameterCheckPattern description] */

void FUN_10483e17c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483e198; end: 10483e213; -[SCAdWebViewUrlParameterCheckPattern init] */

void FUN_10483e198(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewUrlParameterCheckPatternWrapper.swift",0x3a,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483e1e0);
  (*pcVar1)();
}



/* Entry: 10483e214; end: 10483e263; -[SCAdWebViewUrlParameterCheckPattern .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e214(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130916f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091700 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091708 + 8))
  ;
  return;
}



/* Entry: 10483e264; end: 10483e283;  */

void FUN_10483e264(void)

{
  _objc_opt_self(&PTR_PTR_1129db080);
  return;
}



/* Entry: 10483e284; end: 10483e293; -[SCAdWebviewUrlParameter checkPattern] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091738));
  return;
}



/* Entry: 10483e294; end: 10483e2df; -[SCAdWebviewUrlParameter value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e294(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091740);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091740))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483e2e0; end: 10483e34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091738) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091740);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483e34c; end: 10483e3cb; -[SCAdWebviewUrlParameter initWithCheckPattern:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e34c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_113091738) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091740);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10483e3cc; end: 10483e517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e3cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  _objc_allocWithZone();
  uVar5 = *param_1;
  uStack_68 = param_1[2];
  uStack_70 = param_1[1];
  uStack_78 = param_1[4];
  uStack_80 = param_1[3];
  lVar2 = 0;
  FUN_10483e264();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_1130916f8) = uVar5;
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)(lVar3 + _DAT_113091700);
  puVar1[1] = param_1[2];
  *puVar1 = uVar6;
  uVar6 = param_1[3];
  puVar1 = (undefined8 *)(lVar3 + _DAT_113091708);
  puVar1[1] = param_1[4];
  *puVar1 = uVar6;
  uStack_58 = uVar5;
  FUN_10483e70c(&uStack_58,auStack_90,0x112d38270,&UNK_10d905a20);
  FUN_10483e70c(&uStack_70,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_10483e70c(&uStack_80,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  plVar4 = &lStack_a0;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113091738) = plVar4;
  uVar5 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091740);
  *puVar1 = param_1[5];
  puVar1[1] = uVar5;
  _swift_bridgeObjectRetain();
  FUN_10483e518(param_1);
  _objc_msgSendSuper2(auStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483e518; end: 10483e54b;  */

undefined8 FUN_10483e518(undefined8 param_1)

{
  (*(code *)(undefined *)0x1047ae3dc)();
  return param_1;
}



/* Entry: 10483e54c; end: 10483e70b; -[SCAdWebviewUrlParameter hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10483e54c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  _objc_retain();
  FUN_10483d93c();
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_113091740);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(param_1 + _DAT_113091740))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10483e70c; end: 10483e753;  */

undefined8 FUN_10483e70c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10483e754; end: 10483e7d3; -[SCAdWebviewUrlParameter isEqual:] */

uint FUN_10483e754(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010483e5f0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483e7d4; end: 10483e7d7; -[SCAdWebviewUrlParameter copyWithZone:] */

void FUN_10483e7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483e7d8; end: 10483e893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483e7d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x41505f4b43454843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41505f4b43454843,0xed00004e52455454);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091740);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091740))[1]);
  uVar2 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10483e894; end: 10483e8e3; -[SCAdWebviewUrlParameter encodeWithCoder:] */

void FUN_10483e894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483e7d8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483e8e4; end: 10483e913;  */

void FUN_10483e8e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483e914(param_1);
  return;
}



/* Entry: 10483e914; end: 10483eb27;  */

undefined8 FUN_10483e914(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x41505f4b43454843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41505f4b43454843,0xed00004e52455454);
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
LAB_10483ead0:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_10483e264(0);
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&lStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_90;
    if ((uVar4 & 1) != 0) {
      uVar2 = 0x45554c4156;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
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
        goto LAB_10483ead0;
      }
      _swift_dynamicCast(&lStack_90,&uStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) != 0) {
        lVar5 = lStack_90;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_90,uStack_88);
        _swift_bridgeObjectRelease(uStack_88);
        func_0x00010bffdf80();
        _objc_release(lVar5);
        _objc_release(param_1);
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



/* Entry: 10483eb28; end: 10483eb4f; -[SCAdWebviewUrlParameter initWithCoder:] */

void FUN_10483eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483e914();
  return;
}



/* Entry: 10483eb50; end: 10483eb6b; -[SCAdWebviewUrlParameter description] */

void FUN_10483eb50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483eb6c; end: 10483ebe7; -[SCAdWebviewUrlParameter init] */

void FUN_10483eb6c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebviewUrlParameterWrapper.swift",0x2e,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483ebb4);
  (*pcVar1)();
}



/* Entry: 10483ebe8; end: 10483ec23; -[SCAdWebviewUrlParameter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ebe8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091738));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091740 + 8))
  ;
  return;
}



/* Entry: 10483ec24; end: 10483ec43;  */

void FUN_10483ec24(void)

{
  _objc_opt_self(&PTR_PTR_1129db160);
  return;
}



/* Entry: 10483ec44; end: 10483ec53; -[SCAdWebviewUrlParameterMetadata scriptType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10483ec44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091770);
}



/* Entry: 10483ec54; end: 10483eca3; -[SCAdWebviewUrlParameterMetadata parameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ec54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091778);
  FUN_10483ec24(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10483eca4; end: 10483ecb3; -[SCAdWebviewUrlParameterMetadata isShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10483eca4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091780);
}



/* Entry: 10483ecb4; end: 10483ed27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ecb4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091770) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091778) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113091780) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483ed28; end: 10483edbb; -[SCAdWebviewUrlParameterMetadata initWithScriptType:parameters:isShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ed28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_10483ec24(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  *(undefined8 *)(param_1 + _DAT_113091770) = param_3;
  *(undefined8 *)(param_1 + _DAT_113091778) = param_4;
  *(undefined1 *)(param_1 + _DAT_113091780) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483edbc; end: 10483ee03;  */

void FUN_10483edbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_10483ee04(param_1,param_2,param_3);
  return;
}



/* Entry: 10483ee04; end: 10483f077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ee04(undefined8 param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113091770) = param_1;
  lVar18 = *(long *)(param_2 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar18 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_2);
    func_0x0001046c76d8(0,lVar18,0);
    puVar15 = puStack_68;
    lVar10 = 0;
    FUN_10483ec24();
    puVar17 = (undefined8 *)(param_2 + 0x50);
    do {
      uVar2 = puVar17[-6];
      uVar6 = puVar17[-5];
      uVar3 = puVar17[-4];
      uVar7 = puVar17[-3];
      uVar4 = puVar17[-2];
      uVar8 = puVar17[-1];
      uVar16 = *puVar17;
      lVar11 = lVar10;
      _objc_allocWithZone();
      lVar12 = 0;
      FUN_10483e264();
      lVar13 = lVar12;
      _objc_allocWithZone();
      *(undefined8 *)(lVar13 + _DAT_1130916f8) = uVar2;
      puVar1 = (undefined8 *)(lVar13 + _DAT_113091700);
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)(lVar13 + _DAT_113091708);
      *puVar1 = uVar7;
      puVar1[1] = uVar4;
      puVar9 = PTR_s_init_1125d9248;
      lStack_78 = lVar13;
      lStack_70 = lVar12;
      _swift_bridgeObjectRetain_n(uVar2,2);
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRetain_n(uVar4,2);
      _swift_bridgeObjectRetain(uVar16);
      plVar14 = &lStack_78;
      _objc_msgSendSuper2(plVar14,puVar9);
      *(long **)(lVar11 + _DAT_113091738) = plVar14;
      puVar1 = (undefined8 *)(lVar11 + _DAT_113091740);
      *puVar1 = uVar8;
      puVar1[1] = uVar16;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      plVar14 = &lStack_88;
      lStack_88 = lVar11;
      lStack_80 = lVar10;
      _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
      uVar5 = *(ulong *)(puVar15 + 0x10);
      puStack_68 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
        func_0x0001046c76d8(1 < *(ulong *)(puVar15 + 0x18),uVar5 + 1,1);
      }
      puVar15 = puStack_68;
      puVar17 = puVar17 + 7;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      *(long **)(puStack_68 + uVar5 * 8 + 0x20) = plVar14;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    _swift_bridgeObjectRelease(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_113091778) = puVar15;
  _swift_bridgeObjectRelease(param_2);
  *(byte *)(unaff_x20 + _DAT_113091780) = param_3 & 1;
  _objc_msgSendSuper2(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483f078; end: 10483f0ab; -[SCAdWebviewUrlParameterMetadata hash] */

undefined8 FUN_10483f078(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10483f0ac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483f0ac; end: 10483f14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483f0ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091770));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091778);
  uVar1 = 0;
  FUN_10483ec24(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113091780));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10483f150; end: 10483f24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10483f150(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar6 = &lStack_68;
    _swift_dynamicCast(plVar6,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113091770);
      iVar2 = *(int *)(lStack_68 + _DAT_113091770);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113091778);
      uVar9 = *(undefined8 *)(lStack_68 + _DAT_113091778);
      _swift_bridgeObjectRetain(uVar9);
      func_0x00010470d4a4(uVar8,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113091780);
      bVar4 = *(byte *)(lStack_68 + _DAT_113091780);
      _objc_release(lStack_68);
      if (iVar1 == iVar2) {
        uVar7 = (uint)uVar8 & ((bVar3 ^ bVar4) ^ 1);
        goto LAB_10483f230;
      }
    }
  }
  uVar7 = 0;
LAB_10483f230:
  return uVar7 & 1;
}



/* Entry: 10483f24c; end: 10483f2cb; -[SCAdWebviewUrlParameterMetadata isEqual:] */

uint FUN_10483f24c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10483f150(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483f2cc; end: 10483f2cf; -[SCAdWebviewUrlParameterMetadata copyWithZone:] */

void FUN_10483f2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483f2d0; end: 10483f3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483f2d0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x545f545049524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f545049524353,0xeb00000000455059);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091778);
  uVar1 = 0;
  FUN_10483ec24(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x4554454d41524150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554454d41524150,0xea00000000005352);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0x4f444148535f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f444148535f5349,0xe900000000000057);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10483f3e0; end: 10483f42f; -[SCAdWebviewUrlParameterMetadata encodeWithCoder:] */

void FUN_10483f3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483f2d0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483f430; end: 10483f45f;  */

void FUN_10483f430(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483f460(param_1);
  return;
}



/* Entry: 10483f460; end: 10483f65b;  */

undefined8 FUN_10483f460(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0x545f545049524353;
  uVar5 = 0x455059;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f545049524353);
  lVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  FUN_1047aee9c(lVar2);
  if ((uVar5 & 0xff) != 1) {
    uVar1 = 0x4554454d41524150;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554454d41524150,0xea00000000005352);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar2 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    lStack_48 = lStack_68;
    uStack_50 = uStack_70;
    if (lStack_68 == 0) {
      _objc_release(param_1);
      func_0x00010006e7f4(&uStack_60);
      goto LAB_10483f624;
    }
    uVar1 = 0x113091788;
    func_0x0001000285a8(0x113091788,&UNK_10dd36ae8);
    puVar3 = &uStack_88;
    _swift_dynamicCast(puVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar1 = 0x4f444148535f5349;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f444148535f5349,0xe900000000000057);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar1);
      uVar4 = 0;
      FUN_10483ec24(0);
      uVar1 = uStack_88;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_88,uVar4);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00010c042800();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
LAB_10483f624:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10483f65c; end: 10483f683; -[SCAdWebviewUrlParameterMetadata initWithCoder:] */

void FUN_10483f65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483f460();
  return;
}



/* Entry: 10483f684; end: 10483f6c7; -[SCAdWebviewUrlParameterMetadata description] */

void FUN_10483f684(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_10483f754();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483f6c8; end: 10483f743; -[SCAdWebviewUrlParameterMetadata init] */

void FUN_10483f6c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebviewUrlParameterMetadataWrapper.swift",0x36,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483f710);
  (*pcVar1)();
}



/* Entry: 10483f744; end: 10483f753; -[SCAdWebviewUrlParameterMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483f744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091778));
  return;
}



/* Entry: 10483f754; end: 10483f93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10483f754(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(param_1 + _DAT_113091770);
  uVar10 = *(ulong *)(param_1 + _DAT_113091778);
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    func_0x0001046c7688(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10483f940);
      (*pcVar6)();
    }
    uVar12 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar7 = uVar12;
        func_0x000103c52f48(uVar12,uVar10);
      }
      lVar8 = *(long *)(uVar7 + _DAT_113091738);
      uVar13 = *(undefined8 *)(lVar8 + _DAT_1130916f8);
      puVar1 = (undefined8 *)(lVar8 + _DAT_113091700);
      puVar2 = (undefined8 *)(lVar8 + _DAT_113091708);
      uVar18 = puVar1[1];
      uVar17 = *puVar1;
      uVar14 = puVar1[1];
      uVar16 = puVar2[1];
      uVar15 = *puVar2;
      uVar3 = *(undefined8 *)(uVar7 + _DAT_113091740);
      uVar4 = ((undefined8 *)(uVar7 + _DAT_113091740))[1];
      _swift_bridgeObjectRetain(puVar2[1]);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar14);
      _objc_release(uVar7);
      uVar7 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        func_0x0001046c7688(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x20) = uVar13;
      uVar12 = uVar12 + 1;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x40) = uVar16;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x38) = uVar15;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x30) = uVar18;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x28) = uVar17;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x48) = uVar3;
      *(undefined8 *)(puVar5 + uVar7 * 0x38 + 0x50) = uVar4;
    } while (uVar11 != uVar12);
  }
  return uVar9;
}



/* Entry: 10483f940; end: 10483f95f;  */

void FUN_10483f940(void)

{
  _objc_opt_self(&PTR_PTR_1129db238);
  return;
}



/* Entry: 10483f960; end: 10483fb9b;  */

void FUN_10483f960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_10483fd3c(param_1,param_2,param_3);
  return;
}



/* Entry: 10483fb9c; end: 10483fbe7; -[SCAdWebviewUrlParameterUpdate domain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483fb9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130917b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130917b8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483fbe8; end: 10483fc37; -[SCAdWebviewUrlParameterUpdate metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483fbe8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130917c0);
  FUN_10483f940(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10483fc38; end: 10483fca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483fc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130917b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130917c0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483fca4; end: 10483fd3b; -[SCAdWebviewUrlParameterUpdate initWithDomain:metadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483fca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = 0;
  FUN_10483f940(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130917b8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130917c0) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483fd3c; end: 104840103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483fd3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long unaff_x20;
  undefined *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _swift_getObjectType();
  puVar20 = (undefined8 *)(unaff_x20 + _DAT_1130917b8);
  *puVar20 = param_1;
  puVar20[1] = param_2;
  uVar23 = *(ulong *)(param_3 + 0x10);
  if (uVar23 == 0) {
    _swift_bridgeObjectRelease(param_3);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_2);
    func_0x0001046c76a4(0,uVar23,0);
    uVar25 = 0;
    do {
      puVar22 = puStack_70;
      if (*(ulong *)(param_3 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x104840104);
        (*pcVar12)();
      }
      puVar20 = (undefined8 *)(param_3 + 0x20 + uVar25 * 0x18);
      uVar2 = *puVar20;
      lVar6 = puVar20[1];
      uVar10 = *(undefined1 *)(puVar20 + 2);
      lVar13 = 0;
      FUN_10483f940();
      lVar14 = lVar13;
      _objc_allocWithZone();
      *(undefined8 *)(lVar14 + _DAT_113091770) = uVar2;
      lVar21 = *(long *)(lVar6 + 0x10);
      if (lVar21 == 0) {
        _swift_bridgeObjectRetain(lVar6);
        puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_bridgeObjectRetain_n(lVar6,2);
        func_0x0001046c76d8(0,lVar21,0);
        puVar26 = puStack_78;
        lVar15 = 0;
        FUN_10483ec24();
        puVar20 = (undefined8 *)(lVar6 + 0x50);
        do {
          uVar2 = puVar20[-6];
          uVar7 = puVar20[-5];
          uVar3 = puVar20[-4];
          uVar8 = puVar20[-3];
          uVar4 = puVar20[-2];
          uVar9 = puVar20[-1];
          uVar24 = *puVar20;
          lVar16 = lVar15;
          _objc_allocWithZone();
          lVar17 = 0;
          FUN_10483e264();
          lVar18 = lVar17;
          _objc_allocWithZone();
          *(undefined8 *)(lVar18 + _DAT_1130916f8) = uVar2;
          puVar1 = (undefined8 *)(lVar18 + _DAT_113091700);
          *puVar1 = uVar7;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(lVar18 + _DAT_113091708);
          *puVar1 = uVar8;
          puVar1[1] = uVar4;
          puVar11 = PTR_s_init_1125d9248;
          lStack_88 = lVar18;
          lStack_80 = lVar17;
          _swift_bridgeObjectRetain_n(uVar2,2);
          _swift_bridgeObjectRetain_n(uVar3,2);
          _swift_bridgeObjectRetain_n(uVar4,2);
          _swift_bridgeObjectRetain(uVar24);
          plVar19 = &lStack_88;
          _objc_msgSendSuper2(plVar19,puVar11);
          *(long **)(lVar16 + _DAT_113091738) = plVar19;
          puVar1 = (undefined8 *)(lVar16 + _DAT_113091740);
          *puVar1 = uVar9;
          puVar1[1] = uVar24;
          _swift_bridgeObjectRelease(uVar4);
          _swift_bridgeObjectRelease(uVar3);
          _swift_bridgeObjectRelease(uVar2);
          plVar19 = &lStack_98;
          lStack_98 = lVar16;
          lStack_90 = lVar15;
          _objc_msgSendSuper2(plVar19,PTR_s_init_1125d9248);
          uVar5 = *(ulong *)(puVar26 + 0x10);
          puStack_78 = puVar26;
          if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar5) {
            func_0x0001046c76d8(1 < *(ulong *)(puVar26 + 0x18),uVar5 + 1,1);
          }
          puVar26 = puStack_78;
          puVar20 = puVar20 + 7;
          *(ulong *)(puStack_78 + 0x10) = uVar5 + 1;
          *(long **)(puStack_78 + uVar5 * 8 + 0x20) = plVar19;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        _swift_bridgeObjectRelease(lVar6);
      }
      *(undefined **)(lVar14 + _DAT_113091778) = puVar26;
      _swift_bridgeObjectRelease(lVar6);
      *(undefined1 *)(lVar14 + _DAT_113091780) = uVar10;
      plVar19 = &lStack_a8;
      lStack_a8 = lVar14;
      lStack_a0 = lVar13;
      _objc_msgSendSuper2(plVar19,PTR_s_init_1125d9248);
      uVar5 = *(ulong *)(puVar22 + 0x10);
      puStack_70 = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar5) {
        func_0x0001046c76a4(1 < *(ulong *)(puVar22 + 0x18),uVar5 + 1,1);
      }
      puVar22 = puStack_70;
      uVar25 = uVar25 + 1;
      *(ulong *)(puStack_70 + 0x10) = uVar5 + 1;
      *(long **)(puStack_70 + uVar5 * 8 + 0x20) = plVar19;
    } while (uVar25 != uVar23);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_1130917c0) = puVar22;
  _objc_msgSendSuper2(auStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104840104; end: 104840137; -[SCAdWebviewUrlParameterUpdate hash] */

undefined8 FUN_104840104(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010483f9a8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104840138; end: 1048401b7; -[SCAdWebviewUrlParameterUpdate isEqual:] */

uint FUN_104840138(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010483fa58(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048401b8; end: 1048401bb; -[SCAdWebviewUrlParameterUpdate copyWithZone:] */

void FUN_1048401b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048401bc; end: 10484028b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048401bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130917b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130917b8))[1]);
  uVar1 = 0x4e49414d4f44;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e49414d4f44,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130917c0);
  uVar2 = 0;
  FUN_10483f940(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0x415441444154454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415441444154454d,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10484028c; end: 1048402db; -[SCAdWebviewUrlParameterUpdate encodeWithCoder:] */

void FUN_10484028c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048401bc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048402dc; end: 10484030b;  */

void FUN_1048402dc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10484030c(param_1);
  return;
}



/* Entry: 10484030c; end: 104840553;  */

undefined8 FUN_10484030c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x4e49414d4f44;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e49414d4f44,0xe600000000000000);
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
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_104840504;
    }
    uVar5 = 0x415441444154454d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415441444154454d,0xe800000000000000);
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
    if (lStack_78 != 0) {
      uVar5 = 0x1130917c8;
      func_0x0001000285a8(0x1130917c8,&UNK_10dd36b18);
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar5,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        uVar7 = 0;
        FUN_10483f940(0);
        uVar5 = uStack_a0;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_a0,uVar7);
        _swift_bridgeObjectRelease(uStack_a0);
        func_0x00010c00e300();
        _objc_release(uVar2);
        _objc_release(uVar5);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_104840504;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_104840504:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104840554; end: 10484057b; -[SCAdWebviewUrlParameterUpdate initWithCoder:] */

void FUN_104840554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10484030c();
  return;
}



/* Entry: 10484057c; end: 1048405d3; -[SCAdWebviewUrlParameterUpdate description] */

void FUN_10484057c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10484068c();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048405d4; end: 10484064f; -[SCAdWebviewUrlParameterUpdate init] */

void FUN_1048405d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebviewUrlParameterUpdateWrapper.swift",0x34,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484061c);
  (*pcVar1)();
}



/* Entry: 104840650; end: 10484068b; -[SCAdWebviewUrlParameterUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104840650(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130917b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130917c0));
  return;
}



/* Entry: 10484068c; end: 104840a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484068c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1130917b8);
  uVar14 = ((undefined8 *)(param_1 + _DAT_1130917b8))[1];
  uVar18 = *(ulong *)(param_1 + _DAT_1130917c0);
  if (uVar18 >> 0x3e == 0) {
    uVar19 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar19 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar18) {
      uVar19 = uVar18;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar19 == 0) {
    _swift_bridgeObjectRetain(uVar14);
  }
  else {
    _swift_bridgeObjectRetain(uVar14);
    func_0x0001046c7654(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104840a2c);
      (*pcVar9)();
    }
    uVar20 = 0;
    do {
      if ((uVar18 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) <= (long)uVar20) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1048409c8);
          (*pcVar9)();
        }
        uVar10 = *(ulong *)(uVar18 + 0x20 + uVar20 * 8);
        _objc_retain();
      }
      else {
        uVar10 = uVar20;
        func_0x000103c52dac(uVar20,uVar18);
      }
      uVar14 = *(undefined8 *)(uVar10 + _DAT_113091770);
      uVar13 = *(ulong *)(uVar10 + _DAT_113091778);
      if (uVar13 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar16 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar16 = uVar13;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
      if (uVar16 != 0) {
        func_0x0001046c7688(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1048409c4);
          (*pcVar9)();
        }
        uVar21 = 0;
        do {
          if ((uVar13 & 0xc000000000000001) == 0) {
            uVar11 = *(ulong *)(uVar13 + uVar21 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar11 = uVar21;
            func_0x000103c52f48();
          }
          lVar12 = *(long *)(uVar11 + _DAT_113091738);
          uVar17 = *(undefined8 *)(lVar12 + _DAT_1130916f8);
          puVar1 = (undefined8 *)(lVar12 + _DAT_113091700);
          puVar2 = (undefined8 *)(lVar12 + _DAT_113091708);
          uVar25 = puVar1[1];
          uVar24 = *puVar1;
          uVar15 = puVar1[1];
          uVar23 = puVar2[1];
          uVar22 = *puVar2;
          uVar4 = *(undefined8 *)(uVar11 + _DAT_113091740);
          uVar5 = ((undefined8 *)(uVar11 + _DAT_113091740))[1];
          _swift_bridgeObjectRetain(puVar2[1]);
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar17);
          _swift_bridgeObjectRetain(uVar15);
          _objc_release(uVar11);
          uVar11 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
            func_0x0001046c7688(1 < *(ulong *)(puVar8 + 0x18),uVar11 + 1,1);
          }
          *(ulong *)(puVar8 + 0x10) = uVar11 + 1;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x20) = uVar17;
          uVar21 = uVar21 + 1;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x40) = uVar23;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x38) = uVar22;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x30) = uVar25;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x28) = uVar24;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x48) = uVar4;
          *(undefined8 *)(puVar8 + uVar11 * 0x38 + 0x50) = uVar5;
        } while (uVar16 != uVar21);
      }
      uVar6 = *(undefined1 *)(uVar10 + _DAT_113091780);
      _objc_release();
      uVar10 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
        func_0x0001046c7654(1 < *(ulong *)(puVar7 + 0x18),uVar10 + 1,1);
      }
      uVar20 = uVar20 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar7 + uVar10 * 0x18 + 0x20) = uVar14;
      *(undefined **)(puVar7 + uVar10 * 0x18 + 0x28) = puVar8;
      puVar7[uVar10 * 0x18 + 0x30] = uVar6;
    } while (uVar20 != uVar19);
  }
  return uVar3;
}



/* Entry: 104840a2c; end: 104840d0f;  */

void FUN_104840a2c(void)

{
  _objc_opt_self(&PTR_PTR_1129db318);
  return;
}



/* Entry: 104840d10; end: 104840d23;  */

bool FUN_104840d10(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104840d24; end: 104840d4f;  */

void FUN_104840d24(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000102d02a38();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 104840d50; end: 104840d5b;  */

void FUN_104840d50(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104840d5c; end: 104840e07;  */

void FUN_104840d5c(void)

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



/* Entry: 104840e08; end: 104840e0f;  */

undefined1  [16] FUN_104840e08(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe800000000000000;
  uVar2 = 0x6b636172546e6f6e;
  switch(uStack_18) {
  case 0:
    pcVar4 = "discover_DEPRECATED";
    goto code_r0x000104840bdc;
  case 1:
    pcVar4 = "liveStories_DEPRECATED";
    goto code_r0x000104840b74;
  case 2:
    pcVar4 = "autoAdvanceUserStories";
code_r0x000104840b74:
    auVar11._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar11._0_8_ = 0xd000000000000016;
    return auVar11;
  case 4:
    uVar3 = 0xef736569726f7453;
    uVar2 = 0x6465746f6d6f7270;
  case 3:
    auVar7._8_8_ = uVar3;
    auVar7._0_8_ = uVar2;
    return auVar7;
  case 5:
    pcVar4 = "contentInterstitial";
code_r0x000104840bdc:
    auVar14._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = 0xd000000000000013;
    return auVar14;
  case 6:
    auVar16._8_8_ = 0x800000010f2115f0;
    auVar16._0_8_ = 0xd000000000000015;
    return auVar16;
  case 7:
    auVar10._8_8_ = 0xe900000000000072;
    auVar10._0_8_ = 0x656873696c627570;
    return auVar10;
  case 8:
    auVar19._8_8_ = 0xe400000000000000;
    auVar19._0_8_ = 0x776f6873;
    return auVar19;
  case 9:
    auVar8._8_8_ = 0xea0000000000656c;
    auVar8._0_8_ = 0x62616b636f6c6e75;
    return auVar8;
  case 10:
    auVar18._8_8_ = 0xe700000000000000;
    auVar18._0_8_ = 0x6e776f6e6b6e75;
    return auVar18;
  case 0xb:
    pcVar4 = "cognac_DEPRECATED";
    break;
  case 0xc:
    uVar2 = 0xec0000006b64536b;
    goto code_r0x000104840c54;
  case 0xd:
    auVar15._8_8_ = 0xec000000776f6853;
    auVar15._0_8_ = 0x6d726f66676e6f6c;
    return auVar15;
  case 0xe:
    auVar6._8_8_ = 0x800000010f2115d0;
    auVar6._0_8_ = 0xd00000000000001a;
    return auVar6;
  case 0xf:
    auVar9._8_8_ = 0xeb00000000746168;
    auVar9._0_8_ = 0x436e496572616873;
    return auVar9;
  case 0x10:
    auVar5._8_8_ = 0xe300000000000000;
    auVar5._0_8_ = 0x70616d;
    return auVar5;
  case 0x11:
    auVar12._8_8_ = 0xed0000736569726f;
    auVar12._0_8_ = 0x745363696c627570;
    return auVar12;
  case 0x12:
    uVar2 = 0xeb0000000062486b;
code_r0x000104840c54:
    auVar17._8_8_ = uVar2;
    auVar17._0_8_ = 0x726f7774654e6461;
    return auVar17;
  case 0x13:
    auVar21._8_8_ = 0xec0000006c657375;
    auVar21._0_8_ = 0x6f726143736e656c;
    return auVar21;
  case 0x14:
    auVar13._8_8_ = 0xee006c6573756f72;
    auVar13._0_8_ = 0x61437265746c6966;
    return auVar13;
  case 0x15:
    pcVar4 = "longformSpotlight";
    break;
  case 0x16:
    auVar20._8_8_ = 0xe800000000000000;
    auVar20._0_8_ = 0x6465654674616863;
    return auVar20;
  case 0x17:
    pcVar4 = "mapPromotedPlaces";
    break;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107a1dc0,&uStack_18,&UNK_1107a1dc0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104840d10);
    (*pcVar1)();
  }
  auVar22._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar22._0_8_ = 0xd000000000000011;
  return auVar22;
}



/* Entry: 104840e10; end: 1048410cb;  */

undefined1  [16] FUN_104840e10(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe800000000000000;
  uVar2 = 0x7265766f63736964;
  switch(param_1) {
  case 1:
    uVar3 = 0xec00000073656972;
    uVar2 = 0x6f74735f6576696c;
  case 0:
    auVar12._8_8_ = uVar3;
    auVar12._0_8_ = uVar2;
    return auVar12;
  case 2:
    auVar8._8_8_ = 0xea00000000007972;
    auVar8._0_8_ = 0x6f74735f72657375;
    return auVar8;
  case 3:
    auVar10._8_8_ = 0xe90000000000006b;
    auVar10._0_8_ = 0x636172745f6e6f6e;
    return auVar10;
  case 4:
    auVar6._8_8_ = 0xee0079726f74735f;
    auVar6._0_8_ = 0x6465746f6d6f7270;
    return auVar6;
  case 5:
    auVar14._8_8_ = 0x800000010f2116d0;
    auVar14._0_8_ = 0xd000000000000014;
    return auVar14;
  case 6:
    auVar17._8_8_ = 0x800000010f007af0;
    auVar17._0_8_ = 0xd000000000000016;
    return auVar17;
  case 7:
    auVar11._8_8_ = 0xe900000000000072;
    auVar11._0_8_ = 0x656873696c627570;
    return auVar11;
  case 8:
  case 0xd:
    auVar4._8_8_ = 0xe400000000000000;
    auVar4._0_8_ = 0x776f6873;
    return auVar4;
  case 9:
    auVar9._8_8_ = 0xea0000000000656c;
    auVar9._0_8_ = 0x62616b636f6c6e75;
    return auVar9;
  case 10:
    auVar19._8_8_ = 0xe700000000000000;
    auVar19._0_8_ = 0x6e776f6e6b6e75;
    return auVar19;
  case 0xb:
    auVar5._8_8_ = 0xe600000000000000;
    auVar5._0_8_ = 0x63616e676f63;
    return auVar5;
  case 0xc:
    uVar2 = 0xee006b64735f6b72;
    break;
  case 0xe:
    auVar21._8_8_ = 0x800000010f2116b0;
    auVar21._0_8_ = 0xd000000000000010;
    return auVar21;
  case 0xf:
    auVar7._8_8_ = 0xed0000746168635f;
    auVar7._0_8_ = 0x6e695f6572616873;
    return auVar7;
  case 0x10:
    auVar23._8_8_ = 0xe300000000000000;
    auVar23._0_8_ = 0x70616d;
    return auVar23;
  case 0x11:
    auVar13._8_8_ = 0xe600000000000000;
    auVar13._0_8_ = 0x63696c627570;
    return auVar13;
  case 0x12:
    uVar2 = 0xed000062685f6b72;
    break;
  case 0x13:
    auVar22._8_8_ = 0xe400000000000000;
    auVar22._0_8_ = 0x736e656c;
    return auVar22;
  case 0x14:
    auVar15._8_8_ = 0xe600000000000000;
    auVar15._0_8_ = 0x7265746c6966;
    return auVar15;
  case 0x15:
    auVar16._8_8_ = 0x800000010f211690;
    auVar16._0_8_ = 0xd000000000000012;
    return auVar16;
  case 0x16:
    auVar20._8_8_ = 0xe900000000000064;
    auVar20._0_8_ = 0x6565665f74616863;
    return auVar20;
  case 0x17:
    auVar24._8_8_ = 0x800000010f0b2ec0;
    auVar24._0_8_ = 0xd000000000000013;
    return auVar24;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107a1dc0,&uStack_18,&UNK_1107a1dc0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048410cc);
    (*pcVar1)();
  }
  auVar18._8_8_ = uVar2;
  auVar18._0_8_ = 0x6f7774656e5f6461;
  return auVar18;
}



/* Entry: 1048410cc; end: 104841103; +[SCAdProductTypeExtensions stringValueForProductType:] */

void FUN_1048410cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104840e10(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104841104; end: 10484113b; +[SCAdProductTypeExtensions productTypeFromStringValue:] */

undefined8 FUN_104841104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1048411ac();
  _swift_bridgeObjectRelease(param_2);
  return param_3;
}



/* Entry: 10484113c; end: 104841177; -[SCAdProductTypeExtensions init] */

void FUN_10484113c(undefined8 param_1)

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



/* Entry: 104841178; end: 1048411ab;  */

void FUN_104841178(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


