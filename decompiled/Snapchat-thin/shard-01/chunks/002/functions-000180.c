/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e2cd00; end: 100e2cd83;  */

void FUN_100e2cd00(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100e2cd84; end: 100e2cda7;  */

void FUN_100e2cd84(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar3 = uVar6;
    func_0x000107c614f0(uVar6);
    puVar4 = &UNK_110357830;
    func_0x000107c613fc(&UNK_110357830,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar2);
    puVar5 = &UNK_110357998;
    func_0x000107c613fc(&UNK_110357998,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    func_0x000107c615f0(uVar6);
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(param_1);
    func_0x00010090569c(FUN_100e2cf34,puVar5,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 100e2cda8; end: 100e2cdcb;  */

void FUN_100e2cda8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 100e2cdcc; end: 100e2cefb;  */

undefined * FUN_100e2cdcc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e2cefc);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d3a688;
    func_0x0001000285a8(0x112d3a688,&UNK_10d9040f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
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
    uVar5 = 0x112d3a690;
    func_0x0001000285a8(0x112d3a690,&UNK_10d93eac0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100e2cefc; end: 100e2cf33;  */

void FUN_100e2cefc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e2cf34; end: 100e2cf4b;  */

void FUN_100e2cf34(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar3;
    func_0x000107c4e3cc();
    func_0x000107c61180();
    func_0x0001000a8868(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x30));
    if (lVar2 == 0) {
      lVar2 = lVar3;
      func_0x000107c4458c(lVar3);
      func_0x000107c4f544(lVar3);
      FUN_100e2b370(uVar7,lVar2,lVar3,0);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c466bc();
      puVar6 = puVar5;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar5);
      func_0x000107c42d78(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000100e2c0d0(puVar4);
      func_0x000107c61574(lVar1);
    }
    else {
      FUN_100e2b370(uVar7,2,0,1);
      FUN_100e2df78();
      uVar8 = *(undefined8 *)(lVar1 + 0x60);
      *(undefined8 *)(lVar1 + 0x60) = uVar7;
      func_0x000107c61174();
      func_0x000107c61170(uVar8);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000100e2c0d0(puVar4);
      func_0x000107c61574(lVar1);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 100e2cf4c; end: 100e2cf77;  */

uint FUN_100e2cf4c(void)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = (uint)*(byte *)(unaff_x20 + 0x20);
  if (*(byte *)(unaff_x20 + 0x20) == 2) {
    uVar1 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    func_0x000106b24440();
    *(char *)(unaff_x20 + 0x20) = (char)uVar1;
  }
  return uVar1 & 1;
}



/* Entry: 100e2cf78; end: 100e2d29b;  */

long FUN_100e2cf78(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 uVar11;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar12;
  long alStack_b0 [4];
  undefined8 uStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 2;
  lVar2 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + 0x10) = lVar2;
    lVar3 = param_3;
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
    }
    else {
      lVar3 = lVar4;
      func_0x000107c4f800();
      func_0x000107c61180();
      lVar5 = param_2;
      func_0x000107c4ac74();
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126a5e10;
      alStack_b0[0] = lVar5;
      func_0x000107c610f8();
      func_0x000107c61174();
      uStack_90 = param_1;
      func_0x000107c615f0(lVar2);
      func_0x000107c453e4();
      puVar7 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar8 = 0;
      alStack_b0[3] = param_3;
      FUN_100e2b7bc();
      lVar5 = lVar8;
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined8 *)(lVar5 + 0x38) = 0xbff0000000000000;
      *(undefined **)(lVar5 + 0x10) = puVar6;
      *(undefined **)(lVar5 + 0x18) = puVar7;
      ppuStack_68 = &PTR_DAT_110357758;
      lVar9 = 0;
      alStack_b0[2] = param_2;
      alStack_88[0] = lVar5;
      lStack_70 = lVar8;
      func_0x000100e2cc50();
      func_0x000107c613fc();
      func_0x0001000c6518(alStack_88,lVar8);
      alStack_b0[1] = param_4;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      puVar12 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar12);
      uVar11 = *puVar12;
      *(long *)(lVar9 + 0x30) = lVar8;
      *(undefined ***)(lVar9 + 0x38) = &PTR_DAT_110357758;
      *(undefined1 *)(lVar9 + 0x50) = 0;
      *(undefined **)(lVar9 + 0x58) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined8 *)(lVar9 + 0x60) = 0;
      *(long *)(lVar9 + 0x10) = alStack_b0[0];
      *(undefined8 *)(lVar9 + 0x18) = uVar11;
      *(long *)(lVar9 + 0x40) = lVar3;
      *(long *)(lVar9 + 0x48) = lVar2;
      func_0x0001000834e4(alStack_88);
      func_0x0001000285a8(0x112d3a698,&UNK_10d904100);
      func_0x000107c613fc();
      func_0x000107c6157c(lVar9);
      uVar11 = 0x100e2d2a4;
      func_0x0001000bdd8c(0x100e2d2a4,lVar9);
      uVar10 = uVar11;
      func_0x0001003a5b88();
      func_0x000107c61574(uVar11);
      puVar6 = PTR_PTR_1126a5e18;
      func_0x000107c610f8(PTR_PTR_1126a5e18);
      func_0x000107c47570();
      func_0x000107c61170(uVar10);
      *(long *)(unaff_x20 + 0x18) = lVar9;
      func_0x000107c6157c(lVar9);
      func_0x000107c42c20(param_5);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(lVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uStack_90);
      func_0x000107c61170(alStack_b0[2]);
      func_0x000107c61170(alStack_b0[3]);
      func_0x000107c61170(alStack_b0[1]);
    }
    func_0x000107c61170(param_5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2d29c);
  (*pcVar1)();
}



/* Entry: 100e2d29c; end: 100e2d2af;  */

void FUN_100e2d29c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 100e2d2b0; end: 100e2d2db;  */

void FUN_100e2d2b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2d2dc; end: 100e2d31b;  */

void FUN_100e2d2dc(ulong param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_100e2cf4c();
  if (((param_1 & 1) != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(lVar1 + 0x18),PTR_s_fetchLoginOptionsWithTrigger_com_1125c7a60,0,0);
    return;
  }
  return;
}



/* Entry: 100e2d31c; end: 100e2d323;  */

undefined8 FUN_100e2d31c(void)

{
  return 0;
}



/* Entry: 100e2d324; end: 100e2d343;  */

void FUN_100e2d324(void)

{
  func_0x000107c61168(&PTR_PTR_112d3a6e0);
  return;
}



/* Entry: 100e2d344; end: 100e2d34f; -[SCPasskeyLoginOptionsServicesImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d344(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a750;
  func_0x000107c61428(param_1 + _DAT_112d3a750,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2d350; end: 100e2d35b; -[SCPasskeyLoginOptionsServicesImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a750;
  func_0x000107c61428(param_1 + _DAT_112d3a750,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2d35c; end: 100e2d367; -[SCPasskeyLoginOptionsServicesImplEntryPoint loginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d35c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a758;
  func_0x000107c61428(param_1 + _DAT_112d3a758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2d368; end: 100e2d373; -[SCPasskeyLoginOptionsServicesImplEntryPoint setLoginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d368(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a758;
  func_0x000107c61428(param_1 + _DAT_112d3a758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2d374; end: 100e2d37f; -[SCPasskeyLoginOptionsServicesImplEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d374(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a760;
  func_0x000107c61428(param_1 + _DAT_112d3a760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2d380; end: 100e2d38b; -[SCPasskeyLoginOptionsServicesImplEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a760;
  func_0x000107c61428(param_1 + _DAT_112d3a760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2d38c; end: 100e2d397; -[SCPasskeyLoginOptionsServicesImplEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d38c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a768;
  func_0x000107c61428(param_1 + _DAT_112d3a768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2d398; end: 100e2d3db;  */

void FUN_100e2d398(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e2d3dc; end: 100e2d3e7; -[SCPasskeyLoginOptionsServicesImplEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a768;
  func_0x000107c61428(param_1 + _DAT_112d3a768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2d3e8; end: 100e2d43b;  */

void FUN_100e2d3e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2d43c; end: 100e2d483; -[SCPasskeyLoginOptionsServicesImplEntryPoint loginOptionsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d43c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a770;
  func_0x000107c61428(param_1 + _DAT_112d3a770,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e2d484; end: 100e2d4e7; -[SCPasskeyLoginOptionsServicesImplEntryPoint setLoginOptionsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2d484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a770;
  func_0x000107c61428(param_1 + _DAT_112d3a770,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e2d4e8; end: 100e2d9bb;  */

/* WARNING: Possible PIC construction at 0x000100e2d628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2d8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2d8e0) */
/* WARNING: Removing unreachable block (ram,0x000100e2d8d0) */
/* WARNING: Removing unreachable block (ram,0x000100e2d91c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d90c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d984) */
/* WARNING: Removing unreachable block (ram,0x000100e2d974) */
/* WARNING: Removing unreachable block (ram,0x000100e2d964) */
/* WARNING: Removing unreachable block (ram,0x000100e2d88c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d928) */
/* WARNING: Removing unreachable block (ram,0x000100e2d938) */
/* WARNING: Removing unreachable block (ram,0x000100e2d940) */
/* WARNING: Removing unreachable block (ram,0x000100e2d95c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d87c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d86c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d858) */
/* WARNING: Removing unreachable block (ram,0x000100e2d830) */
/* WARNING: Removing unreachable block (ram,0x000100e2d62c) */
/* WARNING: Removing unreachable block (ram,0x000100e2d904) */
/* WARNING: Removing unreachable block (ram,0x000100e2d630) */
/* WARNING: Removing unreachable block (ram,0x000100e2d8c0) */

void FUN_100e2d4e8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4c054();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3e274();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c3fa0c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        func_0x000107c4c048();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_100e2d324();
          func_0x000107c613fc();
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined1 *)(lVar6 + 0x20) = 2;
          func_0x000107c61174(unaff_x20);
          func_0x000107c61174();
          func_0x000107c61174(lVar4);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar2);
          func_0x000107c3fa04();
          func_0x000107c61180();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2d9bc);
            (*pcVar1)();
          }
          *(long *)(lVar6 + 0x10) = lVar5;
          func_0x000107c3e270(lVar4);
          func_0x000107c61180();
          func_0x000107c5c734();
          func_0x000107c61180();
          lVar2 = lVar4;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100e2d9bc; end: 100e2d9c3;  */

void FUN_100e2d9bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 100e2d9c4; end: 100e2d9eb; -[SCPasskeyLoginOptionsServicesImplEntryPoint begin] */

void FUN_100e2d9c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e2d4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e2d9ec; end: 100e2da2f; -[SCPasskeyLoginOptionsServicesImplEntryPoint end] */

void FUN_100e2d9ec(undefined8 param_1)

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



/* Entry: 100e2da30; end: 100e2dd17;  */

void FUN_100e2da30(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == 0x7265536e69676f6c) && (param_3 == -0x12ffff8c9a9c968a)) ||
       (func_0x000107c605b8(0x7265536e69676f6c,0xed00007365636976,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56114();
    }
    else {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
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
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10ed530)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef12ad0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCPasskeyLoginOptionsServicesImpl/SCPasskeyLoginOptionsServicesImplEntryPoint.swift"
                                  ,0x53,2,0x3a,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2dd18);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5610c();
          }
          goto LAB_100e2dabc;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52954();
    }
  }
LAB_100e2dabc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e2dd18; end: 100e2ddc3; -[SCPasskeyLoginOptionsServicesImplEntryPoint setValue:forIvarName:] */

void FUN_100e2dd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e2da30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100e2df58(auStack_50);
  return;
}



/* Entry: 100e2ddc4; end: 100e2de6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ddc4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3a750,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a758,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a760,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a768,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3a770) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3a778) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e2de6c; end: 100e2de8b; -[SCPasskeyLoginOptionsServicesImplEntryPoint init] */

void FUN_100e2de6c(void)

{
  FUN_100e2ddc4();
  return;
}



/* Entry: 100e2de8c; end: 100e2debf;  */

void FUN_100e2de8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e2dec0; end: 100e2df37; -[SCPasskeyLoginOptionsServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2dec0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3a750);
  func_0x000107c61610(param_1 + _DAT_112d3a758);
  func_0x000107c61610(param_1 + _DAT_112d3a760);
  func_0x000107c61610(param_1 + _DAT_112d3a768);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3a770));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3a778));
  return;
}



/* Entry: 100e2df38; end: 100e2df57;  */

void FUN_100e2df38(void)

{
  func_0x000107c61168(&PTR_PTR_11279a6b0);
  return;
}



/* Entry: 100e2df58; end: 100e2df77;  */

void FUN_100e2df58(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100e2df6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100e2df78; end: 100e2e46f;  */

undefined * FUN_100e2df78(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined *unaff_x20;
  long lVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar3 = unaff_x20;
  func_0x000107c4fdb4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2e17c);
    (*pcVar1)();
  }
  puVar4 = unaff_x20;
  func_0x000107c4d738();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2e188);
    (*pcVar1)();
  }
  puVar5 = puVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar4);
  puVar4 = unaff_x20;
  func_0x000107c5dadc();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2e194);
    (*pcVar1)();
  }
  puVar6 = unaff_x20;
  func_0x000107c3dc1c();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = lVar11;
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000100e2e194();
    func_0x000107c61170(puVar6);
  }
  func_0x000107c42bd8();
  func_0x000107c5ee88(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      (double)(long)unaff_x20 / 1000.0);
  puVar6 = PTR_PTR_1126a5e08;
  func_0x000107c610f8(PTR_PTR_1126a5e08);
  puVar8 = puVar5;
  func_0x000107c5ee20(puVar5,param_2);
  uVar9 = 0;
  FUN_100e2e470(0,0x112d3a1f0,&PTR_PTR_1126a5dc0);
  puVar10 = puVar7;
  func_0x000107c5fc48(puVar7,uVar9);
  func_0x000107c6142c(puVar7);
  func_0x000107c5ee70();
  func_0x000107c482e4(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  func_0x00010006c090(puVar5,param_2);
  (**(code **)(lStack_68 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return puVar6;
}



/* Entry: 100e2e470; end: 100e2e4af;  */

void FUN_100e2e470(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100e2e4b0; end: 100e2e51b;  */

void FUN_100e2e4b0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_100e2e470(0,0x112d3a1f0,&PTR_PTR_1126a5dc0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d3a7b0;
  plVar5 = (long *)&UNK_10d904190;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100e2e51c; end: 100e2e643;  */

ulong FUN_100e2e51c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2e644);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100e2e644(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2e640);
      (*pcVar1)();
    }
    FUN_100e2e6c4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100e2e644; end: 100e2e6c3;  */

undefined * FUN_100e2e644(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100e2e4b0();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100e2e6c4; end: 100e2e7db;  */

long FUN_100e2e6c4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100e2e7d8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100e2e7dc);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100e2e470(0,0x112d3a1f0,&PTR_PTR_1126a5dc0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100e2e470(0,0x112d3a1f0,&PTR_PTR_1126a5dc0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e2e7d4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100e2e7dc; end: 100e2e867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e2e7dc(void)

{
  long lVar1;
  uint uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d3a7c8;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112d3a7c8);
  if (*(byte *)(unaff_x20 + _DAT_112d3a7c8) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112d3a7c0);
    func_0x000106b24440();
    *(char *)(unaff_x20 + lVar1) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 100e2e868; end: 100e2e86f; -[_TtC27SCPasskeyEnrollmentTakeover31PasskeyEnrollmentSignalProvider preCheckSource] */

undefined8 FUN_100e2e868(void)

{
  return 0x16;
}



/* Entry: 100e2e870; end: 100e2e8a3; -[_TtC27SCPasskeyEnrollmentTakeover31PasskeyEnrollmentSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100e2e870(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e2e9d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e2e8a4; end: 100e2e903; -[_TtC27SCPasskeyEnrollmentTakeover31PasskeyEnrollmentSignalProvider init] */

void FUN_100e2e8a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPasskeyEnrollmentTakeover.PasskeyEnrollmentSignalProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2e8d0);
  (*pcVar1)();
}



/* Entry: 100e2e904; end: 100e2e93b; -[_TtC27SCPasskeyEnrollmentTakeover31PasskeyEnrollmentSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2e904(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3a7b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d3a7c0));
  return;
}



/* Entry: 100e2e93c; end: 100e2e9b3;  */

/* WARNING: Possible PIC construction at 0x000100e2e998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2e99c) */

void FUN_100e2e93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100e2e9b4; end: 100e2e9d3;  */

void FUN_100e2e9b4(void)

{
  func_0x000107c61168(&PTR_PTR_11279a790);
  return;
}



/* Entry: 100e2e9d4; end: 100e2eceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e2e9d4(void)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  char *pcVar9;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112d3a7b8);
  uVar3 = uVar8;
  func_0x000107c49e14();
  if ((uVar3 & 1) == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    uVar5 = 0;
    func_0x000107c6010c(0);
    func_0x000107c451b0(puVar6);
  }
  else {
    puVar6 = &UNK_110357ae0;
    func_0x000107c613fc(&UNK_110357ae0,0x11,7);
    pcVar9 = puVar6 + 0x10;
    *pcVar9 = '\0';
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_100e2ecec;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100e2e93c;
    puStack_78 = &UNK_110357af8;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar4);
    puVar7 = puStack_68;
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c4c638(uVar8);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61428(pcVar9,auStack_a8,0,0);
    cVar1 = *pcVar9;
    func_0x000107c61574();
    if (cVar1 == '\x01') {
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x0001002ed07c(0);
      uVar5 = 0;
      func_0x000107c6010c(0);
      func_0x000107c451b0(puVar6);
    }
    else {
      FUN_100e2e7dc();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        func_0x0001002ed07c(0);
        uVar5 = 0;
        func_0x000107c6010c(0);
        func_0x000107c451b0(puVar6);
      }
      else {
        puVar7 = &UNK_110357ae0;
        func_0x000107c613fc(&UNK_110357ae0,0x11,7);
        pcVar9 = puVar7 + 0x10;
        *pcVar9 = '\0';
        pcStack_70 = FUN_100e2ed5c;
        puStack_90 = puVar2;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_100e2e93c;
        puStack_78 = &UNK_110357b20;
        ppuVar4 = &puStack_90;
        puStack_68 = puVar7;
        func_0x000107c60bc4(ppuVar4);
        puVar6 = puStack_68;
        func_0x000107c6157c(puVar7);
        func_0x000107c61574(puVar6);
        func_0x000107c4c638(uVar8);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61428(pcVar9,&puStack_90,0,0);
        cVar1 = *pcVar9;
        func_0x000107c61574();
        if (cVar1 == '\x01') {
          puVar6 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          func_0x0001002ed07c(0);
          uVar5 = 0;
          func_0x000107c6010c(0);
          func_0x000107c451b0(puVar6);
        }
        else {
          func_0x000100e2e820();
          puVar6 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          func_0x0001002ed07c(0);
          if (((ulong)puVar7 & 1) == 0) {
            uVar5 = 1;
            func_0x000107c6010c(1);
            func_0x000107c451b0(puVar6);
          }
          else {
            uVar5 = 0;
            func_0x000107c6010c(0);
            func_0x000107c451b0(puVar6);
          }
        }
      }
    }
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  return puVar6;
}



/* Entry: 100e2ecec; end: 100e2ed3f;  */

void FUN_100e2ecec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c4c068();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(bool *)(unaff_x20 + 0x10) = param_2 == 2;
  return;
}



/* Entry: 100e2ed40; end: 100e2ed5b;  */

void FUN_100e2ed40(long param_1,long param_2)

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



/* Entry: 100e2ed5c; end: 100e2edaf;  */

void FUN_100e2ed5c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c4c068();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(bool *)(unaff_x20 + 0x10) = param_2 == 4;
  return;
}



/* Entry: 100e2edb0; end: 100e2edb7;  */

void FUN_100e2edb0(long param_1,long param_2)

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



/* Entry: 100e2edb8; end: 100e2ee27;  */

undefined8 FUN_100e2edb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_100e2ee44(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100e2ee28; end: 100e2ee43;  */

void FUN_100e2ee28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2ee44; end: 100e2ef3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ee44(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar2 = *(undefined8 *)(param_2 + _DAT_113091ae0);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_3 != 0) {
    lVar3 = 0;
    FUN_100e2e9b4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined1 *)(lVar4 + _DAT_112d3a7c8) = 2;
    *(undefined1 *)(lVar4 + _DAT_112d3a7d0) = 2;
    *(undefined8 *)(lVar4 + _DAT_112d3a7b8) = uVar2;
    *(long *)(lVar4 + _DAT_112d3a7c0) = param_3;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(plVar5);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2ef3c);
  (*pcVar1)();
}



/* Entry: 100e2ef3c; end: 100e2ef5b;  */

void FUN_100e2ef3c(void)

{
  func_0x000107c61168(&PTR_PTR_112d3a840);
  return;
}



/* Entry: 100e2ef5c; end: 100e2efcb;  */

undefined8 FUN_100e2ef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_100e2efe8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100e2efcc; end: 100e2efe7;  */

void FUN_100e2efcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2efe8; end: 100e2f0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2efe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_100e2faf0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined **)(lVar4 + _DAT_112d3a950) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d3a930);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d3a938) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d3a958) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d3a948) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112d3a940) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar2);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100e2f0f0; end: 100e2f10f;  */

void FUN_100e2f0f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d3a8d8);
  return;
}



/* Entry: 100e2f110; end: 100e2f18b; -[_TtC27SCPasskeyEnrollmentTakeover33PasskeyEnrollmentTakeoverProvider canShowCampaign:] */

uint FUN_100e2f110(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == -0x2fffffffffffffea) && (param_2 == -0x7ffffffef10ed470)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010ef12b90,param_3,param_2,0);
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 100e2f18c; end: 100e2f21f; -[_TtC27SCPasskeyEnrollmentTakeover33PasskeyEnrollmentTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000100e2f200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2f204) */

void FUN_100e2f18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_100e2fdc4(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e2f220; end: 100e2f27f; -[_TtC27SCPasskeyEnrollmentTakeover33PasskeyEnrollmentTakeoverProvider init] */

void FUN_100e2f220(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPasskeyEnrollmentTakeover.PasskeyEnrollmentTakeoverProvider",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2f24c);
  (*pcVar1)();
}



/* Entry: 100e2f280; end: 100e2f2eb; -[_TtC27SCPasskeyEnrollmentTakeover33PasskeyEnrollmentTakeoverProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e2f29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2f2a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2f280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d3a948));
  return;
}



/* Entry: 100e2f2ec; end: 100e2f5df;  */

void FUN_100e2f2ec(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100e2f5e0;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_110357b88;
  ppuVar3 = &puStack_a0;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  puVar4 = &UNK_110357bc0;
  func_0x000107c613fc(&UNK_110357bc0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  puVar5 = &UNK_110357be8;
  func_0x000107c613fc(&UNK_110357be8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100e2f6ec;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_80 = FUN_100e2f6f4;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_110357c00;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar8 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar8);
  pcStack_80 = FUN_100e2f5e0;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_110357c28;
  ppuVar7 = &puStack_a0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  puVar8 = &UNK_110357c60;
  func_0x000107c613fc(&UNK_110357c60,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = unaff_x20;
  puVar9 = &UNK_110357c88;
  func_0x000107c613fc(&UNK_110357c88,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x100e2f714;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = FUN_100e2fa98;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e2fab8;
  puStack_88 = &UNK_110357ca0;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c4c61c(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar3);
  uVar11 = 0;
  func_0x000107c61544(0,"",0x85,0x4f,0x2f,1);
  func_0x000107c61574(puVar4);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e2f5d4);
    (*pcVar2)();
  }
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x85,0x51,0x1c,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e2f5d8);
    (*pcVar2)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x85,0x5b,0x1e,1);
  func_0x000107c61574(puVar8);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e2f5dc);
    (*pcVar2)();
  }
  puVar4 = puVar9;
  func_0x000107c61544(puVar9,"",0x85,0x5d,0x15,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e2f5e0);
  (*pcVar2)();
}



/* Entry: 100e2f5e0; end: 100e2f607;  */

void FUN_100e2f5e0(void)

{
  return;
}



/* Entry: 100e2f608; end: 100e2f6eb;  */

/* WARNING: Possible PIC construction at 0x000100e2f6c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2f608(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_112d3a958) = 1;
  lVar1 = *(long *)(param_1 + _DAT_112d3a938);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_112d3a948);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d3a950);
    func_0x00010018cc3c(lVar2);
    lVar1 = lVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e2f6ec; end: 100e2f6f3;  */

/* WARNING: Possible PIC construction at 0x000100e2f6c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2f6ec(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  *(undefined1 *)(lVar2 + _DAT_112d3a958) = 1;
  lVar1 = *(long *)(lVar2 + _DAT_112d3a938);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar2 + _DAT_112d3a948);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar2 + _DAT_112d3a950);
    func_0x00010018cc3c(lVar2);
    lVar1 = lVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e2f6f4; end: 100e2f733;  */

void FUN_100e2f6f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e2f734; end: 100e2fa97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2f734(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  code *pcVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d3a940));
  func_0x000107c61180();
  func_0x000107c615e8();
  lVar3 = _DAT_112d3a938;
  lVar13 = *(long *)(unaff_x20 + _DAT_112d3a938);
  if (lVar13 == 0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_c0 = (undefined *)0x0;
    pcVar16 = (code *)0x0;
    puVar14 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puStack_c0 = &UNK_110357d20;
    func_0x000107c613fc(&UNK_110357d20,0x20,7);
    *(long *)(puStack_c0 + 0x10) = unaff_x20;
    *(long *)(puStack_c0 + 0x18) = lVar13;
    puVar4 = &UNK_110357d48;
    func_0x000107c613fc(&UNK_110357d48,0x20,7);
    uStack_b0 = 0x100e2ff24;
    *(undefined8 *)(puVar4 + 0x10) = 0x100e2ff24;
    *(undefined **)(puVar4 + 0x18) = puStack_c0;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x100e2ff94;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10006eb60;
    puStack_88 = &UNK_110357d60;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61174();
    lVar6 = unaff_x20;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110357d98;
    func_0x000107c613fc(&UNK_110357d98,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar6;
    *(long *)(puVar4 + 0x18) = lVar13;
    puVar14 = &UNK_110357dc0;
    func_0x000107c613fc(&UNK_110357dc0,0x20,7);
    uStack_b8 = 0x100e2ff2c;
    *(undefined8 *)(puVar14 + 0x10) = 0x100e2ff2c;
    *(undefined **)(puVar14 + 0x18) = puVar4;
    pcStack_80 = FUN_100e2ff34;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100e2fcec;
    puStack_88 = &UNK_110357dd8;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar14;
    func_0x000107c60bc4(ppuVar7);
    puVar14 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar14);
    puVar14 = &UNK_110357e10;
    func_0x000107c613fc(&UNK_110357e10,0x20,7);
    *(long *)(puVar14 + 0x10) = lVar6;
    *(long *)(puVar14 + 0x18) = lVar13;
    puVar8 = &UNK_110357e38;
    func_0x000107c613fc(&UNK_110357e38,0x20,7);
    pcVar16 = FUN_100e2ff54;
    *(code **)(puVar8 + 0x10) = FUN_100e2ff54;
    *(undefined **)(puVar8 + 0x18) = puVar14;
    pcStack_80 = (code *)0x100e2ff98;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10006eb60;
    puStack_88 = &UNK_110357e50;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_78;
    func_0x000107c61174(lVar13);
    func_0x000107c61174(lVar6);
    func_0x000107c61574(puVar8);
    pcStack_80 = (code *)0x100e2f5e8;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10006eb60;
    puStack_88 = &UNK_110357e78;
    ppuVar10 = &puStack_a0;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_78);
    func_0x000107c4c758(param_1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar13);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d3a930);
  pcVar15 = (code *)*puVar1;
  if (pcVar15 == (code *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = puVar1[1];
    func_0x000107c6157c(uVar12);
    (*pcVar15)();
    func_0x000100c9808c(pcVar15,uVar12);
    uVar12 = *puVar1;
  }
  uVar11 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100c9808c(uVar12,uVar11);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61170(uVar12);
  func_0x000100c9808c(uStack_b0,puStack_c0);
  func_0x000100c9808c(uStack_b8,puVar4);
  func_0x000100c9808c(pcVar16,puVar14);
  return;
}



/* Entry: 100e2fa98; end: 100e2fab7;  */

void FUN_100e2fa98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e2fab8; end: 100e2faef;  */

void FUN_100e2fab8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100e2faf0; end: 100e2fb0f;  */

void FUN_100e2faf0(void)

{
  func_0x000107c61168(&PTR_PTR_11279a868);
  return;
}



/* Entry: 100e2fb10; end: 100e2fb1f;  */

undefined1  [16] FUN_100e2fb10(void)

{
  return ZEXT816(0x110357cd8);
}



/* Entry: 100e2fb20; end: 100e2fceb; -[_TtC27SCPasskeyEnrollmentTakeover33PasskeyEnrollmentTakeoverProvider passkeyEnrollmentStatusDidChange:] */

/* WARNING: Possible PIC construction at 0x000100e2fb58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2fb5c) */

void FUN_100e2fb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100e2f2ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e2fcec; end: 100e2fd0f;  */

void FUN_100e2fcec(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return;
}



/* Entry: 100e2fd10; end: 100e2fdc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2fd10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112d3a948);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d3a950);
    func_0x00010018cc3c(uVar2);
    uVar3 = uVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar2);
    func_0x000107c4c4b8(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100e2fdc4; end: 100e2ff17;  */

/* WARNING: Possible PIC construction at 0x000100e2fe70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2fec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2fed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2fec4) */
/* WARNING: Removing unreachable block (ram,0x000100e2fe74) */
/* WARNING: Removing unreachable block (ram,0x000100e2fed4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2fdc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = &UNK_110357cf8;
  func_0x000107c613fc(&UNK_110357cf8,0x18,7);
  *(long *)(puVar3 + 0x10) = param_4;
  func_0x000107c60bc4(param_4);
  lVar4 = 0;
  func_0x0001008cd514();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(param_3 + _DAT_112d3a930);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_100e2ff18;
    puVar1[1] = puVar3;
    func_0x000107c61174();
    func_0x000100c9808c(uVar5,uVar2);
    uVar5 = *(undefined8 *)(param_3 + _DAT_112d3a938);
    *(undefined8 *)(param_3 + _DAT_112d3a938) = param_1;
    func_0x000107c6157c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  (**(code **)(param_4 + 0x10))(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100e2ff18; end: 100e2ff33;  */

void FUN_100e2ff18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100e2ff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100e2ff34; end: 100e2ff53;  */

void FUN_100e2ff34(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e2ff54; end: 100e2ff9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ff54(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + _DAT_112d3a948);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d3a950);
    func_0x00010018cc3c(uVar3);
    uVar4 = uVar3;
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar3);
    func_0x000107c4c4b8(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 100e2ff9c; end: 100e2ffa7; -[SCPasskeyEnrollmentSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ff9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a988;
  func_0x000107c61428(param_1 + _DAT_112d3a988,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2ffa8; end: 100e2ffb3; -[SCPasskeyEnrollmentSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ffa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a988;
  func_0x000107c61428(param_1 + _DAT_112d3a988,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2ffb4; end: 100e2ffbf; -[SCPasskeyEnrollmentSignalProviderEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ffb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a990;
  func_0x000107c61428(param_1 + _DAT_112d3a990,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2ffc0; end: 100e2ffcb; -[SCPasskeyEnrollmentSignalProviderEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ffc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a990;
  func_0x000107c61428(param_1 + _DAT_112d3a990,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2ffcc; end: 100e2ffd7; -[SCPasskeyEnrollmentSignalProviderEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2ffcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a998;
  func_0x000107c61428(param_1 + _DAT_112d3a998,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2ffd8; end: 100e3001b;  */

void FUN_100e2ffd8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e3001c; end: 100e30027; -[SCPasskeyEnrollmentSignalProviderEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3001c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a998;
  func_0x000107c61428(param_1 + _DAT_112d3a998,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e30028; end: 100e3007b;  */

void FUN_100e30028(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3007c; end: 100e3017f;  */

/* WARNING: Possible PIC construction at 0x000100e3010c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3011c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e30110) */
/* WARNING: Removing unreachable block (ram,0x000100e30120) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100e3007c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3fa0c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_100e2ef3c(0);
        func_0x000107c613fc();
        FUN_100e2ee44(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100e30180; end: 100e301a7; -[SCPasskeyEnrollmentSignalProviderEntryPoint begin] */

void FUN_100e30180(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e3007c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e301a8; end: 100e301eb; -[SCPasskeyEnrollmentSignalProviderEntryPoint end] */

void FUN_100e301a8(undefined8 param_1)

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



/* Entry: 100e301ec; end: 100e303ef;  */

void FUN_100e301ec(long param_1,long param_2,long param_3)

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
        if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCPasskeyEnrollmentTakeover/SCPasskeyEnrollmentSignalProviderEntryPoint.swift"
                              ,0x4d,2,0x2e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e303f0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
        goto LAB_100e30278;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3f8();
  }
LAB_100e30278:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e303f0; end: 100e3049b; -[SCPasskeyEnrollmentSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100e303f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e301ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e3049c; end: 100e30523; -[SCPasskeyEnrollmentSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3049c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d3a988,0);
  func_0x000107c61614(param_1 + _DAT_112d3a990,0);
  func_0x000107c61614(param_1 + _DAT_112d3a998,0);
  *(undefined8 *)(param_1 + _DAT_112d3a9a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e30524; end: 100e30557;  */

void FUN_100e30524(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e30558; end: 100e305af; -[SCPasskeyEnrollmentSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30558(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3a988);
  func_0x000107c61610(param_1 + _DAT_112d3a990);
  func_0x000107c61610(param_1 + _DAT_112d3a998);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3a9a0));
  return;
}


