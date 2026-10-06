/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013ce81c; end: 1013ce927;  */

/* WARNING: Possible PIC construction at 0x0001013ce874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ce88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ce8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ce90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ce8c0) */
/* WARNING: Removing unreachable block (ram,0x0001013ce890) */
/* WARNING: Removing unreachable block (ram,0x0001013ce878) */
/* WARNING: Removing unreachable block (ram,0x0001013ce87c) */
/* WARNING: Removing unreachable block (ram,0x0001013ce910) */
/* WARNING: Removing unreachable block (ram,0x0001013ce8e0) */

void FUN_1013ce81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c3ee64();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4d0fc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c40cc8();
      func_0x000107c61180();
      param_1 = lVar1;
      goto code_r0x000107c61170;
    }
    lVar1 = param_1;
    func_0x000107c50854();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5bd00();
      param_1 = lVar1;
      goto code_r0x000107c61170;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_3,param_2,puVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013ce928; end: 1013ce96f;  */

void FUN_1013ce928(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1013ce970; end: 1013ce9a3; -[_TtC25RevShareBillboardProvider25RevShareBillboardProvider eligibleWithRequestor:campaignName:] */

void FUN_1013ce970(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013ce9c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013ce9a4; end: 1013ce9c3;  */

void FUN_1013ce9a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127cfe60);
  return;
}



/* Entry: 1013ce9c4; end: 1013ceccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013ce9c4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7ab38);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 == 0) {
LAB_1013cec00:
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    return puVar7;
  }
  uVar9 = 0x800000010ef3c2a0;
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    goto LAB_1013cec00;
  }
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112d7ab30);
  uVar4 = uVar10;
  func_0x000107c5da30();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar5 != 0) {
    uVar4 = uVar5;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5faec();
      uVar5 = uVar5 & 0xffffffffffff;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar5 = uVar9 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        func_0x000107c4f3e4();
        func_0x000107c61180();
        uVar5 = uVar10;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar10);
        if (uVar5 != 0) {
          puVar8 = PTR_PTR_1126ae560;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c6142c(uVar9);
          uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7ab40);
          func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112d7ab40))[1]);
          puVar7 = &UNK_1103aeb80;
          func_0x000107c613fc(&UNK_1103aeb80,0x18,7);
          *(undefined **)(puVar7 + 0x10) = puVar8;
          pcStack_60 = FUN_1013cecd0;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          pcStack_70 = FUN_1013ce928;
          puStack_68 = &UNK_1103aeb98;
          puStack_58 = puVar7;
          func_0x000107c60bc4(&puStack_80);
          puVar7 = puStack_58;
          func_0x000107c61174(puVar8);
          func_0x000107c61574(puVar7);
          func_0x000107c4468c(uVar5);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar2);
          puVar7 = puVar8;
          func_0x000107c43bf4(puVar8);
          func_0x000107c61180();
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(uVar5);
          goto LAB_1013cecac;
        }
      }
      func_0x000107c6142c(uVar9);
      func_0x000107c61170(uVar4);
    }
  }
  puVar7 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar7);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
LAB_1013cecac:
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 1013cecd0; end: 1013ced03;  */

void FUN_1013cecd0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1103aebd0;
  func_0x000107c613fc(&UNK_1103aebd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  uStack_40 = 0x1013cecf4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100f3eca4;
  puStack_48 = &UNK_1103aebe8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5e06c(param_1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013ced04; end: 1013cedbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013ced04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = 0x38;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  uVar3 = *(undefined8 *)(param_2 + _DAT_113091ad8);
  func_0x000107c61174(param_1);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  return unaff_x20;
}



/* Entry: 1013cedbc; end: 1013cee8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cedbc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar8 = &lStack_50;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = 0;
  FUN_1013ce9a4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112d7ab30) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112d7ab38) = uVar9;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d7ab40);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_50,puVar5);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar9);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar8);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 1013cee8c; end: 1013ceec7;  */

void FUN_1013cee8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013ceec8; end: 1013ceee7;  */

void FUN_1013ceec8(void)

{
  FUN_1013cedbc();
  return;
}



/* Entry: 1013ceee8; end: 1013ceeef;  */

undefined8 FUN_1013ceee8(void)

{
  return 0;
}



/* Entry: 1013ceef0; end: 1013cef0f;  */

void FUN_1013ceef0(void)

{
  func_0x000107c61168(&PTR_PTR_112d7abb0);
  return;
}



/* Entry: 1013cef10; end: 1013cef1b; -[SCRevShareBillboardProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ac28;
  func_0x000107c61428(param_1 + _DAT_112d7ac28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cef1c; end: 1013cef27; -[SCRevShareBillboardProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ac28;
  func_0x000107c61428(param_1 + _DAT_112d7ac28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cef28; end: 1013cef33; -[SCRevShareBillboardProviderEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ac30;
  func_0x000107c61428(param_1 + _DAT_112d7ac30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cef34; end: 1013cef3f; -[SCRevShareBillboardProviderEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ac30;
  func_0x000107c61428(param_1 + _DAT_112d7ac30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cef40; end: 1013cef4b; -[SCRevShareBillboardProviderEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ac38;
  func_0x000107c61428(param_1 + _DAT_112d7ac38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cef4c; end: 1013cef57; -[SCRevShareBillboardProviderEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ac38;
  func_0x000107c61428(param_1 + _DAT_112d7ac38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cef58; end: 1013cef63; -[SCRevShareBillboardProviderEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cef58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ac40;
  func_0x000107c61428(param_1 + _DAT_112d7ac40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cef64; end: 1013cefa7;  */

void FUN_1013cef64(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cefa8; end: 1013cefb3; -[SCRevShareBillboardProviderEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cefa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ac40;
  func_0x000107c61428(param_1 + _DAT_112d7ac40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cefb4; end: 1013cf007;  */

void FUN_1013cefb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cf008; end: 1013cf1d3;  */

/* WARNING: Possible PIC construction at 0x0001013cf108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cf128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cf138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cf1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cf198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cf1ac) */
/* WARNING: Removing unreachable block (ram,0x0001013cf13c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001013cf12c) */
/* WARNING: Removing unreachable block (ram,0x0001013cf10c) */
/* WARNING: Removing unreachable block (ram,0x0001013cf19c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cf008(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5da74();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5b398();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_1013ceef0();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        lVar4 = *(long *)(lVar2 + _DAT_113091ad8);
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        func_0x000107c5d984(lVar4);
        func_0x000107c61180();
        func_0x000107c5faec();
        lVar1 = lVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1013cf1d4; end: 1013cf1fb; -[SCRevShareBillboardProviderEntryPoint begin] */

void FUN_1013cf1d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013cf008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013cf1fc; end: 1013cf23f; -[SCRevShareBillboardProviderEntryPoint end] */

void FUN_1013cf1fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cf240; end: 1013cf4bb;  */

void FUN_1013cf240(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53414();
        }
        else {
          uVar2 = 0x536f725070616e73;
          if (((param_2 != 0x536f725070616e73) || (param_3 != -0x108c9a9c96898d9b)) &&
             (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "RevShareBillboardProvider/SCRevShareBillboardProviderEntryPoint.swift"
                                ,0x45,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cf4bc);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5943c();
        }
        goto LAB_1013cf2cc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3f8();
  }
LAB_1013cf2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013cf4bc; end: 1013cf567; -[SCRevShareBillboardProviderEntryPoint setValue:forIvarName:] */

void FUN_1013cf4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1013cf240(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013cf568; end: 1013cf603; -[SCRevShareBillboardProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cf568(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7ac28,0);
  func_0x000107c61614(param_1 + _DAT_112d7ac30,0);
  func_0x000107c61614(param_1 + _DAT_112d7ac38,0);
  func_0x000107c61614(param_1 + _DAT_112d7ac40,0);
  *(undefined8 *)(param_1 + _DAT_112d7ac48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cf604; end: 1013cf637;  */

void FUN_1013cf604(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013cf638; end: 1013cf69f; -[SCRevShareBillboardProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cf638(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7ac28);
  func_0x000107c61610(param_1 + _DAT_112d7ac30);
  func_0x000107c61610(param_1 + _DAT_112d7ac38);
  func_0x000107c61610(param_1 + _DAT_112d7ac40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7ac48));
  return;
}



/* Entry: 1013cf6a0; end: 1013cf6bf;  */

void FUN_1013cf6a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127cff30);
  return;
}



/* Entry: 1013cf6c0; end: 1013cf723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cf6c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7ac78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7ac80) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cf724; end: 1013cf783; -[_TtC51ForegroundCrashRecoveryNotificationProcessingPlugin51ForegroundCrashRecoveryNotificationProcessingPlugin init] */

void FUN_1013cf724(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ForegroundCrashRecoveryNotificationProcessingPlugin.ForegroundCrashRecoveryNotificationProcessingPlugin"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cf750);
  (*pcVar1)();
}



/* Entry: 1013cf784; end: 1013cf7bb; -[_TtC51ForegroundCrashRecoveryNotificationProcessingPlugin51ForegroundCrashRecoveryNotificationProcessingPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013cf7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cf7a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cf784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7ac78));
  return;
}



/* Entry: 1013cf7bc; end: 1013cf853; -[_TtC51ForegroundCrashRecoveryNotificationProcessingPlugin51ForegroundCrashRecoveryNotificationProcessingPlugin didReceivePushNotificationRequest:backgroundFetchResultCallback:processingCallback:] */

/* WARNING: Possible PIC construction at 0x0001013cf834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cf838) */

void FUN_1013cf7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1013d0490(param_3,param_5,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013cf854; end: 1013cf89f; -[_TtC51ForegroundCrashRecoveryNotificationProcessingPlugin51ForegroundCrashRecoveryNotificationProcessingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001013cf89c) */

void FUN_1013cf854(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e12618;
  func_0x000107c61174();
  func_0x000107c5fb14();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1013cf8a0; end: 1013cfa53;  */

ulong FUN_1013cf8a0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cf984);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cf988);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b7830;
    func_0x000107c61168(PTR_PTR_1126b7830);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b7830;
    func_0x000107c61168(PTR_PTR_1126b7830);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1013d0a60(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cfa54);
  (*pcVar2)();
}



/* Entry: 1013cfa54; end: 1013cfb13;  */

/* WARNING: Removing unreachable block (ram,0x0001013cfe54) */
/* WARNING: Removing unreachable block (ram,0x0001013cfef8) */
/* WARNING: Removing unreachable block (ram,0x0001013cfca4) */

long FUN_1013cfa54(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_120 [6];
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  pcStack_40 = (code *)0x0;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  pcVar1 = pcStack_40;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  pcStack_48 = FUN_1013cfb14;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  lVar12 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c5ecc4();
  lStack_c8 = *(long *)(lVar2 + -8);
  lStack_c0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar17 = (long)&pcStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_d0 = lVar17;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar14 = (code *)(lVar17 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar13 = pcVar14 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)pcVar13 - extraout_x12_01;
  puVar4 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44228();
  func_0x000107c61180();
  lVar2 = 0;
  if (puVar4 != (undefined *)0x0) {
    pcStack_d8 = pcVar14;
    func_0x000107c5edb4(pcVar13);
    func_0x000107c61170(puVar4);
    (**(code **)(lVar16 + 0x20))(lVar15,pcVar13,lVar3);
    func_0x000107c610f8(PTR_PTR_1126b7848);
    func_0x00010006c00c(pcVar1,param_2);
    pcVar14 = (code *)0x0;
    pcVar13 = pcVar1;
    FUN_1013cfa54(pcVar1,param_2);
    func_0x00010006c090(pcVar1,param_2);
    lVar12 = lVar3;
    if (pcVar13 == (code *)0x0) {
      (**(code **)(lVar16 + 8))(lVar15);
    }
    else {
      puVar4 = PTR_PTR_1126e1968;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5374c();
      func_0x000107c57e78(puVar4);
      func_0x000107c579a0(puVar4);
      puVar5 = puVar4;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
        pcStack_f0 = pcVar13;
        puStack_e8 = puVar4;
        func_0x000107c5ee30();
        lVar2 = param_2;
        puStack_e0 = puVar6;
        func_0x000107c61170(puVar5);
        func_0x000107c5eda8(pcStack_d8);
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5edc4();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar2);
        puVar8 = puVar6;
        func_0x000107c43418();
        puVar4 = puStack_e0;
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        if (((ulong)puVar8 & 1) == 0) {
          func_0x000107c415e0();
          func_0x000107c61180();
          pcVar13 = pcStack_d8;
          puVar4 = puVar5;
          func_0x000107c5ed90();
          uStack_b8 = 0;
          puVar6 = puVar5;
          func_0x000107c409e4();
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar4);
          uVar10 = uStack_b8;
          if ((int)puVar6 == 0) {
            uVar9 = uStack_b8;
            func_0x000107c61174(uStack_b8);
            func_0x000107c5ed30(uVar10);
            func_0x000107c61170(uVar9);
            func_0x000107c61654();
            func_0x00010006c090(puStack_e0,param_2);
            func_0x000107c61170(pcStack_f0);
            func_0x000107c61170(puStack_e8);
            pcVar14 = *(code **)(lVar16 + 8);
            (*pcVar14)(pcVar13,lVar3);
            (*pcVar14)(lVar15);
            func_0x000107c614ac(uVar10);
            goto LAB_1013cfcbc;
          }
          func_0x000107c61174(uStack_b8);
          puVar4 = puStack_e0;
        }
        func_0x000107c5ee40(lVar15,0x10000001,puVar4,param_2);
        lVar2 = lStack_d0;
        func_0x000107c5ecc0(lStack_d0);
        func_0x000107c5ecb4(1);
        (**(code **)(lVar16 + 0x10))(lVar17,lVar15,lVar3);
        func_0x000107c5ed8c(lVar2);
        func_0x00010006c090(puVar4,param_2);
        func_0x000107c61170(puStack_e8);
        func_0x000107c61170(pcStack_f0);
        pcVar13 = *(code **)(lVar16 + 8);
        (*pcVar13)(lVar17,lVar3);
        (**(code **)(lStack_c8 + 8))(lVar2,lStack_c0);
        (*pcVar13)(pcStack_d8,lVar3);
        (*pcVar13)(lVar15);
        lVar2 = 1;
        goto LAB_1013cfcc0;
      }
      (**(code **)(lVar16 + 8))(lVar15);
      func_0x000107c61170(pcVar13);
      func_0x000107c61170(puVar4);
    }
LAB_1013cfcbc:
    lVar2 = 0;
  }
LAB_1013cfcc0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return lVar2;
  }
  func_0x000107c60e78();
  *(long *)(lVar15 + -0x30) = lVar15;
  *(code **)(lVar15 + -0x28) = pcVar14;
  *(code **)(lVar15 + -0x20) = pcVar13;
  *(long *)(lVar15 + -0x18) = lVar3;
  *(undefined1 ***)(lVar15 + -0x10) = &puStack_50;
  *(code **)(lVar15 + -8) = FUN_1013cffcc;
  if (lVar12 == 0) {
LAB_1013d00bc:
    lVar2 = 0;
  }
  else {
    if ((lVar2 != 0x656e6f6e) || (lVar12 != -0x1c00000000000000)) {
      uVar11 = 0;
      func_0x000107c605b8(0x656e6f6e,0xe400000000000000,lVar2,lVar12,0);
      if ((uVar11 & 1) == 0) {
        uVar11 = 0;
        if (((lVar2 == 0x756f72676b636162) && (lVar12 == -0x15ffffffffff9b92)) ||
           (func_0x000107c605b8(0x756f72676b636162,0xea0000000000646e,lVar2,lVar12,0),
           (uVar11 & 1) != 0)) {
          return 2;
        }
        uVar11 = 0;
        if (((lVar2 == 0x756f726765726f66) && (lVar12 == -0x15ffffffffff9b92)) ||
           (func_0x000107c605b8(0x756f726765726f66,0xea0000000000646e,lVar2,lVar12,0),
           (uVar11 & 1) != 0)) {
          return 3;
        }
        goto LAB_1013d00bc;
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 1013cfb14; end: 1013cffcb;  */

/* WARNING: Removing unreachable block (ram,0x0001013cfe54) */
/* WARNING: Removing unreachable block (ram,0x0001013cfef8) */
/* WARNING: Removing unreachable block (ram,0x0001013cfca4) */

long FUN_1013cfb14(code *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_e0 [6];
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  lVar11 = param_2;
  func_0x000107c5ecc4();
  lStack_88 = *(long *)(lVar1 + -8);
  lStack_80 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar16 = (long)&pcStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_90 = lVar16;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar13 = (code *)(lVar16 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar12 = pcVar13 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)pcVar12 - extraout_x12_01;
  puVar3 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44228();
  func_0x000107c61180();
  lVar1 = 0;
  if (puVar3 != (undefined *)0x0) {
    pcStack_98 = pcVar13;
    func_0x000107c5edb4(pcVar12);
    func_0x000107c61170(puVar3);
    (**(code **)(lVar15 + 0x20))(lVar14,pcVar12,lVar2);
    func_0x000107c610f8(PTR_PTR_1126b7848);
    func_0x00010006c00c(param_1,param_2);
    pcVar13 = (code *)0x0;
    pcVar12 = param_1;
    FUN_1013cfa54(param_1,param_2);
    func_0x00010006c090(param_1,param_2);
    lVar11 = lVar2;
    if (pcVar12 == (code *)0x0) {
      (**(code **)(lVar15 + 8))(lVar14);
    }
    else {
      puVar3 = PTR_PTR_1126e1968;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5374c();
      func_0x000107c57e78(puVar3);
      func_0x000107c579a0(puVar3);
      puVar4 = puVar3;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar4;
        pcStack_b0 = pcVar12;
        puStack_a8 = puVar3;
        func_0x000107c5ee30();
        lVar1 = param_2;
        puStack_a0 = puVar5;
        func_0x000107c61170(puVar4);
        func_0x000107c5eda8(pcStack_98);
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar5 = puVar4;
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5edc4();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar1);
        puVar7 = puVar5;
        func_0x000107c43418();
        puVar3 = puStack_a0;
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x000107c415e0();
          func_0x000107c61180();
          pcVar12 = pcStack_98;
          puVar3 = puVar4;
          func_0x000107c5ed90();
          uStack_78 = 0;
          puVar5 = puVar4;
          func_0x000107c409e4();
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar3);
          uVar9 = uStack_78;
          if ((int)puVar5 == 0) {
            uVar8 = uStack_78;
            func_0x000107c61174(uStack_78);
            func_0x000107c5ed30(uVar9);
            func_0x000107c61170(uVar8);
            func_0x000107c61654();
            func_0x00010006c090(puStack_a0,param_2);
            func_0x000107c61170(pcStack_b0);
            func_0x000107c61170(puStack_a8);
            pcVar13 = *(code **)(lVar15 + 8);
            (*pcVar13)(pcVar12,lVar2);
            (*pcVar13)(lVar14);
            func_0x000107c614ac(uVar9);
            goto LAB_1013cfcbc;
          }
          func_0x000107c61174(uStack_78);
          puVar3 = puStack_a0;
        }
        func_0x000107c5ee40(lVar14,0x10000001,puVar3,param_2);
        lVar1 = lStack_90;
        func_0x000107c5ecc0(lStack_90);
        func_0x000107c5ecb4(1);
        (**(code **)(lVar15 + 0x10))(lVar16,lVar14,lVar2);
        func_0x000107c5ed8c(lVar1);
        func_0x00010006c090(puVar3,param_2);
        func_0x000107c61170(puStack_a8);
        func_0x000107c61170(pcStack_b0);
        pcVar12 = *(code **)(lVar15 + 8);
        (*pcVar12)(lVar16,lVar2);
        (**(code **)(lStack_88 + 8))(lVar1,lStack_80);
        (*pcVar12)(pcStack_98,lVar2);
        (*pcVar12)(lVar14);
        lVar1 = 1;
        goto LAB_1013cfcc0;
      }
      (**(code **)(lVar15 + 8))(lVar14);
      func_0x000107c61170(pcVar12);
      func_0x000107c61170(puVar3);
    }
LAB_1013cfcbc:
    lVar1 = 0;
  }
LAB_1013cfcc0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  func_0x000107c60e78();
  *(long *)(lVar14 + -0x30) = lVar14;
  *(code **)(lVar14 + -0x28) = pcVar13;
  *(code **)(lVar14 + -0x20) = pcVar12;
  *(long *)(lVar14 + -0x18) = lVar2;
  *(undefined1 **)(lVar14 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar14 + -8) = FUN_1013cffcc;
  if (lVar11 == 0) {
LAB_1013d00bc:
    lVar1 = 0;
  }
  else {
    if ((lVar1 != 0x656e6f6e) || (lVar11 != -0x1c00000000000000)) {
      uVar10 = 0;
      func_0x000107c605b8(0x656e6f6e,0xe400000000000000,lVar1,lVar11,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = 0;
        if (((lVar1 == 0x756f72676b636162) && (lVar11 == -0x15ffffffffff9b92)) ||
           (func_0x000107c605b8(0x756f72676b636162,0xea0000000000646e,lVar1,lVar11,0),
           (uVar10 & 1) != 0)) {
          return 2;
        }
        uVar10 = 0;
        if (((lVar1 == 0x756f726765726f66) && (lVar11 == -0x15ffffffffff9b92)) ||
           (func_0x000107c605b8(0x756f726765726f66,0xea0000000000646e,lVar1,lVar11,0),
           (uVar10 & 1) != 0)) {
          return 3;
        }
        goto LAB_1013d00bc;
      }
    }
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 1013cffcc; end: 1013d00cf;  */

undefined8 FUN_1013cffcc(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
LAB_1013d00bc:
    uVar2 = 0;
  }
  else {
    if ((param_1 != 0x656e6f6e) || (param_2 != -0x1c00000000000000)) {
      uVar1 = 0;
      func_0x000107c605b8(0x656e6f6e,0xe400000000000000,param_1,param_2,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = 0;
        if (((param_1 == 0x756f72676b636162) && (param_2 == -0x15ffffffffff9b92)) ||
           (func_0x000107c605b8(0x756f72676b636162,0xea0000000000646e,param_1,param_2,0),
           (uVar1 & 1) != 0)) {
          return 2;
        }
        uVar1 = 0;
        if (((param_1 == 0x756f726765726f66) && (param_2 == -0x15ffffffffff9b92)) ||
           (func_0x000107c605b8(0x756f726765726f66,0xea0000000000646e,param_1,param_2,0),
           (uVar1 & 1) != 0)) {
          return 3;
        }
        goto LAB_1013d00bc;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1013d00d0; end: 1013d0333;  */

/* WARNING: Removing unreachable block (ram,0x0001013d0138) */

undefined * FUN_1013d00d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 ******appppppuStack_70 [2];
  
  func_0x000107c610f8(PTR_PTR_1126b7848);
  func_0x00010006c00c(param_1,param_2);
  lVar4 = param_1;
  FUN_1013cfa54(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c400dc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      appppppuStack_70[0] = (undefined8 *******)0x0;
      uVar6 = 0;
      FUN_1013d0a60(0);
      pppppppuVar13 = appppppuStack_70;
      func_0x000107c5fc50(lVar5,pppppppuVar13,uVar6);
      func_0x000107c61170(lVar5);
      ppppppuVar2 = appppppuStack_70[0];
      if ((undefined8 *******)appppppuStack_70[0] != (undefined8 *******)0x0) {
        pppppppuVar17 = (undefined8 *******)((ulong)appppppuStack_70[0] & 0xffffffffffffff8);
        if ((ulong)appppppuStack_70[0] >> 0x3e == 0) {
          pppppppuVar15 = (undefined8 *******)pppppppuVar17[2];
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          pppppppuVar15 = (undefined8 *******)appppppuStack_70[0];
          if (-1 < (long)appppppuStack_70[0]) {
            pppppppuVar15 = pppppppuVar17;
          }
          func_0x000107c60480();
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          pppppppuVar9 = (undefined8 *******)0x0;
          do {
            while( true ) {
              if (((ulong)ppppppuVar2 & 0xc000000000000001) == 0) {
                if (pppppppuVar17[2] <= pppppppuVar9) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d0304);
                  (*pcVar3)();
                }
                pppppppuVar7 = (undefined8 *******)ppppppuVar2[(long)pppppppuVar9 + 4];
                func_0x000107c61174();
                pppppppuVar14 = pppppppuVar13;
              }
              else {
                pppppppuVar7 = pppppppuVar9;
                pppppppuVar14 = (undefined8 *******)ppppppuVar2;
                FUN_1013cf8a0();
              }
              if (SCARRY8((long)pppppppuVar9,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d0300);
                (*pcVar3)();
              }
              pppppppuVar16 = (undefined8 *******)((long)pppppppuVar9 + 1);
              func_0x000107c61174();
              pppppppuVar8 = pppppppuVar7;
              func_0x000107c40098();
              func_0x000107c61180();
              if (pppppppuVar8 == (undefined8 *******)0x0) break;
              pppppppuVar9 = pppppppuVar8;
              func_0x000107c5faec();
              pppppppuVar13 = pppppppuVar14;
              func_0x000107c61170(pppppppuVar7);
              func_0x000107c61170(pppppppuVar7);
              func_0x000107c61170(pppppppuVar8);
              puVar10 = puVar12;
              func_0x000107c61558();
              puVar11 = puVar12;
              if (((ulong)puVar10 & 1) == 0) {
                pppppppuVar13 = (undefined8 *******)(*(long *)(puVar12 + 0x10) + 1);
                puVar11 = (undefined *)0x0;
                func_0x0001000d182c(0,pppppppuVar13,1,puVar12);
              }
              uVar1 = *(ulong *)(puVar11 + 0x10);
              pppppppuVar7 = (undefined8 *******)(uVar1 + 1);
              puVar12 = puVar11;
              if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
                pppppppuVar13 = pppppppuVar7;
                func_0x0001000d182c(puVar12,pppppppuVar7,1,puVar11);
              }
              *(undefined8 ********)(puVar12 + 0x10) = pppppppuVar7;
              *(undefined8 ********)(puVar12 + uVar1 * 0x10 + 0x20) = pppppppuVar9;
              *(undefined8 ********)(puVar12 + uVar1 * 0x10 + 0x28) = pppppppuVar14;
              pppppppuVar9 = pppppppuVar16;
              if (pppppppuVar16 == pppppppuVar15) goto LAB_1013d0320;
            }
            func_0x000107c61170(pppppppuVar7);
            func_0x000107c61170(pppppppuVar7);
            pppppppuVar13 = pppppppuVar14;
            pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + 1);
          } while (pppppppuVar16 != pppppppuVar15);
        }
LAB_1013d0320:
        func_0x000107c61170(lVar4);
        func_0x000107c6142c(ppppppuVar2);
        return puVar12;
      }
    }
    func_0x000107c61170(lVar4);
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1013d0334; end: 1013d046f;  */

/* WARNING: Possible PIC construction at 0x0001013d042c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d0430) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0334(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  
  if (param_2 == 0) {
    param_2 = -0x1b00000000000000;
    param_1 = 0x7465736e75;
  }
  else {
    uVar1 = 0;
    if ((((param_1 == 0x756f72676b636162) && (param_2 == -0x15ffffffffff9b92)) ||
        (func_0x000107c605b8(0x756f72676b636162,0xea0000000000646e,param_1,param_2,0),
        (uVar1 & 1) != 0)) && (lVar2 = *(long *)(unaff_x20 + _DAT_112d7ac78), lVar2 != 0)) {
      func_0x000107c61434(param_2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c50320();
        func_0x000107c615e8(lVar2);
      }
    }
    else {
      func_0x000107c61434(param_2);
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7ac80);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5fadc(param_1,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1013d0470; end: 1013d048f;  */

void FUN_1013d0470(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0008);
  return;
}



/* Entry: 1013d0490; end: 1013d0a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0490(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  code *pcVar15;
  uint uVar16;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [40];
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = param_1;
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c60bd0(param_4);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1013d0a48);
    (*pcVar15)();
  }
  puVar3 = puVar2;
  puVar7 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110f9c778;
  func_0x000107c5faec();
  ppuStack_b8 = ppuVar4;
  puStack_b0 = puVar7;
  func_0x000107c61434(puVar7);
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&ppuStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar3 + 0x10) == 0) {
LAB_1013d0580:
    puStack_78 = (undefined *)0x0;
    ppuStack_80 = (undefined **)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar3);
    puVar5 = auStack_a8;
    FUN_100df95d0(puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(puVar3);
      goto LAB_1013d0580;
    }
    func_0x0001000bb420(*(long *)(puVar3 + 0x38) + (long)puVar5 * 0x20,&ppuStack_80);
    func_0x000107c6142c(puVar7);
    puVar7 = puVar3;
  }
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(puVar3);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&ppuStack_80);
LAB_1013d06b0:
    lVar11 = *(long *)(param_3 + _DAT_112d7ac80);
    if (lVar11 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar11 != 0) {
        uVar14 = 0x7465736e75;
        func_0x000107c5fadc(0x7465736e75,0xe500000000000000);
        func_0x000107c4bb84(lVar11);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(uVar14);
      }
    }
    (**(code **)(param_4 + 0x10))(param_4,1);
    func_0x000107c4dd40(param_2);
    return;
  }
  pppuVar6 = &ppuStack_b8;
  func_0x000107c6147c(pppuVar6,&ppuStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
  puVar2 = puStack_b0;
  if (((ulong)pppuVar6 & 1) == 0) goto LAB_1013d06b0;
  ppuVar4 = ppuStack_b8;
  puVar3 = puStack_b0;
  func_0x000107c5ee08(ppuStack_b8,puStack_b0,0);
  func_0x000107c6142c(puVar2);
  if (0xe < (ulong)puVar3 >> 0x3c) goto LAB_1013d06b0;
  puVar2 = param_1;
  func_0x000107c5d9a4();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c60bd0(param_4);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1013d0a54);
    (*pcVar15)();
  }
  puVar7 = puVar2;
  puVar12 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar2);
  ppuVar8 = &PTR____CFConstantStringClassReference_110f9c7d8;
  func_0x000107c5faec();
  ppuStack_80 = ppuVar8;
  puStack_78 = puVar12;
  func_0x000107c61434(puVar12);
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar7 + 0x10) == 0) {
LAB_1013d0750:
    puStack_78 = (undefined *)0x0;
    ppuStack_80 = (undefined **)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar7);
    puVar5 = auStack_a8;
    FUN_100df95d0(puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(puVar7);
      goto LAB_1013d0750;
    }
    func_0x0001000bb420(*(long *)(puVar7 + 0x38) + (long)puVar5 * 0x20,&ppuStack_80);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar7;
  }
  func_0x000107c6142c(puVar12);
  func_0x000107c6142c(puVar7);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&ppuStack_80);
    puVar2 = (undefined *)0x0;
    ppuVar8 = (undefined **)0x0;
  }
  else {
    pppuVar6 = &ppuStack_b8;
    func_0x000107c6147c(pppuVar6,&ppuStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    puVar2 = puStack_b0;
    ppuVar8 = ppuStack_b8;
    if ((int)pppuVar6 == 0) {
      ppuVar8 = (undefined **)0x0;
      puVar2 = (undefined *)0x0;
    }
  }
  ppuVar9 = ppuVar8;
  FUN_1013cffcc(ppuVar8,puVar2);
  func_0x000107c5d9a4();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    func_0x000107c60bd0(param_4);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1013d0a60);
    (*pcVar15)();
  }
  puVar7 = param_1;
  puVar12 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f9c7f8;
  func_0x000107c5faec();
  ppuStack_b8 = ppuVar10;
  puStack_b0 = puVar12;
  func_0x000107c61434(puVar12);
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&ppuStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar7 + 0x10) == 0) {
LAB_1013d0884:
    puStack_78 = (undefined *)0x0;
    ppuStack_80 = (undefined **)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar7);
    puVar5 = auStack_a8;
    FUN_100df95d0(puVar5);
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(puVar7);
      goto LAB_1013d0884;
    }
    func_0x0001000bb420(*(long *)(puVar7 + 0x38) + (long)puVar5 * 0x20,&ppuStack_80);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar7;
  }
  func_0x000107c6142c(puVar12);
  func_0x000107c6142c(puVar7);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&ppuStack_80);
LAB_1013d0908:
    uVar16 = 0;
  }
  else {
    pppuVar6 = &ppuStack_b8;
    func_0x000107c6147c(pppuVar6,&ppuStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    puVar1 = puStack_b0;
    if (((ulong)pppuVar6 & 1) == 0) goto LAB_1013d0908;
    if ((ppuStack_b8 == (undefined **)0x65757274) && (puStack_b0 == (undefined *)0xe400000000000000)
       ) {
      func_0x000107c6142c(0xe400000000000000);
      uVar16 = 1;
    }
    else {
      ppuVar10 = ppuStack_b8;
      func_0x000107c605b8(ppuStack_b8,puStack_b0,0x65757274,0xe400000000000000,0);
      uVar16 = (uint)ppuVar10;
      func_0x000107c6142c(puVar1);
    }
  }
  ppuVar10 = ppuVar4;
  FUN_1013cfb14(ppuVar4,puVar3,ppuVar9,uVar16 & 1);
  if (((ulong)ppuVar10 & 1) != 0) {
    ppuVar9 = ppuVar4;
    FUN_1013d00d0(ppuVar4,puVar3);
    FUN_1013d0334(ppuVar8,puVar2);
    func_0x000107c6142c(ppuVar9);
    func_0x000107c6142c(puVar2);
    pcVar15 = *(code **)(param_4 + 0x10);
    uVar14 = 0;
    goto LAB_1013d09f4;
  }
  lVar11 = *(long *)(param_3 + _DAT_112d7ac80);
  if (lVar11 == 0) {
LAB_1013d09e0:
    func_0x000107c6142c(puVar2);
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) goto LAB_1013d09e0;
    ppuVar9 = (undefined **)0x7465736e75;
    if (puVar2 != (undefined *)0x0) {
      ppuVar9 = ppuVar8;
    }
    puVar1 = (undefined *)0xe500000000000000;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    func_0x000107c5fadc(ppuVar9,puVar1);
    func_0x000107c6142c(puVar1);
    func_0x000107c4bb84(lVar11);
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(ppuVar9);
  }
  pcVar15 = *(code **)(param_4 + 0x10);
  uVar14 = 2;
LAB_1013d09f4:
  (*pcVar15)(param_4,uVar14);
  func_0x000107c4dd40(param_2);
  func_0x0001000b44c0(ppuVar4,puVar3);
  return;
}



/* Entry: 1013d0a60; end: 1013d0aa3;  */

void FUN_1013d0a60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7acb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b7830;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d7acb0 = puVar1;
  return;
}



/* Entry: 1013d0aa4; end: 1013d0baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013d0aa4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_113053948);
  func_0x000107c61174(uVar5);
  uVar1 = param_3;
  func_0x000107c400bc();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1013d0470();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d7ac78) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112d7ac80) = uVar1;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1013d0bb0; end: 1013d0bcb;  */

void FUN_1013d0bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013d0bcc; end: 1013d0beb;  */

void FUN_1013d0bcc(void)

{
  func_0x000107c61168(&PTR_PTR_112d7acf8);
  return;
}



/* Entry: 1013d0bec; end: 1013d0bf7; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0bec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ad50;
  func_0x000107c61428(param_1 + _DAT_112d7ad50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d0bf8; end: 1013d0c03; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ad50;
  func_0x000107c61428(param_1 + _DAT_112d7ad50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d0c04; end: 1013d0c0f; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint appTerminationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0c04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ad58;
  func_0x000107c61428(param_1 + _DAT_112d7ad58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d0c10; end: 1013d0c1b; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint setAppTerminationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ad58;
  func_0x000107c61428(param_1 + _DAT_112d7ad58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d0c1c; end: 1013d0c27; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint configMetricServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0c1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ad60;
  func_0x000107c61428(param_1 + _DAT_112d7ad60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d0c28; end: 1013d0c6b;  */

void FUN_1013d0c28(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d0c6c; end: 1013d0c77; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint setConfigMetricServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ad60;
  func_0x000107c61428(param_1 + _DAT_112d7ad60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d0c78; end: 1013d0ccb;  */

void FUN_1013d0c78(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d0ccc; end: 1013d0e57;  */

/* WARNING: Possible PIC construction at 0x0001013d0dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d0de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d0df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d0e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d0df8) */
/* WARNING: Removing unreachable block (ram,0x0001013d0de8) */
/* WARNING: Removing unreachable block (ram,0x0001013d0dd8) */
/* WARNING: Removing unreachable block (ram,0x0001013d0e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d0ccc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3de94();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c400c0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_1013d0bcc(0);
      func_0x000107c613fc();
      uVar4 = *(undefined8 *)(lVar2 + _DAT_113053948);
      func_0x000107c61174(uVar4);
      func_0x000107c400bc();
      func_0x000107c61180();
      lVar3 = 0;
      FUN_1013d0470();
      lVar2 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar2 + _DAT_112d7ac78) = uVar4;
      *(long *)(lVar2 + _DAT_112d7ac80) = unaff_x20;
      lStack_60 = lVar2;
      lStack_58 = lVar3;
      func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1013d0e58; end: 1013d0e7f; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint begin] */

void FUN_1013d0e58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013d0ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013d0e80; end: 1013d0ec3; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint end] */

void FUN_1013d0e80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d0ec4; end: 1013d10c7;  */

void FUN_1013d0ec4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10c3c40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010ef3c3c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10c3c20)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef3c3e0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ForegroundCrashRecoveryNotificationProcessingPlugin/SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint.swift"
                                ,0x79,2,0x2b,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d10c8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53738();
        goto LAB_1013d0f50;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c527d4();
  }
LAB_1013d0f50:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013d10c8; end: 1013d1173; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint setValue:forIvarName:] */

void FUN_1013d10c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1013d0ec4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013d1174; end: 1013d11fb; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d1174(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7ad50,0);
  func_0x000107c61614(param_1 + _DAT_112d7ad58,0);
  func_0x000107c61614(param_1 + _DAT_112d7ad60,0);
  *(undefined8 *)(param_1 + _DAT_112d7ad68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013d11fc; end: 1013d122f;  */

void FUN_1013d11fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013d1230; end: 1013d1287; -[SCForegroundCrashRecoveryNotificationProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d1230(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7ad50);
  func_0x000107c61610(param_1 + _DAT_112d7ad58);
  func_0x000107c61610(param_1 + _DAT_112d7ad60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7ad68));
  return;
}



/* Entry: 1013d1288; end: 1013d12a7;  */

void FUN_1013d1288(void)

{
  func_0x000107c61168(&PTR_PTR_1127d00d0);
  return;
}



/* Entry: 1013d12a8; end: 1013d12d7;  */

void FUN_1013d12a8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1013d12d8; end: 1013d1393;  */

/* WARNING: Possible PIC construction at 0x0001013d1350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d1354) */
/* WARNING: Removing unreachable block (ram,0x0001013d1368) */
/* WARNING: Removing unreachable block (ram,0x0001013d137c) */

void FUN_1013d12d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6cc0;
  func_0x000107c610f8(PTR_PTR_1126a6cc0);
  func_0x000107c453e4();
  func_0x000107c59840();
  func_0x000107c59ae0(puVar1);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c54644(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013d1394; end: 1013d13b7;  */

void FUN_1013d1394(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013d13b8; end: 1013d13bb;  */

/* WARNING: Possible PIC construction at 0x0001013d1350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d1354) */
/* WARNING: Removing unreachable block (ram,0x0001013d1368) */
/* WARNING: Removing unreachable block (ram,0x0001013d137c) */

void FUN_1013d13b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6cc0;
  func_0x000107c610f8(PTR_PTR_1126a6cc0);
  func_0x000107c453e4();
  func_0x000107c59840();
  func_0x000107c59ae0(puVar1);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c54644(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013d13bc; end: 1013d1523;  */

undefined * FUN_1013d13bc(long param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  byte *pbVar5;
  long extraout_x8;
  ulong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = 0x112d7ae38;
  func_0x0001000285a8(0x112d7ae38,&UNK_10d93a478);
  lVar9 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d7ae40,&UNK_10d93a480);
    puVar4 = puVar8;
    func_0x000107c60498();
    iVar2 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar9 + 0x48);
    do {
      pbVar5 = pbVar7;
      FUN_1013d1544(param_1);
      bVar1 = *pbVar7;
      uVar10 = (ulong)bVar1;
      FUN_1013d2d44();
      if (((ulong)pbVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d1520);
        (*pcVar3)();
      }
      uVar6 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar10 & 0x3f);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar10) = bVar1;
      lVar11 = *(long *)(puVar4 + 0x38);
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * uVar10,pbVar7 + iVar2,lVar9);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d1524);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 1013d1524; end: 1013d1543;  */

void FUN_1013d1524(void)

{
  func_0x000107c61168(&PTR_PTR_112d7add8);
  return;
}



/* Entry: 1013d1544; end: 1013d1593;  */

undefined8 FUN_1013d1544(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d7ae38;
  func_0x0001000285a8(0x112d7ae38,&UNK_10d93a478);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1013d1594; end: 1013d159b;  */

bool FUN_1013d1594(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013d159c; end: 1013d187b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d159c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d7aeb8);
  func_0x000107c40fa4(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1103aed88;
  func_0x000107c613fc(&UNK_1103aed88,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x1013d38ac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1013d3a70;
  puStack_48 = &UNK_1103aee18;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1013d187c; end: 1013d18d3;  */

void FUN_1013d187c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1013d18d4(2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013d18d4; end: 1013d19ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d18d4(double param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  bVar2 = *(byte *)(unaff_x20 + _DAT_112d7ae68);
  uVar13 = (ulong)bVar2;
  if (bVar2 == 0) {
    return;
  }
  uVar15 = *(ulong *)(unaff_x20 + _DAT_112d7aed0);
  bVar3 = *(byte *)(unaff_x20 + _DAT_112d7ae70);
  cVar1 = *(char *)((undefined8 *)(unaff_x20 + _DAT_112d7aeb0) + 1);
  bVar4 = *(byte *)(unaff_x20 + _DAT_112d7ae78);
  uVar6 = uVar13;
  FUN_1013d44fc(uVar13,*(undefined8 *)(unaff_x20 + _DAT_112d7aeb0));
  if ((uVar6 & 1) != 0) {
    if (cVar1 != '\0') {
      if (lRam0000000112d7afb8 != -1) {
        func_0x000107c61568(0x112d7afb8,FUN_1013d4194);
      }
      func_0x000100877840(uVar15,uRam00000001137ff3e8);
      if ((uVar15 & 1) == 0) goto LAB_1013d198c;
    }
    if (bVar3 == 5) {
      if ((param_2 != '\0' & bVar4) != 0) {
        return;
      }
    }
    else if (bVar3 == bVar2) {
      return;
    }
    lVar14 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar16 = auStack_90 + -extraout_x8;
    lVar7 = 0;
    func_0x000107c5eea4();
    lVar20 = *(long *)(lVar7 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
    lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar19 = lVar17 - extraout_x12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar18 = lVar19 - extraout_x12_00;
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7aec8);
    func_0x000107c3dfc0();
    lVar14 = _DAT_112d7ae80;
    if (lVar8 == 0) {
      if (bVar2 != 0) {
        puVar12 = auStack_88;
        func_0x000107c61428(unaff_x20 + _DAT_112d7ae80,puVar12,0x20,0);
        lVar14 = *(long *)(unaff_x20 + lVar14);
        if ((*(long *)(lVar14 + 0x10) == 0) ||
           (uVar6 = uVar13, FUN_1013d2d44(uVar13), ((ulong)puVar12 & 1) == 0)) {
          func_0x000107c614a8(auStack_88);
        }
        else {
          (**(code **)(lVar20 + 0x10))
                    (lVar19,*(long *)(lVar14 + 0x38) + *(long *)(lVar20 + 0x48) * uVar6,lVar7);
          (**(code **)(lVar20 + 0x20))(lVar18,lVar19,lVar7);
          func_0x000107c614a8(auStack_88);
          func_0x000107c5eea0(lVar17);
          func_0x000107c5ee68(lVar18);
          pcVar5 = *(code **)(lVar20 + 8);
          (*pcVar5)(lVar17,lVar7);
          (*pcVar5)(lVar18,lVar7);
          if (param_1 < 60.0) {
            return;
          }
        }
      }
      lVar14 = *(long *)(unaff_x20 + _DAT_112d7ae58) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7ae58),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1013d2060);
        (*pcVar5)();
      }
      *(long *)(unaff_x20 + _DAT_112d7ae58) = lVar14;
      lVar8 = _DAT_112d7ae48;
      lVar17 = *(long *)(unaff_x20 + _DAT_112d7ae48);
      uVar9 = 0;
      if (lVar17 != 0) {
        if (SCARRY8(*(long *)(lVar17 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1013d2068);
          (*pcVar5)();
        }
        *(long *)(lVar17 + _DAT_112d7b240) = *(long *)(lVar17 + _DAT_112d7b240) + 1;
        func_0x000107c61174();
        FUN_1013d6dd4();
        func_0x000107c61170(lVar17);
        uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
      }
      *(undefined8 *)(unaff_x20 + lVar8) = 0;
      func_0x000107c61170(uVar9);
      puVar10 = &UNK_1103aed88;
      func_0x000107c613fc(&UNK_1103aed88,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,unaff_x20);
      puVar11 = &UNK_1103aee00;
      func_0x000107c613fc(&UNK_1103aee00,0x20,7);
      *(undefined **)(puVar11 + 0x10) = puVar10;
      *(long *)(puVar11 + 0x18) = lVar14;
      uVar9 = 0x4072c00000000000;
      if ((bVar2 - 1 & 0xfc) != 0) {
        uVar9 = 0x4008000000000000;
      }
      uVar6 = uVar13;
      FUN_1013d84f8(uVar9,uVar13,0,0,0x1013d38a4,puVar11);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
      *(ulong *)(unaff_x20 + lVar8) = uVar6;
      func_0x000107c61174();
      func_0x000107c61170(uVar9);
      func_0x000107c5c2e0(*(undefined8 *)(unaff_x20 + _DAT_112d7aea8));
      *(undefined1 *)(unaff_x20 + _DAT_112d7ae50) = 1;
      if (bVar2 != 0) {
        func_0x000107c5eea0(puVar16);
        (**(code **)(lVar20 + 0x38))(puVar16,0,1,lVar7);
        func_0x000107c61428(unaff_x20 + _DAT_112d7ae80,auStack_88,0x21,0);
        FUN_1013d20f4(puVar16,uVar13);
        func_0x000107c614a8(auStack_88);
        *(undefined1 *)(unaff_x20 + _DAT_112d7ae90) = 1;
        *(byte *)(unaff_x20 + _DAT_112d7ae70) = bVar2;
        *(undefined1 *)(unaff_x20 + _DAT_112d7ae78) = 0;
      }
      FUN_1013d2274(uVar13);
      func_0x000107c61170(uVar6);
      func_0x000107c61574(puVar11);
    }
    else if (*(char *)(unaff_x20 + _DAT_112d7ae50) == '\x01') {
      if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7ae58),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1013d2064);
        (*pcVar5)();
      }
      *(long *)(unaff_x20 + _DAT_112d7ae58) = *(long *)(unaff_x20 + _DAT_112d7ae58) + 1;
    }
    return;
  }
LAB_1013d198c:
  lVar14 = _DAT_112d7ae50;
  if (bVar3 == 5) {
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112d7ae50) == '\x01') {
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7ae58),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1013d2514);
      (*pcVar5)();
    }
    *(long *)(unaff_x20 + _DAT_112d7ae58) = *(long *)(unaff_x20 + _DAT_112d7ae58) + 1;
    lVar7 = _DAT_112d7ae48;
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7ae48);
    uVar9 = 0;
    if (lVar8 != 0) {
      if (SCARRY8(*(long *)(lVar8 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1013d2518);
        (*pcVar5)();
      }
      *(long *)(lVar8 + _DAT_112d7b240) = *(long *)(lVar8 + _DAT_112d7b240) + 1;
      func_0x000107c61174();
      FUN_1013d6dd4();
      func_0x000107c61170(lVar8);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar7);
    }
    *(undefined8 *)(unaff_x20 + lVar7) = 0;
    func_0x000107c61170(uVar9);
    *(undefined1 *)(unaff_x20 + lVar14) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112d7ae70) = 5;
  }
  return;
}



/* Entry: 1013d1a00; end: 1013d1b2f;  */

void FUN_1013d1a00(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    puVar2 = &UNK_1103aed88;
    func_0x000107c613fc(&UNK_1103aed88,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_1103aee50;
    func_0x000107c613fc(&UNK_1103aee50,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    uStack_68 = 0x1013d38b4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_1103aee68;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_60;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e550(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1013d1b30; end: 1013d1ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d1b30(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long extraout_x8;
  char *pcVar4;
  undefined8 uVar5;
  char acStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pcVar4 = acStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61174(param_2);
    func_0x0001000d0fb8(pcVar4);
    pcVar3 = pcVar4;
    func_0x000107c614c4(pcVar4,lVar2);
    if ((int)pcVar3 == 0) {
      uVar5 = *(undefined8 *)pcVar4;
      lVar2 = 0x112d7af10;
      func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
      cVar1 = pcVar4[*(int *)(lVar2 + 0x60)];
      FUN_1013d3a10(pcVar4 + *(int *)(lVar2 + 0x50),0x112d373d8,&UNK_10d9014c0);
      if ((cVar1 == '\x01') && ((int)uVar5 != *(int *)(param_1 + _DAT_112d7aed0))) {
        *(undefined8 *)(param_1 + _DAT_112d7aed0) = uVar5;
        FUN_1013d18d4(1);
      }
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61170(param_1);
      FUN_1013d38bc(pcVar4);
    }
  }
  return;
}



/* Entry: 1013d1ca8; end: 1013d2067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d1ca8(double param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_00;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7aec8);
  func_0x000107c3dfc0();
  lVar9 = _DAT_112d7ae80;
  if (lVar3 == 0) {
    if ((param_2 & 0xff) != 0) {
      puVar8 = auStack_88;
      func_0x000107c61428(unaff_x20 + _DAT_112d7ae80,puVar8,0x20,0);
      lVar9 = *(long *)(unaff_x20 + lVar9);
      if ((*(long *)(lVar9 + 0x10) == 0) ||
         (uVar4 = param_2, FUN_1013d2d44(param_2), ((ulong)puVar8 & 1) == 0)) {
        func_0x000107c614a8(auStack_88);
      }
      else {
        (**(code **)(lVar14 + 0x10))
                  (lVar13,*(long *)(lVar9 + 0x38) + *(long *)(lVar14 + 0x48) * uVar4,lVar2);
        (**(code **)(lVar14 + 0x20))(lVar12,lVar13,lVar2);
        func_0x000107c614a8(auStack_88);
        func_0x000107c5eea0(lVar11);
        func_0x000107c5ee68(lVar12);
        pcVar1 = *(code **)(lVar14 + 8);
        (*pcVar1)(lVar11,lVar2);
        (*pcVar1)(lVar12,lVar2);
        if (param_1 < 60.0) {
          return;
        }
      }
    }
    lVar9 = *(long *)(unaff_x20 + _DAT_112d7ae58) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7ae58),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d2060);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + _DAT_112d7ae58) = lVar9;
    lVar3 = _DAT_112d7ae48;
    lVar11 = *(long *)(unaff_x20 + _DAT_112d7ae48);
    uVar5 = 0;
    if (lVar11 != 0) {
      if (SCARRY8(*(long *)(lVar11 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d2068);
        (*pcVar1)();
      }
      *(long *)(lVar11 + _DAT_112d7b240) = *(long *)(lVar11 + _DAT_112d7b240) + 1;
      func_0x000107c61174();
      FUN_1013d6dd4();
      func_0x000107c61170(lVar11);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    }
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    func_0x000107c61170(uVar5);
    puVar6 = &UNK_1103aed88;
    func_0x000107c613fc(&UNK_1103aed88,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_1103aee00;
    func_0x000107c613fc(&UNK_1103aee00,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar9;
    uVar5 = 0x4072c00000000000;
    if (((int)param_2 - 1U & 0xfc) != 0) {
      uVar5 = 0x4008000000000000;
    }
    uVar4 = param_2;
    FUN_1013d84f8(uVar5,param_2,0,0,0x1013d38a4,puVar7);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    *(ulong *)(unaff_x20 + lVar3) = uVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000107c5c2e0(*(undefined8 *)(unaff_x20 + _DAT_112d7aea8));
    *(undefined1 *)(unaff_x20 + _DAT_112d7ae50) = 1;
    if ((param_2 & 0xff) != 0) {
      func_0x000107c5eea0(puVar10);
      (**(code **)(lVar14 + 0x38))(puVar10,0,1,lVar2);
      func_0x000107c61428(unaff_x20 + _DAT_112d7ae80,auStack_88,0x21,0);
      FUN_1013d20f4(puVar10,param_2);
      func_0x000107c614a8(auStack_88);
      *(undefined1 *)(unaff_x20 + _DAT_112d7ae90) = 1;
      *(char *)(unaff_x20 + _DAT_112d7ae70) = (char)param_2;
      *(undefined1 *)(unaff_x20 + _DAT_112d7ae78) = 0;
    }
    FUN_1013d2274(param_2);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(puVar7);
  }
  else if (*(char *)(unaff_x20 + _DAT_112d7ae50) == '\x01') {
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7ae58),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d2064);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + _DAT_112d7ae58) = *(long *)(unaff_x20 + _DAT_112d7ae58) + 1;
  }
  return;
}



/* Entry: 1013d2068; end: 1013d20f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d2068(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112d7ae58) == param_2) {
      *(undefined1 *)(param_1 + _DAT_112d7ae50) = 0;
      *(undefined1 *)(param_1 + _DAT_112d7ae70) = 5;
      *(undefined1 *)(param_1 + _DAT_112d7ae78) = 1;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1013d20f4; end: 1013d2273;  */

void FUN_1013d20f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001003a4c00(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_1013d3a10(lVar5,0x112d373d8,&UNK_10d9014c0);
    FUN_1013d2e90(puVar4,param_2);
    FUN_1013d3a10(puVar4,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,lVar5,lVar2);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_58 = *unaff_x20;
    FUN_1013d2f78(lVar6,param_2,uVar3);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 1013d2274; end: 1013d2453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d2274(ulong param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7aec0);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = ((long *)(unaff_x20 + _DAT_112d7aec0))[1];
  plVar1 = (long *)(unaff_x20 + _DAT_112d7ae98);
  lVar7 = plVar1[1];
  if (lVar7 == 0) {
    lVar4 = lVar3;
    func_0x000107c615f0();
    func_0x000107c5eec4(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5eeac();
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    lVar7 = 0;
    lVar2 = plVar1[1];
  }
  else {
    lVar4 = *plVar1;
    func_0x000107c615f0(lVar3);
    param_2 = lVar7;
    lVar2 = lVar7;
  }
  *plVar1 = lVar4;
  plVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c61434(lVar7);
  func_0x000107c6142c(lVar2);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7aed0);
  if (lVar2 < 0x4c) {
    if (lVar2 - 0x1fU < 3) {
      iVar6 = 4;
      goto LAB_1013d23f8;
    }
    if (lVar2 == 0) {
      iVar6 = 6;
      goto LAB_1013d23f8;
    }
  }
  else if (lVar2 < 0x93) {
    if (lVar2 == 0x4c) {
      iVar6 = 2;
      goto LAB_1013d23f8;
    }
    if (lVar2 == 0x67) {
      iVar6 = 0;
      goto LAB_1013d23f8;
    }
  }
  else {
    if (lVar2 == 0x138) {
      iVar6 = 3;
      goto LAB_1013d23f8;
    }
    if (lVar2 == 0x93) {
      iVar6 = 1;
      goto LAB_1013d23f8;
    }
  }
  iVar6 = 5;
LAB_1013d23f8:
  lVar2 = lVar3;
  func_0x000107c614f0(lVar3);
  (**(code **)(lVar5 + 8))
            (0x3020104U >> ((param_1 & 7) << 3) & 7 | iVar6 << 8,lVar4,param_2,lVar2,lVar5);
  func_0x000107c615e8(lVar3);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1013d2454; end: 1013d2517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d2454(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = _DAT_112d7ae50;
  if (*(char *)(unaff_x20 + _DAT_112d7ae50) == '\x01') {
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7ae58),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d2514);
      (*pcVar3)();
    }
    *(long *)(unaff_x20 + _DAT_112d7ae58) = *(long *)(unaff_x20 + _DAT_112d7ae58) + 1;
    lVar1 = _DAT_112d7ae48;
    lVar4 = *(long *)(unaff_x20 + _DAT_112d7ae48);
    uVar5 = 0;
    if (lVar4 != 0) {
      if (SCARRY8(*(long *)(lVar4 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d2518);
        (*pcVar3)();
      }
      *(long *)(lVar4 + _DAT_112d7b240) = *(long *)(lVar4 + _DAT_112d7b240) + 1;
      func_0x000107c61174();
      FUN_1013d6dd4();
      func_0x000107c61170(lVar4);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar5);
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112d7ae70) = 5;
  }
  return;
}



/* Entry: 1013d2518; end: 1013d2577; -[_TtC21NetworkHealthServices29NetworkHealthBannerController init] */

void FUN_1013d2518(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NetworkHealthServices.NetworkHealthBannerController",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d2544);
  (*pcVar1)();
}



/* Entry: 1013d2578; end: 1013d2653; -[_TtC21NetworkHealthServices29NetworkHealthBannerController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013d25d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d2614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d25d8) */
/* WARNING: Removing unreachable block (ram,0x0001013d2618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d2578(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7aea0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7aea8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7aec8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7ae48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7aeb0));
  return;
}



/* Entry: 1013d2654; end: 1013d2d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d2654(double param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,param_3);
  lVar5 = 0;
  func_0x000107c5eec8();
  lStack_f0 = *(long *)(lVar5 + -8);
  lStack_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar9 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_f8 = lVar9;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0x112d373d0;
  lStack_e0 = lVar9 - extraout_x12;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (lVar9 - extraout_x12) - extraout_x8_01;
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d8 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = (lVar13 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar16 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar12 - extraout_x12_04;
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (3 < ((uint)pcStack_d0 & 0xff) - 1) {
    *(undefined1 *)(param_2 + _DAT_112d7ae68) = 0;
    lVar5 = _DAT_112d7ae88;
    func_0x000107c61428(param_2 + _DAT_112d7ae88,auStack_a8,0,0);
    func_0x0001009f0578(param_2 + lVar5,lVar13);
    func_0x0001009f0578(lVar13,lVar11);
    lVar15 = lStack_c8;
    lVar17 = lVar11;
    (**(code **)(lVar10 + 0x30))(lVar11,1,lStack_c8);
    lVar12 = lStack_e0;
    if ((int)lVar17 == 1) {
      FUN_1013d3a10(lVar13,0x112d373d8,&UNK_10d9014c0);
      bVar4 = false;
    }
    else {
      (**(code **)(lVar10 + 0x20))(lStack_e0,lVar11,lVar15);
      func_0x000107c5eea0(lVar9);
      func_0x000107c5ee68(lVar12);
      pcVar14 = *(code **)(lVar10 + 8);
      (*pcVar14)(lVar9,lVar15);
      (*pcVar14)(lVar12,lVar15);
      FUN_1013d3a10(lVar13,0x112d373d8,&UNK_10d9014c0);
      bVar4 = 10.0 <= param_1;
    }
    lVar9 = lStack_d8;
    lVar11 = _DAT_112d7ae90;
    bVar2 = *(byte *)(param_2 + _DAT_112d7ae90);
    (**(code **)(lVar10 + 0x38))(lStack_d8,1,1,lVar15);
    func_0x000107c61428(param_2 + lVar5,auStack_c0,0x21,0);
    func_0x000100ed9cbc(lVar9,param_2 + lVar5);
    func_0x000107c614a8(auStack_c0);
    *(undefined1 *)(param_2 + lVar11) = 0;
    *(undefined1 *)(param_2 + _DAT_112d7ae78) = 0;
    lVar11 = _DAT_112d7ae50;
    lVar5 = _DAT_112d7ae48;
    if (*(char *)(param_2 + _DAT_112d7ae50) == '\x01') {
      lVar9 = *(long *)(param_2 + _DAT_112d7ae48);
      uVar8 = 0;
      if (lVar9 != 0) {
        if (SCARRY8(*(long *)(lVar9 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1013d2d44);
          (*pcVar14)();
        }
        *(long *)(lVar9 + _DAT_112d7b240) = *(long *)(lVar9 + _DAT_112d7b240) + 1;
        func_0x000107c61174();
        FUN_1013d6dd4();
        func_0x000107c61170(lVar9);
        uVar8 = *(undefined8 *)(param_2 + lVar5);
      }
      *(undefined8 *)(param_2 + lVar5) = 0;
      func_0x000107c61170(uVar8);
      *(undefined1 *)(param_2 + lVar11) = 0;
      *(undefined1 *)(param_2 + _DAT_112d7ae70) = 5;
    }
    if ((bVar2 & bVar4) == 1) {
      FUN_1013d1ca8(0);
    }
    puVar1 = (undefined8 *)(param_2 + _DAT_112d7ae98);
    uVar8 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar8);
    return;
  }
  *(char *)(param_2 + _DAT_112d7ae68) = (char)pcStack_d0;
  lVar11 = _DAT_112d7ae88;
  func_0x000107c61428(param_2 + _DAT_112d7ae88,auStack_a8,0,0);
  func_0x0001009f0578(param_2 + lVar11,lVar17);
  lVar9 = lStack_c8;
  pcStack_d0 = *(code **)(lVar10 + 0x38);
  (*pcStack_d0)(lVar12,1,1,lStack_c8);
  lVar5 = (long)*(int *)(lVar5 + 0x30);
  func_0x0001009f0578(lVar17,lVar15);
  func_0x0001009f0578(lVar12,lVar15 + lVar5);
  pcVar14 = *(code **)(lVar10 + 0x30);
  lVar13 = lVar15;
  (*pcVar14)(lVar15,1,lVar9);
  if ((int)lVar13 == 1) {
    lStack_100 = lVar11;
    FUN_1013d3a10(lVar12,0x112d373d8,&UNK_10d9014c0);
    FUN_1013d3a10(lVar17,0x112d373d8,&UNK_10d9014c0);
    lVar5 = lVar15 + lVar5;
    (*pcVar14)(lVar5,1,lVar9);
    if ((int)lVar5 != 1) {
LAB_1013d2a2c:
      FUN_1013d3a10(lVar15,0x112d373d0,&UNK_10d90f8f0);
      goto LAB_1013d2cfc;
    }
    FUN_1013d3a10(lVar15,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(lVar15,uVar16);
    lVar13 = lVar15 + lVar5;
    (*pcVar14)(lVar13,1,lVar9);
    lVar3 = lStack_e0;
    if ((int)lVar13 == 1) {
      FUN_1013d3a10(lVar12,0x112d373d8,&UNK_10d9014c0);
      FUN_1013d3a10(lVar17,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar10 + 8))(uVar16,lVar9);
      goto LAB_1013d2a2c;
    }
    lStack_100 = lVar11;
    lVar11 = lStack_e0;
    (**(code **)(lVar10 + 0x20))(lStack_e0,lVar15 + lVar5,lVar9);
    FUN_100df4c40();
    uVar6 = uVar16;
    func_0x000107c5fab8(uVar16,lVar3,lVar9,lVar11);
    pcVar14 = *(code **)(lVar10 + 8);
    (*pcVar14)(lVar3,lVar9);
    FUN_1013d3a10(lVar12,0x112d373d8,&UNK_10d9014c0);
    FUN_1013d3a10(lVar17,0x112d373d8,&UNK_10d9014c0);
    (*pcVar14)(uVar16,lVar9);
    FUN_1013d3a10(lVar15,0x112d373d8,&UNK_10d9014c0);
    if ((uVar6 & 1) == 0) goto LAB_1013d2cfc;
  }
  lVar11 = lStack_d8;
  func_0x000107c5eea0(lStack_d8);
  (*pcStack_d0)(lVar11,0,1,lVar9);
  lVar5 = lStack_100;
  func_0x000107c61428(param_2 + lStack_100,auStack_c0,0x21,0);
  lVar5 = param_2 + lVar5;
  func_0x000100ed9cbc(lVar11);
  puVar7 = auStack_c0;
  func_0x000107c614a8();
  lVar11 = lStack_f8;
  *(undefined1 *)(param_2 + _DAT_112d7ae90) = 0;
  func_0x000107c5eec4(lStack_f8);
  func_0x000107c5eeac();
  (**(code **)(lStack_f0 + 8))(lVar11,lStack_e8);
  puVar1 = (undefined8 *)(param_2 + _DAT_112d7ae98);
  uVar8 = puVar1[1];
  *puVar1 = puVar7;
  puVar1[1] = lVar5;
  func_0x000107c6142c(uVar8);
LAB_1013d2cfc:
  *(undefined1 *)(param_2 + _DAT_112d7ae78) = 0;
  FUN_1013d18d4(0);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1013d2d44; end: 1013d2e27;  */

void FUN_1013d2d44(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1013d2e28; end: 1013d2e8f;  */

void FUN_1013d2e28(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1013d2e90; end: 1013d2f77;  */

void FUN_1013d2e90(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_1013d2d44();
  if ((param_3 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x0001013d3088();
    }
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar2);
    func_0x0001013d3588(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001013d2f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 1013d2f78; end: 1013d3087;  */

void FUN_1013d2f78(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1013d2d44();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d3054);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x0001013d3288(lVar4);
    uVar2 = param_2;
    FUN_1013d2d44();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1103af7d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d3008);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001013d3088();
    lVar4 = *unaff_x20;
    goto joined_r0x0001013d3068;
  }
  lVar4 = *unaff_x20;
joined_r0x0001013d3068:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001013d304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * uVar2,param_1,lVar4);
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(char *)(*(long *)(lVar4 + 0x30) + uVar2) = (char)param_2;
  lVar7 = *(long *)(lVar4 + 0x38);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))
            (lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar2,param_1,lVar5);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d2e28);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 1013d3088; end: 1013d373b;  */

void FUN_1013d3088(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x0001000285a8(0x112d7ae40,&UNK_10d93a480);
  lVar11 = *unaff_x20;
  lVar5 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61574(lVar11);
LAB_1013d3260:
    *unaff_x20 = lVar5;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar5 != lVar11) || (lVar1 + uVar7 * 8 <= lVar5 + 0x40U)) {
    func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_1013d31bc;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      uVar2 = *(undefined1 *)(*(long *)(lVar11 + 0x30) + uVar9);
      lVar10 = *(long *)(lVar6 + 0x48) * uVar9;
      (**(code **)(lVar6 + 0x10))
                (&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(lVar11 + 0x38) + lVar10,lVar4);
      *(undefined1 *)(*(long *)(lVar5 + 0x30) + uVar9) = uVar2;
      (**(code **)(lVar6 + 0x20))
                (*(long *)(lVar5 + 0x38) + lVar10,
                 &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
      if (uVar7 != 0) break;
LAB_1013d31bc:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d3288);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar11);
          goto LAB_1013d3260;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 1013d373c; end: 1013d3743;  */

void FUN_1013d373c(void)

{
  if (lRam0000000112d7af00 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e633704);
  return;
}



/* Entry: 1013d3744; end: 1013d377b;  */

void FUN_1013d3744(undefined8 param_1)

{
  if (lRam0000000112d7af00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e633704);
  return;
}



/* Entry: 1013d377c; end: 1013d3877;  */

void FUN_1013d377c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_c0 = PTR___sBoWV_11034d678 + 0x40;
  puStack_b8 = &UNK_10d93a500;
  puStack_b0 = &UNK_10d93a500;
  puStack_a8 = &UNK_10d93a518;
  puStack_98 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a0 = &UNK_10d93a530;
  puStack_90 = &UNK_10d93a548;
  puStack_88 = &UNK_10d93a500;
  puStack_78 = PTR___sBOWV_11034d658 + 0x40;
  puStack_80 = &UNK_10d93a560;
  puStack_70 = &UNK_10d93a578;
  puStack_60 = &UNK_10d93a590;
  puStack_58 = &UNK_10d93a530;
  puStack_50 = PTR___sBbWV_11034d660 + 0x40;
  lVar1 = 0x13f;
  puStack_68 = puStack_98;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10d93a530;
    puStack_38 = &UNK_10d93a560;
    func_0x000107c61630(param_1,0x100,0x12,&puStack_c0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1013d3878; end: 1013d38bb;  */

void FUN_1013d3878(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  puVar2 = &UNK_1103aed88;
  func_0x000107c613fc(&UNK_1103aed88,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  uStack_58 = 0x1013d389c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000b0c7c;
  puStack_60 = &UNK_1103aedc8;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e550(puVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1013d38bc; end: 1013d38f7;  */

undefined8 FUN_1013d38bc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001000d0cdc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1013d38f8; end: 1013d39ff;  */

void FUN_1013d38f8(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  puVar2 = &UNK_1103aed88;
  func_0x000107c613fc(&UNK_1103aed88,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103aeea0;
  func_0x000107c613fc(&UNK_1103aeea0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  pcStack_50 = FUN_1013d3a00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1103aeeb8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e550(puVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1013d3a00; end: 1013d3a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d3a00(double param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,(uint)*(byte *)(unaff_x20 + 0x18));
  lVar5 = 0;
  func_0x000107c5eec8(0,*(byte *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  lStack_f0 = *(long *)(lVar5 + -8);
  lStack_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar10 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_f8 = lVar10;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0x112d373d0;
  lStack_e0 = lVar10 - extraout_x12;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (lVar10 - extraout_x12) - extraout_x8_01;
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar12 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d8 = lVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = (lVar14 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar17 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar13 - extraout_x12_04;
  func_0x000107c61428(lVar9 + 0x10,auStack_90,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar9 == 0) {
    return;
  }
  if (3 < ((uint)pcStack_d0 & 0xff) - 1) {
    *(undefined1 *)(lVar9 + _DAT_112d7ae68) = 0;
    lVar5 = _DAT_112d7ae88;
    func_0x000107c61428(lVar9 + _DAT_112d7ae88,auStack_a8,0,0);
    func_0x0001009f0578(lVar9 + lVar5,lVar14);
    func_0x0001009f0578(lVar14,lVar12);
    lVar16 = lStack_c8;
    lVar18 = lVar12;
    (**(code **)(lVar11 + 0x30))(lVar12,1,lStack_c8);
    lVar13 = lStack_e0;
    if ((int)lVar18 == 1) {
      FUN_1013d3a10(lVar14,0x112d373d8,&UNK_10d9014c0);
      bVar4 = false;
    }
    else {
      (**(code **)(lVar11 + 0x20))(lStack_e0,lVar12,lVar16);
      func_0x000107c5eea0(lVar10);
      func_0x000107c5ee68(lVar13);
      pcVar15 = *(code **)(lVar11 + 8);
      (*pcVar15)(lVar10,lVar16);
      (*pcVar15)(lVar13,lVar16);
      FUN_1013d3a10(lVar14,0x112d373d8,&UNK_10d9014c0);
      bVar4 = 10.0 <= param_1;
    }
    lVar10 = lStack_d8;
    lVar12 = _DAT_112d7ae90;
    bVar2 = *(byte *)(lVar9 + _DAT_112d7ae90);
    (**(code **)(lVar11 + 0x38))(lStack_d8,1,1,lVar16);
    func_0x000107c61428(lVar9 + lVar5,auStack_c0,0x21,0);
    func_0x000100ed9cbc(lVar10,lVar9 + lVar5);
    func_0x000107c614a8(auStack_c0);
    *(undefined1 *)(lVar9 + lVar12) = 0;
    *(undefined1 *)(lVar9 + _DAT_112d7ae78) = 0;
    lVar12 = _DAT_112d7ae50;
    lVar5 = _DAT_112d7ae48;
    if (*(char *)(lVar9 + _DAT_112d7ae50) == '\x01') {
      lVar10 = *(long *)(lVar9 + _DAT_112d7ae48);
      uVar8 = 0;
      if (lVar10 != 0) {
        if (SCARRY8(*(long *)(lVar10 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1013d2d44);
          (*pcVar15)();
        }
        *(long *)(lVar10 + _DAT_112d7b240) = *(long *)(lVar10 + _DAT_112d7b240) + 1;
        func_0x000107c61174();
        FUN_1013d6dd4();
        func_0x000107c61170(lVar10);
        uVar8 = *(undefined8 *)(lVar9 + lVar5);
      }
      *(undefined8 *)(lVar9 + lVar5) = 0;
      func_0x000107c61170(uVar8);
      *(undefined1 *)(lVar9 + lVar12) = 0;
      *(undefined1 *)(lVar9 + _DAT_112d7ae70) = 5;
    }
    if ((bVar2 & bVar4) == 1) {
      FUN_1013d1ca8(0);
    }
    puVar1 = (undefined8 *)(lVar9 + _DAT_112d7ae98);
    uVar8 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61170(lVar9);
    func_0x000107c6142c(uVar8);
    return;
  }
  *(char *)(lVar9 + _DAT_112d7ae68) = (char)pcStack_d0;
  lVar12 = _DAT_112d7ae88;
  func_0x000107c61428(lVar9 + _DAT_112d7ae88,auStack_a8,0,0);
  func_0x0001009f0578(lVar9 + lVar12,lVar18);
  lVar10 = lStack_c8;
  pcStack_d0 = *(code **)(lVar11 + 0x38);
  (*pcStack_d0)(lVar13,1,1,lStack_c8);
  lVar5 = (long)*(int *)(lVar5 + 0x30);
  func_0x0001009f0578(lVar18,lVar16);
  func_0x0001009f0578(lVar13,lVar16 + lVar5);
  pcVar15 = *(code **)(lVar11 + 0x30);
  lVar14 = lVar16;
  (*pcVar15)(lVar16,1,lVar10);
  if ((int)lVar14 == 1) {
    lStack_100 = lVar12;
    FUN_1013d3a10(lVar13,0x112d373d8,&UNK_10d9014c0);
    FUN_1013d3a10(lVar18,0x112d373d8,&UNK_10d9014c0);
    lVar5 = lVar16 + lVar5;
    (*pcVar15)(lVar5,1,lVar10);
    if ((int)lVar5 != 1) {
LAB_1013d2a2c:
      FUN_1013d3a10(lVar16,0x112d373d0,&UNK_10d90f8f0);
      goto LAB_1013d2cfc;
    }
    FUN_1013d3a10(lVar16,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(lVar16,uVar17);
    lVar14 = lVar16 + lVar5;
    (*pcVar15)(lVar14,1,lVar10);
    lVar3 = lStack_e0;
    if ((int)lVar14 == 1) {
      FUN_1013d3a10(lVar13,0x112d373d8,&UNK_10d9014c0);
      FUN_1013d3a10(lVar18,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar11 + 8))(uVar17,lVar10);
      goto LAB_1013d2a2c;
    }
    lStack_100 = lVar12;
    lVar12 = lStack_e0;
    (**(code **)(lVar11 + 0x20))(lStack_e0,lVar16 + lVar5,lVar10);
    FUN_100df4c40();
    uVar6 = uVar17;
    func_0x000107c5fab8(uVar17,lVar3,lVar10,lVar12);
    pcVar15 = *(code **)(lVar11 + 8);
    (*pcVar15)(lVar3,lVar10);
    FUN_1013d3a10(lVar13,0x112d373d8,&UNK_10d9014c0);
    FUN_1013d3a10(lVar18,0x112d373d8,&UNK_10d9014c0);
    (*pcVar15)(uVar17,lVar10);
    FUN_1013d3a10(lVar16,0x112d373d8,&UNK_10d9014c0);
    if ((uVar6 & 1) == 0) goto LAB_1013d2cfc;
  }
  lVar12 = lStack_d8;
  func_0x000107c5eea0(lStack_d8);
  (*pcStack_d0)(lVar12,0,1,lVar10);
  lVar5 = lStack_100;
  func_0x000107c61428(lVar9 + lStack_100,auStack_c0,0x21,0);
  lVar5 = lVar9 + lVar5;
  func_0x000100ed9cbc(lVar12);
  puVar7 = auStack_c0;
  func_0x000107c614a8();
  lVar12 = lStack_f8;
  *(undefined1 *)(lVar9 + _DAT_112d7ae90) = 0;
  func_0x000107c5eec4(lStack_f8);
  func_0x000107c5eeac();
  (**(code **)(lStack_f0 + 8))(lVar12,lStack_e8);
  puVar1 = (undefined8 *)(lVar9 + _DAT_112d7ae98);
  uVar8 = puVar1[1];
  *puVar1 = puVar7;
  puVar1[1] = lVar5;
  func_0x000107c6142c(uVar8);
LAB_1013d2cfc:
  *(undefined1 *)(lVar9 + _DAT_112d7ae78) = 0;
  FUN_1013d18d4(0);
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 1013d3a10; end: 1013d3a4f;  */

undefined8 FUN_1013d3a10(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1013d3a50; end: 1013d3a73;  */

void FUN_1013d3a50(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}


