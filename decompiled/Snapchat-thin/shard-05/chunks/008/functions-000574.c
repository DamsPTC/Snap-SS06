/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042a0a58; end: 1042a0a5b; -[SCAdSnapInteractionRecord copyWithZone:] */

void FUN_1042a0a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a0a5c; end: 1042a0e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a0a5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = 0x454d484341545441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d484341545441,0xef455059545f544e);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f2070);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306b008);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f2090);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f20b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f20d0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1f20f0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar3 = 0xd000000000000013;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2120);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f2140);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b038))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b038);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xed00004952555f4b);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2170);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2190);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f21b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306b058);
  uVar1 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f21d0);
  func_0x00010bf92e80(uVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042a0e20; end: 1042a0e6f; -[SCAdSnapInteractionRecord encodeWithCoder:] */

void FUN_1042a0e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042a0a5c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a0e70; end: 1042a0e9f;  */

void FUN_1042a0e70(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042a0ea0(param_1);
  return;
}



/* Entry: 1042a0ea0; end: 1042a1423;  */

undefined8 FUN_1042a0ea0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uVar2 = 0x454d484341545441;
  uVar9 = 0x545f544e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d484341545441);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_1042a1944();
  if ((uVar9 & 0xff) == 1) {
    _objc_release(param_2);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f2070);
    func_0x00010bf66f40();
    _objc_release(uVar2);
    uVar2 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f2090);
    func_0x00010bf66da0(param_2);
    _objc_release(uVar2);
    uVar2 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f20b0);
    lVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    puVar1 = PTR___sypN_11034f1a8;
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042a1974(&uStack_a0,0x112d387f8,&UNK_10d902650);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042ca7c4(0);
      puVar4 = &uStack_d0;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uVar2 = uStack_d0;
      if ((int)puVar4 == 0) {
        uVar2 = 0;
      }
    }
    uVar5 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f20d0);
    func_0x00010bf66ce0();
    _objc_release(uVar5);
    uVar5 = 0xd000000000000020;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1f20f0);
    func_0x00010bf66ce0();
    _objc_release(uVar5);
    uVar10 = 0xd000000000000013;
    uVar5 = uVar10;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2120);
    func_0x00010bf66ce0();
    _objc_release(uVar5);
    uVar5 = 0xd000000000000026;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f2140);
    func_0x00010bf66ce0();
    _objc_release(uVar5);
    uVar5 = 0x4e494c5f50454544;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xed00004952555f4b);
    lVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042a1974(&uStack_a0,0x112d387f8,&UNK_10d902650);
      uVar5 = 0;
      lVar3 = 0;
    }
    else {
      puVar4 = &uStack_d0;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar5 = uStack_d0;
      lVar3 = lStack_c8;
      if ((int)puVar4 == 0) {
        uVar5 = 0;
        lVar3 = 0;
      }
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2170);
    lVar6 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar6 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    uVar10 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042a1974(&uStack_a0,0x112d387f8,&UNK_10d902650);
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      FUN_1042208ac(0);
      puVar4 = &uStack_d0;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar7,6);
      uVar7 = uStack_d0;
      if ((int)puVar4 == 0) {
        uVar7 = 0;
      }
    }
    uVar8 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2190);
    func_0x00010bf66ce0();
    _objc_release(uVar8);
    uVar8 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f21b0);
    func_0x00010bf66ce0();
    _objc_release(uVar8);
    uVar8 = 0xd00000000000002a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f21d0);
    func_0x00010bf66da0(param_2);
    _objc_release(uVar8);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar3);
      _swift_bridgeObjectRelease(lVar3);
    }
    func_0x00010bff4c80(param_1,uVar10);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar7);
  }
  return unaff_x20;
}



/* Entry: 1042a1424; end: 1042a144b; -[SCAdSnapInteractionRecord initWithCoder:] */

void FUN_1042a1424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042a0ea0();
  return;
}



/* Entry: 1042a144c; end: 1042a148b; -[SCAdSnapInteractionRecord description] */

void FUN_1042a144c(void)

{
  undefined1 auStack_368 [840];
  
  _objc_retain();
  FUN_1042a1554(auStack_368);
  func_0x00010178e510(auStack_368);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a148c; end: 1042a1507; -[SCAdSnapInteractionRecord init] */

void FUN_1042a148c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSnapInteractionRecordWrapper.swift",0x33,2,0xb9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a14d4);
  (*pcVar1)();
}



/* Entry: 1042a1508; end: 1042a1553; -[SCAdSnapInteractionRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a1508(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b010));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b038 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b040));
  return;
}



/* Entry: 1042a1554; end: 1042a1757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a1554(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1370 [840];
  undefined1 auStack_1028 [840];
  undefined1 auStack_ce0 [840];
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined1 auStack_980 [769];
  undefined1 uStack_67f;
  undefined1 uStack_67e;
  undefined1 uStack_67d;
  undefined1 uStack_67c;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 uStack_660;
  undefined1 uStack_65f;
  undefined8 uStack_658;
  undefined1 auStack_650 [776];
  undefined1 auStack_348 [776];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010178e4b4(auStack_348);
  _memcpy(auStack_980,auStack_348,0x301);
  uStack_998 = *(undefined8 *)(param_1 + _DAT_11306aff8);
  uStack_988 = *(undefined8 *)(param_1 + _DAT_11306b008);
  uStack_990 = *(undefined8 *)(param_1 + _DAT_11306b000);
  if (*(long *)(param_1 + _DAT_11306b010) == 0) {
    puVar2 = auStack_348;
  }
  else {
    _objc_retain();
    FUN_1042c9f5c(auStack_ce0);
    func_0x00010178e4b0(auStack_ce0);
    puVar2 = auStack_ce0;
  }
  _memcpy(auStack_650,puVar2,0x301);
  FUN_1042a1974(auStack_980,0x112dcbc48,&UNK_10d98e2c0);
  _memcpy(auStack_980,auStack_650,0x301);
  uStack_67f = *(undefined1 *)(param_1 + _DAT_11306b018);
  uStack_67e = *(undefined1 *)(param_1 + _DAT_11306b020);
  uStack_67d = *(undefined1 *)(param_1 + _DAT_11306b028);
  uStack_67c = *(undefined1 *)(param_1 + _DAT_11306b030);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306b038);
  uVar3 = puVar1[1];
  uStack_670 = puVar1[1];
  uStack_678 = *puVar1;
  uStack_668 = *(undefined8 *)(param_1 + _DAT_11306b040);
  uStack_660 = *(undefined1 *)(param_1 + _DAT_11306b048);
  uStack_65f = *(undefined1 *)(param_1 + _DAT_11306b050);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11306b058);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar3);
  _objc_release(param_1);
  uStack_658 = uVar4;
  _memcpy(auStack_1028,&uStack_998,0x348);
  _memcpy(auStack_ce0,&uStack_998,0x348);
  func_0x00010178e544(auStack_1028,auStack_1370);
  func_0x00010178e510(auStack_ce0);
  _memcpy(extraout_x8,auStack_1028,0x348);
  return;
}



/* Entry: 1042a1758; end: 1042a1943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a1758(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 auStack_c78 [776];
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_658;
  undefined1 auStack_650 [776];
  undefined1 auStack_348 [776];
  
  _swift_getObjectType();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306aff8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b000) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b008) = param_1[2];
  _memcpy(auStack_348,param_1 + 3,0x301);
  iVar3 = (int)auStack_348;
  func_0x00010178e1e4();
  if (iVar3 == 1) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_650,auStack_348,0x301);
    FUN_1042ca7c4(0);
    _objc_allocWithZone();
    _memcpy(&uStack_970,auStack_348,0x301);
    func_0x00010178e208(&uStack_970,auStack_c78);
    puVar4 = auStack_650;
    FUN_1042c96c8();
    func_0x0001042a1974(auStack_348,0x112dcbc48,&UNK_10d98e2c0);
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306b010) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_11306b018) = *(undefined1 *)((long)param_1 + 0x319);
  *(undefined1 *)(unaff_x20 + _DAT_11306b020) = *(undefined1 *)((long)param_1 + 0x31a);
  *(undefined1 *)(unaff_x20 + _DAT_11306b028) = *(undefined1 *)((long)param_1 + 0x31b);
  *(undefined1 *)(unaff_x20 + _DAT_11306b030) = *(undefined1 *)((long)param_1 + 0x31c);
  uStack_968 = param_1[0x65];
  uStack_970 = param_1[100];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306b038);
  puVar2[1] = uStack_968;
  *puVar2 = uStack_970;
  uStack_658 = param_1[0x66];
  *(undefined8 *)(unaff_x20 + _DAT_11306b040) = uStack_658;
  *(undefined1 *)(unaff_x20 + _DAT_11306b048) = *(undefined1 *)(param_1 + 0x67);
  *(undefined1 *)(unaff_x20 + _DAT_11306b050) = *(undefined1 *)((long)param_1 + 0x339);
  *(undefined8 *)(unaff_x20 + _DAT_11306b058) = param_1[0x68];
  func_0x0001042a19b4(&uStack_970,auStack_c78,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001042a19b4(&uStack_658,auStack_c78,0x113069a40,&UNK_10dce5b00);
  _objc_msgSendSuper2(&stack0xfffffffffffff998,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a1944; end: 1042a1953;  */

undefined1  [16] FUN_1042a1944(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x10) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xf < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1042a1954; end: 1042a1973;  */

void FUN_1042a1954(void)

{
  _objc_opt_self(&PTR_PTR_1129940a0);
  return;
}



/* Entry: 1042a1974; end: 1042a1a2b;  */

undefined8 FUN_1042a1974(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042a1a2c; end: 1042a1c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a1a2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b088);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306b088))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b090));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b098));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b0a0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306b0a0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b0a8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306b0a8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b0b0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306b0b0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b0b8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306b0b8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b0c0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306b0c0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b0c8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306b0c8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b0d0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b0d8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b0e0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b0e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b0f0));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b0f8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSiN_11034deb0);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b100);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042a1c64; end: 1042a1f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042a1c64(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uStack_d4;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x0001042a34d4(param_1,auStack_c8,0x112d387f8,&UNK_10d902650);
  if (lStack_b0 == 0) {
    func_0x00010006e7f4(auStack_c8);
  }
  else {
    plVar5 = &lStack_d0;
    _swift_dynamicCast(plVar5,auStack_c8,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_11306b088);
      if (lVar9 == *(long *)(lStack_d0 + _DAT_11306b088) &&
          ((long *)(unaff_x20 + _DAT_11306b088))[1] == ((long *)(lStack_d0 + _DAT_11306b088))[1]) {
        uStack_d4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_d4 = (uint)lVar9;
      }
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11306b090);
      uVar8 = *(undefined8 *)(lStack_d0 + _DAT_11306b090);
      lVar12 = *(long *)(unaff_x20 + _DAT_11306b098);
      lVar9 = *(long *)(lStack_d0 + _DAT_11306b098);
      dVar22 = *(double *)(unaff_x20 + _DAT_11306b0a0);
      dVar20 = *(double *)(lStack_d0 + _DAT_11306b0a0);
      dVar23 = *(double *)(unaff_x20 + _DAT_11306b0a8);
      dVar21 = *(double *)(lStack_d0 + _DAT_11306b0a8);
      dVar28 = *(double *)(unaff_x20 + _DAT_11306b0b0);
      dVar29 = *(double *)(lStack_d0 + _DAT_11306b0b0);
      dVar30 = *(double *)(unaff_x20 + _DAT_11306b0b8);
      dVar31 = *(double *)(lStack_d0 + _DAT_11306b0b8);
      dVar24 = *(double *)(unaff_x20 + _DAT_11306b0c0);
      dVar25 = *(double *)(lStack_d0 + _DAT_11306b0c0);
      dVar26 = *(double *)(unaff_x20 + _DAT_11306b0c8);
      dVar27 = *(double *)(lStack_d0 + _DAT_11306b0c8);
      lVar13 = *(long *)(unaff_x20 + _DAT_11306b0d0);
      lVar10 = *(long *)(lStack_d0 + _DAT_11306b0d0);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306b0d8);
      bVar4 = *(byte *)(lStack_d0 + _DAT_11306b0d8);
      lVar15 = *(long *)(unaff_x20 + _DAT_11306b0e0);
      lVar16 = *(long *)(lStack_d0 + _DAT_11306b0e0);
      lVar17 = *(long *)(unaff_x20 + _DAT_11306b0e8);
      lVar18 = *(long *)(lStack_d0 + _DAT_11306b0e8);
      lVar19 = *(long *)(unaff_x20 + _DAT_11306b0f0);
      lVar14 = *(long *)(lStack_d0 + _DAT_11306b0f0);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306b0f8);
      func_0x0001020f35dc(uVar6,*(undefined8 *)(lStack_d0 + _DAT_11306b0f8));
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11306b100);
      func_0x00010142cfc4(uVar7,*(undefined8 *)(lStack_d0 + _DAT_11306b100));
      _objc_release(lStack_d0);
      uVar2 = 0;
      if (lVar12 == lVar9) {
        uVar2 = uStack_d4 & (int)uVar11 == (int)uVar8;
      }
      uVar1 = 0;
      if (dVar22 == dVar20) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (dVar23 == dVar21) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (dVar28 == dVar29) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (dVar30 == dVar31) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (dVar24 == dVar25) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (dVar26 == dVar27) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar13 == lVar10) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar15 == lVar16) {
        uVar2 = uVar1 & ((bVar3 ^ bVar4) ^ 0xffffffff);
      }
      uVar1 = 0;
      if (lVar17 == lVar18) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar19 == lVar14) {
        uVar2 = uVar1;
      }
      return uVar2 & (uint)uVar6 & (uint)uVar7;
    }
  }
  return 0;
}



/* Entry: 1042a1f1c; end: 1042a1f67; -[SCAdSnapThirdPartyTrackInfo adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a1f1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306b088);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306b088))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042a1f68; end: 1042a1f77; -[SCAdSnapThirdPartyTrackInfo adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1f68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b090);
}



/* Entry: 1042a1f78; end: 1042a1f87; -[SCAdSnapThirdPartyTrackInfo topSnapMediaDurationInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1f78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b098);
}



/* Entry: 1042a1f88; end: 1042a1f97; -[SCAdSnapThirdPartyTrackInfo topSnapTotalViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1f88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0a0);
}



/* Entry: 1042a1f98; end: 1042a1fa7; -[SCAdSnapThirdPartyTrackInfo topSnapMaxUnobstructedViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1f98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0a8);
}



/* Entry: 1042a1fa8; end: 1042a1fb7; -[SCAdSnapThirdPartyTrackInfo topSnapTotalAudibleViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1fa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0b0);
}



/* Entry: 1042a1fb8; end: 1042a1fc7; -[SCAdSnapThirdPartyTrackInfo topSnapTotalUnobstructedViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1fb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0b8);
}



/* Entry: 1042a1fc8; end: 1042a1fd7; -[SCAdSnapThirdPartyTrackInfo topSnapMaxUnobstructedAudibleViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1fc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0c0);
}



/* Entry: 1042a1fd8; end: 1042a1fe7; -[SCAdSnapThirdPartyTrackInfo topSnapTotalUnobstructedAudibleViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1fd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0c8);
}



/* Entry: 1042a1fe8; end: 1042a1ff7; -[SCAdSnapThirdPartyTrackInfo topSnapCappedMaxViewDurationMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a1fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0d0);
}



/* Entry: 1042a1ff8; end: 1042a2007; -[SCAdSnapThirdPartyTrackInfo wasTopSnapFullyViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a1ff8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b0d8);
}



/* Entry: 1042a2008; end: 1042a2017; -[SCAdSnapThirdPartyTrackInfo timeSinceAdRenderInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a2008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0e0);
}



/* Entry: 1042a2018; end: 1042a2027; -[SCAdSnapThirdPartyTrackInfo adFirstRenderTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a2018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0e8);
}



/* Entry: 1042a2028; end: 1042a2037; -[SCAdSnapThirdPartyTrackInfo firstReactionTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a2028(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b0f0);
}



/* Entry: 1042a2038; end: 1042a204b; -[SCAdSnapThirdPartyTrackInfo audioQuadrantStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a2038(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306b0f8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042a204c; end: 1042a205f; -[SCAdSnapThirdPartyTrackInfo trackURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a204c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306b100);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042a2060; end: 1042a20a3;  */

void FUN_1042a2060(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042a20a4; end: 1042a2393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a20a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b088);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306b090) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306b098) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0d0) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_11306b0d8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0e0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0e8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0f0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0f8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11306b100) = param_17;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a2394; end: 1042a249f; -[SCAdSnapThirdPartyTrackInfo initWithAdIdentifier:adProductType:topSnapMediaDurationInMillis:topSnapTotalViewTimeInMillis:topSnapMaxUnobstructedViewTimeInMillis:topSnapTotalAudibleViewTimeInMillis:topSnapTotalUnobstructedViewTimeInMillis:topSnapMaxUnobstructedAudibleViewTimeInMillis:topSnapTotalUnobstructedAudibleViewTimeInMillis:topSnapCappedMaxViewDurationMillis:wasTopSnapFullyViewed:timeSinceAdRenderInMillis:adFirstRenderTimestampInMillis:firstReactionTimestampInMillis:audioQuadrantStates:trackURLs:] */

void FUN_1042a2394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_17,PTR___sSiN_11034deb0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_18,PTR___sSSN_11034da80);
  func_0x0001042a221c(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_8,param_10,
                      param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  return;
}



/* Entry: 1042a24a0; end: 1042a2627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a24a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b088);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306b090) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306b098) = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0a0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0a8) = uVar2;
  uVar2 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0b0) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0b8) = uVar2;
  uVar2 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0c0) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0c8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11306b0d0) = param_1[10];
  *(undefined1 *)(unaff_x20 + _DAT_11306b0d8) = *(undefined1 *)(param_1 + 0xb);
  uVar2 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0e0) = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0e8) = uVar2;
  uStack_48 = param_1[0xf];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0f0) = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_11306b0f8) = uStack_48;
  uStack_50 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_11306b100) = uStack_50;
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x0001042a34d4(&uStack_48,auStack_60,0x112d4b170,&UNK_10d911a80);
  func_0x0001042a34d4(&uStack_50,auStack_60,0x112d38270,&UNK_10d905a20);
  func_0x0001018657d8(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a2628; end: 1042a265b; -[SCAdSnapThirdPartyTrackInfo hash] */

undefined8 FUN_1042a2628(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042a1a2c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042a265c; end: 1042a26db; -[SCAdSnapThirdPartyTrackInfo isEqual:] */

uint FUN_1042a265c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a1c64(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a26dc; end: 1042a26df; -[SCAdSnapThirdPartyTrackInfo copyWithZone:] */

void FUN_1042a26dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a26e0; end: 1042a2b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a26e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b088);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306b088))[1]);
  uVar1 = 0x544e4544495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e4544495f4441,0xed00005245494649);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f19e0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b0a0);
  uVar2 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f2240);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b0a8);
  uVar2 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f2270);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b0b0);
  uVar2 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f22a0);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b0b8);
  uVar2 = 0xd00000000000002f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1f22d0);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b0c0);
  uVar2 = 0xd000000000000035;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x800000010f1f2300);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b0c8);
  uVar2 = 0xd000000000000037;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x800000010f1f2340);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1f2380);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f23b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f23d0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f23f0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f2420);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b0f8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSiN_11034deb0);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2450);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b100);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
  uVar1 = 0x52555f4b43415254;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f4b43415254,0xea0000000000534c);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042a2b88; end: 1042a2bd7; -[SCAdSnapThirdPartyTrackInfo encodeWithCoder:] */

void FUN_1042a2b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042a26e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a2bd8; end: 1042a2c07;  */

void FUN_1042a2bd8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042a2c08(param_1);
  return;
}



/* Entry: 1042a2c08; end: 1042a329b;  */

undefined8 FUN_1042a2c08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  uVar2 = 0x544e4544495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e4544495f4441,0xed00005245494649);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    _objc_release(param_1);
LAB_1042a2d50:
    func_0x00010006e7f4(&uStack_c0);
  }
  else {
    puVar4 = &uStack_f0;
    uVar8 = uStack_d0;
    _swift_dynamicCast(puVar4,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_f0;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0x55444f52505f4441;
      uVar7 = 0x545f5443;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
      func_0x00010bf66f40();
      _objc_release(uVar5);
      func_0x000102d02a38();
      if ((uVar7 & 0xff) != 1) {
        uVar5 = 0xd000000000000021;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f19e0)
        ;
        func_0x00010bf66f40(param_1);
        _objc_release(uVar5);
        uVar5 = 0xd000000000000022;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f2240)
        ;
        func_0x00010bf66da0(param_1);
        uVar9 = uVar8;
        _objc_release(uVar5);
        uVar5 = 0xd00000000000002d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f2270)
        ;
        func_0x00010bf66da0(param_1);
        uVar10 = uVar9;
        _objc_release(uVar5);
        uVar5 = 0xd00000000000002a;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f22a0)
        ;
        func_0x00010bf66da0(param_1);
        uVar11 = uVar10;
        _objc_release(uVar5);
        uVar5 = 0xd00000000000002f;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1f22d0)
        ;
        func_0x00010bf66da0(param_1);
        uVar12 = uVar11;
        _objc_release(uVar5);
        uVar5 = 0xd000000000000035;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x800000010f1f2300)
        ;
        func_0x00010bf66da0(param_1);
        uVar13 = uVar12;
        _objc_release(uVar5);
        uVar5 = 0xd000000000000037;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x800000010f1f2340)
        ;
        func_0x00010bf66da0(param_1);
        _objc_release(uVar5);
        uVar5 = 0xd000000000000028;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1f2380)
        ;
        func_0x00010bf66f40(param_1);
        _objc_release(uVar5);
        uVar5 = 0xd000000000000019;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f23b0)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar5);
        uVar5 = 0xd00000000000001e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f23d0)
        ;
        func_0x00010bf66f40();
        _objc_release(uVar5);
        uVar5 = 0xd000000000000023;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f23f0)
        ;
        func_0x00010bf66f40();
        _objc_release(uVar5);
        uVar5 = 0xd000000000000022;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f2420)
        ;
        func_0x00010bf66f40();
        _objc_release(uVar5);
        uVar5 = 0xd000000000000015;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2450)
        ;
        lVar3 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar3 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
          _swift_unknownObjectRelease(lVar3);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 != 0) {
          uVar5 = 0x112d4b170;
          func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
          puVar4 = &uStack_f0;
          _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar5,6);
          uVar5 = uStack_f0;
          if (((ulong)puVar4 & 1) == 0) {
            _objc_release(param_1);
          }
          else {
            uVar6 = 0x52555f4b43415254;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0x52555f4b43415254,0xea0000000000534c);
            lVar3 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            if (lVar3 == 0) {
              uStack_d8 = 0;
              uStack_e0 = 0;
              lStack_c8 = 0;
              uStack_d0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
              _swift_unknownObjectRelease(lVar3);
            }
            uStack_b8 = uStack_d8;
            uStack_c0 = uStack_e0;
            lStack_a8 = lStack_c8;
            uStack_b0 = uStack_d0;
            if (lStack_c8 == 0) {
              _objc_release(param_1);
              _swift_bridgeObjectRelease(uVar5);
              goto LAB_1042a3274;
            }
            uVar6 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            puVar4 = &uStack_f0;
            _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar6,6);
            if (((ulong)puVar4 & 1) != 0) {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_e8);
              _swift_bridgeObjectRelease(uStack_e8);
              uVar6 = uVar5;
              __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar5,PTR___sSiN_11034deb0);
              _swift_bridgeObjectRelease(uVar5);
              uVar5 = uStack_f0;
              __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_f0,PTR___sSSN_11034da80);
              _swift_bridgeObjectRelease(uStack_f0);
              func_0x00010bff17e0(uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
              _objc_release(uVar2);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(param_1);
              return unaff_x20;
            }
            _objc_release(param_1);
            _swift_bridgeObjectRelease(uVar5);
          }
          _swift_bridgeObjectRelease(uStack_e8);
          goto LAB_1042a2d58;
        }
        _objc_release(param_1);
LAB_1042a3274:
        _swift_bridgeObjectRelease(uStack_e8);
        goto LAB_1042a2d50;
      }
      _swift_bridgeObjectRelease(uStack_e8);
    }
    _objc_release(param_1);
  }
LAB_1042a2d58:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042a329c; end: 1042a32c3; -[SCAdSnapThirdPartyTrackInfo initWithCoder:] */

void FUN_1042a329c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042a2c08();
  return;
}



/* Entry: 1042a32c4; end: 1042a32f7; -[SCAdSnapThirdPartyTrackInfo description] */

void FUN_1042a32c4(void)

{
  undefined1 auStack_98 [136];
  
  func_0x0001042a33c0(auStack_98);
  func_0x0001018657d8(auStack_98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a32f8; end: 1042a3373; -[SCAdSnapThirdPartyTrackInfo init] */

void FUN_1042a32f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSnapThirdPartyTrackInfoWrapper.swift",0x35,2,0xdc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a3340);
  (*pcVar1)();
}



/* Entry: 1042a3374; end: 1042a351b; -[SCAdSnapThirdPartyTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3374(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b088 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b0f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306b100));
  return;
}



/* Entry: 1042a351c; end: 1042a353b;  */

void FUN_1042a351c(void)

{
  _objc_opt_self(&PTR_PTR_1129941d0);
  return;
}



/* Entry: 1042a353c; end: 1042a35b7;  */

undefined8 FUN_1042a353c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042a5b4c(param_1);
  func_0x00010179528c(param_1);
  return uVar1;
}



/* Entry: 1042a35b8; end: 1042a35c7; -[SCAdSnapTrackInfo adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a35b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b130);
}



/* Entry: 1042a35c8; end: 1042a35d7; -[SCAdSnapTrackInfo commonTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a35c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b138));
  return;
}



/* Entry: 1042a35d8; end: 1042a35e7; -[SCAdSnapTrackInfo deepLinkTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a35d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b140));
  return;
}



/* Entry: 1042a35e8; end: 1042a35f7; -[SCAdSnapTrackInfo webvViewTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a35e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b148));
  return;
}



/* Entry: 1042a35f8; end: 1042a3607; -[SCAdSnapTrackInfo collectionTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a35f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b150));
  return;
}



/* Entry: 1042a3608; end: 1042a3617; -[SCAdSnapTrackInfo adToLensTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b158));
  return;
}



/* Entry: 1042a3618; end: 1042a3627; -[SCAdSnapTrackInfo showcaseTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b160));
  return;
}



/* Entry: 1042a3628; end: 1042a3637; -[SCAdSnapTrackInfo adToCallTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b168));
  return;
}



/* Entry: 1042a3638; end: 1042a3647; -[SCAdSnapTrackInfo adToMessageTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b170));
  return;
}



/* Entry: 1042a3648; end: 1042a3657; -[SCAdSnapTrackInfo leadGenerationTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b178));
  return;
}



/* Entry: 1042a3658; end: 1042a3667; -[SCAdSnapTrackInfo appInstallAdTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b180));
  return;
}



/* Entry: 1042a3668; end: 1042a3677; -[SCAdSnapTrackInfo surveyTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b188));
  return;
}



/* Entry: 1042a3678; end: 1042a3687; -[SCAdSnapTrackInfo reminderTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b190));
  return;
}



/* Entry: 1042a3688; end: 1042a3697; -[SCAdSnapTrackInfo promotedPlaceTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b198));
  return;
}



/* Entry: 1042a3698; end: 1042a36a7; -[SCAdSnapTrackInfo pharmaTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b1a0));
  return;
}



/* Entry: 1042a36a8; end: 1042a3977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a36a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b130) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b138) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306b140) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b148) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b150) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306b158) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b160) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306b168) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306b170) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306b178) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306b180) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306b188) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306b190) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306b198) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306b1a0) = param_15;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a3978; end: 1042a3aa7; -[SCAdSnapTrackInfo initWithAdType:commonTrackInfo:deepLinkTrackInfo:webvViewTrackInfo:collectionTrackInfo:adToLensTrackInfo:showcaseTrackInfo:adToCallTrackInfo:adToMessageTrackInfo:leadGenerationTrackInfo:appInstallAdTrackInfo:surveyTrackInfo:reminderTrackInfo:promotedPlaceTrackInfo:pharmaTrackInfo:] */

void FUN_1042a3978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  func_0x0001042a3810(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17);
  return;
}



/* Entry: 1042a3aa8; end: 1042a3adb; -[SCAdSnapTrackInfo hash] */

undefined8 FUN_1042a3aa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042a3adc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042a3adc; end: 1042a40fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a3adc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [72];
  undefined1 auStack_248 [72];
  undefined1 auStack_200 [72];
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherVABycfC(auStack_128);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b130);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11306b138) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104297e04();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b140) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104281450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b148) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042c3e80();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b150);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(&uStack_e0);
    lVar4 = *(long *)(lVar6 + _DAT_11306a578);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar1 = 0;
      FUN_1042a1954(0);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
      lVar5 = lVar4;
      func_0x00010bfde980();
      _objc_release(lVar4);
    }
    __ss6HasherV8_combineyySuF(lVar5);
    uVar1 = *(undefined8 *)(lVar6 + _DAT_11306a580);
    __ss6HasherV8_combineyySuF(uVar1);
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_50 = uStack_a0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b158);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(&uStack_2d8);
    lVar6 = *(long *)(lVar6 + _DAT_11306b2c8);
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      uVar1 = 0;
      FUN_10428c074(0);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,uVar1);
      lVar4 = lVar6;
      func_0x00010bfde980();
      _objc_release(lVar6);
    }
    __ss6HasherV8_combineyySuF(lVar4);
    uStack_b8 = uStack_2b0;
    uStack_c0 = uStack_2b8;
    uStack_a8 = uStack_2a0;
    uStack_b0 = uStack_2a8;
    uStack_a0 = uStack_298;
    uStack_d8 = uStack_2d0;
    uStack_e0 = uStack_2d8;
    uStack_c8 = uStack_2c0;
    uStack_d0 = uStack_2c8;
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b160);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar6);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b168);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_290);
    uVar2 = (ulong)*(byte *)(lVar6 + _DAT_11306b298);
    __ss6HasherV8_combineyys5UInt8VF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b170);
  if (lVar6 == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_248);
    uVar2 = (ulong)*(byte *)(lVar6 + _DAT_11306b300);
    __ss6HasherV8_combineyys5UInt8VF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b178) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104286584();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b180) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10427a878();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b188);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_200);
    if (*(long *)(lVar6 + _DAT_11306b268) == 0) {
      uVar2 = 0;
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      func_0x000104810cf0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar2);
    }
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b190);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_1b8);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + _DAT_11306ad10));
    if (((undefined8 *)(lVar6 + _DAT_11306ad18))[1] == 0) {
      uVar1 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar6 + _DAT_11306ad18);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
      uVar1 = uVar3;
      func_0x00010bfde980();
      _objc_release(uVar3);
    }
    __ss6HasherV8_combineyySuF(uVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306b198);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar6);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b1a0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_170);
    FUN_10428ed14();
    __ss6HasherV8_combineyySuF();
    func_0x00010428eeb8();
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar6);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042a40fc; end: 1042a4837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042a40fc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_88;
  long alStack_80 [4];
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  FUN_1042a6cf4(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,alStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar5 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306b130);
      iVar2 = *(int *)(lStack_88 + _DAT_11306b130);
      if (*(long *)(unaff_x20 + _DAT_11306b138) == 0) {
        uStack_94 = (uint)(*(long *)(lStack_88 + _DAT_11306b138) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b138);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_10429fef4();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uStack_94 = 0;
        FUN_1042989bc();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b140) == 0) {
        uStack_98 = (uint)(*(long *)(lStack_88 + _DAT_11306b140) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b140);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042826f0();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uStack_98 = 0;
        FUN_104281634();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b148) == 0) {
        uStack_9c = (uint)(*(long *)(lStack_88 + _DAT_11306b148) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b148);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042ca7c4();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uStack_9c = 0;
        FUN_1042c4774();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b150) == 0) {
        uStack_a0 = (uint)(*(long *)(lStack_88 + _DAT_11306b150) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b150);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_10427f900();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uStack_a0 = 0;
        FUN_10427ef34();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b158) == 0) {
        uStack_a4 = (uint)(*(long *)(lStack_88 + _DAT_11306b158) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b158);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042a9b24();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uStack_a4 = 0;
        FUN_1042a918c();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306b160);
      if (lVar9 == 0) {
        uStack_a8 = (uint)(*(long *)(lStack_88 + _DAT_11306b160) == 0);
      }
      else {
        func_0x00010c071ae0();
        uStack_a8 = (uint)lVar9;
      }
      if (*(long *)(unaff_x20 + _DAT_11306b168) == 0) {
        uVar14 = (uint)(*(long *)(lStack_88 + _DAT_11306b168) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b168);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042a9138();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar14 = 0;
        FUN_1042a8cf8();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b170) == 0) {
        uVar8 = (uint)(*(long *)(lStack_88 + _DAT_11306b170) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b170);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042a9f9c();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar8 = 0;
        FUN_1042a9b44();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b178) == 0) {
        uVar10 = (uint)(*(long *)(lStack_88 + _DAT_11306b178) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b178);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_104286f80();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar10 = 0;
        FUN_10428664c();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b180) == 0) {
        uVar11 = (uint)(*(long *)(lStack_88 + _DAT_11306b180) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b180);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_10427bf14();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar11 = 0;
        FUN_10427aa84();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b188) == 0) {
        uVar12 = (uint)(*(long *)(lStack_88 + _DAT_11306b188) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b188);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042a8cd8();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar12 = 0;
        FUN_1042a8714();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b190) == 0) {
        uVar13 = (uint)(*(long *)(lStack_88 + _DAT_11306b190) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b190);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1042945c8();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar13 = 0;
        FUN_1042940a4();
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306b198);
      if (lVar9 == 0) {
        uVar3 = (uint)(*(long *)(lStack_88 + _DAT_11306b198) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar3 = (uint)lVar9;
      }
      if (*(long *)(unaff_x20 + _DAT_11306b1a0) == 0) {
        lVar6 = *(long *)(lStack_88 + _DAT_11306b1a0);
        lVar9 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_88);
        if (lVar6 == 0) {
          uVar4 = 1;
        }
        else {
          _objc_release(lVar9);
          uVar4 = 0;
        }
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11306b1a0);
        if (lVar9 == 0) {
          uVar7 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar7 = 0;
          FUN_104290ef4();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = uVar7;
        _objc_retain(lVar9);
        plVar5 = alStack_80;
        func_0x00010428f05c(plVar5);
        uVar4 = (uint)plVar5;
        _objc_release(lStack_88);
        func_0x0001042a6d3c(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (iVar1 != iVar2) {
        return 0;
      }
      if (((uStack_94 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uStack_98 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uStack_9c ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uStack_a0 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uStack_a4 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uStack_a8 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar14 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar8 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar10 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar11 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar12 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar13 ^ 1) & 1) != 0) {
        return 0;
      }
      return uVar3 & uVar4;
    }
  }
  return 0;
}



/* Entry: 1042a4838; end: 1042a48c7; -[SCAdSnapTrackInfo isEqual:] */

uint FUN_1042a4838(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a40fc(&uStack_40);
  _objc_release(param_1);
  func_0x0001042a6d3c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042a48c8; end: 1042a48cb; -[SCAdSnapTrackInfo copyWithZone:] */

void FUN_1042a48c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a48cc; end: 1042a4cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a48cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f24b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f24d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f24f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2510);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2530);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2170);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2550);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2570);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f2590);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f25b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f25d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f25f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f2610);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2630);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042a4cc8; end: 1042a4d17; -[SCAdSnapTrackInfo encodeWithCoder:] */

void FUN_1042a4cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042a48cc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a4d18; end: 1042a4d47;  */

void FUN_1042a4d18(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042a4d48(param_1);
  return;
}



/* Entry: 1042a4d48; end: 1042a596f;  */

undefined8 FUN_1042a4d48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x455059545f4441;
  uVar11 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_1042a6cc4();
  if ((uVar11 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f24b0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    puVar1 = PTR___sypN_11034f1a8;
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_f8 = 0;
    }
    else {
      uVar2 = 0;
      FUN_10429fef4(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_f8 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_f8 = 0;
      }
    }
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f24d0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_d8 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042826f0(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_d8 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_d8 = 0;
      }
    }
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f24f0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_e0 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042ca7c4(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_e0 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_e0 = 0;
      }
    }
    uVar2 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2510);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_e8 = 0;
    }
    else {
      uVar2 = 0;
      FUN_10427f900(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_e8 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_e8 = 0;
      }
    }
    uVar2 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2530);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_f0 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042a9b24(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_f0 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_f0 = 0;
      }
    }
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2170);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_100 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042208ac(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_100 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_100 = 0;
      }
    }
    uVar2 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2550);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uStack_108 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042a9138(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uStack_108 = uStack_b8;
      if ((int)puVar4 == 0) {
        uStack_108 = 0;
      }
    }
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2570);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042a9f9c(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
      uVar2 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar2 = 0;
      }
    }
    uVar5 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f2590);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      FUN_104286f80(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar5,6);
      uVar5 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar5 = 0;
      }
    }
    uVar6 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f25b0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_10427bf14(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar6,6);
      uVar6 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar6 = 0;
      }
    }
    uVar7 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f25d0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      FUN_1042a8cd8(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar7,6);
      uVar7 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar7 = 0;
      }
    }
    uVar8 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f25f0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_1042945c8(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar8,6);
      uVar8 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar8 = 0;
      }
    }
    uVar9 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f2610);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      FUN_1042f4c7c(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar9,6);
      uVar9 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar9 = 0;
      }
    }
    uVar10 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2630);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x0001042a6d3c(&uStack_90,0x112d387f8,&UNK_10d902650);
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      FUN_104290ef4(0);
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar10,6);
      uVar10 = uStack_b8;
      if ((int)puVar4 == 0) {
        uVar10 = 0;
      }
    }
    func_0x00010bff2180(unaff_x20);
    _objc_release(param_1);
    _objc_release(uStack_f8);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar10);
  }
  return unaff_x20;
}



/* Entry: 1042a5970; end: 1042a5997; -[SCAdSnapTrackInfo initWithCoder:] */

void FUN_1042a5970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042a4d48();
  return;
}



/* Entry: 1042a5998; end: 1042a59d7; -[SCAdSnapTrackInfo description] */

void FUN_1042a5998(void)

{
  undefined1 auStack_ad8 [2744];
  
  _objc_retain();
  func_0x0001042a6474(auStack_ad8);
  func_0x00010179528c(auStack_ad8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a59d8; end: 1042a5a53; -[SCAdSnapTrackInfo init] */

void FUN_1042a59d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdSnapTrackInfoWrapper.swift",
             0x2b,2,0xce,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a5a20);
  (*pcVar1)();
}



/* Entry: 1042a5a54; end: 1042a5b4b; -[SCAdSnapTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a5a54(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b138));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b140));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b148));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b150));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b158));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b160));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b168));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b170));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b178));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b180));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b188));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b190));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b198));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b1a0));
  return;
}



/* Entry: 1042a5b4c; end: 1042a6cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a5b4c(undefined8 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_2058 [1448];
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  long lStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined1 uStack_1a58;
  undefined7 uStack_1a57;
  undefined1 uStack_1a50;
  undefined7 uStack_1a4f;
  undefined1 uStack_1a48;
  long lStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined1 uStack_1458;
  undefined7 uStack_1457;
  undefined1 uStack_1450;
  undefined8 uStack_144f;
  long lStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined1 uStack_1148;
  undefined7 uStack_1147;
  undefined1 uStack_1140;
  undefined8 uStack_113f;
  long lStack_ee0;
  long lStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  long lStack_ec0;
  long lStack_eb8;
  undefined1 auStack_eb0 [192];
  long lStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined7 uStack_d47;
  undefined1 uStack_d40;
  undefined8 uStack_d3f;
  long lStack_d30;
  long lStack_d28;
  long lStack_d20;
  long lStack_d18;
  long lStack_d10;
  long lStack_d08;
  long lStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c88;
  long lStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  long lStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 uStack_bd8;
  undefined7 uStack_bd7;
  undefined1 uStack_bd0;
  undefined8 uStack_bcf;
  undefined1 auStack_bc0 [1448];
  undefined1 auStack_618 [1464];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11306b130) = *param_1;
  _memcpy(auStack_618,param_1 + 1,0x5a8);
  iVar4 = (int)auStack_618;
  func_0x00010189c838();
  if (iVar4 == 1) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_bc0,auStack_618,0x5a8);
    FUN_10429fef4(0);
    _objc_allocWithZone();
    _memcpy(&uStack_1ab0,auStack_618,0x5a8);
    func_0x00010178e37c(&uStack_1ab0,auStack_2058);
    puVar12 = auStack_bc0;
    FUN_10429d574();
    func_0x0001042a6d3c(auStack_618,0x112dcbd00,&UNK_10d98e550);
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306b138) = puVar12;
  lVar11 = param_1[0xba];
  if (lVar11 == 1) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uStack_1aa8 = param_1[0xb7];
    uStack_1ab0 = param_1[0xb6];
    uStack_1a80 = param_1[0xbc];
    uStack_1a88 = param_1[0xbb];
    uStack_1a70 = param_1[0xbe];
    uStack_1a78 = param_1[0xbd];
    uStack_1a60 = param_1[0xc0];
    uStack_1a68 = param_1[0xbf];
    uStack_1a50 = (undefined1)param_1[0xc2];
    uStack_1a4f = (undefined7)((ulong)param_1[0xc2] >> 8);
    uStack_1a58 = (undefined1)param_1[0xc1];
    uStack_1a57 = (undefined7)((ulong)param_1[0xc1] >> 8);
    uStack_1a98 = param_1[0xb9];
    uStack_1aa0 = param_1[0xb8];
    uStack_1a48 = *(undefined1 *)(param_1 + 0xc3);
    uStack_bcf = CONCAT17(uStack_1a48,uStack_1a4f);
    uStack_bd0 = uStack_1a50;
    lStack_1a90 = lVar11;
    uStack_c30 = uStack_1ab0;
    uStack_c28 = uStack_1aa8;
    uStack_c20 = uStack_1aa0;
    uStack_c18 = uStack_1a98;
    lStack_c10 = lVar11;
    uStack_c08 = uStack_1a88;
    uStack_c00 = uStack_1a80;
    uStack_bf8 = uStack_1a78;
    uStack_bf0 = uStack_1a70;
    uStack_be8 = uStack_1a68;
    uStack_be0 = uStack_1a60;
    uStack_bd8 = uStack_1a58;
    uStack_bd7 = uStack_1a57;
    FUN_1042826f0(0);
    _objc_allocWithZone();
    func_0x00010178e30c(&uStack_1ab0,auStack_2058);
    puVar5 = &uStack_c30;
    FUN_104281270();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306b140) = puVar5;
  _memcpy(auStack_2058,param_1 + 0xc4,0x301);
  iVar4 = (int)auStack_2058;
  func_0x00010178e1e4();
  if (iVar4 == 1) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    _memcpy(&uStack_1ab0,auStack_2058,0x301);
    FUN_1042ca7c4(0);
    _objc_allocWithZone();
    _memcpy(&lStack_11f0,auStack_2058,0x301);
    func_0x00010178e208(&lStack_11f0,&lStack_1500);
    puVar5 = &uStack_1ab0;
    FUN_1042c96c8();
    func_0x0001042a6d3c(auStack_2058,0x112dcbc48,&UNK_10d98e2c0);
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306b148) = puVar5;
  lVar11 = param_1[0x125];
  if (lVar11 == 1) {
    lVar11 = 0;
  }
  else {
    FUN_10427f900(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain();
    FUN_10427eb28();
  }
  *(long *)(unaff_x20 + _DAT_11306b150) = lVar11;
  lVar11 = param_1[0x127];
  if (lVar11 == 1) {
    lVar11 = 0;
  }
  else {
    FUN_1042a9b24(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain();
    FUN_1042a93ac();
  }
  *(long *)(unaff_x20 + _DAT_11306b158) = lVar11;
  uStack_c88 = param_1[0x128];
  *(undefined8 *)(unaff_x20 + _DAT_11306b160) = uStack_c88;
  bVar1 = *(byte *)(param_1 + 0x129);
  if (bVar1 == 2) {
    FUN_1042a6cf4(&uStack_c88,&lStack_11f0,0x113069a40,&UNK_10dce5b00);
    plVar6 = (long *)0x0;
  }
  else {
    lVar9 = 0;
    FUN_1042a9138();
    lVar11 = lVar9;
    _objc_allocWithZone();
    *(byte *)(lVar11 + _DAT_11306b298) = bVar1 & 1;
    FUN_1042a6cf4(&uStack_c88,&lStack_11f0,0x113069a40,&UNK_10dce5b00);
    plVar6 = &lStack_ee0;
    lStack_ee0 = lVar11;
    lStack_ed8 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306b168) = plVar6;
  bVar1 = *(byte *)((long)param_1 + 0x949);
  if (bVar1 == 2) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar9 = 0;
    FUN_1042a9f9c();
    lVar11 = lVar9;
    _objc_allocWithZone();
    *(byte *)(lVar11 + _DAT_11306b300) = bVar1 & 1;
    plVar6 = &lStack_ed0;
    lStack_ed0 = lVar11;
    lStack_ec8 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306b170) = plVar6;
  uStack_ce8 = param_1[299];
  lStack_cf0 = param_1[0x12a];
  uStack_cc8 = param_1[0x12f];
  uStack_cd0 = param_1[0x12e];
  uStack_cb8 = param_1[0x131];
  uStack_cc0 = param_1[0x130];
  uStack_ca8 = param_1[0x133];
  uStack_cb0 = param_1[0x132];
  uStack_c98 = param_1[0x135];
  uStack_ca0 = param_1[0x134];
  uStack_cd8 = param_1[0x12d];
  uStack_ce0 = param_1[300];
  if (lStack_cf0 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    uStack_11c8 = param_1[0x12f];
    uStack_11d0 = param_1[0x12e];
    uStack_11b8 = param_1[0x131];
    uStack_11c0 = param_1[0x130];
    uStack_11a8 = param_1[0x133];
    uStack_11b0 = param_1[0x132];
    uStack_1198 = param_1[0x135];
    uStack_11a0 = param_1[0x134];
    uStack_11e8 = param_1[299];
    lStack_11f0 = param_1[0x12a];
    uStack_11d8 = param_1[0x12d];
    uStack_11e0 = param_1[300];
    lVar9 = 0;
    FUN_104286f80();
    lVar11 = lVar9;
    _objc_allocWithZone();
    if (lStack_11f0 == 0) {
      func_0x00010178e15c(&lStack_11f0,&lStack_1500);
      plVar6 = (long *)0x0;
    }
    else {
      uStack_c58 = param_1[0x12f];
      uStack_c60 = param_1[0x12e];
      uStack_c48 = param_1[0x131];
      uStack_c50 = param_1[0x130];
      uStack_c38 = param_1[0x133];
      uStack_c40 = param_1[0x132];
      uStack_c78 = param_1[299];
      lStack_c80 = param_1[0x12a];
      uStack_c68 = param_1[0x12d];
      uStack_c70 = param_1[300];
      FUN_10428a35c(0);
      _objc_allocWithZone();
      FUN_1042a6cf4(&lStack_cf0,&lStack_1500,0x112dcbc38,&UNK_10d98e290);
      FUN_1042a6cf4(&lStack_11f0,&lStack_1500,0x112dcc710,&UNK_10d98f0e0);
      plVar6 = &lStack_c80;
      FUN_104289a78();
      func_0x0001042a6d3c(&lStack_11f0,0x112dcc710,&UNK_10d98f0e0);
    }
    *(long **)(lVar11 + _DAT_11306a838) = plVar6;
    puVar5 = (undefined8 *)(lVar11 + _DAT_11306a840);
    *puVar5 = uStack_11a0;
    puVar5[1] = uStack_1198;
    func_0x000100de78a0();
    plVar6 = &lStack_ec0;
    lStack_ec0 = lVar11;
    lStack_eb8 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    func_0x0001042a6d3c(&lStack_cf0,0x112dcbc38,&UNK_10d98e290);
  }
  *(long **)(unaff_x20 + _DAT_11306b178) = plVar6;
  uStack_1478 = param_1[0x147];
  uStack_1480 = param_1[0x146];
  uStack_1468 = param_1[0x149];
  uStack_1470 = param_1[0x148];
  uStack_1460 = param_1[0x14a];
  uStack_1458 = (undefined1)param_1[0x14b];
  uStack_14b8 = param_1[0x13f];
  uStack_14c0 = param_1[0x13e];
  uStack_14a8 = param_1[0x141];
  uStack_14b0 = param_1[0x140];
  uStack_1498 = param_1[0x143];
  uStack_14a0 = param_1[0x142];
  uStack_1488 = param_1[0x145];
  uStack_1490 = param_1[0x144];
  uStack_14f8 = param_1[0x137];
  lStack_1500 = param_1[0x136];
  uStack_14e8 = param_1[0x139];
  uStack_14f0 = param_1[0x138];
  uStack_14d8 = param_1[0x13b];
  uStack_14e0 = param_1[0x13a];
  uStack_14c8 = param_1[0x13d];
  uStack_14d0 = param_1[0x13c];
  uStack_144f = *(undefined8 *)((long)param_1 + 0xa61);
  uStack_1457 = (undefined7)*(undefined8 *)((long)param_1 + 0xa59);
  uStack_1450 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa59) >> 0x38);
  iVar4 = (int)&lStack_1500;
  func_0x00010178e278();
  if (iVar4 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    uStack_1168 = uStack_1478;
    uStack_1170 = uStack_1480;
    uStack_1158 = uStack_1468;
    uStack_1160 = uStack_1470;
    uStack_1148 = uStack_1458;
    uStack_1150 = uStack_1460;
    uStack_113f = uStack_144f;
    uStack_1147 = uStack_1457;
    uStack_1140 = uStack_1450;
    uStack_11a8 = uStack_14b8;
    uStack_11b0 = uStack_14c0;
    uStack_1198 = uStack_14a8;
    uStack_11a0 = uStack_14b0;
    uStack_1188 = uStack_1498;
    uStack_1190 = uStack_14a0;
    uStack_1178 = uStack_1488;
    uStack_1180 = uStack_1490;
    uStack_11e8 = uStack_14f8;
    lStack_11f0 = lStack_1500;
    uStack_11d8 = uStack_14e8;
    uStack_11e0 = uStack_14f0;
    uStack_11c8 = uStack_14d8;
    uStack_11d0 = uStack_14e0;
    uStack_11b8 = uStack_14c8;
    uStack_11c0 = uStack_14d0;
    FUN_10427bf14(0);
    _objc_allocWithZone();
    uStack_d68 = uStack_1478;
    uStack_d70 = uStack_1480;
    uStack_d58 = uStack_1468;
    uStack_d60 = uStack_1470;
    uStack_d48 = uStack_1458;
    uStack_d50 = uStack_1460;
    uStack_d3f = uStack_144f;
    uStack_d47 = uStack_1457;
    uStack_d40 = uStack_1450;
    uStack_da8 = uStack_14b8;
    uStack_db0 = uStack_14c0;
    uStack_d98 = uStack_14a8;
    uStack_da0 = uStack_14b0;
    uStack_d88 = uStack_1498;
    uStack_d90 = uStack_14a0;
    uStack_d78 = uStack_1488;
    uStack_d80 = uStack_1490;
    uStack_de8 = uStack_14f8;
    lStack_df0 = lStack_1500;
    uStack_dd8 = uStack_14e8;
    uStack_de0 = uStack_14f0;
    uStack_dc8 = uStack_14d8;
    uStack_dd0 = uStack_14e0;
    uStack_db8 = uStack_14c8;
    uStack_dc0 = uStack_14d0;
    func_0x00010178e29c(&lStack_df0,auStack_eb0);
    plVar6 = &lStack_11f0;
    FUN_10427b9a8();
    func_0x0001042a6d3c(&lStack_1500,0x112dcbc58,&UNK_10d98e2f0);
  }
  *(long **)(unaff_x20 + _DAT_11306b180) = plVar6;
  lVar11 = param_1[0x14e];
  if (lVar11 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar7 = 0;
    FUN_1042a8cd8();
    lVar9 = lVar7;
    _objc_allocWithZone();
    lVar8 = 0;
    if (lVar11 != 0) {
      func_0x0001048116c8();
      _objc_allocWithZone();
      _swift_bridgeObjectRetain();
      func_0x0001048109d4();
      lVar8 = lVar11;
    }
    *(long *)(lVar9 + _DAT_11306b268) = lVar8;
    plVar6 = &lStack_d30;
    lStack_d30 = lVar9;
    lStack_d28 = lVar7;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306b188) = plVar6;
  lVar11 = param_1[0x153];
  if (lVar11 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar13 = param_1[0x152];
    uVar15 = param_1[0x151];
    lVar8 = 0;
    FUN_1042945c8();
    lVar9 = lVar8;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_11306ad10) = uVar15;
    puVar5 = (undefined8 *)(lVar9 + _DAT_11306ad18);
    *puVar5 = uVar13;
    puVar5[1] = lVar11;
    puVar3 = PTR_s_init_1125d9248;
    lStack_d20 = lVar9;
    lStack_d18 = lVar8;
    _swift_bridgeObjectRetain(lVar11);
    plVar6 = &lStack_d20;
    _objc_msgSendSuper2(plVar6,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_11306b190) = plVar6;
  lStack_df0 = param_1[0x154];
  *(long *)(unaff_x20 + _DAT_11306b198) = lStack_df0;
  uVar14 = param_1[0x155];
  if ((uVar14 & 0xff) == 3) {
    FUN_1042a6cf4(&lStack_df0,auStack_eb0,0x112eae560,&UNK_10dac28d8);
    plVar6 = (long *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x156);
    lVar9 = 0;
    FUN_104290ef4();
    lVar11 = lVar9;
    _objc_allocWithZone();
    FUN_104290ab0(0);
    _objc_allocWithZone();
    FUN_1042a6cf4(&lStack_df0,auStack_eb0,0x112eae560,&UNK_10dac28d8);
    uVar10 = uVar14 & 0xffffffffff;
    func_0x00010428fd54();
    *(ulong *)(lVar11 + _DAT_11306ab40) = uVar10;
    func_0x000104290ad0(0);
    _objc_allocWithZone();
    uVar14 = (ulong)CONCAT24(uVar2 >> 8,(uint)uVar2 << 0x18) | uVar14 >> 0x28;
    func_0x0001042903a0();
    *(ulong *)(lVar11 + _DAT_11306ab48) = uVar14;
    plVar6 = &lStack_d10;
    lStack_d10 = lVar11;
    lStack_d08 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306b1a0) = plVar6;
  _objc_msgSendSuper2(&stack0xfffffffffffff300,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a6cc4; end: 1042a6cd3;  */

undefined1  [16] FUN_1042a6cc4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x18) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x17 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1042a6cd4; end: 1042a6cf3;  */

void FUN_1042a6cd4(void)

{
  _objc_opt_self(&PTR_PTR_112994318);
  return;
}



/* Entry: 1042a6cf4; end: 1042a6dab;  */

undefined8 FUN_1042a6cf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042a6dac; end: 1042a6f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a6dac(void)

{
  double *pdVar1;
  double dVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b1d0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar3 + _DAT_11306a608));
    pdVar1 = (double *)(lVar3 + _DAT_11306a610);
    dVar4 = *pdVar1;
    dVar2 = 0.0;
    if (dVar4 != 0.0) {
      dVar2 = dVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar4 = pdVar1[1];
    dVar2 = 0.0;
    if (dVar4 != 0.0) {
      dVar2 = dVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b1d8));
  pdVar1 = (double *)(unaff_x20 + _DAT_11306b1e0);
  dVar4 = *pdVar1;
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar4 = pdVar1[1];
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  pdVar1 = (double *)(unaff_x20 + _DAT_11306b1e8);
  dVar4 = *pdVar1;
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar4 = pdVar1[1];
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  pdVar1 = (double *)(unaff_x20 + _DAT_11306b1f0);
  dVar4 = *pdVar1;
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar4 = pdVar1[1];
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  pdVar1 = (double *)(unaff_x20 + _DAT_11306b1f8);
  dVar4 = *pdVar1;
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar4 = pdVar1[1];
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042a6fa0; end: 1042a7167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042a6fa0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  long lStack_88;
  long alStack_80 [4];
  
  lVar13 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar10 = &lStack_88;
    _swift_dynamicCast(plVar10,alStack_80,PTR___sypN_11034f1a8 + 8,lVar13,6);
    if (((ulong)plVar10 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11306b1d0) == 0) {
        uVar12 = (ulong)(*(long *)(lStack_88 + _DAT_11306b1d0) == 0);
      }
      else {
        lVar13 = *(long *)(lStack_88 + _DAT_11306b1d0);
        if (lVar13 == 0) {
          lVar11 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar11 = 0;
          FUN_104280db8();
        }
        alStack_80[0] = lVar13;
        alStack_80[3] = lVar11;
        _objc_retain(lVar13);
        uVar12 = 0;
        FUN_104280934();
        func_0x00010006e7f4(alStack_80);
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306b1d8);
      bVar2 = *(byte *)(lStack_88 + _DAT_11306b1d8);
      dVar18 = ((double *)(unaff_x20 + _DAT_11306b1e0))[1];
      dVar14 = *(double *)(unaff_x20 + _DAT_11306b1e0);
      dVar8 = ((double *)(lStack_88 + _DAT_11306b1e0))[1];
      dVar5 = *(double *)(lStack_88 + _DAT_11306b1e0);
      dVar19 = ((double *)(unaff_x20 + _DAT_11306b1e8))[1];
      dVar15 = *(double *)(unaff_x20 + _DAT_11306b1e8);
      dVar9 = ((double *)(lStack_88 + _DAT_11306b1e8))[1];
      dVar6 = *(double *)(lStack_88 + _DAT_11306b1e8);
      dVar7 = *(double *)(unaff_x20 + _DAT_11306b1f0);
      dVar16 = ((double *)(unaff_x20 + _DAT_11306b1f0))[1];
      dVar21 = *(double *)(lStack_88 + _DAT_11306b1f0);
      dVar22 = ((double *)(lStack_88 + _DAT_11306b1f0))[1];
      dVar25 = *(double *)(unaff_x20 + _DAT_11306b1f8);
      dVar23 = ((double *)(unaff_x20 + _DAT_11306b1f8))[1];
      dVar26 = *(double *)(lStack_88 + _DAT_11306b1f8);
      dVar24 = ((double *)(lStack_88 + _DAT_11306b1f8))[1];
      _objc_release(lStack_88);
      if (dVar25 == dVar26) {
        lVar13 = -(ulong)(dVar15 == dVar6);
        lVar11 = -(ulong)(dVar19 == dVar9);
        lVar17 = -(ulong)(dVar14 == dVar5);
        lVar20 = -(ulong)(dVar18 == dVar8);
        auVar3[1] = ~(byte)((ulong)lVar17 >> 8);
        auVar3[0] = ~(byte)lVar17;
        auVar3[2] = ~(byte)((ulong)lVar17 >> 0x10);
        auVar3[3] = ~(byte)((ulong)lVar17 >> 0x18);
        auVar3[4] = ~(byte)lVar20;
        auVar3[5] = ~(byte)((ulong)lVar20 >> 8);
        auVar3[6] = ~(byte)((ulong)lVar20 >> 0x10);
        auVar3[7] = ~(byte)((ulong)lVar20 >> 0x18);
        auVar3[8] = ~(byte)lVar13;
        auVar3[9] = ~(byte)((ulong)lVar13 >> 8);
        auVar3[10] = ~(byte)((ulong)lVar13 >> 0x10);
        auVar3[0xb] = ~(byte)((ulong)lVar13 >> 0x18);
        auVar3[0xc] = ~(byte)lVar11;
        auVar3[0xd] = ~(byte)((ulong)lVar11 >> 8);
        auVar3[0xe] = ~(byte)((ulong)lVar11 >> 0x10);
        auVar3[0xf] = ~(byte)((ulong)lVar11 >> 0x18);
        uVar4 = NEON_umaxv(auVar3,4);
        if ((uVar4 & 1) != 0) {
          return false;
        }
        if ((uVar12 & 1) == 0) {
          return false;
        }
        if (((bVar1 ^ bVar2) & 1) != 0) {
          return false;
        }
        return dVar23 == dVar24 && (dVar16 == dVar22 && dVar7 == dVar21);
      }
    }
  }
  return false;
}



/* Entry: 1042a7168; end: 1042a7177; -[SCAdStickerInfoTrackInfo customPlacementServerConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a7168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b1d0));
  return;
}



/* Entry: 1042a7178; end: 1042a7187; -[SCAdStickerInfoTrackInfo isDoubleTapEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a7178(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b1d8);
}



/* Entry: 1042a7188; end: 1042a719b; -[SCAdStickerInfoTrackInfo stickerSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042a7188(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306b1e0);
}



/* Entry: 1042a719c; end: 1042a71af; -[SCAdStickerInfoTrackInfo stickerRelativeSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042a719c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306b1e8);
}



/* Entry: 1042a71b0; end: 1042a71c3; -[SCAdStickerInfoTrackInfo stickerPositionBottomLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042a71b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306b1f0);
}



/* Entry: 1042a71c4; end: 1042a71d7; -[SCAdStickerInfoTrackInfo stickerPositionBottomLeftRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042a71c4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306b1f8);
}



/* Entry: 1042a71d8; end: 1042a72bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a71d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b1d0) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306b1d8) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b1e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b1e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b1f0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b1f8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a72bc; end: 1042a73ab; -[SCAdStickerInfoTrackInfo initWithCustomPlacementServerConfig:isDoubleTapEnabled:stickerSize:stickerRelativeSize:stickerPositionBottomLeft:stickerPositionBottomLeftRelative:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a72bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_80;
  long lStack_78;
  
  lVar3 = param_9;
  _swift_getObjectType();
  *(undefined8 *)(param_9 + _DAT_11306b1d0) = param_11;
  *(undefined1 *)(param_9 + _DAT_11306b1d8) = param_12;
  puVar1 = (undefined8 *)(param_9 + _DAT_11306b1e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_9 + _DAT_11306b1e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_9 + _DAT_11306b1f0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(param_9 + _DAT_11306b1f8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = param_9;
  lStack_78 = lVar3;
  _objc_retain(param_11);
  _objc_msgSendSuper2(&lStack_80,puVar2);
  return;
}



/* Entry: 1042a73ac; end: 1042a74bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a73ac(byte *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  _swift_getObjectType();
  bVar1 = *param_1;
  if (bVar1 == 2) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = 0;
    FUN_104280db8();
    lVar5 = lVar4;
    _objc_allocWithZone();
    *(byte *)(lVar5 + _DAT_11306a608) = bVar1 & 1;
    puVar2 = (undefined8 *)(lVar5 + _DAT_11306a610);
    *puVar2 = uVar8;
    puVar2[1] = uVar7;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306b1d0) = plVar3;
  *(byte *)(unaff_x20 + _DAT_11306b1d8) = param_1[0x18];
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306b1e0);
  puVar2[1] = *(undefined8 *)(param_1 + 0x28);
  *puVar2 = uVar7;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306b1e8);
  puVar2[1] = uVar6;
  *puVar2 = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306b1f0);
  puVar2[1] = *(undefined8 *)(param_1 + 0x48);
  *puVar2 = uVar7;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306b1f8);
  puVar2[1] = uVar6;
  *puVar2 = uVar8;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a74bc; end: 1042a74db; -[SCAdStickerInfoTrackInfo hash] */

void FUN_1042a74bc(void)

{
  FUN_1042a6dac();
  return;
}



/* Entry: 1042a74dc; end: 1042a755b; -[SCAdStickerInfoTrackInfo isEqual:] */

uint FUN_1042a74dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a6fa0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a755c; end: 1042a755f; -[SCAdStickerInfoTrackInfo copyWithZone:] */

void FUN_1042a755c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a7560; end: 1042a7747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a7560(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f2680);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f26a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b1e0);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11306b1e0))[1];
  uVar1 = 0x5f52454b43495453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f52454b43495453,0xec000000455a4953);
  func_0x00010bf92e00(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b1e8);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11306b1e8))[1];
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f26c0);
  func_0x00010bf92e00(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b1f0);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11306b1f0))[1];
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f26e0);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b1f8);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11306b1f8))[1];
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f2700);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042a7748; end: 1042a7797; -[SCAdStickerInfoTrackInfo encodeWithCoder:] */

void FUN_1042a7748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042a7560(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a7798; end: 1042a77d7;  */

undefined8 FUN_1042a7798(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042a795c(param_1);
  _objc_release(param_1);
  return uVar1;
}


