/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047b54f4; end: 1047b552f; -[SCAdInsertionConfig initWithCoder:] */

undefined8 FUN_1047b54f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047b5848();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047b5530; end: 1047b5573; -[SCAdInsertionConfig description] */

void FUN_1047b5530(undefined8 param_1)

{
  undefined1 auStack_e0 [192];
  
  _objc_retain();
  FUN_1047b5628(auStack_e0);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b5574; end: 1047b55ef; -[SCAdInsertionConfig init] */

void FUN_1047b5574(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdInsertionConfigWrapper.swift",
             0x2a,2,0xfa,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b55bc);
  (*pcVar1)();
}



/* Entry: 1047b55f0; end: 1047b5627; -[SCAdInsertionConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b55f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f038));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f060));
  return;
}



/* Entry: 1047b5628; end: 1047b5847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b5628(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar8 = *(undefined8 *)(param_2 + _DAT_11308efc8);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11308efd0);
  uVar23 = *(undefined8 *)(param_2 + _DAT_11308efd8);
  uVar17 = *(undefined8 *)(param_2 + _DAT_11308efe0);
  uVar18 = *(undefined8 *)(param_2 + _DAT_11308efe8);
  uVar24 = *(undefined8 *)(param_2 + _DAT_11308eff0);
  uVar19 = *(undefined8 *)(param_2 + _DAT_11308eff8);
  uVar20 = *(undefined8 *)(param_2 + _DAT_11308f000);
  uVar25 = *(undefined8 *)(param_2 + _DAT_11308f008);
  uVar26 = *(undefined8 *)(param_2 + _DAT_11308f010);
  uVar21 = *(undefined8 *)(param_2 + _DAT_11308f018);
  uVar2 = *(undefined1 *)(param_2 + _DAT_11308f020);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11308f028);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11308f030);
  lVar6 = *(long *)(param_2 + _DAT_11308f038);
  bVar1 = lVar6 == 0;
  if (!bVar1) {
    func_0x00010c067fc0();
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_11308f040);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11308f048);
  uVar22 = *(undefined8 *)(param_2 + _DAT_11308f050);
  uVar5 = *(undefined1 *)(param_2 + _DAT_11308f058);
  lVar15 = *(long *)(param_2 + _DAT_11308f060);
  if (lVar15 == 0) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar16 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar15 + _DAT_11308eec8);
    uVar12 = *(undefined8 *)(lVar15 + _DAT_11308eed0);
    uVar13 = *(undefined8 *)(lVar15 + _DAT_11308eed8);
    uVar14 = *(undefined8 *)(lVar15 + _DAT_11308eee0);
    uVar16 = *(undefined8 *)(lVar15 + _DAT_11308eee8);
  }
  *param_1 = uVar8;
  param_1[1] = uVar7;
  param_1[2] = uVar23;
  param_1[3] = uVar17;
  param_1[4] = uVar18;
  param_1[5] = uVar24;
  param_1[6] = uVar19;
  param_1[7] = uVar20;
  param_1[8] = uVar25;
  param_1[9] = uVar26;
  param_1[10] = uVar21;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  *(undefined1 *)((long)param_1 + 0x5a) = uVar4;
  param_1[0xc] = lVar6;
  *(bool *)(param_1 + 0xd) = bVar1;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar10;
  param_1[0x10] = uVar22;
  *(undefined1 *)(param_1 + 0x11) = uVar5;
  param_1[0x12] = uVar11;
  param_1[0x13] = uVar12;
  param_1[0x14] = uVar13;
  param_1[0x15] = uVar14;
  param_1[0x16] = uVar16;
  *(bool *)(param_1 + 0x17) = lVar15 == 0;
  return;
}



/* Entry: 1047b5848; end: 1047b5e43;  */

undefined8 FUN_1047b5848(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d470);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar6 = 0xd000000000000014;
  uVar2 = uVar6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d490);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d4b0);
  func_0x00010bf66da0(param_2);
  uVar7 = param_1;
  _objc_release(uVar2);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d4d0);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20d4f0);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20d510);
  func_0x00010bf66da0(param_2);
  uVar8 = uVar7;
  _objc_release(uVar2);
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d530);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = uVar6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d550);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d570);
  func_0x00010bf66da0(param_2);
  uVar9 = uVar8;
  _objc_release(uVar2);
  uVar2 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20d590);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
  uVar2 = 0x50414e535f58414d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50414e535f58414d,0xed00004d554e5f53);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d5c0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d5e0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d600);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d620);
  lVar3 = param_2;
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  uVar2 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x00010006e7f4(&uStack_c0);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_e8;
    _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar6,6);
    uVar6 = uStack_e8;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar5 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f20d640);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  uVar5 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f20d670);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  uVar5 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f20d6a0);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar5);
  uVar5 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f20d6d0);
  func_0x00010bf66ce0();
  _objc_release(uVar5);
  uVar5 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20d700);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_2 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,param_2);
    _swift_unknownObjectRelease(param_2);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x00010006e7f4(&uStack_c0);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_1047b2fe4(0);
    puVar4 = &uStack_e8;
    _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar5,6);
    uVar5 = uStack_e8;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  func_0x00010c02c100(param_1,uVar7,uVar8,uVar9,uVar2,unaff_x20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 1047b5e44; end: 1047b5e63;  */

void FUN_1047b5e44(void)

{
  _objc_opt_self(&PTR_PTR_1129d3978);
  return;
}



/* Entry: 1047b5e64; end: 1047b5eab;  */

void FUN_1047b5e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_1047b604c(param_1,param_2,param_3);
  return;
}



/* Entry: 1047b5eac; end: 1047b5ef7; -[SCAdPod identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b5eac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f090);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308f090))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b5ef8; end: 1047b5f47; -[SCAdPod adResponses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b5ef8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f098);
  FUN_1047c0984(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047b5f48; end: 1047b5fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b5f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f090);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f098) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b5fb4; end: 1047b604b; -[SCAdPod initWithIdentifier:adResponses:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b5fb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1047c0984(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_11308f090);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308f098) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b604c; end: 1047b622f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b604c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_78 [16];
  undefined *puStack_68;
  
  _swift_getObjectType();
  lVar3 = 0;
  func_0x000100b91d00();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f090);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_90 = param_2;
    _swift_bridgeObjectRetain(param_2);
    func_0x000102d09b58(0,lVar3,0);
    lVar9 = param_3 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff));
    lVar5 = *(long *)(lVar5 + 0x48);
    lStack_98 = param_3;
    do {
      puVar6 = puStack_68;
      func_0x000101681be8(lVar9,lVar8);
      func_0x000101681be8(lVar8,puVar7);
      FUN_1047c0984(0);
      _objc_allocWithZone();
      puVar4 = puVar7;
      FUN_1047b952c();
      func_0x00010168561c(lVar8);
      uVar2 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
        func_0x000102d09b58(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
      }
      puVar6 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(undefined1 **)(puStack_68 + uVar2 * 8 + 0x20) = puVar4;
      lVar9 = lVar9 + lVar5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(lStack_98);
    _swift_bridgeObjectRelease(uStack_90);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f098) = puVar6;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b6230; end: 1047b6233; -[SCAdPod copyWithZone:] */

void FUN_1047b6230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b6234; end: 1047b6313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b6234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f090);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308f090))[1]);
  uVar1 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f098);
  uVar2 = 0;
  FUN_1047c0984(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0x4f505345525f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f505345525f4441,0xec0000005345534e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047b6314; end: 1047b6363; -[SCAdPod encodeWithCoder:] */

void FUN_1047b6314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b6234(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b6364; end: 1047b6393;  */

void FUN_1047b6364(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b6394(param_1);
  return;
}



/* Entry: 1047b6394; end: 1047b65eb;  */

undefined8 FUN_1047b6394(long param_1)

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
  uVar2 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
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
      goto LAB_1047b659c;
    }
    uVar5 = 0x4f505345525f4441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f505345525f4441,0xec0000005345534e);
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
      uVar5 = 0x11308f0a0;
      func_0x0001000285a8(0x11308f0a0,&UNK_10dd354e8);
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar5,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        uVar7 = 0;
        FUN_1047c0984(0);
        uVar5 = uStack_a0;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_a0,uVar7);
        _swift_bridgeObjectRelease(uStack_a0);
        func_0x00010c01b480();
        _objc_release(uVar2);
        _objc_release(uVar5);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_1047b659c;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_1047b659c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047b65ec; end: 1047b6613; -[SCAdPod initWithCoder:] */

void FUN_1047b65ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047b6394();
  return;
}



/* Entry: 1047b6614; end: 1047b666b; -[SCAdPod description] */

void FUN_1047b6614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1047b6724();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b666c; end: 1047b66e7; -[SCAdPod init] */

void FUN_1047b666c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdPodWrapper.swift",0x1e,2,0x3e,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b66b4);
  (*pcVar1)();
}



/* Entry: 1047b66e8; end: 1047b6723; -[SCAdPod .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b66e8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f090 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f098));
  return;
}



/* Entry: 1047b6724; end: 1047b68db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b6724(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  func_0x000100b91d00();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = *(undefined8 *)(param_1 + _DAT_11308f090);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11308f090))[1];
  uVar6 = *(ulong *)(param_1 + _DAT_11308f098);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 == 0) {
    _swift_bridgeObjectRetain(uVar2);
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(uVar2);
    func_0x0001046c7150(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1047b68dc);
      (*pcVar3)();
    }
    uVar8 = 0;
    puVar5 = puStack_68;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        _objc_retain(*(undefined8 *)(uVar6 + uVar8 * 8 + 0x20));
      }
      else {
        func_0x000102d09448(uVar8,uVar6);
      }
      FUN_1047b6fb0(lVar4);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x0001046c7150(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_68;
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      func_0x0001016855d8(lVar4,puStack_68 +
                                *(long *)(lVar9 + 0x48) * uVar1 +
                                ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)));
    } while (uVar7 != uVar8);
  }
  return uStack_70;
}



/* Entry: 1047b68dc; end: 1047b68fb;  */

void FUN_1047b68dc(void)

{
  _objc_opt_self(&PTR_PTR_1129d3ae0);
  return;
}



/* Entry: 1047b68fc; end: 1047b6943; -[SCAdReportWhyISeeThisAd adTargetingRules] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b68fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f0d0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047b6944; end: 1047b699f; -[SCAdReportWhyISeeThisAd adsPayeeName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b6944(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f0d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f0d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b69a0; end: 1047b69a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b69a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f0d0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f0d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b69a4; end: 1047b6aa7; -[SCAdReportWhyISeeThisAd initWithAdTargetingRules:adsPayeeName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b69a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11308f0d0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11308f0d8);
  *plVar1 = param_4;
  plVar1[1] = (long)puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b6aa8; end: 1047b6aab; -[SCAdReportWhyISeeThisAd copyWithZone:] */

void FUN_1047b6aa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b6aac; end: 1047b6b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b6aac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f0d0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20d770);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f0d8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f0d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x455941505f534441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455941505f534441,0xee00454d414e5f45);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047b6b98; end: 1047b6be7; -[SCAdReportWhyISeeThisAd encodeWithCoder:] */

void FUN_1047b6b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b6aac(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b6be8; end: 1047b6c17;  */

void FUN_1047b6be8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b6c18(param_1);
  return;
}



/* Entry: 1047b6c18; end: 1047b6e5f;  */

undefined8 FUN_1047b6c18(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = 0;
  iVar2 = (int)&uStack_90;
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20d770);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
LAB_1047b6d64:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  puVar1 = PTR___sypN_11034f1a8;
  _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
  uVar3 = uStack_90;
  if ((uVar5 & 1) == 0) {
    _objc_release(param_1);
    goto LAB_1047b6d64;
  }
  uVar6 = 0x455941505f534441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455941505f534441,0xee00454d414e5f45);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_88;
    uVar6 = uStack_90;
    if (iVar2 != 0) goto LAB_1047b6dd8;
  }
  lVar4 = 0;
  uVar6 = 0;
LAB_1047b6dd8:
  uVar7 = uVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(uVar3);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar4);
    _swift_bridgeObjectRelease(lVar4);
  }
  func_0x00010bff1fc0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1047b6e60; end: 1047b6e87; -[SCAdReportWhyISeeThisAd initWithCoder:] */

void FUN_1047b6e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047b6c18();
  return;
}



/* Entry: 1047b6e88; end: 1047b6ea3; -[SCAdReportWhyISeeThisAd description] */

void FUN_1047b6e88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b6ea4; end: 1047b6f1f; -[SCAdReportWhyISeeThisAd init] */

void FUN_1047b6ea4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdReportWhyISeeThisAdWrapper.swift",0x2e,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b6eec);
  (*pcVar1)();
}



/* Entry: 1047b6f20; end: 1047b6f5b; -[SCAdReportWhyISeeThisAd .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b6f20(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f0d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f0d8 + 8))
  ;
  return;
}



/* Entry: 1047b6f5c; end: 1047b6f7b;  */

void FUN_1047b6f5c(void)

{
  _objc_opt_self(&PTR_PTR_1129d3bb8);
  return;
}



/* Entry: 1047b6f7c; end: 1047b6f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b6f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f0d0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f0d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b6f80; end: 1047b6faf;  */

void FUN_1047b6f80(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b952c(param_1);
  return;
}



/* Entry: 1047b6fb0; end: 1047b7ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b6fb0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  long lStack_9c0;
  undefined8 *puStack_9b8;
  code *pcStack_9b0;
  long lStack_9a8;
  long lStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  long lStack_968;
  undefined8 *puStack_960;
  long lStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 uStack_8b0;
  undefined7 uStack_8af;
  undefined1 uStack_8a8;
  undefined7 uStack_8a7;
  undefined1 uStack_8a0;
  undefined8 uStack_89f;
  undefined *puStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  byte bStack_538;
  char cStack_537;
  char cStack_536;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 auStack_290 [44];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar7 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  lStack_998 = (long)&puStack_9d0 - extraout_x8;
  FUN_1046d90b0();
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar18 = ((long)&puStack_9d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000100b91d00();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x5c));
  func_0x0001015410ac(&puStack_330);
  puVar1[0xd] = uStack_2c8;
  puVar1[0xc] = uStack_2d0;
  puVar1[0xf] = uStack_2b8;
  puVar1[0xe] = uStack_2c0;
  puVar1[0x11] = uStack_2a8;
  puVar1[0x10] = uStack_2b0;
  puVar1[0x13] = uStack_298;
  puVar1[0x12] = uStack_2a0;
  puVar1[5] = uStack_308;
  puVar1[4] = uStack_310;
  puVar1[7] = uStack_2f8;
  puVar1[6] = uStack_300;
  puVar1[9] = uStack_2e8;
  puVar1[8] = uStack_2f0;
  puVar1[0xb] = uStack_2d8;
  puVar1[10] = uStack_2e0;
  puVar1[1] = uStack_328;
  *puVar1 = puStack_330;
  puVar1[3] = uStack_318;
  puVar1[2] = uStack_320;
  puStack_9c8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 100));
  puStack_9c8[1] = 1;
  *puStack_9c8 = 0;
  puStack_9c8[3] = 0;
  puStack_9c8[4] = 0;
  puStack_9c8[2] = 0;
  iVar4 = *(int *)(lVar7 + 0x68);
  puStack_9d0 = puVar1;
  func_0x000102d123c4(auStack_290);
  lStack_9c0 = (long)iVar4;
  _memcpy((long)param_1 + (long)iVar4,auStack_290,0x160);
  puStack_9b8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x80));
  puStack_9b8[1] = 0xf000000000000000;
  *puStack_9b8 = 0;
  iVar4 = *(int *)(lVar7 + 0x84);
  lVar8 = 0;
  func_0x000100b91fbc();
  pcStack_9b0 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  lStack_9a8 = lVar8;
  lStack_9a0 = (long)iVar4;
  (*pcStack_9b0)((long)param_1 + (long)iVar4,1,1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x94));
  func_0x0001015415ac(&uStack_130);
  puVar1[0xd] = uStack_c8;
  puVar1[0xc] = uStack_d0;
  puVar1[0xf] = uStack_b8;
  puVar1[0xe] = uStack_c0;
  puVar1[9] = uStack_e8;
  puVar1[8] = uStack_f0;
  puVar1[0xb] = uStack_d8;
  puVar1[10] = uStack_e0;
  *(undefined8 *)((long)puVar1 + 0xb1) = uStack_7f;
  *(ulong *)((long)puVar1 + 0xa9) = CONCAT17(uStack_80,uStack_87);
  puVar1[0x13] = uStack_98;
  puVar1[0x12] = uStack_a0;
  puVar1[0x15] = CONCAT71(uStack_87,uStack_88);
  puVar1[0x14] = uStack_90;
  puVar1[0x11] = uStack_a8;
  puVar1[0x10] = uStack_b0;
  uVar22 = *(undefined8 *)(param_2 + _DAT_11308f108);
  puVar1[1] = uStack_128;
  *puVar1 = uStack_130;
  puVar1[3] = uStack_118;
  puVar1[2] = uStack_120;
  uVar20 = *(undefined8 *)(param_2 + _DAT_11308f110);
  uVar23 = *(undefined8 *)(param_2 + _DAT_11308f118);
  puVar1[5] = uStack_108;
  puVar1[4] = uStack_110;
  puVar1[7] = uStack_f8;
  puVar1[6] = uStack_100;
  uVar21 = *(undefined8 *)(param_2 + _DAT_11308f120);
  *param_1 = uVar22;
  param_1[1] = uVar20;
  uVar22 = *(undefined8 *)(param_2 + _DAT_11308f128);
  param_1[2] = uVar23;
  param_1[3] = uVar21;
  uVar20 = *(undefined8 *)(param_2 + _DAT_11308f130);
  uVar21 = ((undefined8 *)(param_2 + _DAT_11308f130))[1];
  param_1[4] = uVar22;
  param_1[5] = uVar20;
  param_1[6] = uVar21;
  puVar9 = (undefined8 *)(param_2 + _DAT_11308f138);
  uVar23 = puVar9[1];
  uVar20 = *puVar9;
  param_1[8] = puVar9[1];
  param_1[7] = uVar20;
  puVar9 = (undefined8 *)(param_2 + _DAT_11308f140);
  uStack_980 = puVar9[1];
  uVar20 = *puVar9;
  param_1[10] = puVar9[1];
  param_1[9] = uVar20;
  puVar9 = (undefined8 *)(param_2 + _DAT_11308f148);
  uStack_978 = puVar9[1];
  uVar20 = *puVar9;
  param_1[0xc] = puVar9[1];
  param_1[0xb] = uVar20;
  puVar9 = (undefined8 *)(param_2 + _DAT_11308f150);
  uStack_988 = puVar9[1];
  uVar20 = *puVar9;
  param_1[0xe] = puVar9[1];
  param_1[0xd] = uVar20;
  puVar9 = (undefined8 *)(param_2 + _DAT_11308f158);
  uStack_970 = puVar9[1];
  uVar20 = *puVar9;
  param_1[0x10] = puVar9[1];
  param_1[0xf] = uVar20;
  puStack_990 = puVar1;
  func_0x0001047c0a80(param_2 + _DAT_1138151e8,(long)param_1 + (long)*(int *)(lVar7 + 0x3c),
                      0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(param_2 + _DAT_1138151f0,(long)param_1 + (long)*(int *)(lVar7 + 0x40),
                      0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(param_2 + _DAT_1138151f8,(long)param_1 + (long)*(int *)(lVar7 + 0x44),
                      0x112d3bc20,&UNK_10d904ef0);
  uVar22 = uStack_980;
  uVar20 = uStack_988;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48)) =
       *(undefined8 *)(param_2 + _DAT_113815200);
  uVar19 = *(ulong *)(param_2 + _DAT_113815208);
  lStack_968 = param_2;
  puStack_960 = param_1;
  lStack_958 = lVar7;
  if (uVar19 == 0) {
    _swift_bridgeObjectRetain(uStack_978);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uStack_980);
    _swift_bridgeObjectRetain(uStack_970);
    _swift_bridgeObjectRetain(uStack_988);
    puVar11 = (undefined *)0x0;
  }
  else {
    if (uVar19 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = uVar19;
      if (-1 < (long)uVar19) {
        uVar17 = uVar19 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar17 == 0) {
      _swift_bridgeObjectRetain(uStack_978);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uStack_970);
      _swift_bridgeObjectRetain(uVar20);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_7f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uStack_970);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uStack_978);
      func_0x0001046c70b0(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1047b7cd0);
        (*pcVar6)();
      }
      uVar16 = 0;
      puVar11 = puStack_7f0;
      do {
        if ((uVar19 & 0xc000000000000001) == 0) {
          _objc_retain(*(undefined8 *)(uVar19 + uVar16 * 8 + 0x20));
        }
        else {
          func_0x000100e471e4(uVar16,uVar19);
        }
        FUN_1047c15e8(lVar18);
        uVar3 = *(ulong *)(puVar11 + 0x10);
        puStack_7f0 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar3) {
          func_0x0001046c70b0(1 < *(ulong *)(puVar11 + 0x18),uVar3 + 1,1);
        }
        puVar11 = puStack_7f0;
        uVar16 = uVar16 + 1;
        *(ulong *)(puStack_7f0 + 0x10) = uVar3 + 1;
        func_0x0001047c09bc(lVar18,puStack_7f0 +
                                   *(long *)(lVar13 + 0x48) * uVar3 +
                                   ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),
                            FUN_1046d90b0);
        lVar7 = lStack_958;
      } while (uVar17 != uVar16);
    }
  }
  puVar1 = puStack_960;
  lVar8 = lStack_968;
  *(undefined **)((long)puStack_960 + (long)*(int *)(lVar7 + 0x4c)) = puVar11;
  uVar20 = *(undefined8 *)(lStack_968 + _DAT_113815210);
  *(undefined8 *)((long)puStack_960 + (long)*(int *)(lVar7 + 0x50)) = uVar20;
  uVar21 = *(undefined8 *)(lStack_968 + _DAT_113815218);
  *(undefined8 *)((long)puStack_960 + (long)*(int *)(lVar7 + 0x54)) = uVar21;
  uVar22 = *(undefined8 *)(lStack_968 + _DAT_113815220);
  *(undefined8 *)((long)puStack_960 + (long)*(int *)(lVar7 + 0x58)) = uVar22;
  if (*(long *)(lStack_968 + _DAT_113815228) == 0) {
    uStack_588 = uStack_2c8;
    uStack_590 = uStack_2d0;
    uStack_578 = uStack_2b8;
    uStack_580 = uStack_2c0;
    uStack_568 = uStack_2a8;
    uStack_570 = uStack_2b0;
    uStack_558 = uStack_298;
    uStack_560 = uStack_2a0;
    uStack_5c8 = uStack_308;
    uStack_5d0 = uStack_310;
    uStack_5b8 = uStack_2f8;
    uStack_5c0 = uStack_300;
    uStack_5a8 = uStack_2e8;
    uStack_5b0 = uStack_2f0;
    uStack_598 = uStack_2d8;
    uStack_5a0 = uStack_2e0;
    puStack_5f0 = puStack_330;
    uStack_7e8 = uStack_328;
    uStack_7e0 = uStack_320;
    uStack_7d8 = uStack_318;
  }
  else {
    FUN_10482a074(&puStack_7f0);
    func_0x000101541574(&puStack_7f0);
    uStack_588 = uStack_788;
    uStack_590 = uStack_790;
    uStack_578 = uStack_778;
    uStack_580 = uStack_780;
    uStack_568 = uStack_768;
    uStack_570 = uStack_770;
    uStack_558 = uStack_758;
    uStack_560 = uStack_760;
    uStack_5c8 = uStack_7c8;
    uStack_5d0 = uStack_7d0;
    uStack_5b8 = uStack_7b8;
    uStack_5c0 = uStack_7c0;
    uStack_5a8 = uStack_7a8;
    uStack_5b0 = uStack_7b0;
    uStack_598 = uStack_798;
    uStack_5a0 = uStack_7a0;
    puStack_5f0 = puStack_7f0;
  }
  puVar9 = puStack_9d0;
  uStack_628 = puStack_9d0[0xd];
  uStack_630 = puStack_9d0[0xc];
  uStack_618 = puStack_9d0[0xf];
  uStack_620 = puStack_9d0[0xe];
  uStack_608 = puStack_9d0[0x11];
  uStack_610 = puStack_9d0[0x10];
  uStack_5f8 = puStack_9d0[0x13];
  uStack_600 = puStack_9d0[0x12];
  uStack_668 = puStack_9d0[5];
  uStack_670 = puStack_9d0[4];
  uStack_658 = puStack_9d0[7];
  uStack_660 = puStack_9d0[6];
  uStack_648 = puStack_9d0[9];
  uStack_650 = puStack_9d0[8];
  uStack_638 = puStack_9d0[0xb];
  uStack_640 = puStack_9d0[10];
  uStack_688 = puStack_9d0[1];
  uStack_690 = *puStack_9d0;
  uStack_678 = puStack_9d0[3];
  uStack_680 = puStack_9d0[2];
  uStack_5e8 = uStack_7e8;
  uStack_5e0 = uStack_7e0;
  uStack_5d8 = uStack_7d8;
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar21);
  func_0x0001047c0ac8(&uStack_690,0x11308da18,&UNK_10dd2f158);
  puVar9[9] = uStack_5a8;
  puVar9[8] = uStack_5b0;
  puVar9[0xb] = uStack_598;
  puVar9[10] = uStack_5a0;
  puVar9[5] = uStack_5c8;
  puVar9[4] = uStack_5d0;
  puVar9[7] = uStack_5b8;
  puVar9[6] = uStack_5c0;
  puVar9[0x11] = uStack_568;
  puVar9[0x10] = uStack_570;
  puVar9[0x13] = uStack_558;
  puVar9[0x12] = uStack_560;
  puVar9[0xd] = uStack_588;
  puVar9[0xc] = uStack_590;
  puVar9[0xf] = uStack_578;
  puVar9[0xe] = uStack_580;
  puVar9[1] = uStack_5e8;
  *puVar9 = puStack_5f0;
  puVar9[3] = uStack_5d8;
  puVar9[2] = uStack_5e0;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x60)) =
       *(undefined1 *)(lVar8 + _DAT_113815230);
  if (*(long *)(lVar8 + _DAT_113815238) == 0) {
    uVar20 = 0;
    uVar21 = 0;
    uVar19 = 0;
    uVar23 = 0;
    uVar22 = 1;
  }
  else {
    func_0x00010481c2dc(&uStack_550);
    uVar17 = 0x100;
    if (cStack_537 == '\0') {
      uVar17 = 0;
    }
    uVar19 = 0x10000;
    if (cStack_536 == '\0') {
      uVar19 = 0;
    }
    uVar19 = uVar17 | bStack_538 | uVar19;
    uVar20 = uStack_550;
    uVar21 = uStack_540;
    uVar22 = uStack_548;
    uVar23 = uStack_530;
  }
  puVar9 = puStack_9c8;
  func_0x000103de4018(*puStack_9c8,puStack_9c8[1],puStack_9c8[2],puStack_9c8[3],puStack_9c8[4]);
  *puVar9 = uVar20;
  puVar9[1] = uVar22;
  puVar9[2] = uVar21;
  puVar9[3] = uVar19;
  puVar9[4] = uVar23;
  if (*(long *)(lVar8 + _DAT_113815240) == 0) {
    puVar9 = auStack_290;
  }
  else {
    _objc_retain();
    FUN_104820bb8(&uStack_950);
    func_0x000102d123f8(&uStack_950);
    puVar9 = &uStack_950;
  }
  _memcpy(&puStack_7f0,puVar9,0x160);
  lVar13 = lStack_958;
  lVar7 = lStack_9c0;
  iVar4 = *(int *)(lStack_958 + 0x7c);
  func_0x0001047c0ac8((long)puVar1 + lStack_9c0,0x112db3a28,&UNK_10d95ddb0);
  _memcpy((long)puVar1 + lVar7,&puStack_7f0,0x160);
  uVar20 = ((undefined8 *)(lVar8 + _DAT_113815248))[1];
  puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x6c));
  uVar10 = *(undefined1 *)(lVar8 + _DAT_113815250);
  *puVar9 = *(undefined8 *)(lVar8 + _DAT_113815248);
  puVar9[1] = uVar20;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x70)) = uVar10;
  puVar9 = (undefined8 *)(lVar8 + _DAT_113815258);
  uVar12 = puVar9[1];
  uVar20 = *puVar9;
  puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x74));
  puVar5[1] = puVar9[1];
  *puVar5 = uVar20;
  puVar9 = (undefined8 *)(lVar8 + _DAT_113815260);
  uVar14 = puVar9[1];
  uVar20 = *puVar9;
  puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x78));
  puVar5[1] = puVar9[1];
  *puVar5 = uVar20;
  puVar9 = (undefined8 *)(lVar8 + _DAT_113815268);
  uVar15 = puVar9[1];
  uVar20 = *puVar9;
  puVar1 = (undefined8 *)((long)puVar1 + (long)iVar4);
  puVar1[1] = puVar9[1];
  *puVar1 = uVar20;
  uVar20 = *(undefined8 *)(lVar8 + _DAT_113815270);
  uVar22 = ((undefined8 *)(lVar8 + _DAT_113815270))[1];
  uVar21 = *puStack_9b8;
  uVar23 = puStack_9b8[1];
  *puStack_9b8 = uVar20;
  puStack_9b8[1] = uVar22;
  func_0x000100de78a0();
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar14);
  func_0x000100de78a0(uVar20,uVar22);
  lVar8 = lStack_968;
  func_0x0001000b44c0(uVar21,uVar23);
  bVar2 = *(long *)(lVar8 + _DAT_113815278) == 0;
  lVar7 = lStack_998;
  if (!bVar2) {
    _objc_retain();
    lVar7 = lStack_998;
    FUN_104846048(lStack_998);
  }
  (*pcStack_9b0)(lVar7,bVar2,1,lStack_9a8);
  puVar9 = puStack_960;
  FUN_1047ba488(lVar7,(long)puStack_960 + lStack_9a0);
  lVar7 = lStack_958;
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lStack_958 + 0x88));
  if (*(long *)(lVar8 + _DAT_113815280) == 0) {
    func_0x0001015410d0(&uStack_950);
    puVar1[0x11] = uStack_8c8;
    puVar1[0x10] = uStack_8d0;
    puVar1[0x13] = uStack_8b8;
    puVar1[0x12] = uStack_8c0;
    *(undefined1 *)(puVar1 + 0x14) = uStack_8b0;
    puVar1[9] = uStack_908;
    puVar1[8] = uStack_910;
    puVar1[0xb] = uStack_8f8;
    puVar1[10] = uStack_900;
    puVar1[0xd] = uStack_8e8;
    puVar1[0xc] = uStack_8f0;
    puVar1[0xf] = uStack_8d8;
    puVar1[0xe] = uStack_8e0;
    puVar1[1] = uStack_948;
    *puVar1 = uStack_950;
    puVar1[3] = uStack_938;
    puVar1[2] = uStack_940;
    puVar1[5] = uStack_928;
    puVar1[4] = uStack_930;
    puVar1[7] = uStack_918;
    puVar1[6] = uStack_920;
  }
  else {
    FUN_1047b1340(&uStack_528);
    puVar1[0x11] = uStack_4a0;
    puVar1[0x10] = uStack_4a8;
    puVar1[0x13] = uStack_490;
    puVar1[0x12] = uStack_498;
    *(undefined1 *)(puVar1 + 0x14) = uStack_488;
    puVar1[9] = uStack_4e0;
    puVar1[8] = uStack_4e8;
    puVar1[0xb] = uStack_4d0;
    puVar1[10] = uStack_4d8;
    puVar1[0xd] = uStack_4c0;
    puVar1[0xc] = uStack_4c8;
    puVar1[0xf] = uStack_4b0;
    puVar1[0xe] = uStack_4b8;
    puVar1[1] = uStack_520;
    *puVar1 = uStack_528;
    puVar1[3] = uStack_510;
    puVar1[2] = uStack_518;
    puVar1[5] = uStack_500;
    puVar1[4] = uStack_508;
    puVar1[7] = uStack_4f0;
    puVar1[6] = uStack_4f8;
    func_0x000101541460(puVar1);
  }
  *(undefined4 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x8c)) =
       *(undefined4 *)(lVar8 + _DAT_113815288);
  *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x90)) =
       *(undefined1 *)(lVar8 + _DAT_113815290);
  lVar13 = *(long *)(lVar8 + _DAT_113815298);
  if (lVar13 == 0) {
    puStack_990[0x11] = uStack_a8;
    puStack_990[0x10] = uStack_b0;
    puStack_990[0x13] = uStack_98;
    puStack_990[0x12] = uStack_a0;
    puStack_990[0x15] = CONCAT71(uStack_87,uStack_88);
    puStack_990[0x14] = uStack_90;
    *(undefined8 *)((long)puStack_990 + 0xb1) = uStack_7f;
    *(ulong *)((long)puStack_990 + 0xa9) = CONCAT17(uStack_80,uStack_87);
    puStack_990[9] = uStack_e8;
    puStack_990[8] = uStack_f0;
    puStack_990[0xb] = uStack_d8;
    puStack_990[10] = uStack_e0;
    puStack_990[0xd] = uStack_c8;
    puStack_990[0xc] = uStack_d0;
    puStack_990[0xf] = uStack_b8;
    puStack_990[0xe] = uStack_c0;
    puStack_990[1] = uStack_128;
    *puStack_990 = uStack_130;
    puStack_990[3] = uStack_118;
    puStack_990[2] = uStack_120;
    puStack_990[5] = uStack_108;
    puStack_990[4] = uStack_110;
    puStack_990[7] = uStack_f8;
    puStack_990[6] = uStack_100;
  }
  else {
    _objc_retain();
    FUN_1047b5628(&uStack_950);
    _objc_release(lVar13);
    puStack_990[0x11] = uStack_8c8;
    puStack_990[0x10] = uStack_8d0;
    puStack_990[0x13] = uStack_8b8;
    puStack_990[0x12] = uStack_8c0;
    puStack_990[0x15] = CONCAT71(uStack_8a7,uStack_8a8);
    puStack_990[0x14] = CONCAT71(uStack_8af,uStack_8b0);
    *(undefined8 *)((long)puStack_990 + 0xb1) = uStack_89f;
    *(ulong *)((long)puStack_990 + 0xa9) = CONCAT17(uStack_8a0,uStack_8a7);
    puStack_990[9] = uStack_908;
    puStack_990[8] = uStack_910;
    puStack_990[0xb] = uStack_8f8;
    puStack_990[10] = uStack_900;
    puStack_990[0xd] = uStack_8e8;
    puStack_990[0xc] = uStack_8f0;
    puStack_990[0xf] = uStack_8d8;
    puStack_990[0xe] = uStack_8e0;
    puStack_990[1] = uStack_948;
    *puStack_990 = uStack_950;
    puStack_990[3] = uStack_938;
    puStack_990[2] = uStack_940;
    puStack_990[5] = uStack_928;
    puStack_990[4] = uStack_930;
    puStack_990[7] = uStack_918;
    puStack_990[6] = uStack_920;
    func_0x000103de92cc();
  }
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x98)) =
       *(undefined8 *)(lVar8 + _DAT_1138152a0);
  *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x9c)) =
       *(undefined1 *)(lVar8 + _DAT_1138152a8);
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xa0)) =
       *(undefined8 *)(lVar8 + _DAT_1138152b0);
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xa4)) =
       *(undefined8 *)(lVar8 + _DAT_1138152b8);
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xa8)) =
       *(undefined8 *)(lVar8 + _DAT_1138152c0);
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xac));
  lVar13 = *(long *)(lVar8 + _DAT_1138152c8);
  if (lVar13 == 0) {
    uVar20 = 0;
    uVar21 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar22 = ((undefined8 *)(lVar13 + _DAT_113090b60))[1];
    *puVar1 = *(undefined8 *)(lVar13 + _DAT_113090b60);
    puVar1[1] = uVar22;
    uVar20 = *(undefined8 *)(lVar13 + _DAT_113090b68);
    uVar21 = ((undefined8 *)(lVar13 + _DAT_113090b68))[1];
    _swift_bridgeObjectRetain(uVar21);
    lVar7 = lStack_958;
    _swift_bridgeObjectRetain(uVar22);
  }
  puVar1[2] = uVar20;
  puVar1[3] = uVar21;
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xb0)) =
       *(undefined8 *)(lVar8 + _DAT_1138152d0);
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xb4)) =
       *(undefined8 *)(lVar8 + _DAT_1138152d8);
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xb8));
  if (*(long *)(lVar8 + _DAT_1138152e0) == 0) {
    func_0x0001015410d0(&uStack_3d8);
    puVar1[0x11] = uStack_350;
    puVar1[0x10] = uStack_358;
    puVar1[0x13] = uStack_340;
    puVar1[0x12] = uStack_348;
    *(undefined1 *)(puVar1 + 0x14) = uStack_338;
    puVar1[9] = uStack_390;
    puVar1[8] = uStack_398;
    puVar1[0xb] = uStack_380;
    puVar1[10] = uStack_388;
    puVar1[0xd] = uStack_370;
    puVar1[0xc] = uStack_378;
    puVar1[0xf] = uStack_360;
    puVar1[0xe] = uStack_368;
    puVar1[1] = uStack_3d0;
    *puVar1 = uStack_3d8;
    puVar1[3] = uStack_3c0;
    puVar1[2] = uStack_3c8;
    puVar1[5] = uStack_3b0;
    puVar1[4] = uStack_3b8;
    puVar1[7] = uStack_3a0;
    puVar1[6] = uStack_3a8;
  }
  else {
    FUN_1047b1340(&uStack_480);
    puVar1[0x11] = uStack_3f8;
    puVar1[0x10] = uStack_400;
    puVar1[0x13] = uStack_3e8;
    puVar1[0x12] = uStack_3f0;
    *(undefined1 *)(puVar1 + 0x14) = uStack_3e0;
    puVar1[9] = uStack_438;
    puVar1[8] = uStack_440;
    puVar1[0xb] = uStack_428;
    puVar1[10] = uStack_430;
    puVar1[0xd] = uStack_418;
    puVar1[0xc] = uStack_420;
    puVar1[0xf] = uStack_408;
    puVar1[0xe] = uStack_410;
    puVar1[1] = uStack_478;
    *puVar1 = uStack_480;
    puVar1[3] = uStack_468;
    puVar1[2] = uStack_470;
    puVar1[5] = uStack_458;
    puVar1[4] = uStack_460;
    puVar1[7] = uStack_448;
    puVar1[6] = uStack_450;
    func_0x000101541460(puVar1);
  }
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xbc));
  if (*(long *)(lVar8 + _DAT_1138152e8) == 0) {
    func_0x0001015410d0(&uStack_3d8);
    puVar1[0x11] = uStack_350;
    puVar1[0x10] = uStack_358;
    puVar1[0x13] = uStack_340;
    puVar1[0x12] = uStack_348;
    *(undefined1 *)(puVar1 + 0x14) = uStack_338;
    puVar1[9] = uStack_390;
    puVar1[8] = uStack_398;
    puVar1[0xb] = uStack_380;
    puVar1[10] = uStack_388;
    puVar1[0xd] = uStack_370;
    puVar1[0xc] = uStack_378;
    puVar1[0xf] = uStack_360;
    puVar1[0xe] = uStack_368;
    puVar1[1] = uStack_3d0;
    *puVar1 = uStack_3d8;
    puVar1[3] = uStack_3c0;
    puVar1[2] = uStack_3c8;
    puVar1[5] = uStack_3b0;
    puVar1[4] = uStack_3b8;
    puVar1[7] = uStack_3a0;
    puVar1[6] = uStack_3a8;
  }
  else {
    FUN_1047b1340(&uStack_3d8);
    puVar1[0x11] = uStack_350;
    puVar1[0x10] = uStack_358;
    puVar1[0x13] = uStack_340;
    puVar1[0x12] = uStack_348;
    *(undefined1 *)(puVar1 + 0x14) = uStack_338;
    puVar1[9] = uStack_390;
    puVar1[8] = uStack_398;
    puVar1[0xb] = uStack_380;
    puVar1[10] = uStack_388;
    puVar1[0xd] = uStack_370;
    puVar1[0xc] = uStack_378;
    puVar1[0xf] = uStack_360;
    puVar1[0xe] = uStack_368;
    puVar1[1] = uStack_3d0;
    *puVar1 = uStack_3d8;
    puVar1[3] = uStack_3c0;
    puVar1[2] = uStack_3c8;
    puVar1[5] = uStack_3b0;
    puVar1[4] = uStack_3b8;
    puVar1[7] = uStack_3a0;
    puVar1[6] = uStack_3a8;
    func_0x000101541460(puVar1);
  }
  if (*(long *)(lVar8 + _DAT_1138152f0) == 0) {
    uVar10 = 2;
  }
  else {
    uVar10 = *(undefined1 *)(*(long *)(lVar8 + _DAT_1138152f0) + _DAT_11308ef18);
  }
  *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xc0)) = uVar10;
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xc4)) =
       *(undefined8 *)(lVar8 + _DAT_1138152f8);
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 200)) =
       *(undefined8 *)(lVar8 + _DAT_113815300);
  uVar10 = *(undefined1 *)(lVar8 + _DAT_113815308);
  _objc_release(lVar8);
  *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar7 + 0xcc)) = uVar10;
  return;
}



/* Entry: 1047b7cd0; end: 1047b7cdf; -[SCAdResponse resolvedTimeStampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b7cd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f108);
}



/* Entry: 1047b7ce0; end: 1047b7cef; -[SCAdResponse expireTimeStampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b7ce0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f110);
}



/* Entry: 1047b7cf0; end: 1047b7cff; -[SCAdResponse backupCacheExpireTimeStampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b7cf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f118);
}



/* Entry: 1047b7d00; end: 1047b7d0f; -[SCAdResponse serveTimeStampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b7d00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f120);
}



/* Entry: 1047b7d10; end: 1047b7d1f; -[SCAdResponse adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b7d10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f128);
}



/* Entry: 1047b7d20; end: 1047b7d6b; -[SCAdResponse identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7d20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f130);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308f130))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7d6c; end: 1047b7d77; -[SCAdResponse adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7d6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f138))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f138);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7d78; end: 1047b7d83; -[SCAdResponse serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7d78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f140))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f140);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7d84; end: 1047b7d8f; -[SCAdResponse lineItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7d84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f148))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f148);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7d90; end: 1047b7d9b; -[SCAdResponse adServeRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7d90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f150))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f150);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7d9c; end: 1047b7da7; -[SCAdResponse pixelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7d9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f158))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f158);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7da8; end: 1047b7db3; -[SCAdResponse adSquadId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7da8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001047c0a80(param_1 + _DAT_1138151e8,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1047b7db4; end: 1047b7dbf; -[SCAdResponse campaignId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7db4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001047c0a80(param_1 + _DAT_1138151f0,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1047b7dc0; end: 1047b7e9f;  */

void FUN_1047b7dc0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001047c0a80(param_1 + *param_3,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1047b7ea0; end: 1047b7eab; -[SCAdResponse adAccountId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7ea0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001047c0a80(param_1 + _DAT_1138151f8,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1047b7eac; end: 1047b7ebb; -[SCAdResponse adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b7eac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815200);
}



/* Entry: 1047b7ebc; end: 1047b7f17; -[SCAdResponse adSnapArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7ebc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113815208);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047c6864(0);
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



/* Entry: 1047b7f18; end: 1047b7f23; -[SCAdResponse thirdPartyImpressionTrackUrls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7f18(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113815210);
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



/* Entry: 1047b7f24; end: 1047b7f2f; -[SCAdResponse thirdPartyImpressionClickUrls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7f24(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113815218);
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



/* Entry: 1047b7f30; end: 1047b7f3b; -[SCAdResponse thirdPartyEngagedViewClickUrls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7f30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113815220);
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



/* Entry: 1047b7f3c; end: 1047b7f8b;  */

void FUN_1047b7f3c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
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



/* Entry: 1047b7f8c; end: 1047b7f9b; -[SCAdResponse storyAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815228));
  return;
}



/* Entry: 1047b7f9c; end: 1047b7fab; -[SCAdResponse isValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b7f9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815230);
}



/* Entry: 1047b7fac; end: 1047b7fbb; -[SCAdResponse serveLoggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815238));
  return;
}



/* Entry: 1047b7fbc; end: 1047b7fcb; -[SCAdResponse targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815240));
  return;
}



/* Entry: 1047b7fcc; end: 1047b7fd7; -[SCAdResponse adRenderData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7fcc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113815248))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113815248);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047b7fd8; end: 1047b7fe7; -[SCAdResponse hideAdSlug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b7fd8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815250);
}



/* Entry: 1047b7fe8; end: 1047b7ff3; -[SCAdResponse rawUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7fe8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815258))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815258);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b7ff4; end: 1047b7fff; -[SCAdResponse rawAdData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b7ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815260))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815260);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b8000; end: 1047b800b; -[SCAdResponse protoTrackURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b8000(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815268))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815268);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b800c; end: 1047b8063;  */

void FUN_1047b800c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1047b8064; end: 1047b806f; -[SCAdResponse viewReceipt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b8064(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113815270))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113815270);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047b8070; end: 1047b80df;  */

void FUN_1047b8070(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047b80e0; end: 1047b80ef; -[SCAdResponse skAdNetworkAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b80e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815278));
  return;
}



/* Entry: 1047b80f0; end: 1047b80ff; -[SCAdResponse brandNameProfileInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b80f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815280));
  return;
}



/* Entry: 1047b8100; end: 1047b810f; -[SCAdResponse organicValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1047b8100(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113815288);
}



/* Entry: 1047b8110; end: 1047b811f; -[SCAdResponse hideReportAdCommentBox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b8110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815290);
}



/* Entry: 1047b8120; end: 1047b812f; -[SCAdResponse adInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b8120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815298));
  return;
}



/* Entry: 1047b8130; end: 1047b813f; -[SCAdResponse cacheType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b8130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152a0);
}



/* Entry: 1047b8140; end: 1047b814f; -[SCAdResponse adSwipeUpLikely] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b8140(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138152a8);
}



/* Entry: 1047b8150; end: 1047b815f; -[SCAdResponse nonFeedStoryAdVisibleSnapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b8150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152b0);
}



/* Entry: 1047b8160; end: 1047b816f; -[SCAdResponse preferredDownloadMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b8160(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152b8);
}



/* Entry: 1047b8170; end: 1047b817f; -[SCAdResponse brandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b8170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152c0);
}



/* Entry: 1047b8180; end: 1047b818f; -[SCAdResponse storeContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b8180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138152c8));
  return;
}



/* Entry: 1047b8190; end: 1047b819f; -[SCAdResponse optimizationGoal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b8190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152d0);
}



/* Entry: 1047b81a0; end: 1047b81af; -[SCAdResponse thirdPartyLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b81a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152d8);
}



/* Entry: 1047b81b0; end: 1047b81bf; -[SCAdResponse creatorProfileInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b81b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138152e0));
  return;
}



/* Entry: 1047b81c0; end: 1047b81cf; -[SCAdResponse profileTaggedInHeadline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b81c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138152e8));
  return;
}



/* Entry: 1047b81d0; end: 1047b81df; -[SCAdResponse chatFeedProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b81d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138152f0));
  return;
}



/* Entry: 1047b81e0; end: 1047b81ef; -[SCAdResponse createEventSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b81e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138152f8);
}



/* Entry: 1047b81f0; end: 1047b81ff; -[SCAdResponse adDemandSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b81f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815300);
}



/* Entry: 1047b8200; end: 1047b820f; -[SCAdResponse isDynamicProduct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b8200(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815308);
}



/* Entry: 1047b8210; end: 1047b8733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1047b8210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
             undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined1 param_46,undefined4 param_47,undefined8 param_48,
             undefined8 param_49,undefined1 param_50,undefined4 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined1 param_63)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f108) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f110) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f118) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f120) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f128) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f130);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f138);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f140);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f148);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f150);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f158);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  func_0x0001047c0a80(param_19,unaff_x20 + _DAT_1138151e8,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(param_20,unaff_x20 + _DAT_1138151f0,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(param_21,unaff_x20 + _DAT_1138151f8,0x112d3bc20,&UNK_10d904ef0);
  *(undefined8 *)(unaff_x20 + _DAT_113815200) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_113815208) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_113815210) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_113815218) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_113815220) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_113815228) = param_27;
  *(undefined1 *)(unaff_x20 + _DAT_113815230) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_113815238) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_113815240) = param_31;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815248);
  *puVar1 = param_32;
  puVar1[1] = param_33;
  *(undefined1 *)(unaff_x20 + _DAT_113815250) = param_34;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815258);
  *puVar1 = param_36;
  puVar1[1] = param_37;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815260);
  *puVar1 = param_38;
  puVar1[1] = param_39;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815268);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815270);
  *puVar1 = param_42;
  puVar1[1] = param_43;
  *(undefined8 *)(unaff_x20 + _DAT_113815278) = param_44;
  *(undefined8 *)(unaff_x20 + _DAT_113815280) = param_45;
  *(undefined4 *)(unaff_x20 + _DAT_113815288) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113815290) = param_46;
  *(undefined8 *)(unaff_x20 + _DAT_113815298) = param_48;
  *(undefined8 *)(unaff_x20 + _DAT_1138152a0) = param_49;
  *(undefined1 *)(unaff_x20 + _DAT_1138152a8) = param_50;
  *(undefined8 *)(unaff_x20 + _DAT_1138152b0) = param_52;
  *(undefined8 *)(unaff_x20 + _DAT_1138152b8) = param_53;
  *(undefined8 *)(unaff_x20 + _DAT_1138152c0) = param_54;
  *(undefined8 *)(unaff_x20 + _DAT_1138152c8) = param_55;
  *(undefined8 *)(unaff_x20 + _DAT_1138152d0) = param_56;
  *(undefined8 *)(unaff_x20 + _DAT_1138152d8) = param_57;
  *(undefined8 *)(unaff_x20 + _DAT_1138152e0) = param_58;
  *(undefined8 *)(unaff_x20 + _DAT_1138152e8) = param_59;
  *(undefined8 *)(unaff_x20 + _DAT_1138152f0) = param_60;
  *(undefined8 *)(unaff_x20 + _DAT_1138152f8) = param_61;
  *(undefined8 *)(unaff_x20 + _DAT_113815300) = param_62;
  *(undefined1 *)(unaff_x20 + _DAT_113815308) = param_63;
  puVar2 = auStack_a8;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001047c0ac8(param_21,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0ac8(param_20,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0ac8(param_19,0x112d3bc20,&UNK_10d904ef0);
  return puVar2;
}



/* Entry: 1047b8734; end: 1047b8bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1047b8734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
             undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined1 param_46,undefined4 param_47,undefined8 param_48,
             undefined8 param_49,undefined1 param_50,undefined4 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined1 param_63)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11308f108) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f110) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f118) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f120) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f128) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f130);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f138);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f140);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f148);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f150);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f158);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  func_0x0001047c0a80(param_19,unaff_x20 + _DAT_1138151e8,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(param_20,unaff_x20 + _DAT_1138151f0,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(param_21,unaff_x20 + _DAT_1138151f8,0x112d3bc20,&UNK_10d904ef0);
  *(undefined8 *)(unaff_x20 + _DAT_113815200) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_113815208) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_113815210) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_113815218) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_113815220) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_113815228) = param_27;
  *(undefined1 *)(unaff_x20 + _DAT_113815230) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_113815238) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_113815240) = param_31;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815248);
  *puVar1 = param_32;
  puVar1[1] = param_33;
  *(undefined1 *)(unaff_x20 + _DAT_113815250) = param_34;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815258);
  *puVar1 = param_36;
  puVar1[1] = param_37;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815260);
  *puVar1 = param_38;
  puVar1[1] = param_39;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815268);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815270);
  *puVar1 = param_42;
  puVar1[1] = param_43;
  *(undefined8 *)(unaff_x20 + _DAT_113815278) = param_44;
  *(undefined8 *)(unaff_x20 + _DAT_113815280) = param_45;
  *(undefined4 *)(unaff_x20 + _DAT_113815288) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113815290) = param_46;
  *(undefined8 *)(unaff_x20 + _DAT_113815298) = param_48;
  *(undefined8 *)(unaff_x20 + _DAT_1138152a0) = param_49;
  *(undefined1 *)(unaff_x20 + _DAT_1138152a8) = param_50;
  *(undefined8 *)(unaff_x20 + _DAT_1138152b0) = param_52;
  *(undefined8 *)(unaff_x20 + _DAT_1138152b8) = param_53;
  *(undefined8 *)(unaff_x20 + _DAT_1138152c0) = param_54;
  *(undefined8 *)(unaff_x20 + _DAT_1138152c8) = param_55;
  *(undefined8 *)(unaff_x20 + _DAT_1138152d0) = param_56;
  *(undefined8 *)(unaff_x20 + _DAT_1138152d8) = param_57;
  *(undefined8 *)(unaff_x20 + _DAT_1138152e0) = param_58;
  *(undefined8 *)(unaff_x20 + _DAT_1138152e8) = param_59;
  *(undefined8 *)(unaff_x20 + _DAT_1138152f0) = param_60;
  *(undefined8 *)(unaff_x20 + _DAT_1138152f8) = param_61;
  *(undefined8 *)(unaff_x20 + _DAT_113815300) = param_62;
  *(undefined1 *)(unaff_x20 + _DAT_113815308) = param_63;
  FUN_1047c0984();
  puVar2 = &stack0xffffffffffffff78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001047c0ac8(param_21,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0ac8(param_20,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0ac8(param_19,0x112d3bc20,&UNK_10d904ef0);
  return puVar2;
}



/* Entry: 1047b8be0; end: 1047b952b; -[SCAdResponse initWithResolvedTimeStampMillis:expireTimeStampMillis:backupCacheExpireTimeStampMillis:serveTimeStampMillis:adProductType:identifier:adId:serveItemId:lineItemId:adServeRequestId:pixelId:adSquadId:campaignId:adAccountId:adType:adSnapArray:thirdPartyImpressionTrackUrls:thirdPartyImpressionClickUrls:thirdPartyEngagedViewClickUrls:storyAd:isValid:serveLoggingContext:targetingParameters:adRenderData:hideAdSlug:rawUserData:rawAdData:protoTrackURL:viewReceipt:skAdNetworkAttribution:brandNameProfileInfo:organicValue:hideReportAdCommentBox:adInsertionConfig:cacheType:adSwipeUpLikely:nonFeedStoryAdVisibleSnapCount:preferredDownloadMethod:brandSafetyInventoryType:storeContext:optimizationGoal:thirdPartyLoginSource:creatorProfileInfo:profileTaggedInHeadline:chatFeedProperties:createEventSource:adDemandSource:isDynamicProduct:] */

void FUN_1047b8be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,long param_12,long param_13,
                  long param_14,long param_15,long param_16,long param_17,long param_18,
                  long param_19,long param_20,long param_21,long param_22,undefined8 param_23,
                  byte param_24,undefined4 param_25,undefined8 param_26,undefined8 param_27,
                  long param_28,byte param_29,undefined4 param_30,long param_31,long param_32,
                  long param_33,long param_34,undefined8 param_35,undefined8 param_36,byte param_37,
                  undefined4 param_38,undefined8 param_39,undefined8 param_40,undefined1 param_41,
                  undefined4 param_42,undefined8 param_43,undefined8 param_44,long param_45,
                  undefined8 param_46,undefined8 param_47,long param_48,undefined8 param_49,
                  undefined8 param_50,undefined8 param_51,undefined8 param_52,undefined8 param_53,
                  undefined1 param_54)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  long lVar15;
  long alStack_380 [14];
  byte abStack_310 [8];
  long alStack_308 [4];
  byte abStack_2e8 [8];
  long alStack_2e0 [10];
  byte abStack_290 [8];
  undefined8 auStack_288 [2];
  undefined1 auStack_278 [8];
  long alStack_270 [11];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  
  lVar13 = 0x112d3bc20;
  puVar11 = &UNK_10d904ef0;
  uStack_110 = param_8;
  uStack_108 = param_6;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  puStack_a0 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_a8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lStack_b0 = lVar13;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_120 = puVar11;
  uStack_118 = param_9;
  if (param_10 == 0) {
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_130 = puVar11;
    lStack_128 = param_10;
  }
  lStack_188 = param_51;
  puStack_190 = (undefined *)param_50;
  uStack_1a0 = param_49;
  uStack_198 = param_46;
  uStack_180 = param_39;
  uStack_178 = param_36;
  uStack_170 = param_35;
  lStack_c0 = param_31;
  lStack_b8 = param_34;
  lStack_c8 = param_28;
  lStack_d8 = param_22;
  lStack_e8 = param_33;
  lStack_e0 = param_21;
  lStack_f8 = param_19;
  lStack_f0 = param_20;
  puStack_100 = (undefined *)param_17;
  if (param_11 == 0) {
    lStack_138 = 0;
    puStack_140 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_138 = param_11;
    puStack_140 = puVar11;
  }
  if (param_12 == 0) {
    lStack_148 = 0;
    puStack_150 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_150 = puVar11;
    lStack_148 = param_12;
  }
  lVar15 = param_13;
  _objc_retain();
  lStack_1b0 = param_14;
  _objc_retain();
  lVar10 = param_15;
  _objc_retain();
  lStack_208 = param_16;
  _objc_retain();
  puVar6 = puStack_100;
  _objc_retain();
  lVar7 = lStack_f8;
  lStack_1f8 = (long)puVar6;
  _objc_retain();
  lVar8 = lStack_f0;
  lStack_1f0 = lVar7;
  _objc_retain();
  lVar7 = lStack_e0;
  lStack_1e8 = lVar8;
  _objc_retain();
  lVar8 = lStack_d8;
  puStack_1e0 = (undefined *)lVar7;
  _objc_retain();
  puStack_1d8 = (undefined *)lVar8;
  _objc_retain();
  uStack_158 = param_23;
  _objc_retain();
  uStack_160 = param_26;
  _objc_retain();
  lVar7 = lStack_c8;
  uStack_168 = param_27;
  _objc_retain();
  lVar8 = lStack_c0;
  lStack_1d0 = lVar7;
  _objc_retain();
  lStack_200 = param_32;
  puStack_1c8 = (undefined *)lVar8;
  _objc_retain();
  lVar7 = lStack_e8;
  _objc_retain();
  lVar8 = lStack_b8;
  _objc_retain();
  lStack_d0 = lVar8;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar6 = puStack_190;
  _objc_retain();
  lVar8 = lStack_188;
  uStack_1a8 = puVar6;
  _objc_retain();
  uStack_1b8 = lVar8;
  if (lVar15 == 0) {
    lStack_188 = 0;
    puStack_190 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_190 = puVar11;
    lStack_188 = param_13;
    _objc_release(lVar15);
  }
  lVar8 = lStack_a8;
  lVar15 = lStack_b0;
  if (param_14 == 0) {
    lStack_1b0 = 0;
    puStack_1c0 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1c0 = puVar11;
    _objc_release(param_14);
  }
  if (lVar10 == 0) {
    lVar9 = 0;
    __s10Foundation4UUIDVMa();
  }
  else {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar15,param_15);
    _objc_release(lVar10);
    lVar9 = 0;
    __s10Foundation4UUIDVMa();
  }
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar15,lVar10 == 0,1);
  if (param_16 != 0) {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar8,lStack_208);
    _objc_release(param_16);
  }
  lVar10 = 0;
  __s10Foundation4UUIDVMa();
  pcVar14 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
  (*pcVar14)(lVar8,param_16 == 0,1,lVar10);
  puVar5 = puStack_a0;
  lVar15 = lStack_1f8;
  bVar1 = lStack_1f8 == 0;
  if (!bVar1) {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ
              (puStack_a0,puStack_100);
    _objc_release(lVar15);
  }
  lVar8 = lStack_1e8;
  puVar11 = (undefined *)(ulong)bVar1;
  (*pcVar14)(puVar5,puVar11,1,lVar10);
  lVar15 = lStack_1f0;
  if (lStack_1f0 == 0) {
    lStack_f8 = 0;
  }
  else {
    puVar11 = (undefined *)0x0;
    FUN_1047c6864();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar15);
  }
  puVar3 = puStack_1c8;
  lVar15 = lStack_1d0;
  puVar2 = puStack_1d8;
  puVar6 = puStack_1e0;
  if (lVar8 == 0) {
    lStack_f0 = 0;
    puVar12 = PTR___sSSN_11034da80;
  }
  else {
    puVar11 = PTR___sSSN_11034da80;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar8);
    puVar12 = PTR___sSSN_11034da80;
  }
  if (puVar6 == (undefined *)0x0) {
    lStack_e0 = 0;
  }
  else {
    PTR___sSSN_11034da80 = puVar12;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar6);
    puVar11 = puVar12;
    puVar12 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar12;
  if (puVar2 == (undefined *)0x0) {
    lStack_d8 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar2);
    puVar11 = puVar12;
  }
  if (lVar15 == 0) {
    lStack_c8 = 0;
    puStack_100 = (undefined *)0xf000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puStack_100 = puVar11;
    _objc_release(lVar15);
  }
  if (puVar3 == (undefined *)0x0) {
    lStack_c0 = 0;
    puStack_1c8 = (undefined *)0x0;
    lVar15 = lStack_200;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1c8 = puVar11;
    _objc_release(puVar3);
    lVar15 = lStack_200;
  }
  lStack_200 = lVar15;
  if (param_32 == 0) {
    lStack_1d0 = 0;
    puStack_1d8 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1d8 = puVar11;
    lStack_1d0 = lVar15;
    _objc_release(param_32);
  }
  if (lVar7 == 0) {
    lStack_e8 = 0;
    puStack_1e0 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1e0 = puVar11;
    _objc_release(lVar7);
  }
  lVar15 = lStack_b8;
  if (lStack_d0 == 0) {
    lVar15 = 0;
    puVar11 = (undefined *)0xf000000000000000;
  }
  else {
    lStack_1e8 = param_48;
    lStack_b8 = param_18;
    lStack_1f0 = CONCAT44(lStack_1f0._4_4_,(uint)param_24);
    lStack_1f8 = CONCAT44(lStack_1f8._4_4_,(uint)param_29);
    lStack_200 = CONCAT44(lStack_200._4_4_,(uint)param_37);
    lStack_208 = param_45;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lStack_d0);
    param_37 = (byte)lStack_200;
    param_29 = (byte)lStack_1f8;
    param_24 = (byte)lStack_1f0;
    param_48 = lStack_1e8;
    param_18 = lStack_b8;
    param_45 = lStack_208;
  }
  *(undefined1 *)(lVar13 + -8) = param_54;
  *(undefined8 *)(lVar13 + -0x18) = param_52;
  *(undefined8 *)(lVar13 + -0x10) = param_53;
  *(undefined8 *)(lVar13 + -0x20) = uStack_1b8;
  *(undefined8 *)(lVar13 + -0x28) = uStack_1a8;
  uVar4 = uStack_1a0;
  *(long *)(lVar13 + -0x38) = param_48;
  *(undefined8 *)(lVar13 + -0x30) = uVar4;
  *(undefined8 *)(lVar13 + -0x40) = param_47;
  uVar4 = uStack_198;
  *(long *)(lVar13 + -0x50) = param_45;
  *(undefined8 *)(lVar13 + -0x48) = uVar4;
  *(undefined8 *)(lVar13 + -0x60) = param_43;
  *(undefined8 *)(lVar13 + -0x58) = param_44;
  *(undefined1 *)(lVar13 + -0x68) = param_41;
  *(undefined8 *)(lVar13 + -0x70) = param_40;
  *(undefined8 *)(lVar13 + -0x78) = uStack_180;
  *(byte *)(lVar13 + -0x80) = param_37;
  *(undefined8 *)(lVar13 + -0x88) = uStack_178;
  uVar4 = uStack_170;
  *(undefined **)(lVar13 + -0x98) = puVar11;
  *(undefined8 *)(lVar13 + -0x90) = uVar4;
  *(long *)(lVar13 + -0xa0) = lVar15;
  *(undefined **)(lVar13 + -0xa8) = puStack_1e0;
  *(long *)(lVar13 + -0xb0) = lStack_e8;
  *(undefined **)(lVar13 + -0xb8) = puStack_1d8;
  *(long *)(lVar13 + -0xc0) = lStack_1d0;
  *(undefined **)(lVar13 + -200) = puStack_1c8;
  *(long *)(lVar13 + -0xd0) = lStack_c0;
  *(byte *)(lVar13 + -0xd8) = param_29;
  *(undefined **)(lVar13 + -0xe0) = puStack_100;
  *(long *)(lVar13 + -0xe8) = lStack_c8;
  *(undefined8 *)(lVar13 + -0xf0) = uStack_168;
  *(undefined8 *)(lVar13 + -0xf8) = uStack_160;
  *(byte *)(lVar13 + -0x100) = param_24;
  *(undefined8 *)(lVar13 + -0x108) = uStack_158;
  *(long *)(lVar13 + -0x110) = lStack_d8;
  *(long *)(lVar13 + -0x118) = lStack_e0;
  *(long *)(lVar13 + -0x120) = lStack_f0;
  lVar15 = lStack_f8;
  *(long *)(lVar13 + -0x130) = param_18;
  *(long *)(lVar13 + -0x128) = lVar15;
  *(undefined1 **)(lVar13 + -0x138) = puStack_a0;
  *(long *)(lVar13 + -0x140) = lStack_a8;
  *(long *)(lVar13 + -0x148) = lStack_b0;
  *(undefined **)(lVar13 + -0x150) = puStack_1c0;
  *(long *)(lVar13 + -0x158) = lStack_1b0;
  *(undefined **)(lVar13 + -0x160) = puStack_190;
  *(long *)(lVar13 + -0x168) = lStack_188;
  *(undefined **)(lVar13 + -0x170) = puStack_150;
  FUN_1047b8734(param_1,param_2,param_3,param_4,param_5,uStack_110,uStack_118,puStack_120,lStack_128
                ,puStack_130,lStack_138,puStack_140,lStack_148);
  return;
}



/* Entry: 1047b952c; end: 1047ba487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047b952c(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  undefined8 uVar14;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_d60 [8];
  long lStack_d58;
  long lStack_d50;
  undefined1 *puStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  long lStack_d30;
  long lStack_d28;
  long lStack_d20;
  undefined8 *puStack_d18;
  long lStack_cf0;
  long lStack_ce8;
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
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined1 uStack_c38;
  undefined7 uStack_c37;
  undefined1 uStack_c30;
  undefined8 uStack_c2f;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined1 uStack_ad8;
  undefined7 uStack_ad7;
  undefined1 uStack_ad0;
  undefined8 uStack_acf;
  long lStack_a18;
  long lStack_a10;
  undefined1 auStack_a08 [168];
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  long lStack_8b0;
  long lStack_8a8;
  undefined1 auStack_8a0 [8];
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 uStack_7f0;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined1 uStack_740;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 uStack_690;
  undefined1 auStack_680 [352];
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined *apuStack_270 [44];
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar6 = 0;
  func_0x000100b91fbc();
  lStack_d28 = *(long *)(lVar6 + -8);
  lStack_d20 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d28 + 0x40));
  puStack_d48 = auStack_d60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)(auStack_d60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar6 = 0x112db39a8;
  lStack_d50 = lVar12;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  lVar6 = 0;
  lStack_d30 = lVar12;
  FUN_1046d90b0();
  lStack_d58 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d58 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar12 - extraout_x12_00;
  uVar24 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308f108) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f110) = uVar24;
  uVar24 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11308f118) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11308f120) = uVar24;
  uVar24 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11308f128) = param_1[4];
  uVar20 = param_1[6];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11308f130);
  *puVar9 = uVar24;
  puVar9[1] = uVar20;
  uStack_d38 = param_1[8];
  uVar24 = param_1[7];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11308f138);
  puVar9[1] = param_1[8];
  *puVar9 = uVar24;
  uStack_d40 = param_1[10];
  uVar24 = param_1[9];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11308f140);
  puVar9[1] = param_1[10];
  *puVar9 = uVar24;
  uVar14 = param_1[0xc];
  uVar24 = param_1[0xb];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11308f148);
  puVar9[1] = param_1[0xc];
  *puVar9 = uVar24;
  uVar15 = param_1[0xe];
  uVar24 = param_1[0xd];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11308f150);
  puVar9[1] = param_1[0xe];
  *puVar9 = uVar24;
  uVar23 = param_1[0x10];
  uVar24 = param_1[0xf];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11308f158);
  puVar9[1] = param_1[0x10];
  *puVar9 = uVar24;
  lVar7 = 0;
  func_0x000100b91d00();
  func_0x0001047c0a80((long)param_1 + (long)*(int *)(lVar7 + 0x3c),unaff_x20 + _DAT_1138151e8,
                      0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80((long)param_1 + (long)*(int *)(lVar7 + 0x40),unaff_x20 + _DAT_1138151f0,
                      0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80((long)param_1 + (long)*(int *)(lVar7 + 0x44),unaff_x20 + _DAT_1138151f8,
                      0x112d3bc20,&UNK_10d904ef0);
  uVar19 = uStack_d38;
  uVar24 = uStack_d40;
  *(undefined8 *)(unaff_x20 + _DAT_113815200) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48));
  lVar6 = *(long *)((long)param_1 + (long)*(int *)(lVar7 + 0x4c));
  puStack_d18 = param_1;
  if (lVar6 == 0) {
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uStack_d38);
    _swift_bridgeObjectRetain(uStack_d40);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar15);
    puVar17 = (undefined *)0x0;
  }
  else {
    lVar22 = *(long *)(lVar6 + 0x10);
    if (lVar22 == 0) {
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar15);
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_270[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar23);
      func_0x0001046c707c(0,lVar22,0);
      lVar6 = lVar6 + ((ulong)*(byte *)(lStack_d58 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lStack_d58 + 0x50) ^ 0xffffffffffffffff));
      lVar13 = *(long *)(lStack_d58 + 0x48);
      do {
        puVar17 = apuStack_270[0];
        func_0x0001047c0a00(lVar6,lVar18,FUN_1046d90b0);
        func_0x0001047c0a00(lVar18,lVar12,FUN_1046d90b0);
        FUN_1047c6864(0);
        _objc_allocWithZone();
        lVar8 = lVar12;
        func_0x0001047c2b40();
        func_0x0001047c0a44(lVar18,FUN_1046d90b0);
        uVar1 = *(ulong *)(puVar17 + 0x10);
        apuStack_270[0] = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar1) {
          func_0x0001046c707c(1 < *(ulong *)(puVar17 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_270[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_270[0] + uVar1 * 8 + 0x20) = lVar8;
        lVar6 = lVar6 + lVar13;
        lVar22 = lVar22 + -1;
        puVar17 = apuStack_270[0];
        param_1 = puStack_d18;
      } while (lVar22 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113815208) = puVar17;
  uVar19 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x50));
  *(undefined8 *)(unaff_x20 + _DAT_113815210) = uVar19;
  uVar24 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x54));
  *(undefined8 *)(unaff_x20 + _DAT_113815218) = uVar24;
  uVar14 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x58));
  *(undefined8 *)(unaff_x20 + _DAT_113815220) = uVar14;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x5c));
  uStack_4b8 = puVar9[0xd];
  uStack_4c0 = puVar9[0xc];
  uStack_4a8 = puVar9[0xf];
  uStack_4b0 = puVar9[0xe];
  uStack_498 = puVar9[0x11];
  uStack_4a0 = puVar9[0x10];
  uStack_488 = puVar9[0x13];
  uStack_490 = puVar9[0x12];
  uStack_518 = puVar9[1];
  uStack_520 = *puVar9;
  uStack_508 = puVar9[3];
  uStack_510 = puVar9[2];
  uStack_4f8 = puVar9[5];
  uStack_500 = puVar9[4];
  uStack_4e8 = puVar9[7];
  uStack_4f0 = puVar9[6];
  uStack_4d8 = puVar9[9];
  uStack_4e0 = puVar9[8];
  uStack_4c8 = puVar9[0xb];
  uStack_4d0 = puVar9[10];
  iVar5 = (int)&uStack_520;
  FUN_1046d2a38();
  if (iVar5 == 1) {
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar24);
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = uStack_4b8;
    uStack_b0 = uStack_4c0;
    uStack_98 = uStack_4a8;
    uStack_a0 = uStack_4b0;
    uStack_88 = uStack_498;
    uStack_90 = uStack_4a0;
    uStack_78 = uStack_488;
    uStack_80 = uStack_490;
    uStack_e8 = uStack_4f8;
    uStack_f0 = uStack_500;
    uStack_d8 = uStack_4e8;
    uStack_e0 = uStack_4f0;
    uStack_c8 = uStack_4d8;
    uStack_d0 = uStack_4e0;
    uStack_b8 = uStack_4c8;
    uStack_c0 = uStack_4d0;
    uStack_108 = uStack_518;
    uStack_110 = uStack_520;
    uStack_f8 = uStack_508;
    uStack_100 = uStack_510;
    FUN_10482a2ac(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar24);
    func_0x0001047c0a80(&uStack_520,apuStack_270,0x11308da18,&UNK_10dd2f158);
    puVar9 = &uStack_110;
    func_0x0001048290b8();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113815228) = puVar9;
  *(undefined1 *)(unaff_x20 + _DAT_113815230) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x60));
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 100));
  lVar6 = puVar9[1];
  if (lVar6 == 1) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar24 = puVar9[4];
    uVar2 = *(undefined4 *)(puVar9 + 3);
    uVar19 = puVar9[2];
    uVar14 = *puVar9;
    lVar18 = 0;
    FUN_10481c348();
    lVar12 = lVar18;
    _objc_allocWithZone();
    puVar9 = (undefined8 *)(lVar12 + _DAT_113090df8);
    *puVar9 = uVar14;
    puVar9[1] = lVar6;
    *(undefined8 *)(lVar12 + _DAT_113090e00) = uVar19;
    *(byte *)(lVar12 + _DAT_113090e08) = (byte)uVar2 & 1;
    *(byte *)(lVar12 + _DAT_113090e10) = (byte)((uint)uVar2 >> 8) & 1;
    *(byte *)(lVar12 + _DAT_113090e18) = (byte)((uint)uVar2 >> 0x10) & 1;
    *(undefined8 *)(lVar12 + _DAT_113090e20) = uVar24;
    puVar17 = PTR_s_init_1125d9248;
    lStack_cf0 = lVar12;
    lStack_ce8 = lVar18;
    _swift_bridgeObjectRetain(lVar6);
    plVar10 = &lStack_cf0;
    _objc_msgSendSuper2(plVar10,puVar17);
  }
  lVar6 = lStack_d30;
  *(long **)(unaff_x20 + _DAT_113815238) = plVar10;
  _memcpy(auStack_680,(long)param_1 + (long)*(int *)(lVar7 + 0x68),0x160);
  iVar5 = (int)auStack_680;
  func_0x000101542f6c();
  if (iVar5 == 1) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    _memcpy(apuStack_270,auStack_680,0x160);
    FUN_104821150(0);
    _objc_allocWithZone();
    _memcpy(&uStack_b80,auStack_680,0x160);
    func_0x000102d12354(&uStack_b80,&uStack_ce0);
    ppuVar11 = apuStack_270;
    func_0x00010481e13c();
  }
  *(undefined ***)(unaff_x20 + _DAT_113815240) = ppuVar11;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x6c));
  uVar24 = *puVar9;
  uVar14 = puVar9[1];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113815248);
  *puVar9 = uVar24;
  puVar9[1] = uVar14;
  *(undefined1 *)(unaff_x20 + _DAT_113815250) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x70));
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x74));
  uVar20 = puVar9[1];
  uVar19 = *puVar9;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113815258);
  puVar4[1] = puVar9[1];
  *puVar4 = uVar19;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x78));
  uVar23 = puVar9[1];
  uVar19 = *puVar9;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113815260);
  puVar4[1] = puVar9[1];
  *puVar4 = uVar19;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x7c));
  uVar21 = puVar9[1];
  uVar19 = *puVar9;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113815268);
  puVar4[1] = puVar9[1];
  *puVar4 = uVar19;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x80));
  uVar19 = *puVar9;
  uVar15 = puVar9[1];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113815270);
  *puVar9 = uVar19;
  puVar9[1] = uVar15;
  func_0x0001047c0a80((long)param_1 + (long)*(int *)(lVar7 + 0x84),lVar6,0x112db39a8,&UNK_10d95dd90)
  ;
  lVar18 = lVar6;
  (**(code **)(lStack_d28 + 0x30))(lVar6,1,lStack_d20);
  lVar12 = lStack_d50;
  if ((int)lVar18 == 1) {
    func_0x000100de78a0(uVar24,uVar14);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar23);
    func_0x000100de78a0(uVar19,uVar15);
    puVar16 = (undefined1 *)0x0;
  }
  else {
    func_0x0001047c09bc(lVar6,lStack_d50,&SUB_100b91fbc);
    puVar16 = puStack_d48;
    func_0x0001047c0a00(lVar12,puStack_d48,&SUB_100b91fbc);
    FUN_104846384(0);
    _objc_allocWithZone();
    func_0x000100de78a0(uVar24,uVar14);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar23);
    func_0x000100de78a0(uVar19,uVar15);
    func_0x000104843d30();
    func_0x0001047c0a44(lVar12,&SUB_100b91fbc);
  }
  puVar4 = puStack_d18;
  *(undefined1 **)(unaff_x20 + _DAT_113815278) = puVar16;
  puVar9 = (undefined8 *)((long)puStack_d18 + (long)*(int *)(lVar7 + 0x88));
  uStack_6a8 = puVar9[0x11];
  uStack_6b0 = puVar9[0x10];
  uStack_698 = puVar9[0x13];
  uStack_6a0 = puVar9[0x12];
  uStack_690 = *(undefined1 *)(puVar9 + 0x14);
  uStack_6e8 = puVar9[9];
  uStack_6f0 = puVar9[8];
  uStack_6d8 = puVar9[0xb];
  uStack_6e0 = puVar9[10];
  uStack_6c8 = puVar9[0xd];
  uStack_6d0 = puVar9[0xc];
  uStack_6b8 = puVar9[0xf];
  uStack_6c0 = puVar9[0xe];
  uStack_728 = puVar9[1];
  uStack_730 = *puVar9;
  uStack_718 = puVar9[3];
  uStack_720 = puVar9[2];
  uStack_708 = puVar9[5];
  uStack_710 = puVar9[4];
  uStack_6f8 = puVar9[7];
  uStack_700 = puVar9[6];
  iVar5 = (int)&uStack_730;
  func_0x000101682c20();
  if (iVar5 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_298 = uStack_6a8;
    uStack_2a0 = uStack_6b0;
    uStack_288 = uStack_698;
    uStack_290 = uStack_6a0;
    uStack_280 = uStack_690;
    uStack_2d8 = uStack_6e8;
    uStack_2e0 = uStack_6f0;
    uStack_2c8 = uStack_6d8;
    uStack_2d0 = uStack_6e0;
    uStack_2a8 = uStack_6b8;
    uStack_2b0 = uStack_6c0;
    uStack_2b8 = uStack_6c8;
    uStack_2c0 = uStack_6d0;
    uStack_318 = uStack_728;
    uStack_320 = uStack_730;
    uStack_308 = uStack_718;
    uStack_310 = uStack_720;
    uStack_2e8 = uStack_6f8;
    uStack_2f0 = uStack_700;
    uStack_2f8 = uStack_708;
    uStack_300 = uStack_710;
    FUN_1047b15a4(0);
    _objc_allocWithZone();
    uStack_af8 = uStack_6a8;
    uStack_b00 = uStack_6b0;
    uStack_ae8 = uStack_698;
    uStack_af0 = uStack_6a0;
    uStack_ae0 = CONCAT71(uStack_ae0._1_7_,uStack_690);
    uStack_b38 = uStack_6e8;
    uStack_b40 = uStack_6f0;
    uStack_b28 = uStack_6d8;
    uStack_b30 = uStack_6e0;
    uStack_b18 = uStack_6c8;
    uStack_b20 = uStack_6d0;
    uStack_b08 = uStack_6b8;
    uStack_b10 = uStack_6c0;
    uStack_b78 = uStack_728;
    uStack_b80 = uStack_730;
    uStack_b68 = uStack_718;
    uStack_b70 = uStack_720;
    uStack_b58 = uStack_708;
    uStack_b60 = uStack_710;
    uStack_b48 = uStack_6f8;
    uStack_b50 = uStack_700;
    func_0x00010207f418(&uStack_b80,&uStack_ce0);
    puVar9 = &uStack_320;
    FUN_1047b0328();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113815280) = puVar9;
  *(undefined4 *)(unaff_x20 + _DAT_113815288) =
       *(undefined4 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x8c));
  *(undefined1 *)(unaff_x20 + _DAT_113815290) =
       *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x90));
  puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x94));
  uStack_c2f = *(undefined8 *)((long)puVar9 + 0xb1);
  uStack_c30 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0xa9) >> 0x38);
  uStack_c48 = puVar9[0x13];
  uStack_c50 = puVar9[0x12];
  uStack_c40 = puVar9[0x14];
  uStack_c38 = (undefined1)puVar9[0x15];
  uStack_c37 = (undefined7)((ulong)puVar9[0x15] >> 8);
  uStack_c58 = puVar9[0x11];
  uStack_c60 = puVar9[0x10];
  uStack_c98 = puVar9[9];
  uStack_ca0 = puVar9[8];
  uStack_c88 = puVar9[0xb];
  uStack_c90 = puVar9[10];
  uStack_c78 = puVar9[0xd];
  uStack_c80 = puVar9[0xc];
  uStack_c68 = puVar9[0xf];
  uStack_c70 = puVar9[0xe];
  uStack_cd8 = puVar9[1];
  uStack_ce0 = *puVar9;
  uStack_cc8 = puVar9[3];
  uStack_cd0 = puVar9[2];
  uStack_cb8 = puVar9[5];
  uStack_cc0 = puVar9[4];
  uStack_ca8 = puVar9[7];
  uStack_cb0 = puVar9[6];
  iVar5 = (int)&uStack_ce0;
  func_0x000101541310();
  if (iVar5 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_af8 = uStack_c58;
    uStack_b00 = uStack_c60;
    uStack_ae8 = uStack_c48;
    uStack_af0 = uStack_c50;
    uStack_ad8 = uStack_c38;
    uStack_ae0 = uStack_c40;
    uStack_acf = uStack_c2f;
    uStack_ad7 = uStack_c37;
    uStack_ad0 = uStack_c30;
    uStack_b38 = uStack_c98;
    uStack_b40 = uStack_ca0;
    uStack_b28 = uStack_c88;
    uStack_b30 = uStack_c90;
    uStack_b18 = uStack_c78;
    uStack_b20 = uStack_c80;
    uStack_b08 = uStack_c68;
    uStack_b10 = uStack_c70;
    uStack_b78 = uStack_cd8;
    uStack_b80 = uStack_ce0;
    uStack_b68 = uStack_cc8;
    uStack_b70 = uStack_cd0;
    uStack_b58 = uStack_cb8;
    uStack_b60 = uStack_cc0;
    uStack_b48 = uStack_ca8;
    uStack_b50 = uStack_cb0;
    FUN_1047b5e44(0);
    _objc_allocWithZone();
    puVar9 = &uStack_b80;
    FUN_1047b45c0();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113815298) = puVar9;
  *(undefined8 *)(unaff_x20 + _DAT_1138152a0) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x98));
  *(undefined1 *)(unaff_x20 + _DAT_1138152a8) =
       *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x9c));
  *(undefined8 *)(unaff_x20 + _DAT_1138152b0) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xa0));
  *(undefined8 *)(unaff_x20 + _DAT_1138152b8) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xa4));
  *(undefined8 *)(unaff_x20 + _DAT_1138152c0) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xa8));
  puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xac));
  lVar6 = puVar9[1];
  if (lVar6 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar24 = puVar9[2];
    uVar19 = puVar9[3];
    uVar14 = *puVar9;
    lVar18 = 0;
    FUN_104815460();
    lVar12 = lVar18;
    _objc_allocWithZone();
    puVar9 = (undefined8 *)(lVar12 + _DAT_113090b60);
    *puVar9 = uVar14;
    puVar9[1] = lVar6;
    puVar9 = (undefined8 *)(lVar12 + _DAT_113090b68);
    *puVar9 = uVar24;
    puVar9[1] = uVar19;
    puVar17 = PTR_s_init_1125d9248;
    lStack_a18 = lVar12;
    lStack_a10 = lVar18;
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(uVar19);
    plVar10 = &lStack_a18;
    _objc_msgSendSuper2(plVar10,puVar17);
  }
  *(long **)(unaff_x20 + _DAT_1138152c8) = plVar10;
  *(undefined8 *)(unaff_x20 + _DAT_1138152d0) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xb0));
  *(undefined8 *)(unaff_x20 + _DAT_1138152d8) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xb4));
  puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xb8));
  uStack_758 = puVar9[0x11];
  uStack_760 = puVar9[0x10];
  uStack_748 = puVar9[0x13];
  uStack_750 = puVar9[0x12];
  uStack_740 = *(undefined1 *)(puVar9 + 0x14);
  uStack_798 = puVar9[9];
  uStack_7a0 = puVar9[8];
  uStack_788 = puVar9[0xb];
  uStack_790 = puVar9[10];
  uStack_778 = puVar9[0xd];
  uStack_780 = puVar9[0xc];
  uStack_768 = puVar9[0xf];
  uStack_770 = puVar9[0xe];
  uStack_7d8 = puVar9[1];
  uStack_7e0 = *puVar9;
  uStack_7c8 = puVar9[3];
  uStack_7d0 = puVar9[2];
  uStack_7b8 = puVar9[5];
  uStack_7c0 = puVar9[4];
  uStack_7a8 = puVar9[7];
  uStack_7b0 = puVar9[6];
  iVar5 = (int)&uStack_7e0;
  func_0x000101682c20();
  if (iVar5 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_348 = uStack_758;
    uStack_350 = uStack_760;
    uStack_338 = uStack_748;
    uStack_340 = uStack_750;
    uStack_330 = uStack_740;
    uStack_388 = uStack_798;
    uStack_390 = uStack_7a0;
    uStack_378 = uStack_788;
    uStack_380 = uStack_790;
    uStack_358 = uStack_768;
    uStack_360 = uStack_770;
    uStack_368 = uStack_778;
    uStack_370 = uStack_780;
    uStack_3c8 = uStack_7d8;
    uStack_3d0 = uStack_7e0;
    uStack_3b8 = uStack_7c8;
    uStack_3c0 = uStack_7d0;
    uStack_398 = uStack_7a8;
    uStack_3a0 = uStack_7b0;
    uStack_3a8 = uStack_7b8;
    uStack_3b0 = uStack_7c0;
    FUN_1047b15a4(0);
    _objc_allocWithZone();
    uStack_3f8 = uStack_758;
    uStack_400 = uStack_760;
    uStack_3e8 = uStack_748;
    uStack_3f0 = uStack_750;
    uStack_3e0 = uStack_740;
    uStack_438 = uStack_798;
    uStack_440 = uStack_7a0;
    uStack_428 = uStack_788;
    uStack_430 = uStack_790;
    uStack_408 = uStack_768;
    uStack_410 = uStack_770;
    uStack_418 = uStack_778;
    uStack_420 = uStack_780;
    uStack_478 = uStack_7d8;
    uStack_480 = uStack_7e0;
    uStack_468 = uStack_7c8;
    uStack_470 = uStack_7d0;
    uStack_448 = uStack_7a8;
    uStack_450 = uStack_7b0;
    uStack_458 = uStack_7b8;
    uStack_460 = uStack_7c0;
    func_0x00010207f418(&uStack_480,&uStack_890);
    puVar9 = &uStack_3d0;
    FUN_1047b0328();
  }
  *(undefined8 **)(unaff_x20 + _DAT_1138152e0) = puVar9;
  puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xbc));
  uStack_808 = puVar9[0x11];
  uStack_810 = puVar9[0x10];
  uStack_7f8 = puVar9[0x13];
  uStack_800 = puVar9[0x12];
  uStack_7f0 = *(undefined1 *)(puVar9 + 0x14);
  uStack_848 = puVar9[9];
  uStack_850 = puVar9[8];
  uStack_838 = puVar9[0xb];
  uStack_840 = puVar9[10];
  uStack_828 = puVar9[0xd];
  uStack_830 = puVar9[0xc];
  uStack_818 = puVar9[0xf];
  uStack_820 = puVar9[0xe];
  uStack_888 = puVar9[1];
  uStack_890 = *puVar9;
  uStack_878 = puVar9[3];
  uStack_880 = puVar9[2];
  uStack_868 = puVar9[5];
  uStack_870 = puVar9[4];
  uStack_858 = puVar9[7];
  uStack_860 = puVar9[6];
  iVar5 = (int)&uStack_890;
  func_0x000101682c20();
  if (iVar5 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_3f8 = uStack_808;
    uStack_400 = uStack_810;
    uStack_3e8 = uStack_7f8;
    uStack_3f0 = uStack_800;
    uStack_3e0 = uStack_7f0;
    uStack_438 = uStack_848;
    uStack_440 = uStack_850;
    uStack_428 = uStack_838;
    uStack_430 = uStack_840;
    uStack_408 = uStack_818;
    uStack_410 = uStack_820;
    uStack_418 = uStack_828;
    uStack_420 = uStack_830;
    uStack_478 = uStack_888;
    uStack_480 = uStack_890;
    uStack_468 = uStack_878;
    uStack_470 = uStack_880;
    uStack_448 = uStack_858;
    uStack_450 = uStack_860;
    uStack_458 = uStack_868;
    uStack_460 = uStack_870;
    FUN_1047b15a4(0);
    _objc_allocWithZone();
    uStack_8d8 = uStack_808;
    uStack_8e0 = uStack_810;
    uStack_8c8 = uStack_7f8;
    uStack_8d0 = uStack_800;
    uStack_8c0 = uStack_7f0;
    uStack_918 = uStack_848;
    uStack_920 = uStack_850;
    uStack_908 = uStack_838;
    uStack_910 = uStack_840;
    uStack_8e8 = uStack_818;
    uStack_8f0 = uStack_820;
    uStack_8f8 = uStack_828;
    uStack_900 = uStack_830;
    uStack_958 = uStack_888;
    uStack_960 = uStack_890;
    uStack_948 = uStack_878;
    uStack_950 = uStack_880;
    uStack_928 = uStack_858;
    uStack_930 = uStack_860;
    uStack_938 = uStack_868;
    uStack_940 = uStack_870;
    func_0x00010207f418(&uStack_960,auStack_a08);
    puVar9 = &uStack_480;
    FUN_1047b0328();
  }
  *(undefined8 **)(unaff_x20 + _DAT_1138152e8) = puVar9;
  bVar3 = *(byte *)((long)puVar4 + (long)*(int *)(lVar7 + 0xc0));
  if (bVar3 == 2) {
    plVar10 = (long *)0x0;
  }
  else {
    lVar12 = 0;
    FUN_1047b3450();
    lVar6 = lVar12;
    _objc_allocWithZone();
    *(byte *)(lVar6 + _DAT_11308ef18) = bVar3 & 1;
    plVar10 = &lStack_8b0;
    lStack_8b0 = lVar6;
    lStack_8a8 = lVar12;
    _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_1138152f0) = plVar10;
  *(undefined8 *)(unaff_x20 + _DAT_1138152f8) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xc4));
  *(undefined8 *)(unaff_x20 + _DAT_113815300) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 200));
  *(undefined1 *)(unaff_x20 + _DAT_113815308) =
       *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar7 + 0xcc));
  uVar24 = 0;
  FUN_1047c0984();
  puVar16 = auStack_8a0;
  uStack_898 = uVar24;
  _objc_msgSendSuper2(puVar16,PTR_s_init_1125d9248);
  func_0x0001047c0a44(puVar4,&SUB_100b91d00);
  return puVar16;
}



/* Entry: 1047ba488; end: 1047ba4d7;  */

undefined8 FUN_1047ba488(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1047ba4d8; end: 1047ba50b; -[SCAdResponse hash] */

undefined8 FUN_1047ba4d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047ba50c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047ba50c; end: 1047bafb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ba50c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  lVar8 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar5 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  __ss6HasherVABycfC(auStack_a8);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f108) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_11308f108);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f110) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_11308f110);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f118) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_11308f118);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f120) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_11308f120);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f128));
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11308f130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar6,((undefined8 *)(unaff_x20 + _DAT_11308f130))[1]);
  uVar1 = uVar6;
  func_0x00010bfde980();
  _objc_release(uVar6);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f138))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f138);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f140))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f140);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f148))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f148);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f150))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f150);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f158))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f158);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  func_0x0001047c0a80(unaff_x20 + _DAT_1138151e8,lVar9,0x112d3bc20,&UNK_10d904ef0);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar2 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar3 = lVar9;
  (*pcVar11)(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001047c0ac8(lVar9,0x112d3bc20,&UNK_10d904ef0);
    lVar9 = 0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar10 + 8))(lVar9,lVar2);
    lVar9 = lVar3;
    func_0x00010bfde980(lVar3);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  func_0x0001047c0a80(unaff_x20 + _DAT_1138151f0,lVar8,0x112d3bc20,&UNK_10d904ef0);
  lVar9 = lVar8;
  (*pcVar11)(lVar8,1,lVar2);
  if ((int)lVar9 == 1) {
    func_0x0001047c0ac8(lVar8,0x112d3bc20,&UNK_10d904ef0);
    lVar8 = 0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar10 + 8))(lVar8,lVar2);
    lVar8 = lVar9;
    func_0x00010bfde980(lVar9);
    _objc_release(lVar9);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  func_0x0001047c0a80(unaff_x20 + _DAT_1138151f8,puVar5,0x112d3bc20,&UNK_10d904ef0);
  puVar4 = puVar5;
  (*pcVar11)(puVar5,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x0001047c0ac8(puVar5,0x112d3bc20,&UNK_10d904ef0);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar10 + 8))(puVar5,lVar2);
    puVar5 = puVar4;
    func_0x00010bfde980(puVar4);
    _objc_release(puVar4);
  }
  __ss6HasherV8_combineyySuF(puVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815200));
  lVar8 = *(long *)(unaff_x20 + _DAT_113815208);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    uVar6 = 0;
    FUN_1047c6864(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,uVar6);
    lVar9 = lVar8;
    func_0x00010bfde980();
    _objc_release(lVar8);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  lVar8 = *(long *)(unaff_x20 + _DAT_113815210);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,PTR___sSSN_11034da80);
    lVar9 = lVar8;
    func_0x00010bfde980();
    _objc_release(lVar8);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  lVar8 = *(long *)(unaff_x20 + _DAT_113815218);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,PTR___sSSN_11034da80);
    lVar9 = lVar8;
    func_0x00010bfde980();
    _objc_release(lVar8);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  lVar8 = *(long *)(unaff_x20 + _DAT_113815220);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,PTR___sSSN_11034da80);
    lVar9 = lVar8;
    func_0x00010bfde980();
    _objc_release(lVar8);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  if (*(long *)(unaff_x20 + _DAT_113815228) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1048286c0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar9);
  }
  uVar7 = (ulong)*(byte *)(unaff_x20 + _DAT_113815230);
  __ss6HasherV8_combineyys5UInt8VF(uVar7);
  if (*(long *)(unaff_x20 + _DAT_113815238) == 0) {
    uVar7 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10481b6bc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(long *)(unaff_x20 + _DAT_113815240) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10481c3d4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113815248))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815248);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar6 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar6);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815250));
  if (((undefined8 *)(unaff_x20 + _DAT_113815258))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815258);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_113815260))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815260);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_113815268))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815268);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113815270))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815270);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar6 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (*(long *)(unaff_x20 + _DAT_113815278) == 0) {
    uVar6 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104843f48();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  if (*(long *)(unaff_x20 + _DAT_113815280) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047b0560();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  fVar12 = 0.0;
  if (*(float *)(unaff_x20 + _DAT_113815288) != 0.0) {
    fVar12 = *(float *)(unaff_x20 + _DAT_113815288);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar12);
  uVar7 = (ulong)*(byte *)(unaff_x20 + _DAT_113815290);
  __ss6HasherV8_combineyys5UInt8VF(uVar7);
  if (*(long *)(unaff_x20 + _DAT_113815298) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047b483c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138152a0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138152a8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138152b0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138152b8));
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1138152c0);
  __ss6HasherV8_combineyySuF(uVar6);
  if (*(long *)(unaff_x20 + _DAT_1138152c8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104814b4c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138152d0));
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1138152d8);
  __ss6HasherV8_combineyySuF(uVar6);
  if (*(long *)(unaff_x20 + _DAT_1138152e0) == 0) {
    uVar6 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047b0560();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  if (*(long *)(unaff_x20 + _DAT_1138152e8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047b0560();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_1138152f0);
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_f0);
    uVar7 = (ulong)*(byte *)(lVar8 + _DAT_11308ef18);
    __ss6HasherV8_combineyys5UInt8VF(uVar7);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138152f8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815300));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815308));
  __ss6HasherV8finalizeSiyF();
  return;
}


