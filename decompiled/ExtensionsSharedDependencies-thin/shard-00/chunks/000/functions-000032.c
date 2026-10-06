/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0009b3a0; end: 0009b3b7;  */

void FUN_0009b3a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_00842b70,&UNK_00842b78);
  lStack_b0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_b8 = (long)&lStack_c0 - extraout_x8;
  __sSqMa(0,lVar3);
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = ((long)&lStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar11 - extraout_x12;
  lVar5 = 0;
  func_0x00098db8(0,uVar1,uVar2);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar12 - extraout_x12_00;
  _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
  plVar6 = (long *)(lVar7 + 0x10);
  _swift_weakLoadStrong();
  if (plVar6 != (long *)0x0) {
    lVar13 = *(long *)(*plVar6 + 0x80);
    lStack_c0 = lVar12;
    _swift_beginAccess((long)plVar6 + lVar13,auStack_90,0,0);
    (**(code **)(lVar9 + 0x10))(lVar14,(long)plVar6 + lVar13,lVar5);
    lVar7 = lVar14;
    (**(code **)(lVar15 + 0x30))(lVar14,2,lVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 0x20))(lVar10,lVar14,lVar4);
      (**(code **)(lVar15 + 0x10))(lVar11,lVar10,lVar4);
      lVar12 = lStack_b0;
      lVar14 = lVar11;
      (**(code **)(lStack_b0 + 0x30))(lVar11,1,lVar3);
      lVar7 = lStack_b8;
      if ((int)lVar14 != 1) {
        (**(code **)(lVar12 + 0x20))(lStack_b8,lVar11,lVar3);
        FUN_00098834(lVar7);
        _swift_release(plVar6);
        (**(code **)(lVar12 + 8))(lVar7,lVar3);
        (**(code **)(lVar15 + 8))(lVar10,lVar4);
        return;
      }
      pcVar8 = *(code **)(lVar15 + 8);
      (*pcVar8)(lVar10,lVar4);
      (*pcVar8)(lVar11,lVar4);
      lVar3 = lStack_c0;
      (**(code **)(lVar15 + 0x38))(lStack_c0,1,2,lVar4);
      _swift_beginAccess((long)plVar6 + lVar13,auStack_a8,0x21,0);
      (**(code **)(lVar9 + 0x28))((long)plVar6 + lVar13,lVar3,lVar5);
      _swift_endAccess(auStack_a8);
    }
    _swift_release(plVar6);
  }
  return;
}



/* Entry: 0009b3b8; end: 0009b457;  */

void FUN_0009b3b8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0009b458; end: 0009b467;  */

void FUN_0009b458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 0009b468; end: 0009b4bf;  */

void FUN_0009b468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_2);
  return;
}



/* Entry: 0009b4c0; end: 0009b5b3;  */

undefined1  [16] FUN_0009b4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  
  plVar7 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_0009bcf0(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar8 = unaff_x20[3];
  lVar5 = unaff_x20[4];
  _swift_unknownObjectRetain(lVar5);
  uVar2 = param_2;
  FUN_0009c164(lVar8,param_2,lVar5);
  _swift_release(param_2);
  _swift_unknownObjectRelease(lVar5);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar3 = &DAT_007d5548;
  uStack_58 = uVar2;
  _swift_getWitnessTable(&DAT_007d5548,uVar1);
  puVar4 = &uStack_58;
  (*pcVar6)(puVar4,uVar1,puVar3);
  _swift_release(uVar2);
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 0009b5b4; end: 0009b5bb;  */

void FUN_0009b5b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0009b5bc; end: 0009b5ef;  */

void FUN_0009b5bc(long param_1)

{
  FUN_00092370();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 0009b5f0; end: 0009b5ff;  */

void FUN_0009b5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842338);
  return;
}



/* Entry: 0009b600; end: 0009b63f;  */

void FUN_0009b600(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeb838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d5380;
  _swift_getWitnessTable(&UNK_007d5380,&UNK_009a7508);
  puRam0000000000aeb838 = puVar1;
  return;
}



/* Entry: 0009b640; end: 0009b72f;  */

uint FUN_0009b640(uint *param_1,int param_2)

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



/* Entry: 0009b730; end: 0009b77b;  */

void FUN_0009b730(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_18 = &UNK_007d5478;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 0009b77c; end: 0009b77f;  */

void FUN_0009b77c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0009b780; end: 0009b827;  */

void FUN_0009b780(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = &UNK_007d54d8;
    puStack_48 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_40 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_30 = &UNK_007d54f0;
    puStack_28 = &UNK_007d5508;
    puStack_38 = puStack_48;
    _swift_initClassMetadata2(param_1,0,7,&lStack_58,param_1 + 0x58);
  }
  return;
}



/* Entry: 0009b828; end: 0009ba4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009b828(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar10 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_00aeb8e0;
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)((long)unaff_x20 + _DAT_00aeb8e0);
  if (lVar8 != 0) {
    _swift_retain(lVar8);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar8);
  }
  puVar3 = &UNK_009a7718;
  _swift_allocObject(&UNK_009a7718,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &UNK_009a7740;
  _swift_allocObject(&UNK_009a7740,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x50);
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_70 = FUN_0009bf5c;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_0001d1e4;
  puStack_78 = &UNK_009a7758;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
  ppuVar6 = ppuVar5;
  FUN_00088e34();
  _swift_retain(puVar3);
  uVar9 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar11 = uVar9;
  func_0x00088e78();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&puStack_98,uVar9,uVar11,lVar2,ppuVar6);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC5flags5blockAcA0abC5FlagsV_yyXBtcfc(puVar7,ppuVar5);
  puVar4 = puStack_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  uVar9 = *(undefined8 *)((long)unaff_x20 + lVar1);
  *(undefined1 **)((long)unaff_x20 + lVar1) = puVar7;
  _swift_retain(puVar7);
  _swift_release(uVar9);
  uVar9 = *(undefined8 *)((long)unaff_x20 + _DAT_00aeb8c0);
  _swift_getObjectType(uVar9);
  uVar11 = *(undefined8 *)((long)unaff_x20 + _DAT_00aeb8d0);
  _swift_retain(puVar7);
  FUN_000a4e0c(uVar11,0x9bf80,puVar7,uVar9);
  _swift_release_n(puVar7,2);
  return;
}



/* Entry: 0009ba4c; end: 0009baa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009ba4c(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF
            (*(undefined8 *)(unaff_x20 + _DAT_00aeb8d8),FUN_0009bebc,auStack_50,
             PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0009baa8; end: 0009bb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009baa8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = *(long *)(*param_1 + 0x50);
  plVar1 = param_1;
  func_0x0009bed4();
  lVar2 = 0;
  __ss6ResultOMa(0,lVar3,&UNK_009a7508,plVar1);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  if ((*(byte *)((long)param_1 + _DAT_00aeb8e8) & 1) == 0) {
    FUN_0009b828();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar4,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(puVar4,lVar2,0);
    FUN_000a08b0(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 0009bb9c; end: 0009bbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009bb9c(void)

{
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_0009bd88);
  return;
}



/* Entry: 0009bbf0; end: 0009bc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009bbf0(long param_1)

{
  long lVar1;
  
  lVar1 = _DAT_00aeb8e8;
  if ((*(byte *)(param_1 + _DAT_00aeb8e8) & 1) == 0) {
    func_0x0009be64();
    FUN_000a08f8();
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 0009bc4c; end: 0009bccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009bc4c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b648c8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aeb8c0));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeb8c8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeb8d8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeb8e0));
  return;
}



/* Entry: 0009bccc; end: 0009bcef;  */

void FUN_0009bccc(void)

{
  FUN_0009bc4c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009bcf0; end: 0009bcfb;  */

void FUN_0009bcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008423a4);
  return;
}



/* Entry: 0009bcfc; end: 0009bd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009bcfc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648c8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009bd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 0009bd48; end: 0009bd87;  */

void FUN_0009bd48(void)

{
  FUN_0009ba4c();
  return;
}



/* Entry: 0009bd88; end: 0009bd9f;  */

void FUN_0009bd88(void)

{
  FUN_0009bbf0();
  return;
}



/* Entry: 0009bda0; end: 0009bdf3;  */

void FUN_0009bda0(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_0009bdf4();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 0009bdf4; end: 0009bebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009bdf4(void)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + _DAT_00aeb8c0));
  func_0x000a4d40();
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_0009c07c);
  return;
}



/* Entry: 0009bebc; end: 0009bf5b;  */

void FUN_0009bebc(void)

{
  long unaff_x20;
  
  FUN_0009baa8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 0009bf5c; end: 0009bf83;  */

void FUN_0009bf5c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_0009bdf4();
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 0009bf84; end: 0009c07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009bf84(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(*param_1 + 0x50);
  plVar2 = param_1;
  func_0x0009bed4();
  lVar3 = 0;
  __ss6ResultOMa(0,uVar4,&UNK_009a7508,plVar2);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_00aeb8e8;
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  if ((*(byte *)((long)param_1 + _DAT_00aeb8e8) & 1) == 0) {
    _swift_storeEnumTagMultiPayload(puVar5,lVar3,1);
    FUN_000a08b0(puVar5);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    func_0x0009be64();
    FUN_000a08f8();
    *(undefined1 *)((long)param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 0009c07c; end: 0009c093;  */

void FUN_0009c07c(void)

{
  FUN_0009bf84();
  return;
}



/* Entry: 0009c094; end: 0009c163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b648c8);
  lVar1 = _DAT_00aeb8d8;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb8e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_00aeb8e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb8c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb8d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb8c0) = param_3;
  _swift_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  FUN_0009b828();
  return;
}



/* Entry: 0009c164; end: 0009c1bb;  */

void FUN_0009c164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_0009c094(param_1,param_2,param_3);
  return;
}



/* Entry: 0009c1bc; end: 0009c273;  */

undefined1  [16] FUN_0009c1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  code *pcVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  
  plVar5 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_0009c9f0(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  func_0x0009c388();
  pcVar4 = *(code **)(*plVar5 + 0x58);
  puVar2 = &DAT_007d55f0;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d55f0,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 0009c274; end: 0009c2ab;  */

void FUN_0009c274(undefined8 param_1)

{
  _swift_allocObject();
  FUN_00092368(param_1);
  return;
}



/* Entry: 0009c2ac; end: 0009c2c7;  */

void FUN_0009c2ac(undefined8 param_1)

{
  FUN_00092370();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x18,7);
  return;
}



/* Entry: 0009c2c8; end: 0009c2d7;  */

void FUN_0009c2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008423f4);
  return;
}



/* Entry: 0009c2d8; end: 0009c30b;  */

void FUN_0009c2d8(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 0009c30c; end: 0009c30f;  */

void FUN_0009c30c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0009c310; end: 0009c3d7;  */

void FUN_0009c310(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_0099ae88 + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&lStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 0009c3d8; end: 0009c66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c3d8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar4;
  
  lVar10 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_98 + 0x40));
  lVar11 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar10 + 0x50);
  lVar3 = *(long *)(lVar14 + -8);
  lVar10 = *(long *)(lVar3 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar12 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  _objc_opt_self();
  iVar1 = (int)puVar4;
  func_0x00787a60();
  if (iVar1 == 0) {
    uVar5 = 0;
    FUN_00088dc4();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &UNK_009a7928;
    uStack_b0 = uVar5;
    _swift_allocObject(&UNK_009a7928,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    (**(code **)(lVar3 + 0x10))(lVar15,param_1,lVar14);
    uVar9 = (ulong)*(byte *)(lVar3 + 0x50);
    uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    puVar6 = &UNK_009a79a0;
    _swift_allocObject(&UNK_009a79a0,uVar13 + lVar10,uVar9 | 7);
    *(long *)(puVar6 + 0x10) = lVar14;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    (**(code **)(lVar3 + 0x20))(puVar6 + uVar13,lVar15,lVar14);
    pcStack_70 = FUN_0009cb54;
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_0001d1e4;
    puStack_78 = &UNK_009a79b8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    __Block_copy(ppuVar7);
    puVar4 = puStack_68;
    _swift_release(puStack_68);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puStack_90 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00088e34();
    uVar5 = 0xae97a8;
    func_0x000115a8(0xae97a8,&UNK_007d4680);
    uVar8 = uVar5;
    func_0x00088e78();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&puStack_90,uVar5,uVar8,lVar2,puVar4);
    uVar5 = uStack_b0;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(uVar5);
    (**(code **)(lStack_98 + 8))(lVar11,lVar2);
    (**(code **)(lStack_a8 + 8))(lVar12,lStack_a0);
  }
  else {
    FUN_000a08b0(param_1);
  }
  return;
}



/* Entry: 0009c66c; end: 0009c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c66c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_00aeba20);
    _swift_retain(uVar1);
    _swift_release(param_1);
    FUN_000a08b0(param_2);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 0009c6ec; end: 0009c90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c6ec(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar4;
  
  lVar12 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  _objc_opt_self();
  iVar1 = (int)puVar4;
  func_0x00787a60();
  if (iVar1 == 0) {
    uVar5 = 0;
    FUN_00088dc4(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &UNK_009a7928;
    _swift_allocObject(&UNK_009a7928,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar6 = &UNK_009a7950;
    _swift_allocObject(&UNK_009a7950,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x50);
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_70 = FUN_0009cad0;
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_0001d1e4;
    puStack_78 = &UNK_009a7968;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    __Block_copy(ppuVar7);
    puVar4 = puStack_68;
    _swift_release(puStack_68);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    puStack_90 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00088e34();
    uVar8 = 0xae97a8;
    func_0x000115a8(0xae97a8,&UNK_007d4680);
    uVar9 = uVar8;
    func_0x00088e78();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_90,uVar8,uVar9,lVar2,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar10,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(uVar5);
    (**(code **)(lVar13 + 8))(lVar10,lVar2);
    (**(code **)(lVar14 + 8))(lVar11,lVar3);
  }
  else {
    FUN_000a08f8();
  }
  return;
}



/* Entry: 0009c90c; end: 0009c9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c90c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_00aeba20);
    _swift_retain(uVar1);
    _swift_release(param_1);
    FUN_000a08f8();
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 0009c9cc; end: 0009c9ef;  */

void FUN_0009c9cc(void)

{
  func_0x0009c97c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009c9f0; end: 0009c9fb;  */

void FUN_0009c9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842450);
  return;
}



/* Entry: 0009c9fc; end: 0009ca47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c9fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648d0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009ca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 0009ca48; end: 0009ca87;  */

void FUN_0009ca48(void)

{
  FUN_0009c3d8();
  return;
}



/* Entry: 0009ca88; end: 0009cacf;  */

void FUN_0009ca88(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009cad0; end: 0009caf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009cad0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_00aeba20);
    _swift_retain(uVar2);
    _swift_release(lVar1);
    FUN_000a08f8();
    _swift_release(uVar2);
  }
  return;
}



/* Entry: 0009caf4; end: 0009cb53;  */

void FUN_0009caf4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009cb54; end: 0009cb77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009cb54(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_00aeba20);
    _swift_retain(uVar3);
    _swift_release(lVar1);
    FUN_000a08b0(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_release(uVar3);
  }
  return;
}



/* Entry: 0009cb78; end: 0009cbbf;  */

void FUN_0009cb78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_00092368(param_1);
  return;
}



/* Entry: 0009cbc0; end: 0009cc73;  */

undefined1  [16] FUN_0009cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  FUN_0009d318(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  _swift_retain(lVar1);
  _swift_retain(lVar2);
  FUN_000a0834(param_2,param_3);
  lVar3 = lVar1;
  FUN_0009d640(lVar1,lVar2,param_2);
  _swift_release(lVar1);
  _swift_release(lVar2);
  _swift_release(param_2);
  auVar4._8_8_ = &PTR_DAT_009a7b78;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 0009cc74; end: 0009cc7b;  */

void FUN_0009cc74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 0009cc7c; end: 0009ccaf;  */

void FUN_0009cc7c(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x20,7);
  return;
}



/* Entry: 0009ccb0; end: 0009ccbf;  */

void FUN_0009ccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008424a0);
  return;
}



/* Entry: 0009ccc0; end: 0009cd03;  */

void FUN_0009ccc0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 0009cd04; end: 0009cd07;  */

void FUN_0009cd04(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0009cd08; end: 0009cd93;  */

void FUN_0009cd08(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = PTR___sBoWV_0099ae88 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x58);
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  puStack_38 = puStack_48;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_007d56a8;
    _swift_initClassMetadata2(param_1,0,5,&puStack_48,param_1 + 0x60);
  }
  return;
}



/* Entry: 0009cd94; end: 0009ced3;  */

void FUN_0009cd94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  __sSqMa(0,param_4);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  plVar2 = (long *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[4];
    _swift_retain(lVar3);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(lVar3);
    lVar3 = *(long *)(param_4 + -8);
    (**(code **)(lVar3 + 0x10))(puVar4,param_1,param_4);
    (**(code **)(lVar3 + 0x38))(puVar4,0,1,param_4);
    lVar3 = *(long *)(*plVar2 + 0x78);
    _swift_beginAccess((long)plVar2 + lVar3,auStack_80,0x21,0);
    (**(code **)(lVar5 + 0x28))((long)plVar2 + lVar3,puVar4,lVar1);
    _swift_endAccess(auStack_80);
    lVar1 = plVar2[4];
    _swift_retain(lVar1);
    func_0x001d46c8();
    _swift_release(plVar2);
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 0009ced4; end: 0009cf2f;  */

void FUN_0009ced4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_0009cf30(param_1);
    _swift_release(param_2);
  }
  return;
}



/* Entry: 0009cf30; end: 0009d163;  */

void FUN_0009cf30(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lStack_98 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  lVar4 = 0;
  uStack_90 = param_1;
  _swift_getTupleTypeMetadata2(0,lStack_98,lVar1,0,0);
  lStack_88 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar1 + -8);
  puStack_a0 = auStack_b0 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)(auStack_b0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_a8 = lVar7;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar7 - extraout_x12;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar4 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar4,auStack_78,0,0);
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(lVar11,(long)unaff_x20 + lVar4,lVar5);
  func_0x001d46c8();
  (*pcVar10)(lVar7,lVar11,lVar5);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
  lVar4 = lStack_a8;
  if ((int)lVar6 == 1) {
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar11,lVar5);
    (*pcVar10)(lVar7,lVar5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lStack_a8,lVar7,lVar1);
    lVar6 = lStack_80;
    puVar3 = puStack_a0;
    iVar2 = *(int *)(lStack_80 + 0x30);
    (**(code **)(*(long *)(lStack_98 + -8) + 0x10))(puStack_a0,uStack_90);
    (**(code **)(lVar8 + 0x10))(puVar3 + iVar2,lVar4,lVar1);
    FUN_000a08b0(puVar3);
    (**(code **)(lStack_88 + 8))(puVar3,lVar6);
    (**(code **)(lVar8 + 8))(lVar4,lVar1);
    (**(code **)(lVar9 + 8))(lVar11,lVar5);
  }
  return;
}



/* Entry: 0009d164; end: 0009d1b7;  */

void FUN_0009d164(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_0009d1b8();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 0009d1b8; end: 0009d22f;  */

void FUN_0009d1b8(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    _swift_getObjectType(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    _swift_unknownObjectRetain(lVar3);
    (*pcVar5)(lVar2,lVar4);
    _swift_unknownObjectRelease(lVar3);
  }
  FUN_000a08f8();
  return;
}



/* Entry: 0009d230; end: 0009d2f3;  */

void FUN_0009d230(void)

{
  long unaff_x20;
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF
            (FUN_0009d328,*(undefined8 *)(unaff_x20 + 0x18),PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0009d2f4; end: 0009d317;  */

void FUN_0009d2f4(void)

{
  func_0x0009d27c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009d318; end: 0009d327;  */

void FUN_0009d318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0084250c);
  return;
}



/* Entry: 0009d328; end: 0009d33f;  */

void FUN_0009d328(void)

{
  FUN_0009e2fc();
  return;
}



/* Entry: 0009d340; end: 0009d63f;  */

void FUN_0009d340(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *unaff_x20;
  lVar2 = 0;
  func_0x0009e3e0();
  _swift_allocObject();
  lVar3 = 0;
  __s11SwiftSCLock4LockCMa();
  lVar12 = lVar3;
  _swift_allocObject();
  func_0x001d45e0();
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(long *)(lVar2 + 0x10) = lVar12;
  *(undefined **)(lVar2 + 0x18) = puVar8;
  unaff_x20[3] = lVar2;
  _swift_allocObject(lVar3,0x18,7);
  func_0x001d45e0();
  unaff_x20[4] = lVar3;
  lVar12 = *(long *)(lVar13 + 0x58);
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),1,1,lVar12);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  *puVar1 = 0;
  puVar1[1] = 0;
  unaff_x20[2] = param_3;
  puVar8 = &UNK_009a7ba8;
  puVar4 = puVar8;
  _swift_allocObject(&UNK_009a7ba8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &UNK_009a7bd0;
  _swift_allocObject(&UNK_009a7bd0,0x28,7);
  uVar14 = *(undefined8 *)(lVar13 + 0x50);
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(long *)(puVar5 + 0x18) = lVar12;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  _swift_retain(param_3);
  _swift_retain();
  _swift_retain(puVar4);
  pcVar6 = FUN_0009d6b4;
  puVar7 = puVar5;
  func_0x0009e7e4();
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  uVar10 = *puVar1;
  *puVar1 = pcVar6;
  puVar1[1] = puVar7;
  _swift_unknownObjectRetain(pcVar6);
  _swift_unknownObjectRelease(uVar10);
  _swift_getObjectType(pcVar6);
  lVar2 = unaff_x20[3];
  pcVar11 = *(code **)(puVar7 + 0x10);
  _swift_retain(lVar2);
  (*pcVar11)();
  _swift_release(lVar2);
  puVar7 = puVar8;
  _swift_allocObject(&UNK_009a7ba8,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  puVar5 = &UNK_009a7bf8;
  _swift_allocObject(&UNK_009a7bf8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(long *)(puVar5 + 0x18) = lVar12;
  *(undefined **)(puVar5 + 0x20) = puVar7;
  _swift_allocObject(&UNK_009a7ba8,0x18,7);
  _swift_weakInit(puVar8 + 0x10);
  _swift_retain(puVar7);
  _swift_release();
  puVar4 = &UNK_009a7c20;
  _swift_allocObject(&UNK_009a7c20,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(long *)(puVar4 + 0x18) = lVar12;
  *(undefined **)(puVar4 + 0x20) = puVar8;
  _swift_retain(puVar8);
  uVar10 = 0x9d6c0;
  puVar9 = puVar5;
  func_0x0009e974(0x9d6c0,puVar5,FUN_0009d6f0,puVar4);
  _swift_release(puVar7);
  _swift_release(puVar8);
  _swift_release(puVar5);
  _swift_release(puVar4);
  _swift_getObjectType(uVar10);
  lVar12 = unaff_x20[3];
  pcVar11 = *(code **)(puVar9 + 0x10);
  _swift_retain(lVar12);
  (*pcVar11)();
  _swift_unknownObjectRelease(pcVar6);
  _swift_unknownObjectRelease(uVar10);
  _swift_release(lVar12);
  return;
}



/* Entry: 0009d640; end: 0009d68f;  */

void FUN_0009d640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_0009d340(param_1,param_2,param_3);
  return;
}



/* Entry: 0009d690; end: 0009d6b3;  */

void FUN_0009d690(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009d6b4; end: 0009d6cb;  */

void FUN_0009d6b4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __sSqMa(0,lVar4,*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  _swift_beginAccess(lVar3 + 0x10,auStack_68,0,0);
  plVar2 = (long *)(lVar3 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[4];
    _swift_retain(lVar3);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(lVar3);
    lVar3 = *(long *)(lVar4 + -8);
    (**(code **)(lVar3 + 0x10))(puVar5,param_1,lVar4);
    (**(code **)(lVar3 + 0x38))(puVar5,0,1,lVar4);
    lVar4 = *(long *)(*plVar2 + 0x78);
    _swift_beginAccess((long)plVar2 + lVar4,auStack_80,0x21,0);
    (**(code **)(lVar6 + 0x28))((long)plVar2 + lVar4,puVar5,lVar1);
    _swift_endAccess(auStack_80);
    lVar4 = plVar2[4];
    _swift_retain(lVar4);
    func_0x001d46c8();
    _swift_release(plVar2);
    _swift_release(lVar4);
  }
  return;
}



/* Entry: 0009d6cc; end: 0009d6ef;  */

void FUN_0009d6cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009d6f0; end: 0009d773;  */

void FUN_0009d6f0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_0009d1b8();
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 0009d774; end: 0009d7c7;  */

void FUN_0009d774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  
  lStack_50 = param_1;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF
            (*(undefined8 *)(param_1 + 0x10),param_4,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0009d7c8; end: 0009d827;  */

void FUN_0009d7c8(void)

{
  long unaff_x20;
  
  FUN_0009dae0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0009d828; end: 0009d85f;  */

void FUN_0009d828(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_50 = param_1;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_0009e454,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0009d860; end: 0009d89b;  */

void FUN_0009d860(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0009d89c; end: 0009d8a7;  */

void FUN_0009d89c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0009d8a8; end: 0009d91b;  */

void FUN_0009d8a8(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar3);
  (*pcVar2)();
  FUN_00013a64(pcVar2,uVar3);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar3);
    return;
  }
  return;
}



/* Entry: 0009d91c; end: 0009d95f;  */

void FUN_0009d91c(void)

{
  _objc_opt_self(&PTR_PTR_00aebc10);
  return;
}



/* Entry: 0009d960; end: 0009d9d3;  */

void FUN_0009d960(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar3);
  (*pcVar2)();
  FUN_00013a64(pcVar2,uVar3);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar3);
    return;
  }
  return;
}



/* Entry: 0009d9d4; end: 0009da73;  */

long FUN_0009d9d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  _swift_allocObject();
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 0009da74; end: 0009dadf;  */

void FUN_0009da74(void)

{
  long unaff_x20;
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(0x9de6c);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009dae0; end: 0009dbc7;  */

void FUN_0009dae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_68,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_1 + 0x18) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_0009dc94(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + 0x18) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_0009dc94(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(ulong *)(param_1 + 0x18) = uVar4;
  _swift_endAccess(auStack_68);
  _swift_unknownObjectRetain(param_2);
  return;
}



/* Entry: 0009dbc8; end: 0009dc93;  */

void FUN_0009dbc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_68,1,0);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar4);
    plVar6 = (long *)(lVar4 + 0x28);
    do {
      lVar1 = plVar6[-1];
      lVar2 = *plVar6;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar7 = *(code **)(lVar2 + 8);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar7)(lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar6 = plVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(undefined **)(param_1 + 0x18) = PTR___swiftEmptyArrayStorage_0099b8f0;
  _swift_bridgeObjectRelease(lVar4);
  return;
}



/* Entry: 0009dc94; end: 0009ddc3;  */

undefined * FUN_0009dc94(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x9ddc4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0xaebd38;
    func_0x000115a8(0xaebd38,&UNK_007d5780);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0xaeab08;
    func_0x000115a8(0xaeab08,&UNK_007d4d30);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 0009ddc4; end: 0009de17;  */

void FUN_0009ddc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = param_2;
  uStack_48 = param_1;
  uStack_40 = param_4;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(0x9de50,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0009de18; end: 0009de7f;  */

void FUN_0009de18(void)

{
  FUN_0009dbc8();
  return;
}



/* Entry: 0009de80; end: 0009df8b;  */

void FUN_0009de80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 0009df8c; end: 0009dfb7;  */

void FUN_0009df8c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009dfb8; end: 0009dfbb;  */

void FUN_0009dfb8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  
  plVar5 = (long *)(unaff_x20 + 0x20);
  lVar2 = *plVar5;
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x28);
    lVar1 = lVar2;
    _swift_getObjectType(lVar2);
    pcVar6 = *(code **)(lVar3 + 8);
    _swift_unknownObjectRetain(lVar2);
    (*pcVar6)(lVar1,lVar3);
    _swift_unknownObjectRelease(lVar2);
  }
  plVar4 = (long *)(unaff_x20 + 0x10);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    lVar1 = lVar2;
    _swift_getObjectType(lVar2);
    pcVar6 = *(code **)(lVar3 + 8);
    _swift_unknownObjectRetain(lVar2);
    (*pcVar6)(lVar1,lVar3);
    _swift_unknownObjectRelease(lVar2);
  }
  lVar2 = *plVar5;
  *plVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  _swift_unknownObjectRelease(lVar2);
  lVar2 = *plVar4;
  *plVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar2);
  return;
}



/* Entry: 0009dfbc; end: 0009e003;  */

void FUN_0009dfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  _swift_allocObject(param_4,0x30,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_6;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  *(undefined8 *)(param_4 + 0x28) = param_3;
  return;
}



/* Entry: 0009e004; end: 0009e05f;  */

void FUN_0009e004(void)

{
  _objc_opt_self(&PTR_PTR_00aebd80);
  return;
}



/* Entry: 0009e060; end: 0009e0c3;  */

void FUN_0009e060(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  __sScT6cancelyyF();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 0009e0c4; end: 0009e0e3;  */

void FUN_0009e0c4(void)

{
  FUN_0009e060();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009e0e4; end: 0009e0ff;  */

void FUN_0009e0e4(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x007788d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_0099bf48)
            (unaff_x20[2],*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),
             *(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Entry: 0009e100; end: 0009e143;  */

void FUN_0009e100(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x68);
  return;
}



/* Entry: 0009e144; end: 0009e14f;  */

void FUN_0009e144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_0084266c);
  return;
}



/* Entry: 0009e150; end: 0009e1a7;  */

long FUN_0009e150(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  _swift_allocObject();
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}


