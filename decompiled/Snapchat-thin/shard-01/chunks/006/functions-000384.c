/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011f7044; end: 1011f70f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7044(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d671d8);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d671e0);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d671e8);
  *(undefined8 *)(unaff_x20 + _DAT_112d671e8) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d671d0);
  *(undefined8 *)(unaff_x20 + _DAT_112d671d0) = 0;
  func_0x000107c615e8(uVar3);
  lVar2 = _DAT_112d671f0;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d671f0) != 0) {
    func_0x000107c41848();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c615e8(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112d67200) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d671f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d67208) = 0;
  return;
}



/* Entry: 1011f70f8; end: 1011f7147; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher didSendWithSelectionState:] */

/* WARNING: Possible PIC construction at 0x0001011f7130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f7134) */

void FUN_1011f70f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011f6be8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011f7148; end: 1011f71b3; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher didDismissWithSelectedItems:sendToDismissSource:] */

/* WARNING: Possible PIC construction at 0x0001011f7184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f7188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7148(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d67218);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_1011f7044();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1011f71b4; end: 1011f72bf;  */

/* WARNING: Removing unreachable block (ram,0x0001011f72b4) */

undefined1  [16] FUN_1011f71b4(undefined8 ***param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    (*param_4)(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    (*param_4)(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 1011f72c0; end: 1011f72fb;  */

void FUN_1011f72c0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1011f72fc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1011f72fc; end: 1011f73eb;  */

undefined * FUN_1011f72fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f73ec);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d67290;
    func_0x0001000285a8(0x112d67290,&UNK_10d9fd630);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1011f73ec; end: 1011f742b;  */

void FUN_1011f73ec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011f742c; end: 1011f7433;  */

void FUN_1011f742c(long param_1,long param_2)

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



/* Entry: 1011f7434; end: 1011f770f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d672a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d672b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d672b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d672c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d672c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d672d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d672d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d672e0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d672e8) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011f7710; end: 1011f7743; -[_TtC37ValdiPublicGroupsShareServiceProvider45ValdiPublicGroupsSharePageLauncherFactoryImpl publicGroupsShareLauncher] */

void FUN_1011f7710(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001011f7520();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011f7744; end: 1011f77a3; -[_TtC37ValdiPublicGroupsShareServiceProvider45ValdiPublicGroupsSharePageLauncherFactoryImpl init] */

void FUN_1011f7744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiPublicGroupsShareServiceProvider.ValdiPublicGroupsSharePageLauncherFactoryImpl"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f7770);
  (*pcVar1)();
}



/* Entry: 1011f77a4; end: 1011f784b; -[_TtC37ValdiPublicGroupsShareServiceProvider45ValdiPublicGroupsSharePageLauncherFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011f77c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f77f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f7830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f77f4) */
/* WARNING: Removing unreachable block (ram,0x0001011f77c4) */
/* WARNING: Removing unreachable block (ram,0x0001011f7834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f77a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d672a8));
  return;
}



/* Entry: 1011f784c; end: 1011f786b;  */

void FUN_1011f784c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba190);
  return;
}



/* Entry: 1011f786c; end: 1011f790b;  */

void FUN_1011f786c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  *(undefined8 *)(unaff_x20 + 0x48) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_8;
  *(undefined8 *)(unaff_x20 + 0x30) = param_9;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_4;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  return;
}



/* Entry: 1011f790c; end: 1011f7b1f;  */

code * FUN_1011f790c(void)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112d67318,&UNK_10d92b7e0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_1011f7d1c;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d67320,&UNK_10d92b7e8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar2 = FUN_1011f7f20;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d67328,&UNK_10d92b7f0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar3 = FUN_1011f8124;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d67330,&UNK_10d92b7f8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar4 = FUN_1011f8228;
  func_0x0001000bdd8c();
  puVar5 = &UNK_110392d28;
  func_0x000107c613fc(&UNK_110392d28,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(code **)(puVar5 + 0x20) = pcVar1;
  *(code **)(puVar5 + 0x28) = pcVar2;
  *(code **)(puVar5 + 0x30) = pcVar3;
  func_0x0001000285a8(0x112d67338,&UNK_10d92b800);
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  pcVar6 = FUN_1011f83b0;
  func_0x0001000bdd8c(FUN_1011f83b0,puVar5);
  pcVar7 = pcVar6;
  func_0x0001003a5b88();
  uVar8 = 0;
  func_0x0001039c8934(0);
  func_0x000107c610f8();
  func_0x0001039c884c(pcVar7,uVar8);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar6);
  return pcVar7;
}



/* Entry: 1011f7b20; end: 1011f7d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7b20(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c5c894();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x48) + _DAT_11307fc48);
  lVar9 = *(long *)(*(long *)(param_2 + 0x50) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011f0eb4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d670d0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112d670d8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d670e0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d670e8) = uVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  lVar6 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    uVar7 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2dbe0);
    lVar11 = lVar6;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
  }
  *(long *)(lVar5 + _DAT_112d670f0) = lVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1011f7d1c; end: 1011f7d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7d1c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c5c894();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_11307fc48);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011f0eb4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d670d0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112d670d8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d670e0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d670e8) = uVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  lVar6 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    uVar7 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2dbe0);
    lVar11 = lVar6;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
  }
  *(long *)(lVar5 + _DAT_112d670f0) = lVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1011f7d24; end: 1011f7f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7d24(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c5c894();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x48) + _DAT_11307fc48);
  lVar9 = *(long *)(*(long *)(param_2 + 0x50) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011ef630();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d67078) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112d67080) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d67088) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d67090) = uVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  lVar6 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    uVar7 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010ef2dbc0);
    lVar11 = lVar6;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
  }
  *(long *)(lVar5 + _DAT_112d67098) = lVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1011f7f20; end: 1011f7f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7f20(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c5c894();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_11307fc48);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011ef630();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d67078) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112d67080) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d67088) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d67090) = uVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  lVar6 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    uVar7 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010ef2dbc0);
    lVar11 = lVar6;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
  }
  *(long *)(lVar5 + _DAT_112d67098) = lVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1011f7f28; end: 1011f8123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f7f28(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c5c894();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x48) + _DAT_11307fc48);
  lVar9 = *(long *)(*(long *)(param_2 + 0x50) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011f465c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d67180) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112d67188) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d67190) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d67198) = uVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  lVar6 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    uVar7 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef2db90);
    lVar11 = lVar6;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
  }
  *(long *)(lVar5 + _DAT_112d671a0) = lVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1011f8124; end: 1011f812b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8124(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c5c894();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_11307fc48);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011f465c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d67180) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112d67188) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d67190) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d67198) = uVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  lVar6 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    uVar7 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef2db90);
    lVar11 = lVar6;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
  }
  *(long *)(lVar5 + _DAT_112d671a0) = lVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1011f812c; end: 1011f8227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f812c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_60;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c4dad8();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_1011f21e4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112d67120) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d67128) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112d67130) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112d67138) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112d67140) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112d67148) = uVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_60,puVar3);
  *param_1 = plVar8;
  return;
}



/* Entry: 1011f8228; end: 1011f822f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8228(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c4dad8();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_1011f21e4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112d67120) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d67128) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112d67130) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112d67138) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112d67140) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112d67148) = uVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_60,puVar3);
  *param_1 = plVar8;
  return;
}



/* Entry: 1011f8230; end: 1011f83af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8230(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c4dad8();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_1011f784c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d672a8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d672b0) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112d672b8) = param_3;
  *(undefined8 *)(lVar6 + _DAT_112d672c0) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112d672c8) = param_4;
  *(undefined8 *)(lVar6 + _DAT_112d672d0) = param_5;
  *(undefined8 *)(lVar6 + _DAT_112d672d8) = param_6;
  *(undefined8 *)(lVar6 + _DAT_112d672e0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112d672e8) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  plVar7 = &lStack_70;
  func_0x000107c61154(plVar7,puVar1);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1011f83b0; end: 1011f83bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f83b0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_70;
  long lStack_68;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  uVar13 = *(undefined8 *)(lVar9 + 0x18);
  uVar12 = *(undefined8 *)(lVar9 + 0x38);
  uVar5 = *(undefined8 *)(lVar9 + 0x58);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(lVar9 + 0x70);
  func_0x000107c4dad8();
  func_0x000107c61180();
  lVar8 = 0;
  FUN_1011f784c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112d672a8) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112d672b0) = uVar13;
  *(undefined8 *)(lVar9 + _DAT_112d672b8) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112d672c0) = uVar12;
  *(undefined8 *)(lVar9 + _DAT_112d672c8) = uVar1;
  *(undefined8 *)(lVar9 + _DAT_112d672d0) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112d672d8) = uVar11;
  *(undefined8 *)(lVar9 + _DAT_112d672e0) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112d672e8) = uVar7;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar11);
  plVar10 = &lStack_70;
  func_0x000107c61154(plVar10,puVar4);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1011f83c0; end: 1011f8563;  */

/* WARNING: Possible PIC construction at 0x0001011f83cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f83dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f83ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f83fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f841c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f8410) */
/* WARNING: Removing unreachable block (ram,0x0001011f8400) */
/* WARNING: Removing unreachable block (ram,0x0001011f83f0) */
/* WARNING: Removing unreachable block (ram,0x0001011f83e0) */
/* WARNING: Removing unreachable block (ram,0x0001011f83d0) */
/* WARNING: Removing unreachable block (ram,0x0001011f8420) */

void FUN_1011f83c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1011f8564; end: 1011f8587;  */

void FUN_1011f8564(undefined8 *param_1,undefined8 param_2)

{
  FUN_1011f790c();
  *param_1 = param_2;
  return;
}



/* Entry: 1011f8588; end: 1011f8653;  */

undefined1  [16] FUN_1011f8588(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f6567617373656d;
  func_0x000107c5fadc(0x5f6567617373656d,0xec000000746e6573);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2dc00);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f8654);
  (*pcVar1)();
}



/* Entry: 1011f8654; end: 1011f865f; -[SCValdiPublicGroupsShareServiceProvider deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8654(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67478;
  func_0x000107c61428(param_1 + _DAT_112d67478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8660; end: 1011f866b; -[SCValdiPublicGroupsShareServiceProvider setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8660(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67478;
  func_0x000107c61428(param_1 + _DAT_112d67478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f866c; end: 1011f8677; -[SCValdiPublicGroupsShareServiceProvider coreMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f866c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67480;
  func_0x000107c61428(param_1 + _DAT_112d67480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8678; end: 1011f8683; -[SCValdiPublicGroupsShareServiceProvider setCoreMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8678(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67480;
  func_0x000107c61428(param_1 + _DAT_112d67480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f8684; end: 1011f868f; -[SCValdiPublicGroupsShareServiceProvider conversationDestinationParsingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8684(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67488;
  func_0x000107c61428(param_1 + _DAT_112d67488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8690; end: 1011f869b; -[SCValdiPublicGroupsShareServiceProvider setConversationDestinationParsingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67488;
  func_0x000107c61428(param_1 + _DAT_112d67488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f869c; end: 1011f86a7; -[SCValdiPublicGroupsShareServiceProvider taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f869c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67490;
  func_0x000107c61428(param_1 + _DAT_112d67490,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f86a8; end: 1011f86b3; -[SCValdiPublicGroupsShareServiceProvider setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67490;
  func_0x000107c61428(param_1 + _DAT_112d67490,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f86b4; end: 1011f86bf; -[SCValdiPublicGroupsShareServiceProvider sendToScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67498;
  func_0x000107c61428(param_1 + _DAT_112d67498,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f86c0; end: 1011f86cb; -[SCValdiPublicGroupsShareServiceProvider setSendToScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67498;
  func_0x000107c61428(param_1 + _DAT_112d67498,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f86cc; end: 1011f86d7; -[SCValdiPublicGroupsShareServiceProvider chatCameraScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674a0;
  func_0x000107c61428(param_1 + _DAT_112d674a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f86d8; end: 1011f86e3; -[SCValdiPublicGroupsShareServiceProvider setChatCameraScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674a0;
  func_0x000107c61428(param_1 + _DAT_112d674a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f86e4; end: 1011f86ef; -[SCValdiPublicGroupsShareServiceProvider navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674a8;
  func_0x000107c61428(param_1 + _DAT_112d674a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f86f0; end: 1011f86fb; -[SCValdiPublicGroupsShareServiceProvider setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674a8;
  func_0x000107c61428(param_1 + _DAT_112d674a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f86fc; end: 1011f8707; -[SCValdiPublicGroupsShareServiceProvider composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f86fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674b0;
  func_0x000107c61428(param_1 + _DAT_112d674b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8708; end: 1011f8713; -[SCValdiPublicGroupsShareServiceProvider setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8708(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674b0;
  func_0x000107c61428(param_1 + _DAT_112d674b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f8714; end: 1011f871f; -[SCValdiPublicGroupsShareServiceProvider textSendingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8714(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674b8;
  func_0x000107c61428(param_1 + _DAT_112d674b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8720; end: 1011f872b; -[SCValdiPublicGroupsShareServiceProvider setTextSendingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674b8;
  func_0x000107c61428(param_1 + _DAT_112d674b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f872c; end: 1011f8737; -[SCValdiPublicGroupsShareServiceProvider sigNotificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f872c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674c0;
  func_0x000107c61428(param_1 + _DAT_112d674c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8738; end: 1011f8743; -[SCValdiPublicGroupsShareServiceProvider setSigNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674c0;
  func_0x000107c61428(param_1 + _DAT_112d674c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f8744; end: 1011f874f; -[SCValdiPublicGroupsShareServiceProvider offPlatformLinkGenerationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674c8;
  func_0x000107c61428(param_1 + _DAT_112d674c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011f8750; end: 1011f8793;  */

void FUN_1011f8750(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011f8794; end: 1011f879f; -[SCValdiPublicGroupsShareServiceProvider setOffPlatformLinkGenerationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674c8;
  func_0x000107c61428(param_1 + _DAT_112d674c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f87a0; end: 1011f87f3;  */

void FUN_1011f87a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011f87f4; end: 1011f883b; -[SCValdiPublicGroupsShareServiceProvider sendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f87f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674d0;
  func_0x000107c61428(param_1 + _DAT_112d674d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011f883c; end: 1011f8847; -[SCValdiPublicGroupsShareServiceProvider setSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f883c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674d0;
  func_0x000107c61428(param_1 + _DAT_112d674d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011f8848; end: 1011f888f; -[SCValdiPublicGroupsShareServiceProvider chatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d674d8;
  func_0x000107c61428(param_1 + _DAT_112d674d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011f8890; end: 1011f889b; -[SCValdiPublicGroupsShareServiceProvider setChatCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f8890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d674d8;
  func_0x000107c61428(param_1 + _DAT_112d674d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011f889c; end: 1011f88fb;  */

void FUN_1011f889c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1011f88fc; end: 1011f8e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f88fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c41420();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c407c4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4066c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5c78c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c51ebc();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c51eac();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c3f830();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c3f840();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  lVar1 = lVar7;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c4d52c();
                  func_0x000107c61180();
                  if (lVar9 == 0) {
                    func_0x000107c61170(lVar1);
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    lVar1 = lVar8;
                  }
                  else {
                    lVar10 = unaff_x20;
                    func_0x000107c40014();
                    func_0x000107c61180();
                    if (lVar10 == 0) {
                      func_0x000107c61170(lVar1);
                      func_0x000107c61170(lVar2);
                      func_0x000107c61170(lVar3);
                      func_0x000107c61170(lVar4);
                      func_0x000107c61170(lVar5);
                      func_0x000107c61170(lVar6);
                      func_0x000107c61170(lVar7);
                      func_0x000107c61170(lVar8);
                      lVar1 = lVar9;
                    }
                    else {
                      lVar11 = unaff_x20;
                      func_0x000107c5c898();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        func_0x000107c61170(lVar2);
                        func_0x000107c61170(lVar3);
                        func_0x000107c61170(lVar4);
                        func_0x000107c61170(lVar5);
                        func_0x000107c61170(lVar6);
                        func_0x000107c61170(lVar7);
                        func_0x000107c61170(lVar8);
                        func_0x000107c61170(lVar9);
                        lVar1 = lVar10;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c5af64();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar3);
                          func_0x000107c61170(lVar4);
                          func_0x000107c61170(lVar5);
                          func_0x000107c61170(lVar6);
                          func_0x000107c61170(lVar7);
                          func_0x000107c61170(lVar8);
                          func_0x000107c61170(lVar9);
                          func_0x000107c61170(lVar10);
                          lVar1 = lVar11;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c4dadc();
                          func_0x000107c61180();
                          if (lVar13 != 0) {
                            lVar14 = 0;
                            func_0x0001011f84d0();
                            func_0x000107c613fc();
                            *(long *)(lVar14 + 0x40) = lVar2;
                            *(long *)(lVar14 + 0x48) = lVar3;
                            *(long *)(lVar14 + 0x10) = lVar1;
                            *(long *)(lVar14 + 0x18) = lVar6;
                            *(long *)(lVar14 + 0x20) = lVar7;
                            *(long *)(lVar14 + 0x28) = lVar8;
                            *(long *)(lVar14 + 0x30) = lVar9;
                            *(long *)(lVar14 + 0x38) = lVar5;
                            *(long *)(lVar14 + 0x50) = lVar4;
                            *(long *)(lVar14 + 0x58) = lVar10;
                            *(long *)(lVar14 + 0x60) = lVar11;
                            *(long *)(lVar14 + 0x68) = lVar12;
                            *(long *)(lVar14 + 0x70) = lVar13;
                            uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d674e0);
                            *(long *)(unaff_x20 + _DAT_112d674e0) = lVar14;
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174(lVar6);
                            func_0x000107c61174(lVar7);
                            func_0x000107c61174(lVar8);
                            func_0x000107c61174(lVar9);
                            func_0x000107c61174(lVar10);
                            func_0x000107c61174(lVar11);
                            func_0x000107c61174(lVar12);
                            func_0x000107c61174(lVar13);
                            func_0x000107c6157c(lVar14);
                            func_0x000107c61574(uVar15);
                            FUN_1011f790c();
                            func_0x000107c61170(lVar1);
                            func_0x000107c61170(lVar2);
                            func_0x000107c61170(lVar3);
                            func_0x000107c61170(lVar4);
                            func_0x000107c61170(lVar5);
                            func_0x000107c61170(lVar6);
                            func_0x000107c61170(lVar7);
                            func_0x000107c61170(lVar8);
                            func_0x000107c61170(lVar9);
                            func_0x000107c61170(lVar10);
                            func_0x000107c61170(lVar11);
                            func_0x000107c61170(lVar12);
                            func_0x000107c61170(lVar13);
                            func_0x000107c61574(lVar14);
                            return;
                          }
                          func_0x000107c61170(lVar1);
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar3);
                          func_0x000107c61170(lVar4);
                          func_0x000107c61170(lVar5);
                          func_0x000107c61170(lVar6);
                          func_0x000107c61170(lVar7);
                          func_0x000107c61170(lVar8);
                          func_0x000107c61170(lVar9);
                          func_0x000107c61170(lVar10);
                          func_0x000107c61170(lVar11);
                          lVar1 = lVar12;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011f8e70; end: 1011f8efb; -[SCValdiPublicGroupsShareServiceProvider provide] */

void FUN_1011f8e70(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1011f88fc();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ValdiPublicGroupsShareServiceProvider/SCValdiPublicGroupsShareServiceProvider.swift"
                      ,0x53,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f8efc);
  (*pcVar1)();
}



/* Entry: 1011f8efc; end: 1011f8f2f; -[SCValdiPublicGroupsShareServiceProvider __safeProvide] */

void FUN_1011f8efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011f88fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011f8f30; end: 1011f8f73; -[SCValdiPublicGroupsShareServiceProvider end] */

void FUN_1011f8f30(undefined8 param_1)

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



/* Entry: 1011f8f74; end: 1011f9593;  */

void FUN_1011f8f74(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((param_2 == 0x767265536b636564 && param_3 == -0x13ffffff8c9a9c97) ||
     (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53e98();
  }
  else {
    uVar2 = 0xd000000000000015;
    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e3960)) ||
       (func_0x000107c605b8(0xd000000000000015,0x800000010ef1c6a0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c539c8();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10d2370)) ||
         (func_0x000107c605b8(0xd000000000000026,0x800000010ef2dc90,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53960();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10edd20)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59c2c();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d2340)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef2dcc0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10d8200)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef27e00,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5334c();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
                   (uVar3 = uVar2,
                   func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
                   (uVar3 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c569f0();
                }
                else {
                  uVar3 = 0;
                  if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
                     (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
                     (uVar3 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c536e0();
                  }
                  else {
                    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d3be0)) {
                      uVar3 = 0xd000000000000013;
                      func_0x000107c605b8(0xd000000000000013,0x800000010ef2c420,param_2,param_3,0);
                      if ((uVar3 & 1) == 0) {
                        if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d2320)) {
                          uVar3 = 0xd000000000000017;
                          func_0x000107c605b8(0xd000000000000017,0x800000010ef2dce0,param_2,param_3,
                                              0);
                          if ((uVar3 & 1) == 0) {
                            uVar3 = 0xd000000000000021;
                            if (((param_2 == -0x2fffffffffffffdf) &&
                                (param_3 == -0x7ffffffef10d2300)) ||
                               (func_0x000107c605b8(0xd000000000000021,0x800000010ef2dd00,param_2,
                                                    param_3,0), (uVar3 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c56c0c();
                            }
                            else if (((param_2 == -0x2fffffffffffffee) &&
                                     (param_3 == -0x7ffffffef10d22d0)) ||
                                    (func_0x000107c605b8(0xd000000000000012,0x800000010ef2dd30,
                                                         param_2,param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c58f0c();
                            }
                            else {
                              if ((param_2 != -0x2fffffffffffffea) ||
                                 (param_3 != -0x7ffffffef10d7ec0)) {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd000000000000016,0x800000010ef28140,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  func_0x000107c602fc(0x15);
                                  func_0x000107c6142c(0xe000000000000000);
                                  func_0x000107c5fb78(param_2,param_3);
                                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                      0x800000010ef0fc20,
                                                                                                            
                                                  "ValdiPublicGroupsShareServiceProvider/SCValdiPublicGroupsShareServiceProvider.swift"
                                                  ,0x53,2,0x68,0);
                    /* WARNING: Does not return */
                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f9594);
                                  (*pcVar1)();
                                }
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c53340();
                            }
                            goto LAB_1011f9008;
                          }
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c592b4();
                        goto LAB_1011f9008;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c59c90();
                  }
                }
              }
              goto LAB_1011f9008;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58f18();
        }
      }
    }
  }
LAB_1011f9008:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011f9594; end: 1011f963f; -[SCValdiPublicGroupsShareServiceProvider setValue:forIvarName:] */

void FUN_1011f9594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011f8f74(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011f9640; end: 1011f977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f9640(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d67478,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67480,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67488,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67490,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67498,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d674a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d674a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d674b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d674b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d674c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d674c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d674d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d674d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d674e0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011f9780; end: 1011f979f; -[SCValdiPublicGroupsShareServiceProvider init] */

void FUN_1011f9780(void)

{
  FUN_1011f9640();
  return;
}



/* Entry: 1011f97a0; end: 1011f97d3;  */

void FUN_1011f97a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011f97d4; end: 1011f98cb; -[SCValdiPublicGroupsShareServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f97d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d67478);
  func_0x000107c61610(param_1 + _DAT_112d67480);
  func_0x000107c61610(param_1 + _DAT_112d67488);
  func_0x000107c61610(param_1 + _DAT_112d67490);
  func_0x000107c61610(param_1 + _DAT_112d67498);
  func_0x000107c61610(param_1 + _DAT_112d674a0);
  func_0x000107c61610(param_1 + _DAT_112d674a8);
  func_0x000107c61610(param_1 + _DAT_112d674b0);
  func_0x000107c61610(param_1 + _DAT_112d674b8);
  func_0x000107c61610(param_1 + _DAT_112d674c0);
  func_0x000107c61610(param_1 + _DAT_112d674c8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d674d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d674d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d674e0));
  return;
}



/* Entry: 1011f98cc; end: 1011f98eb;  */

void FUN_1011f98cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d67528);
  return;
}



/* Entry: 1011f98ec; end: 1011f9c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011f98ec(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  code *pcVar10;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar4 = _DAT_112d675e8;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d675f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d675f8) = param_1;
  func_0x000107c61174(param_1);
  lVar4 = param_3;
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + _DAT_112d67600) = lVar4;
    *(undefined8 *)(unaff_x20 + _DAT_112d67608) = param_4;
    *(undefined8 *)(unaff_x20 + _DAT_112d67610) = param_5;
    puVar8 = PTR_s_init_1125d9248;
    func_0x000107c61174();
    func_0x000107c61174(param_5);
    puVar5 = auStack_70;
    func_0x000107c61154(puVar5,puVar8);
    uVar3 = *(undefined8 *)(*(long *)(puVar5 + _DAT_112d675f8) + _DAT_112d676b0);
    uVar1 = ((undefined8 *)(*(long *)(puVar5 + _DAT_112d675f8) + _DAT_112d676b0))[1];
    func_0x000107c61434(uVar1);
    plVar6 = param_2;
    func_0x000107c406bc();
    func_0x000107c61180();
    plVar7 = plVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(plVar6);
    if (plVar7 == (long *)0x0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c6142c(uVar1);
      plVar6 = plVar7;
      func_0x000107c406c4();
      func_0x000107c61180();
      func_0x000107c615e8(plVar7);
      func_0x000107c61170(uVar3);
      func_0x0001000285a8(0x112d67618,&UNK_10d92b8d0);
      func_0x000107c61174();
      plVar7 = plVar6;
      func_0x0001000b637c();
      uVar3 = 1;
      func_0x00010061b458(1);
      func_0x000107c61574();
      FUN_1011f9c14();
      func_0x000104884898();
      func_0x000107c61574(uVar3);
      puVar8 = &UNK_110392e10;
      func_0x000107c613fc(&UNK_110392e10,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,puVar5);
      pcVar2 = FUN_1011f9cf8;
      puVar9 = puVar8;
      (**(code **)(*plVar7 + 0x60))(FUN_1011f9cf8);
      func_0x000107c61574(plVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c614f0(pcVar2);
      uVar3 = *(undefined8 *)(puVar5 + _DAT_112d675e8);
      pcVar10 = *(code **)(puVar9 + 0x18);
      func_0x000107c6157c(uVar3);
      (*pcVar10)();
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      func_0x000107c615e8(pcVar2);
      func_0x000107c61574(uVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
    }
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f9c14);
  (*pcVar2)();
}



/* Entry: 1011f9c14; end: 1011f9c9b;  */

void FUN_1011f9c14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d67620 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001011f9c58(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112d67620 = puVar2;
  return;
}



/* Entry: 1011f9c9c; end: 1011f9cf7;  */

void FUN_1011f9c9c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1011f9d00(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1011f9cf8; end: 1011f9cff;  */

void FUN_1011f9cf8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1011f9d00(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011f9d00; end: 1011fa14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f9d00(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  lVar2 = _DAT_112d676d8;
  lVar17 = *(long *)(unaff_x20 + _DAT_112d675f8);
  func_0x000107c61428(lVar17 + _DAT_112d676d8,auStack_90,0,0);
  puVar5 = (undefined *)(lVar17 + lVar2);
  func_0x000107c61618();
  if (puVar5 == (undefined *)0x0) {
    return;
  }
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStack_b9 = 0;
  puVar6 = &UNK_110392e50;
  func_0x000107c613fc(&UNK_110392e50,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_a8;
  *(long **)(puVar6 + 0x18) = &lStack_98;
  *(undefined8 **)(puVar6 + 0x20) = &uStack_b8;
  *(undefined1 **)(puVar6 + 0x28) = &uStack_b9;
  puVar7 = &UNK_110392e78;
  func_0x000107c613fc(&UNK_110392e78,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1011faa9c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_d0 = FUN_1011faac4;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_1011b6bc0;
  puStack_d8 = &UNK_110392e90;
  ppuVar8 = &puStack_f0;
  puStack_c8 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_c8);
  puVar7 = &UNK_110392ec8;
  func_0x000107c613fc(&UNK_110392ec8,0x28,7);
  *(long **)(puVar7 + 0x10) = &lStack_98;
  *(undefined8 **)(puVar7 + 0x18) = &uStack_b8;
  *(long *)(puVar7 + 0x20) = unaff_x20;
  puVar9 = &UNK_110392ef0;
  func_0x000107c613fc(&UNK_110392ef0,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x1011fab00;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  pcStack_d0 = FUN_1011fab0c;
  puStack_f0 = puVar14;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_1011ac670;
  puStack_d8 = &UNK_110392f08;
  ppuVar10 = &puStack_f0;
  puStack_c8 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_c8;
  func_0x000107c61174();
  func_0x000107c61574(puVar9);
  func_0x000107c4c6d0(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar8);
  lVar4 = lStack_98;
  lVar3 = lStack_a0;
  uVar16 = uStack_a8;
  lVar2 = lStack_b0;
  uVar18 = uStack_b8;
  puVar9 = puVar5;
  if (lStack_98 == 0) goto LAB_1011fa0f8;
  uVar12 = *(undefined8 *)(lVar17 + _DAT_112d676b8);
  uVar1 = ((undefined8 *)(lVar17 + _DAT_112d676b8))[1];
  if (lStack_a0 == 0) {
    func_0x000107c61434(lStack_b0);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(lVar4);
    uVar16 = 0;
    if (lVar2 != 0) goto LAB_1011f9f34;
LAB_1011f9f70:
    uVar18 = 0;
  }
  else {
    func_0x000107c61434(lStack_b0);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar3);
    func_0x000107c61174(lVar4);
    func_0x000107c5fadc(uVar16,lVar3);
    func_0x000107c6142c(lVar3);
    if (lVar2 == 0) goto LAB_1011f9f70;
LAB_1011f9f34:
    func_0x000107c5fadc(uVar18,lVar2);
    func_0x000107c6142c(lVar2);
  }
  puVar11 = PTR_PTR_1126ae6c8;
  func_0x000107c610f8(PTR_PTR_1126ae6c8);
  func_0x000107c5fadc(uVar12,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c48320(puVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  puVar13 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar9 = PTR_PTR_1126b1bb0;
  func_0x000107c61168();
  func_0x000107c3e6c4();
  func_0x000107c61180();
  puVar14 = &UNK_110392e10;
  func_0x000107c613fc(&UNK_110392e10,0x18,7);
  func_0x000107c61614(puVar14 + 0x10,unaff_x20);
  puVar15 = &UNK_110392f40;
  func_0x000107c613fc(&UNK_110392f40,0x28,7);
  *(undefined **)(puVar15 + 0x10) = puVar14;
  *(undefined **)(puVar15 + 0x18) = puVar5;
  *(undefined **)(puVar15 + 0x20) = puVar9;
  pcStack_d0 = FUN_1011fab2c;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  pcStack_e0 = (code *)&UNK_1000f6b44;
  puStack_d8 = &UNK_110392f58;
  ppuVar8 = &puStack_f0;
  puStack_c8 = puVar15;
  func_0x000107c60bc4(ppuVar8);
  puVar14 = puStack_c8;
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar9);
  func_0x000107c61574(puVar14);
  func_0x0001000d76cc(&UNK_10d92b920,ppuVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar13);
LAB_1011fa0f8:
  func_0x000107c61170(puVar9);
  func_0x000107c6142c(lStack_b0);
  func_0x000107c6142c(lStack_a0);
  lVar2 = lStack_98;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar6);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1011fa150; end: 1011fa2d7;  */

void FUN_1011fa150(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,long *param_8,
                  undefined1 *param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  puStack_68 = param_9;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = param_6[1];
  *param_6 = param_1;
  param_6[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar6);
  puVar2 = PTR_PTR_1126ae6c0;
  func_0x000107c61168();
  uVar6 = 0;
  lVar5 = -0x2000000000000000;
  func_0x000107c5fadc(0);
  func_0x000107c5daf4();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = *param_7;
  *param_7 = puVar2;
  func_0x000107c61170(uVar6);
  if (param_3 == 0) {
    lVar1 = param_8[1];
    *param_8 = 0;
    param_8[1] = 0;
    func_0x000107c6142c(lVar1);
  }
  else {
    lVar4 = param_3;
    func_0x00010901d7c4();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    lVar4 = param_8[1];
    *param_8 = lVar3;
    param_8[1] = lVar5;
    func_0x000107c6142c(lVar4);
    func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar7 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    func_0x00010901cdb0(param_3,lVar4);
    func_0x000107c61170(lVar4);
  }
  *puStack_68 = (char)param_3;
  return;
}



/* Entry: 1011fa2d8; end: 1011fa3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fa2d8(long param_1,undefined8 *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  func_0x000107c444fc();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126ae6c0;
    func_0x000107c61168();
    func_0x000107c44550();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar3 = *param_2;
    *param_2 = puVar2;
    func_0x000107c61170(uVar3);
    lVar4 = *(long *)(param_4 + _DAT_112d67600);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar4 = 0;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c42138();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar4 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
    }
    lVar5 = param_3[1];
    *param_3 = lVar4;
    param_3[1] = (long)puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fa3c4);
  (*pcVar1)();
}



/* Entry: 1011fa3c4; end: 1011fa4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fa3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112d67610);
    func_0x000107c61174(uVar3);
    lVar1 = param_1;
    func_0x000107c61174();
    lVar2 = lVar1;
    FUN_1011fa4d8();
    func_0x000107c61174();
    func_0x000104314d44(param_2,param_3,lVar1,2,0,lVar2,0,param_1,0);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112d67608));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1011fa4d8; end: 1011fa8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1011fa4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  double dVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  ppuVar10 = &puStack_b0;
  lVar13 = *(long *)(unaff_x20 + _DAT_112d675f8);
  lVar2 = *(long *)(lVar13 + _DAT_112d676c0);
  func_0x000107c40514(lVar2,param_6,*(undefined8 *)(lVar13 + _DAT_112d676d0));
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar13 + _DAT_112d676c8);
    func_0x000107c61174(uVar3);
    uVar14 = uVar3;
    func_0x000107c44d7c();
    func_0x000107c61180();
    uVar4 = uVar14;
    func_0x000107c51f0c();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    puVar5 = PTR_PTR_1126d4358;
    func_0x000107c610f8(PTR_PTR_1126d4358);
    dVar16 = 0.0;
    func_0x000107c485c0();
    func_0x000107c61170(uVar4);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126d4360;
    func_0x000107c610f8(PTR_PTR_1126d4360);
    func_0x000107c4581c();
    func_0x000107c61170(puVar15);
    puVar15 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar15);
    func_0x000107c609cc(dVar16,param_2,param_3,param_4);
    dVar16 = dVar16 * 0.85;
    puVar7 = PTR_PTR_1126a64f8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c5a588(puVar7);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(dVar16);
    func_0x000107c538a8(puVar7);
    func_0x000107c61170(puVar15);
    func_0x000107c4abfc(puVar7);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d675f0);
    *(undefined **)(unaff_x20 + _DAT_112d675f0) = puVar7;
    func_0x000107c61174();
    func_0x000107c61170(uVar14);
    uVar14 = 0x7fefffffffffffff;
    func_0x000107c5b098(puVar7);
    puVar8 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(dVar16,uVar14);
    puVar9 = &UNK_110392f90;
    func_0x000107c613fc(&UNK_110392f90,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar7;
    *(double *)(puVar9 + 0x18) = dVar16;
    *(undefined8 *)(puVar9 + 0x20) = uVar14;
    puVar15 = &UNK_110392fb8;
    func_0x000107c613fc(&UNK_110392fb8,0x20,7);
    *(undefined8 *)(puVar15 + 0x10) = 0x1011fab38;
    *(undefined **)(puVar15 + 0x18) = puVar9;
    uStack_90 = 0x1011fab68;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_100f9148c;
    puStack_98 = &UNK_110392fd0;
    puStack_88 = puVar15;
    func_0x000107c60bc4(&puStack_b0);
    puVar11 = puStack_88;
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(puVar15);
    func_0x000107c61574(puVar11);
    puVar11 = puVar8;
    func_0x000107c45138(puVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    puVar12 = puVar15;
    func_0x000107c61544(puVar15,"",0x6a,0x90,0x24,1);
    func_0x000107c61574(puVar15);
    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fa8b4);
      (*pcVar1)();
    }
    puVar15 = PTR_PTR_1126b5b40;
    func_0x000107c61168(PTR_PTR_1126b5b40);
    func_0x000107c61174(puVar11);
    func_0x000107c415b8(puVar15);
    func_0x000107c61180();
    func_0x000107c61574(puVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar5);
  }
  return puVar15;
}



/* Entry: 1011fa8b4; end: 1011fa947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fa8b4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*(long *)(unaff_x20 + _DAT_112d675f0) != 0) {
    func_0x000107c50524();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d675f8);
  func_0x000107c50580(*(undefined8 *)(lVar2 + _DAT_112d676c0));
  lVar1 = _DAT_112d676e0;
  func_0x000107c61428(lVar2 + _DAT_112d676e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41b38();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1011fa948; end: 1011fa9a7; -[_TtC33ChatSnapReplyCameraImplementation29ChatSnapReplyCameraEntryPoint init] */

void FUN_1011fa948(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatSnapReplyCameraImplementation.ChatSnapReplyCameraEntryPoint",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fa974);
  (*pcVar1)();
}



/* Entry: 1011fa9a8; end: 1011faa1f; -[_TtC33ChatSnapReplyCameraImplementation29ChatSnapReplyCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011fa9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fa9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fa9c8) */
/* WARNING: Removing unreachable block (ram,0x0001011fa9e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fa9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d675f8));
  return;
}



/* Entry: 1011faa20; end: 1011faa2b;  */

void FUN_1011faa20(void)

{
  return;
}



/* Entry: 1011faa2c; end: 1011faa53; -[_TtC33ChatSnapReplyCameraImplementation29ChatSnapReplyCameraEntryPoint dismissCameraScope:] */

void FUN_1011faa2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011fa8b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011faa54; end: 1011faa7b; -[_TtC33ChatSnapReplyCameraImplementation29ChatSnapReplyCameraEntryPoint captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1011faa54(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011fa8b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011faa7c; end: 1011faac3;  */

void FUN_1011faa7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba2d8);
  return;
}



/* Entry: 1011faac4; end: 1011faae3;  */

void FUN_1011faac4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011faae4; end: 1011fab0b;  */

void FUN_1011faae4(long param_1,long param_2)

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



/* Entry: 1011fab0c; end: 1011fab2b;  */

void FUN_1011fab0c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011fab2c; end: 1011fab6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fab2c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112d67610);
    func_0x000107c61174(uVar6);
    lVar2 = lVar1;
    func_0x000107c61174();
    lVar3 = lVar2;
    FUN_1011fa4d8();
    func_0x000107c61174();
    func_0x000104314d44(uVar4,uVar5,lVar2,2,0,lVar3,0,lVar1,0);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112d67608));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1011fab6c; end: 1011fab77; -[SCChatSnapReplyCameraEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fab6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67658;
  func_0x000107c61428(param_1 + _DAT_112d67658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fab78; end: 1011fab83; -[SCChatSnapReplyCameraEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fab78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67658;
  func_0x000107c61428(param_1 + _DAT_112d67658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fab84; end: 1011fab8f; -[SCChatSnapReplyCameraEntryPoint internalConversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fab84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67660;
  func_0x000107c61428(param_1 + _DAT_112d67660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fab90; end: 1011fab9b; -[SCChatSnapReplyCameraEntryPoint setInternalConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fab90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67660;
  func_0x000107c61428(param_1 + _DAT_112d67660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fab9c; end: 1011faba7; -[SCChatSnapReplyCameraEntryPoint groupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fab9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67668;
  func_0x000107c61428(param_1 + _DAT_112d67668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011faba8; end: 1011fabb3; -[SCChatSnapReplyCameraEntryPoint setGroupServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011faba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67668;
  func_0x000107c61428(param_1 + _DAT_112d67668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fabb4; end: 1011fabbf; -[SCChatSnapReplyCameraEntryPoint chatCameraScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fabb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67670;
  func_0x000107c61428(param_1 + _DAT_112d67670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fabc0; end: 1011fac03;  */

void FUN_1011fabc0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011fac04; end: 1011fac0f; -[SCChatSnapReplyCameraEntryPoint setChatCameraScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fac04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67670;
  func_0x000107c61428(param_1 + _DAT_112d67670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fac10; end: 1011fac63;  */

void FUN_1011fac10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fac64; end: 1011facab; -[SCChatSnapReplyCameraEntryPoint chatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fac64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67678;
  func_0x000107c61428(param_1 + _DAT_112d67678,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011facac; end: 1011fad0f; -[SCChatSnapReplyCameraEntryPoint setChatCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011facac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67678;
  func_0x000107c61428(param_1 + _DAT_112d67678,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


